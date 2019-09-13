
        
        
    {    secp256k1_scalar_set_b32(&sec, seckey, &overflow);
    /* Fail if the secret key is invalid. */
    if (!overflow && !secp256k1_scalar_is_zero(&sec)) {
        unsigned char nonce32[32];
        unsigned int count = 0;
        secp256k1_scalar_set_b32(&msg, msg32, NULL);
        while (1) {
            ret = noncefp(nonce32, msg32, seckey, NULL, (void*)noncedata, count);
            if (!ret) {
                break;
            }
            secp256k1_scalar_set_b32(&non, nonce32, &overflow);
            if (!secp256k1_scalar_is_zero(&non) && !overflow) {
                if (secp256k1_ecdsa_sig_sign(&ctx->ecmult_gen_ctx, &r, &s, &sec, &msg, &non, &recid)) {
                    break;
                }
            }
            count++;
        }
        memset(nonce32, 0, 32);
        secp256k1_scalar_clear(&msg);
        secp256k1_scalar_clear(&non);
        secp256k1_scalar_clear(&sec);
    }
    if (ret) {
        secp256k1_ecdsa_recoverable_signature_save(signature, &r, &s, recid);
    } else {
        memset(signature, 0, sizeof(*signature));
    }
    return ret;
}
    
    #endif /* SECP256K1_MODULE_RECOVERY_TESTS_H */

    
    public:
    static const size_t OUTPUT_SIZE = 20;
    
        __asm__ __volatile__(
        'shl    $0x6,%2;'
        'je     Ldone_hash_%=;'
        'add    %1,%2;'
        'mov    %2,%14;'
        'mov    (%0),%3;'
        'mov    0x4(%0),%4;'
        'mov    0x8(%0),%5;'
        'mov    0xc(%0),%6;'
        'mov    0x10(%0),%k2;'
        'mov    0x14(%0),%7;'
        'mov    0x18(%0),%8;'
        'mov    0x1c(%0),%9;'
        'movdqa %18,%%xmm12;'
        'movdqa %19,%%xmm10;'
        'movdqa %20,%%xmm11;'
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string TableFileName(const std::string& dbname, uint64_t number);
    
    void grpc_socket_notify_on_write(grpc_winsocket* socket,
                                 grpc_closure* closure) {
  socket_notify_on_iocp(socket, closure, &socket->write_info);
}
    
    static void test_stricmp(void) {
  LOG_TEST_NAME('test_stricmp');
    }
    
    #include 'src/core/lib/gpr/env.h'
#include 'src/core/lib/gprpp/global_config_env.h'
#include 'src/core/lib/gprpp/memory.h'
    
    CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
    #include <gtest/gtest.h>
    
    // Regular Async, both peers use proto
TEST_F(RawEnd2EndTest, PureAsyncService) {
  typedef grpc::testing::EchoTestService::AsyncService SType;
  ResetStub();
  auto service = BuildAndStartServer<SType>();
  grpc::ServerAsyncResponseWriter<EchoResponse> response_writer(&srv_ctx_);
    }
    
      void ClientMakeEchoCalls(const grpc::string& lb_id,
                           const grpc::string& lb_tag,
                           const grpc::string& message, size_t num_requests) {
    auto stub = EchoTestService::NewStub(
        grpc::CreateChannel(server_address_, InsecureChannelCredentials()));
    grpc::string lb_token = lb_id + lb_tag;
    for (int i = 0; i < num_requests; ++i) {
      ClientContext ctx;
      if (!lb_token.empty()) ctx.AddMetadata(GRPC_LB_TOKEN_MD_KEY, lb_token);
      EchoRequest request;
      EchoResponse response;
      request.set_message(message);
      Status status = stub->Echo(&ctx, request, &response);
      if (message == kOkMessage) {
        ASSERT_EQ(status.error_code(), StatusCode::OK);
        ASSERT_EQ(request.message(), response.message());
      } else if (message == kServerErrorMessage) {
        ASSERT_EQ(status.error_code(), StatusCode::UNKNOWN);
      } else if (message == kClientErrorMessage) {
        ASSERT_EQ(status.error_code(), StatusCode::FAILED_PRECONDITION);
      }
    }
  }
    
      static void clear(Data& data);
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
    bool DHTRoutingTable::addNode(const std::shared_ptr<DHTNode>& node)
{
  return addNode(node, false);
}
    
      Time getSerializedTime() const { return serializedTime_; }
    
    namespace aria2 {
    }
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createNodeLookupTask(const unsigned char* targetID)
{
  auto task = std::make_shared<DHTNodeLookupTask>(targetID);
  setCommonProperty(task);
  return task;
}
    
    namespace aria2 {
    }
    
        const auto FACE_NUMBER_PARTS = 70u;
    #define FACE_PAIRS_RENDER_GPU \
        0,1,  1,2,  2,3,  3,4,  4,5,  5,6,  6,7,  7,8,  8,9,  9,10,  10,11,  11,12,  12,13,  13,14,  14,15,  15,16,  17,18,  18,19,  19,20, \
        20,21,  22,23,  23,24,  24,25,  25,26,  27,28,  28,29,  29,30,  31,32,  32,33,  33,34,  34,35,  36,37,  37,38,  38,39,  39,40,  40,41, \
        41,36,  42,43,  43,44,  44,45,  45,46,  46,47,  47,42,  48,49,  49,50,  50,51,  51,52,  52,53,  53,54,  54,55,  55,56,  56,57,  57,58, \
        58,59,  59,48,  60,61,  61,62,  62,63,  63,64,  64,65,  65,66,  66,67,  67,60
    #define FACE_SCALES_RENDER_GPU 1
    const std::vector<unsigned int> FACE_PAIRS_RENDER {FACE_PAIRS_RENDER_GPU};
    #define FACE_COLORS_RENDER_GPU 255.f,    255.f,    255.f
    const std::vector<float> FACE_COLORS_RENDER{FACE_COLORS_RENDER_GPU};
    const std::vector<float> FACE_SCALES_RENDER{FACE_SCALES_RENDER_GPU};
    
        template<typename T>
    std::string Point<T>::toString() const
    {
        try
        {
            return '[' + std::to_string(x) + ', ' + std::to_string(y) + ']';
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return '';
        }
    }