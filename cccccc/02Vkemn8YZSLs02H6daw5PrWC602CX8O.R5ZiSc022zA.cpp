
        
            TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    namespace leveldb {
    }
    
      // Make a bunch of uncompacted log files.
  uint64_t old_log = FirstLogFile();
  MakeLogFile(old_log + 1, 1000, 'hello', 'world');
  MakeLogFile(old_log + 2, 1001, 'hi', 'there');
  MakeLogFile(old_log + 3, 1002, 'foo', 'bar2');
    
    TableCache::~TableCache() { delete cache_; }
    
    class WriteBatchTest {};
    
      // Advanced functions: these are used to reduce the space requirements
  // for internal data structures like index blocks.
    
      // Create and return a log file for storing informational messages.
  virtual Status NewLogger(const std::string& fname, Logger** result) = 0;
    
    namespace leveldb {
    }
    
    TEST(Coding, Varint32Truncation) {
  uint32_t large_value = (1u << 31) + 100;
  std::string s;
  PutVarint32(&s, large_value);
  uint32_t result;
  for (size_t len = 0; len < s.size() - 1; len++) {
    ASSERT_TRUE(GetVarint32Ptr(s.data(), s.data() + len, &result) == nullptr);
  }
  ASSERT_TRUE(GetVarint32Ptr(s.data(), s.data() + s.size(), &result) !=
              nullptr);
  ASSERT_EQ(large_value, result);
}
    
    TEST_F(DBTestXactLogIterator, TransactionLogIteratorStallAtLastRecord) {
  do {
    Options options = OptionsForLogIterTest();
    DestroyAndReopen(options);
    Put('key1', DummyString(1024));
    auto iter = OpenTransactionLogIter(0);
    ASSERT_OK(iter->status());
    ASSERT_TRUE(iter->Valid());
    iter->Next();
    ASSERT_TRUE(!iter->Valid());
    ASSERT_OK(iter->status());
    Put('key2', DummyString(1024));
    iter->Next();
    ASSERT_OK(iter->status());
    ASSERT_TRUE(iter->Valid());
  } while (ChangeCompactOptions());
}
    
    
    {  return std::unique_ptr<CompactionFilter>(new BlobIndexCompactionFilter(
      context, static_cast<uint64_t>(current_time), statistics_));
}
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
    std::unique_ptr<WriteControllerToken> WriteController::GetDelayToken(
    uint64_t write_rate) {
  total_delayed_++;
  // Reset counters.
  last_refill_time_ = 0;
  bytes_left_ = 0;
  set_delayed_write_rate(write_rate);
  return std::unique_ptr<WriteControllerToken>(new DelayWriteToken(this));
}
    
    
    {  return 0;
}

    
      // Insert to page cache
  //
  // page_key   Identifier to identify a page uniquely across restarts
  // data       Page data
  // size       Size of the page
  virtual Status Insert(const Slice& key, const char* data,
                        const size_t size) = 0;
    
      const Snapshot* snapshot();
    
    /**
 * @brief Returns the current processes pid
 *
 * On Windows, returns the value of GetCurrentProcessId
 * and on posix platforms returns getpid()
 */
int platformGetPid();
    
      unsigned long size_out = 0;
  PROCESS_BASIC_INFORMATION proc_info;
  SecureZeroMemory(&proc_info, sizeof(PROCESS_BASIC_INFORMATION));
    
      ret = NetUserGetLocalGroups(nullptr,
                              stringToWstring(user).c_str(),
                              userGroupInfoLevel,
                              1,
                              reinterpret_cast<LPBYTE*>(&ginfo),
                              MAX_PREFERRED_LENGTH,
                              &numGroups,
                              &totalUserGroups);
  if (ret == ERROR_MORE_DATA) {
    LOG(WARNING) << 'User ' << user
                 << ' group membership exceeds buffer limits, processing '
                 << numGroups << ' our of ' << totalUserGroups << ' groups';
  } else if (ret != NERR_Success || ginfo == nullptr) {
    VLOG(1) << ' NetUserGetLocalGroups failed for user ' << user << ' with '
            << ret;
    return;
  }
    
    class InterfaceDetailsTest : public testing::Test {
  protected:
    void SetUp() override {
      setUpEnvironment();
    }
};
    
    
    {    // Set parser-rendered additional data.
    auto obj2 = data_.getObject();
    data_.addRef('key2', 'value2', obj2);
    data_.add('dictionary3', obj2, data_.doc());
    return Status::success();
  }
    
      virtual ExpectedSuccess<DatabaseError> open() = 0;
  virtual void close() = 0;
    
    
    {} // namespace osquery

    
    enum DatabaseSchemaVersion {
  kDatabaseSchemaV1 = 1,
  kDatabaseSchemaV2 = 2,
  kDatabaseSchemaV3 = 3,
  kDatabaseSchemaVersionCurrent = kDatabaseSchemaV3,
};