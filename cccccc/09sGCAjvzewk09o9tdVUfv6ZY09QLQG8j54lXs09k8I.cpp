
        
        
    {    QString appName;
    QIcon appIcon;
    QIcon trayAndWindowIcon;
    QString titleAddText;
};
    
    private:
    reverse_lock(reverse_lock const&);
    reverse_lock& operator=(reverse_lock const&);
    
    
    {    secp256k1_ecdsa_recoverable_signature_load(ctx, &r, &s, &recid, sigin);
    secp256k1_ecdsa_signature_save(sig, &r, &s);
    return 1;
}
    
    #define SRC_ARG1 ST * src1_data_, size_t src1_step_,
#define SRC_STORE1 src1_data(src1_data_), src1_step(src1_step_),
#define SRC_VAR1 ST * src1_data; \
                 size_t src1_step;
#define SRC_ARG2 ST * src1_data_, size_t src1_step_, \
                 ST * src2_data_, size_t src2_step_,
#define SRC_STORE2 src1_data(src1_data_), src1_step(src1_step_), \
                   src2_data(src2_data_), src2_step(src2_step_),
#define SRC_VAR2 ST * src1_data; \
                 size_t src1_step; \
                 ST * src2_data; \
                 size_t src2_step;
    
    #else
    
        size_t i = 0;
    f32* dsta = internal::getRowPtr(dstBase, dstStride, 0);
    for (; i < size.height-1; i+=2)
    {
        //vertical convolution
        ptrdiff_t idx_rm1 = internal::borderInterpolate(i - 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp2 = internal::borderInterpolate(i + 2, size.height, borderType, borderMargin.top, borderMargin.bottom);
    }
    
    void combineYUYV(const Size2D &size,
                 const u8 * srcyBase, ptrdiff_t srcyStride,
                 const u8 * srcuBase, ptrdiff_t srcuStride,
                 const u8 * srcvBase, ptrdiff_t srcvStride,
                 u8 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0, const typename internal::VecTraits<T>::vec128 & v_src1,
              typename internal::VecTraits<T>::unsign::vec128 & v_dst) const
    {
        v_dst = internal::vcgtq(v_src0, v_src1);
    }
    
    
    {                v_dst1 = vmlal_n_s16(v_dst1, vget_high_s16(t0_16s), kernelBase[2]);
                v_dst1 = vmlal_n_s16(v_dst1, vget_high_s16(t1_16s), kernelBase[1]);
                v_dst1 = vmlal_n_s16(v_dst1, vget_high_s16(t2_16s), kernelBase[0]);
            }
    
                vst1_u8((u8 *)&mask, vmovn_u16(vcombine_u16(vmovn_u32(v_mask0), vmovn_u32(v_mask1))));
    
                if(x) {
                xx0 = xx1;
                xx1 = xx2;
            } else {
                xx1 = x1;
                // make border
                    if (border == BORDER_MODE_REPLICATE || border == BORDER_MODE_REFLECT)
                    {
                        xx1 = vset_lane_u8(vget_lane_u8(x1, 0),x1, 7);
                    }
                    else if (border == BORDER_MODE_CONSTANT)
                    {
                        xx1 = vset_lane_u8(borderValue, x1, 7);
                    }
                    else if (border == BORDER_MODE_REFLECT101)
                    {
                        xx1 = vset_lane_u8(vget_lane_u8(x1, 1),x1, 7);
                    }
            }
            xx2 = x1;