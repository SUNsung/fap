
        
        
    {
    {      // white-space before a colon means it's not a URL
      if (c == ' ' || (0x9 <= c && c <= 0xD))
        break;
    }
  }
    
    #include 'atom/browser/native_window_views.h'
    
    namespace mate {
    }
    
    void Screen::OnDisplayMetricsChanged(const display::Display& display,
                                     uint32_t changed_metrics) {
  Emit('display-metrics-changed', display, MetricsToArray(changed_metrics));
}
    
    void Event::RenderFrameHostChanged(content::RenderFrameHost* old_rfh,
                                   content::RenderFrameHost* new_rfh) {
  if (sender_ && sender_ == old_rfh)
    sender_ = new_rfh;
}
    
    
    {}  // namespace atom
    
      // content::JavaScriptDialogManager implementations.
  void RunJavaScriptDialog(content::WebContents* web_contents,
                           content::RenderFrameHost* rfh,
                           content::JavaScriptDialogType dialog_type,
                           const base::string16& message_text,
                           const base::string16& default_prompt_text,
                           DialogClosedCallback callback,
                           bool* did_suppress_message) override;
  void RunBeforeUnloadDialog(content::WebContents* web_contents,
                             content::RenderFrameHost* rfh,
                             bool is_reload,
                             DialogClosedCallback callback) override;
  void CancelDialogs(content::WebContents* web_contents,
                     bool reset_state) override;
    
    #if defined(OS_LINUX)
typedef PowerObserverLinux PowerObserver;
#else
typedef base::PowerObserver PowerObserver;
#endif  // defined(OS_LINUX)
    
    #ifndef PREPOSITION
#  define PREPOSITION(Word)
#endif
    
    
    {} // end anonymous namespace
    
      bool isValid() const { return IsValid; }
  explicit operator bool() const { return isValid(); }
    
    #include 'ClangDiagnosticConsumer.h'
#include 'ImporterImpl.h'
#include 'swift/AST/ASTContext.h'
#include 'swift/AST/DiagnosticEngine.h'
#include 'swift/AST/DiagnosticsClangImporter.h'
#include 'clang/AST/ASTContext.h'
#include 'clang/Frontend/DiagnosticRenderer.h'
#include 'clang/Frontend/FrontendDiagnostic.h'
#include 'clang/Lex/LexDiagnostic.h'
#include 'llvm/ADT/STLExtras.h'
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    void ProtoServerReflection::FillFileDescriptorResponse(
    const protobuf::FileDescriptor* file_desc,
    ServerReflectionResponse* response,
    std::unordered_set<grpc::string>* seen_files) {
  if (seen_files->find(file_desc->name()) != seen_files->end()) {
    return;
  }
  seen_files->insert(file_desc->name());
    }
    
      // implementation of ServerReflectionInfo(stream ServerReflectionRequest) rpc
  // in ServerReflection service
  Status ServerReflectionInfo(
      ServerContext* context,
      ServerReaderWriter<reflection::v1alpha::ServerReflectionResponse,
                         reflection::v1alpha::ServerReflectionRequest>* stream)
      override;
    
    // Force InitProtoReflectionServerBuilderPlugin() to be called at static
// initialization time.
struct StaticProtoReflectionPluginInitializer {
  StaticProtoReflectionPluginInitializer() {
    InitProtoReflectionServerBuilderPlugin();
  }
} static_proto_reflection_plugin_initializer;
    
    //
// Api
//
    
    	int			m_numIterations;
	int			m_solverMode;
	int			m_restingContactRestitutionThreshold;
	int			m_minimumSolverBatchSize;
    
    
    {	b3Scalar impulseClamp = m_setting.m_impulseClamp;//
	for (j=0; j<3; j++)
    {
		if (m_setting.m_impulseClamp > 0)
		{
			info->m_lowerLimit[j*info->rowskip] = -impulseClamp;
			info->m_upperLimit[j*info->rowskip] = impulseClamp;
		}
	}
	info->m_damping = m_setting.m_damping;
	
}
    
    				const b3Vector3& N3 = planeEquations[k];
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();

    
        // Setup back-end capabilities flags
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;       // We can honor GetMouseCursor() values (optional)
    io.BackendPlatformName = io.BackendRendererName = 'imgui_impl_allegro5';
    
        // Setup time step
    INT64 current_time;
    ::QueryPerformanceCounter((LARGE_INTEGER *)&current_time);
    io.DeltaTime = (float)(current_time - g_Time) / g_TicksPerSecond;
    g_Time = current_time;