
        
        IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
      static void ClearCache(content::RenderProcessHost* render_view_host);
  static void SetProxyConfig(content::RenderProcessHost* render_process_host,
                             const std::string& proxy_config);
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    MenuDelegate::~MenuDelegate() {
}
    
    namespace nw {
    }
    
      std::string icon;
  if (option.GetString('icon', &icon) && !icon.empty())
    SetIcon(icon);
    
    NwAppClearAppCacheFunction::NwAppClearAppCacheFunction() {
}
    
        bool ReadImage(ClipboardData& data) {
      DCHECK(data.type == TYPE_PNG || data.type == TYPE_JPEG);
      std::vector<unsigned char> encoded_image;
      SkBitmap bitmap = clipboard_->ReadImage(ui::CLIPBOARD_TYPE_COPY_PASTE);
    }
    
     protected:
  ~NwObjCallObjectMethodAsyncFunction() override;
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
extern Status BuildTable(const std::string& dbname,
                         Env* env,
                         const Options& options,
                         TableCache* table_cache,
                         Iterator* iter,
                         FileMetaData* meta);
    
      Status status_;
  std::string saved_key_;     // == current key when direction_==kReverse
  std::string saved_value_;   // == current raw value when direction_==kReverse
  Direction direction_;
  bool valid_;
    
    class DBImpl;
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    
// Called on every log record (each one of which is a WriteBatch)
// found in a kLogFile.
static void WriteBatchPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  if (record.size() < 12) {
    r += 'log record length ';
    AppendNumberTo(&r, record.size());
    r += ' is too small\n';
    dst->Append(r);
    return;
  }
  WriteBatch batch;
  WriteBatchInternal::SetContents(&batch, record);
  r += 'sequence ';
  AppendNumberTo(&r, WriteBatchInternal::Sequence(&batch));
  r.push_back('\n');
  dst->Append(r);
  WriteBatchItemPrinter batch_item_printer;
  batch_item_printer.dst_ = dst;
  Status s = batch.Iterate(&batch_item_printer);
  if (!s.ok()) {
    dst->Append('  error: ' + s.ToString() + '\n');
  }
}
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
     private:
  Env* const env_;
  const std::string dbname_;
  const Options* options_;
  Cache* cache_;
    
    TEST(WriteBatchTest, Multiple) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  batch.Put(Slice('baz'), Slice('boo'));
  WriteBatchInternal::SetSequence(&batch, 100);
  ASSERT_EQ(100, WriteBatchInternal::Sequence(&batch));
  ASSERT_EQ(3, WriteBatchInternal::Count(&batch));
  ASSERT_EQ('Put(baz, boo)@102'
            'Delete(box)@101'
            'Put(foo, bar)@100',
            PrintContents(&batch));
}
    
        sqlite3_stmt *replace_stmt, *begin_trans_stmt, *end_trans_stmt;
    std::string replace_str = 'REPLACE INTO test (key, value) VALUES (?, ?)';
    std::string begin_trans_str = 'BEGIN TRANSACTION;';
    std::string end_trans_str = 'END TRANSACTION;';
    
    TRACE_SET_MOD(jittime);
    
    #define DECLARE_VNUM(Vnum, check, prefix)                 \
struct Vnum {                                             \
  Vnum() {}                                               \
  explicit Vnum(size_t n) : n(safe_cast<uint32_t>(n)) {}  \
                                                          \
  /* implicit */ operator size_t() const {                \
    if (check) assertx(n != kInvalidId);                   \
    return n;                                             \
  }                                                       \
                                                          \
  bool isValid() const {                                  \
    return n != kInvalidId;                               \
  }                                                       \
                                                          \
  std::string toString() const {                          \
    if (n == kInvalidId) return prefix '?';               \
    return folly::to<std::string>(prefix, n);             \
  }                                                       \
                                                          \
private:                                                  \
  static constexpr uint32_t kInvalidId = 0xffffffff;      \
  uint32_t n{kInvalidId};                                 \
}
    
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
    
      bool grow(size_t nBytes) {
    if (m_maxGrow == m_size) return false;
    assertx(m_destBase != m_base);
    }
    
    TCA OfflineCode::collectJmpTargets(FILE *file,
                                   TCA fileStartAddr,
                                   TCA codeStartAddr,
                                   uint64_t codeLen,
                                   vector<TCA> *jmpTargets) {
  return 0;
}
    
    
    {    CondVarNode() {
      pthread_cond_init(&m_cond, nullptr);
    }
    ~CondVarNode() {
      pthread_cond_destroy(&m_cond);
    }
    /* implicit */ operator pthread_cond_t*() {
      return &m_cond;
    }
    void unlink() {
      if (m_listHook.is_linked()) m_listHook.unlink();
    }
  };
    
      /* Invoked when trailers are received before closing the stream. Only invoked
   * when server sends trailers, which it may not. May be invoked while there is
   * read data remaining in local buffer. Contents of |trailers| is valid for
   * duration of the call.
   */
  void (*on_response_trailers_received)(
      bidirectional_stream* stream,
      const bidirectional_stream_header_array* trailers);
    
    std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
    #include <chrono>
#include <thread>
#include <vector>
    
     private:
  static Result Sample();
    
    grpc::string SummarizeService(
    const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  for (int i = 0; i < service->method_count(); ++i) {
    result.append(SummarizeMethod(service->method(i)));
  }
  return result;
}
    
    class SubProcess {
 public:
  SubProcess(const std::vector<std::string>& args);
  ~SubProcess();
    }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/python/python_generator.h>
    
      DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  rocksdb::Slice begin  = *v8::String::Utf8Value(args[0]->ToString());
  rocksdb::Slice end    = *v8::String::Utf8Value(args[1]->ToString());
  std::string cf        = *v8::String::Utf8Value(args[2]->ToString());
  db_wrapper->status_    = db_wrapper->db_->CompactRange(
      db_wrapper->columnFamilies_[cf], &begin, &end);
    
    // Returns a vector of 0 or 1 Env*, depending whether an Env is registered for
// TEST_ENV_URI.
//
// The purpose of returning an empty vector (instead of nullptr) is that gtest
// ValuesIn() will skip running tests when given an empty collection.
std::vector<Env*> GetCustomEnvs() {
  static Env* custom_env;
  static std::unique_ptr<Env> custom_env_guard;
  static bool init = false;
  if (!init) {
    init = true;
    const char* uri = getenv('TEST_ENV_URI');
    if (uri != nullptr) {
      custom_env = NewCustomObject<Env>(uri, &custom_env_guard);
    }
  }
    }
    
      private:
    explicit DBWrapper();
    ~DBWrapper();
    
    xxHash is an extremely fast Hash algorithm, running at RAM speed limits.
It also successfully passes all tests from the SMHasher suite.
    
      bool StatisticsJni::HistEnabledForType(uint32_t type) const {
    if (type >= HISTOGRAM_ENUM_MAX) {
      return false;
    }
    
    if (m_ignore_histograms.count(type) > 0) {
        return false;
    }
    }
    
    // This class contains a fixed array of buckets, each
// pointing to a skiplist (null if the bucket is empty).
// bucket_count: number of fixed array buckets
// skiplist_height: the max height of the skiplist
// skiplist_branching_factor: probabilistic size ratio between adjacent
//                            link lists in the skiplist
extern MemTableRepFactory* NewHashSkipListRepFactory(
    size_t bucket_count = 1000000, int32_t skiplist_height = 4,
    int32_t skiplist_branching_factor = 4
);
    
    
    {  InlineSkipList<TestComparator>::Iterator iter(&list);
  ASSERT_TRUE(!iter.Valid());
  iter.SeekToFirst();
  ASSERT_TRUE(!iter.Valid());
  key = 100;
  iter.Seek(Encode(&key));
  ASSERT_TRUE(!iter.Valid());
  iter.SeekForPrev(Encode(&key));
  ASSERT_TRUE(!iter.Valid());
  iter.SeekToLast();
  ASSERT_TRUE(!iter.Valid());
}
    
    void SyncPoint::DisableProcessing() {
  impl_->DisableProcessing();
}