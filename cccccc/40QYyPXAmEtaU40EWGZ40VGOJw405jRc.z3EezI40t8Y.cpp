
        
          // Fill database
  for (int i = 0; i < kCount; i++) {
    ASSERT_OK(db_->Put(WriteOptions(), Key(i), value));
  }
  ASSERT_OK(dbi->TEST_CompactMemTable());
    
        // Finish and check for file errors
    if (s.ok()) {
      s = file->Sync();
    }
    if (s.ok()) {
      s = file->Close();
    }
    delete file;
    file = NULL;
    
    
    {}  // namespace leveldb
    
    // Maximum level to which a new compacted memtable is pushed if it
// does not create overlap.  We try to push to level 2 to avoid the
// relatively expensive level 0=>1 compactions and to avoid some
// expensive manifest file operations.  We do not push all the way to
// the largest level since that can generate a lot of wasted disk
// space if the same key space is being repeatedly overwritten.
static const int kMaxMemCompactLevel = 2;
    
    namespace {
    }
    
    // Return the name of the descriptor file for the db named by
// 'dbname' and the specified incarnation number.  The result will be
// prefixed with 'dbname'.
extern std::string DescriptorFileName(const std::string& dbname,
                                      uint64_t number);
    
    
    {  // Errors
  static const char* errors[] = {
    '',
    'foo',
    'foo-dx-100.log',
    '.log',
    '',
    'manifest',
    'CURREN',
    'CURRENTX',
    'MANIFES',
    'MANIFEST',
    'MANIFEST-',
    'XMANIFEST-3',
    'MANIFEST-3x',
    'LOC',
    'LOCKx',
    'LO',
    'LOGx',
    '18446744073709551616.log',
    '184467440737095516150.log',
    '100',
    '100.',
    '100.lop'
  };
  for (int i = 0; i < sizeof(errors) / sizeof(errors[0]); i++) {
    std::string f = errors[i];
    ASSERT_TRUE(!ParseFileName(f, &number, &type)) << f;
  }
}
    
      Status FindFiles() {
    std::vector<std::string> filenames;
    Status status = env_->GetChildren(dbname_, &filenames);
    if (!status.ok()) {
      return status;
    }
    if (filenames.empty()) {
      return Status::IOError(dbname_, 'repair found no files');
    }
    }
    
      Cache::Handle* handle = NULL;
  Status s = FindTable(file_number, file_size, &handle);
  if (!s.ok()) {
    return NewErrorIterator(s);
  }
    
    
    {}  // namespace leveldb
    
      /// See `add`, but services are not limited to a thread poll size.
  static Status addService(InternalRunnableRef service);
    
      /**
   * @brief Implement a 'step' of an optional run loop.
   *
   * @return A SUCCESS status will immediately call `run` again. A FAILED status
   * will exit the run loop and the thread.
   */
  virtual Status run() {
    return Status(1, 'No run loop required');
  }
    
    
    {/**
 * @brief Getter for determining Admin status
 *
 * @return A bool indicating if the current process is running as admin
 */
bool isUserAdmin();
} // namespace osquery

    
      IOMemoryDescriptor *md;
  IOMemoryMap *mm;
  void *devfs;
  int major_number;
  int open_count;
    
    
    {    return Status(0);
  }
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
    class BaseLogger {
 public:
  BaseLogger() {
#if XGBOOST_LOG_WITH_TIME
    log_stream_ << '[' << dmlc::DateLogger().HumanDate() << '] ';
#endif
  }
  std::ostream& stream() { return log_stream_; }
    }
    
    XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(lz4hc)
.describe('Apply LZ4 binary data compression(high compression ratio) for ext memory.')
.set_body([]() {
    return new SparsePageLZ4Format<bst_uint>(true);
  });
    
    
    {
    {
    { private:
  /*! \brief input stream */
  dmlc::Stream *strm_;
  /*! \brief current buffer pointer */
  size_t buffer_ptr_;
  /*! \brief internal buffer */
  std::string buffer_;
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_IO_H_

    
      std::unique_ptr<AuthConfig> getUserDefinedAuthConfig() const;
    
      const std::shared_ptr<Peer>& getPeer() const { return peer_; }
    
      virtual void openExistingFile(int64_t totalLength = 0) CXX11_OVERRIDE;
    
    #include <memory>
    
    namespace aria2 {
    }
    
    
    {  virtual std::unique_ptr<Command> getNextCommand() = 0;
};
    
    
    {} // namespace aria2
    
    #include 'DiskWriterFactory.h'
#include 'a2functional.h'
    
    
    {private:
  Session* session_;
  DownloadEventCallback callback_;
  void* userData_;
};
    
      bool tryAsFingerprint(const std::string& fingerprint);