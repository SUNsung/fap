
        
        #ifndef GRPC_INTERNAL_CPP_CLIENT_CREATE_CHANNEL_INTERNAL_H
#define GRPC_INTERNAL_CPP_CLIENT_CREATE_CHANNEL_INTERNAL_H
    
    namespace grpc {
    }
    
    #include <grpcpp/security/credentials.h>
    
    
    {}  // namespace grpc

    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
    void ChannelArguments::SetSslTargetNameOverride(const grpc::string& name) {
  SetString(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG, name);
}
    
    // Server
MeasureDouble RpcServerSentBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerSentBytesPerRpcMeasureName,
      'Total bytes sent across all messages per RPC', kUnitBytes);
  return measure;
}
    
    
    {
    {    grpc_slice_unref_internal(sml.tracing_slice);
    grpc_slice_unref_internal(sml.census_proto);
    grpc_slice_unref_internal(sml.path);
    grpc_census_call_set_context(
        calld->gc_, reinterpret_cast<census_context*>(&calld->context_));
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_initial_metadata_,
                   GRPC_ERROR_REF(error));
}
    
    /**
 * @file
 * @brief Defines the CanFrame struct and CanClient interface.
 */
    
      /**
   * @brief Create a pointer to a specified brand of CAN client. The brand is
   *        set in the parameter.
   * @param parameter The parameter to create the CAN client.
   * @return A pointer to the created CAN client.
   */
  std::unique_ptr<CanClient> CreateCANClient(const CANCardParameter &parameter);
    
    DEFINE_bool(only_one_send, false, 'only send test.');
DEFINE_string(can_client_conf_file_a,
              'modules/canbus/conf/can_client_conf_a.pb.txt',
              'can client conf for client a');
DEFINE_string(can_client_conf_file_b,
              'modules/canbus/conf/can_client_conf_b.pb.txt',
              'can client conf for client b');
DEFINE_int64(agent_mutual_send_frames, 1000, 'Every agent send frame num');
    
    
    {  return std::string((const char *)(str_buf));
}
    
    
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
    
    // buf size must be 8 bytes, every time, we receive only one frame
ErrorCode SocketCanClientRaw::Receive(std::vector<CanFrame> *const frames,
                                      int32_t *const frame_num) {
  if (!is_started_) {
    AERROR << 'Nvidia can client is not init! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
  }
    }
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    template <typename SensorType>
ErrorCode MessageManager<SensorType>::GetSensorData(
    SensorType *const sensor_data) {
  if (sensor_data == nullptr) {
    AERROR << 'Failed to get sensor_data due to nullptr.';
    return ErrorCode::CANBUS_ERROR;
  }
  std::lock_guard<std::mutex> lock(sensor_data_mutex_);
  sensor_data->CopyFrom(sensor_data_);
  return ErrorCode::OK;
}
    
    TEST(ByteTest, GetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  EXPECT_EQ(0x05, value.get_byte(1, 3));
  EXPECT_EQ(0x01, value.get_byte(1, 1));
  EXPECT_EQ(0x00, value.get_byte(8, 1));
  EXPECT_EQ(0x00, value.get_byte(-1, 1));
  EXPECT_EQ(0x1A, value.get_byte(0, 10));
}