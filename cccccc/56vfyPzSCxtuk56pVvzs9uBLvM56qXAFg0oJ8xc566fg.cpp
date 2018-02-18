template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34>
internal::ValueArray34<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5,
    T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14,
    T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22,
    T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30,
    T31 v31, T32 v32, T33 v33, T34 v34) {
  return internal::ValueArray34<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34>(v1, v2, v3, v4, v5, v6, v7,
      v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22,
      v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34);
}
    
    // A set of macros for testing Google Test assertions or code that's expected
// to generate Google Test fatal failures.  It verifies that the given
// statement will cause exactly one fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_FATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_FATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - 'statement' cannot reference local non-static variables or
//     non-static members of the current object.
//   - 'statement' cannot return a value.
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  The AcceptsMacroThatExpandsToUnprotectedComma test in
// gtest_unittest.cc will fail to compile if we do that.
#define EXPECT_FATAL_FAILURE(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    // This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
class GTEST_API_ HasNewFatalFailureHelper
    : public TestPartResultReporterInterface {
 public:
  HasNewFatalFailureHelper();
  virtual ~HasNewFatalFailureHelper();
  virtual void ReportTestPartResult(const TestPartResult& result);
  bool has_new_fatal_failure() const { return has_new_fatal_failure_; }
 private:
  bool has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;
    }
    
    // Unary predicate assertion macros.
#define EXPECT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_FATAL_FAILURE_)
    
    // A unique type used as the default value for the arguments of class
// template Types.  This allows us to simulate variadic templates
// (e.g. Types<int>, Type<int, double>, and etc), which C++ doesn't
// support directly.
struct None {};
    
     private:
  void CalculatePrimesUpTo(int max) {
    ::std::fill(is_prime_, is_prime_ + is_prime_size_, true);
    is_prime_[0] = is_prime_[1] = false;
    }
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
        // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
    if (hud->show_another_window)
    {
        ImGui::Begin('Another Window', &hud->show_another_window);
        ImGui::Text('Hello from another window!');
        ImGui::ColorEdit3('Cube 1 Color', hud->cubeColor1);
        ImGui::ColorEdit3('Cube 2 Color', hud->cubeColor2);
        ImGui::SliderFloat('Rotation Speed', &hud->rotation_speed, 0.0f, 200.0f);
        if (ImGui::Button('Close Me'))
            hud->show_another_window = false;
        ImGui::End();
    }
    
        for (int n = 0; n < 50; n++)
    {
        printf('NewFrame() %d\n', n);
        io.DisplaySize = ImVec2(1920, 1080);
        io.DeltaTime = 1.0f / 60.0f;
        ImGui::NewFrame();
    }
    
    // 2D axis aligned bounding-box
// NB: we can't rely on ImVec2 math operators being available here
struct IMGUI_API ImRect
{
    ImVec2      Min;    // Upper-left
    ImVec2      Max;    // Lower-right
    }
    
        // Create the Render Pass:
    {
        VkAttachmentDescription attachment = {};
        attachment.format = g_SurfaceFormat.format;
        attachment.samples = VK_SAMPLE_COUNT_1_BIT;
        attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        attachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
        VkAttachmentReference color_attachment = {};
        color_attachment.attachment = 0;
        color_attachment.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        VkSubpassDescription subpass = {};
        subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        subpass.colorAttachmentCount = 1;
        subpass.pColorAttachments = &color_attachment;
        VkRenderPassCreateInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
        info.attachmentCount = 1;
        info.pAttachments = &attachment;
        info.subpassCount = 1;
        info.pSubpasses = &subpass;
        err = vkCreateRenderPass(g_Device, &info, g_Allocator, &g_RenderPass);
        check_vk_result(err);
    }
    
        // Setup orthographic projection matrix into our constant buffer
    {
        D3D11_MAPPED_SUBRESOURCE mapped_resource;
        if (ctx->Map(g_pVertexConstantBuffer, 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped_resource) != S_OK)
            return;
        VERTEX_CONSTANT_BUFFER* constant_buffer = (VERTEX_CONSTANT_BUFFER*)mapped_resource.pData;
        float L = 0.0f;
        float R = ImGui::GetIO().DisplaySize.x;
        float B = ImGui::GetIO().DisplaySize.y;
        float T = 0.0f;
        float mvp[4][4] =
        {
            { 2.0f/(R-L),   0.0f,           0.0f,       0.0f },
            { 0.0f,         2.0f/(T-B),     0.0f,       0.0f },
            { 0.0f,         0.0f,           0.5f,       0.0f },
            { (R+L)/(L-R),  (T+B)/(B-T),    0.5f,       1.0f },
        };
        memcpy(&constant_buffer->mvp, mvp, sizeof(mvp));
        ctx->Unmap(g_pVertexConstantBuffer, 0);
    }
    
        // Setup ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui_ImplDX11_Init(hwnd, g_pd3dDevice, g_pd3dDeviceContext);
    //io.NavFlags |= ImGuiNavFlags_EnableKeyboard;  // Enable Keyboard Controls
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, LoadCursor(NULL, IDC_ARROW), NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('ImGui DirectX9 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the opengl3_example/ folder**
// See imgui_impl_glfw.cpp for details.
    
    class GreeterServiceImpl final : public Greeter::Service {
  virtual grpc::Status SayHello(
      grpc::ServerContext *context,
      const flatbuffers::grpc::Message<HelloRequest> *request_msg,
      flatbuffers::grpc::Message<HelloReply> *response_msg) override {
    // flatbuffers::grpc::MessageBuilder mb_;
    // We call GetRoot to 'parse' the message. Verification is already
    // performed by default. See the notes below for more details.
    const HelloRequest *request = request_msg->GetRoot();
    }
    }
    
    inline flatbuffers::Offset<Enum> CreateEnumDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const std::vector<flatbuffers::Offset<EnumVal>> *values = nullptr,
    bool is_union = false,
    flatbuffers::Offset<Type> underlying_type = 0,
    const std::vector<flatbuffers::Offset<KeyValue>> *attributes = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *documentation = nullptr) {
  return reflection::CreateEnum(
      _fbb,
      name ? _fbb.CreateString(name) : 0,
      values ? _fbb.CreateVector<flatbuffers::Offset<EnumVal>>(*values) : 0,
      is_union,
      underlying_type,
      attributes ? _fbb.CreateVector<flatbuffers::Offset<KeyValue>>(*attributes) : 0,
      documentation ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*documentation) : 0);
}
    
    
    {
    {    printer->Print(vars, '\n');
  }
  return output;
}
    
    
    { public:
  LogHelper(std::ostream* os) : os_(os) {}
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning( \
    disable : 4722)  // the flow of control terminates in a destructor
  // (needed to compile ~LogHelper where destructor emits abort intentionally -
  // inherited from grpc/java code generator).
#endif
  ~LogHelper() {
    *os_ << std::endl;
    ::abort();
  }
#if defined(_MSC_VER)
#pragma warning(pop)
#endif
  std::ostream& get_os() const { return *os_; }
};
    
      virtual grpc::string filename() const = 0;
  virtual grpc::string filename_without_ext() const = 0;
  virtual grpc::string package() const = 0;
  virtual std::vector<grpc::string> package_parts() const = 0;
  virtual grpc::string additional_headers() const = 0;
    
    // The callback implementation of our server, that derives from the generated
// code. It implements all rpcs specified in the FlatBuffers schema.
class ServiceImpl final : public MyGame::Example::MonsterStorage::Service {
  virtual ::grpc::Status Store(
      ::grpc::ServerContext *context,
      const flatbuffers::grpc::Message<Monster> *request,
      flatbuffers::grpc::Message<Stat> *response) override {
    // Create a response from the incoming request name.
    fbb_.Clear();
    auto stat_offset = CreateStat(
        fbb_, fbb_.CreateString('Hello, ' + request->GetRoot()->name()->str()));
    fbb_.Finish(stat_offset);
    // Transfer ownership of the message to gRPC
    *response = fbb_.ReleaseMessage<Stat>();
    return grpc::Status::OK;
  }
  virtual ::grpc::Status Retrieve(
      ::grpc::ServerContext *context,
      const flatbuffers::grpc::Message<Stat> *request,
      ::grpc::ServerWriter<flatbuffers::grpc::Message<Monster>> *writer)
      override {
    for (int i = 0; i < 10; i++) {
      fbb_.Clear();
      // Create 10 monsters for resposne.
      auto monster_offset =
          CreateMonster(fbb_, 0, 0, 0,
                        fbb_.CreateString(request->GetRoot()->id()->str() +
                                          ' No.' + std::to_string(i)));
      fbb_.Finish(monster_offset);
    }
    }
    }
    
    // Offset/index used in v-tables, can be changed to uint8_t in
// format forks to save a bit of space if desired.
typedef uint16_t voffset_t;
    
    // pull out the type of messages sent by our config
typedef server::message_ptr message_ptr;
    
        m.lock();
    if (++connections % CONNECTIONS_PER_ADDRESS == 0) {
        address++;
    }
    
    int totalConnections = 500000;
int port = 3000;
    
        connections = atoi(argv[1]);
    byteSize = atoi(argv[2]);
    framesPerSend = atoi(argv[3]);
    int port = atoi(argv[4]);
    
    void echo()
{
    for (int i = 0; i < connections; i++) {
        // Write message on random socket
        uv_write(new uv_write_t, sockets[rand() % connections], &framePack, 1, [](uv_write_t *write_t, int status) {
            if (status < 0) {
                cout << 'Write error' << endl;
                exit(0);
            }
            delete write_t;
        });
    }
    }
    
        h.onDisconnection([closeMessage](uWS::WebSocket<uWS::CLIENT> *ws, int code, char *message, size_t length) {
        switch ((long) ws->getUserData()) {
        case 1:
            if (code == 1006) {
                std::cout << 'Client gets terminated on first connection' << std::endl;
            } else {
                std::cout << 'FAILURE: Terminate leads to invalid close code!' << std::endl;
                exit(-1);
            }
            break;
        case 2:
            if (code == 1000 && length == strlen(closeMessage) && !strncmp(closeMessage, message, length)) {
                std::cout << 'Client gets closed on second connection with correct close code' << std::endl;
            } else {
                std::cout << 'FAILURE: Close leads to invalid close code or message!' << std::endl;
                exit(-1);
            }
            break;
        }
    });
    
    #include 'Networking.h'
    
    
    {    int offset = 0;
    for (size_t i = 0; i < messages.size(); i++) {
        offset += WebSocketProtocol<isServer, WebSocket<isServer>>::formatMessage(preparedMessage->buffer + offset, messages[i].data(), messages[i].length(), opCode, messages[i].length(), compressed);
    }
    preparedMessage->length = offset;
    preparedMessage->references = 1;
    preparedMessage->callback = (void(*)(void *, void *, bool, void *)) callback;
    return preparedMessage;
}
    
    
    {    httpSocket->setState<HttpSocket<SERVER>>();
    httpSocket->start(httpSocket->nodeData->loop, httpSocket, httpSocket->setPoll(UV_READABLE));
    httpSocket->setNoDelay(true);
    Group<SERVER>::from(httpSocket)->addHttpSocket(httpSocket);
    Group<SERVER>::from(httpSocket)->httpConnectionHandler(httpSocket);
}
    
        void start(Loop *loop, Poll *self, int events) {
        epoll_event event;
        event.events = events;
        event.data.ptr = self;
        epoll_ctl(loop->epfd, EPOLL_CTL_ADD, state.fd, &event);
    }