
        
        REGISTER_OP('ReservedAttr')
    .Attr('range: int')
    .SetShapeFn(shape_inference::UnknownShape);
    
    // We define the PY_ARRAY_UNIQUE_SYMBOL in this .cc file and provide an
// ImportNumpy function to populate it.
#define TF_IMPORT_NUMPY
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    ChannelCredentials::~ChannelCredentials() {}
    
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
    
    #endif  // GRPC_INTERNAL_CPP_CLIENT_SECURE_CREDENTIALS_H

    
    
    {}  // namespace grpc

    
    #endif  // GRPC_INTERNAL_CPP_COMMON_SECURE_AUTH_CONTEXT_H

    
    #include 'src/cpp/ext/filters/census/context.h'
    
    MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    const ViewDescriptor& ServerCompletedRpcsCumulative() {
  const static ViewDescriptor descriptor =
      ViewDescriptor()
          .set_name('grpc.io/server/completed_rpcs/cumulative')
          .set_measure(kRpcServerServerLatencyMeasureName)
          .set_aggregation(Aggregation::Count())
          .add_column(ServerMethodTagKey())
          .add_column(ServerStatusTagKey());
  return descriptor;
}
    
    #include 'core/math/matrix3.h'
#include 'core/math/transform.h'
#include 'core/math/vector3.h'
#include 'core/typedefs.h'
    
    BENCHMARK_RELATIVE(format_short_string_safe, iters) {
  BenchmarkSuspender suspender;
  auto const& shortString = getShortString();
  while (iters--) {
    fbstring out;
    suspender.dismissing([&] { format(&out, '{}', shortString); });
  }
}
    
    
    {  FLAGS_minloglevel = prev;
}
    
    namespace {
std::exception const* get_std_exception_(std::exception_ptr eptr) noexcept {
  try {
    std::rethrow_exception(eptr);
  } catch (const std::exception& ex) {
    return &ex;
  } catch (...) {
    return nullptr;
  }
}
} // namespace
    
    
    {    return FuncAndKeepAlive(std::move(f), this);
  }
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
    std::shared_ptr<DHTNode> DHTRoutingTable::getNode(const unsigned char* nodeID,
                                                  const std::string& ipaddr,
                                                  uint16_t port) const
{
  std::shared_ptr<DHTBucket> bucket = getBucketFor(nodeID);
  return bucket->getNode(nodeID, ipaddr, port);
}
    
    void DHTRoutingTableDeserializer::deserialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Loading DHT routing table from %s.', filename.c_str()));
  BufferedFile fp(filename.c_str(), BufferedFile::READ);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to load DHT routing table from %s', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
    void DHTRoutingTableSerializer::serialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Saving DHT routing table to %s.', filename.c_str()));
  std::string filenameTemp = filename;
  filenameTemp += '__temp';
  BufferedFile fp(filenameTemp.c_str(), BufferedFile::WRITE);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
    class DHTNode;
    
    
    {} // namespace aria2
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2

    
    #include 'common.h'
    
    std::shared_ptr<DHTTask> DHTTaskFactoryImpl::createReplaceNodeTask(
    const std::shared_ptr<DHTBucket>& bucket,
    const std::shared_ptr<DHTNode>& newNode)
{
  auto task = std::make_shared<DHTReplaceNodeTask>(bucket, newNode);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
      DHTTaskExecutor periodicTaskQueue2_;
    
      ~DHTTokenTracker();