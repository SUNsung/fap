
        
        
    {// TODO(nareshmodi): Move EagerCast and ReadVariableOp (which use the C API to
// execute TFE Ops) to a separate common library.
TFE_TensorHandle* EagerCast(TFE_Context* ctx, TFE_TensorHandle* handle,
                            TF_DataType src_type_enum,
                            TF_DataType dst_type_enum, TF_Status* out_status);
}
    
    // Add a _ to the end of s if necessary to avoid a Python keyword or built-in.
string AvoidPythonReserved(const string& s);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    REGISTER_OP('Invalid')
    .Attr('invalid attr: int32')  // invalid since the name has a space.
    .Doc(R'doc(
An op to test that invalid ops do not successfully generate invalid python code.
)doc');
    
    // Register the bfloat16 numpy type.
void RegisterNumpyBfloat16();
    
    // Creates a numpy array in 'ret' which either aliases the content of 't' or has
// a copy.
Status TensorToNdarray(const Tensor& t, PyObject** ret);
    
    Safe_TFE_TensorHandlePtr make_safe(TFE_TensorHandle* handle) {
  return Safe_TFE_TensorHandlePtr(handle);
}
    
      // Return the current record contents.  Only valid after the preceding call
  // to GetNext() returned true
  string record() const { return record_; }
  // Return the current offset in the file.
  uint64 offset() const { return offset_; }
    
    string SideString(Side s) {
  switch (s) {
    case Side::kLeft:
      return 'Left';
    case Side::kRight:
      return 'Right';
    default:
      LOG(FATAL) << 'Unknown side ' << static_cast<int32>(s);
  }
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #include <string>
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(Button);
};
    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_browser_content_tracing, Initialize)

    
    template <>
struct Converter<file_dialog::Filter> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     file_dialog::Filter* out) {
    mate::Dictionary dict;
    if (!ConvertFromV8(isolate, val, &dict))
      return false;
    if (!dict.Get('name', &(out->first)))
      return false;
    if (!dict.Get('extensions', &(out->second)))
      return false;
    return true;
  }
};
    
    template <>
struct Converter<download::DownloadItem::DownloadState> {
  static v8::Local<v8::Value> ToV8(
      v8::Isolate* isolate,
      download::DownloadItem::DownloadState state) {
    std::string download_state;
    switch (state) {
      case download::DownloadItem::IN_PROGRESS:
        download_state = 'progressing';
        break;
      case download::DownloadItem::COMPLETE:
        download_state = 'completed';
        break;
      case download::DownloadItem::CANCELLED:
        download_state = 'cancelled';
        break;
      case download::DownloadItem::INTERRUPTED:
        download_state = 'interrupted';
        break;
      default:
        break;
    }
    return ConvertToV8(isolate, download_state);
  }
};
    
    ```
    
    Given two equivalent values, this operator uses the indices along the last dim-
ension as a tiebreaker. That is, the element with the lower index will appear
first.
    )DOC')
    .Input(0, 'X', 'Tensor of shape [a_1, a_2, ..., a_n, r]')
    .Input(1, 'K', 'Tensor of shape [a_1, a_2, ..., a_n, 1]')
    .Output(
        0,
        'Flatten values',
        'Tensor of shape [ \\sum_i K[i, 1] ] containing'
        ' top K[..., 1] values from the input tensor')
    .Output(
        1,
        'Flatten indices',
        'Tensor of shape [ \\sum_i K[i, 1] ] containing the indices '
        'into the flatten input');
    
    template <typename T, class Context>
class FlexibleTopKOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
    }
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
    namespace {
class InsecureChannelCredentialsImpl final : public ChannelCredentials {
 public:
  std::shared_ptr<grpc::Channel> CreateChannel(
      const string& target, const grpc::ChannelArguments& args) override {
    grpc_channel_args channel_args;
    args.SetChannelArgs(&channel_args);
    return CreateChannelInternal(
        '',
        grpc_insecure_channel_create(target.c_str(), &channel_args, nullptr));
  }
    }
    }
    
    CompletionQueue::NextStatus CompletionQueue::AsyncNextInternal(
    void** tag, bool* ok, gpr_timespec deadline) {
  for (;;) {
    auto ev = grpc_completion_queue_next(cq_, deadline, nullptr);
    switch (ev.type) {
      case GRPC_QUEUE_TIMEOUT:
        return TIMEOUT;
      case GRPC_QUEUE_SHUTDOWN:
        return SHUTDOWN;
      case GRPC_OP_COMPLETE:
        auto cq_tag = static_cast<internal::CompletionQueueTag*>(ev.tag);
        *ok = ev.success != 0;
        *tag = cq_tag;
        if (cq_tag->FinalizeResult(tag, ok)) {
          return GOT_EVENT;
        }
        break;
    }
  }
}
    
    void CensusClientCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double latency_ms = absl::ToDoubleMilliseconds(absl::Now() - start_time_);
  ::opencensus::stats::Record(
      {{RpcClientSentBytesPerRpc(), static_cast<double>(request_size)},
       {RpcClientReceivedBytesPerRpc(), static_cast<double>(response_size)},
       {RpcClientRoundtripLatency(), latency_ms},
       {RpcClientServerLatency(),
        ToDoubleMilliseconds(absl::Nanoseconds(elapsed_time_))},
       {RpcClientSentMessagesPerRpc(), sent_message_count_},
       {RpcClientReceivedMessagesPerRpc(), recv_message_count_}},
      {{ClientMethodTagKey(), method_},
       {ClientStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}
    
    #include <grpc/status.h>
#include 'absl/memory/memory.h'
#include 'absl/strings/string_view.h'
#include 'absl/strings/strip.h'
#include 'opencensus/trace/span.h'
#include 'opencensus/trace/span_context.h'
#include 'opencensus/trace/trace_params.h'
#include 'src/core/lib/slice/slice_internal.h'
#include 'src/cpp/common/channel_filter.h'
#include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
      // Deserializes rpc server stats from the incoming 'buf' into *time.  Returns
  // number of bytes decoded. If the buffer is of insufficient size (it must be
  // at least kRpcServerStatsSize bytes) or the encoding version or field ID are
  // unrecognized, *time will be set to 0 and it will return
  // kEncodeDecodeFailure. Inlined for performance reasons.
  static size_t Decode(absl::string_view buf, uint64_t* time) {
    if (buf.size() < kRpcServerStatsSize) {
      *time = 0;
      return kEncodeDecodeFailure;
    }
    }
    
    #ifdef UNIX_ENABLED
    
    #include 'drivers/unix/socket_helpers.h'
    
    public:
	virtual Error listen(uint16_t p_port, const IP_Address &p_bind_address = IP_Address('*'));
	virtual bool is_connection_available() const;
	virtual Ref<StreamPeerTCP> take_connection();
    
    Error MutexWindows::try_lock() {
    }
    
    	void _set_sock_blocking(bool p_blocking);
    
    	static TCP_Server *_create();
    
    #include 'modules/common/log.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    #include <memory>
#include <unordered_map>
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
      virtual void SetUp() {
    send_time_ = 0;
    recv_time_ = 0;
    send_succ_count_ = 0;
    recv_succ_count_ = 0;
    send_err_count_ = 0;
    recv_err_count_ = 0;
    param_.set_brand(CANCardParameter::ESD_CAN);
    param_.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    send_client_ = std::unique_ptr<FakeCanClient>(new FakeCanClient());
    send_client_->Init(param_);
    send_client_->Start();
    recv_client_ = std::unique_ptr<FakeCanClient>(new FakeCanClient());
    recv_client_->Init(param_);
    recv_client_->Start();
  }
    
      // init config and state
  // 1. set receive message_id filter, ie white list
  struct can_filter filter[2048];
  for (int i = 0; i < 2048; ++i) {
    filter[i].can_id = 0x000 + i;
    filter[i].can_mask = CAN_SFF_MASK;
  }
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/message_manager.h'
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    std::string Byte::byte_to_binary(const uint8_t value) {
  return std::bitset<8 * sizeof(uint8_t)>(value).to_string();
}
    
      /**
   * @brief Transform an integer with the size of one byte to its hexadecimal
   *        represented by a string.
   * @param value The target integer to transform.
   * @return Hexadecimal representing the target integer.
   */
  static std::string byte_to_hex(const uint8_t value);
    
    DEFINE_string(adapter_config_filename, 'modules/canbus/conf/adapter.conf',
              'The adapter config file');