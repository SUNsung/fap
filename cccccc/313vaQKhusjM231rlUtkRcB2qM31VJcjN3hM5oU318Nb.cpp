
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    
    {    Lock& lock;
    Lock templock;
};
    
      auto* message1_on_arena =
      Arena::CreateMessage<protobuf_unittest::TestAllTypes>(&arena);
  TestUtil::SetAllFields(message1_on_arena);
  const auto* nested = &message1_on_arena->optional_nested_message();
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    using google::protobuf::util::Proto3DataStripper;
    
    #define WRITE_CHECK(fp, ptr, count)                                            \
  if (fp.write((ptr), (count)) != (count)) {                                   \
    throw DL_ABORT_EX(                                                         \
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));     \
  }
    
      std::shared_ptr<DHTNode> localNode_;
    
        peerAnnounceStorage->setTaskQueue(taskQueue.get());
    peerAnnounceStorage->setTaskFactory(taskFactory.get());
    
    namespace {
const size_t NUM_CONCURRENT_TASK = 15;
} // namespace
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    DNSCache::CacheEntry::~CacheEntry() = default;
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
      void set_max_delayed_write_rate(uint64_t write_rate) {
    // avoid divide 0
    if (write_rate == 0) {
      write_rate = 1u;
    }
    max_delayed_write_rate_ = write_rate;
    // update delayed_write_rate_ as well
    delayed_write_rate_ = write_rate;
  }
    
      // Write a key OUTSIDE of this transaction.
  // Does not affect txn since this is an unrelated key.  If we wrote key 'abc'
  // here, the transaction would fail to commit.
  s = db->Put(write_options, 'xyz', 'zzz');
    
    std::string kDBPath = '/tmp/rocksdb_options_file_example';
    
    #include 'rocksdb/db.h'
#include 'rocksdb/status.h'
    
    
    {
    {
    {  lua_State* lua_state_;
};
}  // namespace lua
}  // namespace rocksdb
#endif  // LUA

    
    // Returns the current memory usage of the specified DB instances.
class MemoryUtil {
 public:
  enum UsageType : int {
    // Memory usage of all the mem-tables.
    kMemTableTotal = 0,
    // Memory usage of those un-flushed mem-tables.
    kMemTableUnFlushed = 1,
    // Memory usage of all the table readers.
    kTableReadersTotal = 2,
    // Memory usage by Cache.
    kCacheTotal = 3,
    kNumUsageTypes = 4
  };
    }
    
    /*
 * Class:     org_rocksdb_BackupableDBOptions
 * Method:    disposeInternal
 * Signature: (J)V
 */
void Java_org_rocksdb_BackupableDBOptions_disposeInternal(JNIEnv* /*env*/,
                                                          jobject /*jopt*/,
                                                          jlong jhandle) {
  auto* bopt = reinterpret_cast<rocksdb::BackupableDBOptions*>(jhandle);
  assert(bopt != nullptr);
  delete bopt;
}
