
        
        std::shared_ptr<Channel> CreateInsecureChannelFromFd(const grpc::string& target,
                                                     int fd) {
  internal::GrpcLibrary init_lib;
  init_lib.init();
  return CreateChannelInternal(
      '', grpc_insecure_channel_create_from_fd(target.c_str(), fd, nullptr));
}
    
    namespace grpc {
    }
    
    #include <grpcpp/support/channel_arguments.h>
    
    
    {}  // namespace grpc
    
    constexpr size_t TraceContextEncoding::kGrpcTraceContextSize;
constexpr size_t TraceContextEncoding::kEncodeDecodeFailure;
constexpr size_t TraceContextEncoding::kVersionIdSize;
constexpr size_t TraceContextEncoding::kFieldIdSize;
constexpr size_t TraceContextEncoding::kVersionIdOffset;
constexpr size_t TraceContextEncoding::kVersionId;
    
    
    {    uint8_t version = buf[kVersionIdOffset];
    uint32_t fieldID = buf[kServerElapsedTimeOffset];
    if (version != kVersionId || fieldID != kServerElapsedTimeField) {
      *time = 0;
      return kEncodeDecodeFailure;
    }
    *time = absl::little_endian::Load64(
        &buf[kServerElapsedTimeOffset + kFieldIdSize]);
    return kRpcServerStatsSize;
  }
    
    void CensusServerCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double elapsed_time_ms = absl::ToDoubleMilliseconds(elapsed_time_);
  grpc_auth_context_release(auth_context_);
  ::opencensus::stats::Record(
      {{RpcServerSentBytesPerRpc(), static_cast<double>(response_size)},
       {RpcServerReceivedBytesPerRpc(), static_cast<double>(request_size)},
       {RpcServerServerLatency(), elapsed_time_ms},
       {RpcServerSentMessagesPerRpc(), sent_message_count_},
       {RpcServerReceivedMessagesPerRpc(), recv_message_count_}},
      {{ServerMethodTagKey(), method_},
       {ServerStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}