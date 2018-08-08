
        
        // Implements the part of the interface that caches and returns remote
// device status attributes.
class WorkerCachePartial : public WorkerCacheInterface {
 public:
  bool GetDeviceLocalityNonBlocking(const string& device,
                                    DeviceLocality* locality) override;
    }
    
    
    {}  // namespace arg_min_max
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      double PrimalLossDerivative(const double wx, const double label,
                              const double example_weight) const final {
    if (label * wx >= 1) {
      return 0;
    }
    if (label * wx <= 1 - gamma) {
      return -label;
    }
    return (wx - label) / gamma;
  }
    
    #if TENSORFLOW_USE_SYCL
    
    The input audio has one row of the tensor for each channel in the audio file.
Each channel contains audio samples starting at the beginning of the audio and
having `1/samples_per_second` time between them. The output file will contain
all of the audio channels contained in the tensor.
    
    inline void AppendEscapedName(string *json, const string &name) {
  StrAppend(json, '\'name\':', Json::valueToQuotedString(name.c_str()).c_str());
}
    
    TEST_CASE('cursor/non-const-to-const-conversion') {
  torch::manual_seed(0);
  auto first = std::make_shared<TestModule>(1);
  auto second = std::make_shared<TestModule>(2);
  Container model(first, second);
    }
    
    TEST_CASE('Optim/ZeroGrad') {
  torch::manual_seed(0);
    }
    
        std::vector<int64_t> tensor2_expand_size(expand_batch_portion);
    tensor2_expand_size.insert(tensor2_expand_size.end(), {m2, p});
    
    #include 'RPC-inl.hpp'

    
    int main() {
  THLongStorage *storage1 = THLongStorage_newWithSize(STORAGE_SIZE);
  int64_t *data = storage1->data;
  for (int64_t i = 0; i < STORAGE_SIZE; i++)
    data[i] = i;
  std::vector<int64_t> vec(VEC_SIZE, 7);  // VEC_SIZE sevens
  std::unique_ptr<RPCMessage> msg_ptr =
    packMessage(1, 1.0f, 100l, -12, LLONG_MAX, storage1, vec);
  auto &msg = *msg_ptr;
    }
    
    /* Opaque object representing a Bidirectional stream creating engine. Created
 * and configured outside of this API to facilitate sharing with other
 * components */
typedef struct stream_engine {
  void* obj;
  void* annotation;
} stream_engine;
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    static void RunServer() {
  QpsWorker worker(FLAGS_driver_port, FLAGS_server_port, FLAGS_credential_type);
    }
    
    #endif  // GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    namespace grpc {
namespace {
    }
    }
    
    template <class T, class F>
double sum(const T& container, F functor) {
  double r = 0;
  for (auto v = container.begin(); v != container.end(); v++) {
    r += functor(*v);
  }
  return r;
}
    
    	static void _bind_methods();
    
    			bus_index = AudioServer::get_singleton()->thread_find_bus_index(bus);
    
    	GodotRestInfoContactResultCallback(btCollisionObject *p_self_object, PhysicsDirectSpaceState::ShapeRestInfo *p_result, const Set<RID> *p_exclude) :
			m_self_object(p_self_object),
			m_result(p_result),
			m_exclude(p_exclude),
			m_collided(false),
			m_min_distance(0) {}
    
    // Find a start of scan (SOS) marker.
int jpeg_decoder::locate_sos_marker()
{
  int c;
    }
    
            __inline long int float2int(float value)
        {
                return _mm_cvtss_si32(_mm_load_ss(&value));
        }
#elif (defined(_MSC_VER) && _MSC_VER >= 1400) && defined (_M_IX86)
        #include <math.h>
    
        /* Compute residual by subtracting product of denominator and first approximation from one */
    err_Q32 = silk_LSHIFT( ((opus_int32)1<<29) - silk_SMULWB(b32_nrm, b32_inv), 3 );        /* Q32                        */
    
        virtual void ForwardPass(const ValueRefs<ElemType>& inputs, ValueRefs<ElemType>& output, bool resetRNN) override;
    
    namespace rabit {
namespace utils {
extern 'C' {
  void (*Printf)(const char *fmt, ...) = Rprintf;
  void (*Assert)(int exp, const char *fmt, ...) = XGBoostAssert_R;
  void (*Check)(int exp, const char *fmt, ...) = XGBoostCheck_R;
  void (*Error)(const char *fmt, ...) = error;
}
}
}
    
      /*! \brief constructor */
  SparsePage() {
    this->Clear();
  }
  /*! \return number of instance in the page */
  inline size_t Size() const {
    return offset.size() - 1;
  }
  /*! \return estimation of memory cost of this page */
  inline size_t MemCostBytes() const {
    return offset.size() * sizeof(size_t) + data.size() * sizeof(Entry);
  }
  /*! \brief clear the page */
  inline void Clear() {
    base_rowid = 0;
    offset.clear();
    offset.push_back(0);
    data.clear();
  }
    
    class LogCallbackRegistry {
 public:
  using Callback = void (*)(const char*);
  LogCallbackRegistry()
    : log_callback_([] (const char* msg) { std::cerr << msg << std::endl; }) {}
  inline void Register(Callback log_callback) {
    this->log_callback_ = log_callback;
  }
  inline Callback Get() const {
    return log_callback_;
  }
 private:
  Callback log_callback_;
};
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
        // Count glyphs/ranges, initialize font
    int total_glyphs_count = 0;
    int total_ranges_count = 0;
    for (int input_i = 0; input_i < atlas->ConfigData.Size; input_i++) 
    {
        ImFontConfig& cfg = atlas->ConfigData[input_i];
        FreeTypeFont& font_face = fonts[input_i];
        IM_ASSERT(cfg.DstFont && (!cfg.DstFont->IsLoaded() || cfg.DstFont->ContainerAtlas == atlas));
    }
    
        // Setup orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPps (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right).
    // Being agnostic of whether <d3dx9.h> or <DirectXMath.h> can be used, we aren't relying on D3DXMatrixIdentity()/D3DXMatrixOrthoOffCenterLH() or DirectX::XMMatrixIdentity()/DirectX::XMMatrixOrthographicOffCenterLH()
    {
        float L = draw_data->DisplayPos.x + 0.5f;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x + 0.5f;
        float T = draw_data->DisplayPos.y + 0.5f;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y + 0.5f;
        D3DMATRIX mat_identity = { { 1.0f, 0.0f, 0.0f, 0.0f,  0.0f, 1.0f, 0.0f, 0.0f,  0.0f, 0.0f, 1.0f, 0.0f,  0.0f, 0.0f, 0.0f, 1.0f } };
        D3DMATRIX mat_projection =
        {
            2.0f/(R-L),   0.0f,         0.0f,  0.0f,
            0.0f,         2.0f/(T-B),   0.0f,  0.0f,
            0.0f,         0.0f,         0.5f,  0.0f,
            (L+R)/(L-R),  (T+B)/(B-T),  0.5f,  1.0f,
        };
        g_pd3dDevice->SetTransform(D3DTS_WORLD, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_VIEW, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_PROJECTION, &mat_projection);
    }
    
    static void check_vk_result(VkResult err)
{
    if (g_CheckVkResultFn)
        g_CheckVkResultFn(err);
}
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-06-29: Inputs: Added support for the ImGuiMouseCursor_Hand cursor.
//  2018-06-10: Inputs: Fixed handling of mouse wheel messages to support fine position messages (typically sent by track-pads).
//  2018-06-08: Misc: Extracted imgui_impl_win32.cpp/.h away from the old combined DX9/DX10/DX11/DX12 examples.
//  2018-03-20: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors and ImGuiBackendFlags_HasSetMousePos flags + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-02-20: Inputs: Added support for mouse cursors (ImGui::GetMouseCursor() value and WM_SETCURSOR message handling).
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-02-06: Inputs: Honoring the io.WantSetMousePos by repositioning the mouse (when using navigation and ImGuiConfigFlags_NavMoveMouse is set).
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-08: Inputs: Added mapping for ImGuiKey_Insert.
//  2018-01-05: Inputs: Added WM_LBUTTONDBLCLK double-click handlers for window classes with the CS_DBLCLKS flag.
//  2017-10-23: Inputs: Added WM_SYSKEYDOWN / WM_SYSKEYUP handlers so e.g. the VK_MENU key can be read.
//  2017-10-23: Inputs: Using Win32 ::SetCapture/::GetCapture() to retrieve mouse positions outside the client area when dragging. 
//  2016-11-12: Inputs: Only call Win32 ::SetCursor(NULL) when io.MouseDrawCursor is set.
    
            // Poll and handle inputs
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        s3eKeyboardUpdate();
        s3ePointerUpdate();
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
    
    {    // Create SwapChain, RenderPass, Framebuffer, etc.
    ImGui_ImplVulkanH_CreateWindowDataCommandBuffers(g_PhysicalDevice, g_Device, g_QueueFamily, wd, g_Allocator);
    ImGui_ImplVulkanH_CreateWindowDataSwapChainAndFramebuffer(g_PhysicalDevice, g_Device, wd, g_Allocator, width, height);
}