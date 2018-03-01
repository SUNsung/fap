
        
          // content::DevToolsAgentHostClient:
  void AgentHostClosed(content::DevToolsAgentHost* agent_host,
                       bool replaced_with_another_client) override;
  void DispatchProtocolMessage(content::DevToolsAgentHost* agent_host,
                               const std::string& message) override;
    
     private:
  std::unique_ptr<DesktopMediaList> media_list_;
    
    namespace api {
    }
    
    
    {}  // namespace atom

    
    LoginHandler::LoginHandler(net::AuthChallengeInfo* auth_info,
                           net::URLRequest* request)
    : handled_auth_(false),
      auth_info_(auth_info),
      request_(request),
      render_process_host_id_(0),
      render_frame_id_(0) {
  content::ResourceRequestInfo::ForRequest(request_)->GetAssociatedRenderFrame(
      &render_process_host_id_,  &render_frame_id_);
    }
    
    #ifndef ATOM_BROWSER_LOGIN_HANDLER_H_
#define ATOM_BROWSER_LOGIN_HANDLER_H_
    
    #include 'atom/browser/net/http_protocol_handler.h'
    
    #include <string>
    
    
    {}  // namespace atom
    
      void SetMenu(AtomMenuModel* menu_model);
  bool IsServerStarted() const;
    
      string model_file   = argv[1];
  string trained_file = argv[2];
  string mean_file    = argv[3];
  string label_file   = argv[4];
  Classifier classifier(model_file, trained_file, mean_file, label_file);
    
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
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    #include 'caffe/layers/lrn_layer.hpp'
    
    #include <vector>
    
    
    {  int M_;
  int K_;
  int N_;
  bool bias_term_;
  Blob<Dtype> bias_multiplier_;
};
    
      /**
   * @brief Computes the error gradient w.r.t. the exp inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \frac{\partial E}{\partial y} y \alpha \log_e(gamma)
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      /**
   * @brief Computes the error gradient w.r.t. the forwarded inputs.
   *
   * @param top output Blob vector (length 1+), providing the error gradient with
   *        respect to the outputs
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2+), into which the top error
   *        gradient is copied
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
    const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
          EXPECT_EQ((void*)1, tag);
      // If not shutting down, ok must be true for new requests.
      {
        std::lock_guard<std::mutex> lock(mu);
        if (!shutting_down && !ok) {
          gpr_log(GPR_INFO, '!ok on request %d', n);
          abort();
        }
        if (shutting_down && !ok) {
          // Failed connection due to shutdown, continue flushing the CQ.
          continue;
        }
      }
    
    #include 'src/proto/grpc/testing/control.pb.h'
#include 'test/cpp/qps/histogram.h'
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
      // Set up security params
  SecurityParams security;
  security.set_use_test_ca(true);
  security.set_server_host_override('foo.test.google.fr');
  client_config.mutable_security_params()->CopyFrom(security);
  server_config.mutable_security_params()->CopyFrom(security);
    
    #ifdef BAZEL_BUILD
#include 'examples/protos/helloworld.grpc.pb.h'
#else
#include 'helloworld.grpc.pb.h'
#endif
    
    
    {  // Get all comments (leading, leading_detached, trailing) and print them as a
  // docstring. Any leading space of a line will be removed, but the line
  // wrapping will not be changed.
  void PrintAllComments(std::vector<grpc::string> comments,
                        grpc_generator::Printer* out);
};
    
        if (0 != st.hash && st.hash != adler32(0, (const unsigned char*)_rawbuf + st.head_length, st.total_length - st.head_length)) { return __LINE__; }
    
      public:
    template<typename T>
    T* Service() {
        if (m_publicservices.end() != m_publicservices.find(T::ServiceName()))
            return (T*)m_publicservices[T::ServiceName()];
    }
    
    
#define DEFINE_HAS_MEMBER_WITH_TYPE(member_name, member_type) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <member_type (T::*)> struct tester;\
        template <typename U> static yes_type test(tester<&U::member_name>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
        for (int n = 0; n < 50; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
    // Data
static ALLEGRO_DISPLAY*         g_Display = NULL;
static ALLEGRO_BITMAP*          g_Texture = NULL;
static double                   g_Time = 0.0;
static ALLEGRO_MOUSE_CURSOR*    g_MouseCursorInvisible = NULL;
static ALLEGRO_VERTEX_DECL*     g_VertexDecl = NULL;
    
    IMGUI_API bool        ImGui_ImplDX10_Init(void* hwnd, ID3D10Device* device);
IMGUI_API void        ImGui_ImplDX10_Shutdown();
IMGUI_API void        ImGui_ImplDX10_NewFrame();
IMGUI_API void        ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplSdlGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplSdlGL2_CreateDeviceObjects();

    
        g_Window = window;
    
    
    {    return true;
}
    
        ImVec2      MousePos;                       // Mouse position, in pixels. Set to ImVec2(-FLT_MAX,-FLT_MAX) if mouse is unavailable (on another screen, etc.)
    bool        MouseDown[5];                   // Mouse buttons: left, right, middle + extras. ImGui itself mostly only uses left button (BeginPopupContext** are using right button). Others buttons allows us to track if the mouse is being used by your application + available to user as a convenience via IsMouse** API.
    float       MouseWheel;                     // Mouse wheel: 1 unit scrolls about 5 lines text. 
    float       MouseWheelH;                    // Mouse wheel (Horizontal). Most users don't have a mouse with an horizontal wheel, may not be filled by all back-ends.
    bool        MouseDrawCursor;                // Request ImGui to draw a mouse cursor for you (if you are on a platform without a mouse cursor).
    bool        KeyCtrl;                        // Keyboard modifier pressed: Control
    bool        KeyShift;                       // Keyboard modifier pressed: Shift
    bool        KeyAlt;                         // Keyboard modifier pressed: Alt
    bool        KeySuper;                       // Keyboard modifier pressed: Cmd/Super/Windows
    bool        KeysDown[512];                  // Keyboard keys that are pressed (ideally left in the 'native' order your engine has access to keyboard keys, so you can use your own defines/enums for keys).
    ImWchar     InputCharacters[16+1];          // List of characters input (translated by user from keypress+keyboard state). Fill using AddInputCharacter() helper.
    float       NavInputs[ImGuiNavInput_COUNT]; // Gamepad inputs (keyboard keys will be auto-mapped and be written here by ImGui::NewFrame)
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
        ImGui_ImplDX10_NewFrame();
    }
    
        UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
        return E_FAIL;
    
    
    {  __android_log_print(ANDROID_LOG_INFO, 'FlatBufferSample',
      'FlatBuffer successfully created and verified.');
}

    
    
    {  return 0;
}

    
    
    {  virtual grpc::string get_input_type_name() const = 0;
  virtual grpc::string get_output_type_name() const = 0;
  virtual bool NoStreaming() const = 0;
  virtual bool ClientStreaming() const = 0;
  virtual bool ServerStreaming() const = 0;
  virtual bool BidiStreaming() const = 0;
};
    
      // Modify any parsing / output options used by the other functions.
  void SetOptions(const IDLOptions &opts) { opts_ = opts; }
    
      const flatbuffers::FlatCompiler::Generator generators[] = {
    { flatbuffers::GenerateBinary, '-b', '--binary', 'binary', false, nullptr,
      flatbuffers::IDLOptions::kBinary,
      'Generate wire format binaries for any data definitions',
      flatbuffers::BinaryMakeRule },
    { flatbuffers::GenerateTextFile, '-t', '--json', 'text', false, nullptr,
      flatbuffers::IDLOptions::kJson,
      'Generate text output for any data definitions',
      flatbuffers::TextMakeRule },
    { flatbuffers::GenerateCPP, '-c', '--cpp', 'C++', true,
      flatbuffers::GenerateCppGRPC, flatbuffers::IDLOptions::kCpp,
      'Generate C++ headers for tables/structs', flatbuffers::CPPMakeRule },
    { flatbuffers::GenerateGo, '-g', '--go', 'Go', true,
      flatbuffers::GenerateGoGRPC, flatbuffers::IDLOptions::kGo,
      'Generate Go files for tables/structs', flatbuffers::GeneralMakeRule },
    { flatbuffers::GenerateGeneral, '-j', '--java', 'Java', true,
      flatbuffers::GenerateJavaGRPC, flatbuffers::IDLOptions::kJava,
      'Generate Java classes for tables/structs',
      flatbuffers::GeneralMakeRule },
    { flatbuffers::GenerateJS, '-s', '--js', 'JavaScript', true, nullptr,
      flatbuffers::IDLOptions::kJs,
      'Generate JavaScript code for tables/structs', flatbuffers::JSMakeRule },
    { flatbuffers::GenerateJS, '-T', '--ts', 'TypeScript', true, nullptr,
      flatbuffers::IDLOptions::kTs,
      'Generate TypeScript code for tables/structs', flatbuffers::JSMakeRule },
    { flatbuffers::GenerateGeneral, '-n', '--csharp', 'C#', true, nullptr,
      flatbuffers::IDLOptions::kCSharp,
      'Generate C# classes for tables/structs', flatbuffers::GeneralMakeRule },
    { flatbuffers::GeneratePython, '-p', '--python', 'Python', true, nullptr,
      flatbuffers::IDLOptions::kPython,
      'Generate Python files for tables/structs',
      flatbuffers::GeneralMakeRule },
    { flatbuffers::GeneratePhp, nullptr, '--php', 'PHP', true, nullptr,
      flatbuffers::IDLOptions::kPhp, 'Generate PHP files for tables/structs',
      flatbuffers::GeneralMakeRule },
    { flatbuffers::GenerateJsonSchema, nullptr, '--jsonschema', 'JsonSchema',
      true, nullptr, flatbuffers::IDLOptions::kJsonSchema,
      'Generate Json schema', flatbuffers::GeneralMakeRule },
  };
    
    static std::string GenTypePointer(const Type &type) {
  switch (type.base_type) {
    case BASE_TYPE_STRING: return '[]byte';
    case BASE_TYPE_VECTOR: return GenTypeGet(type.VectorType());
    case BASE_TYPE_STRUCT: return type.struct_def->name;
    case BASE_TYPE_UNION:
      // fall through
    default: return '*flatbuffers.Table';
  }
}