
        
        
    {
    { private:
  FRIEND_TEST(PermissionsTests, test_explicit_drop);
  FRIEND_TEST(PermissionsTests, test_path_drop);
  FRIEND_TEST(PermissionsTests, test_nobody_drop);
};
} // namespace osquery

    
    #include <osquery/config.h>
#include <osquery/core.h>
#include <osquery/database.h>
#include <osquery/events.h>
#include <osquery/extensions.h>
#include <osquery/filesystem.h>
#include <osquery/flags.h>
#include <osquery/logger.h>
#include <osquery/registry.h>
#include <osquery/sql.h>
#include <osquery/status.h>
#include <osquery/tables.h>
    
      /**
   * @brief A constructor which can be used to concisely express the status of
   * an operation.
   *
   * @param c a status code. The idiom is that a zero status code indicates a
   * successful operation and a non-zero status code indicates a failed
   * operation.
   * @param m a message indicating some extra detail regarding the operation.
   * If all operations were successful, this message should be 'OK'.
   * Otherwise, it doesn't matter what the string is, as long as both the
   * setter and caller agree.
   */
  Status(int c, std::string m) : code_(c), message_(std::move(m)) {}
    
      // Helper function to return the carve directory
  boost::filesystem::path getCarveDir() {
    return carveDir_;
  }
    
    
    {
    {    if (!result.ok()) {
      // assuming the default of 'hostname' as the machine identifier
      // intentionally not set to `ident` because the hostname may change
      // throughout the life of the process and we always want to be using the
      // most current hostname
      return osquery::getHostname();
    } else {
      VLOG(1) << 'Using host identifier: ' << ident;
    }
  }
  return ident;
}
    
      private:
    explicit DBWrapper();
    ~DBWrapper();
    
       Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    
    
    {  std::string res;
  slists.Get('random_key', &res);
  ASSERT_EQ(res, 'single_val');
}
    
    namespace rocksdb {
JniCallback::JniCallback(JNIEnv* env, jobject jcallback_obj) {
  // Note: jcallback_obj may be accessed by multiple threads,
  // so we ref the jvm not the env
  const jint rs = env->GetJavaVM(&m_jvm);
  if(rs != JNI_OK) {
    // exception thrown
    return;
  }
    }
    }
    
    // The factory is to create memtables based on a hash table:
// it contains a fixed array of buckets, each pointing to either a linked list
// or a skip list if number of entries inside the bucket exceeds
// threshold_use_skiplist.
// @bucket_count: number of fixed array buckets
// @huge_page_tlb_size: if <=0, allocate the hash table bytes from malloc.
//                      Otherwise from huge page TLB. The user needs to reserve
//                      huge pages for it to be allocated, like:
//                          sysctl -w vm.nr_hugepages=20
//                      See linux doc Documentation/vm/hugetlbpage.txt
// @bucket_entries_logging_threshold: if number of entries in one bucket
//                                    exceeds this number, log about it.
// @if_log_bucket_dist_when_flash: if true, log distribution of number of
//                                 entries when flushing.
// @threshold_use_skiplist: a bucket switches to skip list if number of
//                          entries exceed this parameter.
extern MemTableRepFactory* NewHashLinkListRepFactory(
    size_t bucket_count = 50000, size_t huge_page_tlb_size = 0,
    int bucket_entries_logging_threshold = 4096,
    bool if_log_bucket_dist_when_flash = true,
    uint32_t threshold_use_skiplist = 256);
    
      bool InsertWithHint(TestInlineSkipList* list, Key key, void** hint) {
    char* buf = list->AllocateKey(sizeof(Key));
    memcpy(buf, &key, sizeof(Key));
    bool res = list->InsertWithHint(buf, hint);
    keys_.insert(key);
    return res;
  }
    
    INSTANTIATE_TEST_CASE_P(DBWriteTestInstance, DBWriteTest,
                        testing::Values(DBTestBase::kDefault,
                                        DBTestBase::kConcurrentWALWrites,
                                        DBTestBase::kPipelinedWrite));