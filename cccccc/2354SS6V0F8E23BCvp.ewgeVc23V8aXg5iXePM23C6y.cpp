
        
          image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
      bool handles_setup_;
  cudnnHandle_t* handle_;
  cudaStream_t*  stream_;
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                         int32_t *const frame_num) = 0;
    
      std::string can_name('can' + std::to_string(port_));
  std::strncpy(ifr.ifr_name, can_name.c_str(), IFNAMSIZ);
  if (ioctl(dev_handler_, SIOCGIFINDEX, &ifr) < 0) {
    AERROR << 'ioctl error';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    using apollo::common::ErrorCode;
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);
    
    /**
 * @class ProtocolData
 *
 * @brief This is the base class of protocol data.
 */
template <typename SensorType>
class ProtocolData {
 public:
  /**
   * @brief static function, used to calculate the checksum of input array.
   * @param input the pointer to the start position of input array
   * @param length the length of the input array
   * @return the value of checksum
   */
  static std::uint8_t CalculateCheckSum(const uint8_t *input,
                                        const uint32_t length);
  /**
   * @brief construct protocol data.
   */
  ProtocolData() = default;
    }
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    
    { private:
  uint8_t *value_;
};