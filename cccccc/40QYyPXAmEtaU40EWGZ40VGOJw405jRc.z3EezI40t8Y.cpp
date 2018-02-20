
        
        
    {}  // namespace google

    
    
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
    
    #include <sstream>
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
        for (UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++)
    {
        g_driverType = driverTypes[driverTypeIndex];
        hr = D3D11CreateDeviceAndSwapChain(NULL, g_driverType, NULL, createDeviceFlags, featureLevels, numFeatureLevels,
                D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &g_featureLevel, &g_pImmediateContext);
        if (SUCCEEDED(hr))
            break;
    }
    if (FAILED(hr))
        return hr;
    
        cv::Ptr<cv::StereoBM> sm = cv::StereoBM::create(state->numberOfDisparities,
                                                       state->SADWindowSize);
    sm->setPreFilterType(state->preFilterType);
    sm->setPreFilterSize(state->preFilterSize);
    sm->setPreFilterCap(state->preFilterCap);
    sm->setBlockSize(state->SADWindowSize);
    sm->setNumDisparities(state->numberOfDisparities > 0 ? state->numberOfDisparities : 64);
    sm->setTextureThreshold(state->textureThreshold);
    sm->setUniquenessRatio(state->uniquenessRatio);
    sm->setSpeckleRange(state->speckleRange);
    sm->setSpeckleWindowSize(state->speckleWindowSize);
    sm->setDisp12MaxDiff(state->disp12MaxDiff);
    
    void JRodriguesMatlab(const Mat& src, Mat& dst);
    
    CV_EXPORTS_W void divide(InputArray src1, Scalar src2, OutputArray dst, double scale=1, int dtype=-1);
    
        static void CODEGEN_FUNCPTR Switch_BeginTransformFeedback(GLenum primitiveMode)
    {
        BeginTransformFeedback = (PFNBEGINTRANSFORMFEEDBACKPROC)IntGetProcAddress('glBeginTransformFeedback');
        BeginTransformFeedback(primitiveMode);
    }
    
    static void* openclamdfft_check_fn(int ID);
    
    std::vector<float> Blur(const std::vector<float>& image, int w, int h) {
    // This is only made for small sigma, e.g. 1.3.
    static const double kSigma = 1.3;
    std::vector<double> kernel(5);
    for (size_t i = 0; i < kernel.size(); i++) {
      kernel[i] = Normal(1.0 * i - kernel.size() / 2, kSigma);
    }
    }
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_
    
    
    {}  // namespace guetzli

    
    
// Adds APP0 header data.
void AddApp0Data(JPEGData* jpg);
    
      // Special case code with only one value.
  if (total_count == 1) {
    code.bits = 0;
    code.value = symbols[0];
    for (key = 0; key < total_size; ++key) {
      table[key] = code;
    }
    return total_size;
  }
    
    struct HuffmanTableEntry {
  // Initialize the value to an invalid symbol so that we can recognize it
  // when reading the bit stream using a Huffman code with space > 0.
  HuffmanTableEntry() : bits(0), value(0xffff) {}
    }
    
    #ifndef GUETZLI_PREPROCESS_DOWNSAMPLE_H_
#define GUETZLI_PREPROCESS_DOWNSAMPLE_H_