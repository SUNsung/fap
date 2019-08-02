
        
            if (version == cluster_version_t::v2_0) {
        data->magic = reql_btree_version_magic_t<cluster_version_t::v2_0>::value;
    } else if (version == cluster_version_t::v2_1) {
        data->magic = reql_btree_version_magic_t<cluster_version_t::v2_1>::value;
    } else {
        crash('Unsupported version when writing metainfo.');
    }
    
        io_backender_t io_backender(file_direct_io_mode_t::buffered_desired);
    dummy_cache_balancer_t balancer(GIGABYTE);
    
    
    {  // Tersely prints the first N fields of a tuple to a string vector,
  // one element for each field.
  template <typename Tuple>
  static void TersePrintPrefixToStrings(const Tuple& t, Strings* strings) {
    TuplePrefixPrinter<N - 1>::TersePrintPrefixToStrings(t, strings);
    ::std::stringstream ss;
    UniversalTersePrint(::std::tr1::get<N - 1>(t), &ss);
    strings->push_back(ss.str());
  }
};
    
    #define EXPECT_FATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ALL_THREADS, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    // Next, associate a list of types with the test case, which will be
// repeated for each type in the list.  The typedef is necessary for
// the macro to parse correctly.
typedef testing::Types<char, int, unsigned int> MyTypes;
TYPED_TEST_CASE(FooTest, MyTypes);
    
    template <GTEST_4_TYPENAMES_(T)>
inline GTEST_4_TUPLE_(T) make_tuple(const T0& f0, const T1& f1, const T2& f2,
    const T3& f3) {
  return GTEST_4_TUPLE_(T)(f0, f1, f2, f3);
}
    
    void ChannelArguments::SetMaxSendMessageSize(int size) {
  SetInt(GRPC_ARG_MAX_SEND_MESSAGE_LENGTH, size);
}
    
    class BalancerServiceImpl : public LoadBalancer::Service {
 public:
  using Stream = ServerReaderWriter<LoadBalanceResponse, LoadBalanceRequest>;
    }
    
      memset(&addr, 0, sizeof(addr));
  addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
  addr.sin_family = AF_INET;
  GPR_ASSERT(bind(lst_sock, (grpc_sockaddr*)&addr, sizeof(addr)) !=
             SOCKET_ERROR);
  GPR_ASSERT(listen(lst_sock, SOMAXCONN) != SOCKET_ERROR);
  GPR_ASSERT(getsockname(lst_sock, (grpc_sockaddr*)&addr, &addr_len) !=
             SOCKET_ERROR);
    
        // Setup server
    ServerBuilder builder;
    builder.AddListeningPort(server_address_.str(),
                             grpc::InsecureServerCredentials());
    // Always add a sync unimplemented service: we rely on having at least one
    // synchronous method to get a listening cq
    builder.RegisterService(&unimplemented_service_);
    builder.RegisterService(service1);
    if (service2) {
      builder.RegisterService(service2);
    }
    if (generic_service) {
      builder.RegisterAsyncGenericService(generic_service);
    }
    if (callback_generic_service) {
      builder.experimental().RegisterCallbackGenericService(
          callback_generic_service);
    }
    
      void SetUp() override {
    port_ = grpc_pick_unused_port_or_die();
    ref_desc_pool_ = protobuf::DescriptorPool::generated_pool();
    }
    
    
    {    std::unique_ptr<TestServerBuilderPlugin> plugin(
        new TestServerBuilderPlugin());
    if (register_service_) plugin->SetRegisterService();
    plugins->emplace_back(std::move(plugin));
  }