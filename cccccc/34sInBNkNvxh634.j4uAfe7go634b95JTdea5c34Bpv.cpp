
        
            return;
  } else if (method == 'ClearCache') {
    ClearCache(GetRenderProcessHost());
    return;
  } else if (method == 'CreateShortcut') {
#if defined(OS_WIN)
    base::string16 path;
    arguments.GetString(0, &path);
    
    // Call method of an object in browser and return the result.
// function CallObjectMethod(id, type, method, args);
v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args);
    
    
    {  args.GetReturnValue().Set(remote::CallObjectMethodSync(render_view->GetRoutingID(), object_id, type, method, args[3]));
}
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
    
    {
    {}  // namespace log
}  // namespace leveldb
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
      // Check the crc of the type and the block contents
  const char* data = contents.data();    // Pointer to where Read put the data
  if (options.verify_checksums) {
    const uint32_t crc = crc32c::Unmask(DecodeFixed32(data + n + 1));
    const uint32_t actual = crc32c::Value(data, n + 1);
    if (actual != crc) {
      delete[] buf;
      s = Status::Corruption('block checksum mismatch');
      return s;
    }
  }
    
    
    {
    {  STLLessThan() : cmp(BytewiseComparator()) { }
  STLLessThan(const Comparator* c) : cmp(c) { }
  bool operator()(const std::string& a, const std::string& b) const {
    return cmp->Compare(Slice(a), Slice(b)) < 0;
  }
};
}  // namespace
    
    
    {
    {}  // namespace crc32c
}  // namespace leveldb
    
    #include <vector>
#include <string>
    
    /**
 * @brief Singleton for queuing asynchronous tasks to be executed in parallel
 *
 * Dispatcher is a singleton which can be used to coordinate the parallel
 * execution of asynchronous tasks across an application. Internally,
 * Dispatcher is back by the Apache Thrift thread pool.
 */
class Dispatcher : private boost::noncopyable {
 public:
  /**
   * @brief The primary way to access the Dispatcher factory facility.
   *
   * @code{.cpp} auto dispatch = osquery::Dispatcher::instance(); @endcode
   *
   * @return The osquery::Dispatcher instance.
   */
  static Dispatcher& instance() {
    static Dispatcher instance;
    return instance;
  }
    }
    
      /*
   * @brief Check if flag value has been overridden.
   *
   * @param name the flag name.
   * @return is the flag set to its default value.
   */
  static bool isDefault(const std::string& name);
    
    
    {  return KERN_SUCCESS;
}
    
    #include <osquery/config.h>
#include <osquery/database.h>
#include <osquery/registry.h>
    
    
    {
    { private:
  friend class TLSConfigTests;
};
}

    
    #include 'osquery/core/process.h'
    
    #include <string.h>
#include <time.h>
    
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
bool ImGui_ImplA5_ProcessEvent(ALLEGRO_EVENT *ev)
{
    ImGuiIO &io = ImGui::GetIO();
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    struct GLFWwindow;
    
        ImFontAtlasBuildFinish(atlas);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    #include <folly/Range.h>
#include <folly/experimental/io/FsUtil.h>
#include <folly/portability/Unistd.h>
    
    namespace folly {
    }
    
    void ImmediateFileWriter::writeMessage(
    StringPiece buffer,
    uint32_t /* flags */) {
  // Write the data.
  // We are doing direct file descriptor writes here, so there is no buffering
  // of log message data.  Each message is immediately written to the output.
  auto ret = folly::writeFull(file_.fd(), buffer.data(), buffer.size());
  if (ret < 0) {
    int errnum = errno;
    LoggerDB::internalWarning(
        __FILE__,
        __LINE__,
        'error writing to log file ',
        file_.fd(),
        ': ',
        errnoStr(errnum));
  }
}
    
    void LogConfig::update(const LogConfig& other) {
  // Update handlerConfigs_ with all of the entries from the other LogConfig.
  // Any entries already present in our handlerConfigs_ are replaced wholesale.
  for (const auto& entry : other.handlerConfigs_) {
    if (entry.second.type.hasValue()) {
      // This is a complete LogHandlerConfig that should be inserted
      // or completely replace an existing handler config with this name.
      auto result = handlerConfigs_.insert(entry);
      if (!result.second) {
        result.first->second = entry.second;
      }
    } else {
      // This config is updating an existing LogHandlerConfig rather than
      // completely replacing it.
      auto iter = handlerConfigs_.find(entry.first);
      if (iter == handlerConfigs_.end()) {
        throw std::invalid_argument(to<std::string>(
            'cannot update configuration for unknown log handler \'',
            entry.first,
            '\''));
      }
      iter->second.update(entry.second);
    }
  }
    }
    
      LogHandlerConfig();
  explicit LogHandlerConfig(StringPiece type);
  explicit LogHandlerConfig(Optional<StringPiece> type);
  LogHandlerConfig(StringPiece type, Options options);
  LogHandlerConfig(Optional<StringPiece> type, Options options);
    
    
    {
    {#undef EXT_FUNC
};
} // namespace fuzzer
    
    namespace fuzzer {
    }
    
    // Parse a file name, like: SomeFile.txt
// Returns number of characters considered if successful.
static size_t ParseFileName(const std::string &FileName, const size_t Offset) {
  size_t Pos = Offset;
  const size_t End = FileName.size();
  for(; Pos < End && !IsSeparator(FileName[Pos]); ++Pos)
    ;
  return Pos - Offset;
}
    
    void Fuzzer::MutateAndTestOne() {
  MD.StartMutationSequence();
    }
    
    
    {} // namespace fuzzer

    
    void MutationDispatcher::AddWordToAutoDictionary(DictionaryEntry DE) {
  static const size_t kMaxAutoDictSize = 1 << 14;
  if (TempAutoDictionary.size() >= kMaxAutoDictSize) return;
  TempAutoDictionary.push_back(DE);
}
    
    // Private copy of SHA1 implementation.
static const int kSHA1NumBytes = 20;
    
    // This is a reimplementation of Libc's `system()`. On Darwin the Libc
// implementation contains a mutex which prevents it from being used
// concurrently. This implementation **can** be used concurrently. It sets the
// signal handlers when the first thread enters and restores them when the last
// thread finishes execution of the function and ensures this is not racey by
// using a mutex.
int ExecuteCommand(const std::string &Command) {
  posix_spawnattr_t SpawnAttributes;
  if (posix_spawnattr_init(&SpawnAttributes))
    return -1;
  // Block and ignore signals of the current process when the first thread
  // enters.
  {
    std::lock_guard<std::mutex> Lock(SignalMutex);
    if (ActiveThreadCount == 0) {
      static struct sigaction IgnoreSignalAction;
      sigset_t BlockedSignalsSet;
      memset(&IgnoreSignalAction, 0, sizeof(IgnoreSignalAction));
      IgnoreSignalAction.sa_handler = SIG_IGN;
    }
    }
    }