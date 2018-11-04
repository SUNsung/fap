
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    QT_BEGIN_NAMESPACE
class QPaintEvent;
class QTimer;
QT_END_NAMESPACE
    
        secp256k1_pubkey_load(ctx, &pt, point);
    secp256k1_scalar_set_b32(&s, scalar, &overflow);
    if (overflow || secp256k1_scalar_is_zero(&s)) {
        ret = 0;
    } else {
        unsigned char x[32];
        unsigned char y[1];
        secp256k1_sha256_t sha;
    }
    
    BOOST_AUTO_TEST_CASE(get_difficulty_for_very_high_target)
{
    TestDifficulty(0x12345678, 5913134931067755359633408.0);
}
    
    #include 'univalue.h'
    
    #ifndef CONTENT_NW_SRC_API_BASE_BASE_H_
#define CONTENT_NW_SRC_API_BASE_BASE_H_
    
    #include 'base/strings/string_piece.h'
#include 'v8/include/v8.h'
    
    void Clipboard::CallSync(const std::string& method,
                         const base::ListValue& arguments,
                         base::ListValue* result) {
  if (method == 'Get') {
    result->AppendString(GetText());
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return;
  item->OnClick();
}
    
       bool IsItemForCommandIdDynamic(int command_id) const override;
   base::string16 GetLabelForCommandId(int command_id) const override;
   bool GetIconForCommandId(int command_id,
                                   gfx::Image* icon) const override;
    
    void MenuItem::Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh) {
  if (method == 'SetLabel') {
    std::string label;
    arguments.GetString(0, &label);
    SetLabel(label);
  } else if (method == 'SetIcon') {
    std::string icon;
    arguments.GetString(0, &icon);
    SetIcon(icon);
  } else if (method == 'SetIconIsTemplate') {
    bool isTemplate;
    arguments.GetBoolean(0, &isTemplate);
    SetIconIsTemplate(isTemplate);
  } else if (method == 'SetTooltip') {
    std::string tooltip;
    arguments.GetString(0, &tooltip);
    SetTooltip(tooltip);
  } else if (method == 'SetEnabled') {
    bool enabled = true;
    arguments.GetBoolean(0, &enabled);
    SetEnabled(enabled);
  } else if (method == 'SetChecked') {
    bool checked = false;
    arguments.GetBoolean(0, &checked);
    SetChecked(checked);
  } else if (method == 'SetSubmenu') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    SetSubmenu(object_manager()->GetApiObject<Menu>(object_id));
#if defined(OS_MACOSX)
  } else if (method == 'SetKey') {
    std::string key;
    arguments.GetString(0, &key);
    SetKey(key);
  } else if (method == 'SetModifiers') {
    std::string mod;
    arguments.GetString(0, &mod);
    SetModifiers(mod);
#endif
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    ExtensionFunction::ResponseAction
NwAppQuitFunction::Run() {
  ExtensionService* service =
    ExtensionSystem::Get(browser_context())->extension_service();
  base::MessageLoop::current()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&ExtensionService::TerminateExtension,
                   service->AsWeakPtr(),
                   extension_id()));
  return RespondNow(NoArguments());
}
    
     protected:
  ~NwObjDestroyFunction() override;
    
    
    {    func(size, srcBase, srcStride, dstBase, dstStride);
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)shift;
#endif
}
    
        void operator() (const typename VecTraits<T>::vec128 & v_src0,
                     const typename VecTraits<T>::vec128 & v_src1,
                     typename VecTraits<T>::vec128 & v_dst) const
    {
        typename VecTraits<wtype>::vec128 vrl, vrh;
        wideAdd(vmovl( vget_low(v_src0)), vmovl( vget_low(v_src1)), vrl);
        wideAdd(vmovl(vget_high(v_src0)), vmovl(vget_high(v_src1)), vrh);
    }
    
        void operator() (const uint8x8_t & v_src0, const uint8x8_t & v_src1,
                     uint8x8_t & v_dst) const
    {
        v_dst = vand_u8(v_src0, v_src1);
    }
    
        for (size_t i = 0u; i < size.height; ++i)
    {
        const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t sj = 0u, dj = 0u;
    }
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
                    __asm__ __volatile__ (
                    'vld4.32 {d0, d2, d4, d6}, [%[in0]]!                      \n\t'
                    'vld4.32 {d1, d3, d5, d7}, [%[in0]]                       \n\t'
                    'vld4.32 {d8, d10, d12, d14}, [%[in4]]!                   \n\t'
                    'vld4.32 {d9, d11, d13, d15}, [%[in4]]                    \n\t'
                    'vadd.i32 q0, q4                                          \n\t'
                    'vadd.i32 q1, q5                                          \n\t'
                    'vadd.i32 q2, q6                                          \n\t'
                    'vadd.i32 q3, q7                                          \n\t'
                    'vld4.32 {d16, d18, d20, d22}, [%[in1]]!                  \n\t'
                    'vld4.32 {d17, d19, d21, d23}, [%[in1]]                   \n\t'
                    'vld4.32 {d8, d10, d12, d14}, [%[in3]]!                   \n\t'
                    'vld4.32 {d9, d11, d13, d15}, [%[in3]]                    \n\t'
                    'vadd.i32 q4, q8                                          \n\t'
                    'vadd.i32 q5, q9                                          \n\t'
                    'vadd.i32 q6, q10                                         \n\t'
                    'vadd.i32 q7, q11                                         \n\t'
                    'vld4.32 {d16, d18, d20, d22}, [%[in2],:256]              \n\t'
                    'vld4.32 {d17, d19, d21, d23}, [%[in22],:256]             \n\t'
                    'vmla.i32 q0, q4, %q[c4]                                  \n\t'
                    'vmla.i32 q1, q5, %q[c4]                                  \n\t'
                    'vmla.i32 q2, q6, %q[c4]                                  \n\t'
                    'vmla.i32 q3, q7, %q[c4]                                  \n\t'
                    'vmla.i32 q0, q8, %q[c6]                                  \n\t'
                    'vmla.i32 q1, q9, %q[c6]                                  \n\t'
                    'vmla.i32 q2, q10, %q[c6]                                 \n\t'
                    'vmla.i32 q3, q11, %q[c6]                                 \n\t'
                    'vrshrn.i32 d8, q0, #8                                    \n\t'
                    'vrshrn.i32 d9, q1, #8                                    \n\t'
                    'vrshrn.i32 d10, q2, #8                                   \n\t'
                    'vrshrn.i32 d11, q3, #8                                   \n\t'
                   'vst4.16 {d8-d11}, [%[out]]                                \n\t'
                    : [in0] '=r' (lidx0),
                      [in1] '=r' (lidx1),
                      [in3] '=r' (lidx3),
                      [in4] '=r' (lidx4)
                    : [out] 'r' (dst + x),
                      '0' (lidx0),
                      '1' (lidx1),
                      '2' (lidx3),
                      '3' (lidx4),
                      [in2] 'r' (lane + x),
                      [in22] 'r' (lane + x + 4*2),
                      [c4] 'w' (vc4s32), [c6] 'w' (vc6s32)
                    : 'd0','d1','d2','d3','d4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23'
                );
*/
            for (; x <= colsn - 4; x += 4)
            {
                internal::prefetch(lane + x);
    }
    
    namespace {
    }
    
      // Computes matrix.vector v = Wu.
  // u is of size W.dim2() - 1 and the output v is of size W.dim1().
  // u is imagined to have an extra element at the end with value 1, to
  // implement the bias, but it doesn't actually have it.
  // Computes the base C++ implementation, if there are no partial_funcs_.
  // NOTE: The size of the input vector (u) must be padded using
  // RoundInputs above.
  // The input will be over-read to the extent of the padding. There are no
  // alignment requirements.
  void MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                       const GenericVector<double>& scales, const int8_t* u,
                       double* v) const;
    
    // Computes part of matrix.vector v = Wu. Computes N=16 results.
// For details see PartialMatrixDotVector64 with N=16.
static void PartialMatrixDotVector16(const int8_t* wi, const double* scales,
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
    }
  }
  ExtractResults(result0, shift_id, wi, scales, kNumOutputsPerRegister, v);
  num_out -= kNumOutputsPerRegister;
  ExtractResults(result1, shift_id, wi, scales,
                 std::min(kNumOutputsPerRegister, num_out), v);
}
    
    
    {  /** Pointer to the page_res owned by the API. */
  PAGE_RES* page_res_;
  /** Pointer to the Tesseract object owned by the API. */
  Tesseract* tesseract_;
  /**
   * The iterator to the page_res_. Owned by this ResultIterator.
   * A pointer just to avoid dragging in Tesseract includes.
   */
  PAGE_RES_IT* it_;
  /**
   * The current input WERD being iterated. If there is an output from OCR,
   * then word_ is nullptr. Owned by the API
   */
  WERD* word_;
  /** The length of the current word_. */
  int word_length_;
  /** The current blob index within the word. */
  int blob_index_;
  /**
   * Iterator to the blobs within the word. If nullptr, then we are iterating
   * OCR results in the box_word.
   * Owned by this ResultIterator.
   */
  C_BLOB_IT* cblob_it_;
  /** Control over what to include in bounding boxes. */
  bool include_upper_dots_;
  bool include_lower_dots_;
  /** Parameters saved from the Thresholder. Needed to rebuild coordinates.*/
  int scale_;
  int scaled_yres_;
  int rect_left_;
  int rect_top_;
  int rect_width_;
  int rect_height_;
};
    
    
    {  ScrollView* sv_window_;
};
    
      /// Return true if no image has been set.
  bool IsEmpty() const;
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
    // That gcc wants both of these prototypes seems mysterious. VC, for
// its part, can't decide which to use (another mystery). Matching of
// template overloads: the final frontier.
#ifndef COMPILER_MSVC
template <typename T, size_t N>
char (&ArraySizeHelper(const T (&array)[N]))[N];
#endif
    
        if (family->ArgsCnt() == -1) {
      family->Args({});
    }
    const std::vector<int>* thread_counts =
        (family->thread_counts_.empty()
             ? &one_thread
             : &static_cast<const std::vector<int>&>(family->thread_counts_));
    const size_t family_size = family->args_.size() * thread_counts->size();
    // The benchmark will be run at least 'family_size' different inputs.
    // If 'family_size' is very large warn the user.
    if (family_size > kMaxFamilySize) {
      Err << 'The number of inputs is very large. ' << family->name_
          << ' will be repeated at least ' << family_size << ' times.\n';
    }
    // reserve in the special case the regex '.', since we know the final
    // family size.
    if (spec == '.') benchmarks->reserve(family_size);
    
            return value;
#else // defined(BOOST_ATOMIC_DETAIL_NO_ASM_RAX_RDX_PAIRS)
        storage_type value;
    
        static BOOST_FORCEINLINE storage_type fetch_or(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        switch (order)
        {
        case memory_order_relaxed:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR8_RELAXED(&storage, v));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR8_ACQUIRE(&storage, v));
            break;
        case memory_order_release:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR8_RELEASE(&storage, v));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_OR8(&storage, v));
            break;
        }
        return v;
    }