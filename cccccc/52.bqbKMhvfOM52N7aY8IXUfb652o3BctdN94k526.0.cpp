
        
        #include 'base/command_line.h'
    
    
    {}  // namespace atom

    
    DownloadItem::DownloadItem(v8::Isolate* isolate,
                           download::DownloadItem* download_item)
    : download_item_(download_item) {
  download_item_->AddObserver(this);
  Init(isolate);
  AttachAsUserData(download_item);
}
    
    template <>
struct Converter<atom::AtomMenuModel*> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     atom::AtomMenuModel** out) {
    // null would be tranfered to NULL.
    if (val->IsNull()) {
      *out = nullptr;
      return true;
    }
    }
    }
    
    class Screen : public mate::EventEmitter<Screen>,
               public display::DisplayObserver {
 public:
  static v8::Local<v8::Value> Create(v8::Isolate* isolate);
    }
    
    #ifndef ATOM_BROWSER_API_ATOM_API_WEB_REQUEST_H_
#define ATOM_BROWSER_API_ATOM_API_WEB_REQUEST_H_
    
    namespace mate {
    }
    
    #include 'content/public/browser/web_contents_observer.h'
#include 'native_mate/handle.h'
#include 'native_mate/wrappable.h'
    
      /**
   * @brief Initialize the Random number generations if needed by the
   *    transformation.
   */
  void InitRand();
    
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
    
      /**
   * @brief Computes the error gradient w.r.t. the reordered input.
   *
   * @param top output Blob vector (length 1), providing the error gradient
   *        with respect to the outputs
   *   -# @f$ (M \times ...) @f$:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2):
   *   - @f$ \frac{\partial E}{\partial y} @f$ is de-indexed (summing where
   *     required) back to the input x_1
   *   - This layer cannot backprop to x_2, i.e. propagate_down[1] must be
   *     false.
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {}  // namespace caffe
    
    #include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/power_layer.hpp'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // TESSERACT_ARCH_DOTPRODUCTSSE_H_

    
      /**
   * Returns an image of the current object at the given level in greyscale
   * if available in the input. To guarantee a binary image use BinaryImage.
   * NOTE that in order to give the best possible image, the bounds are
   * expanded slightly over the binary connected component, by the supplied
   * padding, so the top-left position of the returned image is returned
   * in (left,top). These will most likely not match the coordinates
   * returned by BoundingBox.
   * If you do not supply an original image, you will get a binary one.
   * Use pixDestroy to delete the image after use.
   */
  Pix* GetImage(PageIteratorLevel level, int padding, Pix* original_img,
                int* left, int* top) const;
    
    class MutableIterator;
    
      // Add all parameters to a list.
  int v, i;
  int num_iterations = (tess->params() == nullptr) ? 1 : 2;
  for (v = 0; v < num_iterations; ++v) {
    tesseract::ParamsVectors *vec = (v == 0) ? GlobalParams() : tess->params();
    for (i = 0; i < vec->int_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->int_params[i]));
    }
    for (i = 0; i < vec->bool_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->bool_params[i]));
    }
    for (i = 0; i < vec->string_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->string_params[i]));
    }
    for (i = 0; i < vec->double_params.size(); ++i) {
      vc_it.add_after_then_move(new ParamContent(vec->double_params[i]));
    }
  }
    
    #endif  // GRAPHICS_DISABLED
#endif  // TESSERACT_CCMAIN_PARAMSD_H_

    
        protected:
        // If a gradient is sparse, we skip updating columns with zero gradients. This means some 
        // columns will receive their updates when their gradient is non-zero. The only exception
        // is that once every s_SyncInterval updates we will make sure all columns are up to date. 
        static const int s_SyncInterval;
    
        template <typename T> 
    inline std::string GetVersionsString(size_t currentVersion, size_t dictVersion)
    {
        std::stringstream info;
        info << 'Current ' << Typename<T>() << ' version = ' << currentVersion 
             << ', Dictionary version = ' << dictVersion;
        return info.str();
    }
    
        // Acquires the mutex. If 'wait' is true and mutex is acquired by someone else then
    // function waits until mutex is released
    // Returns false if !wait and lock cannot be acquired, or in case of a system error that prevents us from acquiring the lock.
    bool Acquire(bool wait)
    {
        mode_t mask = umask(0);
    }
    
        void Start();
    void Stop();
    void Restart();
    
            // clone everything in the dependent set
        //  - specified inputs get mapped to actual parameters
        //  - all others get duplicated
        // Note that at this point, the 'shared' option has already been considered,
        // and is reflected in whether parameters are included or not in 'dependentSet'.
        map<ComputationNodeBasePtr, ComputationNodeBasePtr> clonedNodes;
        size_t numCloned = 0;
        for (size_t i = 0; i < inputNodes.size(); i++)
            clonedNodes[inputNodes[i]] = inputs[i];
        for (let& node : dependentSet)
        {
            // if already there then it's an input that we just mapped above
            if (clonedNodes.find(node) != clonedNodes.end())
                continue;
            // clone
            ComputationNodeBasePtr newNode;
            let newName = exprName + L'.' + node->GetName();
            newNode = node->Duplicate(newName, CopyNodeFlags::copyNodeAll);
            // make it read-only if desired
            if (parameterTreatment == ParameterTreatment::constant && newNode->Is<IFreezable>())
                newNode->As<IFreezable>()->FreezeParameters();
            // and that's our cloned node
            clonedNodes[node] = newNode;
            numCloned++;
        }
#if 0
        for (let& nodeKV : clonedNodes)
            fprintf(stderr, 'CloneFunction: cloning %ls -> %ls (%d -> %d)\n', nodeKV.first->NodeDescription().c_str(), nodeKV.second->NodeDescription().c_str(), (int)nodeKV.first->m_uniqueNumericId, (int)nodeKV.second->m_uniqueNumericId);
#endif
    
        // Initialize with bilinear interpolation coefficients (useful for deconvolution layer).
    void InitBilinear(size_t kernelWidth, size_t kernelHeight)
    {
        InitBilinear(Value(), GetSampleLayout(), kernelWidth, kernelHeight, m_deviceId);
    }
    
    #pragma once
    
    static unsigned int stb_matchlen(stb_uchar *m1, stb_uchar *m2, stb_uint maxlen)
{
    stb_uint i;
    for (i=0; i < maxlen; ++i)
        if (m1[i] != m2[i]) return i;
    return i;
}
    
        // Decide GL+GLSL versions
#if __APPLE__
    // GL 3.2 + GLSL 150
    const char* glsl_version = '#version 150';
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // Required on Mac
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = '#version 130';
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // 3.0+ only
#endif
    
        // Backup DX state that will be modified to restore it afterwards (unfortunately this is very ugly looking and verbose. Close your eyes!)
    struct BACKUP_DX10_STATE
    {
        UINT                        ScissorRectsCount, ViewportsCount;
        D3D10_RECT                  ScissorRects[D3D10_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];
        D3D10_VIEWPORT              Viewports[D3D10_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];
        ID3D10RasterizerState*      RS;
        ID3D10BlendState*           BlendState;
        FLOAT                       BlendFactor[4];
        UINT                        SampleMask;
        UINT                        StencilRef;
        ID3D10DepthStencilState*    DepthStencilState;
        ID3D10ShaderResourceView*   PSShaderResource;
        ID3D10SamplerState*         PSSampler;
        ID3D10PixelShader*          PS;
        ID3D10VertexShader*         VS;
        D3D10_PRIMITIVE_TOPOLOGY    PrimitiveTopology;
        ID3D10Buffer*               IndexBuffer, *VertexBuffer, *VSConstantBuffer;
        UINT                        IndexBufferOffset, VertexBufferStride, VertexBufferOffset;
        DXGI_FORMAT                 IndexBufferFormat;
        ID3D10InputLayout*          InputLayout;
    };
    BACKUP_DX10_STATE old;
    old.ScissorRectsCount = old.ViewportsCount = D3D10_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE;
    ctx->RSGetScissorRects(&old.ScissorRectsCount, old.ScissorRects);
    ctx->RSGetViewports(&old.ViewportsCount, old.Viewports);
    ctx->RSGetState(&old.RS);
    ctx->OMGetBlendState(&old.BlendState, old.BlendFactor, &old.SampleMask);
    ctx->OMGetDepthStencilState(&old.DepthStencilState, &old.StencilRef);
    ctx->PSGetShaderResources(0, 1, &old.PSShaderResource);
    ctx->PSGetSamplers(0, 1, &old.PSSampler);
    ctx->PSGetShader(&old.PS);
    ctx->VSGetShader(&old.VS);
    ctx->VSGetConstantBuffers(0, 1, &old.VSConstantBuffer);
    ctx->IAGetPrimitiveTopology(&old.PrimitiveTopology);
    ctx->IAGetIndexBuffer(&old.IndexBuffer, &old.IndexBufferFormat, &old.IndexBufferOffset);
    ctx->IAGetVertexBuffers(0, 1, &old.VertexBuffer, &old.VertexBufferStride, &old.VertexBufferOffset);
    ctx->IAGetInputLayout(&old.InputLayout);
    
        // Create the pixel shader
    {
        static const char* pixelShader =
            'struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            sampler sampler0;\
            Texture2D texture0;\
            \
            float4 main(PS_INPUT input) : SV_Target\
            {\
            float4 out_col = input.col * texture0.Sample(sampler0, input.uv); \
            return out_col; \
            }';
    }
    
        // Setup orthographic projection matrix into our constant buffer
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right). 
    VERTEX_CONSTANT_BUFFER vertex_constant_buffer;
    {
        VERTEX_CONSTANT_BUFFER* constant_buffer = &vertex_constant_buffer;
        float L = draw_data->DisplayPos.x;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x;
        float T = draw_data->DisplayPos.y;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y;
        float mvp[4][4] =
        {
            { 2.0f/(R-L),   0.0f,           0.0f,       0.0f },
            { 0.0f,         2.0f/(T-B),     0.0f,       0.0f },
            { 0.0f,         0.0f,           0.5f,       0.0f },
            { (R+L)/(L-R),  (T+B)/(B-T),    0.5f,       1.0f },
        };
        memcpy(&constant_buffer->mvp, mvp, sizeof(mvp));
    }
    
        // Per Spec Format and View Format are expected to be the same unless VK_IMAGE_CREATE_MUTABLE_BIT was set at image creation
    // Assuming that the default behavior is without setting this bit, there is no need for separate Swapchain image and image view format
    // Additionally several new color spaces were introduced with Vulkan Spec v1.0.40,
    // hence we must make sure that a format with the mostly available color space, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR, is found and used.
    uint32_t avail_count;
    vkGetPhysicalDeviceSurfaceFormatsKHR(physical_device, surface, &avail_count, NULL);
    ImVector<VkSurfaceFormatKHR> avail_format;
    avail_format.resize((int)avail_count);
    vkGetPhysicalDeviceSurfaceFormatsKHR(physical_device, surface, &avail_count, avail_format.Data);
    
    namespace aria2 {
    }
    
    #include 'common.h'
    
    
    {} // namespace aria2

    
    #endif // D_DHT_TOKEN_TRACKER_H

    
    
    {} // namespace aria2
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    template <typename E>
auto exceptionStr(const E& e) -> typename std::
    enable_if<!std::is_base_of<std::exception, E>::value, fbstring>::type {
#ifdef FOLLY_HAS_RTTI
  return demangle(typeid(e));
#else
  (void)e;
  return 'Exception (no RTTI available) ';
#endif
}
    
    exception_wrapper exception_wrapper::from_exception_ptr(
    std::exception_ptr const& ptr) noexcept {
  if (!ptr) {
    return exception_wrapper();
  }
  try {
    std::rethrow_exception(ptr);
  } catch (std::exception& e) {
    return exception_wrapper(std::current_exception(), e);
  } catch (...) {
    return exception_wrapper(std::current_exception());
  }
}
    
        ExecutorT* operator->() const {
      return get();
    }
    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
        // Check if we need to push a batch from local -> global
    auto batchcount = EXTERNAL_OFFSET / 2;
    if (get_local_count(newlocal) > batchcount) {
      CountedDetail::inc_shared_count(newlocal.get(), batchcount);
      putOwnedBase(newlocal.get(), batchcount, order);
    }
    
    namespace benchmark {
namespace internal {
// The arraysize(arr) macro returns the # of elements in an array arr.
// The expression is a compile-time constant, and therefore can be
// used in defining new arrays, for example.  If you use arraysize on
// a pointer by mistake, you will get a compile-time error.
//
    }
    }
    
    void Increment(UserCounters *l, UserCounters const& r) {
  // add counters present in both or just in *l
  for (auto &c : *l) {
    auto it = r.find(c.first);
    if (it != r.end()) {
      c.second.value = c.second + it->second;
    }
  }
  // add counters present in r, but not in *l
  for (auto const &tc : r) {
    auto it = l->find(tc.first);
    if (it == l->end()) {
      (*l)[tc.first] = tc.second;
    }
  }
}
    
      // Open context block and print context information.
  out << inner_indent << '\'context\': {\n';
  std::string indent(4, ' ');
    }
    
    template <class Tp>
LogType& operator<<(LogType& log, Tp const& value) {
  if (log.out_) {
    *log.out_ << value;
  }
  return log;
}
    
    #define TRY_ACQUIRE(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(try_acquire_capability(__VA_ARGS__))
    
    
    {}  // end namespace benchmark
