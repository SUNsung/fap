
        
          void SetFlushReason(FlushReason flush_reason) {
    flush_reason_ = flush_reason;
  }
  FlushReason GetFlushReason() const { return flush_reason_; }
  // thread-safe
  const EnvOptions* soptions() const;
  const ImmutableCFOptions* ioptions() const { return &ioptions_; }
  // REQUIRES: DB mutex held
  // This returns the MutableCFOptions used by current SuperVersion
  // You should use this API to reference MutableCFOptions most of the time.
  const MutableCFOptions* GetCurrentMutableCFOptions() const {
    return &(super_version_->mutable_cf_options);
  }
  // REQUIRES: DB mutex held
  // This returns the latest MutableCFOptions, which may be not in effect yet.
  const MutableCFOptions* GetLatestMutableCFOptions() const {
    return &mutable_cf_options_;
  }
    
      int64_t num_record_drop_hidden = 0;
  int64_t num_record_drop_obsolete = 0;
  int64_t num_record_drop_range_del = 0;
  int64_t num_range_del_drop_obsolete = 0;
  // Deletions obsoleted before bottom level due to file gap optimization.
  int64_t num_optimized_del_drop_obsolete = 0;
  uint64_t total_filter_time = 0;
    
        std::string scratch;
    scratch.reserve(fileSize);
    Slice data;
    status = seqFile->Read(fileSize, &data, (char*)scratch.data());
    ASSERT_OK(status);
    
      // Implementations of the DB interface
  using DB::Get;
  virtual Status Get(const ReadOptions& options,
                     ColumnFamilyHandle* column_family, const Slice& key,
                     PinnableSlice* value) override;
    
    std::unique_ptr<WriteControllerToken> WriteController::GetStopToken() {
  ++total_stopped_;
  return std::unique_ptr<WriteControllerToken>(new StopWriteToken(this));
}
    
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
    
      // open DB with two column families
  std::vector<ColumnFamilyDescriptor> column_families;
  // have to open default column family
  column_families.push_back(ColumnFamilyDescriptor(
      kDefaultColumnFamilyName, ColumnFamilyOptions()));
  // open the new one, too
  column_families.push_back(ColumnFamilyDescriptor(
      'new_cf', ColumnFamilyOptions()));
  std::vector<ColumnFamilyHandle*> handles;
  s = DB::Open(DBOptions(), kDBPath, column_families, &handles, &db);
  assert(s.ok());
    
      // Write a key OUTSIDE of transaction
  db->Put(write_options, 'abc', 'xyz');
    
    int main() {
  DB* db;
  Options options;
  // Optimize RocksDB. This is the easiest way to get RocksDB to perform well
  options.IncreaseParallelism();
  options.OptimizeLevelStyleCompaction();
  // create the DB if it's not already present
  options.create_if_missing = true;
    }
    
      void moveBucketHead(const std::shared_ptr<DHTNode>& node);
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                                   int numRetry)
{
  auto task = std::make_shared<DHTPingTask>(remoteNode, numRetry);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
    public:
  DHTTaskFactoryImpl();
    
    
    {} // namespace aria2
    
    void DHTTokenUpdateCommand::preProcess()
{
  if (getDownloadEngine()->getRequestGroupMan()->downloadFinished() ||
      getDownloadEngine()->isHaltRequested()) {
    enableExit();
  }
}
    
    const std::string DHTUnknownMessage::UNKNOWN('unknown');
    
      template <typename OutputIterator>
  void findAll(OutputIterator out, const std::string& hostname,
               uint16_t port) const
  {
    auto target = std::make_shared<CacheEntry>(hostname, port);
    auto i = entries_.find(target);
    if (i != entries_.end()) {
      (*i)->getAllGoodAddrs(out);
    }
  }