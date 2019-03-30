
        
        #undef cv_hal_cvtBGRtoBGR
#define cv_hal_cvtBGRtoBGR TEGRA_CVTBGRTOBGR
#undef cv_hal_cvtBGRtoBGR5x5
#define cv_hal_cvtBGRtoBGR5x5 TEGRA_CVTBGRTOBGR565
#undef cv_hal_cvtBGRtoGray
#define cv_hal_cvtBGRtoGray TEGRA_CVTBGRTOGRAY
#undef cv_hal_cvtGraytoBGR
#define cv_hal_cvtGraytoBGR TEGRA_CVTGRAYTOBGR
#undef cv_hal_cvtBGRtoYUV
#define cv_hal_cvtBGRtoYUV TEGRA_CVTBGRTOYUV
#undef cv_hal_cvtBGRtoHSV
#define cv_hal_cvtBGRtoHSV TEGRA_CVTBGRTOHSV
#undef cv_hal_cvtTwoPlaneYUVtoBGR
#define cv_hal_cvtTwoPlaneYUVtoBGR TEGRA_CVT2PYUVTOBGR
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j), v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
            std::swap(lanea, laneA);
        std::swap(laneb, laneB);
    }
    //last line
    if(i < size.height)
    {
        //vertical convolution
        ptrdiff_t idx_rm1 = internal::borderInterpolate(i - 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
        ptrdiff_t idx_rp1 = internal::borderInterpolate(i + 1, size.height, borderType, borderMargin.top, borderMargin.bottom);
    
    
    {            v_y = vld2q_u8(srcy + syj + 32);
            v_dst.val[0] = vld1q_u8(srcu + sj + 16);
            v_dst.val[1] = v_y.val[0];
            v_dst.val[2] = vld1q_u8(srcv + sj + 16);
            v_dst.val[3] = v_y.val[1];
            vst4q_u8(dst + dj + 64, v_dst);
        }
#endif
    
    
    {    void operator() (const T * src0, const T * src1, u8 * dst) const
    {
        dst[0] = src0[0] > src1[0] ? 255 : 0;
    }
};
    
            if (cpolicy == CONVERT_POLICY_SATURATE)
        {
            for (; j < roiw16; j += 16)
            {
                internal::prefetch(src + j);
                int16x8_t v_src0 = vld1q_s16(src + j), v_src1 = vld1q_s16(src + j + 8);
                uint8x16_t v_dst = vcombine_u8(vqmovun_s16(v_src0), vqmovun_s16(v_src1));
                vst1q_u8(dst + j, v_dst);
            }
            for (; j < roiw8; j += 8)
            {
                int16x8_t v_src = vld1q_s16(src + j);
                vst1_u8(dst + j, vqmovun_s16(v_src));
            }
    }
    
            size_t i = 0;
        uint64x2_t ws = vmovq_n_u64(0);
    
        u8 threshold_tab[512];
    for( i = -255; i <= 255; i++ )
        threshold_tab[i+255] = (u8)(i < -threshold ? 1 : i > threshold ? 2 : 0);
    
                vst1q_u8((u8 *)&mask[0], v_mask);
    
        if (func == NULL)
        return;
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a vector of Datum.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See memory_layer.cpp for an example.
   */
  void Transform(const vector<Datum> & datum_vector,
                Blob<Dtype>* transformed_blob);
    
    
    {  shared_ptr<boost::thread> thread_;
};
    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
    #include 'caffe/blob.hpp'
#include 'caffe/data_transformer.hpp'
#include 'caffe/internal_thread.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/blocking_queue.hpp'
    
    
    {  // extra temporarary variables is used to carry out sums/broadcasting
  // using BLAS
  Blob<Dtype> batch_sum_multiplier_;
  Blob<Dtype> num_by_chans_;
  Blob<Dtype> spatial_sum_multiplier_;
};
    
      virtual inline const char* type() const { return 'Bias'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int MaxBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    /**
 * @brief Computes the contrastive loss @f$
 *          E = \frac{1}{2N} \sum\limits_{n=1}^N \left(y\right) d^2 +
 *              \left(1-y\right) \max \left(margin-d, 0\right)^2
 *          @f$ where @f$
 *          d = \left| \left| a_n - b_n \right| \right|_2 @f$. This can be
 *          used to train siamese networks.
 *
 * @param bottom input Blob vector (length 3)
 *   -# @f$ (N \times C \times 1 \times 1) @f$
 *      the features @f$ a \in [-\infty, +\infty]@f$
 *   -# @f$ (N \times C \times 1 \times 1) @f$
 *      the features @f$ b \in [-\infty, +\infty]@f$
 *   -# @f$ (N \times 1 \times 1 \times 1) @f$
 *      the binary similarity @f$ s \in [0, 1]@f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
 *      the computed contrastive loss: @f$ E =
 *          \frac{1}{2N} \sum\limits_{n=1}^N \left(y\right) d^2 +
 *          \left(1-y\right) \max \left(margin-d, 0\right)^2
 *          @f$ where @f$
 *          d = \left| \left| a_n - b_n \right| \right|_2 @f$.
 * This can be used to train siamese networks.
 */
template <typename Dtype>
class ContrastiveLossLayer : public LossLayer<Dtype> {
 public:
  explicit ContrastiveLossLayer(const LayerParameter& param)
      : LossLayer<Dtype>(param), diff_() {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #include 'caffe/layers/base_conv_layer.hpp'
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusClientCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusClientCallData : public CallData {
 public:
  // Maximum size of trace context is sent on the wire.
  static constexpr uint32_t kMaxTraceContextLen = 64;
  // Maximum size of tags that are sent on the wire.
  static constexpr uint32_t kMaxTagsLen = 2048;
    }
    
    
    {}  // namespace grpc
    
    Status ProtoServerReflection::GetFileContainingSymbol(
    ServerContext* context, const grpc::string& symbol,
    ServerReflectionResponse* response) {
  if (descriptor_pool_ == nullptr) {
    return Status::CANCELLED;
  }
    }
    
    
    {
    {}  // namespace reflection
}  // namespace grpc

    
    namespace grpc {
namespace load_reporter {
    }
    }
    
      void branchFar(CodeAddress c, BranchParams bp,
                 ImmType immt = ImmType::TocOnly,
                 bool immMayChange = false) {
    LinkReg lr = (bp.savesLR()) ? LinkReg::Save : LinkReg::DoNotTouch;
    branchFar(c, static_cast<BranchConditions>(bp), lr, immt, immMayChange);
  }
    
      char* comma = (char*)memchr(data, ',', data_len);
  if (comma == nullptr) {
    raise_warning('rfc2397: missing comma');
    return nullptr;
  }
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
    #include 'hphp/util/stack-trace.h'
    
            const float char_width = ((int)c < IndexAdvanceX.Size ? IndexAdvanceX.Data[c] : FallbackAdvanceX) * scale;
        if (line_width + char_width >= max_width)
        {
            s = prev_s;
            break;
        }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls
    
        // Main loop
    while (true)
    {
        if (s3eDeviceCheckQuitRequest())
            break;
    }
    
    int main(int, char**)
{
    // Setup SDL
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) != 0)
    {
        printf('Error: %s\n', SDL_GetError());
        return -1;
    }
    }
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_Init(const char* glsl_version = NULL);
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
    
    // Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);