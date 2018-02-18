bool PartialRunMgr::FindOrCreate(int step_id,
                                 CancellationManager** cancellation_manager) {
  mutex_lock l(mu_);
  auto it = step_id_to_partial_run_.find(step_id);
  if (it != step_id_to_partial_run_.end()) {
    *cancellation_manager = it->second->cancellation_manager.get();
    return false;
  }
    }
    
      void Compute(OpKernelContext* context) override LOCKS_EXCLUDED(mu_) {
    mutex_lock l(mu_);
    if (resource_ == nullptr) {
      ResourceMgr* mgr = context->resource_manager();
      OP_REQUIRES_OK(context, cinfo_.Init(mgr, def()));
    }
    }
    
    // Estimate the cost of running a Grappler item by actually running the
// corresponding TensorFlow graph on the specified cluster and measuring the
// runtimes.
class MeasuringCostEstimator : public CostEstimator {
 public:
  // Run the model for measurement_steps to measure its average cost.
  // When measurement_threads is greater than 0, use a threadpool of as many
  // threads to run the measurements; otherwise, run them serially. Does not
  // take ownership of cluster.
  explicit MeasuringCostEstimator(Cluster* cluster, int measurement_steps,
                                  int measurement_threads);
  ~MeasuringCostEstimator() override {}
    }
    
    Status FetchOutputs(Graph* g, const DeviceAttributes& device_info,
                    const gtl::ArraySlice<string>& fetch_outputs,
                    bool use_function_convention, NameIndex* name_index,
                    std::vector<Node*>* out_fetch_nodes,
                    DataTypeVector* out_fetch_types) {
  out_fetch_nodes->clear();
  out_fetch_nodes->reserve(fetch_outputs.size());
  for (size_t i = 0; i < fetch_outputs.size(); ++i) {
    const string& t = fetch_outputs[i];
    }
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethodSync')));
    
    typedef std::map<std::string,std::string> KeyMap;
    
    void MenuItem::SetSubmenu(Menu* sub_menu) {
  submenu_ = sub_menu;
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    sub_menu->UpdateKeys(gtk_accel_group);
  }
  if (sub_menu == NULL)
    gtk_menu_item_remove_submenu(GTK_MENU_ITEM(menu_item_));
  else
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(menu_item_), sub_menu->menu_);
}
    
    
    {
} // namespace extensions

    
      auto fn = [&](const uint32_t id) { return table.lookup(id); };
    
      switch (arr->tag()) {
    case RepoAuthType::Array::Tag::Packed: {
      for (uint32_t idx = 0; idx < arr->size(); ++idx) {
        auto rat = arr->packedElem(idx);
        assert(rat.resolved());
        if (rat.mayHaveArrData()) check(rat.array());
      }
      break;
    }
    case RepoAuthType::Array::Tag::PackedN: {
      auto rat = arr->elemType();
      assert(rat.resolved());
      if (rat.mayHaveArrData()) check(rat.array());
      break;
    }
  }
    
    #include <chrono>
    
    void HHVM_FUNCTION(xhprof_network_enable) {
  ServerStats::StartNetworkProfile();
}
    
    //////////////////////////////////////////////////////////////////////
    
    namespace HPHP { namespace jit {
    }
    }
    
    // Sends a copy of the given command to the associated client
// using the buffer in m_thrift. Returns false if an exception
// occurs during the send (typically a socket error).
bool DebuggerProxy::sendToClient(DebuggerCommand *cmd) {
  TRACE(2, 'DebuggerProxy::sendToClient\n');
  return cmd->send(m_thrift);
}
    
    //////////////////////////////////////////////////////////////////////
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    #endif  // STORAGE_LEVELDB_DB_TABLE_CACHE_H_

    
    
    {
    {      default:
        msg = 'unknown tag';
        break;
    }
  }
    
    
    {  FileMetaData() : refs(0), allowed_seeks(1 << 30), file_size(0) { }
};
    
      ~FindFileTest() {
    for (int i = 0; i < files_.size(); i++) {
      delete files_[i];
    }
  }
    
      // The following fields are not protected by any mutex. They are only mutable
  // while the file is being written, and concurrent access is not allowed
  // to writable files.
  std::vector<char*> blocks_;
  uint64_t size_;
    
      ASSERT_OK(DB::Open(options, '/dir/db', &db));
  for (size_t i = 0; i < 3; ++i) {
    ASSERT_OK(db->Put(WriteOptions(), keys[i], vals[i]));
  }
    
    #endif  // STORAGE_LEVELDB_TABLE_FILTER_BLOCK_H_

    
      // Check second filter
  ASSERT_TRUE(reader.KeyMayMatch(3100, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(3100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(3100, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(3100, 'hello'));
    
      // The block handle for the index block of the table
  const BlockHandle& index_handle() const {
    return index_handle_;
  }
  void set_index_handle(const BlockHandle& h) {
    index_handle_ = h;
  }
    
    
    {}  // namespace leveldb

    
    
    {void MergingIterator::FindLargest() {
  IteratorWrapper* largest = NULL;
  for (int i = n_-1; i >= 0; i--) {
    IteratorWrapper* child = &children_[i];
    if (child->Valid()) {
      if (largest == NULL) {
        largest = child;
      } else if (comparator_->Compare(child->key(), largest->key()) > 0) {
        largest = child;
      }
    }
  }
  current_ = largest;
}
}  // namespace
    
        CALL_TYPE(jobject, Object)
    CALL_TYPE(jboolean, Boolean)
    CALL_TYPE(jbyte, Byte)
    CALL_TYPE(jchar, Char)
    CALL_TYPE(jshort, Short)
    CALL_TYPE(jint, Int)
    CALL_TYPE(jlong, Long)
    CALL_TYPE(jfloat, Float)
    CALL_TYPE(jdouble, Double)
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(unit, value);
    }
};

    
    // convert to alias_ref<T> from T
template <typename T>
struct Convert<alias_ref<T>> {
  typedef JniType<T> jniType;
  static alias_ref<jniType> fromJni(jniType t) {
    return wrap_alias(t);
  }
  static jniType toJniRet(alias_ref<jniType> t) {
    return t.get();
  }
  static jniType toCall(alias_ref<jniType> t) {
    return t.get();
  }
};
    
    namespace facebook {
namespace lyra {
    }
    }
    
    static YGSize YGJNIMeasureFunc(
    YGNodeRef node,
    float width,
    YGMeasureMode widthMode,
    float height,
    YGMeasureMode heightMode) {
  if (auto obj = YGNodeJobject(node)->lockLocal()) {
    static auto measureFunc = findClassStatic('com/facebook/yoga/YogaNode')
                                  ->getMethod<jlong(jfloat, jint, jfloat, jint)>('measure');
    }
    }
    
    bool Config::isExperimentalFeatureEnabled(int feature) const
{
    return YGConfigIsExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature));
}

    
    class Config {
    }
    
        method(getMinWidth);
    method(getMinHeight);
    
    template<typename... ARGS>
inline void logd(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_DEBUG, tag, msg, args...);
}
    
    #pragma once
#include <cstring>
#include <string>
#include <sstream>
    
    /**
 * A thread-local object is a 'global' object within a thread. This is useful
 * for writing apartment-threaded code, where nothing is actullay shared
 * between different threads (hence no locking) but those variables are not
 * on stack in local scope. To use it, just do something like this,
 *
 *   ThreadLocal<MyClass> static_object;
 *     static_object->data_ = ...;
 *     static_object->doSomething();
 *
 *   ThreadLocal<int> static_number;
 *     int value = *static_number;
 *
 * So, syntax-wise it's similar to pointers. T can be primitive types, and if
 * it's a class, there has to be a default constructor.
 */
template<typename T>
class ThreadLocal {
public:
  /**
   * Constructor that has to be called from a thread-neutral place.
   */
  ThreadLocal() :
    m_key(0),
    m_cleanup(OnThreadExit) {
    initialize();
  }
    }
    
    
#define DEFINE_BOXED_PRIMITIVE(LITTLE, BIG)                          \
  struct J ## BIG : detail::JPrimitive<J ## BIG, j ## LITTLE> {      \
    static auto constexpr kJavaDescriptor = 'Ljava/lang/' #BIG ';';  \
    static auto constexpr kValueMethod = #LITTLE 'Value';            \
    j ## LITTLE LITTLE ## Value() const {                            \
      return value();                                                \
    }                                                                \
  };                                                                 \
  inline local_ref<jobject> autobox(j ## LITTLE val) {               \
    return J ## BIG::valueOf(val);                                   \
  }