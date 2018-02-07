TEST(EnvPosixTest, TestOpenOnRead) {
  // Write some test data to a single file that will be opened |n| times.
  std::string test_dir;
  ASSERT_OK(env_->GetTestDirectory(&test_dir));
  std::string test_file = test_dir + '/open_on_read.txt';
    }
    
    TEST(LogTest, ReadFourthLastBlock) {
  CheckInitialOffsetRecord(2 * log::kBlockSize + 1, 3);
}
    
    class VersionEdit {
 public:
  VersionEdit() { Clear(); }
  ~VersionEdit() { }
    }
    
      // Set the count for the number of entries in the batch.
  static void SetCount(WriteBatch* batch, int n);
    
          Start();
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
      const FilterPolicy* policy_;
  std::string keys_;              // Flattened key contents
  std::vector<size_t> start_;     // Starting index in keys_ of each key
  std::string result_;            // Filter data computed so far
  std::vector<Slice> tmp_keys_;   // policy_->CreateFilter() argument
  std::vector<uint32_t> filter_offsets_;
    
    #include 'env/mock_env.h'
#include 'rocksdb/env.h'
#include 'rocksdb/utilities/object_registry.h'
#include 'util/testharness.h'
    
    namespace rocksdb {
    }
    
      slists.Append('k1', 'v1');
  slists.Append('k1', 'v2');
  slists.Append('k1', 'v3');
    
        if ((c = PickCompactionToReduceSortedRuns(
             cf_name, mutable_cf_options, vstorage, score, ratio, UINT_MAX,
             sorted_runs, log_buffer)) != nullptr) {
      ROCKS_LOG_BUFFER(log_buffer,
                       '[%s] Universal: compacting for size ratio\n',
                       cf_name.c_str());
    } else {
      // Size amplification and file size ratios are within configured limits.
      // If max read amplification is exceeding configured limits, then force
      // compaction without looking at filesize ratios and try to reduce
      // the number of files to fewer than level0_file_num_compaction_trigger.
      // This is guaranteed by NeedsCompaction()
      assert(sorted_runs.size() >=
             static_cast<size_t>(
                 mutable_cf_options.level0_file_num_compaction_trigger));
      // Get the total number of sorted runs that are not being compacted
      int num_sr_not_compacted = 0;
      for (size_t i = 0; i < sorted_runs.size(); i++) {
        if (sorted_runs[i].being_compacted == false) {
          num_sr_not_compacted++;
        }
      }
    }
    
      // If hash index lookup is enabled and `use_hash_index` is true. This block
  // will do hash lookup for the key prefix.
  //
  // NOTE: for the hash based lookup, if a key prefix doesn't match any key,
  // the iterator will simply be set as 'invalid', rather than returning
  // the key that is just pass the target key.
  //
  // If iter is null, return new Iterator
  // If iter is not null, update this one and return it as Iterator*
  //
  // If total_order_seek is true, hash_index_ and prefix_index_ are ignored.
  // This option only applies for index block. For data block, hash_index_
  // and prefix_index_ are null, so this option does not matter.
  BlockIter* NewIterator(const Comparator* comparator,
                         BlockIter* iter = nullptr,
                         bool total_order_seek = true,
                         Statistics* stats = nullptr);
  void SetBlockPrefixIndex(BlockPrefixIndex* prefix_index);
    
    
    {} // namespace A2STR
    
    
    {  virtual bool execute() CXX11_OVERRIDE;
};
    
    #include 'AbstractCommand.h'