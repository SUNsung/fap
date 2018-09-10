
        
        private:
    MacDockIconHandler();
    
        const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    private:
    PlatformStyle(const QString &name, bool imagesOnButtons, bool colorizeIcons, bool useExtraSpacing);
    
    namespace Ui {
    class SignVerifyMessageDialog;
}
    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
    
    {    secp256k1_sha256_initialize(&hash->inner);
    for (n = 0; n < 64; n++) {
        rkey[n] ^= 0x5c ^ 0x36;
    }
    secp256k1_sha256_write(&hash->inner, rkey, 64);
    memset(rkey, 0, 64);
}
    
    BOOST_FIXTURE_TEST_SUITE(bech32_tests, BasicTestingSetup)
    
    inline void printfln(const char* fmt)
{
    format(std::cout, fmt);
    std::cout << '\n';
}
    
    double UniValue::get_real() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not a number as expected');
    double retval;
    if (!ParseDouble(getValStr(), &retval))
        throw std::runtime_error('JSON double out of range');
    return retval;
}
    
      void IncInitialized() {
    num_initialized_++;
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
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      // Use the returned alignment value to allocate
  // aligned buffer for Direct I/O
  virtual size_t GetRequiredBufferAlignment() const override { 
    return file_->GetRequiredBufferAlignment(); 
  }
    
    /**
 * Get the size of valid data in the file. This will not match the
 * size that is returned from the filesystem because we use mmap
 * to extend file by map_size every time.
 */
uint64_t PosixMmapFile::GetFileSize() {
  size_t used = dst_ - base_;
  return file_offset_ + used;
}