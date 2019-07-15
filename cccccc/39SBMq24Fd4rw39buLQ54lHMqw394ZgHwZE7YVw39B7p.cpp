
        
        TEST(MemEnvTest, OverwriteOpenFile) {
  const char kWrite1Data[] = 'Write #1 data';
  const size_t kFileDataLen = sizeof(kWrite1Data) - 1;
  const std::string kTestFileName = test::TmpDir() + '/leveldb-TestFile.dat';
    }
    
    
    {}  // namespace leveldb
    
    
    {  // If true, the write will be flushed from the operating system
  // buffer cache (by calling WritableFile::Sync()) before the write
  // is considered complete.  If this flag is true, writes will be
  // slower.
  //
  // If this flag is false, and the machine crashes, some recent
  // writes may be lost.  Note that if it is just the process that
  // crashes (i.e., the machine does not reboot), no writes will be
  // lost even if sync==false.
  //
  // In other words, a DB write with sync==false has similar
  // crash semantics as the 'write()' system call.  A DB write
  // with sync==true has similar crash semantics to a 'write()'
  // system call followed by 'fsync()'.
  bool sync = false;
};
    
    class Block {
 public:
  // Initialize the block with the specified contents.
  explicit Block(const BlockContents& contents);
    }
    
      // Allocation state
  char* alloc_ptr_;
  size_t alloc_bytes_remaining_;
    
    // Different bits-per-byte
    
    class EnvWindowsTest {
 public:
  static void SetFileLimits(int mmap_limit) {
    EnvWindowsTestHelper::SetReadOnlyMMapLimit(mmap_limit);
  }
    }
    
      void Clear();
  void Add(double value);
  void Merge(const Histogram& other);
    
    Status WriteBatchBase::SingleDelete(ColumnFamilyHandle* column_family,
                                    const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return SingleDelete(column_family, key_slice);
}
    
    struct DumpOptions {
  // Database that will be dumped
  std::string db_path;
  // File location that will contain dump output
  std::string dump_location;
  // Don't include db information header in the dump
  bool anonymous = false;
};
    
    
    {// Factor method to create a new persistent cache
Status NewPersistentCache(Env* const env, const std::string& path,
                          const uint64_t size,
                          const std::shared_ptr<Logger>& log,
                          const bool optimized_for_nvm,
                          std::shared_ptr<PersistentCache>* cache);
}  // namespace rocksdb

    
      // Create a TransactionDBCondVar object.
  virtual std::shared_ptr<TransactionDBCondVar> AllocateCondVar() = 0;
    
    /*
 * Class:     org_rocksdb_BackupableDBOptions
 * Method:    maxBackgroundOperations
 * Signature: (J)I
 */
jint Java_org_rocksdb_BackupableDBOptions_maxBackgroundOperations(
    JNIEnv* /*env*/, jobject /*jobj*/, jlong jhandle) {
  auto* bopt = reinterpret_cast<rocksdb::BackupableDBOptions*>(jhandle);
  return static_cast<jint>(bopt->max_background_operations);
}