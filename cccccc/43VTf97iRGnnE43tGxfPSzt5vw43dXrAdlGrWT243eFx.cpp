
        
        HINSTANCE g_hInst = NULL;
D3D_DRIVER_TYPE g_driverType = D3D_DRIVER_TYPE_NULL;
D3D_FEATURE_LEVEL g_featureLevel = D3D_FEATURE_LEVEL_11_0;
ID3D11Device* g_pd3dDevice = NULL;
ID3D11DeviceContext* g_pImmediateContext = NULL;
IDXGISwapChain* g_pSwapChain = NULL;
    
    void cvValidateDisparity( CvArr* _disp, const CvArr* _cost, int minDisparity,
                         int numberOfDisparities, int disp12MaxDiff )
{
    cv::Mat disp = cv::cvarrToMat(_disp), cost = cv::cvarrToMat(_cost);
    cv::validateDisparity( disp, cost, minDisparity, numberOfDisparities, disp12MaxDiff );
}

    
            struct glob
        {
            static __device__ __forceinline__ int atomicAdd(int* address, int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ unsigned int atomicAdd(unsigned int* address, unsigned int val)
            {
                return ::atomicAdd(address, val);
            }
            static __device__ __forceinline__ float atomicAdd(float* address, float val)
            {
            #if __CUDA_ARCH__ >= 200
                return ::atomicAdd(address, val);
            #else
                int* address_as_i = (int*) address;
                int old = *address_as_i, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_i, assumed,
                        __float_as_int(val + __int_as_float(assumed)));
                } while (assumed != old);
                return __int_as_float(old);
            #endif
            }
            static __device__ __forceinline__ double atomicAdd(double* address, double val)
            {
            #if __CUDA_ARCH__ >= 130
                unsigned long long int* address_as_ull = (unsigned long long int*) address;
                unsigned long long int old = *address_as_ull, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_ull, assumed,
                        __double_as_longlong(val + __longlong_as_double(assumed)));
                } while (assumed != old);
                return __longlong_as_double(old);
            #else
                (void) address;
                (void) val;
                return 0.0;
            #endif
            }
    }
    
    namespace cv
{
CV_EXPORTS_W void add(InputArray src1, Scalar src2, OutputArray dst, InputArray mask=noArray(), int dtype=-1);
    }
    
            // Version: 2.0
        BLEND_EQUATION_RGB               = 0x8009,
        VERTEX_ATTRIB_ARRAY_ENABLED      = 0x8622,
        VERTEX_ATTRIB_ARRAY_SIZE         = 0x8623,
        VERTEX_ATTRIB_ARRAY_STRIDE       = 0x8624,
        VERTEX_ATTRIB_ARRAY_TYPE         = 0x8625,
        CURRENT_VERTEX_ATTRIB            = 0x8626,
        VERTEX_PROGRAM_POINT_SIZE        = 0x8642,
        VERTEX_ATTRIB_ARRAY_POINTER      = 0x8645,
        STENCIL_BACK_FUNC                = 0x8800,
        STENCIL_BACK_FAIL                = 0x8801,
        STENCIL_BACK_PASS_DEPTH_FAIL     = 0x8802,
        STENCIL_BACK_PASS_DEPTH_PASS     = 0x8803,
        MAX_DRAW_BUFFERS                 = 0x8824,
        DRAW_BUFFER0                     = 0x8825,
        DRAW_BUFFER1                     = 0x8826,
        DRAW_BUFFER2                     = 0x8827,
        DRAW_BUFFER3                     = 0x8828,
        DRAW_BUFFER4                     = 0x8829,
        DRAW_BUFFER5                     = 0x882A,
        DRAW_BUFFER6                     = 0x882B,
        DRAW_BUFFER7                     = 0x882C,
        DRAW_BUFFER8                     = 0x882D,
        DRAW_BUFFER9                     = 0x882E,
        DRAW_BUFFER10                    = 0x882F,
        DRAW_BUFFER11                    = 0x8830,
        DRAW_BUFFER12                    = 0x8831,
        DRAW_BUFFER13                    = 0x8832,
        DRAW_BUFFER14                    = 0x8833,
        DRAW_BUFFER15                    = 0x8834,
        BLEND_EQUATION_ALPHA             = 0x883D,
        MAX_VERTEX_ATTRIBS               = 0x8869,
        VERTEX_ATTRIB_ARRAY_NORMALIZED   = 0x886A,
        MAX_TEXTURE_IMAGE_UNITS          = 0x8872,
        FRAGMENT_SHADER                  = 0x8B30,
        VERTEX_SHADER                    = 0x8B31,
        MAX_FRAGMENT_UNIFORM_COMPONENTS  = 0x8B49,
        MAX_VERTEX_UNIFORM_COMPONENTS    = 0x8B4A,
        MAX_VARYING_FLOATS               = 0x8B4B,
        MAX_VERTEX_TEXTURE_IMAGE_UNITS   = 0x8B4C,
        MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D,
        SHADER_TYPE                      = 0x8B4F,
        FLOAT_VEC2                       = 0x8B50,
        FLOAT_VEC3                       = 0x8B51,
        FLOAT_VEC4                       = 0x8B52,
        INT_VEC2                         = 0x8B53,
        INT_VEC3                         = 0x8B54,
        INT_VEC4                         = 0x8B55,
        BOOL                             = 0x8B56,
        BOOL_VEC2                        = 0x8B57,
        BOOL_VEC3                        = 0x8B58,
        BOOL_VEC4                        = 0x8B59,
        FLOAT_MAT2                       = 0x8B5A,
        FLOAT_MAT3                       = 0x8B5B,
        FLOAT_MAT4                       = 0x8B5C,
        SAMPLER_1D                       = 0x8B5D,
        SAMPLER_2D                       = 0x8B5E,
        SAMPLER_3D                       = 0x8B5F,
        SAMPLER_CUBE                     = 0x8B60,
        SAMPLER_1D_SHADOW                = 0x8B61,
        SAMPLER_2D_SHADOW                = 0x8B62,
        DELETE_STATUS                    = 0x8B80,
        COMPILE_STATUS                   = 0x8B81,
        LINK_STATUS                      = 0x8B82,
        VALIDATE_STATUS                  = 0x8B83,
        INFO_LOG_LENGTH                  = 0x8B84,
        ATTACHED_SHADERS                 = 0x8B85,
        ACTIVE_UNIFORMS                  = 0x8B86,
        ACTIVE_UNIFORM_MAX_LENGTH        = 0x8B87,
        SHADER_SOURCE_LENGTH             = 0x8B88,
        ACTIVE_ATTRIBUTES                = 0x8B89,
        ACTIVE_ATTRIBUTE_MAX_LENGTH      = 0x8B8A,
        FRAGMENT_SHADER_DERIVATIVE_HINT  = 0x8B8B,
        SHADING_LANGUAGE_VERSION         = 0x8B8C,
        CURRENT_PROGRAM                  = 0x8B8D,
        POINT_SPRITE_COORD_ORIGIN        = 0x8CA0,
        LOWER_LEFT                       = 0x8CA1,
        UPPER_LEFT                       = 0x8CA2,
        STENCIL_BACK_REF                 = 0x8CA3,
        STENCIL_BACK_VALUE_MASK          = 0x8CA4,
        STENCIL_BACK_WRITEMASK           = 0x8CA5,
    
    void cv::cuda::transpose(InputArray, OutputArray, Stream&) { throw_no_cuda(); }
    
    /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {}  // namespace caffe
    
    /**
 * @brief Abstract base class that factors out the BLAS code common to
 *        ConvolutionLayer and DeconvolutionLayer.
 */
template <typename Dtype>
class BaseConvolutionLayer : public Layer<Dtype> {
 public:
  explicit BaseConvolutionLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_2 @f$
   *   -# ...
   *   - K @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_K @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      the concatenated output @f$
   *        y = [\begin{array}{cccc} x_1 & x_2 & ... & x_K \end{array}]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_1 @f$
   *   -# ...
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs to be filtered @f$ x_K @f$
   *   -# @f$ (N \times 1 \times 1 \times 1) @f$
   *      the selector blob
   * @param top output Blob vector (length 1+)
   *   -# @f$ (S \times C \times H \times W) @f$ ()
   *        the filtered output @f$ x_1 @f$
   *        where S is the number of items
   *        that haven't been filtered
   *      @f$ (S \times C \times H \times W) @f$
   *        the filtered output @f$ x_K @f$
   *        where S is the number of items
   *        that haven't been filtered
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top);
    
    int main(int, char**)
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
            // Allegro's implementation of al_draw_indexed_prim() for DX9 is completely broken. Unindex our buffers ourselves.
        // FIXME-OPT: Unfortunately Allegro doesn't support 32-bits packed colors so we have to convert them to 4 float as well..
        static ImVector<ImDrawVertAllegro> vertices;
        vertices.resize(cmd_list->IdxBuffer.Size);
        for (int i = 0; i < cmd_list->IdxBuffer.Size; i++)
        {
            const ImDrawVert* src_v = &cmd_list->VtxBuffer[cmd_list->IdxBuffer[i]];
            ImDrawVertAllegro* dst_v = &vertices[i];
            dst_v->pos = src_v->pos;
            dst_v->uv = src_v->uv;
            unsigned char* c = (unsigned char*)&src_v->col;
            dst_v->col = al_map_rgba(c[0], c[1], c[2], c[3]);
        }
    
    
    {    if (g_pVertexShaderBlob) { g_pVertexShaderBlob->Release(); g_pVertexShaderBlob = NULL; }
    if (g_pPixelShaderBlob) { g_pPixelShaderBlob->Release(); g_pPixelShaderBlob = NULL; }
    if (g_pRootSignature) { g_pRootSignature->Release(); g_pRootSignature = NULL; }
    if (g_pPipelineState) { g_pPipelineState->Release(); g_pPipelineState = NULL; }
    if (g_pFontTextureResource) { g_pFontTextureResource->Release(); g_pFontTextureResource = NULL; ImGui::GetIO().Fonts->TexID = NULL; } // We copied g_pFontTextureView to io.Fonts->TexID so let's clear that as well.
    for (UINT i = 0; i < g_numFramesInFlight; i++)
    {
        if (g_pFrameResources[i].IB) { g_pFrameResources[i].IB->Release(); g_pFrameResources[i].IB = NULL; }
        if (g_pFrameResources[i].VB) { g_pFrameResources[i].VB->Release(); g_pFrameResources[i].VB = NULL; }
    }
}
    
        // Main loop
    while (true)
    {
        if (s3eDeviceCheckQuitRequest())
            break;
    }
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().
    
    class RequestGroup;
class DownloadEngine;
class Peer;
class BtRuntime;
class PieceStorage;
class PeerStorage;
class BtAnnounce;
    
    class AnnounceTier {
public:
  enum AnnounceEvent {
    STARTED,
    STARTED_AFTER_COMPLETION,
    DOWNLOADING,
    STOPPED,
    COMPLETED,
    SEEDING,
    HALTED
  };
    }
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
      const std::string& getUser() const { return user_; }
    
    PredictionQuerier::PredictionQuerier(
    const std::vector<const Obstacle*>& obstacles,
    const std::shared_ptr<std::vector<common::PathPoint>>& ptr_reference_line)
    : ptr_reference_line_(ptr_reference_line) {
  for (const auto ptr_obstacle : obstacles) {
    if (id_obstacle_map_.find(ptr_obstacle->Id()) == id_obstacle_map_.end()) {
      id_obstacle_map_[ptr_obstacle->Id()] = ptr_obstacle;
      obstacles_.push_back(ptr_obstacle);
    } else {
      AWARN << 'Duplicated obstacle found [' << ptr_obstacle->Id() << ']';
    }
  }
}
    
    #ifndef MODULES_PLANNING_LATTICE_BEHAVIOR_PREDICTION_QUERIER_H_
#define MODULES_PLANNING_LATTICE_BEHAVIOR_PREDICTION_QUERIER_H_
    
      // @brief: Transform 3D position of objects into targeted space
  // @param [in/out] objects : object lists with 3D positions in camera space,
  // which get transformed into targeted 3D space
  virtual bool Transform(
      std::vector<std::shared_ptr<VisualObject>>* objects) = 0;
    
    class FlatCameraTransformer : public BaseCameraTransformer {
 public:
  FlatCameraTransformer() : BaseCameraTransformer() {}
    }
    
    namespace apollo {
namespace perception {
namespace traffic_light {
    }
    }
    }
    
     private:
  void TerminateProfilingMode(const ros::TimerEvent& event);
  void CheckAdapters();
    
    #include 'modules/perception/traffic_light/recognizer/unity_recognize.h'
    
      /**
   * @brief: recognize light status
   * @param  const Recognize&: recognize options
   * @param  const Image&: input image
   * @param  std::vector<Light>*: recognized light status
   * @return  bool
   */
  bool RecognizeStatus(const Image &image, const RecognizeOption &option,
                       std::vector<LightPtr> *lights) override;
    
    /**
 * @file
 **/