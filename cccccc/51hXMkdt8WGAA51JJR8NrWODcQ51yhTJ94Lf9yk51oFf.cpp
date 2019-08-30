
        
        namespace winrt::Microsoft::Terminal::Settings::implementation
{
    KeyChord::KeyChord(bool ctrl, bool alt, bool shift, int32_t vkey) :
        _modifiers{ (ctrl ? Settings::KeyModifiers::Ctrl : Settings::KeyModifiers::None) |
                    (alt ? Settings::KeyModifiers::Alt : Settings::KeyModifiers::None) |
                    (shift ? Settings::KeyModifiers::Shift : Settings::KeyModifiers::None) },
        _vkey{ vkey }
    {
    }
    }
    
    #include 'ImfIO.h'
#include 'ImfHeader.h'
#include 'ImfNamespace.h'
#include 'ImfExport.h'
    
    
inline Header::ConstIterator 		
Header::ConstIterator::operator ++ (int)
{
    ConstIterator tmp = *this;
    ++_i;
    return tmp;
}
    
    const int SHORT_ZEROCODE_RUN = 59;
const int LONG_ZEROCODE_RUN  = 63;
const int SHORTEST_LONG_RUN  = 2 + LONG_ZEROCODE_RUN - SHORT_ZEROCODE_RUN;
const int LONGEST_LONG_RUN   = 255 + SHORTEST_LONG_RUN;
    
    /// Options for the `BatchNorm` module.
struct TORCH_API BatchNormOptions {
  /* implicit */ BatchNormOptions(int64_t features);
  /// The number of features of the input tensor.
  /// Changing this parameter after construction __has no effect__.
  TORCH_ARG(int64_t, features);
  /// Whether to learn a scale and bias that are applied in an affine
  /// transformation on the input.
  /// Changing this parameter after construction __has no effect__.
  TORCH_ARG(bool, affine) = true;
  /// Whether to store and update batch statistics (mean and variance) in the
  /// module. If `false`, you should call `pure_forward` and supply those batch
  /// statistics yourself.
  /// Changing this parameter after construction __has no effect__.
  TORCH_ARG(bool, stateful) = true;
  /// The epsilon value added for numerical stability.
  /// Changing this parameter after construction __is effective__.
  TORCH_ARG(double, eps) = 1e-5;
  /// A momentum multiplier for the mean and variance.
  /// Changing this parameter after construction __is effective__.
  TORCH_ARG(double, momentum) = 0.1;
};
    
    REGISTER_CPU_OPERATOR(Floor, FloorOp<float, CPUContext>);
    
              vector<TensorShape> out(1);
          switch (order) {
            case StorageOrder::NCHW:
              out[0] = CreateTensorShape(
                  vector<int>{N, C * kernel_h * kernel_w, out_h, out_w},
                  TensorProto::FLOAT);
              break;
            case StorageOrder::NHWC:
              out[0] = CreateTensorShape(
                  vector<int>{N, out_h, out_w, kernel_h * kernel_w * C},
                  TensorProto::FLOAT);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    class AutoCompactTest {
 public:
  AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    }
    
      // Verify that overwriting an open file will result in the new file data
  // being read from files opened before the write.
  Slice result;
  char scratch[kFileDataLen];
  ASSERT_OK(rand_file->Read(0, kFileDataLen, &result, scratch));
  ASSERT_EQ(0, result.compare(kWrite2Data));
    
    
    {}  // namespace leveldb
    
    #endif  // STORAGE_LEVELDB_UTIL_ARENA_H_

    
    TEST(EnvWindowsTest, TestOpenOnRead) {
  // Write some test data to a single file that will be opened |n| times.
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file = test_dir + '/open_on_read.txt';
    }
    
    struct Options;
struct FileMetaData;
    
      std::string newClosureName(
      const std::string &namespaceName,
      const std::string &className,
      const std::string &funcName);
  std::string newAnonClassName(
      const std::string &prefix,
      const std::string &namespaceName,
      const std::string &className,
      const std::string &funcName);
    
    public:
  static void Record(const std::string &verb, int xactionCount = 0,
                     const std::string &table = '');
  static std::string ReportStats();
    
      /*
   * Add an object to the position on the end, and allow lookup by `name'.
   */
  void add(const StringData* name, const T& t);
    
      bool operator==(const std::string &v) const { return compare(v) == 0;}
  bool operator!=(const std::string &v) const { return compare(v) != 0;}
  bool operator>=(const std::string &v) const { return compare(v) >= 0;}
  bool operator<=(const std::string &v) const { return compare(v) <= 0;}
  bool operator> (const std::string &v) const { return compare(v) >  0;}
  bool operator< (const std::string &v) const { return compare(v) <  0;}
    
    static entity_table_t ent_iso_8859_5[] = {
  'nbsp', 'IOcy', 'DJcy', 'GJcy', 'Jukcy', 'DScy', 'Iukcy', 'YIcy',
  'Jsercy', 'LJcy', 'NJcy', 'TSHcy', 'KJcy', 'shy', 'Ubrcy', 'DZcy',
  'Acy', 'Bcy', 'Vcy', 'Gcy', 'Dcy', 'IEcy', 'ZHcy', 'Zcy',
  'Icy', 'Jcy', 'Kcy', 'Lcy', 'Mcy', 'Ncy', 'Ocy', 'Pcy',
  'Rcy', 'Scy', 'Tcy', 'Ucy', 'Fcy', 'KHcy', 'TScy', 'CHcy',
  'SHcy', 'SHCHcy', 'HARDcy', 'Ycy', 'SOFTcy', 'Ecy', 'YUcy', 'YAcy',
  'acy', 'bcy', 'vcy', 'gcy', 'dcy', 'iecy', 'zhcy', 'zcy',
  'icy', 'jcy', 'kcy', 'lcy', 'mcy', 'ncy', 'ocy', 'pcy',
  'rcy', 'scy', 'tcy', 'ucy', 'fcy', 'khcy', 'tscy', 'chcy',
  'shcy', 'shchcy', 'hardcy', 'ycy', 'softcy', 'ecy', 'yucy', 'yacy',
  'numero', 'iocy', 'djcy', 'gjcy', 'jukcy', 'dscy', 'iukcy', 'yicy',
  'jsercy', 'ljcy', 'njcy', 'tshcy', 'kjcy', 'sect', 'ubrcy', 'dzcy'
};
    
      HTTPMessage *msg = nullptr;
  bool newPushOk = (message.m_type == ResponseMessage::Type::HEADERS);
  HTTPTransaction *txn = getTransaction(message.m_pushId, &msg, newPushOk);
  if (!txn) {
    // client is gone, just eat the msg
    VLOG(4) << 'client is gone, eating the msg';
    return;
  }
  switch (message.m_type) {
    case ResponseMessage::Type::HEADERS:
      CHECK(msg);
      txn->sendHeaders(*msg);
      if (!message.m_chunk && !message.m_eom) {
        break;
      } // else fall through
    case ResponseMessage::Type::BODY:
      if (message.m_chunk && m_method != Transport::Method::HEAD) {
        // TODO: experiment with disabling this chunked flag and letting
        // proxygen framework do the chunking
        if (message.m_chunked) {
          txn->sendChunkHeader(message.m_chunk->length());
          txn->sendBody(std::move(message.m_chunk));
          txn->sendChunkTerminator();
        } else {
          txn->sendBody(std::move(message.m_chunk));
        }
      }
      if (!message.m_eom) {
        break;
      } // else fall through
    case ResponseMessage::Type::EOM:
      txn->sendEOM();
      break;
    case ResponseMessage::Type::FINISH:
      // need to make sure the last reference is deleted in this thread
    }
    
    void APCGCManager::sweep() {
  assertx(RuntimeOption::EvalGCForAPC);
  if (RuntimeOption::ServerExecutionMode()) {
    return; // Doesn't support server mode yet
  }
  FTRACE(1, 'Sweep! Pending size:{}\n', apcgcPendingSize());
  WriteLock l1(candidateListLock);
  WriteLock l2(rootMapLock);
  WriteLock l3(visibleFromHeapLock);
    }
    
    #include <unistd.h>
    
      /* Code block sizes read from configs. */
  static uint32_t AHotSize;
  static uint32_t ASize;
  static uint32_t AProfSize;
  static uint32_t AColdSize;
  static uint32_t AFrozenSize;
    
    class Context
{
public:
    Context(size_t stack_size, coroutine_func_t fn, void* private_data);
    ~Context();
    bool swap_in();
    bool swap_out();
#if !defined(SW_NO_USE_ASM_CONTEXT) && defined(SW_LOG_TRACE_OPEN)
    ssize_t get_stack_usage();
#endif
    inline bool is_end()
    {
        return end_;
    }
    static void context_func(void* arg);
    }
    
    TEST(pipe, unixsock)
{
    swPipe p;
    char buf[1024];
    bzero(&p, sizeof(p));
    int ret = swPipeUnsock_create(&p, 1, SOCK_DGRAM);
    ASSERT_EQ(ret, 0);
    }
    
        char *key;
    int data;
    
    static void thread_read(int i);
static void thread_write(void);
static ThreadObject threads[READ_THREAD_N];
    
    void swoole_throw_error(int code)
{
    throw swoole::Exception(code);
}

    
        for (auto i = lists.begin(); i != lists.end(); i++)
    {
        int ret = swRbtree_delete(tree, *i);
        ASSERT_EQ(ret, 0);
    }