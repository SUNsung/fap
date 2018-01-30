
        
          brightray::ContentClient content_client_;
  std::unique_ptr<content::ContentBrowserClient> browser_client_;
  std::unique_ptr<content::ContentRendererClient> renderer_client_;
  std::unique_ptr<content::ContentUtilityClient> utility_client_;
    
    #endif  // ATOM_BROWSER_API_ATOM_API_DEBUGGER_H_

    
    void Initialize(v8::Local<v8::Object> exports, v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context, void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary dict(isolate, exports);
  dict.Set('globalShortcut', atom::api::GlobalShortcut::Create(isolate));
}
    
    class RenderProcessPreferences
    : public mate::Wrappable<RenderProcessPreferences> {
 public:
  static mate::Handle<RenderProcessPreferences>
      ForAllWebContents(v8::Isolate* isolate);
    }
    
    
    {  return v8::Local<v8::ObjectTemplate>::New(
      isolate, event_template)->NewInstance();
}
    
    
    {}  // namespace atom
    
    void AutoUpdater::QuitAndInstall() {
}
#endif
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    #include 'atom/browser/net/js_asker.h'
#include 'base/memory/ref_counted_memory.h'
#include 'net/http/http_status_code.h'
#include 'net/url_request/url_request_simple_job.h'
    
    /** \brief Lightweight wrapper to tag static string.
 *
 * Value constructor and objectValue member assignement takes advantage of the
 * StaticString and avoid the cost of string duplication when storing the
 * string or the member name.
 *
 * Example of usage:
 * \code
 * Json::Value aValue( StaticString('some text') );
 * Json::Value object;
 * static const StaticString code('code');
 * object[code] = 1234;
 * \endcode
 */
class JSON_API StaticString {
public:
  explicit StaticString(const char* czstring) : c_str_(czstring) {}
    }
    
    class Descriptor;
class FileDescriptor;
class EnumDescriptor;
class OneofDescriptor;
class ServiceDescriptor;
    
    struct CMessage;
struct CMessageClass;
    
    class EnumGenerator : public SourceGeneratorBase {
 public:
  EnumGenerator(const EnumDescriptor* descriptor, const Options* options);
  ~EnumGenerator();
    }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    class ReflectionClassGenerator : public SourceGeneratorBase {
 public:
  ReflectionClassGenerator(const FileDescriptor* file, const Options* options);
  ~ReflectionClassGenerator();
    }
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedEnumFieldGenerator);
};
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    // Generates code for a lite extension, which may be within the scope of some
// message or may be at file scope.  This is much simpler than FieldGenerator
// since extensions are just simple identifiers with interesting types.
class ImmutableExtensionLiteGenerator : public ExtensionGenerator {
 public:
  explicit ImmutableExtensionLiteGenerator(const FieldDescriptor* descriptor,
                                           Context* context);
  virtual ~ImmutableExtensionLiteGenerator();
    }
    
    extern const std::string NIL;
    
    void AbstractAuthResolver::setDefaultCred(std::string user,
                                          std::string password)
{
  defaultUser_ = std::move(user);
  defaultPassword_ = std::move(password);
}
    
    namespace aria2 {
    }
    
    AbstractBtMessage::~AbstractBtMessage() = default;
    
    bool AbstractProxyRequestCommand::executeInternal()
{
  // socket->setBlockingMode();
  if (httpConnection_->sendBufferIsEmpty()) {
    auto httpRequest = make_unique<HttpRequest>();
    httpRequest->setUserAgent(getOption()->get(PREF_USER_AGENT));
    httpRequest->setRequest(getRequest());
    httpRequest->setProxyRequest(proxyRequest_);
    }
    }
    
      virtual ~AbstractProxyRequestCommand();
    
    
    {  void setBtAnnounce(const std::shared_ptr<BtAnnounce>& btAnnounce);
};
    
    #include <memory>
    
      AnnounceEvent event;
  std::deque<std::string> urls;
    
    #include 'DiskWriterFactory.h'
#include 'a2functional.h'
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    
    {} // namespace aria2