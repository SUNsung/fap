
        
        
    {
    {
    {
    {}  // namespace
}  // namespace internal
}  // namespace protobuf
}  // namespace google

    
      std::multimap<grpc::string_ref, grpc::string_ref>* GetRecvTrailingMetadata()
      override {
    GPR_CODEGEN_ASSERT(false &&
                       'It is illegal to call GetRecvTrailingMetadata on a '
                       'method which has a Cancel notification');
    return nullptr;
  }
    
    #include 'src/core/lib/iomgr/iocp_windows.h'
#include 'src/core/lib/iomgr/iomgr_internal.h'
#include 'src/core/lib/iomgr/pollset.h'
#include 'src/core/lib/iomgr/pollset_windows.h'
#include 'src/core/lib/iomgr/sockaddr_windows.h'
#include 'src/core/lib/iomgr/socket_windows.h'
    
    // Base class for all classes to access environment variables.
class GlobalConfigEnv {
 protected:
  // `name` should be writable and alive after constructor is called.
  constexpr explicit GlobalConfigEnv(char* name) : name_(name) {}
    }
    
      joined = gpr_strjoin(parts, 0, &joined_len);
  GPR_ASSERT(0 == strcmp('', joined));
  gpr_free(joined);
    
    void ClearConfigErrorCalled() { g_config_error_function_called = false; }
    
    TEST(GlobalConfigTest, BoolTest) {
  EXPECT_FALSE(GPR_GLOBAL_CONFIG_GET(bool_var));
  GPR_GLOBAL_CONFIG_SET(bool_var, true);
  EXPECT_TRUE(GPR_GLOBAL_CONFIG_GET(bool_var));
}
    
    static inline std::shared_ptr<::grpc::Channel> CreateChannel(
    const grpc::string& target,
    const std::shared_ptr<ChannelCredentials>& creds) {
  return ::grpc_impl::CreateChannelImpl(target, creds);
}
    
    TEST_F(HybridEnd2endTest, GenericEchoRequestStreamAsyncResponseStream) {
  typedef EchoTestService::WithGenericMethod_RequestStream<
      EchoTestService::WithGenericMethod_Echo<
          EchoTestService::WithAsyncMethod_ResponseStream<TestServiceImpl>>>
      SType;
  SType service;
  AsyncGenericService generic_service;
  SetUpServer(&service, nullptr, &generic_service, nullptr);
  ResetStub();
  std::thread generic_handler_thread(HandleGenericCall, &generic_service,
                                     cqs_[0].get());
  std::thread generic_handler_thread2(HandleGenericCall, &generic_service,
                                      cqs_[1].get());
  std::thread response_stream_handler_thread(HandleServerStreaming<SType>,
                                             &service, cqs_[2].get());
  TestAllMethods();
  generic_handler_thread.join();
  generic_handler_thread2.join();
  response_stream_handler_thread.join();
}
    
    class TestServiceImpl : public EchoTestService::Service {
 public:
  Status Echo(ServerContext* context, const EchoRequest* request,
              EchoResponse* response) override {
    response->set_message(request->message());
    return Status::OK;
  }
    }
    
    #include 'src/proto/grpc/testing/echo.grpc.pb.h'
#include 'test/core/util/port.h'
#include 'test/core/util/test_config.h'
#include 'test/cpp/end2end/test_service_impl.h'
#include 'test/cpp/util/proto_reflection_descriptor_database.h'
    
    
    {                if (m_prevParameters.find(name) == m_prevParameters.end())
                {
                    auto newValue = make_shared<Matrix<ElemType>>(value.GetDeviceId());
                    newValue->SetValue(value);
                    m_prevParameters[name] = newValue;
                }
                else
                {
                    m_prevParameters[name]->SetValue(value);
                }
            }
    
        // parameters of a function (ndlTypFunction), or parameters in the call to a macro
    void SetParamString(ConfigValue paramString)
    {
        m_paramString = paramString;
    }
    ConfigArray GetParamString() const
    {
        return m_paramString;
    }
    
        // determine which epoch to start with, including recovering a checkpoint if any and 'makeMode' enabled
    int startEpoch = optimizer->DetermineStartEpoch(makeMode);
    if (startEpoch == optimizer->GetMaxEpochs())
    {
        LOGPRINTF(stderr, 'No further training is necessary.\n');
        return;
    }
    
            // skip any spaces before the second token
        tokenStart = stringParse.find_first_not_of(' \t', tokenStart);
        std::string::size_type substrSize = tokenEnd - tokenStart;
    
                // TODO: We should be able to move instead of copy but it currently isn't straightforward
            // due to redU and redVT being slices
            pLeft->ValueAsMatrix()  = redU.DeepClone();
            pRight->ValueAsMatrix() = redVT.DeepClone();
    
            if (vec.capacity() < numElements)
        {
            // Bad luck - we can't reallocate memory of an external object at this point.
            RuntimeError('Not enough space in output buffer for output '%ls'.', node->GetName().c_str());
        }
    
                // The following does m_netInputMatrixPtr = decimatedMatrices; with ownership shenanigans.
            for (auto& x : decimatedMatrices)
            {
                const wstring& name = x.first;
                m_netInputMatrixPtr.GetInputMatrix<ElemType>(name).SetValue(decimatedMatrices.GetInputMatrix<ElemType>(name));
            }
    
    #include 'Basics.h'
#include 'MPIWrapper.h'
#include 'Matrix.h'
#include 'SimpleDistGradAggregatorHelper.h'
#include 'DistGradHeader.h'
#include 'IDistGradAggregator.h'
#include 'SimpleDistGradAggregator.h'
#include 'V2SimpleDistGradAggregator.h'
    
    
    {            if (m_useAsyncAggregation)
                m_bufferedGradients[gradients[i]].reset(new Matrix<ElemType>(gradients[i]->GetNumRows(), gradients[i]->GetNumCols(), deviceId));
        }
    
            // Accumulator nodes already accumulate error for all samples that passed through network in forward pass.
        // For them we use 1 as number of samples to avoid averaging again.
        // Also, we always perform reset for those nodes to avoid accumulating again.
        bool nodeContainsAccumulatedResult = ContainsAccumulatedResult(node);
    
    public:
  using mapped_type    = Map::mapped_type;
  using key_type       = Map::key_type;
  using value_type     = Map::value_type;
  using size_type      = Map::size_type;
  using iterator       = Map::iterator;
  using const_iterator = Map::const_iterator;
    
    
    {        bool found = false;
        for (const char *t = p; *t; t++) {
          if (*t == ';') {
            int l = t - p;
            if (l > 0) {
              char sbuf[16] = {0};
              char *buf;
              if (l > 10) {
                buf = (char* )malloc(l + 1);
              } else {
                buf = sbuf;
              }
              memcpy(buf, p, l);
              buf[l] = '\0';
              if (decode_entity(buf, &l, true, true,
                cs_utf_8, true)) {
                found = true;
                *q++ = '&';
                for(const char *s = p; s <= t; s++) {
                  *q++ = *s;
                }
                p = t;
              }
              if (buf != sbuf) {
                free(buf);
              }
            }
            break;
          }
        }
        if (!found) {
          p--;
          *q++ = '&'; *q++ = 'a'; *q++ = 'm'; *q++ = 'p'; *q++ = ';';
        }
      } else {
        *q++ = '&'; *q++ = 'a'; *q++ = 'm'; *q++ = 'p'; *q++ = ';';
      }
      break;
    case static_cast<unsigned char>('\xc2'):
      if (htmlEnt && utf8 && p != end && *(p+1) == '\xa0') {
        *q++ = '&'; *q++ = 'n'; *q++ = 'b'; *q++ = 's'; *q++ = 'p'; *q++ = ';';
        p++;
        break;
      }
    
    
    {  // Make sure the thread is gone after hphp_process_exit().  The node
  // is intentionally leaked.
  new InitFiniNode(
    [] { folly::Singleton<HostHealthMonitor>::try_get()->waitForEnd(); },
    InitFiniNode::When::ProcessExit
  );
}
    
      // proxygen will send onTimeout if we don't receive data in this much time
  long maxWait = RuntimeOption::ConnectionTimeoutSeconds;
  if (maxWait <= 0) {
    maxWait = 50; // this was the default read timeout in LibEventServer
  }
  Lock lock(this);
  while (m_bodyData.empty() && !m_clientComplete) {
    VLOG(4) << 'waiting for POST data for maxWait=' << maxWait;
    wait(maxWait);
  }
  auto oldLength = m_bodyData.chainLength();
    
      static ArrayData* ToShape(ArrayData*, bool);
    
    struct Func;
struct Class;
struct Unit;
struct StringData;
struct ObjectData;
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    // Constant parameters
    const auto HAND_CCN_DECREASE_FACTOR = 8.f;
    const std::string HAND_PROTOTXT{'hand/pose_deploy.prototxt'};
    const std::string HAND_TRAINED_MODEL{'hand/pose_iter_102000.caffemodel'};
    
        template<typename T>
    Point<T> Point<T>::operator-(const Point<T>& point) const
    {
        try
        {
            return Point<T>{T(x - point.x), T(y - point.y)};
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Point<T>{};
        }
    }