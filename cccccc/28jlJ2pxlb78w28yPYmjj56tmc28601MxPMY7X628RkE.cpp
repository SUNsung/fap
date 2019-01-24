
        
        PosixMmapReadableFile::~PosixMmapReadableFile() {
  int ret = munmap(mmapped_region_, length_);
  if (ret != 0) {
    fprintf(stdout, 'failed to munmap %p length %' ROCKSDB_PRIszt ' \n',
            mmapped_region_, length_);
  }
  close(fd_);
}
    
    
    {#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_AIX)
  virtual size_t GetUniqueId(char* id, size_t max_size) const override;
#endif
  virtual void Hint(AccessPattern pattern) override;
  virtual Status InvalidateCache(size_t offset, size_t length) override;
  virtual bool use_direct_io() const override { return use_direct_io_; }
  virtual size_t GetRequiredBufferAlignment() const override {
    return logical_sector_size_;
  }
};
    
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
    
      ////////////////////////////////////////////////////////
  //
  // Simple OptimisticTransaction Example ('Read Committed')
  //
  ////////////////////////////////////////////////////////
    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
      // the thread pool id
  uint64_t thread_pool_id;
    
    
    {}  // namespace rocksdb

    
      enum CompactionPropertyType : int {
    COMPACTION_JOB_ID = 0,
    COMPACTION_INPUT_OUTPUT_LEVEL,
    COMPACTION_PROP_FLAGS,
    COMPACTION_TOTAL_INPUT_BYTES,
    COMPACTION_BYTES_READ,
    COMPACTION_BYTES_WRITTEN,
    NUM_COMPACTION_PROPERTIES
  };
    
    
    {  explicit BackupableDBOptions(
      const std::string& _backup_dir, Env* _backup_env = nullptr,
      bool _share_table_files = true, Logger* _info_log = nullptr,
      bool _sync = true, bool _destroy_old_data = false,
      bool _backup_log_files = true, uint64_t _backup_rate_limit = 0,
      uint64_t _restore_rate_limit = 0, int _max_background_operations = 1,
      uint64_t _callback_trigger_interval_size = 4 * 1024 * 1024,
      int _max_valid_backups_to_open = INT_MAX)
      : backup_dir(_backup_dir),
        backup_env(_backup_env),
        share_table_files(_share_table_files),
        info_log(_info_log),
        sync(_sync),
        destroy_old_data(_destroy_old_data),
        backup_log_files(_backup_log_files),
        backup_rate_limit(_backup_rate_limit),
        restore_rate_limit(_restore_rate_limit),
        share_files_with_checksum(false),
        max_background_operations(_max_background_operations),
        callback_trigger_interval_size(_callback_trigger_interval_size),
        max_valid_backups_to_open(_max_valid_backups_to_open) {
    assert(share_table_files || !share_files_with_checksum);
  }
};
    
    namespace rocksdb {
    }
    
        // serialize the JSON objects
    std::cout << j_object_t << '\n';
    std::cout << j_map << '\n';
    std::cout << j_umap << '\n';
    std::cout << j_mmap << '\n';
    std::cout << j_ummap << '\n\n';
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}