
        
        #include <grpc/grpc.h>
#include <grpcpp/alarm.h>
#include <grpcpp/server_context.h>
    
    #ifndef GRPC_TEST_CPP_INTEROP_CLIENT_HELPER_H
#define GRPC_TEST_CPP_INTEROP_CLIENT_HELPER_H
    
      memset(&addr, 0, sizeof(addr));
  addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
  addr.sin_family = AF_INET;
  GPR_ASSERT(bind(lst_sock, (grpc_sockaddr*)&addr, sizeof(addr)) !=
             SOCKET_ERROR);
  GPR_ASSERT(listen(lst_sock, SOMAXCONN) != SOCKET_ERROR);
  GPR_ASSERT(getsockname(lst_sock, (grpc_sockaddr*)&addr, &addr_len) !=
             SOCKET_ERROR);
    
    static bool check_destroyable(grpc_winsocket* winsocket) {
  return winsocket->destroy_called == true &&
         winsocket->write_info.closure == NULL &&
         winsocket->read_info.closure == NULL;
}
    
    int main(int argc, char** argv) {
  grpc::testing::TestEnvironment env(argc, argv);
  test_strdup();
  test_dump();
  test_parse_uint32();
  test_asprintf();
  test_strjoin();
  test_strjoin_sep();
  test_ltoa();
  test_int64toa();
  test_leftpad();
  test_stricmp();
  test_memrchr();
  test_parse_bool_value();
  return 0;
}

    
    int main(int argc, char** argv) {
  // Not to abort the test when parsing error happens.
  grpc_core::SetGlobalConfigEnvErrorFunction(&FakeConfigErrorFunction);
    }
    
    TEST_F(HybridEnd2endTest, AsyncRequestStreamResponseStream) {
  typedef EchoTestService::WithAsyncMethod_RequestStream<
      EchoTestService::WithAsyncMethod_ResponseStream<TestServiceImpl>>
      SType;
  SType service;
  SetUpServer(&service, nullptr, nullptr, nullptr);
  ResetStub();
  std::thread response_stream_handler_thread(HandleServerStreaming<SType>,
                                             &service, cqs_[0].get());
  std::thread request_stream_handler_thread(HandleClientStreaming<SType>,
                                            &service, cqs_[1].get());
  TestAllMethods();
  response_stream_handler_thread.join();
  request_stream_handler_thread.join();
}
    
      void TearDown() override {
    server_->Shutdown();
    void* ignored_tag;
    bool ignored_ok;
    cq_->Shutdown();
    while (cq_->Next(&ignored_tag, &ignored_ok))
      ;
    stub_.reset();
    grpc_recycle_unused_port(port_);
  }