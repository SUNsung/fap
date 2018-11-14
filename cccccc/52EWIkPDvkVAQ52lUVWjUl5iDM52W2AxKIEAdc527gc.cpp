
        
        public:
    explicit TrafficGraphWidget(QWidget *parent = 0);
    void setClientModel(ClientModel *model);
    int getGraphRangeMins() const;
    
    
    {    Lock& lock;
    Lock templock;
};
    
        BOOST_CHECK_EQUAL(obj['nyuknyuknyuk'].getValStr(), '');
    
    namespace bech32
{
    }
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
    class NwAppQuitFunction : public UIThreadExtensionFunction {
 public:
  NwAppQuitFunction();
    }
    
     protected:
  ~NwClipboardSetListSyncFunction() override;
    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
      bool IsPeerAuthenticated() const override;
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
      // Offset and value for currently supported version ID.
  static constexpr size_t kVersionIdOffset = 0;
  static constexpr size_t kVersionId = 0;
    
    const ViewDescriptor& ServerCompletedRpcsMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/server/completed_rpcs/minute')
          .set_measure(kRpcServerServerLatencyMeasureName)
          .set_aggregation(Aggregation::Count())
          .add_column(ServerMethodTagKey())
          .add_column(ServerStatusTagKey());
  return descriptor;
}
    
    void DynamicThreadPool::DynamicThread::ThreadFunc() {
  pool_->ThreadFunc();
  // Now that we have killed ourselves, we should reduce the thread count
  std::unique_lock<std::mutex> lock(pool_->mu_);
  pool_->nthreads_--;
  // Move ourselves to dead list
  pool_->dead_threads_.push_back(this);
    }
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
    Reader::Reader(SequentialFile* file, Reporter* reporter, bool checksum,
               uint64_t initial_offset)
    : file_(file),
      reporter_(reporter),
      checksum_(checksum),
      backing_store_(new char[kBlockSize]),
      buffer_(),
      eof_(false),
      last_record_offset_(0),
      end_of_buffer_offset_(0),
      initial_offset_(initial_offset),
      resyncing_(initial_offset > 0) {
}
    
    TEST(LogTest, ReadPastEnd) {
  CheckOffsetPastEndReturnsNoRecords(5);
}
    
      // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
    
    
    {}  // namespace leveldb
    
      uint64_t FileSize(const std::string& fname) {
    uint64_t result;
    ASSERT_OK(env_->GetFileSize(fname, &result)) << fname;
    return result;
  }
    
    namespace osquery {
    }
    
    /// Root key to retrieve Kafka topic configurations.
const std::string kKafkaTopicParserRootKey('kafka_topics');
    
    
    {  // Expect the decorators to be disabled by default.
  QueryLogItem item;
  getDecorations(item.decorations);
  EXPECT_EQ(item.decorations.size(), 0U);
}
    
    
    {  // This should work.
  ASSERT_TRUE(doc.HasMember('custom_fake'));
  EXPECT_TRUE(doc['custom_fake'].IsNumber());
  EXPECT_EQ(1U, doc['custom_fake'].GetUint());
  EXPECT_FALSE(Flag::getValue('custom_fake').empty());
}
    
    TEST_F(QueryTests, test_is_query_name_in_database) {
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('foobar', query);
  auto encoded_qd = getSerializedQueryDataJSON();
  auto status = setDatabaseValue(kQueries, 'foobar', encoded_qd.first);
  EXPECT_TRUE(status.ok());
  // Now test that the query name exists.
  EXPECT_TRUE(cf.isQueryNameInDatabase());
}
    
    
    {  bool testIsCached(size_t interval) {
    QueryContext ctx;
    ctx.useCache(true);
    return isCached(interval, ctx);
  }
};
    
    void DHTReplaceNodeTask::onTimeout(const std::shared_ptr<DHTNode>& node)
{
  ++numRetry_;
  if (numRetry_ >= MAX_RETRY) {
    A2_LOG_INFO(fmt('ReplaceNode: Ping failed %d times. Replace %s with %s.',
                    numRetry_, node->toString().c_str(),
                    newNode_->toString().c_str()));
    node->markBad();
    bucket_->addNode(newNode_);
    setFinished(true);
  }
  else {
    A2_LOG_INFO(fmt('ReplaceNode: Ping reply timeout from %s. Try once more.',
                    node->toString().c_str()));
    sendMessage();
  }
}
    
      virtual ~DHTResponseMessage();
    
      ~DHTRoutingTableSerializer();
    
        routingTable->setTaskQueue(taskQueue.get());
    routingTable->setTaskFactory(taskFactory.get());
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
    
    {  size_t getQueueSize() const { return queue_.size(); }
};
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
    public:
  DHTTokenTracker();