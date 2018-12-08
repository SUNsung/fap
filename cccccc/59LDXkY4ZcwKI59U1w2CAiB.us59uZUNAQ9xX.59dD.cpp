
        
        
struct MorphCtx
{
    int operation;
    int channels;
    CAROTENE_NS::Size2D ksize;
    int anchor_x, anchor_y;
    CAROTENE_NS::BORDER_MODE border;
    uchar borderValues[4];
};
inline int TEGRA_MORPHINIT(cvhalFilter2D **context, int operation, int src_type, int dst_type, int, int,
                           int kernel_type, uchar *kernel_data, size_t kernel_step, int kernel_width, int kernel_height, int anchor_x, int anchor_y,
                           int borderType, const double borderValue[4], int iterations, bool allowSubmatrix, bool allowInplace)
{
    if(!context || !kernel_data || src_type != dst_type ||
       CV_MAT_DEPTH(src_type) != CV_8U || src_type < 0 || (src_type >> CV_CN_SHIFT) > 3 ||
    }
    
    #ifndef __ANDROID__
        for (; sj < roiw32; sj += 32, syj += 64, dj += 128)
        {
            internal::prefetch(srcy + syj);
            internal::prefetch(srcu + sj);
            internal::prefetch(srcv + sj);
    }
    
    
    {    if (!parametersSupported) {
        std::cerr << 'internal error: attempted to use a function with unsupported parameters' << std::endl;
        std::abort();
    }
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC1(f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vadd.f32 q6, q4, q1                                     \n\t'
            'vadd.f32 q7, q5, q1                                     \n\t'
            'vst1.32 {d12-d13}, [%[dst1]]                            \n\t'
            'vst1.32 {d14-d15}, [%[dst2]]                            \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w' (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19'
        );
    }
})
#else
CVTS_FUNC1(f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i + 0);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
                    uint8x16_t c0 = vmovq_n_u8(0);
                uint8x16_t c1 = vmovq_n_u8(0);
                uint8x16_t max0 = vmovq_n_u8(0);
                uint8x16_t max1 = vmovq_n_u8(0);
                for( k = 0; k < N; k++ )
                {
                    int8x16_t x = vreinterpretq_s8_u8(veorq_u8(vld1q_u8(ptr + pixel[k]), delta));
                    m0 = vcgtq_s8(x, v2);
                    m1 = vcgtq_s8(v1, x);
    }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        s16* dst = internal::getRowPtr(dstBase, dstStride, i);
        //vertical convolution
        ptrdiff_t idx_rm2 = internal::borderInterpolate(i - 2, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rm1 = internal::borderInterpolate(i - 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp1 = internal::borderInterpolate(i + 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp2 = internal::borderInterpolate(i + 2, size.height, borderType, borderMargin.top, borderMargin.bottom);
    }
    
        // the others
    for (size_t i = 1; i < size.height ; ++i)
    {
        src = internal::getRowPtr(srcBase, srcStride, i);
        f64 * prevSqSum = internal::getRowPtr(sqsumBase, sqsumStride, i - 1);
        sqsum = internal::getRowPtr(sqsumBase, sqsumStride, i);
    }
    
    inline float32x4_t vrsqrtq_f32(float32x4_t val)
{
    float32x4_t e = vrsqrteq_f32(val);
    e = vmulq_f32(vrsqrtsq_f32(vmulq_f32(e, e), val), e);
    e = vmulq_f32(vrsqrtsq_f32(vmulq_f32(e, e), val), e);
    return e;
}
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
    
    {  // The name of the source file where the test part took place, or
  // '' if the source file is unknown.
  std::string file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  int line_number_;
  std::string summary_;  // The test failure summary.
  std::string message_;  // The test failure message.
};
    
    // Forward declarations of ValuesIn(), which is implemented in
// include/gtest/gtest-param-test.h.
template <typename ForwardIterator>
internal::ParamGenerator<
  typename ::testing::internal::IteratorTraits<ForwardIterator>::value_type>
ValuesIn(ForwardIterator begin, ForwardIterator end);
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41>
struct Templates41 {
  typedef TemplateSel<T1> Head;
  typedef Templates40<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41> Tail;
};
    
      // Now, we have that n is odd and n >= 3.
    
    typedef void (*Transform1d)(const double* in, int stride, double* out);
    
    
// these are the macro required by COLUMN_*
#define LOAD_CST(dst, src) (dst) = (src)
#define LOAD(dst, src) (dst) = (src)
#define MULT(a, b)  (a) = (((a) * (b)) >> 16)
#define ADD(a, b)   (a) = (a) + (b)
#define SUB(a, b)   (a) = (a) - (b)
#define LSHIFT(a, n) (a) = ((a) << (n))
#define STORE16(a, b) (a) = (b)
#define CORRECT_LSB(a) (a) += 1
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    #include <stdint.h>
    
    // Creates a JPEG from the rgb pixel data. Returns true on success.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg);
    
    inline int ReadUint16(const uint8_t* data, size_t* pos) {
  int v = (data[*pos] << 8) + data[*pos + 1];
  *pos += 2;
  return v;
}