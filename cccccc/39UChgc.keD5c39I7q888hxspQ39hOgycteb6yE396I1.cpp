
        
        // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel AVX intrinsics to access the SIMD instruction set.
double DotProductAVX(const double* u, const double* v, int n) {
  int max_offset = n - 4;
  int offset = 0;
  // Accumulate a set of 4 sums in sum, by loading pairs of 4 values from u and
  // v, and multiplying them together in parallel.
  __m256d sum = _mm256_setzero_pd();
  if (offset <= max_offset) {
    offset = 4;
    // Aligned load is reputedly faster but requires 32 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 31) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 31) == 0) {
      // Use aligned load.
      __m256d floats1 = _mm256_load_pd(u);
      __m256d floats2 = _mm256_load_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_load_pd(u + offset);
        floats2 = _mm256_load_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    } else {
      // Use unaligned load.
      __m256d floats1 = _mm256_loadu_pd(u);
      __m256d floats2 = _mm256_loadu_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_loadu_pd(u + offset);
        floats2 = _mm256_loadu_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    }
  }
  // Add the 4 product sums together horizontally. Not so easy as with sse, as
  // there is no add across the upper/lower 128 bit boundary, so permute to
  // move the upper 128 bits to lower in another register.
  __m256d sum2 = _mm256_permute2f128_pd(sum, sum, 1);
  sum = _mm256_hadd_pd(sum, sum2);
  sum = _mm256_hadd_pd(sum, sum);
  double result;
  // _mm256_extract_f64 doesn't exist, but resist the temptation to use an sse
  // instruction, as that introduces a 70 cycle delay. All this casting is to
  // fool the intrinsics into thinking we are extracting the bottom int64.
  auto cast_sum = _mm256_castpd_si256(sum);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored '-Wstrict-aliasing'
  *(reinterpret_cast<int64_t*>(&result)) =
#if defined(_WIN32) || defined(__i386__)
      // This is a very simple workaround that is activated
      // for all platforms that do not have _mm256_extract_epi64.
      // _mm256_extract_epi64(X, Y) == ((uint64_t*)&X)[Y]
      ((uint64_t*)&cast_sum)[0]
#else
      _mm256_extract_epi64(cast_sum, 0)
#endif
      ;
#pragma GCC diagnostic pop
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    // Computes part of matrix.vector v = Wu. Computes N=32 results.
// For details see PartialMatrixDotVector64 with N=32.
static void PartialMatrixDotVector32(const int8_t* wi, const double* scales,
                                     const int8_t* u, int num_in, int num_out,
                                     double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  __m256i result1 = _mm256_setzero_si256();
  __m256i result2 = _mm256_setzero_si256();
  __m256i result3 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result1);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result2);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result3);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result1, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result2, shift_id, wi, scales, kNumOutputsPerRegister, v);
  num_out -= kNumOutputsPerRegister * 3;
  ExtractResults(result3, shift_id, wi, scales,
                 std::min(kNumOutputsPerRegister, num_out), v);
}
    
      /**
   * Returns information about the current paragraph, if available.
   *
   *   justification -
   *     LEFT if ragged right, or fully justified and script is left-to-right.
   *     RIGHT if ragged left, or fully justified and script is right-to-left.
   *     unknown if it looks like source code or we have very few lines.
   *   is_list_item -
   *     true if we believe this is a member of an ordered or unordered list.
   *   is_crown -
   *     true if the first line of the paragraph is aligned with the other
   *     lines of the paragraph even though subsequent paragraphs have first
   *     line indents.  This typically indicates that this is the continuation
   *     of a previous paragraph or that it is the very first paragraph in
   *     the chapter.
   *   first_line_indent -
   *     For LEFT aligned paragraphs, the first text line of paragraphs of
   *     this kind are indented this many pixels from the left edge of the
   *     rest of the paragraph.
   *     for RIGHT aligned paragraphs, the first text line of paragraphs of
   *     this kind are indented this many pixels from the right edge of the
   *     rest of the paragraph.
   *     NOTE 1: This value may be negative.
   *     NOTE 2: if *is_crown == true, the first line of this paragraph is
   *             actually flush, and first_line_indent is set to the 'common'
   *             first_line_indent for subsequent paragraphs in this block
   *             of text.
   */
  void ParagraphInfo(tesseract::ParagraphJustification *justification,
                     bool *is_list_item,
                     bool *is_crown,
                     int *first_line_indent) const;
    
      /// Threshold the source image as efficiently as possible to the output Pix.
  /// Creates a Pix and sets pix to point to the resulting pointer.
  /// Caller must use pixDestroy to free the created Pix.
  /// Returns false on error.
  virtual bool ThresholdToPix(PageSegMode pageseg_mode, Pix** pix);
    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
    
    {  // This should work.
  ASSERT_TRUE(doc.HasMember('custom_fake'));
  EXPECT_TRUE(doc['custom_fake'].IsNumber());
  EXPECT_EQ(1U, doc['custom_fake'].GetUint());
  EXPECT_FALSE(Flag::getValue('custom_fake').empty());
}
    
      fpack.platform_ = '';
  EXPECT_TRUE(fpack.checkPlatform());
    
    
    {
    {
    {        SQL sql(query);
        if (!sql.getStatus().ok()) {
          return Status(1, 'Distributed discovery query has an SQL error');
        }
        if (sql.rows().size() > 0) {
          queries_to_run.insert(name);
        }
      }
    }
  }
    
        Row r;
    r['example_text'] = 'example';
    r['example_integer'] = INTEGER(1);
    
    #define VLOG(x)                                                               \
  (::benchmark::internal::GetLogInstanceForLevel(x) << '-- LOG(' << x << '):' \
                                                                         ' ')