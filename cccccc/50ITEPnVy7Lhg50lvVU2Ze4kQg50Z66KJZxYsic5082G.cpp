
        
        class AutoUpdater : public mate::EventEmitter<AutoUpdater>,
                    public auto_updater::Delegate,
                    public WindowListObserver {
 public:
  static mate::Handle<AutoUpdater> Create(v8::Isolate* isolate);
    }
    
    
    {}  // namespace api
    
    #include 'atom/browser/native_window_views.h'
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  auto controller = base::Unretained(TracingController::GetInstance());
  mate::Dictionary dict(context->GetIsolate(), exports);
  dict.SetMethod('getCategories',
                 base::Bind(&TracingController::GetCategories, controller));
  dict.SetMethod('startRecording',
                 base::Bind(&TracingController::StartTracing, controller));
  dict.SetMethod('stopRecording', &StopRecording);
  dict.SetMethod(
      'getTraceBufferUsage',
      base::Bind(&TracingController::GetTraceBufferUsage, controller));
}
    
    
    {  // Reference this object in case it got garbage collected.
  g_download_item_objects[handle->weak_map_id()] =
      v8::Global<v8::Object>(isolate, handle.ToV8());
  return handle;
}
    
     private:
  base::FilePath save_path_;
  download::DownloadItem* download_item_;
    
    bool GlobalShortcut::Register(const ui::Accelerator& accelerator,
                              const base::Closure& callback) {
  if (!GlobalShortcutListener::GetInstance()->RegisterAccelerator(accelerator,
                                                                  this)) {
    return false;
  }
    }
    
    void InAppPurchase::OnTransactionsUpdated(
    const std::vector<in_app_purchase::Transaction>& transactions) {
  Emit('transactions-updated', transactions);
}
#endif
    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_browser_net, Initialize)

    
    #ifndef ATOM_BROWSER_API_ATOM_API_NET_H_
#define ATOM_BROWSER_API_ATOM_API_NET_H_
    
    base::string16 Notification::GetBody() const {
  return body_;
}
    
    // static
void RenderProcessPreferences::BuildPrototype(
    v8::Isolate* isolate,
    v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(
      mate::StringToV8(isolate, 'RenderProcessPreferences'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetMethod('addEntry', &RenderProcessPreferences::AddEntry)
      .SetMethod('removeEntry', &RenderProcessPreferences::RemoveEntry);
}
    
    #include 'atom/browser/render_process_preferences.h'
#include 'native_mate/handle.h'
#include 'native_mate/wrappable.h'
    
    #include 'atom/browser/api/atom_api_browser_window.h'
#include 'atom/browser/browser.h'
#include 'atom/common/native_mate_converters/gfx_converter.h'
#include 'base/bind.h'
#include 'native_mate/dictionary.h'
#include 'native_mate/object_template_builder.h'
#include 'ui/display/display.h'
#include 'ui/display/screen.h'
#include 'ui/gfx/geometry/point.h'
    
    
std::vector<struct pollfd> pollfds;
std::unordered_map<int, ClientSession> client_sessions;
// TODO: check if objects have been freed from time to time
std::set<std::string> used_objects;
    
    SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
      auto axis = helper.GetSingleArgument<int32_t>('axis', 1);
  const auto canonical_axis = canonical_axis_index_(axis, in[0].dims().size());
  auto axis_w = helper.GetSingleArgument<int32_t>('axis_w', 1);
  const int canonical_axis_w =
      canonical_axis_index_(axis_w, in[1].dims().size());
  const int N = pretransposed_weight
      ? size_from_dim_(canonical_axis_w, GetDimsVector(in[1]))
      : size_to_dim_(canonical_axis_w, GetDimsVector(in[1]));
    
    **Result**
    
    namespace caffe2 {
    }
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
    
    {  // Add new data and corrupt it
  ASSERT_OK(writable_file->Append(kCorrupted));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size() + kCorrupted.size());
  result.clear();
  ASSERT_OK(rand_file->Read(kGood.size(), kCorrupted.size(),
            &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kCorrupted), 0);
  // Corrupted
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(kGood.size(), kCorrupted.size(),
            &result, &(scratch[0])));
  ASSERT_NE(result.compare(kCorrupted), 0);
}
    
    int main() {
  rocksdb::DB* raw_db;
  rocksdb::Status status;
    }
    
      // destroy and open DB
  DB* db;
  Status s = DestroyDB(kDBPath, Options(db_opt, cf_descs[0].options));
  assert(s.ok());
  s = DB::Open(Options(db_opt, cf_descs[0].options), kDBPath, &db);
  assert(s.ok());
    
    
BENCHMARK_MAIN();

    
      BENCHMARK_ALWAYS_INLINE
  explicit StateIterator(State* st)
      : cached_(st->error_occurred_ ? 0 : st->max_iterations), parent_(st) {}
    
    namespace benchmark {
namespace internal {
// The arraysize(arr) macro returns the # of elements in an array arr.
// The expression is a compile-time constant, and therefore can be
// used in defining new arrays, for example.  If you use arraysize on
// a pointer by mistake, you will get a compile-time error.
//
    }
    }
    
    // The CHECK macro returns a std::ostream object that can have extra information
// written to it.
#ifndef NDEBUG
#define CHECK(b)                                                             \
  (b ? ::benchmark::internal::GetNullLogInstance()                           \
     : ::benchmark::internal::CheckHandler(#b, __FILE__, __func__, __LINE__) \
           .GetLog())
#else
#define CHECK(b) ::benchmark::internal::GetNullLogInstance()
#endif
    
    
    {// Returns true unless value starts with one of: '0', 'f', 'F', 'n' or 'N', or
// some non-alphanumeric character. As a special case, also returns true if
// value is the empty string.
bool IsTruthyFlagValue(const std::string& value);
}  // end namespace benchmark
    
    #ifndef BENCHMARK_CYCLECLOCK_H_
#define BENCHMARK_CYCLECLOCK_H_
    
    // Enable thread safety attributes only with clang.
// The attributes can be safely erased when compiling with other compilers.
#if defined(HAVE_THREAD_SAFETY_ATTRIBUTES)
#define THREAD_ANNOTATION_ATTRIBUTE__(x) __attribute__((x))
#else
#define THREAD_ANNOTATION_ATTRIBUTE__(x)  // no-op
#endif
    
    double BenchmarkReporter::Run::GetAdjustedRealTime() const {
  double new_time = real_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}