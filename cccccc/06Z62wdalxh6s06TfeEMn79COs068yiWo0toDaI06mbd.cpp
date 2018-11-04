
        
        #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H */

    
    MeasureDouble RpcServerReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerReceivedBytesPerRpcMeasureName,
      'Total bytes received across all messages per RPC', kUnitBytes);
  return measure;
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    constexpr size_t TraceContextEncoding::kGrpcTraceContextSize;
constexpr size_t TraceContextEncoding::kEncodeDecodeFailure;
constexpr size_t TraceContextEncoding::kVersionIdSize;
constexpr size_t TraceContextEncoding::kFieldIdSize;
constexpr size_t TraceContextEncoding::kVersionIdOffset;
constexpr size_t TraceContextEncoding::kVersionId;
    
    const ViewDescriptor& ClientCompletedRpcsMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/client/completed_rpcs/minute')
          .set_measure(kRpcClientRoundtripLatencyMeasureName)
          .set_aggregation(Aggregation::Count())
          .add_column(ClientMethodTagKey())
          .add_column(ClientStatusTagKey());
  return descriptor;
}
    
    using grpc::Status;
using grpc::StatusCode;
using grpc::reflection::v1alpha::ErrorResponse;
using grpc::reflection::v1alpha::ExtensionNumberResponse;
using grpc::reflection::v1alpha::ExtensionRequest;
using grpc::reflection::v1alpha::FileDescriptorResponse;
using grpc::reflection::v1alpha::ListServiceResponse;
using grpc::reflection::v1alpha::ServerReflectionRequest;
using grpc::reflection::v1alpha::ServerReflectionResponse;
using grpc::reflection::v1alpha::ServiceResponse;
    
    void DynamicThreadPool::DynamicThread::ThreadFunc() {
  pool_->ThreadFunc();
  // Now that we have killed ourselves, we should reduce the thread count
  std::unique_lock<std::mutex> lock(pool_->mu_);
  pool_->nthreads_--;
  // Move ourselves to dead list
  pool_->dead_threads_.push_back(this);
    }
    
    #include <grpcpp/support/config.h>