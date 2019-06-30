
        
        #undef cv_hal_split8u
#define cv_hal_split8u TEGRA_SPLIT
#undef cv_hal_split16u
#define cv_hal_split16u TEGRA_SPLIT
#undef cv_hal_split32s
#define cv_hal_split32s TEGRA_SPLIT
#undef cv_hal_split64s
#define cv_hal_split64s(src, dst, len, cn) TEGRA_SPLIT64S(CAROTENE_NS::s64, src, dst, len, cn)
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        typename internal::VecTraits<T>::vec128 v_min = internal::vminq(v_src0, v_src1);
        typename internal::VecTraits<T>::vec128 v_max = internal::vmaxq(v_src0, v_src1);
        v_dst = internal::vqsubq(v_max, v_min);
    }
    
        size_t maxsize = std::max<size_t>( 1u << 10, size.width * size.height / 10 );
    std::vector<u8*> stack( maxsize );
    u8 **stack_top = &stack[0];
    u8 **stack_bottom = &stack[0];
    
    
    {
    {        for (; dj < size.width; sj += 4, ++dj)
        {
            dst[dj] = src[sj + coi];
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)coi;
#endif
}
    
                uint8x16x2_t v_y = vld2q_u8(srcy + syj);
            uint8x16x4_t v_dst;
            v_dst.val[0] = v_y.val[0];
            v_dst.val[1] = vld1q_u8(srcu + sj);
            v_dst.val[2] = v_y.val[1];
            v_dst.val[3] = vld1q_u8(srcv + sj);
            vst4q_u8(dst + dj, v_dst);
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(u8, f32, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.8 {d0-d1}, [%[src]]                              \n\t'
             'vmovl.u8 q1, d0                                       \n\t'
             'vmovl.u8 q2, d1                                       \n\t'
             'vmovl.u16 q3, d2                                      \n\t'
             'vmovl.u16 q4, d3                                      \n\t'
             'vmovl.u16 q5, d4                                      \n\t'
             'vmovl.u16 q6, d5                                      \n\t'
             'vcvt.f32.u32 q7, q3                                   \n\t'
             'vcvt.f32.u32 q8, q4                                   \n\t'
             'vcvt.f32.u32 q9, q5                                   \n\t'
             'vcvt.f32.u32 q10, q6                                  \n\t'
             'vst1.32 {d14-d15}, [%[dst1]]                          \n\t'
             'vst1.32 {d16-d17}, [%[dst2]]                          \n\t'
             'vst1.32 {d18-d19}, [%[dst3]]                          \n\t'
             'vst1.32 {d20-d21}, [%[dst4]]                          \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst1] 'r' (_dst + i + 0),
               [dst2] 'r' (_dst + i + 4),
               [dst3] 'r' (_dst + i + 8),
               [dst4] 'r' (_dst + i + 12)
             : 'd0','d1','d2','d3','d4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
         );
     }
})
#else
CVT_FUNC(u8, f32, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         uint8x16_t vline_u8 = vld1q_u8(_src + i);
    }
    }
    
    
    {
    {
    {                for (; j < size.width; j++)
                {
                    dst[j] = src[j] >= 0 ? 0 : 255;
                }
            }
        }
        else
        {
            for (size_t i = 0; i < size.height; ++i)
            {
                u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
                std::memset(dst, 0, sizeof(u8) * size.width);
            }
        }
        return;
    }
    
    template <typename T>
inline void inRangeCheck(const Size2D &_size,
                         const T * srcBase, ptrdiff_t srcStride,
                         const T * rng1Base, ptrdiff_t rng1Stride,
                         const T * rng2Base, ptrdiff_t rng2Stride,
                         u8 * dstBase, ptrdiff_t dstStride)
{
    typedef typename internal::VecTraits<T>::vec128 vec128;
    typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
    }
    
      virtual inline const char* type() const { return 'AbsVal'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
     protected:
  // Helper functions that abstract away the column buffer and gemm arguments.
  // The last argument in forward_cpu_gemm is so that we can skip the im2col if
  // we just called weight_cpu_gemm with the same input.
  void forward_cpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_cpu_bias(Dtype* output, const Dtype* bias);
  void backward_cpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* output);
  void weight_cpu_gemm(const Dtype* input, const Dtype* output, Dtype*
      weights);
  void backward_cpu_bias(Dtype* bias, const Dtype* input);
    
    #include 'caffe/layers/deconv_layer.hpp'
    
    namespace caffe {
    }
    
    
//--------------------------------------------------------------------------
//
//   Clone
//
//--------------------------------------------------------------------------
RegexPattern  *RegexPattern::clone() const {
    RegexPattern  *copy = new RegexPattern(*this);
    return copy;
}
    
    ScientificNumberFormatter::ScientificNumberFormatter(
        DecimalFormat *fmtToAdopt, Style *styleToAdopt, UErrorCode &status)
        : fPreExponent(),
          fDecimalFormat(fmtToAdopt),
          fStyle(styleToAdopt),
          fStaticSets(NULL) {
    if (U_FAILURE(status)) {
        return;
    }
    if (fDecimalFormat == NULL || fStyle == NULL) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return;
    }
    const DecimalFormatSymbols *sym = fDecimalFormat->getDecimalFormatSymbols();
    if (sym == NULL) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return;
    }
    getPreExponent(*sym, fPreExponent);
    fStaticSets = DecimalFormatStaticSets::getStaticSets(status);
}
    
    UBool SearchIterator::operator==(const SearchIterator &that) const
{
    if (this == &that) {
        return TRUE;
    }
    return (m_breakiterator_            == that.m_breakiterator_ &&
            m_search_->isCanonicalMatch == that.m_search_->isCanonicalMatch &&
            m_search_->isOverlap        == that.m_search_->isOverlap &&
            m_search_->elementComparisonType == that.m_search_->elementComparisonType &&
            m_search_->matchedIndex     == that.m_search_->matchedIndex &&
            m_search_->matchedLength    == that.m_search_->matchedLength &&
            m_search_->textLength       == that.m_search_->textLength &&
            getOffset() == that.getOffset() &&
            (uprv_memcmp(m_search_->text, that.m_search_->text, 
                              m_search_->textLength * sizeof(UChar)) == 0));
}
    
    //eof

    
    
    {    /**
     * Sets U_ILLEGAL_ARGUMENT_ERROR if the keyword is not a plural form.
     *
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword
     */
    static int32_t indexFromString(const UnicodeString &keyword, UErrorCode &errorCode);
};
    
     private: