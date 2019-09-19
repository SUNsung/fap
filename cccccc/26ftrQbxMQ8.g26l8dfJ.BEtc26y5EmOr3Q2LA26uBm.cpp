
        
            // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    #ifndef NDEBUG  // sync point is not included with DNDEBUG build
TEST_F(DBTestXactLogIterator, TransactionLogIteratorRace) {
  static const int LOG_ITERATOR_RACE_TEST_COUNT = 2;
  static const char* sync_points[LOG_ITERATOR_RACE_TEST_COUNT][4] = {
      {'WalManager::GetSortedWalFiles:1',  'WalManager::PurgeObsoleteFiles:1',
       'WalManager::PurgeObsoleteFiles:2', 'WalManager::GetSortedWalFiles:2'},
      {'WalManager::GetSortedWalsOfType:1',
       'WalManager::PurgeObsoleteFiles:1',
       'WalManager::PurgeObsoleteFiles:2',
       'WalManager::GetSortedWalsOfType:2'}};
  for (int test = 0; test < LOG_ITERATOR_RACE_TEST_COUNT; ++test) {
    // Setup sync point dependency to reproduce the race condition of
    // a log file moved to archived dir, in the middle of GetSortedWalFiles
    rocksdb::SyncPoint::GetInstance()->LoadDependency(
      { { sync_points[test][0], sync_points[test][1] },
        { sync_points[test][2], sync_points[test][3] },
      });
    }
    }
    
    const SliceTransform* NewNoopTransform() {
  return new NoopTransform;
}
    
    namespace {
    }
    
      if (timeout_time < 0) {
    // If timeout is negative, do not use a timeout
    cv_.wait(lock);
  } else {
    auto duration = std::chrono::microseconds(timeout_time);
    auto cv_status = cv_.wait_for(lock, duration);
    }
    
      const Snapshot* snapshot = txn->GetSnapshot();
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
    namespace rocksdb {
    }
    
    
    {
    {  // Returns the approximate memory usage of different types in the input
  // list of DBs and Cache set.  For instance, in the output map
  // usage_by_type, usage_by_type[kMemTableTotal] will store the memory
  // usage of all the mem-tables from all the input rocksdb instances.
  //
  // Note that for memory usage inside Cache class, we will
  // only report the usage of the input 'cache_set' without
  // including those Cache usage inside the input list 'dbs'
  // of DBs.
  static Status GetApproximateMemoryUsageByType(
      const std::vector<DB*>& dbs,
      const std::unordered_set<const Cache*> cache_set,
      std::map<MemoryUtil::UsageType, uint64_t>* usage_by_type);
};
}  // namespace rocksdb
#endif  // !ROCKSDB_LITE
