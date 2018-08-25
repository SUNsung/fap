
        
        #undef cv_hal_split8u
#define cv_hal_split8u TEGRA_SPLIT
#undef cv_hal_split16u
#define cv_hal_split16u TEGRA_SPLIT
#undef cv_hal_split32s
#define cv_hal_split32s TEGRA_SPLIT
#undef cv_hal_split64s
#define cv_hal_split64s(src, dst, len, cn) TEGRA_SPLIT64S(CAROTENE_NS::s64, src, dst, len, cn)
    
    
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
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
    
            for (; j < roiw32; j += 32)
        {
            internal::prefetch(src + j);
            uint8x16_t v_src0 = vld1q_u8(src + j), v_src1 = vld1q_u8(src + j + 16);
            uint8x16_t v_dst0 = vmvnq_u8(v_src0), v_dst1 = vmvnq_u8(v_src1);
            vst1q_u8(dst + j, v_dst0);
            vst1q_u8(dst + j + 16, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            uint8x8_t v_src = vld1_u8(src + j);
            uint8x8_t v_dst = vmvn_u8(v_src);
            vst1_u8(dst + j, v_dst);
        }
    
    #define MERGE_ASM2(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vst2.' #bits ' {d0, d2}, [%[out0]]           \n\t' \
                                          'vst2.' #bits ' {d1, d3}, [%[out1]]           \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL2(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3' \
                                      );
#define MERGE_ASM3(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vst3.' #bits ' {d0, d2, d4}, [%[out0]]       \n\t' \
                                          'vst3.' #bits ' {d1, d3, d5}, [%[out1]]       \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL3(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5' \
                                      );
#define MERGE_ASM4(sgn, bits) __asm__ ( \
                                          'vld1.' #bits ' {d0-d1}, [%[in0]]             \n\t' \
                                          'vld1.' #bits ' {d2-d3}, [%[in1]]             \n\t' \
                                          'vld1.' #bits ' {d4-d5}, [%[in2]]             \n\t' \
                                          'vld1.' #bits ' {d6-d7}, [%[in3]]             \n\t' \
                                          'vst4.' #bits ' {d0, d2, d4, d6}, [%[out0]]   \n\t' \
                                          'vst4.' #bits ' {d1, d3, d5, d7}, [%[out1]]   \n\t' \
                                          : \
                                          : [in0] 'r' (src0 + sj), [in1] 'r' (src1 + sj), [in2] 'r' (src2 + sj), [in3] 'r' (src3 + sj), \
                                            [out0]  'r' (dst + dj), [out1]  'r' (dst + dj + MUL4(8)/sizeof(sgn##bits)) \
                                          : 'd0','d1','d2','d3','d4','d5','d6','d7' \
                                      );
    
    
    {            vst1q_s16(dst + j, v_dst0);
            vst1q_s16(dst + j + 8, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            int16x8_t v_dst = vreinterpretq_s16_u16(vmovl_u8(vld1_u8(src + j)));
            vst1q_s16(dst + j, v_dst);
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
    
    bool isConvolutionSupported(const Size2D &size, const Size2D &ksize,
                            BORDER_MODE border)
{
    return isSupportedConfiguration() && size.width >= 8 &&
        (border == BORDER_MODE_CONSTANT ||
            border == BORDER_MODE_REPLICATE) &&
        (ksize.width == 3) && (ksize.height == 3);
}
    
    namespace tesseract {
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
    
    
    {  return count;
}
    
      // Check if part from seed2 label: with low math density and left indented. We
  // are using two checks:
  // 1. If its left is aligned with any coordinates in indented_texts_left,
  // which we assume have been sorted.
  // 2. If its foreground density is over foreground_density_th.
  bool CheckForSeed2(
      const GenericVector<int>& indented_texts_left,
      const float foreground_density_th,
      ColPartition* part);
    
    void LTRResultIterator::RowAttributes(float* row_height, float* descenders,
                                      float* ascenders) const {
  *row_height = it_->row()->row->x_height() + it_->row()->row->ascenders() -
                it_->row()->row->descenders();
  *descenders = it_->row()->row->descenders();
  *ascenders = it_->row()->row->ascenders();
}
    
    #ifndef TESSERACT_CCMAIN_MUTABLEITERATOR_H_
#define TESSERACT_CCMAIN_MUTABLEITERATOR_H_
    
    // Given a MutableIterator to the start of a block, run DetectParagraphs on
// that block and commit the results to the underlying ROW and BLOCK structs,
// saving the ParagraphModels in models.  Caller owns the models.
// We use unicharset during the function to answer questions such as 'is the
// first letter of this word upper case?'
void DetectParagraphs(int debug_level,
                      bool after_text_recognition,
                      const MutableIterator *block_start,
                      GenericVector<ParagraphModel *> *models);
    
    namespace tesseract {
  class Tesseract;
}