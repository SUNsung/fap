
        
        #include 'db/filename.h'
#include 'db/dbformat.h'
#include 'db/table_cache.h'
#include 'db/version_edit.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    // If true, do not destroy the existing database.  If you set this
// flag and also specify a benchmark that wants a fresh database, that
// benchmark will fail.
static bool FLAGS_use_existing_db = false;
    
      // Choose a location for the test database if none given with --db=<path>
  if (FLAGS_db == NULL) {
      leveldb::Env::Default()->GetTestDirectory(&default_db_path);
      default_db_path += '/dbbench';
      FLAGS_db = default_db_path.c_str();
  }
    
      struct CommentInfo {
    CommentInfo();
    ~CommentInfo();
    }
    
    
    {PyObject* NewMessageOneofsByName(const Descriptor* descriptor);
PyObject* NewMessageOneofsSeq(const Descriptor* descriptor);
}  // namespace message_descriptor
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&any));
  ASSERT_TRUE(any.UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
    RepeatedEnumFieldGenerator::~RepeatedEnumFieldGenerator() {
    }
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    }
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    // Factory that creates generators for immutable-default messages.
class ImmutableGeneratorFactory : public GeneratorFactory {
 public:
  ImmutableGeneratorFactory(Context* context);
  virtual ~ImmutableGeneratorFactory();
    }
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_LAZY_MESSAGE_FIELD_H__

    
      /// Sets the non-blocking mode of the acceptor.
  /**
   * @param mode If @c true, the acceptor's synchronous operations will fail
   * with boost::asio::error::would_block if they are unable to perform the
   * requested operation immediately. If @c false, synchronous operations will
   * block until complete.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @note The non-blocking mode has no effect on the behaviour of asynchronous
   * operations. Asynchronous operations will never fail with the error
   * boost::asio::error::would_block.
   */
  boost::system::error_code non_blocking(
      bool mode, boost::system::error_code& ec)
  {
    return this->get_service().non_blocking(
        this->get_implementation(), mode, ec);
  }
    
    template <typename Stream>
class buffered_stream;
    
    #if defined(BOOST_ASIO_HAS_STD_FUNCTION)
using std::function;
#else // defined(BOOST_ASIO_HAS_STD_FUNCTION)
using boost::function;
#endif // defined(BOOST_ASIO_HAS_STD_FUNCTION)
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      // Start looping through starting at the first options
  // (so skip the exports)
  for (auto iter = line.begin() + options_index; iter != line.end(); ++iter) {
    if (iter->compare('-ro') == 0 || iter->compare('-o') == 0) {
      readonly = 1;
    }
  }
    
    /// Define a map of decoration points to their expected configuration key.
extern const std::map<DecorationPoint, std::string> kDecorationPointKeys;
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
    std::string stringFromCFNumber(const CFDataRef& cf_number, CFNumberType type) {
  // Make sure the type is a number.
  if (CFGetTypeID(cf_number) != CFNumberGetTypeID()) {
    return '0';
  }
    }
    
      // Test operator upper bounds.
  EXPECT_FALSE(cl2.matches(1000));
  EXPECT_FALSE(cl2.matches(1001));
    
    
    {  // Make sure no log file is created.
  // RocksDB logs are intercepted and forwarded to the GLog sink.
  auto details = SQL::selectAllFrom('file', 'path', EQUALS, path_ + '/LOG');
  ASSERT_EQ(details.size(), 0U);
}
    
    /**
 * @brief Compute a map of metadata about the supplied QueryData object
 *
 * @param r A row to analyze
 * @param lengths A mutable set of column lengths
 * @param use_columns Calulate lengths of column names or values
 *
 * @return A map of string to int such that the key represents the 'column' in
 * the supplied QueryData and the int represents the length of the longest key
 */
void computeRowLengths(const Row& r,
                       std::map<std::string, size_t>& lengths,
                       bool use_columns = false);
    
    
    {  // Then compute lengths of column names.
  computeRowLengths(q.front(), lengths, true);
  expected = {{'name', 10}, {'age', 4}, {'food', 23}, {'number', 6}};
  EXPECT_EQ(lengths, expected);
}
    
    using OpenBSMEventContextRef = std::shared_ptr<OpenBSMEventContext>;
using OpenBSMSubscriptionContextRef =
    std::shared_ptr<OpenBSMSubscriptionContext>;
    
      rocksdb::ColumnFamilyHandle* cf;
  db_wrapper->status_ = db_wrapper->db_->CreateColumnFamily(
      rocksdb::ColumnFamilyOptions(), cf_name, &cf);
    
      std::string scratch;
  scratch.resize(kGood.size() + kCorrupted.size() + 16);
  Slice result;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_OK(env_->NewRandomAccessFile(kFileName, &rand_file, soptions_));
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    
    {} // namespace rocksdb

    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
      // Reopen the database (the previous changes should persist / be remembered)
  {
    auto db = OpenDb('\n');
    StringLists slists(db);
    }
    
      /// Prints the entire (list: key), for debugging.
  void Print(const std::string& key);
    
      // returns true if the reader has encountered an eof condition.
  bool IsEOF() {
    return eof_;
  }
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
      // Returns the sequence number of the first element that was inserted
  // into the memtable.
  // REQUIRES: external synchronization to prevent simultaneous
  // operations on the same MemTable (unless this Memtable is immutable).
  SequenceNumber GetFirstSequenceNumber() {
    return first_seqno_.load(std::memory_order_relaxed);
  }
    
      jstring jname =
      (jstring)env->CallObjectMethod(m_jcallback_obj, jname_method_id);
  if(env->ExceptionCheck()) {
    // exception thrown
    return;
  }
  jboolean has_exception = JNI_FALSE;
  m_name = JniUtil::copyString(env, jname, &has_exception);  // also releases jname
  if (has_exception == JNI_TRUE) {
    // exception thrown
    return;
  }
    
    
    {
    {   private:
     jmethodID m_jLogMethodId;
     jobject m_jdebug_level;
     jobject m_jinfo_level;
     jobject m_jwarn_level;
     jobject m_jerror_level;
     jobject m_jfatal_level;
     jobject m_jheader_level;
     std::unique_ptr<char[]> format_str(const char* format, va_list ap) const;
  };
}  // namespace rocksdb