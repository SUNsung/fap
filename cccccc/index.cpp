
        
          v8::Handle<v8::String> source = v8::String::NewExternal(isolate,
                                                          new extensions::StaticV8ExternalOneByteStringResource(
          GetStringResource(resource_id)));
  v8::Handle<v8::String> wrapped_source = WrapSource(source);
    
    // static
int DispatcherHost::AllocateId() {
  return next_object_id_++;
}
    
    typedef std::map<std::string,std::string> KeyMap;
    
    bool NwAppGetArgvSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
    }
    
    #endif // BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP

    
    template <typename Time_Traits>
void dev_poll_reactor::schedule_timer(timer_queue<Time_Traits>& queue,
    const typename Time_Traits::time_type& time,
    typename timer_queue<Time_Traits>::per_timer_data& timer, wait_op* op)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
    }
    
      grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cerr << 'Server listening on ' << server_address << std::endl;
    
    namespace NamespaceC {
    }
    
    MonsterStorage::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(
          std::mem_fn(&MonsterStorage::Service::Store), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MonsterStorage_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MonsterStorage::Service, flatbuffers::grpc::Message<Stat>, flatbuffers::grpc::Message<Monster>>(
          std::mem_fn(&MonsterStorage::Service::Retrieve), this)));
}
    
    // Computes how many bytes you'd have to pad to be able to write an
// 'scalar_size' scalar if the buffer had grown to 'buf_size' (downwards in
// memory).
inline size_t PaddingBytes(size_t buf_size, size_t scalar_size) {
  return ((~buf_size) + 1) & (scalar_size - 1);
}
    
    template<typename T> T HashFnv1(const char *input) {
  T hash = FnvTraits<T>::kOffsetBasis;
  for (const char *c = input; *c; ++c) {
    hash *= FnvTraits<T>::kFnvPrime;
    hash ^= static_cast<unsigned char>(*c);
  }
  return hash;
}
    
    
    {}  // namespace flatbuffers