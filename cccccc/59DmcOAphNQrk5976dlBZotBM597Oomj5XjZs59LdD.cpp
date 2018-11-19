
        
            http://www.apache.org/licenses/LICENSE-2.0
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Creates a numpy array in 'ret' which either aliases the content of 't' or has
// a copy.
Status TensorToNdarray(const Tensor& t, PyObject** ret);
    
    extern PyTypeObject TensorReleaserType;
    
    // Called by python code on initialization.
//
// 'trampoline' must represent a python function which has the
// following signature:
//   (string, list(ndarray)) | (string, list(EagerTensor)) ->
//     ndarray | list(ndarray) | python scalar |
//     EagerTensor | list(EagerTensor) | None
//
// The trampoline takes two arguments, the first is a string token
// used by the python frontend's dispatching logic; the second is a
// list of numpy ndarrays or EagerTensor objects. It can return a
// single numpy ndarray, a list of numpy ndarrays, a python scalar, an
// EagerTensor, a list of EagerTensors, or None.
//
// PyFunc requires inputs and outputs to be ndarrays. EagerPyFunc requires
// inputs to be a list of EagerTensors and outputs to be an EagerTensor, a list
// of EagerTensors, or None.
//
// The C++ runtime converts outputs back to Tensor objects.
//
// This function is called by script_ops.py during its module initialization.
//
// TODO(zhifengc): Support distributed runtime.
void InitializePyTrampoline(PyObject* trampoline);
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_SEQ_TENSOR_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_SEQ_TENSOR_H_
    
    namespace tensorflow {
    }
    
    namespace io {
    }
    
    
    {}  // namespace atom
    
    class AutoUpdater : public mate::EventEmitter<AutoUpdater>,
                    public auto_updater::Delegate,
                    public WindowListObserver {
 public:
  static mate::Handle<AutoUpdater> Create(v8::Isolate* isolate);
    }
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
    }
    
    #ifndef ATOM_BROWSER_API_ATOM_API_NET_H_
#define ATOM_BROWSER_API_ATOM_API_NET_H_
    
    
    {  DISALLOW_COPY_AND_ASSIGN(RenderProcessPreferences);
};
    
    void Screen::OnDisplayMetricsChanged(const display::Display& display,
                                     uint32_t changed_metrics) {
  Emit('display-metrics-changed', display, MetricsToArray(changed_metrics));
}
    
    class AtomBrowserContext;
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
        // Backup DX state that will be modified to restore it afterwards (unfortunately this is very ugly looking and verbose. Close your eyes!)
    struct BACKUP_DX11_STATE
    {
        UINT                        ScissorRectsCount, ViewportsCount;
        D3D11_RECT                  ScissorRects[D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];
        D3D11_VIEWPORT              Viewports[D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE];
        ID3D11RasterizerState*      RS;
        ID3D11BlendState*           BlendState;
        FLOAT                       BlendFactor[4];
        UINT                        SampleMask;
        UINT                        StencilRef;
        ID3D11DepthStencilState*    DepthStencilState;
        ID3D11ShaderResourceView*   PSShaderResource;
        ID3D11SamplerState*         PSSampler;
        ID3D11PixelShader*          PS;
        ID3D11VertexShader*         VS;
        UINT                        PSInstancesCount, VSInstancesCount;
        ID3D11ClassInstance*        PSInstances[256], *VSInstances[256];   // 256 is max according to PSSetShader documentation
        D3D11_PRIMITIVE_TOPOLOGY    PrimitiveTopology;
        ID3D11Buffer*               IndexBuffer, *VertexBuffer, *VSConstantBuffer;
        UINT                        IndexBufferOffset, VertexBufferStride, VertexBufferOffset;
        DXGI_FORMAT                 IndexBufferFormat;
        ID3D11InputLayout*          InputLayout;
    };
    BACKUP_DX11_STATE old;
    old.ScissorRectsCount = old.ViewportsCount = D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE;
    ctx->RSGetScissorRects(&old.ScissorRectsCount, old.ScissorRects);
    ctx->RSGetViewports(&old.ViewportsCount, old.Viewports);
    ctx->RSGetState(&old.RS);
    ctx->OMGetBlendState(&old.BlendState, old.BlendFactor, &old.SampleMask);
    ctx->OMGetDepthStencilState(&old.DepthStencilState, &old.StencilRef);
    ctx->PSGetShaderResources(0, 1, &old.PSShaderResource);
    ctx->PSGetSamplers(0, 1, &old.PSSampler);
    old.PSInstancesCount = old.VSInstancesCount = 256;
    ctx->PSGetShader(&old.PS, old.PSInstances, &old.PSInstancesCount);
    ctx->VSGetShader(&old.VS, old.VSInstances, &old.VSInstancesCount);
    ctx->VSGetConstantBuffers(0, 1, &old.VSConstantBuffer);
    ctx->IAGetPrimitiveTopology(&old.PrimitiveTopology);
    ctx->IAGetIndexBuffer(&old.IndexBuffer, &old.IndexBufferFormat, &old.IndexBufferOffset);
    ctx->IAGetVertexBuffers(0, 1, &old.VertexBuffer, &old.VertexBufferStride, &old.VertexBufferOffset);
    ctx->IAGetInputLayout(&old.InputLayout);
    
    // DirectX data
static LPDIRECT3DDEVICE9        g_pd3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9  g_pVB = NULL;
static LPDIRECT3DINDEXBUFFER9   g_pIB = NULL;
static LPDIRECT3DTEXTURE9       g_FontTexture = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
        // Cleanup
    for (int n = 0; n < fonts.Size; n++)
        fonts[n].Shutdown();
    
    // Win32 Data
static HWND                 g_hWnd = 0;
static INT64                g_Time = 0;
static INT64                g_TicksPerSecond = 0;
static ImGuiMouseCursor     g_LastMouseCursor = ImGuiMouseCursor_COUNT;
    
    static int InputTextCallback(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserData* user_data = (InputTextCallback_UserData*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        // If for some reason we refuse the new length (BufTextLen) and/or capacity (BufSize) we need to set them back to what we want.
        std::string* str = user_data->Str;
        IM_ASSERT(data->Buf == str->c_str());
        str->resize(data->BufTextLen);
        data->Buf = (char*)str->c_str();
    }
    else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX10_CreateDeviceObjects();

    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        my_display_code();
    
    BENCHMARK_PARAM(BENCHFUN(insertFront), 16)
BENCHMARK_PARAM(BENCHFUN(insertFront), 128)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024)
BENCHMARK_PARAM(BENCHFUN(insertFront), 10240)
BENCHMARK_PARAM(BENCHFUN(insertFront), 102400)
BENCHMARK_PARAM(BENCHFUN(insertFront), 1024000)
    
    
    {} // namespace folly

    
    //////////////////////////////////////////////////////////////////////
    
    namespace uri_detail {
    }
    
      /**
   * 'The memLevel parameter specifies how much memory should be allocated for
   * the internal compression state. memLevel=1 uses minimum memory but is slow
   * and reduces compression ratio; memLevel=9 uses maximum memory for optimal
   * speed. The default value is 8.'
   */
  int memLevel;
    
    
    {      if (equiv == cpu) {
        // we only want to count the equiv classes once, so we do it when
        // we first encounter them
        while (numCachesByLevel.size() <= level) {
          numCachesByLevel.push_back(0);
        }
        numCachesByLevel[level]++;
      }
    }
    
    /**
 * This class creates core-local caches for a given shared_ptr, to
 * mitigate contention when acquiring/releasing it.
 *
 * All methods are threadsafe.  Hazard pointers are used to avoid
 * use-after-free for concurrent reset() and get() operations.
 *
 * Concurrent reset()s are sequenced with respect to each other: the
 * sharded shared_ptrs will always all be set to the same value.
 * get()s will never see a newer pointer on one core, and an older
 * pointer on another after a subsequent thread migration.
 */
template <class T, size_t kNumSlots = 64>
class AtomicCoreCachedSharedPtr {
 public:
  explicit AtomicCoreCachedSharedPtr(const std::shared_ptr<T>& p = nullptr) {
    reset(p);
  }
    }
    
    
    {}  // namespace guetzli
    
    void RowDct(coeff_t* in, const coeff_t* table) {
  // The Fourier transform is an unitary operator, so we're basically
  // doing the transpose of RowIdct()
  const int a0 = in[0] + in[7];
  const int b0 = in[0] - in[7];
  const int a1 = in[1] + in[6];
  const int b1 = in[1] - in[6];
  const int a2 = in[2] + in[5];
  const int b2 = in[2] - in[5];
  const int a3 = in[3] + in[4];
  const int b3 = in[3] - in[4];
    }
    
      std::string result;
  off_t buffer_size = 8192;
    
    #include <stddef.h>
#include <stdint.h>
#include <string>
#include <vector>
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
      // Read sampling factors and quant table index for each component.
  std::vector<bool> ids_seen(256, false);
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    const int id = ReadUint8(data, pos);
    if (ids_seen[id]) {   // (cf. section B.2.2, syntax of Ci)
      fprintf(stderr, 'Duplicate ID %d in SOF.\n', id);
      jpg->error = JPEG_DUPLICATE_COMPONENT_ID;
      return false;
    }
    ids_seen[id] = true;
    jpg->components[i].id = id;
    int factor = ReadUint8(data, pos);
    int h_samp_factor = factor >> 4;
    int v_samp_factor = factor & 0xf;
    VERIFY_INPUT(h_samp_factor, 1, 15, SAMP_FACTOR);
    VERIFY_INPUT(v_samp_factor, 1, 15, SAMP_FACTOR);
    jpg->components[i].h_samp_factor = h_samp_factor;
    jpg->components[i].v_samp_factor = v_samp_factor;
    jpg->components[i].quant_idx = ReadUint8(data, pos);
    jpg->max_h_samp_factor = std::max(jpg->max_h_samp_factor, h_samp_factor);
    jpg->max_v_samp_factor = std::max(jpg->max_v_samp_factor, v_samp_factor);
  }
    
    struct JpegHistogram {
  static const int kSize = kJpegHuffmanAlphabetSize + 1;
    }