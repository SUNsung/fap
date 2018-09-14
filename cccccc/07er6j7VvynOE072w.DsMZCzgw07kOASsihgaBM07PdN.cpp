
        
          AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    
    
    {  std::string tmp1, tmp2;
  ASSERT_OK(db_->Put(WriteOptions(), Key(1000, &tmp1), Value(1000, &tmp2)));
  std::string v;
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
  dbi->TEST_CompactMemTable();
  ASSERT_OK(db_->Get(ReadOptions(), Key(1000, &tmp1), &v));
  ASSERT_EQ(Value(1000, &tmp2).ToString(), v);
}
    
    std::string DescriptorFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  char buf[100];
  snprintf(buf, sizeof(buf), '/MANIFEST-%06llu',
           static_cast<unsigned long long>(number));
  return dbname + buf;
}
    
    
    {}  // namespace leveldb
    
        if (!status.ok()) {
      env_->DeleteFile(tmp);
    } else {
      // Discard older manifests
      for (size_t i = 0; i < manifests_.size(); i++) {
        ArchiveFile(dbname_ + '/' + manifests_[i]);
      }
    }
    
      virtual Status DisableFileDeletions() override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  virtual Status EnableFileDeletions(bool /*force*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  virtual Status GetLiveFiles(std::vector<std::string>&,
                              uint64_t* /*manifest_file_size*/,
                              bool /*flush_memtable*/ = true) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Flush;
  virtual Status Flush(const FlushOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DB::IngestExternalFile;
  virtual Status IngestExternalFile(
      ColumnFamilyHandle* /*column_family*/,
      const std::vector<std::string>& /*external_files*/,
      const IngestExternalFileOptions& /*ingestion_options*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
    
    struct CompactionIterationStats {
  // Compaction statistics
    }
    
      // this will produce empty file (delete compaction filter)
  ASSERT_OK(db_->CompactRange(CompactRangeOptions(), nullptr, nullptr));
  ASSERT_EQ(0U, CountLiveFiles());
    
      auto defaultEnv = Env::Default();
  int hits = 0;
  for (auto it = fileNames.begin() ; it != fileNames.end(); ++it) {
    if ((*it == '..') || (*it == '.')) {
      continue;
    }
    auto filePath = dbname_ + '/' + *it;
    unique_ptr<SequentialFile> seqFile;
    auto envOptions = EnvOptions(CurrentOptions());
    status = defaultEnv->NewSequentialFile(filePath, &seqFile, envOptions);
    ASSERT_OK(status);
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
    
          // Truncate to available space if necessary
      if (p >= limit) {
        if (iter == 0) {
          continue;       // Try again with larger buffer
        } else {
          p = limit - 1;
        }
      }
    
    namespace aria2 {
    }
    
      std::vector<std::shared_ptr<DHTNode>> nodes;
  // nodes
  const int compactlen = bittorrent::getCompactLength(family_);
  for (size_t i = 0; i < numNodes; ++i) {
    // 1byte compact peer info length
    uint8_t peerInfoLen;
    READ_CHECK(fp, &peerInfoLen, sizeof(peerInfoLen));
    if (peerInfoLen != compactlen) {
      // skip this entry
      readBytes(fp, buf, buf.size(), 7 + 48);
      continue;
    }
    // 7bytes reserved
    readBytes(fp, buf, buf.size(), 7);
    // compactlen bytes compact peer info
    readBytes(fp, buf, buf.size(), compactlen);
    if (memcmp(zero, buf, compactlen) == 0) {
      // skip this entry
      readBytes(fp, buf, buf.size(), 48 - compactlen);
      continue;
    }
    std::pair<std::string, uint16_t> peer =
        bittorrent::unpackcompact(buf, family_);
    if (peer.first.empty()) {
      // skip this entry
      readBytes(fp, buf, buf.size(), 48 - compactlen);
      continue;
    }
    // 24-compactlen bytes reserved
    readBytes(fp, buf, buf.size(), 24 - compactlen);
    // node ID
    readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
    }
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
      virtual void addPeriodicTask2(const std::shared_ptr<DHTTask>& task) = 0;
    
    
    {  virtual void
  addImmediateTask(const std::shared_ptr<DHTTask>& task) CXX11_OVERRIDE;
};
    
      // TODO handle exception thrown by this function.
  std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port) const;
    
    #include <memory>
    
    DHTUnknownMessage::DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                                     const unsigned char* data, size_t length,
                                     const std::string& ipaddr, uint16_t port)
    : DHTMessage(localNode, std::shared_ptr<DHTNode>()),
      length_(length),
      ipaddr_(ipaddr),
      port_(port)
{
  if (length_ == 0) {
    data_ = nullptr;
  }
  else {
    data_ = new unsigned char[length];
    memcpy(data_, data, length);
  }
}
    
    void DNSCache::markBad(const std::string& hostname, const std::string& ipaddr,
                       uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.find(target);
  if (i != entries_.end()) {
    (*i)->markBad(ipaddr);
  }
}