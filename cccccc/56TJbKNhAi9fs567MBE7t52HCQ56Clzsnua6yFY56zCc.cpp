
        
          // Fill database
  for (int i = 0; i < kCount; i++) {
    ASSERT_OK(db_->Put(WriteOptions(), Key(i), value));
  }
  ASSERT_OK(dbi->TEST_CompactMemTable());
    
      int num_initialized GUARDED_BY(mu);
  int num_done GUARDED_BY(mu);
  bool start GUARDED_BY(mu);
    
    Status DBImpl::DoCompactionWork(CompactionState* compact) {
  const uint64_t start_micros = env_->NowMicros();
  int64_t imm_micros = 0;  // Micros spent doing imm_ compactions
    }
    
    struct ParsedInternalKey {
  Slice user_key;
  SequenceNumber sequence;
  ValueType type;
    }
    
    
    {  // Write the header and the payload
  Status s = dest_->Append(Slice(buf, kHeaderSize));
  if (s.ok()) {
    s = dest_->Append(Slice(ptr, n));
    if (s.ok()) {
      s = dest_->Flush();
    }
  }
  block_offset_ += kHeaderSize + n;
  return s;
}
    
    
    {    uint64_t number;
    FileType type;
    for (size_t i = 0; i < filenames.size(); i++) {
      if (ParseFileName(filenames[i], &number, &type)) {
        if (type == kDescriptorFile) {
          manifests_.push_back(filenames[i]);
        } else {
          if (number + 1 > next_file_number_) {
            next_file_number_ = number + 1;
          }
          if (type == kLogFile) {
            logs_.push_back(number);
          } else if (type == kTableFile) {
            table_numbers_.push_back(number);
          } else {
            // Ignore other files
          }
        }
      }
    }
    return status;
  }
    
    template<typename Key, class Comparator>
inline void SkipList<Key,Comparator>::Iterator::Next() {
  assert(Valid());
  node_ = node_->Next(0);
}
    
        /** Returns a new copy of the array reversed. User is responsible for releasing this copy.
     *
     * @js NA
     * @return A new copy of the array reversed.
     */
    PointArray* reverse() const;
    
    
    {    // Overrides
    virtual PageTurn3D* clone() const override;
    virtual void update(float time) override;
};
    
        /**
     * Use k to loop. Because _tilesCount is unsigned int,
     * and i is used later for int.
     */
    for (unsigned int k = 0; k < _tilesCount; ++k)
    {
        _tilesOrder[k] = k;
    }
    
        /**
    @brief Hide the tile at specified position.
    @param pos The position index of the tile should be hide.
    */
    void turnOffTile(const Vec2& pos);
    
    #include '2d/CCNode.h'
#include 'base/CCProtocols.h'
#include 'base/ccTypes.h'
#include 'renderer/CCQuadCommand.h'
    
    TEST(CanClientFactoryTest, CreateCanClient) {
  auto *can_factory = CanClientFactory::instance();
  EXPECT_TRUE(can_factory != nullptr);
    }
    
      using apollo::drivers::canbus::CANCardParameter;
  using apollo::drivers::canbus::CanClient;
  using apollo::drivers::canbus::CanClientFactory;
  using apollo::drivers::canbus::TestCanParam;
  using apollo::drivers::canbus::CanAgent;
  using apollo::common::ErrorCode;
  CANCardParameter can_client_conf_a;
  std::shared_ptr<TestCanParam> param_ptr_a(new TestCanParam());
  std::shared_ptr<TestCanParam> param_ptr_b(new TestCanParam());
    
      if (!is_started_) {
    AERROR << 'Esd can client has not been initiated! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  for (size_t i = 0; i < frames.size() && i < MAX_CAN_SEND_FRAME_LEN; ++i) {
    send_frames_[i].id = frames[i].id;
    send_frames_[i].len = frames[i].len;
    std::memcpy(send_frames_[i].data, frames[i].data, frames[i].len);
  }
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
    bool HermesCanClient::Init(const CANCardParameter &parameter) {
  if (!parameter.has_channel_id()) {
    AERROR << 'Init CAN failed: parameter does not have channel id. The '
              'parameter is '
           << parameter.DebugString();
    return false;
  } else {
    _card_port = parameter.channel_id();
    return true;
  }
}
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
    
    {  receiver.Init(&can_client, &pm, false);
  EXPECT_EQ(receiver.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(receiver.IsRunning());
  receiver.Stop();
  EXPECT_FALSE(receiver.IsRunning());
}
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
    // System gflags
DECLARE_string(node_name);
DECLARE_string(canbus_driver_name);