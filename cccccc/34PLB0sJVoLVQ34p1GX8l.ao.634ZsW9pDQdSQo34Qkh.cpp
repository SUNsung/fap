
        
        class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
    #ifndef ATOM_COMMON_API_REMOTE_CALLBACK_FREER_H_
#define ATOM_COMMON_API_REMOTE_CALLBACK_FREER_H_
#include 'atom/common/api/object_life_monitor.h'
#include 'content/public/browser/web_contents_observer.h'
    
      // Sent when extension render process ends (whether it crashes or closes).
  // The details are an ExtensionHost* and the source is a Profile*. Not sent
  // during browser shutdown.
  NOTIFICATION_EXTENSION_PROCESS_TERMINATED,
    
    // DesktopMediaList provides the list of desktop media source (screens, windows,
// tabs), and their thumbnails, to the desktop media picker dialog. It
// transparently updates the list in the background, and notifies the desktop
// media picker when something changes.
class DesktopMediaList {
 public:
  // Struct used to represent each entry in the list.
  struct Source {
    // Id of the source.
    content::DesktopMediaID id;
    }
    }
    
    
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
    
    // TODO(jonskeet): Refactor repeated field support; all the implementations are *really* similar. We
// should probably have a RepeatedFieldGeneratorBase.
class RepeatedEnumFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedEnumFieldGenerator(const FieldDescriptor* descriptor,
                             int fieldOrdinal,
                             const Options *options);
  ~RepeatedEnumFieldGenerator();
    }
    
    SourceGeneratorBase::SourceGeneratorBase(const FileDescriptor* descriptor,
                                         const Options *options)
    : descriptor_(descriptor), options_(options) {
}
    
    
    
    // CodeGenerator implementation which generates Java code.  If you create your
// own protocol compiler binary and you want it to support Java output, you
// can do so by registering an instance of this CodeGenerator with the
// CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT JavaGenerator : public CodeGenerator {
 public:
  JavaGenerator();
  ~JavaGenerator();
    }
    
    // ===================================================================
    
      // Builder removeRepeatedField(int index)
  WriteFieldDocComment(printer, descriptor_);
  PrintNestedBuilderFunction(printer,
    '$deprecation$public Builder remove$capitalized_name$(int index)',
    
    #endif // BOOST_ASIO_DETAIL_FENCED_BLOCK_HPP

    
      // Constructor for a full fenced block.
  explicit gcc_arm_fenced_block(full_t)
  {
    barrier();
  }
    
    #ifndef BOOST_ASIO_DETAIL_HANDLER_TYPE_REQUIREMENTS_HPP
#define BOOST_ASIO_DETAIL_HANDLER_TYPE_REQUIREMENTS_HPP
    
      // The type of a non-const iterator over the hash map.
  typedef typename std::list<value_type>::iterator iterator;
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      // Remove the descriptor from /dev/poll. Since this function is only called
  // during a fork, we can apply the change immediately.
  ::pollfd ev = { 0, 0, 0 };
  ev.fd = descriptor;
  ev.events = POLLREMOVE;
  ev.revents = 0;
  ::write(dev_poll_fd_, &ev, sizeof(ev));
    
    #define CALL_NONVIRT_TYPE(_jtype, _jname)                                   \
    CALL_NONVIRT_TYPE_METHOD(_jtype, _jname)                                \
    CALL_NONVIRT_TYPE_METHODV(_jtype, _jname)                               \
    CALL_NONVIRT_TYPE_METHODA(_jtype, _jname)
    
    _Unwind_Reason_Code unwindCallback(struct _Unwind_Context* context, void* arg) {
  BacktraceState* state = reinterpret_cast<BacktraceState*>(arg);
  auto absoluteProgramCounter =
      reinterpret_cast<InstructionPointer>(_Unwind_GetIP(context));
    }
    
        double top;
    double bottom;
    
    struct Size
{
    double width;
    double height;
    }
    
    #define ASSERT_BUF_SIZE 4096
static char sAssertBuf[ASSERT_BUF_SIZE];
static AssertHandler gAssertHandler;
    
    // Keeps a thread-local reference to the current thread's JNIEnv.
struct Environment {
  // May be null if this thread isn't attached to the JVM
  FBEXPORT static JNIEnv* current();
  static void initialize(JavaVM* vm);
    }
    
      void setNumNewConnection(int numNewConnection)
  {
    numNewConnection_ = numNewConnection;
  }
    
    void AnnounceList::resetIterator()
{
  currentTier_ = std::begin(tiers_);
  if (currentTier_ != std::end(tiers_) && (*currentTier_)->urls.size()) {
    currentTracker_ = std::begin((*currentTier_)->urls);
    currentTrackerInitialized_ = true;
  }
  else {
    currentTrackerInitialized_ = false;
  }
}
    
    
    {} // namespace aria2
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
      SecIdentityRef getCredentials();
    
    static void BM_MultiThreaded(benchmark::State& state) {
  if (state.thread_index == 0) {
    // Setup code here.
  }
  for (auto _ : state) {
    // Run the test as normal.
  }
  if (state.thread_index == 0) {
    // Teardown code here.
  }
}
BENCHMARK(BM_MultiThreaded)->Threads(4);
    
    #endif  // BENCHMARK_ARRAYSIZE_H_

    
      int32_t result = default_value;
  if (!ParseInt32(std::string('Environment variable ') + env_var, string_value,
                  &result)) {
    std::cout << 'The default value ' << default_value << ' is used.\n';
    return default_value;
  }
    
    namespace benchmark {
// Parses 'str' for a 32-bit signed integer.  If successful, writes the result
// to *value and returns true; otherwise leaves *value unchanged and returns
// false.
bool ParseInt32(const std::string& src_text, const char* str, int32_t* value);
    }
    
    #include <cstdint>
    
    typedef std::basic_ostream<char>&(EndLType)(std::basic_ostream<char>&);
    
    namespace benchmark {
    }