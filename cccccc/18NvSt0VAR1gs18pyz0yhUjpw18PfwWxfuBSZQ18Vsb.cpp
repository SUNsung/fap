
        
            void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vabd(v_src0, v_src1);
    }
    
    
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = saturate_cast<T>(alpha*src0[0] + beta*src1[0] + gamma);
    }
};
    
    #define SPLIT_ASM2(sgn, bits) __asm__ ( \
                                          'vld2.' #bits ' {d0, d2}, [%[in0]]            \n\t' \
                                          'vld2.' #bits ' {d1, d3}, [%[in1]]            \n\t' \
                                          'vst1.' #bits ' {d0-d1}, [%[out0]]            \n\t' \
                                          'vst1.' #bits ' {d2-d3}, [%[out1]]            \n\t' \
                                          : \
                                          : [out0] 'r' (dst0 + dj), [out1] 'r' (dst1 + dj), \
                                            [in0]  'r' (src + sj), [in1]  'r' (src + sj + MUL2(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3' \
                                      );
#define SPLIT_ASM3(sgn, bits) __asm__ ( \
                                          'vld3.' #bits ' {d0, d2, d4}, [%[in0]]        \n\t' \
                                          'vld3.' #bits ' {d1, d3, d5}, [%[in1]]        \n\t' \
                                          'vst1.' #bits ' {d0-d1}, [%[out0]]            \n\t' \
                                          'vst1.' #bits ' {d2-d3}, [%[out1]]            \n\t' \
                                          'vst1.' #bits ' {d4-d5}, [%[out2]]            \n\t' \
                                          : \
                                          : [out0] 'r' (dst0 + dj), [out1] 'r' (dst1 + dj), [out2] 'r' (dst2 + dj), \
                                            [in0]  'r' (src + sj), [in1]  'r' (src + sj + MUL3(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5' \
                                      );
#define SPLIT_ASM4(sgn, bits) __asm__ ( \
                                          'vld4.' #bits ' {d0, d2, d4, d6}, [%[in0]]    \n\t' \
                                          'vld4.' #bits ' {d1, d3, d5, d7}, [%[in1]]    \n\t' \
                                          'vst1.' #bits ' {d0-d1}, [%[out0]]            \n\t' \
                                          'vst1.' #bits ' {d2-d3}, [%[out1]]            \n\t' \
                                          'vst1.' #bits ' {d4-d5}, [%[out2]]            \n\t' \
                                          'vst1.' #bits ' {d6-d7}, [%[out3]]            \n\t' \
                                          : \
                                          : [out0] 'r' (dst0 + dj), [out1] 'r' (dst1 + dj), [out2] 'r' (dst2 + dj), [out3] 'r' (dst3 + dj), \
                                            [in0]  'r' (src + sj), [in1]  'r' (src + sj + MUL4(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5','d6','d7' \
                                      );
    
    inline void prefetch(const void *ptr, size_t offset = 32*10)
{
#if defined __GNUC__
    __builtin_prefetch(reinterpret_cast<const char*>(ptr) + offset);
#elif defined _MSC_VER && defined CAROTENE_NEON
    __prefetch(reinterpret_cast<const char*>(ptr) + offset);
#else
    (void)ptr;
    (void)offset;
#endif
}
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s8, s32, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.s8 q3, d4                                       \n\t'
            'vmovl.s8 q4, d5                                       \n\t'
            'vmovl.s16 q5, d6                                      \n\t'
            'vmovl.s16 q6, d7                                      \n\t'
            'vmovl.s16 q7, d8                                      \n\t'
            'vmovl.s16 q8, d9                                      \n\t'
            'vcvt.f32.s32 q9, q5                                   \n\t'
            'vcvt.f32.s32 q10, q6                                  \n\t'
            'vcvt.f32.s32 q11, q7                                  \n\t'
            'vcvt.f32.s32 q12, q8                                  \n\t'
            'vmul.f32 q13, q9, q0                                  \n\t'
            'vmul.f32 q14, q10, q0                                 \n\t'
            'vmul.f32 q15, q11, q0                                 \n\t'
            'vmul.f32 q2, q12, q0                                  \n\t'
            'vadd.f32 q3, q13, q1                                  \n\t'
            'vadd.f32 q4, q14, q1                                  \n\t'
            'vadd.f32 q5, q15, q1                                  \n\t'
            'vadd.f32 q6, q2, q1                                   \n\t'
            'vcvt.s32.f32 q7, q3                                   \n\t'
            'vcvt.s32.f32 q8, q4                                   \n\t'
            'vcvt.s32.f32 q9, q5                                   \n\t'
            'vcvt.s32.f32 q10, q6                                  \n\t'
            'vst1.32 {d14-d15}, [%[dst1]]                          \n\t'
            'vst1.32 {d16-d17}, [%[dst2]]                          \n\t'
            'vst1.32 {d18-d19}, [%[dst3]]                          \n\t'
            'vst1.32 {d20-d21}, [%[dst4]]                          \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              [dst3] 'r' (_dst + i + 8),
              [dst4] 'r' (_dst + i + 12),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10',
            'd11','d12','d13','d14','d15','d16','d17',
            'd18','d19','d20','d21','d22','d23','d24',
            'd25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(s8, s32, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        int8x16_t vline = vld1q_s8(_src + i);
        int16x8_t vline1_s16 = vmovl_s8(vget_low_s8 (vline));
        int16x8_t vline2_s16 = vmovl_s8(vget_high_s8(vline));
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline1_s16));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline1_s16));
        int32x4_t vline3_s32 = vmovl_s16(vget_low_s16 (vline2_s16));
        int32x4_t vline4_s32 = vmovl_s16(vget_high_s16(vline2_s16));
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        float32x4_t vline3_f32 = vcvtq_f32_s32(vline3_s32);
        float32x4_t vline4_f32 = vcvtq_f32_s32(vline4_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        vline3_s32 = vcvtq_s32_f32(vline3_f32);
        vline4_s32 = vcvtq_s32_f32(vline4_f32);
        vst1q_s32(_dst + i + 0,  vline1_s32);
        vst1q_s32(_dst + i + 4,  vline2_s32);
        vst1q_s32(_dst + i + 8,  vline3_s32);
        vst1q_s32(_dst + i + 12, vline4_s32);
    }
})
#endif
    
            vs1 = vqadd_s32(vs1, vs2);
        vs3 = vqadd_s32(vs3, vs4);
        vs1 = vqadd_s32(vs1, vs3);
        int32x2_t vsneg = vqneg_s32(vs1);
    
                    int16x8_t vdot1 = vmull_s8(vget_low_s8(vs1), vget_low_s8(vs2));
                int16x8_t vdot2 = vmull_s8(vget_high_s8(vs1), vget_high_s8(vs2));
    
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
    
    #ifdef CAROTENE_NEON
    
    
    {            prev = vaddw_u16(prev, vdup_lane_u16(el4h, 3));
        }
    
      // Check for a seed candidate using the foreground pixel density. And we
  // return true if the density is below a certain threshold, because characters
  // in equation regions usually are apart with more white spaces.
  bool CheckSeedFgDensity(const float density_th, ColPartition* part);
    
    /**
 * Class to iterate over tesseract page structure, providing access to all
 * levels of the page hierarchy, without including any tesseract headers or
 * having to handle any tesseract structures.
 * WARNING! This class points to data held within the TessBaseAPI class, and
 * therefore can only be used while the TessBaseAPI class still exists and
 * has not been subjected to a call of Init, SetImage, Recognize, Clear, End
 * DetectOS, or anything else that changes the internal PAGE_RES.
 * See apitypes.h for the definition of PageIteratorLevel.
 * See also ResultIterator, derived from PageIterator, which adds in the
 * ability to access OCR output with text-specific methods.
 */
    
    template <typename T> class GenericVector;