
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // During the first Compute(), resource is either created or looked up using
  // shared_name. In the latter case, the resource found should be verified if
  // it is compatible with this op's configuration. The verification may fail in
  // cases such as two graphs asking queues of the same shared name to have
  // inconsistent capacities.
  virtual Status VerifyResource(T* resource) { return Status::OK(); }
    
    
    {
    {}  // namespace functor
}  // namespace tensorflow
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        NodeDef* mul_node1 = graph_def.add_node();
    mul_node1->set_name('mul_node1');
    mul_node1->set_op('Mul');
    mul_node1->set_device('//cpu:0');
    mul_node1->add_input('add_node2');
    mul_node1->add_input('add_node3');
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
            static __device__ __forceinline__ int syncthreadsOr(int pred)
        {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ < 200)
                // just campilation stab
                return 0;
#else
                return __syncthreads_or(pred);
#endif
        }
    
    int lapack_LU32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, int* info);
int lapack_LU64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, int* info);
int lapack_Cholesky32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, bool* info);
int lapack_Cholesky64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, bool* info);
int lapack_SVD32f(float* a, size_t a_step, float* w, float* u, size_t u_step, float* vt, size_t v_step, int m, int n, int flags);
int lapack_SVD64f(double* a, size_t a_step, double* w, double* u, size_t u_step, double* vt, size_t v_step, int m, int n, int flags);
int lapack_QR32f(float* src1, size_t src1_step, int m, int n, int k, float* src2, size_t src2_step, float* dst, int* info);
int lapack_QR64f(double* src1, size_t src1_step, int m, int n, int k, double* src2, size_t src2_step, double* dst, int* info);
int lapack_gemm32f(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64f(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm32fc(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64fc(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
    
    #ifdef HAVE_CLAMDFFT
    
      // Expects the appropriate results from the compressed_  unicharset_.
  void ExpectCorrect(const string& lang) {
    // Count the number of times each code is used in each element of
    // RecodedCharID.
    RecodedCharID zeros;
    for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) zeros.Set(i, 0);
    int code_range = compressed_.code_range();
    std::vector<RecodedCharID> times_seen(code_range, zeros);
    for (int u = 0; u <= unicharset_.size(); ++u) {
      if (u != UNICHAR_SPACE && u != null_char_ &&
          (u == unicharset_.size() || (unicharset_.has_special_codes() &&
                                       u < SPECIAL_UNICHAR_CODES_COUNT))) {
        continue;  // Not used so not encoded.
      }
      RecodedCharID code;
      int len = compressed_.EncodeUnichar(u, &code);
      // Check round-trip encoding.
      int unichar_id;
      GenericVector<UNICHAR_ID> normed_ids;
      if (u == null_char_ || u == unicharset_.size()) {
        unichar_id = null_char_;
      } else {
        unichar_id = u;
      }
      EXPECT_EQ(unichar_id, compressed_.DecodeUnichar(code));
      // Check that the codes are valid.
      for (int i = 0; i < len; ++i) {
        int code_val = code(i);
        EXPECT_GE(code_val, 0);
        EXPECT_LT(code_val, code_range);
        times_seen[code_val].Set(i, times_seen[code_val](i) + 1);
      }
    }
    // Check that each code is used in at least one position.
    for (int c = 0; c < code_range; ++c) {
      int num_used = 0;
      for (int i = 0; i < RecodedCharID::kMaxCodeLen; ++i) {
        if (times_seen[c](i) != 0) ++num_used;
      }
      EXPECT_GE(num_used, 1) << 'c=' << c << '/' << code_range;
    }
    // Check that GetNextCodes/GetFinalCodes lists match the times_seen,
    // and create valid codes.
    RecodedCharID code;
    CheckCodeExtensions(code, times_seen);
    // Finally, we achieved all that using a codebook < 10% of the size of
    // the original unicharset, for CK or Indic, and 20% with J, but just
    // no bigger for all others.
    if (IsCJKLang(lang) || IsIndicLang(lang)) {
      EXPECT_LT(code_range, unicharset_.size() / (lang == 'jpn' ? 5 : 10));
    } else {
      EXPECT_LE(code_range, unicharset_.size() + 1);
    }
    LOG(INFO) << 'Compressed unicharset of ' << unicharset_.size() << ' to '
              << code_range;
  }
  // Checks for extensions of the current code that either finish a code, or
  // extend it and checks those extensions recursively.
  void CheckCodeExtensions(const RecodedCharID& code,
                           const std::vector<RecodedCharID>& times_seen) {
    RecodedCharID extended = code;
    int length = code.length();
    const GenericVector<int>* final_codes = compressed_.GetFinalCodes(code);
    if (final_codes != nullptr) {
      for (int i = 0; i < final_codes->size(); ++i) {
        int ending = (*final_codes)[i];
        EXPECT_GT(times_seen[ending](length), 0);
        extended.Set(length, ending);
        int unichar_id = compressed_.DecodeUnichar(extended);
        EXPECT_NE(INVALID_UNICHAR_ID, unichar_id);
      }
    }
    const GenericVector<int>* next_codes = compressed_.GetNextCodes(code);
    if (next_codes != nullptr) {
      for (int i = 0; i < next_codes->size(); ++i) {
        int extension = (*next_codes)[i];
        EXPECT_GT(times_seen[extension](length), 0);
        extended.Set(length, extension);
        CheckCodeExtensions(extended, times_seen);
      }
    }
  }
    
    #include 'intsimdmatrix.h'
#include <memory>
#include 'genericvector.h'
#include 'include_gunit.h'
#include 'intsimdmatrixavx2.h'
#include 'intsimdmatrixsse.h'
#include 'simddetect.h'
#include 'tprintf.h'
    
    // dims=[5, 4, 3, 2]->[3, 5, 4, 2]
TEST_F(MatrixTest, RotatingTranspose_2_0) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 2, 0, &m);
  m.ResizeNoInit(kInputSize_ / 2, 2);
  // Verify that the result is:
  // output tensor=[[[[0, 1][6, 7][12, 13][18, 19]]
  //                 [[24, 25][30, 31][36, 37][42, 43]]
  //                 [[48, 49][54, 55][60, 61][66, 67]]
  //                 [[72, 73][78, 79][84, 85][90, 91]]
  //                 [[96, 97][102, 103][108, 109][114, 115]]]
  //                [[[2,3]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(1, m(0, 1));
  EXPECT_EQ(6, m(1, 0));
  EXPECT_EQ(7, m(1, 1));
  EXPECT_EQ(24, m(4, 0));
  EXPECT_EQ(25, m(4, 1));
  EXPECT_EQ(30, m(5, 0));
  EXPECT_EQ(2, m(20, 0));
}
    
    #include 'allheaders.h'
    
    namespace tesseract {
    }
    
    #endif  // TESSERACT_CLASSIFY_INTFEATUREMAP_H_

    
      AddFeature(feature_set, feature);
    
    namespace tesseract {
    }
    
    #include <THPP/tensors/THTensor.hpp>
    
    #define THCPStorage TH_CONCAT_3(THCP,Real,Storage)
#define THCPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THCPStorageClass TH_CONCAT_3(THCP,Real,StorageClass)
#define THCPStorage_(NAME) TH_CONCAT_4(THCP,Real,Storage_,NAME)
    
    #define THDPDoubleStorage_CData(obj)  (obj)->cdata
#define THDPFloatStorage_CData(obj)   (obj)->cdata
#define THDPLongStorage_CData(obj)    (obj)->cdata
#define THDPIntStorage_CData(obj)     (obj)->cdata
#define THDPShortStorage_CData(obj)   (obj)->cdata
#define THDPCharStorage_CData(obj)    (obj)->cdata
#define THDPByteStorage_CData(obj)    (obj)->cdata
    
    
    {    PyThreadState *_save = NULL;
    try {
      Py_UNBLOCK_THREADS;
      copyFunc(LIBRARY_STATE dst, THDPModule_makeDescriptor(src_));
      Py_BLOCK_THREADS;
    } catch (...) {
      if (_save) {
        Py_BLOCK_THREADS;
      }
      throw;
    }
  };
    
    #include <boost/asio/detail/config.hpp>
#include <boost/asio/basic_io_object.hpp>
#include <boost/asio/basic_socket.hpp>
#include <boost/asio/detail/handler_type_requirements.hpp>
#include <boost/asio/detail/throw_error.hpp>
#include <boost/asio/detail/type_traits.hpp>
#include <boost/asio/error.hpp>
#include <boost/asio/socket_acceptor_service.hpp>
#include <boost/asio/socket_base.hpp>
    
    
    {private:
  Handler handler_;
};
    
      static bool do_perform(reactor_op* base)
  {
    descriptor_write_op_base* o(static_cast<descriptor_write_op_base*>(base));
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #include <boost/asio/detail/push_options.hpp>
    
    #include 'guetzli/output_image.h'
#include 'guetzli/stats.h'
    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    
    {    return 1; // success
}
    
    // GLFW callbacks (registered by default to GLFW if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks yourself. You may also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
        {
        D3D12_COMMAND_QUEUE_DESC desc = {};
        desc.Type     = D3D12_COMMAND_LIST_TYPE_DIRECT;
        desc.Flags    = D3D12_COMMAND_QUEUE_FLAG_NONE;
        desc.NodeMask = 1;
        if (g_pd3dDevice->CreateCommandQueue(&desc, IID_PPV_ARGS(&g_pd3dCommandQueue)) != S_OK)
            return E_FAIL;
    }
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);