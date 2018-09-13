public:
    explicit QValueComboBox(QWidget *parent = 0);
    
    #endif // BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H

    
    #endif

    
    int64_t UniValue::get_int64() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not an integer as expected');
    int64_t retval;
    if (!ParseInt64(getValStr(), &retval))
        throw std::runtime_error('JSON integer out of range');
    return retval;
}
    
    //---- Define constructor and implicit cast operators to convert back<>forth between your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    // State shared by all concurrent executions of the same benchmark.
class SharedState {
 public:
  explicit SharedState(CacheBench* cache_bench)
      : cv_(&mu_),
        num_threads_(FLAGS_threads),
        num_initialized_(0),
        start_(false),
        num_done_(0),
        cache_bench_(cache_bench) {
  }
    }
    
      // If true --> this ColumnFamily is currently present in
  // DBImpl::compaction_queue_
  bool queued_for_compaction_;
    
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
    
      auto* env = options.env;
  uint64_t number = 0;
  FileType type = kInfoLogFile;
    
    Status WriteBatchBase::Put(const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
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
    
      virtual Status DeleteDir(const std::string& dirname) override {
    auto status_and_enc_path = EncodePath(dirname);
    if (!status_and_enc_path.first.ok()) {
      return status_and_enc_path.first;
    }
    return EnvWrapper::DeleteDir(status_and_enc_path.second);
  }