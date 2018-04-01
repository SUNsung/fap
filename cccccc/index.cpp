
        
        TEST(LogTest, Fragmentation) {
  Write('small');
  Write(BigString('medium', 50000));
  Write(BigString('large', 100000));
  ASSERT_EQ('small', Read());
  ASSERT_EQ(BigString('medium', 50000), Read());
  ASSERT_EQ(BigString('large', 100000), Read());
  ASSERT_EQ('EOF', Read());
}
    
      // Check that the file exists.
  ASSERT_TRUE(env_->FileExists('/dir/f'));
  ASSERT_OK(env_->GetFileSize('/dir/f', &file_size));
  ASSERT_EQ(0, file_size);
  ASSERT_OK(env_->GetChildren('/dir', &children));
  ASSERT_EQ(1, children.size());
  ASSERT_EQ('f', children[0]);
    
    void CondVar::Signal() {
  PthreadCall('signal', pthread_cond_signal(&cv_));
}
    
    void BlockBuilder::Reset() {
  buffer_.clear();
  restarts_.clear();
  restarts_.push_back(0);       // First restart point is at offset 0
  counter_ = 0;
  finished_ = false;
  last_key_.clear();
}
    
    
    { private:
  const FilterPolicy* policy_;
  const char* data_;    // Pointer to filter data (at block-start)
  const char* offset_;  // Pointer to beginning of offset array (at block-end)
  size_t num_;          // Number of entries in offset array
  size_t base_lg_;      // Encoding parameter (see kFilterBaseLg in .cc file)
};
    
    #include 'db/_wrapper.h'
#include 'rocksdb/db.h'
#include 'rocksdb/options.h'
#include 'rocksdb/slice.h'
    
    namespace rocksdb {
    }
    
    #include <assert.h>
#include 'rocksjni/jnicallback.h'
#include 'rocksjni/portal.h'
    
    #include 'rocksjni/statisticsjni.h'
    
    namespace rocksdb {
    }
    
      virtual Status StartActivityLogging(const std::string& activity_log_file,
                                      Env* env,
                                      uint64_t max_logging_size = 0) override {
    return cache_activity_logger_.StartLogging(activity_log_file, env,
                                               max_logging_size);
  }
    
      // Memtable related options
  cf_opts.write_buffer_size = mutable_cf_options.write_buffer_size;
  cf_opts.max_write_buffer_number = mutable_cf_options.max_write_buffer_number;
  cf_opts.arena_block_size = mutable_cf_options.arena_block_size;
  cf_opts.memtable_prefix_bloom_size_ratio =
      mutable_cf_options.memtable_prefix_bloom_size_ratio;
  cf_opts.memtable_huge_page_size = mutable_cf_options.memtable_huge_page_size;
  cf_opts.max_successive_merges = mutable_cf_options.max_successive_merges;
  cf_opts.inplace_update_num_locks =
      mutable_cf_options.inplace_update_num_locks;
    
    
TEST_P(DBCompactionTestWithParam, CompactionTrigger) {
  const int kNumKeysPerFile = 100;
    }