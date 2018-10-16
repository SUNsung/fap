
        
        namespace atom {
    }
    
    AutoUpdater::AutoUpdater(v8::Isolate* isolate) {
  auto_updater::AutoUpdater::SetDelegate(this);
  Init(isolate);
}
    
    namespace api {
    }
    
    namespace atom {
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(PowerSaveBlocker);
};
    
    /*!
 * \brief Registry entry for predictor.
 */
struct PredictorReg
    : public dmlc::FunctionRegEntryBase<PredictorReg,
                                        std::function<Predictor*()>> {};
    
      size_t PeekRead(void* dptr, size_t size) {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer < size) {
      buffer_ = buffer_.substr(buffer_ptr_, buffer_.length());
      buffer_ptr_ = 0;
      buffer_.resize(size);
      size_t nadd = strm_->Read(dmlc::BeginPtr(buffer_) + nbuffer, size - nbuffer);
      buffer_.resize(nbuffer + nadd);
      std::memcpy(dptr, dmlc::BeginPtr(buffer_), buffer_.length());
      return buffer_.length();
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      return size;
    }
  }
    
    namespace xgboost {
    }
    
    bool Shaky3D::initWithDuration(float duration, const Size& gridSize, int range, bool shakeZ)
{
    if (Grid3DAction::initWithDuration(duration, gridSize))
    {
        _randrange = range;
        _shakeZ = shakeZ;
    }
    }
    
    bool AnimationCache::init()
{
    return true;
}
    
    
    {  // Synchronous transmission of CAN messages
  int32_t ret = canWrite(dev_handler_, send_frames_, frame_num, nullptr);
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'send message failed, error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  return ErrorCode::OK;
}
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }
    
      /*
   * @brief get the length of protocol data. The length is usually 8.
   * @return the length of protocol data.
   */
  virtual int32_t GetLength() const;
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}