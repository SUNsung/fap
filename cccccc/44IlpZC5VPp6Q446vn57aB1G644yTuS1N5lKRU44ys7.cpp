
        
        #include <grpcpp/security/credentials.h>
    
    // setup a unary call to a named method
std::unique_ptr<GenericClientAsyncResponseReader> GenericStub::PrepareUnaryCall(
    ClientContext* context, const grpc::string& method,
    const ByteBuffer& request, CompletionQueue* cq) {
  return std::unique_ptr<GenericClientAsyncResponseReader>(
      internal::ClientAsyncResponseReaderFactory<ByteBuffer>::Create(
          channel_.get(), cq,
          internal::RpcMethod(method.c_str(), internal::RpcMethod::NORMAL_RPC),
          context, request, false));
}
    
    #include <grpcpp/security/credentials.h>
    
    // 'CompletionQueue' constructor can safely call GrpcLibraryCodegen(false) here
// i.e not have GrpcLibraryCodegen call grpc_init(). This is because, to create
// a 'grpc_completion_queue' instance (which is being passed as the input to
// this constructor), one must have already called grpc_init().
CompletionQueue::CompletionQueue(grpc_completion_queue* take)
    : GrpcLibraryCodegen(false), cq_(take) {
  InitialAvalanching();
}
    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
    MeasureDouble RpcServerReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerReceivedBytesPerRpcMeasureName,
      'Total bytes received across all messages per RPC', kUnitBytes);
  return measure;
}
    
    BENCHFUN(defaultCtor)                  100000  1.426 s   14.26 us   68.5 k
BM_copyCtor_string/32k                 100000  275.7 ms  2.757 us  354.2 k
BM_ctorFromArray_string/32k            100000    270 ms    2.7 us  361.7 k
BM_ctorFromChar_string/1M              100000  10.36 ms  103.6 ns  9.206 M
BM_assignmentOp_string/256             100000  70.44 ms  704.3 ns  1.354 M
BENCHFUN(assignmentFill)               100000  1.766 ms  17.66 ns     54 M
BM_resize_string/512k                  100000  1.675 s   16.75 us  58.29 k
BM_findSuccessful_string/512k          100000  90.89 ms  908.9 ns  1.049 M
BM_findUnsuccessful_string/512k        100000  315.1 ms  3.151 us  309.9 k
BM_replace_string/256                  100000  71.14 ms  711.4 ns  1.341 M
BM_push_back_string/1k                 100000  425.1 ms  4.251 us  229.7 k
    
    TEST(U16FBString, compareToStdU16String) {
  using folly::basic_fbstring;
  using namespace std::string_literals;
  auto stdA = u'a's;
  auto stdB = u'b's;
  basic_fbstring<char16_t> fbA(u'a');
  basic_fbstring<char16_t> fbB(u'b');
  EXPECT_TRUE(stdA == fbA);
  EXPECT_TRUE(fbB == stdB);
  EXPECT_TRUE(stdA != fbB);
  EXPECT_TRUE(fbA != stdB);
  EXPECT_TRUE(stdA < fbB);
  EXPECT_TRUE(fbA < stdB);
  EXPECT_TRUE(stdB > fbA);
  EXPECT_TRUE(fbB > stdA);
  EXPECT_TRUE(stdA <= fbB);
  EXPECT_TRUE(fbA <= stdB);
  EXPECT_TRUE(stdA <= fbA);
  EXPECT_TRUE(fbA <= stdA);
  EXPECT_TRUE(stdB >= fbA);
  EXPECT_TRUE(fbB >= stdA);
  EXPECT_TRUE(stdB >= fbB);
  EXPECT_TRUE(fbB >= stdB);
}
    
    using FBStringVector = vector<folly::fbstring>;
using FBStringFBVector = fbvector<folly::fbstring>;
    
    TEST(Fingerprint, Alignment) {
  // Test that update() gives the same result regardless of string alignment
  const char test_str[] = 'hello world 12345';
  int len = sizeof(test_str)-1;
  std::unique_ptr<char[]> str(new char[len+8]);
  uint64_t ref_fp;
  SlowFingerprint<64>().update(StringPiece(test_str, len)).write(&ref_fp);
  for (int i = 0; i < 8; i++) {
    char* p = str.get();
    char* q;
    // Fill the string as !!hello??????
    for (int j = 0; j < i; j++) {
      *p++ = '!';
    }
    q = p;
    for (int j = 0; j < len; j++) {
      *p++ = test_str[j];
    }
    for (int j = i; j < 8; j++) {
      *p++ = '?';
    }
    }
    }