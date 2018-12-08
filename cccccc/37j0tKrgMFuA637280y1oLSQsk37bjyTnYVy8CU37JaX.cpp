
        
        #else  // !defined(__AVX__)
// Implementation for avx capable archs.
#include <immintrin.h>
#include <cstdint>
#include 'dotproductavx.h'
    
    
    {  PARA *para = it_->row()->row->para();
  *is_list_item = para->is_list_item;
  *is_crown = para->is_very_first_or_continuation;
  *first_line_indent = para->model->first_indent() -
      para->model->body_indent();
  *just = para->model->justification();
}
    
    
    {  // Do sanity checks and minor fixes on best_choice.
  if (word->best_choice->length() > word_length) {
    word->best_choice->make_bad();  // should never happen
    tprintf('recog_word: Discarded long string \'%s\''
            ' (%d characters vs %d blobs)\n',
            word->best_choice->unichar_string().string(),
            word->best_choice->length(), word_length);
    tprintf('Word is at:');
    word->word->bounding_box().print();
  }
  if (word->best_choice->length() < word_length) {
    UNICHAR_ID space_id = unicharset.unichar_to_id(' ');
    while (word->best_choice->length() < word_length) {
      word->best_choice->append_unichar_id(space_id, 1, 0.0,
                                           word->best_choice->certainty());
    }
  }
}
    
    
    {  name += UNLV_EXT;              //add extension
  if ((pdfp = fopen (name.string (), 'rb')) == nullptr) {
    return false;                //didn't read one
  } else {
    while (tfscanf(pdfp, '%d %d %d %d %*s', &x, &y, &width, &height) >= 4) {
                                 //make rect block
      block = new BLOCK (name.string (), TRUE, 0, 0,
                         (int16_t) x, (int16_t) (ysize - y - height),
                         (int16_t) (x + width), (int16_t) (ysize - y));
                                 //on end of list
      block_it.add_to_end (block);
    }
    fclose(pdfp);
  }
  return true;
}
    
      // This and other putatively are the same, so call the (permanent) callback
  // for each blob index where the bounding boxes match.
  // The callback is deleted on completion.
  void ProcessMatchedBlobs(const TWERD& other, TessCallback1<int>* cb) const;
    
    
    {  ASSERT_OK(Put('foo', 'v1'));
  ASSERT_EQ('v1', Get('foo'));
  Compact('a', 'z');
  const int num_files = CountFiles();
  env_->no_space_.Release_Store(env_);   // Force out-of-space errors
  for (int i = 0; i < 10; i++) {
    for (int level = 0; level < config::kNumLevels-1; level++) {
      dbfull()->TEST_CompactRange(level, nullptr, nullptr);
    }
  }
  env_->no_space_.Release_Store(nullptr);
  ASSERT_LT(CountFiles(), num_files + 3);
}
    
    #include 'db/log_reader.h'
    
    
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
    
    
    {
    {  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    namespace osquery {
    }
    
      Status update(const std::string& source, const ParserConfig& config) override;
    
    TEST_F(OptionsConfigParserPluginTests, test_get_option) {
  Config c;
  auto s = c.update(getTestConfigMap());
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    }
    
    
    {  expected = {'select pid from processes where name = 'foobar';'};
  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  EXPECT_EQ(fpack.getDiscoveryQueries(), expected);
}
    
    
    {  val = getEnvVar('GTEST_OSQUERY');
  EXPECT_FALSE(val);
  EXPECT_FALSE(val.is_initialized());
}
    
        // Add the 'current' results and output the differentials.
    DiffResults dr;
    counter = 128;
    auto s = cf.addNewResults(result.second, 0, counter, dr, true);
    EXPECT_TRUE(s.ok());
    EXPECT_EQ(counter, expected_counter++);
    
    /**
 * @brief The watchdog thread responsible for spawning/monitoring children.
 *
 * The WatcherRunner thread will spawn any autoloaded extensions or optional
 * osquery daemon worker processes. It will then poll for their performance
 * state and kill/respawn osquery child processes if they violate limits.
 */
class WatcherRunner : public InternalRunnable {
 public:
  /**
   * @brief Construct a watcher thread.
   *
   * @param argc The osquery process argc.
   * @param argv The osquery process argv.
   * @param use_worker True if the process should spawn and monitor a worker.
   */
  explicit WatcherRunner(int argc, char** argv, bool use_worker)
      : InternalRunnable('WatcherRunner'),
        argc_(argc),
        argv_(argv),
        use_worker_(use_worker) {
    (void)argc_;
  }
    }
    
    using StringMap = std::map<std::string, std::string>;
    
      QueryData generate(QueryContext& request) {
    QueryData results;
    }
    
    
    { protected:
  /// The CAN client is started.
  bool is_started_ = false;
};
    
      // 2. set baudrate to 500k
  ret = canSetBaudrate(dev_handler_, NTCAN_BAUD_500);
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'set baudrate error code: ' << ret << ', ' << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
      /**
   * @brief Get the error string.
   * @param status The status to get the error string.
   */
  std::string GetErrorString(const int32_t status) override;
    
    #include 'gtest/gtest.h'
    
    using apollo::common::ErrorCode;
    
    /**
 * @namespace apollo::drivers::canbus::can
 * @brief apollo::drivers::canbus::can
 */
namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    /**
 * @class HermesCanClient
 * @brief The class which defines a BCAN client which inherits CanClient.
 */
    
    #include 'gtest/gtest.h'
    
    template <typename SensorType>
void MessageManager<SensorType>::Parse(const uint32_t message_id,
                                       const uint8_t *data, int32_t length) {
  ProtocolData<SensorType> *protocol_data =
      GetMutableProtocolDataById(message_id);
  if (protocol_data == nullptr) {
    return;
  }
  {
    std::lock_guard<std::mutex> lock(sensor_data_mutex_);
    protocol_data->Parse(data, length, &sensor_data_);
  }
  received_ids_.insert(message_id);
  // check if need to check period
  const auto it = check_ids_.find(message_id);
  if (it != check_ids_.end()) {
    const int64_t time = apollo::common::time::AsInt64<micros>(Clock::Now());
    it->second.real_period = time - it->second.last_time;
    // if period 1.5 large than base period, inc error_count
    const double period_multiplier = 1.5;
    if (it->second.real_period > (it->second.period * period_multiplier)) {
      it->second.error_count += 1;
    } else {
      it->second.error_count = 0;
    }
    it->second.last_time = time;
  }
}
    
      /**
   * @brief destruct protocol data.
   */
  virtual ~ProtocolData() = default;
    
    void Byte::set_value(const uint8_t value, const int32_t start_pos,
                     const int32_t length) {
  if (start_pos > BYTE_LENGTH - 1 || start_pos < 0 || length < 1) {
    return;
  }
  int32_t end_pos = std::min(start_pos + length - 1, BYTE_LENGTH - 1);
  int32_t real_len = end_pos + 1 - start_pos;
  uint8_t current_value_low = 0x00;
  if (start_pos > 0) {
    current_value_low = *value_ & RANG_MASK_1_L[start_pos - 1];
  }
  uint8_t current_value_high = *value_ & RANG_MASK_0_L[end_pos];
  uint8_t middle_value = value & RANG_MASK_1_L[real_len - 1];
  middle_value = middle_value << start_pos;
  *value_ = current_value_high + middle_value + current_value_low;
}
    
    // System gflags
DECLARE_string(node_name);
DECLARE_string(canbus_driver_name);