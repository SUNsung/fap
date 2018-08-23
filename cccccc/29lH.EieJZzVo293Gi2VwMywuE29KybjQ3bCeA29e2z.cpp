
        
        namespace tensorflow {
    }
    
    
    {
    {}  // namespace python_op_gen_internal
}  // namespace tensorflow
    
      for (const auto& node : item_.MainOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
  for (const auto& node : item_.EnqueueOpsFanin()) {
    PrintNodeInfo(node, properties, debug, os);
  }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    void PyExceptionRegistry::Init(PyObject* code_to_exc_type_map) {
  DCHECK(singleton_ == nullptr) << 'PyExceptionRegistry::Init() already called';
  singleton_ = new PyExceptionRegistry;
    }
    
    // Creates a numpy array in 'ret' and copies the content of tensor 't'
// into 'ret'.
Status ConvertTensorToNdarray(const Tensor& t, PyObject** ret);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n);
    
    // Computes one set of 4x8 products of inputs and weights, adding to result.
// Horizontally adds 4 adjacent results, making 8x32-bit results.
// rep_input is assumed to be an 8x replicated set of 4x8-bit signed integers.
// Note that wi must previously have been re-organized with blocks of 4x8
// weights in contiguous memory.
// ones is a register of 16x16-bit values all equal to 1.
// Note: wi is incremented by the amount of data read.
// weights and reps are scratch registers.
// This function must be inlined with references in order for the compiler to
// correctly use the registers declared in the caller.
inline void MultiplyGroup(const __m256i& rep_input, const __m256i& ones,
                          const int8_t*& wi, __m256i& weights, __m256i& reps,
                          __m256i& result) {
  // Load a 4x8 block of weights.
  weights = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(wi));
  wi += kNumInputsPerRegister;
  // Normalize the signs on rep_input, weights, so weights is always +ve.
  reps = _mm256_sign_epi8(rep_input, weights);
  weights = _mm256_sign_epi8(weights, weights);
  // Multiply 32x8-bit reps by 32x8-bit weights to make 16x16-bit results,
  // with adjacent pairs added.
  weights = _mm256_maddubs_epi16(weights, reps);
  // Multiply 16x16-bit result by 16x16-bit ones to make 8x32-bit results,
  // with  adjacent pairs added. What we really want is a horizontal add of
  // 16+16=32 bit result, but there is no such instruction, so multiply by
  // 16-bit ones instead. It is probably faster than all the sign-extending,
  // permuting and adding that would otherwise be required.
  weights = _mm256_madd_epi16(weights, ones);
  result = _mm256_add_epi32(result, weights);
}
    
    // Returns the null terminated UTF-8 encoded text string for the current
// object at the given level. Use delete [] to free after use.
char* LTRResultIterator::GetUTF8Text(PageIteratorLevel level) const {
  if (it_->word() == nullptr) return nullptr;  // Already at the end!
  STRING text;
  PAGE_RES_IT res_it(*it_);
  WERD_CHOICE* best_choice = res_it.word()->best_choice;
  ASSERT_HOST(best_choice != nullptr);
  if (level == RIL_SYMBOL) {
    text = res_it.word()->BestUTF8(blob_index_, false);
  } else if (level == RIL_WORD) {
    text = best_choice->unichar_string();
  } else {
    bool eol = false;  // end of line?
    bool eop = false;  // end of paragraph?
    do {  // for each paragraph in a block
      do {  // for each text line in a paragraph
        do {  // for each word in a text line
          best_choice = res_it.word()->best_choice;
          ASSERT_HOST(best_choice != nullptr);
          text += best_choice->unichar_string();
          text += ' ';
          res_it.forward();
          eol = res_it.row() != res_it.prev_row();
        } while (!eol);
        text.truncate_at(text.length() - 1);
        text += line_separator_;
        eop = res_it.block() != res_it.prev_block() ||
            res_it.row()->row->para() != res_it.prev_row()->row->para();
      } while (level != RIL_TEXTLINE && !eop);
      if (eop) text += paragraph_separator_;
    } while (level == RIL_BLOCK && res_it.block() == res_it.prev_block());
  }
  int length = text.length() + 1;
  char* result = new char[length];
  strncpy(result, text.string(), length);
  return result;
}
    
    class MutableIterator : public ResultIterator {
 public:
  // See argument descriptions in ResultIterator()
  MutableIterator(PAGE_RES* page_res, Tesseract* tesseract,
                  int scale, int scaled_yres,
                  int rect_left, int rect_top,
                  int rect_width, int rect_height)
      : ResultIterator(
          LTRResultIterator(page_res, tesseract, scale, scaled_yres, rect_left,
                            rect_top, rect_width, rect_height)) {}
  virtual ~MutableIterator() = default;
    }
    
    extern BLOCK_LIST *current_block_list;
extern STRING_VAR_H (editor_image_win_name, 'EditorImage',
'Editor image window name');
extern INT_VAR_H (editor_image_xpos, 590, 'Editor image X Pos');
extern INT_VAR_H (editor_image_ypos, 10, 'Editor image Y Pos');
extern INT_VAR_H (editor_image_height, 680, 'Editor image height');
extern INT_VAR_H (editor_image_width, 655, 'Editor image width');
extern INT_VAR_H (editor_image_word_bb_color, BLUE,
'Word bounding box colour');
extern INT_VAR_H (editor_image_blob_bb_color, YELLOW,
'Blob bounding box colour');
extern INT_VAR_H (editor_image_text_color, WHITE, 'Correct text colour');
extern STRING_VAR_H (editor_dbwin_name, 'EditorDBWin',
'Editor debug window name');
extern INT_VAR_H (editor_dbwin_xpos, 50, 'Editor debug window X Pos');
extern INT_VAR_H (editor_dbwin_ypos, 500, 'Editor debug window Y Pos');
extern INT_VAR_H (editor_dbwin_height, 24, 'Editor debug window height');
extern INT_VAR_H (editor_dbwin_width, 80, 'Editor debug window width');
extern STRING_VAR_H (editor_word_name, 'BlnWords',
'BL normalised word window');
extern INT_VAR_H (editor_word_xpos, 60, 'Word window X Pos');
extern INT_VAR_H (editor_word_ypos, 510, 'Word window Y Pos');
extern INT_VAR_H (editor_word_height, 240, 'Word window height');
extern INT_VAR_H (editor_word_width, 655, 'Word window width');
extern double_VAR_H (editor_smd_scale_factor, 1.0, 'Scaling for smd image');
    
    REGISTER_CPU_OPERATOR(
    SubGradient,
    BinaryElementwiseGradientOp<
        NumericTypes,
        CPUContext,
        SubFunctor<CPUContext>>);
    
    </details>
    
    
    {
    {}}
    
    void APCCollection::Delete(APCHandle* h) {
  assertx(offsetof(APCCollection, m_handle) == 0);
  delete reinterpret_cast<APCCollection*>(h);
}
    
      const char* data = filename.data();
  int data_len = filename.length();
  bool base64 = false;
  if (strncmp(data, 'data:', sizeof('data:') - 1)) {
    return nullptr;
  }
  data += sizeof('data:') - 1;
  data_len -= sizeof('data:') - 1;
    
    //////////////////////////////////////////////////////////////////////
    
    struct RequestCPUTimeoutException : ResourceExceededException {
  RequestCPUTimeoutException(const std::string& msg, const Array& backtrace)
    : ResourceExceededException(msg, backtrace)
  {}
  EXCEPTION_COMMON_IMPL(RequestCPUTimeoutException);
};
    
    
    {} // namespace mars_boost