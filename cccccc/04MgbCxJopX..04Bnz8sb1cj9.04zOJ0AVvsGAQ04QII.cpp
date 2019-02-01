
        
        
    {  return false;
}
    
    
    {}  // namespace atom
    
    
    {}  // namespace api
    
    #include <string>
    
    AtomQuotaPermissionContext::AtomQuotaPermissionContext() {}
    
    void AutoUpdater::SetDelegate(Delegate* delegate) {
  delegate_ = delegate;
}
    
      // Checking to see if there is an update
  virtual void OnCheckingForUpdate() {}
    
    #if defined(OS_LINUX)
#include 'atom/browser/lib/power_observer_linux.h'
#else
#include 'base/power_monitor/power_observer.h'
#endif  // defined(OS_LINUX)
    
    
    {}  // namespace in_app_purchase
    
    #include 'atom/browser/net/about_protocol_handler.h'
    
    #include 'net/url_request/url_request_job_factory.h'
    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    // Get string from resource_id.
base::StringPiece GetStringResource(int resource_id);
    
    MenuDelegate::MenuDelegate(ObjectManager* object_manager)
    : object_manager_(object_manager) {
}
    
    bool NwObjCallObjectMethodFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
        // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    namespace {
string GetTypeUrl(const Descriptor* message,
                  const string& type_url_prefix) {
  if (!type_url_prefix.empty() &&
      type_url_prefix[type_url_prefix.size() - 1] == '/') {
    return type_url_prefix + message->full_name();
  } else {
    return type_url_prefix + '/' + message->full_name();
  }
}
}  // namespace
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    EnumGenerator::~EnumGenerator() {
}
    
    
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_message.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
#include <google/protobuf/compiler/csharp/csharp_reflection_class.h>
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    
    {    prev = c;
  }
    
    ImmutableExtensionLiteGenerator::~ImmutableExtensionLiteGenerator() {}
    
    TEST(ObjCHelper, TextFormatDecodeData_RawStrings) {
  TextFormatDecodeData decode_data;
    }
    
      reflection_tester.SetAllFieldsViaReflection(message);
  reflection_tester.ExpectAllFieldsSetViaReflection(*message);
    
    // Helper class for collecting comments and putting them in the right places.
//
// This basically just buffers the most recent comment until it can be decided
// exactly where that comment should be placed.  When Flush() is called, the
// current comment goes into either prev_trailing_comments or detached_comments.
// When the CommentCollector is destroyed, the last buffered comment goes into
// next_leading_comments.
class CommentCollector {
 public:
  CommentCollector(string* prev_trailing_comments,
                   std::vector<string>* detached_comments,
                   string* next_leading_comments)
      : prev_trailing_comments_(prev_trailing_comments),
        detached_comments_(detached_comments),
        next_leading_comments_(next_leading_comments),
        has_comment_(false),
        is_line_comment_(false),
        can_attach_to_prev_(true) {
    if (prev_trailing_comments != NULL) prev_trailing_comments->clear();
    if (detached_comments != NULL) detached_comments->clear();
    if (next_leading_comments != NULL) next_leading_comments->clear();
  }
    }
    
    /**
 * Implement this interface to report information to debugger or execute
 * debugger commands.
 */
struct IDebuggable {
  enum Support {
    SupportInfo = 1,
    SupportDump = 2,
    SupportVerb = 4,
  };
    }
    
      // implementing File
  bool open(const String& filename, const String& mode) override;
  bool close() override;
  int64_t readImpl(char *buffer, int64_t length) override;
  int getc() override;
  int64_t writeImpl(const char *buffer, int64_t length) override;
  bool seek(int64_t offset, int whence = SEEK_SET) override;
  int64_t tell() override;
  bool eof() override;
  bool rewind() override;
  bool flush() override;
  bool truncate(int64_t size) override;
    
    
    {}

    
    /*
 * If the given AtomicHashMap has more than one submap allocated, log a perf
 * warning with its name.
 *
 * A single unique done flag should exist for each map being checked, to avoid
 * logging more than once (process, map) pair.
 */
template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done);
    
    //////////////////////////////////////////////////////////////////////