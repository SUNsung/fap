
        
        #endif // BITCOIN_QT_OPENURIDIALOG_H

    
    #endif // BITCOIN_QT_TRAFFICGRAPHWIDGET_H

    
    
    {private:
    Ui::TransactionDescDialog *ui;
};
    
    BOOST_AUTO_TEST_SUITE_END()

    
    REGISTER_CPU_OPERATOR(
    MergeMultiScalarFeatureTensors,
    MergeMultiScalarFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeMultiScalarFeatureTensors)
    .SetDoc(
        'Merge given multi-feature tensors with scalar features into one.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 3 == 0; })
    .NumOutputs(3)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_keys', '.keys')
    .Input(2, 'in1_values', '.values')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values', '.values');
    
      template <typename T>
  bool DoRunWithType() {
    const auto& data = Input(0);
    CAFFE_ENFORCE(data.ndim() == 1, 'data should be 1-D.');
    }
    
    template <typename T, class Context>
class FlexibleTopKOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
    #define COLUMN_DCT8(in) do { \
  LOAD(m0, (in)[0 * 8]);     \
  LOAD(m2, (in)[2 * 8]);     \
  LOAD(m7, (in)[7 * 8]);     \
  LOAD(m5, (in)[5 * 8]);     \
                             \
  BUTTERFLY(m0, m7);         \
  BUTTERFLY(m2, m5);         \
                             \
  LOAD(m3, (in)[3 * 8]);     \
  LOAD(m4, (in)[4 * 8]);     \
  BUTTERFLY(m3, m4);         \
                             \
  LOAD(m6, (in)[6 * 8]);     \
  LOAD(m1, (in)[1 * 8]);     \
  BUTTERFLY(m1, m6);         \
  BUTTERFLY(m7, m4);         \
  BUTTERFLY(m6, m5);         \
                             \
  /* RowIdct() needs 15bits fixed-point input, when the output from   */ \
  /* ColumnIdct() would be 12bits. We are better doing the shift by 3 */ \
  /* now instead of in RowIdct(), because we have some multiplies to  */ \
  /* perform, that can take advantage of the extra 3bits precision.   */ \
  LSHIFT(m4, 3);             \
  LSHIFT(m5, 3);             \
  BUTTERFLY(m4, m5);         \
  STORE16((in)[0 * 8], m5);  \
  STORE16((in)[4 * 8], m4);  \
                             \
  LSHIFT(m7, 3);             \
  LSHIFT(m6, 3);             \
  LSHIFT(m3, 3);             \
  LSHIFT(m0, 3);             \
                             \
  LOAD_CST(m4, kTan2);       \
  m5 = m4;                   \
  MULT(m4, m7);              \
  MULT(m5, m6);              \
  SUB(m4, m6);               \
  ADD(m5, m7);               \
  STORE16((in)[2 * 8], m5);  \
  STORE16((in)[6 * 8], m4);  \
                             \
  /* We should be multiplying m6 by C4 = 1/sqrt(2) here, but we only have */ \
  /* the k2Sqrt2 = 1/(2.sqrt(2)) constant that fits into 15bits. So we    */ \
  /* shift by 4 instead of 3 to compensate for the additional 1/2 factor. */ \
  LOAD_CST(m6, k2Sqrt2);     \
  LSHIFT(m2, 3 + 1);         \
  LSHIFT(m1, 3 + 1);         \
  BUTTERFLY(m1, m2);         \
  MULT(m2, m6);              \
  MULT(m1, m6);              \
  BUTTERFLY(m3, m1);         \
  BUTTERFLY(m0, m2);         \
                             \
  LOAD_CST(m4, kTan3m1);     \
  LOAD_CST(m5, kTan1);       \
  m7 = m3;                   \
  m6 = m1;                   \
  MULT(m3, m4);              \
  MULT(m1, m5);              \
                             \
  ADD(m3, m7);               \
  ADD(m1, m2);               \
  CORRECT_LSB(m1);           \
  CORRECT_LSB(m3);           \
  MULT(m4, m0);              \
  MULT(m5, m2);              \
  ADD(m4, m0);               \
  SUB(m0, m3);               \
  ADD(m7, m4);               \
  SUB(m5, m6);               \
                             \
  STORE16((in)[1 * 8], m1);  \
  STORE16((in)[3 * 8], m0);  \
  STORE16((in)[5 * 8], m7);  \
  STORE16((in)[7 * 8], m5);  \
} while (0)
    
      tmp0 = in[3 * stride];
  tmp1 = kIDCTMatrix[ 3] * tmp0;
  tmp2 = kIDCTMatrix[11] * tmp0;
  tmp3 = kIDCTMatrix[19] * tmp0;
  tmp4 = kIDCTMatrix[27] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    #ifndef GUETZLI_IDCT_H_
#define GUETZLI_IDCT_H_
    
    
    {  // One-byte id of the component.
  int id;
  // Horizontal and vertical sampling factors.
  // In interleaved mode, each minimal coded unit (MCU) has
  // h_samp_factor x v_samp_factor DCT blocks from this component.
  int h_samp_factor;
  int v_samp_factor;
  // The index of the quantization table used for this component.
  size_t quant_idx;
  // The dimensions of the component measured in 8x8 blocks.
  int width_in_blocks;
  int height_in_blocks;
  int num_blocks;
  // The DCT coefficients of this component, laid out block-by-block, divided
  // through the quantization matrix values.
  std::vector<coeff_t> coeffs;
};
    
    #include 'guetzli/output_image.h'
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg);
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);