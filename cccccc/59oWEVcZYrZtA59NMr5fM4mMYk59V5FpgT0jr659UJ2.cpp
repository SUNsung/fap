
        
        Status RunCppShapeInferenceImpl(
    int graph_def_version, const string& serialized_node_def,
    const std::vector<string>& input_serialized_shapes,
    const std::vector<PyObject*>& input_constant_tensor_values,
    const std::vector<string>& input_constant_tensor_as_shape_values,
    std::vector<string>* output_tensor_shape_protos,
    string* input_tensors_needed_out) {
  tensorflow::NodeDef node;
  if (!node.ParseFromString(serialized_node_def)) {
    return errors::InvalidArgument(
        'Error parsing node_def during cpp shape inference');
  }
  DCHECK_EQ(output_tensor_shape_protos->size(), 0);
    }
    
    // Convert an AttrValue with type `type` to the Python representation for
// that value.
string AttrValueToPython(const string& type, const AttrValue& value,
                         const string& dtype_module = 'tf.');
    
    class TestRandomAccessFile : public RandomAccessFile {
  // The file contents is 10 bytes of all A's
  Status Read(uint64 offset, size_t n, StringPiece* result,
              char* scratch) const override {
    Status s;
    for (int i = 0; i < n; ++i) {
      if (offset + i >= 10) {
        n = i;
        s = errors::OutOfRange('EOF');
        break;
      }
      scratch[i] = 'A';
    }
    *result = StringPiece(scratch, n);
    return s;
  }
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_

    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Safe containers for an owned TF_Status. On destruction, the handle
// will be deleted by TF_DeleteStatus.
using Safe_TF_StatusPtr = std::unique_ptr<TF_Status, detail::TFStatusDeleter>;
Safe_TF_StatusPtr make_safe(TF_Status* status);
    
    #include 'atom/common/node_includes.h'
    
    bool GlobalShortcut::Register(const ui::Accelerator& accelerator,
                              const base::Closure& callback) {
  if (!GlobalShortcutListener::GetInstance()->RegisterAccelerator(accelerator,
                                                                  this)) {
    return false;
  }
    }
    
    
    {}  // namespace api
    
    // static
mate::Handle<RenderProcessPreferences>
RenderProcessPreferences::ForAllWebContents(v8::Isolate* isolate) {
  return mate::CreateHandle(isolate,
                            new RenderProcessPreferences(
                                isolate, base::Bind(&IsWebContents, isolate)));
}
    
    void SILLayout::Profile(llvm::FoldingSetNodeID &id,
                        CanGenericSignature Generics,
                        ArrayRef<SILField> Fields) {
  id.AddPointer(Generics.getPointer());
  for (auto &field : Fields) {
    id.AddPointer(field.getLoweredType().getPointer());
    id.AddBoolean(field.isMutable());
  }
}

    
    private:
  unsigned getNumReplacementTypes() const {
    return genericSig->getGenericParams().size();
  }
    
        if (info.status == serialization::Status::Valid) {
      assert(info.bytes != 0);
      if (!info.name.empty()) {
        StringRef moduleData = buf.substr(0, info.bytes);
        std::unique_ptr<llvm::MemoryBuffer> bitstream(
          llvm::MemoryBuffer::getMemBuffer(moduleData, info.name, false));
    }
    }
    
    
    {  if (!lhs.hasOutOfLineData()) {
    assert(lhs.Data == 0 || lhs.getLengthInChunks() == 1);
    for (auto chunk : rhs.getOutOfLineChunks())
      if (chunk != lhs.Data)
        return false;
    return true;
  } else if (!rhs.hasOutOfLineData()) {
    assert(rhs.Data == 0 || rhs.getLengthInChunks() == 1);
    for (auto chunk : lhs.getOutOfLineChunks())
      if (chunk != rhs.Data)
        return false;
    return true;
  } else {
    auto lhsChunks = lhs.getOutOfLineChunks();
    auto rhsChunks = rhs.getOutOfLineChunks();
    assert(lhsChunks.size() == rhsChunks.size());
    return lhsChunks == rhsChunks;
  }
}
    
    #ifndef DIRECTIONAL_PREPOSITION
#  define DIRECTIONAL_PREPOSITION(Word) PREPOSITION(Word)
#endif
    
    /// Determine whether the preposition in a split is 'vacuous', and
/// should be removed.
static bool isVacuousPreposition(StringRef beforePreposition,
                                 StringRef preposition,
                                 StringRef afterPreposition,
                                 const OmissionTypeName &paramType) {
  // Only consider 'with' or 'using' to be potentially vacuous.
  if (!camel_case::sameWordIgnoreFirstCase(preposition, 'with') &&
      !camel_case::sameWordIgnoreFirstCase(preposition, 'using'))
    return false;
    }
    
      const llvm::UTF8 *SourceStart =
    reinterpret_cast<const llvm::UTF8 *>(S.data());
    
    break_table = GraphemeClusterBreakPropertyTable(unicodeGraphemeBreakPropertyFile)
    
      static CFPointeeInfo forConstVoid() {
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = true;
    info.Decl = nullptr;
    return info;
  }
    
    IPC_SYNC_MESSAGE_ROUTED0_1(ShellViewHostMsg_AllocateId, int)
    
    namespace content {
class RenderFrameHost;
}
    
    base::StringPiece GetStringResource(int resource_id) {
  return ResourceBundle::GetSharedInstance().GetRawDataResource(resource_id);
}
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    
#include 'base/basictypes.h'
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
    class ObjectManager;
    
    #include 'base/run_loop.h'
#include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/message_loop/message_loop_current.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'skia/ext/image_operations.h'
#include 'ui/aura/client/screen_position_client.h'
#include 'ui/aura/window.h'
#include 'ui/aura/window_tree_host.h'
#include 'ui/events/platform/platform_event_source.h'
#include 'ui/views/controls/menu/menu_runner.h'
#include 'ui/views/widget/widget.h'
#include 'ui/views/focus/focus_manager.h'
#include 'vector'
    
    class NwAppClearCacheFunction : public NWSyncExtensionFunction, public content::BrowsingDataRemover::Observer {
 public:
  NwAppClearCacheFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
  void OnBrowsingDataRemoverDone() override;
    }
    
    
    {}
    
    
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenStopMonitorFunction);
  };
    
    struct Options;
struct FileMetaData;
    
    DBImpl::DBImpl(const Options& raw_options, const std::string& dbname)
    : env_(raw_options.env),
      internal_comparator_(raw_options.comparator),
      internal_filter_policy_(raw_options.filter_policy),
      options_(SanitizeOptions(dbname, &internal_comparator_,
                               &internal_filter_policy_, raw_options)),
      owns_info_log_(options_.info_log != raw_options.info_log),
      owns_cache_(options_.block_cache != raw_options.block_cache),
      dbname_(dbname),
      table_cache_(new TableCache(dbname_, options_, TableCacheSize(options_))),
      db_lock_(nullptr),
      shutting_down_(nullptr),
      background_work_finished_signal_(&mutex_),
      mem_(nullptr),
      imm_(nullptr),
      logfile_(nullptr),
      logfile_number_(0),
      log_(nullptr),
      seed_(0),
      tmp_batch_(new WriteBatch),
      background_compaction_scheduled_(false),
      manual_compaction_(nullptr),
      versions_(new VersionSet(dbname_, &options_, table_cache_,
                               &internal_comparator_)) {
  has_imm_.Release_Store(nullptr);
}
    
     public:
  std::string dbname_;
  SpecialEnv* env_;
  DB* db_;
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
     public:
  LogTest() : reading_(false),
              writer_(new Writer(&dest_)),
              reader_(new Reader(&source_, &report_, true/*checksum*/,
                      0/*initial_offset*/)) {
  }
    
      // Create a writer that will append data to '*dest'.
  // '*dest' must have initial length 'dest_length'.
  // '*dest' must remain live while this Writer is in use.
  Writer(WritableFile* dest, uint64_t dest_length);
    
     private:
  enum { kMaxHeight = 12 };
    
          // Verify that everything in [pos,current) was not present in
      // initial_state.
      while (pos < current) {
        ASSERT_LT(key(pos), K) << pos;
    }
    
      static bool isInitialized6() { return data6_.initialized; }
    
      virtual void fillMessage(Dict* msgDict) CXX11_OVERRIDE;
    
      DHTTaskQueue* taskQueue_;
    
      void setLocalNode(const std::shared_ptr<DHTNode>& localNode);
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    
    {  size_t getQueueSize() const { return queue_.size(); }
};
    
    #include <memory>
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
    #endif // D_DHT_TOKEN_UPDATE_COMMAND_H

    
    DNSCache::~DNSCache() = default;
    
      // Called once for every suite of benchmarks run.
  // The parameter 'context' contains information that the
  // reporter may wish to use when generating its report, for example the
  // platform under which the benchmarks are running. The benchmark run is
  // never started if this function returns false, allowing the reporter
  // to skip runs based on the context information.
  virtual bool ReportContext(const Context& context) = 0;
    
    Benchmark* Benchmark::Range(int start, int limit) {
  CHECK(ArgsCnt() == -1 || ArgsCnt() == 1);
  std::vector<int> arglist;
  AddRange(&arglist, start, limit, range_multiplier_);
    }
    
    #include 'check.h'
#include 'internal_macros.h'
    
    int64_t RoundDouble(double v) { return static_cast<int64_t>(v + 0.5); }
    
    class Barrier {
 public:
  Barrier(int num_threads) : running_threads_(num_threads) {}
    }