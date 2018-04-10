
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // ResourceOpKernel<T> is a virtual base class for resource op implementing
// interface type T. The inherited op looks up the resource name (determined by
// ContainerInfo), and creates a new resource if necessary.
//
// Requirements:
//  - Op must be marked as stateful.
//  - Op must have `container` and `shared_name` attributes. Empty `container`
//  means using the default container. Empty `shared_name` means private
//  resource.
//  - Subclass must override CreateResource().
//  - Subclass is encouraged to override VerifyResource().
template <typename T>
class ResourceOpKernel : public OpKernel {
 public:
  explicit ResourceOpKernel(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context,
                   context->allocate_persistent(DT_STRING, TensorShape({2}),
                                                &handle_, nullptr));
  }
    }
    
    
    {}  // namespace xla
    
    // A PluginConfig describes the set of plugins to be used by a StreamExecutor
// instance. Each plugin is defined by an arbitrary identifier, usually best set
// to the address static member in the implementation (to avoid conflicts).
//
// A PluginConfig may be passed to the StreamExecutor constructor - the plugins
// described therein will be used to provide BLAS, DNN, FFT, and RNG
// functionality. Platform-appropriate defaults will be used for any un-set
// libraries. If a platform does not support a specified plugin (ex. cuBLAS on
// an OpenCL executor), then an error will be logged and no plugin operations
// will succeed.
//
// The StreamExecutor BUILD target does not link ANY plugin libraries - even
// common host fallbacks! Any plugins must be explicitly linked by dependent
// targets. See the cuda, opencl and host BUILD files for implemented plugin
// support (search for 'plugin').
class PluginConfig {
 public:
  // Value specifying the platform's default option for that plugin.
  static const PluginId kDefault;
    }
    
      static RecordWriterOptions CreateRecordWriterOptions(
      const string& compression_type);
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
    
        // Validate that data[i].shape = indices[i].shape + constant
    OP_REQUIRES_OK(c, c->input_list('data', data_inputs));
    const Tensor& data0 = (*data_inputs)[0];
    const Tensor& indices0 = (*indices_inputs)[0];
    for (int input_num = 0; input_num < indices_inputs->size(); input_num++) {
      const Tensor& indices = (*indices_inputs)[input_num];
      const Tensor& data = (*data_inputs)[input_num];
      OP_REQUIRES(
          c, TensorShapeUtils::StartsWith(data.shape(), indices.shape()),
          errors::InvalidArgument('data[', input_num,
                                  '].shape = ', data.shape().DebugString(),
                                  ' does not start with indices[', input_num,
                                  '].shape = ', indices.shape().DebugString()));
      OP_REQUIRES(
          c, input_num == 0 || SameExtraShape(data0, indices0, data, indices),
          errors::InvalidArgument(
              'Need data[0].shape[', indices0.dims(), ':] = data[', input_num,
              '].shape[', indices.dims(),
              ':], got data[0].shape = ', data0.shape().DebugString(),
              ', data[', input_num, '].shape = ', data.shape().DebugString(),
              ', indices[0].shape = ', indices0.shape().DebugString(),
              ', indices[', input_num,
              '].shape = ', indices.shape().DebugString()));
    }
    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    namespace base {
class DictionaryValue;
class ListValue;
}
    
      scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
  converter->SetStripNullFromObjects(true);
    
    namespace nwapi {
    }
    
    #ifndef CONTENT_NW_SRC_API_DISPATCHER_H_
#define CONTENT_NW_SRC_API_DISPATCHER_H_
    
      // Remote objects.
  static void AllocateId(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void AllocateObject(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void DeallocateObject(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallObjectMethod(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallObjectMethodSync(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallStaticMethod(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CallStaticMethodSync(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CrashRenderer(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetCrashDumpDir(const v8::FunctionCallbackInfo<v8::Value>& args);
#if defined(OS_MACOSX)
  static void InitMsgIDMap();
  static void GetNSStringWithFixup(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetNSStringFWithFixup(const v8::FunctionCallbackInfo<v8::Value>& args);
#endif
    
    DispatcherHost*
FindDispatcherHost(content::RenderViewHost* render_view_host) {
  std::map<content::RenderViewHost*, DispatcherHost*>::iterator it
    = g_dispatcher_host_map.find(render_view_host);
  if (it == g_dispatcher_host_map.end())
    return NULL;
  return it->second;
}
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    #include 'content/nw/src/api/base/base.h'
#include 'ui/gfx/display_observer.h'
    
    
    {}  // namespace nwapi

    
       bool HasIcon(int command_id) override;
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/nw_shell.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'ui/gfx/point.h'
#include 'vector'
#include 'gtk/gtk.h'
    
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
    
      std::string m_url;
  HeaderMap m_requestHeaders;
  bool m_get;
  std::string m_postData;
  std::string m_remoteHost;
    
    
    {  unsigned next_vr{Vreg::V0};
  Vlabel entry;
  jit::vector<Vframe> frames;
  jit::vector<Vblock> blocks;
  jit::hash_map<Vconst,Vreg,Vconst::Hash> constToReg;
  jit::hash_map<size_t,Vconst> regToConst;
  jit::vector<VregList> tuples;
  jit::vector<VcallArgs> vcallArgs;
  jit::vector<VdataBlock> dataBlocks;
  uint16_t cur_voff{0};  // current instruction index managed by Vout
  bool padding{false};
  bool profiling{false};
  folly::Optional<TransContext> context;
  StructuredLogEntry* log_entry{nullptr};
};
    
      /* First, try to get user-specific magic file */
  if ((home = getenv('LOCALAPPDATA')) == NULL) {
    if ((home = getenv('USERPROFILE')) != NULL)
      if (asprintf(&tmppath,
          '%s/Local Settings/Application Data%s', home,
          hmagic) < 0)
        tmppath = NULL;
  } else {
    if (asprintf(&tmppath, '%s%s', home, hmagic) < 0)
      tmppath = NULL;
  }
    
    /*
 * Emit the prologue dispatch for func which contains dvs DV initializers, and
 * return its start address.  The `kind' of translation argument is used to
 * decide what area of the code cache will be used (hot, main, or prof).
 */
TCA emitFuncBodyDispatch(Func* func, const DVFuncletsVec& dvs, TransKind kind);
    
    
    {
    {  ~CodeCursor() { undo(); }
};
}
    
    #include 'hphp/util/disasm.h'
    
        for (auto it : c2arcs) {
      auto const c = it.second;
      auto const c2arc = it.first;
    }
    
      static FILE *LightPopenImpl(const char *cmd, const char *type,
                              const char *cwd);
  static FILE *HeavyPopenImpl(const char *cmd, const char *type,
                              const char *cwd);
    
    void AsyncIOQueue::maybeDequeue() {
  while (!queue_.empty() && asyncIO_->pending() < asyncIO_->capacity()) {
    auto& opFactory = queue_.front();
    auto op = opFactory();
    queue_.pop_front();
    }
    }
    
    // Functions defined in this file are meant to extend the
// boost::filesystem library; functions will be named according to boost's
// naming conventions instead of ours.  For convenience, import the
// boost::filesystem namespace into folly::fs.
using namespace ::boost::filesystem;
    
      using LogWriter::writeMessage;
  void writeMessage(folly::StringPiece buffer, uint32_t flags = 0) override;
  void flush() override;
    
    
    {  // Update categoryConfigs_ with all of the entries from the other LogConfig.
  //
  // Any entries already present in our categoryConfigs_ are merged: if the new
  // configuration does not include handler settings our entry's settings are
  // maintained.
  for (const auto& entry : other.categoryConfigs_) {
    auto result = categoryConfigs_.insert(entry);
    if (!result.second) {
      auto* existingEntry = &result.first->second;
      auto oldHandlers = std::move(existingEntry->handlers);
      *existingEntry = entry.second;
      if (!existingEntry->handlers.hasValue()) {
        existingEntry->handlers = std::move(oldHandlers);
      }
    }
  }
}
    
    #include <string>
#include <unordered_map>
    
    /**
 * LogHandler represents a generic API for processing log messages.
 *
 * LogHandlers have an associated log level.  The LogHandler will discard any
 * messages below its log level.  This allows specific LogHandlers to perform
 * additional filtering of messages even if the messages were enabled at the
 * LogCategory level.  For instance, a single LogCategory may have two
 * LogHandlers attached, one that logs locally to a file, and one that sends
 * messages to a remote logging service.  The local LogHandler may be
 * configured to record all messages, but the remote LogHandler may want to
 * only process ERROR messages and above, even when debug logging is enabled
 * for this LogCategory.
 *
 * By default the LogHandler level is set to LogLevel::NONE, which means that
 * all log messages will be processed.
 */
class LogHandler {
 public:
  virtual ~LogHandler() = default;
    }
    
      size_t GetFeature(size_t Idx) const { return InputSizesPerFeature[Idx]; }
    
    class Dictionary {
 public:
  static const size_t kMaxDictSize = 1 << 14;
    }
    
    #include 'FuzzerExtFunctions.def'
    
    
    {#undef EXT_FUNC
}
    
    static FILE *OutputFile = stderr;
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
#include <cstdarg>
#include <cstdio>
#include <dirent.h>
#include <fstream>
#include <iterator>
#include <libgen.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
    
    
    {
    {      ListFilesInDirRecursive(FileName, Epoch, V, false);
    }
    else if (IsFile(FileName, FindInfo.dwFileAttributes))
      V->push_back(FileName);
  } while (FindNextFileA(FindHandle, &FindInfo));
    
    std::string DescribePC(const char *SymbolizedFMT, uintptr_t PC) {
  if (!EF->__sanitizer_symbolize_pc) return '<can not symbolize>';
  char PcDescr[1024];
  EF->__sanitizer_symbolize_pc(reinterpret_cast<void*>(PC),
                               SymbolizedFMT, PcDescr, sizeof(PcDescr));
  PcDescr[sizeof(PcDescr) - 1] = 0;  // Just in case.
  return PcDescr;
}
    
    
    {
    {      (void)sigemptyset(&BlockedSignalsSet);
      (void)sigaddset(&BlockedSignalsSet, SIGCHLD);
      if (sigprocmask(SIG_BLOCK, &BlockedSignalsSet, &OldBlockedSignalsSet) ==
          -1) {
        Printf('Failed to block SIGCHLD\n');
        // Try our best to restore the signal handlers.
        (void)sigaction(SIGQUIT, &OldSigQuitAction, NULL);
        (void)sigaction(SIGINT, &OldSigIntAction, NULL);
        (void)posix_spawnattr_destroy(&SpawnAttributes);
        return -1;
      }
    }
    ++ActiveThreadCount;
  }