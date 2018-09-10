
        
        #include <grpcpp/support/config.h>
    
    
    {}  // namespace grpc

    
    class SecureChannelCredentials final : public ChannelCredentials {
 public:
  explicit SecureChannelCredentials(grpc_channel_credentials* c_creds);
  ~SecureChannelCredentials() { grpc_channel_credentials_release(c_creds_); }
  grpc_channel_credentials* GetRawCreds() { return c_creds_; }
    }
    
    bool CompletionQueue::CompletionQueueTLSCache::Flush(void** tag, bool* ok) {
  int res = 0;
  void* res_tag;
  flushed_ = true;
  if (grpc_completion_queue_thread_local_cache_flush(cq_->cq_, &res_tag,
                                                     &res)) {
    auto cq_tag = static_cast<internal::CompletionQueueTag*>(res_tag);
    *ok = res == 1;
    if (cq_tag->FinalizeResult(tag, ok)) {
      return true;
    }
  }
  return false;
}
    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
    #endif  // GRPC_INTERNAL_CPP_COMMON_SECURE_AUTH_CONTEXT_H

    
    MeasureInt64 RpcClientReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
    
    {  RpcServerStatsEncoding() = delete;
  RpcServerStatsEncoding(const RpcServerStatsEncoding&) = delete;
  RpcServerStatsEncoding(RpcServerStatsEncoding&&) = delete;
  RpcServerStatsEncoding operator=(const RpcServerStatsEncoding&) = delete;
  RpcServerStatsEncoding operator=(RpcServerStatsEncoding&&) = delete;
};
    
    #endif

    
    template<class T> static T variant_init(T v) {
    return v;
}
static int64_t variant_init(uint32_t v) {
    return v;
}
    
    
    {  if (base64) {
    decoded = string_base64_decode(data, data_len, true);
    if (decoded.isNull()) {
      raise_warning('unable to decode base64 data');
      return nullptr;
    }
  } else {
    decoded = url_decode(data, data_len);
  }
  return req::make<MemFile>(decoded.data(), decoded.size());
}