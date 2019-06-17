
        
        // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
      // When flush happens, it determines whether to trigger compaction. If
  // triggered_writes_stop is true, it will also set the retry flag of
  // compaction-task to true.
  void OnFlushCompleted(
      DB* db, const FlushJobInfo& info) override {
    CompactionTask* task = PickCompaction(db, info.cf_name);
    if (task != nullptr) {
      if (info.triggered_writes_stop) {
        task->retry_on_fail = true;
      }
      // Schedule compaction in a different thread.
      ScheduleCompaction(task);
    }
  }
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
    
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

    
      // Starts a new Transaction.
  //
  // Caller is responsible for deleting the returned transaction when no
  // longer needed.
  //
  // If old_txn is not null, BeginTransaction will reuse this Transaction
  // handle instead of allocating a new one.  This is an optimization to avoid
  // extra allocations when repeatedly creating transactions.
  virtual Transaction* BeginTransaction(
      const WriteOptions& write_options,
      const OptimisticTransactionOptions& txn_options =
          OptimisticTransactionOptions(),
      Transaction* old_txn = nullptr) = 0;
    
    
    {}  // namespace rocksdb
    
    public:
  ModelTest( QAbstractItemModel *model, QObject *parent = 0 );
    
     signals:
  void changePrompt(const QString &text, bool showPrompt);
  void addOutput(const QString &text, QString resultType);