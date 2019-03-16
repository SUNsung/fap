
        
            typedef ptrdiff_t  stride_t;
    
    bool isBlur3x3Supported(const Size2D &size, BORDER_MODE border)
{
    return isSupportedConfiguration() && size.width >= 8 &&
        (border == BORDER_MODE_CONSTANT ||
            border == BORDER_MODE_REPLICATE);
}
    
    
    {
    {        for (; dj < size.width; sj += 3, ++dj)
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
    
    #else
    
                vec128 v_src00 = internal::vld1q(src0 + x), v_src01 = internal::vld1q(src0 + x + 16 / sizeof(type));
            vec128 v_src10 = internal::vld1q(src1 + x), v_src11 = internal::vld1q(src1 + x + 16 / sizeof(type));
            uvec128 v_dst0;
            uvec128 v_dst1;
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(f32, u8, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)((1 << 16)*alpha));
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)((1 << 16)*beta));
    register uint32x4_t  vmask  asm ('q2') = vdupq_n_u32(1<<16);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d6-d7}, [%[src1]]                              \n\t'
            'vld1.32 {d8-d9}, [%[src2]]                              \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vmul.f32 q6, q4, q0                                     \n\t'
            'vadd.f32 q7, q5, q1                                     \n\t'
            'vadd.f32 q8, q6, q1                                     \n\t'
            'vcvt.u32.f32 q9, q7                                     \n\t'
            'vcvt.u32.f32 q10, q8                                    \n\t'
            'vbic q11, q2, q6                                        \n\t'
            'vbic q12, q2, q7                                        \n\t'
            'vshr.u32 q13, q11, #16                                  \n\t'
            'vshr.u32 q14, q12, #16                                  \n\t'
            'vqsub.u32 q7, q9, q13                                   \n\t'
            'vqsub.u32 q8, q10, q14                                  \n\t'
            'vqrshrn.u32 d22, q7, #16                                \n\t'
            'vqrshrn.u32 d23, q8, #16                                \n\t'
            'vqmovn.u16 d30, q11                                     \n\t'
            'vst1.8 {d30}, [%[dst]]                                  \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w' (vscale), 'w' (vshift), 'w' (vmask)
            : 'd6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28','d29','d30'
        );
    }
})
#else
CVTS_FUNC(f32, u8, 8,
    float32x4_t vscale = vdupq_n_f32((f32)((1 << 16)*alpha));
    float32x4_t vshift = vdupq_n_f32((f32)((1 << 16)*beta));
    uint32x4_t  vmask  = vdupq_n_u32(1<<16);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i + 0);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
    }
    }
    
    s32 countNonZero(const Size2D &_size,
                 const f64 * srcBase, ptrdiff_t srcStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (srcStride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    size_t roiw8 = size.width & ~7u;
    size_t roiw4 = size.width & ~3u;
    size_t roiw2 = size.width & ~1u;
    uint64x2_t vmask1 = vdupq_n_u64(0x7fFFffFFffFFffFFULL); //will treat denormals as non-zero
    uint32x4_t vc0 = vmovq_n_u32(0);
    }
    
                for( ; j < (s32)size.width - 3; j++, ptr++ )
            {
                s32 v = ptr[0];
                const u8* tab = &threshold_tab[0] - v + 255;
                s32 d = tab[ptr[pixel[0]]] | tab[ptr[pixel[8]]];
    }
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const s16 * src = internal::getRowPtr(srcBase, srcStride, i);
        size_t j = 0;
    }
    
    #ifndef __ANDROID__
    u32 step_base = 16 / sizeof(T), step_base3 = step_base * 3;
    size_t roiw_base = size.width >= (step_base - 1) ? size.width - step_base + 1 : 0;
#endif
    u32 step_tail = 8 / sizeof(T), step_tail3 = step_tail * 3;
    size_t roiw_tail = size.width >= (step_tail - 1) ? size.width - step_tail + 1 : 0;
    
        ptrdiff_t idx_l1 = internal::borderInterpolate(-1, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_l2 = internal::borderInterpolate(-2, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_r1 = internal::borderInterpolate(size.width + 0, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    ptrdiff_t idx_r2 = internal::borderInterpolate(size.width + 1, size.width, borderType, borderMargin.left, borderMargin.right) * cn;
    
    std::string tmppath() {
  // TMPFILE is for manual test execution during which the user will specify
  // the full temp file path using the environmental variable TMPFILE
  const char* tmpfile = getenv('TMPFILE');
  if (tmpfile) {
    return std::string(tmpfile);
  }
    }
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    #endif  // MXNET_GRAPH_ATTR_TYPES_H_

    
    .. note:: `Crop` is deprecated. Use `slice` instead.
    
      for (auto& blob : in_data) {
    ptrs.push_back(reinterpret_cast<void*>(new NDArray(blob, ndctx.dev_id)));
    tags.push_back(0);
  }
  for (auto& blob : out_data) {
    ptrs.push_back(reinterpret_cast<void*>(new NDArray(blob, ndctx.dev_id)));
    tags.push_back(1);
  }
  for (auto& blob : in_grad) {
    NDArray* nd = new NDArray(blob, ndctx.dev_id);
    ptrs.push_back(reinterpret_cast<void*>(nd));
    ndvar.push_back(nd->var());
    tags.push_back(2);
  }
  std::sort(ndvar.begin(), ndvar.end());
  ndvar.resize(std::unique(ndvar.begin(), ndvar.end()) - ndvar.begin());
  for (auto& blob : out_grad) {
    ptrs.push_back(reinterpret_cast<void*>(new NDArray(blob, ndctx.dev_id)));
    tags.push_back(3);
  }
    
    void Node::unsetMeasureFunc(void)
{
    m_measureFunc.reset(nullptr);
    }
    
        Value getFlexBasis(void) const;
    double getFlexGrow(void) const;
    double getFlexShrink(void) const;
    
        method(setExperimentalFeatureEnabled);
    method(setPointScaleFactor);
    
    YG_ENUM_SEQ_DECL(
    YGDirection,
    YGDirectionInherit,
    YGDirectionLTR,
    YGDirectionRTL)
    
        static void destroy(Config * config);
    
        double width;
    double height;
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
      bool hasOnlyOneRef() const {
    return m_refcount == 1;
  }
    
    #include <fb/assert.h>
    
    /// @cond INTERNAL