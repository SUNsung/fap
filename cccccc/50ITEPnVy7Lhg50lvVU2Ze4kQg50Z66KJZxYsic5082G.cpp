
        
        #include <map>
    
    AutoUpdater::AutoUpdater(v8::Isolate* isolate) {
  auto_updater::AutoUpdater::SetDelegate(this);
  Init(isolate);
}
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  mate::Dictionary dict(context->GetIsolate(), exports);
  dict.SetMethod('showMessageBox', &ShowMessageBox);
  dict.SetMethod('showErrorBox', &atom::ShowErrorBox);
  dict.SetMethod('showOpenDialog', &ShowOpenDialog);
  dict.SetMethod('showSaveDialog', &ShowSaveDialog);
#if defined(OS_MACOSX) || defined(OS_WIN)
  dict.SetMethod('showCertificateTrustDialog',
                 &certificate_trust::ShowCertificateTrust);
#endif
}
    
      void Pause();
  bool IsPaused() const;
  void Resume();
  bool CanResume() const;
  void Cancel();
  int64_t GetReceivedBytes() const;
  int64_t GetTotalBytes() const;
  std::string GetMimeType() const;
  bool HasUserGesture() const;
  std::string GetFilename() const;
  std::string GetContentDisposition() const;
  const GURL& GetURL() const;
  const std::vector<GURL>& GetURLChain() const;
  download::DownloadItem::DownloadState GetState() const;
  bool IsDone() const;
  void SetSavePath(const base::FilePath& path);
  base::FilePath GetSavePath() const;
  std::string GetLastModifiedTime() const;
  std::string GetETag() const;
  double GetStartTime() const;
    
    #endif  // ATOM_BROWSER_API_ATOM_API_GLOBAL_SHORTCUT_H_

    
    
    {  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .MakeDestroyable()
#if defined(OS_LINUX)
      .SetMethod('blockShutdown', &PowerMonitor::BlockShutdown)
      .SetMethod('unblockShutdown', &PowerMonitor::UnblockShutdown)
#endif
      .SetMethod('querySystemIdleState', &PowerMonitor::QuerySystemIdleState)
      .SetMethod('querySystemIdleTime', &PowerMonitor::QuerySystemIdleTime);
}
    
    #include <map>
#include <memory>
    
    class Tray : public mate::TrackableObject<Tray>, public TrayIconObserver {
 public:
  static mate::WrappableBase* New(mate::Handle<NativeImage> image,
                                  mate::Arguments* args);
    }
    
    namespace atom {
    }
    
    void Event::FrameDeleted(content::RenderFrameHost* rfh) {
  if (sender_ != rfh)
    return;
  sender_ = nullptr;
  message_ = nullptr;
}
    
          if (node->Further) {
        // Further indent, and include the line to the right child if
        // there is one.
        IndentScope is(this, node->Right ? '|   ' : '    ');
        print(node->Further, ChildKind::Further);
      }
    
        // Special case: 'ObjectValue' in the name matches 'Object' in the
    // type.
    if (matchNameWordToTypeWord('Object', *typeWordRevIter) &&
        matchNameWordToTypeWord(nameWord, 'Value')) {
      auto nextNameWordRevIter = std::next(nameWordRevIter);
      if (nextNameWordRevIter != nameWordRevIterEnd &&
          matchNameWordToTypeWord(*nextNameWordRevIter, 'Object')) {
        matched();
        nameWordRevIter = nextNameWordRevIter;
        ++nameWordRevIter;
        ++typeWordRevIter;
        continue;
      }
    }
    
      static CFPointeeInfo forTypedef(const clang::TypedefNameDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = false;
    info.Decl = decl;
    return info;
  }
    
      // Instance members
  IAMResult(DeclName declName, unsigned selfIdx, EffectiveClangContext dc)
      : name(declName), selfIndex(selfIdx), effectiveDC(dc) {}
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    
    {
    {
    {
    {bool AnnotationMatchesSubstring(const string& file_content,
                                const GeneratedCodeInfo::Annotation* annotation,
                                const string& expected_text) {
  std::vector<const GeneratedCodeInfo::Annotation*> annotations;
  annotations.push_back(annotation);
  return AtLeastOneAnnotationMatchesSubstring(file_content, annotations,
                                              expected_text);
}
}  // namespace annotation_test_util
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
        std::vector<string> lines = Split(comments, '\n');
    while (!lines.empty() && lines.back().empty()) {
      lines.pop_back();
    }
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
    string ClassNameResolver::GetJavaImmutableClassName(
    const EnumDescriptor* descriptor) {
  return GetJavaClassFullName(
      ClassNameWithoutPackage(descriptor, true),
      descriptor->file(), true);
}
    
    #include <google/protobuf/compiler/java/java_shared_code_generator.h>
    
      void GenerateMembersHeader(io::Printer* printer);
  void GenerateStaticVariablesInitialization(io::Printer* printer);
  void GenerateRegistrationSource(io::Printer* printer);
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    
    {}  // namespace grpc
    
    void SetCreateThreadPool(CreateThreadPoolFunc func) { g_ctp_impl = func; }