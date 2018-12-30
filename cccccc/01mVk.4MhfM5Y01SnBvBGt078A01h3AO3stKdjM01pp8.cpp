
        
        #ifndef CAROTENE_TYPES_HPP
#define CAROTENE_TYPES_HPP
    
    void add(const Size2D &size,
         const s32 * src0Base, ptrdiff_t src0Stride,
         const s32 * src1Base, ptrdiff_t src1Stride,
         s32 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<s32, s64>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<s32, s64>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
            const f32* ln0 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const f32* ln1 = internal::getRowPtr(srcBase, srcStride, i);
        const f32* ln2 = idx_rp1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp1) : tmp;
    
                int32x4_t normh = vmovl_s16(vget_high_s16(norm));
            int32x4_t norml = vmovl_s16(vget_low_s16(norm));
    
    #ifndef __ANDROID__
        for (; sj < roiw32; sj += 32, syj += 64, dj += 128)
        {
            internal::prefetch(srcy + syj);
            internal::prefetch(srcu + sj);
            internal::prefetch(srcv + sj);
    }
    
    namespace CAROTENE_NS {
    }
    
    
    {
    {}}
    
    s32 countNonZero(const Size2D &_size,
                 const s32 * srcBase, ptrdiff_t srcStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (srcStride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    size_t roiw4 = size.width & ~3u;
    s32 result = 0;
    for(size_t k = 0; k < size.height; ++k)
    {
        const u32* src = (const u32*)internal::getRowPtr( srcBase,  srcStride, k);
        u32 i = 0;
    }
    }
    
                    int8x16_t x0 = vreinterpretq_s8_u8(vsubq_u8(vld1q_u8(ptr + pixel[0]), delta));
                int8x16_t x1 = vreinterpretq_s8_u8(vsubq_u8(vld1q_u8(ptr + pixel[4]), delta));
                int8x16_t x2 = vreinterpretq_s8_u8(vsubq_u8(vld1q_u8(ptr + pixel[8]), delta));
                int8x16_t x3 = vreinterpretq_s8_u8(vsubq_u8(vld1q_u8(ptr + pixel[12]), delta));
    
                // make extrapolation for the first elements
            if (!x)
            {
                // make border
                if (border == BORDER_MODE_CONSTANT)
                    tcurr = v_border_x4;
                else if (border == BORDER_MODE_REPLICATE)
                    tcurr = vdupq_n_u16(vgetq_lane_u16(tnext, 0));
    }
    
    // caclulate sqrt value
    
                t0 = vsubq_s16(vqaddq_s16(t0, t2), tc);
            tc = tcnext;
    
      /// @brief Compute the sum of absolute values (L1 norm) of the data.
  Dtype asum_data() const;
  /// @brief Compute the sum of absolute values (L1 norm) of the diff.
  Dtype asum_diff() const;
  /// @brief Compute the sum of squares (L2 norm squared) of the data.
  Dtype sumsq_data() const;
  /// @brief Compute the sum of squares (L2 norm squared) of the diff.
  Dtype sumsq_diff() const;
    
    
    {}  // namespace caffe
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
      // algorithms for forward and backwards convolutions
  cudnnConvolutionFwdAlgo_t *fwd_algo_;
  cudnnConvolutionBwdFilterAlgo_t *bwd_filter_algo_;
  cudnnConvolutionBwdDataAlgo_t *bwd_data_algo_;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      // Gets a VC object identified by its ID.
  static ParamContent* GetParamContentById(int id);
    
    
    {  // Do sanity checks and minor fixes on best_choice.
  if (word->best_choice->length() > word_length) {
    word->best_choice->make_bad();  // should never happen
    tprintf('recog_word: Discarded long string \'%s\''
            ' (%d characters vs %d blobs)\n',
            word->best_choice->unichar_string().string(),
            word->best_choice->length(), word_length);
    tprintf('Word is at:');
    word->word->bounding_box().print();
  }
  if (word->best_choice->length() < word_length) {
    UNICHAR_ID space_id = unicharset.unichar_to_id(' ');
    while (word->best_choice->length() < word_length) {
      word->best_choice->append_unichar_id(space_id, 1, 0.0,
                                           word->best_choice->certainty());
    }
  }
}
    
      /// Common initialization shared between SetImage methods.
  virtual void Init();
    
    // Inserts a new box before the given index.
// Recomputes the bounding box.
void BoxWord::InsertBox(int index, const TBOX& box) {
  if (index < length_)
    boxes_.insert(box, index);
  else
    boxes_.push_back(box);
  length_ = boxes_.size();
  ComputeBoundingBox();
}
    
    // To write value-parameterized tests, first you should define a fixture
// class. It is usually derived from testing::TestWithParam<T> (see below for
// another inheritance scheme that's sometimes useful in more complicated
// class hierarchies), where the type of your parameter values.
// TestWithParam<T> is itself derived from testing::Test. T can be any
// copyable type. If it's a raw pointer, you are responsible for managing the
// lifespan of the pointed values.
    
    
    {  // The name of the source file where the test part took place, or
  // '' if the source file is unknown.
  std::string file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  int line_number_;
  std::string summary_;  // The test failure summary.
  std::string message_;  // The test failure message.
};
    
      // Returns a copy of the FilePath with the directory part removed.
  // Example: FilePath('path/to/file').RemoveDirectoryName() returns
  // FilePath('file'). If there is no directory part ('just_a_file'), it returns
  // the FilePath unmodified. If there is no file part ('just_a_dir/') it
  // returns an empty FilePath ('').
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveDirectoryName() const;
    
      CartesianProductGenerator5(const ParamGenerator<T1>& g1,
      const ParamGenerator<T2>& g2, const ParamGenerator<T3>& g3,
      const ParamGenerator<T4>& g4, const ParamGenerator<T5>& g5)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5) {}
  virtual ~CartesianProductGenerator5() {}
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5>
struct Templates5 {
  typedef TemplateSel<T1> Head;
  typedef Templates4<T2, T3, T4, T5> Tail;
};