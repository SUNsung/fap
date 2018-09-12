
        
        namespace tesseract {
double DotProductAVX(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductAVX can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
    
    {  // Number of 32 bit outputs held in each register.
  int num_outputs_per_register_;
  // Maximum number of registers that we will use to hold outputs.
  int max_output_registers_;
  // Number of 8 bit inputs in the inputs register.
  int num_inputs_per_register_;
  // Number of inputs in each weight group.
  int num_inputs_per_group_;
  // Number of groups of inputs to be broadcast.
  int num_input_groups_;
  // The weights matrix reorganized in whatever way suits this instance.
  std::vector<int8_t> shaped_w_;
  // A series of functions to compute a partial result.
  std::vector<PartialFunc> partial_funcs_;
};
    
    namespace tesseract {
  class Tesseract;
}
    
    struct grpc_channel;
    
    static internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
      std::shared_ptr<grpc::Channel> CreateChannel(
      const string& target, const grpc::ChannelArguments& args) override;
  SecureChannelCredentials* AsSecureCredentials() override { return this; }
    
    
    {void Alarm::Cancel() { static_cast<internal::AlarmImpl*>(alarm_)->Cancel(); }
}  // namespace grpc

    
    SecureAuthContext::SecureAuthContext(grpc_auth_context* ctx,
                                     bool take_ownership)
    : ctx_(ctx), take_ownership_(take_ownership) {}
    
    
    {}  // namespace grpc
    
      void StartTransportStreamOpBatch(grpc_call_element* elem,
                                   TransportStreamOpBatch* op) override;
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    /*!
 * \brief Registry entry for predictor.
 */
struct PredictorReg
    : public dmlc::FunctionRegEntryBase<PredictorReg,
                                        std::function<Predictor*()>> {};
    
    #include <xgboost/data.h>
#include <algorithm>
#include <vector>
    
      size_t GetColSize(size_t cidx) const override {
    return col_size_[cidx];
  }
    
    void SparsePageWriter::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
        ImGui_ImplSDL2_InitForOpenGL(window, gl_context);
    ImGui_ImplOpenGL2_Init();
    
            err = vkResetCommandPool(g_Device, command_pool, 0);
        check_vk_result(err);
        VkCommandBufferBeginInfo begin_info = {};
        begin_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        begin_info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        err = vkBeginCommandBuffer(command_buffer, &begin_info);
        check_vk_result(err);
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // Poll and handle messages (inputs, window resize, etc.)
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
    }
    
    #include 'imgui.h'
#include 'imgui_impl_dx9.h'
#include 'imgui_impl_win32.h'
#include <d3d9.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>
    
    // GLFW
#include <GLFW/glfw3.h>
#ifdef _WIN32
#undef APIENTRY
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>   // for glfwGetWin32Window
#endif
#define GLFW_HAS_WINDOW_TOPMOST     (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3200) // 3.2+ GLFW_FLOATING
#define GLFW_HAS_WINDOW_HOVERED     (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3300) // 3.3+ GLFW_HOVERED
#define GLFW_HAS_WINDOW_ALPHA       (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3300) // 3.3+ glfwSetWindowOpacity
#define GLFW_HAS_PER_MONITOR_DPI    (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3300) // 3.3+ glfwGetMonitorContentScale
#define GLFW_HAS_VULKAN             (GLFW_VERSION_MAJOR * 1000 + GLFW_VERSION_MINOR * 100 >= 3200) // 3.2+ glfwCreateWindowSurface