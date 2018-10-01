
        
        std::shared_ptr<Channel> CreateChannelInternal(const grpc::string& host,
                                               grpc_channel* c_channel);
    
    AuthPropertyIterator AuthPropertyIterator::operator++(int) {
  AuthPropertyIterator tmp(*this);
  operator++();
  return tmp;
}
    
    const grpc_completion_queue_factory*
CoreCodegen::grpc_completion_queue_factory_lookup(
    const grpc_completion_queue_attributes* attributes) {
  return ::grpc_completion_queue_factory_lookup(attributes);
}
    
    namespace grpc {
    }