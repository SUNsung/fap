
        
        class UnicharcompressTest : public ::testing::Test {
 protected:
  // Loads and compresses the given unicharset.
  void LoadUnicharset(const string& unicharset_name) {
    string radical_stroke_file =
        file::JoinPath(FLAGS_test_srcdir,
                       'langdata/radical-stroke.txt');
    string unicharset_file = file::JoinPath(
        FLAGS_test_srcdir, 'testdata',
        unicharset_name);
    string uni_data;
    CHECK_OK(file::GetContents(unicharset_file, &uni_data, file::Defaults()));
    string radical_data;
    CHECK_OK(file::GetContents(radical_stroke_file, &radical_data,
                               file::Defaults()));
    CHECK(
        unicharset_.load_from_inmemory_file(uni_data.data(), uni_data.size()));
    STRING radical_str(radical_data.c_str());
    null_char_ =
        unicharset_.has_special_codes() ? UNICHAR_BROKEN : unicharset_.size();
    compressed_.ComputeEncoding(unicharset_, null_char_, &radical_str);
    // Get the encoding of the null char.
    RecodedCharID code;
    compressed_.EncodeUnichar(null_char_, &code);
    encoded_null_char_ = code(0);
    string output_name = file::JoinPath(
        FLAGS_test_tmpdir, absl::StrCat(unicharset_name, '.encoding.txt'));
    STRING encoding = compressed_.GetEncodingAsString(unicharset_);
    string encoding_str(&encoding[0], encoding.size());
    CHECK_OK(file::SetContents(output_name, encoding_str, file::Defaults()));
    LOG(INFO) << 'Wrote encoding to:' << output_name;
  }
  // Serializes and de-serializes compressed_ over itself.
  void SerializeAndUndo() {
    GenericVector<char> data;
    TFile wfp;
    wfp.OpenWrite(&data);
    EXPECT_TRUE(compressed_.Serialize(&wfp));
    TFile rfp;
    rfp.Open(&data[0], data.size());
    EXPECT_TRUE(compressed_.DeSerialize(&rfp));
  }
  // Returns true if the lang is in CJK.
  bool IsCJKLang(const string& lang) {
    return lang == 'chi_sim' || lang == 'chi_tra' || lang == 'kor' ||
           lang == 'jpn';
  }
  // Returns true if the lang is Indic.
  bool IsIndicLang(const string& lang) {
    return lang == 'asm' || lang == 'ben' || lang == 'bih' || lang == 'hin' ||
           lang == 'mar' || lang == 'nep' || lang == 'san' || lang == 'bod' ||
           lang == 'dzo' || lang == 'guj' || lang == 'kan' || lang == 'mal' ||
           lang == 'ori' || lang == 'pan' || lang == 'sin' || lang == 'tam' ||
           lang == 'tel';
  }
    }
    
    namespace tesseract {
    }
    
    
    {  virtual R Run(A1 a1,A2 a2,A3 a3) {
    if (!del) {
      R result = (object_->*member_)(p1_,p2_,p3_,p4_,a1,a2,a3);
      return result;
    } else {
      R result = (object_->*member_)(p1_,p2_,p3_,p4_,a1,a2,a3);
      //  zero out the pointer to ensure segfault if used again
      member_ = nullptr;
      delete this;
      return result;
    }
  }
};
    
     private:
  // Computes matrix.vector v = Wu.
  // u is of size starts.back()+extents.back() and the output v is of size
  // starts.size().
  // The weight matrix w, is of size starts.size()xMAX(extents)+add_bias_fwd.
  // If add_bias_fwd, an extra element at the end of w[i] is the bias weight
  // and is added to v[i].
  static void MatrixDotVectorInternal(const GENERIC_2D_ARRAY<double>& w,
                                      bool add_bias_fwd, bool skip_bias_back,
                                      const double* u, double* v);
    
    /**********************************************************************
 * complete_edge
 *
 * Complete the edge by cleaning it up.
 **********************************************************************/
    
    // Simple class to encapsulate the computation of an image representing
// local textline density, and function(s) to make use of it.
// The underlying principle is that if you smear connected components
// horizontally (vertically for components on a vertically written textline)
// and count the number of smeared components in an image, then the resulting
// image shows the density of the textlines at each image position.
class TextlineProjection {
 public:
  // The down-scaling factor is computed to obtain a projection resolution
  // of about 100 dpi, whatever the input.
  explicit TextlineProjection(int resolution);
  ~TextlineProjection();
    }
    
    namespace at { namespace native {
    }
    }
    
    
    {  auto dataType = getCudnnDataType(grad_theta_t);
  SpatialTransformerDescriptor desc;
  setSamplerDescriptor(desc, dataType, N, C, H, W);
  AT_CUDNN_CHECK(cudnnSpatialTfGridGeneratorBackward(getCudnnHandle(), desc.desc(),
                                                  grad_grid->data_ptr(),
                                                  grad_theta_t.data_ptr()));
  return grad_theta_t;
}
    
    
    {
    {}}  // namespace native
    
    

    
    // Check arguments to cudnn_relu
void cudnn_relu_check(const at::Tensor& inputs, const at::Tensor& outputs) {
  // Create TensorArgs. These record the names and positions of each tensor as a
  // parameter.
  at::TensorArg arg_inputs(inputs, 'inputs', 0);
  at::TensorArg arg_outputs(outputs, 'outputs', 1);
  // Check arguments. No need to return anything. These functions with throw an
  // error if they fail. Messages are populated using information from
  // TensorArgs.
  at::checkContiguous(cudnn_relu_name, arg_inputs);
  at::checkScalarType(cudnn_relu_name, arg_inputs, at::kFloat);
  at::checkBackend(cudnn_relu_name, arg_inputs.tensor, at::kCUDA);
  at::checkContiguous(cudnn_relu_name, arg_outputs);
  at::checkScalarType(cudnn_relu_name, arg_outputs, at::kFloat);
  at::checkBackend(cudnn_relu_name, arg_outputs.tensor, at::kCUDA);
  at::checkSameSize(cudnn_relu_name, arg_inputs, arg_outputs);
}
    
    
    {
    {      // Solve Ax=b
      const float div = A.determinant();
      EVecXf delta(2);
      float deltaScore;
      const float MAX_DELTA = 1.5;
      if (std::abs(div) < 1e-4f) {
        delta << 0.0f, 0.0f;
        deltaScore = maxScore;
      } else {
        delta = A.ldlt().solve(b);
        // clip delta if going out-of-range of 3x3 grid
        if (std::abs(delta(0)) > MAX_DELTA || std::abs(delta(1)) > MAX_DELTA) {
          float larger_delta = std::max(std::abs(delta(0)), std::abs(delta(1)));
          delta(0) = delta(0) / larger_delta * MAX_DELTA;
          delta(1) = delta(1) / larger_delta * MAX_DELTA;
        }
        deltaScore = fmax(1, 1) - b.transpose() * delta +
            1.0 / 2.0 * delta.transpose() * A * delta;
      }
      assert(std::abs(delta(0)) <= MAX_DELTA);
      assert(std::abs(delta(1)) <= MAX_DELTA);
      // find maximum of detla scores
      keypoints(k, 0 * keypoint_count + j) =
          x0 + (0.5 + maxX + delta(0)) * xLen / heatmap_size;
      keypoints(k, 1 * keypoint_count + j) =
          y0 + (0.5 + maxY + delta(1)) * yLen / heatmap_size;
      keypoints(k, 2 * keypoint_count + j) = deltaScore;
      if (should_output_softmax_) {
        keypoints(k, 3 * keypoint_count + j) = probs(heatmap_index, maxIndex);
      } else {
        keypoints(k, 3 * keypoint_count + j) = .0f;
      }
    }
  }
    
      variable_list apply(variable_list&& inputs) override;
    
      if (x.type().scalarType() != ScalarType::Half) {
    AT_DISPATCH_ALL_TYPES(x.type(), 'foo', [&] {
      scalar_t s = 1;
      std::stringstream ss;
      REQUIRE_NOTHROW(ss << 'hello, dispatch' << x.type().toString() << s << '\n');
      auto data = (scalar_t*)x.data_ptr();
      (void)data;
    });
  }
    
    #define VERIFY_INPUT(var, low, high, code)                              \
  if (var < low || var > high) {                                        \
    fprintf(stderr, 'Invalid %s: %d\n', #var, static_cast<int>(var));   \
    jpg->error = JPEG_INVALID_ ## code;                                 \
        return false;                                                   \
  }
    
      // Choose sharpened, blurred or original per pixel
  std::vector<float> sharpened = Sharpen(yuv[channel], w, h, sigma, amount);
  std::vector<float> blurred = Blur(yuv[channel], w, h);
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      size_t index = y * w + x;
    }
    }
    
    static const int kCrToGreenTable[256] = {
  5990656,  5943854,  5897052,  5850250,  5803448,  5756646,  5709844,  5663042,
  5616240,  5569438,  5522636,  5475834,  5429032,  5382230,  5335428,  5288626,
  5241824,  5195022,  5148220,  5101418,  5054616,  5007814,  4961012,  4914210,
  4867408,  4820606,  4773804,  4727002,  4680200,  4633398,  4586596,  4539794,
  4492992,  4446190,  4399388,  4352586,  4305784,  4258982,  4212180,  4165378,
  4118576,  4071774,  4024972,  3978170,  3931368,  3884566,  3837764,  3790962,
  3744160,  3697358,  3650556,  3603754,  3556952,  3510150,  3463348,  3416546,
  3369744,  3322942,  3276140,  3229338,  3182536,  3135734,  3088932,  3042130,
  2995328,  2948526,  2901724,  2854922,  2808120,  2761318,  2714516,  2667714,
  2620912,  2574110,  2527308,  2480506,  2433704,  2386902,  2340100,  2293298,
  2246496,  2199694,  2152892,  2106090,  2059288,  2012486,  1965684,  1918882,
  1872080,  1825278,  1778476,  1731674,  1684872,  1638070,  1591268,  1544466,
  1497664,  1450862,  1404060,  1357258,  1310456,  1263654,  1216852,  1170050,
  1123248,  1076446,  1029644,   982842,   936040,   889238,   842436,   795634,
   748832,   702030,   655228,   608426,   561624,   514822,   468020,   421218,
   374416,   327614,   280812,   234010,   187208,   140406,    93604,    46802,
        0,   -46802,   -93604,  -140406,  -187208,  -234010,  -280812,  -327614,
  -374416,  -421218,  -468020,  -514822,  -561624,  -608426,  -655228,  -702030,
  -748832,  -795634,  -842436,  -889238,  -936040,  -982842, -1029644, -1076446,
 -1123248, -1170050, -1216852, -1263654, -1310456, -1357258, -1404060, -1450862,
 -1497664, -1544466, -1591268, -1638070, -1684872, -1731674, -1778476, -1825278,
 -1872080, -1918882, -1965684, -2012486, -2059288, -2106090, -2152892, -2199694,
 -2246496, -2293298, -2340100, -2386902, -2433704, -2480506, -2527308, -2574110,
 -2620912, -2667714, -2714516, -2761318, -2808120, -2854922, -2901724, -2948526,
 -2995328, -3042130, -3088932, -3135734, -3182536, -3229338, -3276140, -3322942,
 -3369744, -3416546, -3463348, -3510150, -3556952, -3603754, -3650556, -3697358,
 -3744160, -3790962, -3837764, -3884566, -3931368, -3978170, -4024972, -4071774,
 -4118576, -4165378, -4212180, -4258982, -4305784, -4352586, -4399388, -4446190,
 -4492992, -4539794, -4586596, -4633398, -4680200, -4727002, -4773804, -4820606,
 -4867408, -4914210, -4961012, -5007814, -5054616, -5101418, -5148220, -5195022,
 -5241824, -5288626, -5335428, -5382230, -5429032, -5475834, -5522636, -5569438,
 -5616240, -5663042, -5709844, -5756646, -5803448, -5850250, -5897052, -5943854,
};
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    #endif  // GUETZLI_IDCT_H_

    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    namespace guetzli {
    }