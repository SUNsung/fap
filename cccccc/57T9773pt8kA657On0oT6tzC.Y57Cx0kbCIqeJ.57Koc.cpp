
        
        namespace testing {
    }
    
     private:
  // Sets parameter value. The caller is responsible for making sure the value
  // remains alive and unchanged throughout the current test.
  static void SetParam(const ParamType* parameter) {
    parameter_ = parameter;
  }
    
    // This is used internally by all instances of linked_ptr<>.  It needs to be
// a non-template class because different types of linked_ptr<> can refer to
// the same object (linked_ptr<Superclass>(obj) vs linked_ptr<Subclass>(obj)).
// So, it needs to be possible for different types of linked_ptr to participate
// in the same circular linked list, so we need a single class type here.
//
// DO NOT USE THIS CLASS DIRECTLY YOURSELF.  Use linked_ptr<T>.
class linked_ptr_internal {
 public:
  // Create a new circle that includes only this instance.
  void join_new() {
    next_ = this;
  }
    }
    
    
    {
    {
    {        int i = 0;
        for (typename ParamGenerator<ParamType>::iterator param_it =
                 generator.begin();
             param_it != generator.end(); ++param_it, ++i) {
          Message test_name_stream;
          test_name_stream << test_info->test_base_name << '/' << i;
          MakeAndRegisterTestInfo(
              test_case_name.c_str(),
              test_name_stream.GetString().c_str(),
              NULL,  // No type parameter.
              PrintToString(*param_it).c_str(),
              GetTestCaseTypeId(),
              TestCase::SetUpTestCase,
              TestCase::TearDownTestCase,
              test_info->test_meta_factory->CreateTestFactory(*param_it));
        }  // for param_it
      }  // for gen_it
    }  // for test_it
  }  // RegisterTests
    
      // Compares two wide C strings.  Returns true iff they have the same
  // content.
  //
  // Unlike wcscmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool WideCStringEquals(const wchar_t* lhs, const wchar_t* rhs);
    
    
    {    return true;
  }
    
    // Tests factorial of negative numbers.
TEST(FactorialTest, Negative) {
  // This test is named 'Negative', and belongs to the 'FactorialTest'
  // test case.
  EXPECT_EQ(1, Factorial(-5));
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_GT(Factorial(-10), 0);
    }
    
      /// The string-formatted status message.
  std::string message;
    
    /**
 * @brief Create an osquery extension 'module'.
 *
 * This helper macro creates a constructor to declare an osquery module is
 * loading. The osquery registry is set up when modules (shared objects) are
 * discovered via search paths and opened. At that phase the registry is locked
 * meaning no additional plugins can be registered. To unlock the registry
 * for modifications a module must call Registry::declareModule. This declares
 * and any plugins added will use the metadata in the declare to determine:
 *  - The name of the module adding the plugin
 *  - The SDK version the module was built with, to determine compatibility
 *  - The minimum SDK the module requires from osquery core
 *
 * The registry is again locked when the module load is complete and a well
 * known module-exported symbol is called.
 */
#define CREATE_MODULE(name, version, min_sdk_version)                          \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      Registry::get().declareModule(                                           \
          name, version, min_sdk_version, OSQUERY_SDK_VERSION);                \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
    #include <osquery/core.h>
#include <osquery/dispatcher.h>
#include <osquery/filesystem.h>
#include <osquery/logger.h>
#include <osquery/system.h>
    
    #ifdef WIN32
  pid = (int)::GetCurrentProcessId();
#else
  pid = getpid();
#endif
    
    TEST_F(StatusTests, test_constructor_2) {
  Status s;
  EXPECT_EQ(s.getCode(), 0);
  EXPECT_EQ(s.getMessage(), 'OK');
}
    
    
    {  for (const auto& key : keys) {
    db_[domain].erase(key);
  }
  return Status(0);
}
    
    //****************************
// Deprecated function names
//****************************
// The following translations are provided to ease code transition
// You are encouraged to no longer this function names
#define XXH32_feed   XXH32_update
#define XXH32_result XXH32_digest
#define XXH32_getIntermediateResult XXH32_intermediateDigest
    
     private:
  char delim_;         // The delimiter is inserted between elements
    
      virtual bool PartialMergeMulti(const Slice& key,
                                 const std::deque<Slice>& operand_list,
                                 std::string* new_value, Logger* logger) const
      override;
    
    
// --------------------
// --- EnvLibrados ----
// --------------------
/**
 * @brief EnvLibrados ctor
 * @details [long description]
 *
 * @param db_name unique database name
 * @param config_path the configure file path for rados
 */
EnvLibrados::EnvLibrados(const std::string& db_name,
                         const std::string& config_path,
                         const std::string& db_pool)
  : EnvLibrados('client.admin',
                'ceph',
                0,
                db_name,
                config_path,
                db_pool,
                '/wal',
                db_pool,
                1 << 20) {}
    
    
    {// This factory creates a cuckoo-hashing based mem-table representation.
// Cuckoo-hash is a closed-hash strategy, in which all key/value pairs
// are stored in the bucket array itself instead of in some data structures
// external to the bucket array.  In addition, each key in cuckoo hash
// has a constant number of possible buckets in the bucket array.  These
// two properties together makes cuckoo hash more memory efficient and
// a constant worst-case read time.  Cuckoo hash is best suitable for
// point-lookup workload.
//
// When inserting a key / value, it first checks whether one of its possible
// buckets is empty.  If so, the key / value will be inserted to that vacant
// bucket.  Otherwise, one of the keys originally stored in one of these
// possible buckets will be 'kicked out' and move to one of its possible
// buckets (and possibly kicks out another victim.)  In the current
// implementation, such 'kick-out' path is bounded.  If it cannot find a
// 'kick-out' path for a specific key, this key will be stored in a backup
// structure, and the current memtable to be forced to immutable.
//
// Note that currently this mem-table representation does not support
// snapshot (i.e., it only queries latest state) and iterators.  In addition,
// MultiGet operation might also lose its atomicity due to the lack of
// snapshot support.
//
// Parameters:
//   write_buffer_size: the write buffer size in bytes.
//   average_data_size: the average size of key + value in bytes.  This value
//     together with write_buffer_size will be used to compute the number
//     of buckets.
//   hash_function_count: the number of hash functions that will be used by
//     the cuckoo-hash.  The number also equals to the number of possible
//     buckets each key will have.
extern MemTableRepFactory* NewHashCuckooRepFactory(
    size_t write_buffer_size, size_t average_data_size = 64,
    unsigned int hash_function_count = 4);
#endif  // ROCKSDB_LITE
}  // namespace rocksdb

    
      // disable sync point processing
  void DisableProcessing();
    
      auto marker_iter = markers_.find(point);
  if (marker_iter != markers_.end()) {
    for (auto& marked_point : marker_iter->second) {
      marked_thread_id_.emplace(marked_point, thread_id);
    }
  }
    
    class MergingIterator;
    
      jlong addr_compaction_filter = env->CallLongMethod(m_jcallback_obj,
      m_jcreate_compaction_filter_methodid,
      static_cast<jboolean>(context.is_full_compaction),
      static_cast<jboolean>(context.is_manual_compaction));