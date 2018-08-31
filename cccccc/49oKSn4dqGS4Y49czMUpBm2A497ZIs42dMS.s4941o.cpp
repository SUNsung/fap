
        
        bool UvTaskRunner::PostNonNestableDelayedTask(const base::Location& from_here,
                                              base::OnceClosure task,
                                              base::TimeDelta delay) {
  return PostDelayedTask(from_here, std::move(task), delay);
}
    
      web_contents_.Reset(isolate, web_contents.ToV8());
  api_web_contents_ = web_contents.get();
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    const std::vector<GURL>& DownloadItem::GetURLChain() const {
  return download_item_->GetUrlChain();
}
    
    
    {
    {    return dict.GetHandle();
  }
};
    
      std::shared_ptr<grpc::Channel> CreateChannel(
      const string& target, const grpc::ChannelArguments& args) override {
    grpc_channel_args channel_args;
    args.SetChannelArgs(&channel_args);
    return CreateChannelInternal(
        '', grpc_cronet_secure_channel_create(engine_, target.c_str(),
                                              &channel_args, nullptr));
  }
    
    #include <grpc/grpc.h>
#include <grpc/support/log.h>
#include <grpcpp/channel.h>
#include <grpcpp/support/channel_arguments.h>
#include <grpcpp/support/config.h>
#include 'src/cpp/client/create_channel_internal.h'
    
    #include 'src/cpp/server/thread_pool_interface.h'
    
    AuthPropertyIterator SecureAuthContext::begin() const {
  if (ctx_) {
    grpc_auth_property_iterator iter =
        grpc_auth_context_property_iterator(ctx_);
    const grpc_auth_property* property =
        grpc_auth_property_iterator_next(&iter);
    return AuthPropertyIterator(property, &iter);
  } else {
    return end();
  }
}
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H */

    
    #include 'absl/strings/str_cat.h'
#include 'absl/strings/string_view.h'
#include 'opencensus/stats/stats.h'
#include 'src/core/lib/surface/call.h'
#include 'src/cpp/ext/filters/census/grpc_plugin.h'
#include 'src/cpp/ext/filters/census/measures.h'
    
    absl::string_view StatusCodeToString(grpc_status_code code) {
  switch (code) {
    case GRPC_STATUS_OK:
      return 'OK';
    case GRPC_STATUS_CANCELLED:
      return 'CANCELLED';
    case GRPC_STATUS_UNKNOWN:
      return 'UNKNOWN';
    case GRPC_STATUS_INVALID_ARGUMENT:
      return 'INVALID_ARGUMENT';
    case GRPC_STATUS_DEADLINE_EXCEEDED:
      return 'DEADLINE_EXCEEDED';
    case GRPC_STATUS_NOT_FOUND:
      return 'NOT_FOUND';
    case GRPC_STATUS_ALREADY_EXISTS:
      return 'ALREADY_EXISTS';
    case GRPC_STATUS_PERMISSION_DENIED:
      return 'PERMISSION_DENIED';
    case GRPC_STATUS_UNAUTHENTICATED:
      return 'UNAUTHENTICATED';
    case GRPC_STATUS_RESOURCE_EXHAUSTED:
      return 'RESOURCE_EXHAUSTED';
    case GRPC_STATUS_FAILED_PRECONDITION:
      return 'FAILED_PRECONDITION';
    case GRPC_STATUS_ABORTED:
      return 'ABORTED';
    case GRPC_STATUS_OUT_OF_RANGE:
      return 'OUT_OF_RANGE';
    case GRPC_STATUS_UNIMPLEMENTED:
      return 'UNIMPLEMENTED';
    case GRPC_STATUS_INTERNAL:
      return 'INTERNAL';
    case GRPC_STATUS_UNAVAILABLE:
      return 'UNAVAILABLE';
    case GRPC_STATUS_DATA_LOSS:
      return 'DATA_LOSS';
    default:
      // gRPC wants users of this enum to include a default branch so that
      // adding values is not a breaking change.
      return 'UNKNOWN_STATUS';
  }
}
    
      ::opencensus::trace::SpanContext ToSpanContext() const {
    return ::opencensus::trace::SpanContext(
        ::opencensus::trace::TraceId(trace_id),
        ::opencensus::trace::SpanId(span_id),
        ::opencensus::trace::TraceOptions(trace_options));
  }
    
    
    { private:
  static const std::string kLoggerKey;
};
    
    #include <iostream>
    
      const auto& parser = c.getParser('options')->getData();
  ASSERT_TRUE(parser.doc().HasMember('options'));
  EXPECT_TRUE(JSON::valueToBool(parser.doc()['options']['enable_monitor']));
    
    #include <gtest/gtest.h>
    
    
    {  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  EXPECT_TRUE(fpack.checkVersion());
}
    
    TEST_F(TablesTests, test_caching) {
  TestTablePlugin test;
  // By default the interval and step is 0, so a step of 5 will not be cached.
  EXPECT_FALSE(test.testIsCached(5));
    }
    
      /// Mutex and lock around extensions access.
  Mutex mutex_;
    
    class ExampleConfigPlugin : public ConfigPlugin {
 public:
  Status setUp() {
    LOG(WARNING) << 'ExampleConfigPlugin setting up';
    return Status(0, 'OK');
  }
    }
    
    #include 'DHTAbstractMessage.h'
#include 'A2STR.h'
#include 'ValueBase.h'
    
    namespace aria2 {
    }
    
        factory->setRoutingTable(routingTable.get());
    factory->setConnection(connection.get());
    factory->setMessageDispatcher(dispatcher.get());
    factory->setPeerAnnounceStorage(peerAnnounceStorage.get());
    factory->setTokenTracker(tokenTracker.get());
    factory->setLocalNode(localNode);
    factory->setBtRegistry(e->getBtRegistry().get());
    
    namespace aria2 {
    }
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) CXX11_OVERRIDE;
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
      virtual void process() CXX11_OVERRIDE;
    
    DHTUnknownMessage::DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                                     const unsigned char* data, size_t length,
                                     const std::string& ipaddr, uint16_t port)
    : DHTMessage(localNode, std::shared_ptr<DHTNode>()),
      length_(length),
      ipaddr_(ipaddr),
      port_(port)
{
  if (length_ == 0) {
    data_ = nullptr;
  }
  else {
    data_ = new unsigned char[length];
    memcpy(data_, data, length);
  }
}