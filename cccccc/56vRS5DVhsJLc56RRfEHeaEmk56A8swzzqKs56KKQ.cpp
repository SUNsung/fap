
        
        // Read through the first n keys repeatedly and check that they get
// compacted (verified by checking the size of the key space).
void AutoCompactTest::DoReads(int n) {
  std::string value(kValueSize, 'x');
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
    }
    
      std::string fname = TableFileName(dbname, meta->number);
  if (iter->Valid()) {
    WritableFile* file;
    s = env->NewWritableFile(fname, &file);
    if (!s.ok()) {
      return s;
    }
    }
    
    #endif  // STORAGE_LEVELDB_DB_BUILDER_H_

    
    // Maximum number of level-0 files.  We stop writes at this point.
static const int kL0_StopWritesTrigger = 12;
    
    // Called on every item found in a WriteBatch.
class WriteBatchItemPrinter : public WriteBatch::Handler {
 public:
  WritableFile* dst_;
  virtual void Put(const Slice& key, const Slice& value) {
    std::string r = '  put '';
    AppendEscapedStringTo(&r, key);
    r += '' '';
    AppendEscapedStringTo(&r, value);
    r += ''\n';
    dst_->Append(r);
  }
  virtual void Delete(const Slice& key) {
    std::string r = '  del '';
    AppendEscapedStringTo(&r, key);
    r += ''\n';
    dst_->Append(r);
  }
};
    
      // Returns the physical offset of the last record returned by ReadRecord.
  //
  // Undefined before the first call to ReadRecord.
  uint64_t LastRecordOffset();
    
    TEST(LogTest, Fragmentation) {
  Write('small');
  Write(BigString('medium', 50000));
  Write(BigString('large', 100000));
  ASSERT_EQ('small', Read());
  ASSERT_EQ(BigString('medium', 50000), Read());
  ASSERT_EQ(BigString('large', 100000), Read());
  ASSERT_EQ('EOF', Read());
}
    
    Writer::Writer(WritableFile* dest)
    : dest_(dest),
      block_offset_(0) {
  InitTypeCrc(type_crc_);
}
    
    TEST(RecoveryTest, LogFileReuse) {
  if (!CanAppend()) {
    fprintf(stderr, 'skipping test because env does not support appending\n');
    return;
  }
  for (int i = 0; i < 2; i++) {
    ASSERT_OK(Put('foo', 'bar'));
    if (i == 0) {
      // Compact to ensure current log is empty
      CompactMemTable();
    }
    Close();
    ASSERT_EQ(1, NumLogs());
    uint64_t number = FirstLogFile();
    if (i == 0) {
      ASSERT_EQ(0, FileSize(LogName(number)));
    } else {
      ASSERT_LT(0, FileSize(LogName(number)));
    }
    Open();
    ASSERT_EQ(1, NumLogs());
    ASSERT_EQ(number, FirstLogFile()) << 'did not reuse log file';
    ASSERT_EQ('bar', Get('foo'));
    Open();
    ASSERT_EQ(1, NumLogs());
    ASSERT_EQ(number, FirstLogFile()) << 'did not reuse log file';
    ASSERT_EQ('bar', Get('foo'));
  }
}
    
      // No-barrier variants that can be safely used in a few locations.
  Node* NoBarrier_Next(int n) {
    assert(n >= 0);
    return reinterpret_cast<Node*>(next_[n].NoBarrier_Load());
  }
  void NoBarrier_SetNext(int n, Node* x) {
    assert(n >= 0);
    next_[n].NoBarrier_Store(x);
  }
    
      bool empty() const { return head_.next_ == &head_; }
  SnapshotImpl* oldest() const { assert(!empty()); return head_.next_; }
  SnapshotImpl* newest() const { assert(!empty()); return head_.prev_; }
    
      bool keepAliveAcquire() override {
    ++refCount;
    return true;
  }
    
    // Check a Linux kernel-style return code (>= 0 on success, negative error
// number on error), throw on error.
template <class... Args>
void checkKernelError(ssize_t ret, Args&&... args) {
  if (UNLIKELY(ret < 0)) {
    throwSystemErrorExplicit(int(-ret), std::forward<Args>(args)...);
  }
}
    
        template <
        typename OtherExecutor,
        typename = typename std::enable_if<
            std::is_convertible<OtherExecutor*, ExecutorT*>::value>::type>
    /* implicit */ KeepAlive(KeepAlive<OtherExecutor>&& other) noexcept
        : KeepAlive(other.get(), other.executorAndDummyFlag_ & kDummyFlag) {
      other.executorAndDummyFlag_ = 0;
    }
    
    namespace folly {
    }
    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
      /**
   * windowSize is the base two logarithm of the window size (the size of the
   * history buffer). It should be in the range 9..15. Larger values of this
   * parameter result in better compression at the expense of memory usage.
   *
   * The default value is 15.
   *
   * NB: when inflating/uncompressing data, the windowSize must be greater than
   * or equal to the size used when deflating/compressing.
   */
  int windowSize;
    
    
    {    std::ifstream file(filename, std::ios::binary | std::ios::ate);
    state.SetBytesProcessed(state.iterations() * file.tellg());
}
BENCHMARK_CAPTURE(ParseFile, jeopardy,      'data/jeopardy/jeopardy.json');
BENCHMARK_CAPTURE(ParseFile, canada,        'data/nativejson-benchmark/canada.json');
BENCHMARK_CAPTURE(ParseFile, citm_catalog,  'data/nativejson-benchmark/citm_catalog.json');
BENCHMARK_CAPTURE(ParseFile, twitter,       'data/nativejson-benchmark/twitter.json');
BENCHMARK_CAPTURE(ParseFile, floats,        'data/numbers/floats.json');
BENCHMARK_CAPTURE(ParseFile, signed_ints,   'data/numbers/signed_ints.json');
BENCHMARK_CAPTURE(ParseFile, unsigned_ints, 'data/numbers/unsigned_ints.json');
    
    bool IsZero(double n);
    
    inline AbortHandlerT*& GetAbortHandler() {
  static AbortHandlerT* handler = &std::abort;
  return handler;
}
    
    // Macros for declaring flags.
#define DECLARE_bool(name) extern bool FLAG(name)
#define DECLARE_int32(name) extern int32_t FLAG(name)
#define DECLARE_int64(name) extern int64_t FLAG(name)
#define DECLARE_double(name) extern double FLAG(name)
#define DECLARE_string(name) extern std::string FLAG(name)
    
    #include 'check.h'
#include 'colorprint.h'
#include 'commandlineflags.h'
#include 'internal_macros.h'
#include 'string_util.h'
#include 'timers.h'
    
    #if defined(BENCHMARK_OS_MACOSX)
#include <mach/mach_time.h>
#endif
// For MSVC, we want to use '_asm rdtsc' when possible (since it works
// with even ancient MSVC compilers), and when not possible the
// __rdtsc intrinsic, declared in <intrin.h>.  Unfortunately, in some
// environments, <windows.h> and <intrin.h> have conflicting
// declarations of some other intrinsics, breaking compilation.
// Therefore, we simply declare __rdtsc ourselves. See also
// http://connect.microsoft.com/VisualStudio/feedback/details/262047
#if defined(COMPILER_MSVC) && !defined(_M_IX86)
extern 'C' uint64_t __rdtsc();
#pragma intrinsic(__rdtsc)
#endif
    
      // Called by each thread
  bool wait() EXCLUDES(lock_) {
    bool last_thread = false;
    {
      MutexLock ml(lock_);
      last_thread = createBarrier(ml);
    }
    if (last_thread) phase_condition_.notify_all();
    return last_thread;
  }
    
    
    {}  // end namespace benchmark

    
    #include 'internal_macros.h'