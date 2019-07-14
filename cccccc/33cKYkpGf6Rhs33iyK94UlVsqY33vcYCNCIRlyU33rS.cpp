
        
        // static
void WrappableBase::FirstWeakCallback(
    const v8::WeakCallbackInfo<WrappableBase>& data) {
  WrappableBase* wrappable = data.GetParameter();
  wrappable->wrapper_.Reset();
  data.SetSecondPassCallback(SecondWeakCallback);
}
    
    // Arguments is a wrapper around v8::FunctionCallbackInfo that integrates
// with Converter to make it easier to marshall arguments and return values
// between V8 and C++.
class Arguments {
 public:
  Arguments();
  explicit Arguments(const v8::FunctionCallbackInfo<v8::Value>& info);
  ~Arguments();
    }
    
    template <typename Sig>
void InvokeNew(const base::Callback<Sig>& factory,
               v8::Isolate* isolate,
               Arguments* args) {
  if (!args->IsConstructCall()) {
    args->ThrowError('Requires constructor call');
    return;
  }
    }
    
    bool Converter<double>::FromV8(v8::Isolate* isolate,
                               v8::Local<v8::Value> val,
                               double* out) {
  if (!val->IsNumber())
    return false;
  *out = val.As<v8::Number>()->Value();
  return true;
}
    
    // static
void CertificateManagerModel::DidGetCertDBOnUIThread(
    net::NSSCertDatabase* cert_db,
    bool is_user_db_available,
    const CreationCallback& callback) {
  DCHECK_CURRENTLY_ON(BrowserThread::UI);
    }
    
    v8::Local<v8::Value> Arguments::ThrowError(const std::string& message) const {
  isolate_->ThrowException(v8::Exception::Error(StringToV8(isolate_, message)));
  return v8::Undefined(isolate_);
}
    
    ObjectTemplateBuilder::ObjectTemplateBuilder(
    v8::Isolate* isolate,
    v8::Local<v8::ObjectTemplate> templ)
    : isolate_(isolate), template_(templ) {}
    
      if ((str = opts.FindStringKey('applicationName'))) {
    gtk_about_dialog_set_program_name(dialog, str->c_str());
  }
  if ((str = opts.FindStringKey('applicationVersion'))) {
    gtk_about_dialog_set_version(dialog, str->c_str());
  }
  if ((str = opts.FindStringKey('copyright'))) {
    gtk_about_dialog_set_copyright(dialog, str->c_str());
  }
  if ((str = opts.FindStringKey('website'))) {
    gtk_about_dialog_set_website(dialog, str->c_str());
  }
  if ((str = opts.FindStringKey('iconPath'))) {
    GError* error = nullptr;
    constexpr int width = 64;   // width of about panel icon in pixels
    constexpr int height = 64;  // height of about panel icon in pixels
    }
    
    namespace {
    }
    
    #ifndef BITCOIN_QT_OPENURIDIALOG_H
#define BITCOIN_QT_OPENURIDIALOG_H
    
        const QString &getName() const { return name; }
    
    
    {    /* On the first run, return 0 to force a second run */
    if (counter == 0) {
        memset(nonce32, 0, 32);
        return 1;
    }
    /* On the second run, return an overflow to force a third run */
    if (counter == 1) {
        memset(nonce32, 0xff, 32);
        return 1;
    }
    /* On the next run, return a valid nonce, but flip a coin as to whether or not to fail signing. */
    memset(nonce32, 1, 32);
    return secp256k1_rand_bits(1);
}
    
    // Append the serialization of 'key' to *result.
extern void AppendInternalKey(std::string* result,
                              const ParsedInternalKey& key);
    
    
/// @brief Fills a Blob with constant values @f$ x = 0 @f$.
template <typename Dtype>
class ConstantFiller : public Filler<Dtype> {
 public:
  explicit ConstantFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    const int count = blob->count();
    const Dtype value = this->filler_param_.value();
    CHECK(count);
    for (int i = 0; i < count; ++i) {
      data[i] = value;
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    #define REGISTER_LAYER_CLASS(type)                                             \
  template <typename Dtype>                                                    \
  shared_ptr<Layer<Dtype> > Creator_##type##Layer(const LayerParameter& param) \
  {                                                                            \
    return shared_ptr<Layer<Dtype> >(new type##Layer<Dtype>(param));           \
  }                                                                            \
  REGISTER_LAYER_CREATOR(type, Creator_##type##Layer)
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    // Returns a new environment that stores its data in memory and delegates
// all non-file-storage tasks to base_env. The caller must delete the result
// when it is no longer needed.
// *base_env must remain live while the result is in use.
LEVELDB_EXPORT Env* NewMemEnv(Env* base_env);
    
    leveldb_filterpolicy_t* leveldb_filterpolicy_create(
    void* state, void (*destructor)(void*),
    char* (*create_filter)(void*, const char* const* key_array,
                           const size_t* key_length_array, int num_keys,
                           size_t* filter_length),
    uint8_t (*key_may_match)(void*, const char* key, size_t length,
                             const char* filter, size_t filter_length),
    const char* (*name)(void*)) {
  leveldb_filterpolicy_t* result = new leveldb_filterpolicy_t;
  result->state_ = state;
  result->destructor_ = destructor;
  result->create_ = create_filter;
  result->key_match_ = key_may_match;
  result->name_ = name;
  return result;
}
    
    #include 'leveldb/comparator.h'
#include 'leveldb/db.h'
#include 'leveldb/filter_policy.h'
#include 'leveldb/slice.h'
#include 'leveldb/table_builder.h'
#include 'util/coding.h'
#include 'util/logging.h'
    
    const char* GetVarint32PtrFallback(const char* p, const char* limit,
                                   uint32_t* value) {
  uint32_t result = 0;
  for (uint32_t shift = 0; shift <= 28 && p < limit; shift += 7) {
    uint32_t byte = *(reinterpret_cast<const uint8_t*>(p));
    p++;
    if (byte & 128) {
      // More bytes are present
      result |= ((byte & 127) << shift);
    } else {
      result |= (byte << shift);
      *value = result;
      return reinterpret_cast<const char*>(p);
    }
  }
  return nullptr;
}
    
    #include 'db/memtable.h'
#include 'db/dbformat.h'
#include 'leveldb/comparator.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'util/coding.h'
    
    Status WriteBatchInternal::InsertInto(const WriteBatch* b, MemTable* memtable) {
  MemTableInserter inserter;
  inserter.sequence_ = WriteBatchInternal::Sequence(b);
  inserter.mem_ = memtable;
  return b->Iterate(&inserter);
}
    
    
    {    if (diff_index >= min_length) {
      // Do not shorten if one string is a prefix of the other
    } else {
      uint8_t diff_byte = static_cast<uint8_t>((*start)[diff_index]);
      if (diff_byte < static_cast<uint8_t>(0xff) &&
          diff_byte + 1 < static_cast<uint8_t>(limit[diff_index])) {
        (*start)[diff_index]++;
        start->resize(diff_index + 1);
        assert(Compare(*start, limit) < 0);
      }
    }
  }
    
    TEST(CorruptionTest, SequenceNumberRecovery) {
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v1'));
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v2'));
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v3'));
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v4'));
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v5'));
  RepairDB();
  Reopen();
  std::string v;
  ASSERT_OK(db_->Get(ReadOptions(), 'foo', &v));
  ASSERT_EQ('v5', v);
  // Write something.  If sequence number was not recovered properly,
  // it will be hidden by an earlier write.
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'v6'));
  ASSERT_OK(db_->Get(ReadOptions(), 'foo', &v));
  ASSERT_EQ('v6', v);
  Reopen();
  ASSERT_OK(db_->Get(ReadOptions(), 'foo', &v));
  ASSERT_EQ('v6', v);
}
    
      // Drop reference count.  Delete if no more references exist.
  void Unref() {
    --refs_;
    assert(refs_ >= 0);
    if (refs_ <= 0) {
      delete this;
    }
  }
    
    #include 'db/dbformat.h'
#include 'leveldb/cache.h'
#include 'leveldb/table.h'
#include 'port/port.h'
    
        std::unique_ptr<DHTTaskFactory> taskFactory;
    
    class DHTNode;
class DHTBucket;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTBucketTreeNode;
    
    #include 'DHTNode.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'util.h'
#include 'TimeA2.h'
#include 'fmt.h'
#include 'File.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    namespace aria2 {
    }
    
    class DownloadContext;
class PeerStorage;
class DHTTask;
class DHTNode;
class DHTBucket;
    
    void DHTTaskQueueImpl::addPeriodicTask2(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue2_.addTask(task);
}
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    bool DHTUnknownMessage::send() { return true; }
    
      // Try to divide n by every odd number i, starting from 3
  for (int i = 3; ; i += 2) {
    // We only have to try i up to the square root of n
    if (i > n/i) break;
    }
    
    // Step 3. Call RUN_ALL_TESTS() in main().
//
// We do this by linking in src/gtest_main.cc file, which consists of
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we
// defined.  Isn't this convenient?

    
    // The purpose of this is to ensure that the UnitTest singleton is
// created before main() is entered, and thus that ShouldUseColor()
// works the same way as in a real Google-Test-based test.  We don't actual
// run the TEST itself.
TEST(GTestColorTest, Dummy) {
}
    
      if (strcmp(flag, 'throw_on_failure') == 0) {
    cout << GTEST_FLAG(throw_on_failure);
    return;
  }
    
    // Tests that private members can be accessed from a TEST declared as
// a friend of the class.
TEST(PrivateCodeTest, CanAccessPrivateMembers) {
  PrivateCode a;
  EXPECT_EQ(0, a.x_);
    }
    
    void Subroutine() {
  EXPECT_EQ(42, 42);
}
    
    #include 'sample4.h'
    
        void CallStaticVoidMethod(jclass clazz, jmethodID methodID, ...)
    {
        va_list args;
        va_start(args, methodID);
        functions->CallStaticVoidMethodV(this, clazz, methodID, args);
        va_end(args);
    }
    void CallStaticVoidMethodV(jclass clazz, jmethodID methodID, va_list args)
    { functions->CallStaticVoidMethodV(this, clazz, methodID, args); }
    void CallStaticVoidMethodA(jclass clazz, jmethodID methodID, jvalue* args)
    { functions->CallStaticVoidMethodA(this, clazz, methodID, args); }
    
    #include <fb/assert.h>
#include <fb/log.h>
    
    
    {  // There are subtle issues with calling the next functions directly. It is
  // much better to always use a ThreadScope to manage attaching/detaching for
  // you.
  FBEXPORT static JNIEnv* ensureCurrentThreadIsAttached();
  FBEXPORT static void detachCurrentThread();
};
    
    #define FROM_HERE facebook::ProgramLocation(__FUNCTION__, __FILE__, __LINE__)
    
    template <typename T, typename ...Args>
static inline RefPtr<T> createNew(Args&&... arguments) {
  return RefPtr<T>::adoptRef(new T(std::forward<Args>(arguments)...));
}
    
    #if ENABLE_FBASSERT
#define FBASSERTMSGF(expr, msg, ...) !(expr) ? facebook::assertInternal('Assert (%s:%d): ' msg, __FILE__, __LINE__, ##__VA_ARGS__) : (void) 0
#else
#define FBASSERTMSGF(expr, msg, ...)
#endif // ENABLE_FBASSERT
    
    
    {  local_ref<JFile::javaobject> getFilesDir() {
    static auto method = getClass()->getMethod<JFile::javaobject()>('getFilesDir');
    return method(self());
  }
};
    
      // TODO? Create reusable interface for Allocatable classes and use it to
  // strengthen type-checking (and possibly provide a default
  // implementation of allocate().)
  template <typename... Args>
  static local_ref<jhybridobject> allocateWithCxxArgs(Args&&... args) {
    auto hybridData = makeCxxInstance(std::forward<Args>(args)...);
    static auto allocateMethod =
        javaClassStatic()->template getStaticMethod<jhybridobject(jhybriddata)>('allocate');
    return allocateMethod(javaClassStatic(), hybridData.get());
  }
    
      struct Iterator;
    
      /// Invoke a method and return a local reference wrapping the result
  local_ref<JniRet> operator()(alias_ref<jobject> self, Args... args);
    
    
    {} // namespace detail