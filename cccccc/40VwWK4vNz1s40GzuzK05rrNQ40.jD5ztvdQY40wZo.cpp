 private:
  typedef std::map<ui::Accelerator, base::Closure> AcceleratorCallbackMap;
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
      // C++ can not distinguish overloaded member function.
  template<AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template<AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template<typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
    void Event::SetSenderAndMessage(content::WebContents* sender,
                                IPC::Message* message) {
  DCHECK(!sender_);
  DCHECK(!message_);
  sender_ = sender;
  message_ = message;
    }
    
    namespace atom {
    }
    
    class AtomQuotaPermissionContext : public content::QuotaPermissionContext {
 public:
  typedef content::QuotaPermissionContext::QuotaPermissionResponse response;
    }
    
    AsarProtocolHandler::AsarProtocolHandler(
    const scoped_refptr<base::TaskRunner>& file_task_runner)
    : file_task_runner_(file_task_runner) {}
    
    net::URLRequestJob* HttpProtocolHandler::MaybeCreateJob(
    net::URLRequest* request,
    net::NetworkDelegate* network_delegate) const {
  return net::URLRequestHttpJob::Factory(request,
                                         network_delegate,
                                         scheme_);
}
    
    
    {}  // namespace atom
    
    #include <string>
    
    /// This class is a higher level interface to the ownership checker meant for
/// use with SILPasses. It uses the actual checker as an internal PImpl detail
/// so types/etc do not leak.
struct OwnershipChecker {
  /// The module that we are in.
  SILModule &Mod;
    }
    
    #endif // SWIFT_INDEX_INDEXRECORD_H

    
      swift::markup::CommentParts getParts() const {
    return Parts;
  }
    
    #include 'swift/Syntax/Rewriter.h'
    
    #endif // SWIFT_BASIC_DIAGNOSTICOPTIONS_H

    
    #include 'llvm/ADT/IntrusiveRefCntPtr.h'
    
    bool Substitution::isCanonical() const {
  if (!getReplacement()->isCanonical())
    return false;
  for (auto conf : getConformances()) {
    if (!conf.isCanonical())
      return false;
  }
  return true;
}

    
      // Get the hash value for the kernel's .text memory segment
  auto f2 = osquery::readFile(kKernelTextHashPath, content);
  if (f2.ok()) {
    boost::trim(content);
    text_segment_hash = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelTextHashPath;
    return results;
  }
    
     protected:
  /// A helper value counting the number of fired events tracked by publishers.
  EventContextID event_count_{0};
    
    
    {
    { private:
  /// Friendly flag name.
  std::string name_;
};
} // namespace osquery
    
    /**
 * @brief Create an osquery extension 'module', if an expression is true.
 *
 * This is a helper testing wrapper around CREATE_MODULE and DECLARE_MODULE.
 * It allows unit and integration tests to generate global construction code
 * that depends on data/variables available during global construction.
 *
 * And example use includes checking if a process environment variable is
 * defined. If defined the module is declared.
 */
#define CREATE_MODULE_IF(expr, name, version, min_sdk_version)                 \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      if ((expr)) {                                                            \
        Registry::get().declareModule(                                         \
            name, version, min_sdk_version, OSQUERY_SDK_VERSION);              \
      }                                                                        \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
    using ModuleHandle = void*;
    
    
    {
    {  return readFile(value, pack);
}
}

    
    #include 'comm/comm_frequency_limit.h'
#include 'comm/xlogger/xlogger.h'
#include 'comm/time_utils.h'
    
            __FirstGetCreater(T::ServiceName());
    
    jvalue JNU_CallMethodByMethodInfo(JNIEnv* _env, jobject _obj, JniMethodInfo _method_info, ...);
    
        if      (numlit ==     0)    ;
    else if (numlit <=    32)    stb_out (0x000020 + numlit-1);
    else if (numlit <=  2048)    stb_out2(0x000800 + numlit-1);
    else /*  numlit <= 65536) */ stb_out3(0x070000 + numlit-1);
    
    
    {        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
    }
    
    void ImGui_Marmalade_NewFrame()
{
    if (!g_FontTexture)
        ImGui_Marmalade_CreateDeviceObjects();
    }
    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplSdlGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplSdlGL2_CreateDeviceObjects();

    
    HRESULT CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
        // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    int display_w, display_h;
    SDL_GetWindowSize(window, &w, &h);
    SDL_GL_GetDrawableSize(window, &display_w, &display_h);
    io.DisplaySize = ImVec2((float)w, (float)h);
    io.DisplayFramebufferScale = ImVec2(w > 0 ? ((float)display_w / w) : 0, h > 0 ? ((float)display_h / h) : 0);