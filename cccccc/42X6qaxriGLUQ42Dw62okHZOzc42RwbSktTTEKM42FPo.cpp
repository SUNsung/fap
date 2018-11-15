
        
        protected Q_SLOTS:
    void accept();
    
    public:
    explicit SignVerifyMessageDialog(const PlatformStyle *platformStyle, QWidget *parent);
    ~SignVerifyMessageDialog();
    
    
    {private:
    Ui::TransactionDescDialog *ui;
};
    
        explicit reverse_lock(Lock& _lock) : lock(_lock) {
        _lock.unlock();
        _lock.swap(templock);
    }
    
    static int secp256k1_ge_set_xo_var(secp256k1_ge *r, const secp256k1_fe *x, int odd) {
    if (!secp256k1_ge_set_xquad(r, x)) {
        return 0;
    }
    secp256k1_fe_normalize_var(&r->y);
    if (secp256k1_fe_is_odd(&r->y) != odd) {
        secp256k1_fe_negate(&r->y, &r->y, 1);
    }
    return 1;
    }
    
    static void RejectDifficultyMismatch(double difficulty, double expected_difficulty) {
     BOOST_CHECK_MESSAGE(
        DoubleEquals(difficulty, expected_difficulty, 0.00001),
        'Difficulty was ' + std::to_string(difficulty)
            + ' but was expected to be ' + std::to_string(expected_difficulty));
}
    
    /// Format list of arguments to std::cout, according to the given format string
template<typename... Args>
void printf(const char* fmt, const Args&... args)
{
    format(std::cout, fmt, args...);
}
    
    
    {bool ParseDouble(const std::string& str, double *out)
{
    if (!ParsePrechecks(str))
        return false;
    if (str.size() >= 2 && str[0] == '0' && str[1] == 'x') // No hexadecimal floats allowed
        return false;
    std::istringstream text(str);
    text.imbue(std::locale::classic());
    double result;
    text >> result;
    if(out) *out = result;
    return text.eof() && !text.fail();
}
}
    
        obj.clear();
    BOOST_CHECK(obj.empty());
    BOOST_CHECK_EQUAL(obj.size(), 0);
    BOOST_CHECK_EQUAL(obj.getType(), UniValue::VNULL);
    
    void GeneratorContext::GetCompilerVersion(Version* version) const {
  version->set_major(GOOGLE_PROTOBUF_VERSION / 1000000);
  version->set_minor(GOOGLE_PROTOBUF_VERSION / 1000 % 1000);
  version->set_patch(GOOGLE_PROTOBUF_VERSION % 1000);
  version->set_suffix(GOOGLE_PROTOBUF_VERSION_SUFFIX);
}
    
    template <typename DescriptorType>
static void WriteDocCommentBody(
    io::Printer* printer, const DescriptorType* descriptor) {
    SourceLocation location;
    if (descriptor->GetSourceLocation(&location)) {
        WriteDocCommentBodyImpl(printer, location);
    }
}
    
    #include <google/protobuf/compiler/objectivec/objectivec_enum.h>
#include <google/protobuf/compiler/objectivec/objectivec_helpers.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/stubs/strutil.h>
    
      AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    
          void (Benchmark::*method)(ThreadState*) = nullptr;
      bool fresh_db = false;
      int num_threads = FLAGS_threads;
    
    Status DumpFile(Env* env, const std::string& fname, WritableFile* dst) {
  FileType ftype;
  if (!GuessType(fname, &ftype)) {
    return Status::InvalidArgument(fname + ': unknown file type');
  }
  switch (ftype) {
    case kLogFile:         return DumpLog(env, fname, dst);
    case kDescriptorFile:  return DumpDescriptor(env, fname, dst);
    case kTableFile:       return DumpTable(env, fname, dst);
    default:
      break;
  }
  return Status::InvalidArgument(fname + ': not a dump-able file type');
}
    
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
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      // Returns the physical offset of the last record returned by ReadRecord.
  //
  // Undefined before the first call to ReadRecord.
  uint64_t LastRecordOffset();
    
    // Construct a string of the specified length made out of the supplied
// partial string.
static std::string BigString(const std::string& partial_string, size_t n) {
  std::string result;
  while (result.size() < n) {
    result.append(partial_string);
  }
  result.resize(n);
  return result;
}
    
    
    {    // It is ok to mutate max_height_ without any synchronization
    // with concurrent readers.  A concurrent reader that observes
    // the new value of max_height_ will see either the old value of
    // new level pointers from head_ (nullptr), or a new value set in
    // the loop below.  In the former case the reader will
    // immediately drop to the next level since nullptr sorts after all
    // keys.  In the latter case the reader will use the new node.
    max_height_.NoBarrier_Store(reinterpret_cast<void*>(height));
  }
    
      // Used inside the benchmark implementation
  struct Instance;
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    //=============================================================================//
//                               Benchmark
//=============================================================================//
    
      // currently there is no error handling for failure, so this is hack.
  CHECK(ret >= 0);
    
    // Find the coefficient for the high-order term in the running time, by
// minimizing the sum of squares of relative error.
//   - n          : Vector containing the size of the benchmark tests.
//   - time       : Vector containing the times for the benchmark tests.
//   - complexity : If different than oAuto, the fitting curve will stick to
//                  this one. If it is oAuto, it will be calculated the best
//                  fitting curve.
LeastSq MinimalLeastSq(const std::vector<int>& n,
                       const std::vector<double>& time, const BigO complexity) {
  CHECK_EQ(n.size(), time.size());
  CHECK_GE(n.size(), 2);  // Do not compute fitting curve is less than two
                          // benchmark runs are given
  CHECK_NE(complexity, oNone);
    }
    
    #ifndef MODULES_DRIVERS_CANBUS_CAN_CLIENT_CAN_CLIENT_H_
#define MODULES_DRIVERS_CANBUS_CAN_CLIENT_CAN_CLIENT_H_
    
    /**
 * @file
 * @brief Defines the CanClientFactory class.
 */
    
    /**
 * @class FakeCanClient
 * @brief The class which defines a fake CAN client which inherits CanClient.
 *        This fake CAN client is used for testing.
 */
class FakeCanClient : public CanClient {
 public:
  /// Interval of sleeping
  static const int32_t USLEEP_INTERVAL = 10000;
    }
    
    
    {    // Synchronous transmission of CAN messages
    int ret = write(dev_handler_, &send_frames_[i], sizeof(send_frames_[i]));
    if (ret <= 0) {
      AERROR << 'send message failed, error code: ' << ret;
      return ErrorCode::CAN_CLIENT_ERROR_BASE;
    }
  }
    
        if (frame_num == 0) {
      LOG_IF_EVERY_N(ERROR, receive_none_count++ > ERROR_COUNT_MAX,
                     ERROR_COUNT_MAX)
          << 'Received ' << receive_none_count << ' empty messages.';
      std::this_thread::sleep_for(default_period);
      continue;
    }
    receive_none_count = 0;
    
    const char HEX[] = '0123456789ABCDEF';
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    DEFINE_string(adapter_config_filename, 'modules/canbus/conf/adapter.conf',
              'The adapter config file');