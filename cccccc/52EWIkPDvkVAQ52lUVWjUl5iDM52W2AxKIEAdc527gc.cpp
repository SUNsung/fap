
        
        #include <carotene/definitions.hpp>
#include <stdint.h>
#include <cstddef>
    
    #ifdef CAROTENE_NEON
    
    void add(const Size2D &size,
         const u8 * src0Base, ptrdiff_t src0Stride,
         const u8 * src1Base, ptrdiff_t src1Stride,
         s16 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        void operator() (const uint8x16_t & v_src0, const uint8x16_t & v_src1,
                     uint8x16_t & v_dst) const
    {
        v_dst = vandq_u8(v_src0, v_src1);
    }
    
                ColFilter3x3Canny<L2gradient>( ((s16*)mag_buf[2]) + shxOffset, ((s16*)mag_buf[0]) + shxOffset, ((s16*)mag_buf[1]) + shxOffset,
                                           ((s16*)mag_buf[1]) + dxOffset,  ((s16*)mag_buf[1]) + dyOffset, mag_buf[1] + 1, size.width);
        }
        else
        {
            ColFilter3x3Canny<L2gradient>( ((s16*)mag_buf[0]) + shxOffset, ((s16*)mag_buf[0]) + shxOffset, ((s16*)mag_buf[1]) + shxOffset,
                                           ((s16*)mag_buf[1]) + dxOffset,  ((s16*)mag_buf[1]) + dyOffset, mag_buf[1] + 1, size.width);
        }
    }
    inline void nextRow(const Size2D &size, s32,
                        const u8 *srcBase, ptrdiff_t srcStride,
                        s16*, ptrdiff_t,
                        s16*, ptrdiff_t,
                        const ptrdiff_t &mapstep, s32** mag_buf,
                        size_t i, const s16* &_x, const s16* &_y)
    {
        mag_buf[2][0] = mag_buf[2][size.width+1] = 0;
        if (i < size.height - borderyb)
        {
            const u8* _src = internal::getRowPtr(srcBase, srcStride, i+1);
            //sobelH row #i+1
            sobelRow(_src, ((s16*)mag_buf[2]) + shxOffset, ((s16*)mag_buf[2]) + shyOffset, size.width);
    
    template <>
void rshiftConst<0>(const Size2D &size,
                    const s16 * srcBase, ptrdiff_t srcStride,
                    u8 * dstBase, ptrdiff_t dstStride,
                    CONVERT_POLICY cpolicy)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, s8, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src1]]                             \n\t'
            'vmovl.u16 q3, d4                                      \n\t'
            'vmovl.u16 q4, d5                                      \n\t'
            'vcvt.f32.u32 q5, q3                                   \n\t'
            'vcvt.f32.u32 q6, q4                                   \n\t'
            'vmul.f32 q7, q5, q0                                   \n\t'
            'vmul.f32 q8, q6, q0                                   \n\t'
            'vadd.f32 q9, q7, q1                                   \n\t'
            'vadd.f32 q10, q8, q1                                  \n\t'
            'vcvt.s32.f32 q11, q9                                  \n\t'
            'vcvt.s32.f32 q12, q10                                 \n\t'
            'vqmovn.s32 d26, q11                                   \n\t'
            'vqmovn.s32 d27, q12                                   \n\t'
            'vqmovn.s16 d28, q13                                   \n\t'
            'vst1.8 {d28}, [%[dst]]                                \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i),
              [dst] 'r' (_dst + i + 0),
               'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28'
        );
    }
})
#else
CVTS_FUNC(u16, s8, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline = vld1q_u16(_src + i);
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        int8x8_t vRes = vqmovn_s16(vcombine_s16(vRes1, vRes2));
        vst1_s8(_dst + i, vRes);
    }
})
#endif
    
    /*
The references are:
 * Machine learning for high-speed corner detection,
   E. Rosten and T. Drummond, ECCV 2006
 * Faster and better: A machine learning approach to corner detection
   E. Rosten, R. Porter and T. Drummond, PAMI, 2009
*/
    
                    u16* lidx0 = lane + x - 2*2;
                u16* lidx1 = lane + x - 1*2;
                u16* lidx3 = lane + x + 1*2;
                u16* lidx4 = lane + x + 2*2;
#if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
                __asm__ __volatile__ (
                    'vld2.16 {d0, d2}, [%[in0]]!                              \n\t'
                    'vld2.16 {d1, d3}, [%[in0]]                               \n\t'
                    'vld2.16 {d8, d10}, [%[in4]]!                             \n\t'
                    'vld2.16 {d9, d11}, [%[in4]]                              \n\t'
                    'vadd.i16 q0, q4                                          \n\t'
                    'vadd.i16 q1, q5                                          \n\t'
                    'vld2.16 {d16, d18}, [%[in1]]!                            \n\t'
                    'vld2.16 {d17, d19}, [%[in1]]                             \n\t'
                    'vld2.16 {d8, d10}, [%[in3]]!                             \n\t'
                    'vld2.16 {d9, d11}, [%[in3]]                              \n\t'
                    'vadd.i16 q4, q8                                          \n\t'
                    'vadd.i16 q5, q9                                          \n\t'
                    'vld2.16 {d16, d18}, [%[in2]]                             \n\t'
                    'vld2.16 {d17, d19}, [%[in22]]                            \n\t'
                    'vmla.i16 q0, q4, %q[c4]                                  \n\t'
                    'vmla.i16 q1, q5, %q[c4]                                  \n\t'
                    'vmla.i16 q0, q8, %q[c6]                                  \n\t'
                    'vmla.i16 q1, q9, %q[c6]                                  \n\t'
                    'vrshrn.u16 d8, q0, #8                                    \n\t'
                    'vrshrn.u16 d9, q1, #8                                    \n\t'
                    'vst2.8 {d8-d9}, [%[out]]                                 \n\t'
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
                      [c4] 'w' (vc4u16), [c6] 'w' (vc6u16)
                    : 'd0','d1','d2','d3','d4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23'
                );
#else
                uint16x8x2_t vLane0 = vld2q_u16(lidx0);
                uint16x8x2_t vLane1 = vld2q_u16(lidx1);
                uint16x8x2_t vLane2 = vld2q_u16(lane + x);
                uint16x8x2_t vLane3 = vld2q_u16(lidx3);
                uint16x8x2_t vLane4 = vld2q_u16(lidx4);