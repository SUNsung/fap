
        
        namespace {
    }
    
    void AutoUpdater::OnWindowAllClosed() {
  QuitAndInstall();
}
    
    
    {
    {    *auto_resize_flags = static_cast<atom::AutoResizeFlags>(flags);
    return true;
  }
};
    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_browser_download_item, Initialize);

    
     protected:
  DownloadItem(v8::Isolate* isolate, download::DownloadItem* download_item);
  ~DownloadItem() override;
    
    #include 'atom/browser/api/atom_api_global_shortcut.h'
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    
    {  delegate.Get('isCommandIdChecked', &is_checked_);
  delegate.Get('isCommandIdEnabled', &is_enabled_);
  delegate.Get('isCommandIdVisible', &is_visible_);
  delegate.Get('getAcceleratorForCommandId', &get_accelerator_);
  delegate.Get('executeCommand', &execute_command_);
  delegate.Get('menuWillShow', &menu_will_show_);
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Screen);
};
    
    namespace {
// A suffix that will be appended to the file's outer class name if the name
// conflicts with some other types defined in the file.
const char* kOuterClassNameSuffix = 'OuterClass';
    }
    
    static const int kValueSize = 200 * 1024;
static const int kTotalSize = 100 * 1024 * 1024;
static const int kCount = kTotalSize / kValueSize;
    
      InternalKey begin_storage, end_storage;
    
      // Queue of writers.
  std::deque<Writer*> writers_ GUARDED_BY(mutex_);
  WriteBatch* tmp_batch_ GUARDED_BY(mutex_);
    
    namespace leveldb {
    }
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string TableFileName(const std::string& dbname, uint64_t number);
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
    TEST(LogTest, ChecksumMismatch) {
  Write('foo');
  IncrementByte(0, 10);
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(10, DroppedBytes());
  ASSERT_EQ('OK', MatchError('checksum mismatch'));
}
    
    
    {  // Force creation of multiple memtables by reducing the write buffer size.
  Options opt;
  opt.reuse_logs = true;
  opt.write_buffer_size = (kNum*100) / 2;
  Open(&opt);
  ASSERT_LE(2, NumTables());
  ASSERT_EQ(1, NumLogs());
  ASSERT_NE(old_log_file, FirstLogFile()) << 'must not reuse log';
  for (int i = 0; i < kNum; i++) {
    char buf[100];
    snprintf(buf, sizeof(buf), '%050d', i);
    ASSERT_EQ(buf, Get(buf));
  }
}
    
    template <typename ValueType>
class ForEach {
 public:
  template <typename InputIterator>
  ForEach(InputIterator begin, InputIterator end)
      : func_([begin, end](FunctionRef<void(ValueType)> f) {
          for (auto it = begin; it != end; ++it) {
            f(*it);
          }
        }) {}
    }
    
    using namespace std;
    
    #ifndef FOLLY_RANDOM_H_
#error This file may only be included from folly/Random.h
#endif
    
      /**
   * Returns a random uint32_t given a specific RNG
   */
  template <class RNG, class /* EnableIf */ = ValidRNG<RNG>>
  static uint32_t rand32(RNG&& rng) {
    return rng();
  }
    
    /*
 * Encode a single unicode code point into a UTF-8 byte sequence.
 *
 * Return value is undefined if `cp' is an invalid code point.
 */
std::string codePointToUtf8(char32_t cp);
    
    inline UriTuple as_tuple(const folly::Uri& k) {
  return UriTuple(
      k.scheme(),
      k.username(),
      k.password(),
      k.host(),
      k.port(),
      k.path(),
      k.query(),
      k.fragment());
}
    
      explicit VirtualExecutor(Executor* executor)
      : VirtualExecutor(getKeepAliveToken(executor)) {}
    
      // Test negative values
  // When going to coarser grained types these should be rounded up towards 0.
  ts.tv_sec = -5;
  ts.tv_nsec = 123456;
  EXPECT_EQ(-4999876544, to<nanoseconds>(ts).count());
  EXPECT_EQ(-4999876544, duration_cast<nanoseconds>(-5s + 123456ns).count());
  EXPECT_EQ(-4999876, to<microseconds>(ts).count());
  EXPECT_EQ(-4999876, duration_cast<microseconds>(-5s + 123456ns).count());
  EXPECT_EQ(-4999, to<milliseconds>(ts).count());
  EXPECT_EQ(-4999, duration_cast<milliseconds>(-5s + 123456ns).count());
  EXPECT_EQ(-4s, to<seconds>(ts));
  EXPECT_EQ(-4, duration_cast<seconds>(-5s + 123456ns).count());
  ts.tv_sec = -7200;
  ts.tv_nsec = 123456;
  EXPECT_EQ(-1h, to<hours>(ts));
  EXPECT_EQ(
      -1,
      duration_cast<hours>(seconds{ts.tv_sec} + nanoseconds{ts.tv_nsec})
          .count());
  ts.tv_sec = -7000;
  ts.tv_nsec = 123456;
  EXPECT_EQ(-1h, to<hours>(ts));
  EXPECT_EQ(
      -1,
      duration_cast<hours>(seconds{ts.tv_sec} + nanoseconds{ts.tv_nsec})
          .count());
  ts.tv_sec = -7201;
  ts.tv_nsec = 123456;
  EXPECT_EQ(-2h, to<hours>(ts));
  EXPECT_EQ(
      -2,
      duration_cast<hours>(seconds{ts.tv_sec} + nanoseconds{ts.tv_nsec})
          .count());
    
    /// Wrapper around the makeCompressionCounterHandler() extension point.
class CompressionCounter {
 public:
  CompressionCounter() {}
  CompressionCounter(
      folly::io::CodecType codecType,
      folly::StringPiece codecName,
      folly::Optional<int> level,
      CompressionCounterKey key,
      CompressionCounterType counterType) {
    initialize_ = [=]() {
      return makeCompressionCounterHandler(
          codecType, codecName, level, key, counterType);
    };
    DCHECK(!initialize_.hasAllocatedMemory());
  }
    }
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
        oldptr = takeOwnedBase(success);
    if (!owners_eq(oldptr, CountedDetail::get_counted_base(expected))) {
      expected = get_shared_ptr(oldptr, false);
      release_external(newptr);
      return false;
    }
    expectedptr = oldptr; // Need oldptr to release if failed
    if (ptr_.compare_exchange_weak(expectedptr, newptr, success, failure)) {
      if (oldptr.get()) {
        release_external(oldptr, -1);
      }
      return true;
    } else {
      if (oldptr.get()) {
        expected = get_shared_ptr(oldptr, false);
      } else {
        expected = SharedPtr(nullptr);
      }
      release_external(newptr);
      return false;
    }
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, desired, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    return compare_exchange_weak(expected, desired, success, failure);
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_strong(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto local_expected = expected;
    do {
      if (compare_exchange_weak(expected, n, success, failure)) {
        return true;
      }
    } while (local_expected == expected);