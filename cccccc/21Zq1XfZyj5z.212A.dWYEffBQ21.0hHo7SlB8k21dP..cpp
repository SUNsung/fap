
        
        bool ClusteredBitVector::equalsSlowCase(const ClusteredBitVector &lhs,
                                        const ClusteredBitVector &rhs) {
  assert(lhs.size() == rhs.size());
  assert(!lhs.empty() && !rhs.empty());
  assert(lhs.hasOutOfLineData() || rhs.hasOutOfLineData());
    }
    
    void CacheImpl::destroy() {
  cache_destroy(static_cast<cache_t*>(Impl));
}

    
      using SourceManagerRef = llvm::IntrusiveRefCntPtr<const clang::SourceManager>;
  auto iter = std::lower_bound(sourceManagersWithDiagnostics.begin(),
                               sourceManagersWithDiagnostics.end(),
                               &clangSrcMgr,
                               [](const SourceManagerRef &inArray,
                                  const clang::SourceManager *toInsert) {
    return std::less<const clang::SourceManager *>()(inArray.get(), toInsert);
  });
  if (iter == sourceManagersWithDiagnostics.end() ||
      iter->get() != &clangSrcMgr) {
    sourceManagersWithDiagnostics.insert(iter, &clangSrcMgr);
  }
    
      // Given a sequence number, return the sequence number of the
  // earliest snapshot that this sequence number is visible in.
  // The snapshots themselves are arranged in ascending order of
  // sequence numbers.
  // Employ a sequential search because the total number of
  // snapshots are typically small.
  inline SequenceNumber findEarliestVisibleSnapshot(
      SequenceNumber in, SequenceNumber* prev_snapshot);
    
    // Param variant of DBTestBase::ChangeCompactOptions
class DBTestCompactionFilterWithCompactParam
    : public DBTestCompactionFilter,
      public ::testing::WithParamInterface<DBTestBase::OptionConfig> {
 public:
  DBTestCompactionFilterWithCompactParam() : DBTestCompactionFilter() {
    option_config_ = GetParam();
    Destroy(last_options_);
    auto options = CurrentOptions();
    if (option_config_ == kDefault || option_config_ == kUniversalCompaction ||
        option_config_ == kUniversalCompactionMultiLevel) {
      options.create_if_missing = true;
    }
    if (option_config_ == kLevelSubcompactions ||
        option_config_ == kUniversalSubcompactions) {
      assert(options.max_subcompactions > 1);
    }
    TryReopen(options);
  }
};
    
      // these three metods are querying the state of the WriteController
  bool IsStopped() const;
  bool NeedsDelay() const { return total_delayed_.load() > 0; }
  bool NeedSpeedupCompaction() const {
    return IsStopped() || NeedsDelay() || total_compaction_pressure_ > 0;
  }
  // return how many microseconds the caller needs to sleep after the call
  // num_bytes: how many number of bytes to put into the DB.
  // Prerequisite: DB mutex held.
  uint64_t GetDelay(Env* env, uint64_t num_bytes);
  void set_delayed_write_rate(uint64_t write_rate) {
    // avoid divide 0
    if (write_rate == 0) {
      write_rate = 1u;
    } else if (write_rate > max_delayed_write_rate()) {
      write_rate = max_delayed_write_rate();
    }
    delayed_write_rate_ = write_rate;
  }