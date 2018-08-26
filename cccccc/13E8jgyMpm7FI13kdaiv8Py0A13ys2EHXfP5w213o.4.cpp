
        
        
    {  // Assuming T is defined in namespace foo, in the next statement,
  // the compiler will consider all of:
  //
  //   1. foo::operator<< (thanks to Koenig look-up),
  //   2. ::operator<< (as the current namespace is enclosed in ::),
  //   3. testing::internal2::operator<< (thanks to the using statement above).
  //
  // The operator<< whose type matches T best will be picked.
  //
  // We deliberately allow #2 to be a candidate, as sometimes it's
  // impossible to define #1 (e.g. when foo is ::std, defining
  // anything in it is undefined behavior unless you are a compiler
  // vendor.).
  *os << value;
}
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(SingleFailureChecker);
};
    
    // This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
class GTEST_API_ HasNewFatalFailureHelper
    : public TestPartResultReporterInterface {
 public:
  HasNewFatalFailureHelper();
  virtual ~HasNewFatalFailureHelper();
  virtual void ReportTestPartResult(const TestPartResult& result);
  bool has_new_fatal_failure() const { return has_new_fatal_failure_; }
 private:
  bool has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;
    }
    
      // Gets the user supplied key.
  const char* key() const {
    return key_.c_str();
  }
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED4.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3,
          typename T4>
AssertionResult AssertPred4Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  const char* e3,
                                  const char* e4,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2,
                                  const T3& v3,
                                  const T4& v4) {
  if (pred(v1, v2, v3, v4)) return AssertionSuccess();
    }
    
    // This macro is for implementing ASSERT/EXPECT_DEBUG_DEATH when compiled in
// NDEBUG mode. In this case we need the statements to be executed, the regex is
// ignored, and the macro must accept a streamed message even though the message
// is never printed.
# define GTEST_EXECUTE_STATEMENT_(statement, regex) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
     GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } else \
    ::testing::Message()
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23>
struct Templates23 {
  typedef TemplateSel<T1> Head;
  typedef Templates22<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23> Tail;
};
    
    
    {  int initially_allocated_;
};
    
    // Tests the c'tor that accepts a C string.
TEST(MyString, ConstructorFromCString) {
  const MyString s(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
  EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
            s.Length());
}
    
    
    {    return element;
  }
    
    private:
  void push_back(const Bytecode& op, bool is_concat = false);
  void squash();
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    enum class LinkReg {
  Save,
  DoNotTouch
};
    
    namespace HPHP {
    }
    
    // This method must return a char* which is owned by the IniSettingMap
// to avoid issues with the lifetime of the char*
const char* Config::Get(const IniSettingMap &ini, const Hdf& config,
                        const std::string& name /* = '' */,
                        const char *defValue /* = nullptr */,
                        const bool prepend_hhvm /* = true */) {
  auto ini_name = IniName(name, prepend_hhvm);
  Hdf hdf = name != '' ? config[name] : config;
  auto value = ini_iterate(ini, ini_name);
  if (value.isString()) {
    // See generic Get##METHOD below for why we are doing this
    // Note that value is a string, so value.toString() is not
    // a temporary.
    const char* ini_ret = value.toString().data();
    const char* hdf_ret = hdf.configGet(ini_ret);
    if (hdf_ret != ini_ret) {
      ini_ret = hdf_ret;
      IniSetting::SetSystem(ini_name, ini_ret);
    }
    return ini_ret;
  }
  return hdf.configGet(defValue);
}
    
    /**
 * Implement this interface to report information to debugger or execute
 * debugger commands.
 */
struct IDebuggable {
  enum Support {
    SupportInfo = 1,
    SupportDump = 2,
    SupportVerb = 4,
  };
    }
    
    void PlainDirectory::rewind() {
  ::rewinddir(m_dir);
}
    
    namespace HPHP {
    }
    
    #define ERROR_RAISE_WARNING(exp)        \
  int ret = (exp);                      \
  if (ret != 0) {                       \
    raise_warning(                      \
      '%s(): %s',                       \
      __FUNCTION__,                     \
      folly::errnoStr(errno).c_str()    \
    );                                  \
  }                                     \
    
    
    {}  // namespace leveldb
    
    Status BuildTable(const std::string& dbname,
                  Env* env,
                  const Options& options,
                  TableCache* table_cache,
                  Iterator* iter,
                  FileMetaData* meta) {
  Status s;
  meta->file_size = 0;
  iter->SeekToFirst();
    }
    
    TEST(CorruptionTest, NewFileErrorDuringWrite) {
  // Do enough writing to force minor compaction
  env_.writable_file_error_ = true;
  const int num = 3 + (Options().write_buffer_size / kValueSize);
  std::string value_storage;
  Status s;
  for (int i = 0; s.ok() && i < num; i++) {
    WriteBatch batch;
    batch.Put('a', Value(100, &value_storage));
    s = db_->Write(WriteOptions(), &batch);
  }
  ASSERT_TRUE(!s.ok());
  ASSERT_GE(env_.num_writable_file_errors_, 1);
  env_.writable_file_error_ = false;
  Reopen();
}
    
    #include 'db/filename.h'
#include 'db/db_impl.h'
#include 'db/dbformat.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/mutexlock.h'
#include 'util/random.h'
    
    static std::string IKey(const std::string& user_key,
                        uint64_t seq,
                        ValueType vt) {
  std::string encoded;
  AppendInternalKey(&encoded, ParsedInternalKey(user_key, seq, vt));
  return encoded;
}
    
      char* scratch = new char[length];
  leveldb::Slice result;
  s = orig_file->Read(length, &result, scratch);
  delete orig_file;
  if (s.ok()) {
    std::string tmp_name = GetDirName(filename) + '/truncate.tmp';
    WritableFile* tmp_file;
    s = env->NewWritableFile(tmp_name, &tmp_file);
    if (s.ok()) {
      s = tmp_file->Append(result);
      delete tmp_file;
      if (s.ok()) {
        s = env->RenameFile(tmp_name, filename);
      } else {
        env->DeleteFile(tmp_name);
      }
    }
  }
    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
    static const int kBlockSize = 32768;
    
    
    {  // No copying allowed
  MemTableIterator(const MemTableIterator&);
  void operator=(const MemTableIterator&);
};
    
      // Drop reference count.  Delete if no more references exist.
  void Unref() {
    --refs_;
    assert(refs_ >= 0);
    if (refs_ <= 0) {
      delete this;
    }
  }
    
      // Pad with zeroes to make manifest file very big.
  {
    uint64_t len = FileSize(old_manifest);
    WritableFile* file;
    ASSERT_OK(env()->NewAppendableFile(old_manifest, &file));
    std::string zeroes(3*1048576 - static_cast<size_t>(len), 0);
    ASSERT_OK(file->Append(zeroes));
    ASSERT_OK(file->Flush());
    delete file;
  }
    
      Iterator* NewTableIterator(const FileMetaData& meta) {
    // Same as compaction iterators: if paranoid_checks are on, turn
    // on checksum verification.
    ReadOptions r;
    r.verify_checksums = options_.paranoid_checks;
    return table_cache_->NewIterator(r, meta.number, meta.file_size);
  }