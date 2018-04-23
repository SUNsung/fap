
        
         protected:
  bool GetAccelerator(int id, ui::Accelerator* accelerator) const override;
    
    
    {}  // namespace atom
    
    #endif  // ATOM_BROWSER_UI_VIEWS_WIN_FRAME_VIEW_H_

    
    class UnresponsiveSuppressor {
 public:
  UnresponsiveSuppressor();
  ~UnresponsiveSuppressor();
    }
    
      // Called immediately after all windows are closed.
  virtual void OnWindowAllClosed() {}
    
    namespace atom {
    }
    
    #include <memory>
    
    #include <windows.h>
    
    #endif  // CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_

    
    namespace chrome {
    }
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    
    { private:
  App();
  DISALLOW_COPY_AND_ASSIGN(App);
};
    
    namespace nw {
    }
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
      v8::Handle<v8::Object> objects_registry = nwapi::Dispatcher::GetObjectRegistry();
  if (objects_registry->IsUndefined())
    return;
    
    
    
    void DispatcherHost::OnAllocateObject(int object_id,
                                      const std::string& type,
                                      const base::DictionaryValue& option) {
  DVLOG(1) << 'OnAllocateObject: object_id:' << object_id
             << ' type:' << type
             << ' option:' << option;
    }
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
      nw::Package* package = nw::package();
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  base::CommandLine::StringVector args = command_line->GetArgs();
  base::CommandLine::StringVector argv = command_line->original_argv();
    
    #include 'base/run_loop.h'
#include 'content/public/browser/browsing_data_remover.h'
#include 'extensions/browser/extension_function.h'
    
    bool OurReader::decodeUnicodeEscapeSequence(Token& token,
                                         Location& current,
                                         Location end,
                                         unsigned int& unicode) {
  if (end - current < 4)
    return addError(
        'Bad unicode escape sequence in string: four digits expected.',
        token,
        current);
  unicode = 0;
  for (int index = 0; index < 4; ++index) {
    Char c = *current++;
    unicode *= 16;
    if (c >= '0' && c <= '9')
      unicode += c - '0';
    else if (c >= 'a' && c <= 'f')
      unicode += c - 'a' + 10;
    else if (c >= 'A' && c <= 'F')
      unicode += c - 'A' + 10;
    else
      return addError(
          'Bad unicode escape sequence in string: hexadecimal digit expected.',
          token,
          current);
  }
  return true;
}
    
    
    {
    {
}  // namespace python
}  // namespace protobuf
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void RepeatedPrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.For$capitalized_type_name$($tag$);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedPrimitiveFieldGenerator);
};
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
    // Author: liujisi@google.com (Pherl Liu)
    
        'if (value == null) {\n'
    '  throw new NullPointerException();\n'
    '}\n'
    'ensure$capitalized_name$IsMutable();\n'
    '$name$_.add(index, com.google.protobuf.LazyFieldLite.fromValue(value));\n'
    '$on_changed$\n',
    
      /// Destroy and stop all osquery service threads and service objects.
  static void stopServices();
    
      /*
   * @brief Check if flag value has been overridden.
   *
   * @param name the flag name.
   * @return is the flag set to its default value.
   */
  static bool isDefault(const std::string& name);
    
     private:
  /// Boolean to track if this instance needs to restore privileges.
  bool dropped_{false};
    
    static struct {
  /// The shared (user/kernel space) circular queue holding event results.
  osquery_cqueue_t cqueue;
    }
    
    std::string generateHostUUID() {
  std::string hardware_uuid;
#ifdef __APPLE__
  // Use the hardware UUID available on OSX to identify this machine
  uuid_t id;
  // wait at most 5 seconds for gethostuuid to return
  const timespec wait = {5, 0};
  if (gethostuuid(id, &wait) == 0) {
    char out[128] = {0};
    uuid_unparse(id, out);
    hardware_uuid = std::string(out);
  }
#elif WIN32
  WmiRequest wmiUUIDReq('Select UUID from Win32_ComputerSystemProduct');
  std::vector<WmiResultItem>& wmiUUIDResults = wmiUUIDReq.results();
  if (wmiUUIDResults.size() != 0) {
    wmiUUIDResults[0].GetString('UUID', hardware_uuid);
  }
#else
  readFile('/sys/class/dmi/id/product_uuid', hardware_uuid);
#endif
    }
    
    #include <osquery/core.h>
#include <osquery/flags.h>
#include <osquery/logger.h>
    
    template <typename C>
struct compare_greater : detail::cmp_pred<C, ordering::gt, 0> {
  using detail::cmp_pred<C, ordering::gt, 0>::cmp_pred;
};
    
    #include <folly/lang/Ordering.h>
    
    void AsyncIOOp::complete(ssize_t result) {
  DCHECK_EQ(state_, State::PENDING);
  state_ = State::COMPLETED;
  result_ = result;
  if (cb_) {
    cb_(this);
  }
}
    
      /**
   * Return the current operation state.
   */
  State state() const {
    return state_;
  }
    
    /**
 * Get the path to the current executable.
 *
 * Note that this is not reliable and not recommended in general; it may not be
 * implemented on your platform (in which case it will throw), the executable
 * might have been moved or replaced while running, and applications comprising
 * of multiple executables should use some form of configuration system to
 * find the other executables rather than relying on relative paths from one
 * to another.
 *
 * So this should only be used for tests, logging, or other innocuous purposes.
 */
path executable_path();
    
    int main(int argc, char* argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  if (FLAGS_cp) {
    if (argc != 3) {
      usage(argv[0]);
    }
    copy(argv[1], argv[2]);
  } else {
    if (argc != 1) {
      usage(argv[0]);
    }
    list();
  }
  return 0;
}

    
      /**
   * Construct an AsyncFileWriter that appends to the file at the specified
   * path.
   */
  explicit AsyncFileWriter(folly::StringPiece path);
    
    std::shared_ptr<LogHandler> FileHandlerFactory::createHandler(
    const Options& options) {
  WriterFactory writerFactory;
  return StandardLogHandlerFactory::createHandler(
      getType(), &writerFactory, options);
}
    
    /**
 * FileHandlerFactory is a LogHandlerFactory that constructs log handlers
 * that write to a file.
 *
 * Note that FileHandlerFactory allows opening and appending to arbitrary files
 * based on the handler options.  This may make it unsafe to use
 * FileHandlerFactory in some contexts: for instance, a setuid binary should
 * generally avoid registering the FileHandlerFactory if they allow log
 * handlers to be configured via command line parameters, since otherwise this
 * may allow non-root users to append to files that they otherwise would not
 * have write permissions for.
 */
class FileHandlerFactory : public LogHandlerFactory {
 public:
  StringPiece getType() const override {
    return 'file';
  }
    }
    
    
    {
    {      if (end == msgData.size()) {
        break;
      }
      idx = end + 1;
    }
  } else {
    buffer.reserve(headerLengthGuess + msgData.size());
    headerFormatter.appendTo(buffer);
    buffer.append(msgData.data(), msgData.size());
    buffer.push_back('\n');
  }
    
          well_formed = db_wrapper->AddToBatch(
          batch, true,
          Handle<Array>::Cast(sub_batch->Get(String::NewSymbol('delete'))),
          db_wrapper, *v8::String::Utf8Value(sub_batch->Get(
          String::NewSymbol('column_family'))));
    } else {
      well_formed = db_wrapper->AddToBatch(
          batch, false,
          Handle<Array>::Cast(sub_batch->Get(String::NewSymbol('put'))));
      well_formed = db_wrapper->AddToBatch(
          batch, true,
          Handle<Array>::Cast(sub_batch->Get(String::NewSymbol('delete'))));
    
    
    {#ifndef ROCKSDB_LITE  // TtlDb is not supported in Lite
// Open a TtlDB with a non-associative StringAppendTESTOperator
std::shared_ptr<DB> OpenTtlDb(char delim_char) {
  DBWithTTL* db;
  Options options;
  options.create_if_missing = true;
  options.merge_operator.reset(new StringAppendTESTOperator(delim_char));
  EXPECT_OK(DBWithTTL::Open(options, kDbName, &db, 123456));
  return std::shared_ptr<DB>(db);
}
#endif  // !ROCKSDB_LITE
}  // namespace
    
    #include <assert.h>
#include 'rocksjni/jnicallback.h'
#include 'rocksjni/portal.h'
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats)
      : StatisticsImpl(stats, false), m_ignore_histograms() {
  }
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
    
    {  // No copying allowed
  LookupKey(const LookupKey&);
  void operator=(const LookupKey&);
};
    
    /*
 * Prototypes for functions exported by loadable shared libs.  These are
 * called by JNI, not provided by JNI.
 */
JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved);
JNIEXPORT void JNI_OnUnload(JavaVM* vm, void* reserved);
    
    namespace {
    }
    
    /* static */ void Config::destroy(Config * node)
{
    delete node;
}
    
    class Config {
    }
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    
#ifdef LOG_TAG
# define ALOGV(...) ::facebook::alog::logv(LOG_TAG, __VA_ARGS__)
# define ALOGD(...) ::facebook::alog::logd(LOG_TAG, __VA_ARGS__)
# define ALOGI(...) ::facebook::alog::logi(LOG_TAG, __VA_ARGS__)
# define ALOGW(...) ::facebook::alog::logw(LOG_TAG, __VA_ARGS__)
# define ALOGE(...) ::facebook::alog::loge(LOG_TAG, __VA_ARGS__)
# define ALOGF(...) ::facebook::alog::logf(LOG_TAG, __VA_ARGS__)
#endif
    
    DEFINE_BOXED_PRIMITIVE(boolean, Boolean)
DEFINE_BOXED_PRIMITIVE(byte, Byte)
DEFINE_BOXED_PRIMITIVE(char, Character)
DEFINE_BOXED_PRIMITIVE(short, Short)
DEFINE_BOXED_PRIMITIVE(int, Integer)
DEFINE_BOXED_PRIMITIVE(long, Long)
DEFINE_BOXED_PRIMITIVE(float, Float)
DEFINE_BOXED_PRIMITIVE(double, Double)