
        
          inline int offset(const vector<int>& indices) const {
    CHECK_LE(indices.size(), num_axes());
    int offset = 0;
    for (int i = 0; i < num_axes(); ++i) {
      offset *= shape(i);
      if (indices.size() > i) {
        CHECK_GE(indices[i], 0);
        CHECK_LT(indices[i], shape(i));
        offset += indices[i];
      }
    }
    return offset;
  }
  /**
   * @brief Copy from a source Blob.
   *
   * @param source the Blob to copy from
   * @param copy_diff if false, copy the data; if true, copy the diff
   * @param reshape if false, require this Blob to be pre-shaped to the shape
   *        of other (and die otherwise); if true, Reshape this Blob to other's
   *        shape if necessary
   */
  void CopyFrom(const Blob<Dtype>& source, bool copy_diff = false,
      bool reshape = false);
    
    #define INSTANTIATE_LAYER_GPU_BACKWARD(classname) \
  template void classname<float>::Backward_gpu( \
      const std::vector<Blob<float>*>& top, \
      const std::vector<bool>& propagate_down, \
      const std::vector<Blob<float>*>& bottom); \
  template void classname<double>::Backward_gpu( \
      const std::vector<Blob<double>*>& top, \
      const std::vector<bool>& propagate_down, \
      const std::vector<Blob<double>*>& bottom)
    
      /** Will not return until the internal thread has exited. */
  void StopInternalThread();
    
    // Forward and backward wrappers. You should implement the cpu and
// gpu specific implementations instead, and should not change these
// functions.
template <typename Dtype>
inline Dtype Layer<Dtype>::Forward(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top) {
  Dtype loss = 0;
  Reshape(bottom, top);
  switch (Caffe::mode()) {
  case Caffe::CPU:
    Forward_cpu(bottom, top);
    for (int top_id = 0; top_id < top.size(); ++top_id) {
      if (!this->loss(top_id)) { continue; }
      const int count = top[top_id]->count();
      const Dtype* data = top[top_id]->cpu_data();
      const Dtype* loss_weights = top[top_id]->cpu_diff();
      loss += caffe_cpu_dot(count, data, loss_weights);
    }
    break;
  case Caffe::GPU:
    Forward_gpu(bottom, top);
#ifndef CPU_ONLY
    for (int top_id = 0; top_id < top.size(); ++top_id) {
      if (!this->loss(top_id)) { continue; }
      const int count = top[top_id]->count();
      const Dtype* data = top[top_id]->gpu_data();
      const Dtype* loss_weights = top[top_id]->gpu_diff();
      Dtype blob_loss = 0;
      caffe_gpu_dot(count, data, loss_weights, &blob_loss);
      loss += blob_loss;
    }
#endif
    break;
  default:
    LOG(FATAL) << 'Unknown caffe mode.';
  }
  return loss;
}
    
      int num_kernels_im2col_;
  int num_kernels_col2im_;
  int conv_out_channels_;
  int conv_in_channels_;
  int conv_out_spatial_dim_;
  int kernel_dim_;
  int col_offset_;
  int output_offset_;
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {    assertx(data == comma || data == semi);
    // eat parameters, and figure out if we have ';base64'
    while (semi && (data == semi)) {
      data++;
      meta_len--;
      char* equals = (char*)memchr(data, '=', meta_len);
      semi = (char*)memchr(data, ';', meta_len);
      if (!equals || (semi && semi < data)) {
        // no equals, so either 'base64' or its bad
        if (meta_len != sizeof('base64') - 1 ||
            memcmp(data, 'base64', sizeof('base64')-1)) {
          raise_warning('rfc2396: invalid parameter');
          return nullptr;
        }
        // it's 'base64', we're done
        base64 = true;
        meta_len -= sizeof('base64') - 1;
        data += sizeof('base64') - 1;
        break;
      }
      // there's a parameter
      if (semi) {
        meta_len -= semi - data + 1;
        data = semi;
      } /* else, we're done with meta */
    }
  }
  data = comma + 1;
  data_len -= 1;
  String decoded;
    
    
    {  /**
   * Execute a debugger action.
   */
  virtual String debuggerVerb(const std::string& /*verb*/,
                              const std::vector<std::string>& /*args*/) {
    return String();
  }
};
    
    #ifndef incl_HPHP_PERF_EVENT_H_
#define incl_HPHP_PERF_EVENT_H_
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
      // Generate content to update/add to the config.
  std::string content;
  auto s = readFile(kTestDataPath + 'test_parse_items.conf', content);
  EXPECT_TRUE(s.ok());
  std::map<std::string, std::string> config;
  config['awesome'] = content;
    
      EXPECT_TRUE(setEnvVar('GTEST_OSQUERY', 'true'));
    
    
    {  // Use the Query retrieval API to check the now 'previous' result.
  QueryDataSet previous_qd;
  auto cf = Query('foobar', query);
  status = cf.getPreviousQueryResults(previous_qd);
  EXPECT_TRUE(status.ok());
}
    
    /**
 * @brief Subscription details for INotifyEventPublisher events.
 *
 * This context is specific to INotifyEventPublisher. It allows the
 * subscribing EventSubscriber to set a path (file or directory) and a
 * limited action mask.
 * Events are passed to the EventSubscriber if they match the context
 * path (or anything within a directory if the path is a directory) and if the
 * event action is part of the mask. If the mask is 0 then all actions are
 * passed to the EventSubscriber.
 */
struct INotifySubscriptionContext : public SubscriptionContext {
  /// Subscription the following filesystem path.
  std::string path;
    }
    
    #if USE_ESD_CAN
  CANCardParameter can_card_parameter;
  can_card_parameter.set_brand(CANCardParameter::ESD_CAN);
  can_card_parameter.set_type(CANCardParameter::PCI_CARD);
  can_card_parameter.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    
      static const struct ERR2STR err2str[] = {
      {NTCAN_SUCCESS, 'NTCAN_SUCCESS'},
      {NTCAN_RX_TIMEOUT, 'NTCAN_RX_TIMEOUT'},
      {NTCAN_TX_TIMEOUT, 'NTCAN_TX_TIMEOUT'},
      {NTCAN_TX_ERROR, 'NTCAN_TX_ERROR'},
      {NTCAN_CONTR_OFF_BUS, 'NTCAN_CONTR_OFF_BUS'},
      {NTCAN_CONTR_BUSY, 'NTCAN_CONTR_BUSY'},
      {NTCAN_CONTR_WARN, 'NTCAN_CONTR_WARN'},
      {NTCAN_NO_ID_ENABLED, 'NTCAN_NO_ID_ENABLED'},
      {NTCAN_ID_ALREADY_ENABLED, 'NTCAN_ID_ALREADY_ENABLED'},
      {NTCAN_ID_NOT_ENABLED, 'NTCAN_ID_NOT_ENABLED'},
      {NTCAN_INVALID_FIRMWARE, 'NTCAN_INVALID_FIRMWARE'},
      {NTCAN_MESSAGE_LOST, 'NTCAN_MESSAGE_LOST'},
      {NTCAN_INVALID_PARAMETER, 'NTCAN_INVALID_PARAMETER'},
      {NTCAN_INVALID_HANDLE, 'NTCAN_INVALID_HANDLE'},
      {NTCAN_NET_NOT_FOUND, 'NTCAN_NET_NOT_FOUND'},
#ifdef NTCAN_IO_INCOMPLETE
      {NTCAN_IO_INCOMPLETE, 'NTCAN_IO_INCOMPLETE'},
#endif
#ifdef NTCAN_IO_PENDING
      {NTCAN_IO_PENDING, 'NTCAN_IO_PENDING'},
#endif
#ifdef NTCAN_INVALID_HARDWARE
      {NTCAN_INVALID_HARDWARE, 'NTCAN_INVALID_HARDWARE'},
#endif
#ifdef NTCAN_PENDING_WRITE
      {NTCAN_PENDING_WRITE, 'NTCAN_PENDING_WRITE'},
#endif
#ifdef NTCAN_PENDING_READ
      {NTCAN_PENDING_READ, 'NTCAN_PENDING_READ'},
#endif
#ifdef NTCAN_INVALID_DRIVER
      {NTCAN_INVALID_DRIVER, 'NTCAN_INVALID_DRIVER'},
#endif
#ifdef NTCAN_OPERATION_ABORTED
      {NTCAN_OPERATION_ABORTED, 'NTCAN_OPERATION_ABORTED'},
#endif
#ifdef NTCAN_WRONG_DEVICE_STATE
      {NTCAN_WRONG_DEVICE_STATE, 'NTCAN_WRONG_DEVICE_STATE'},
#endif
      {NTCAN_INSUFFICIENT_RESOURCES, 'NTCAN_INSUFFICIENT_RESOURCES'},
#ifdef NTCAN_HANDLE_FORCED_CLOSE
      {NTCAN_HANDLE_FORCED_CLOSE, 'NTCAN_HANDLE_FORCED_CLOSE'},
#endif
#ifdef NTCAN_NOT_IMPLEMENTED
      {NTCAN_NOT_IMPLEMENTED, 'NTCAN_NOT_IMPLEMENTED'},
#endif
#ifdef NTCAN_NOT_SUPPORTED
      {NTCAN_NOT_SUPPORTED, 'NTCAN_NOT_SUPPORTED'},
#endif
#ifdef NTCAN_SOCK_CONN_TIMEOUT
      {NTCAN_SOCK_CONN_TIMEOUT, 'NTCAN_SOCK_CONN_TIMEOUT'},
#endif
#ifdef NTCAN_SOCK_CMD_TIMEOUT
      {NTCAN_SOCK_CMD_TIMEOUT, 'NTCAN_SOCK_CMD_TIMEOUT'},
#endif
#ifdef NTCAN_SOCK_HOST_NOT_FOUND
      {NTCAN_SOCK_HOST_NOT_FOUND, 'NTCAN_SOCK_HOST_NOT_FOUND'},
#endif
#ifdef NTCAN_CONTR_ERR_PASSIVE
      {NTCAN_CONTR_ERR_PASSIVE, 'NTCAN_CONTR_ERR_PASSIVE'},
#endif
#ifdef NTCAN_ERROR_NO_BAUDRATE
      {NTCAN_ERROR_NO_BAUDRATE, 'NTCAN_ERROR_NO_BAUDRATE'},
#endif
#ifdef NTCAN_ERROR_LOM
      {NTCAN_ERROR_LOM, 'NTCAN_ERROR_LOM'},
#endif
      {(NTCAN_RESULT)0xffffffff, 'NTCAN_UNKNOWN'} /* stop-mark */
  };
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
    
    {
    {
    {
    {
    {  std::vector<CanFrame> frames;
  int32_t num = 0;
  CanFrame frame;
  // frame.id = 0x60;
  // frame.len = 8;
  // frame.data[0] = 0;
  // frames.push_back(frame);
  // num = 1;
  EXPECT_EQ(hermes_can.Start(), ErrorCode::OK);
  EXPECT_EQ(hermes_can.Receive(&frames, &num), ErrorCode::OK);
}
*/
}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    std::string Byte::byte_to_hex(const uint8_t value) {
  uint8_t high = value >> 4;
  uint8_t low = value & 0x0F;
  std::string result = '';
  result += HEX[high];
  result += HEX[low];
  return result;
}
    
    #ifndef MODULES_DRIVERS_CANBUS_COMMON_BYTE_H_
#define MODULES_DRIVERS_CANBUS_COMMON_BYTE_H_