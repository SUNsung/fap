
        
          // Next, add each of the requirements (mapped from the requirement's
  // interface types into the abstract type parameters).
  for (auto &rawReq : reqSig->getRequirements()) {
    if (auto req = rawReq.subst(reqToSyntheticEnvMap))
      builder.addRequirement(*req, source, conformanceDC->getParentModule());
  }
    
    void CacheImpl::destroy() {
  removeAll();
  delete static_cast<DefaultCache*>(Impl);
}
    
    % for start_code_point, end_code_point, value in break_table.property_value_ranges:
%   if start_code_point == 0:
  if (C <= ${end_code_point})
%   else:
  if (C >= ${start_code_point} && C <= ${end_code_point})
%   end
    return GraphemeClusterBreakProperty::${value};
% end
    
      if (auto ptr = type->getAs<clang::PointerType>()) {
    auto pointee = ptr->getPointeeType();
    }
    
      Optional<unsigned> selfIndex = None;
    
    void ModuleWrapJobAction::anchor() {}
    
    class LLVM_LIBRARY_VISIBILITY GenericUnix : public ToolChain {
protected:
  InvocationInfo constructInvocation(const InterpretJobAction &job,
                                     const JobContext &context) const override;
  InvocationInfo constructInvocation(const AutolinkExtractJobAction &job,
                                     const JobContext &context) const override;
    }
    
      if (FilelistPathArg ? readInputFilesFromFilelist()
                      : readInputFilesFromCommandLine())
    return None;
  Optional<std::set<StringRef>> primaryFiles = readPrimaryFiles();
  if (!primaryFiles)
    return None;
    
    #define TEGRA_MUL(src1, sz1, src2, sz2, dst, sz, w, h, scale) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::mul(CAROTENE_NS::Size2D(w, h), \
                     src1, sz1, \
                     src2, sz2, \
                     dst, sz, \
                     scale, \
                     CAROTENE_NS::CONVERT_POLICY_SATURATE), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        bool isGaussianPyramidDownU8Supported(const Size2D &srcSize, const Size2D &dstSize, u8 cn);
    void gaussianPyramidDown(const Size2D &srcSize,
                             const u8 *srcBase, ptrdiff_t srcStride,
                             const Size2D &dstSize,
                             u8 *dstBase, ptrdiff_t dstStride, u8 cn);
    
    void bitwiseNot(const Size2D &size,
                const u8 *srcBase, ptrdiff_t srcStride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        size_t i = 0;
    s32* dsta = internal::getRowPtr(dstBase, dstStride, 0);
    for (; i < size.height-1; i+=2)
    {
        //vertical convolution
        ptrdiff_t idx_rm1 = internal::borderInterpolate(i - 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp2 = internal::borderInterpolate(i + 2, size.height, borderType, borderMargin.top, borderMargin.bottom);
    }
    
    
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
    
    
    {    func(size, srcBase, srcStride, dstBase, dstStride, cpolicy);
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)shift;
    (void)cpolicy;
#endif
}
    
    
    {        for (; i < size.width; i++)
            result += (src[i] != 0)?1:0;
        if (result < 0)//saturate in case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
    }
    return result;
#else
    (void)_size;
    (void)srcBase;
    (void)srcStride;
    
    f64 dotProduct(const Size2D &_size,
               const s8 * src0Base, ptrdiff_t src0Stride,
               const s8 * src1Base, ptrdiff_t src1Stride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    Size2D size(_size);
    if (src0Stride == src1Stride &&
        src0Stride == (ptrdiff_t)(size.width))
    {
        size.width *= size.height;
        size.height = 1;
    }
    }
    
                // combine 3 'shifted' vectors
            t0 = vextq_u16(tprev, tcurr, 7);
            t1 = tcurr;
            t2 = vextq_u16(tcurr, tnext, 1);
    
    template <typename T, int elsize> struct vtail
{
    static inline void inRange(const T *, const T *, const T *,
                               u8 *, size_t &, size_t)
    {
        //do nothing since there couldn't be enough data
    }
};
template <typename T> struct vtail<T, 2>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        //There no more than 15 elements in the tail, so we could handle 8 element vector only once
        if( x + 8 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1(dst + x, internal::vmovn(vd));
            x+=8;
        }
    }
};
template <typename T> struct vtail<T, 1>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<T>::vec64 vec64;
        typedef typename internal::VecTraits<T>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1q(dst + x, vd);
            x+=16;
        }
        if( x + 8 < width)
        {
             vec64  vs = internal::vld1( src + x);
             vec64 vr1 = internal::vld1(rng1 + x);
             vec64 vr2 = internal::vld1(rng2 + x);
            uvec64  vd = internal::vand(internal::vcge(vs, vr1), internal::vcge(vr2, vs));
            internal::vst1(dst + x, vd);
            x+=8;
        }
    }
};