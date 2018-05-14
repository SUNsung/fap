
        
        using GPUDevice = Eigen::GpuDevice;
    
    
    {}  // namespace tensorflow

    
    Status SqrtGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForUnaryCwise(g, {
      {{'y'}, 'Sqrt', {'x'}},
      {{'y_inv'}, 'Reciprocal', {'y'}, {}, {'dy'}},
      FDH::Const('const', 0.5f),
      {{'half'}, 'Cast', {'const'}, {{'SrcT', DT_FLOAT}, {'DstT', '$T'}}},
      {{'a'}, 'Mul', {'half', 'y_inv'}},  // .5 * 1/y
      {{'dx'}, 'Mul', {'dy', 'a'}},  // dy * (.5 * 1/y)
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Sqrt', SqrtGrad);
    
    struct Options;
struct FileMetaData;
    
    // Maximum level to which a new compacted memtable is pushed if it
// does not create overlap.  We try to push to level 2 to avoid the
// relatively expensive level 0=>1 compactions and to avoid some
// expensive manifest file operations.  We do not push all the way to
// the largest level since that can generate a lot of wasted disk
// space if the same key space is being repeatedly overwritten.
static const int kMaxMemCompactLevel = 2;
    
    
    {  // When limit user key is prefix of start user key
  ASSERT_EQ(IKey('foobar', 100, kTypeValue),
            Shorten(IKey('foobar', 100, kTypeValue),
                    IKey('foo', 200, kTypeValue)));
}
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string LogFileName(const std::string& dbname, uint64_t number);
    
    #include 'db/dbformat.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
      if (msg == NULL && !input.empty()) {
    msg = 'invalid tag';
  }
    
    
    {}  // namespace leveldb
    
    TEST(WriteBatchTest, Append) {
  WriteBatch b1, b2;
  WriteBatchInternal::SetSequence(&b1, 200);
  WriteBatchInternal::SetSequence(&b2, 300);
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('',
            PrintContents(&b1));
  b2.Put('a', 'va');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200',
            PrintContents(&b1));
  b2.Clear();
  b2.Put('b', 'vb');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200'
            'Put(b, vb)@201',
            PrintContents(&b1));
  b2.Delete('foo');
  WriteBatchInternal::Append(&b1, &b2);
  ASSERT_EQ('Put(a, va)@200'
            'Put(b, vb)@202'
            'Put(b, vb)@201'
            'Delete(foo)@203',
            PrintContents(&b1));
}
    
      void PrintEnvironment() {
    fprintf(stderr, 'SQLite:     version %s\n', SQLITE_VERSION);
    }
    
    // Dump the contents of the file named by fname in text format to
// *dst.  Makes a sequence of dst->Append() calls; each call is passed
// the newline-terminated text corresponding to a single item found
// in the file.
//
// Returns a non-OK result if fname does not name a leveldb storage
// file, or if the file cannot be read.
Status DumpFile(Env* env, const std::string& fname, WritableFile* dst);
    
      /**
   * @brief A convenience method to check if the return code is 0
   *
   * @code{.cpp}
   *   auto s = doSomething();
   *   if (s.ok()) {
   *     LOG(INFO) << 'doing work';
   *   } else {
   *     LOG(ERROR) << s.toString();
   *   }
   * @endcode
   *
   * @return a boolean which is true if the status code is 0, false otherwise.
   */
  bool ok() const { return getCode() == 0; }
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    
    {  return Status(0, 'OK');
}
    
    
    {  // And of the column has constraints:
  EXPECT_TRUE(cm['path'].notExistsOrMatches('some'));
  EXPECT_FALSE(cm['path'].notExistsOrMatches('not_some'));
  EXPECT_TRUE(cm['path'].exists());
  EXPECT_TRUE(cm['path'].existsAndMatches('some'));
}
    
    TEST_F(WatcherTests, test_watcherrunner_loop_failure) {
  MockWithWatchWatcherRunner runner(0, nullptr, true);
  runner.runOnce();
    }
    
    
    {/// Copies src string into the dst string buffer with error checks
Status platformStrncpy(char* dst, size_t nelms, const char* src, size_t count);
}

    
    Status EphemeralDatabasePlugin::removeRange(const std::string& domain,
                                            const std::string& low,
                                            const std::string& high) {
  std::vector<std::string> keys;
  for (const auto& it : db_[domain]) {
    if (it.first >= low && it.first <= high) {
      keys.push_back(it.first);
    }
  }
    }
    
    #endif // D_A2_STR_H

    
      std::unique_ptr<AuthConfig> getUserDefinedAuthConfig() const;
    
      virtual ssize_t readData(unsigned char* data, size_t len,
                           int64_t offset) CXX11_OVERRIDE;
    
    AbstractHttpServerResponseCommand::~AbstractHttpServerResponseCommand()
{
  if (readCheck_) {
    e_->deleteSocketForReadCheck(socket_, this);
  }
  if (writeCheck_) {
    e_->deleteSocketForWriteCheck(socket_, this);
  }
}
    
    #include 'Command.h'
    
    bool AbstractOptionHandler::getInitialOption() const
{
  return flags_ & FLAG_INITIAL_OPTION;
}
    
    class AbstractProxyResponseCommand : public AbstractCommand {
private:
  std::shared_ptr<HttpConnection> httpConnection_;
    }
    
    bool AnnounceList::currentTierAcceptsStoppedEvent() const
{
  if (currentTrackerInitialized_) {
    return FindStoppedAllowedTier()(*currentTier_);
  }
    }
    
    void AnnounceTier::nextEvent()
{
  switch (event) {
  case STARTED:
    event = DOWNLOADING;
    break;
  case STARTED_AFTER_COMPLETION:
    event = SEEDING;
    break;
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
      AnnounceTier(std::deque<std::string> urls);
    
    namespace aria2 {
    }
    
    #include 'LogFactory.h'
#include 'BufferedFile.h'
#include 'Logger.h'
#include 'MessageDigest.h'
#include 'fmt.h'
#include 'message.h'
#include 'util.h'