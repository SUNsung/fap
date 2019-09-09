
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace xla {
namespace gpu {
    }
    }
    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_GPU_FOR_THUNK_H_

    
    #include 'tensorflow/compiler/xla/service/gpu/infeed_thunk.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/infeed_manager.h'
#include 'tensorflow/compiler/xla/util.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {
    {}  // namespace gpu
}  // namespace xla

    
      module->AddEntryComputation(builder.Build());
  EXPECT_EQ(module->MakeComputationPostOrder().size(), 2);
    
    
    {
    {    xla::XlaOp loss, backprop;
    std::tie(loss, backprop) =
        CrossEntropyWithLogits(ctx, type, xla_type, logits, labels);
    ctx->SetOutput(0, loss);
    ctx->SetOutput(1, backprop);
  }
};
    
      // shutdown should trigger cancellation causing everything to shutdown
  auto deadline =
      std::chrono::system_clock::now() + std::chrono::microseconds(100);
  server_->Shutdown(deadline);
  EXPECT_GE(std::chrono::system_clock::now(), deadline);
    
    extern grpc_tcp_server_vtable grpc_windows_tcp_server_vtable;
extern grpc_tcp_client_vtable grpc_windows_tcp_client_vtable;
extern grpc_timer_vtable grpc_generic_timer_vtable;
extern grpc_pollset_vtable grpc_windows_pollset_vtable;
extern grpc_pollset_set_vtable grpc_windows_pollset_set_vtable;
extern grpc_address_resolver_vtable grpc_windows_resolver_vtable;
    
    bool g_config_error_function_called;
    
    ChannelCredentials::~ChannelCredentials() {}
    
    
    {
    { private:
  std::shared_ptr<grpc::Channel> CreateChannelWithInterceptors(
      const string& target, const grpc::ChannelArguments& args,
      std::vector<
          std::unique_ptr<experimental::ClientInterceptorFactoryInterface>>
          interceptor_creators) override {
    grpc_channel_args channel_args;
    args.SetChannelArgs(&channel_args);
    return CreateChannelInternal(
        '',
        grpc_cronet_secure_channel_create(engine_, target.c_str(),
                                          &channel_args, nullptr),
        std::move(interceptor_creators));
  }
  void* engine_;
};
}  // namespace grpc
namespace grpc_impl {
std::shared_ptr<ChannelCredentials> CronetChannelCredentials(void* engine) {
  return std::shared_ptr<ChannelCredentials>(
      new grpc::CronetChannelCredentialsImpl(engine));
}
}  // namespace grpc_impl

    
    
    {  grpc::testing::TestEnvironment env(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  // Order seems to matter on these tests: run three times to eliminate that
  for (int i = 0; i < 3; i++) {
    if (RUN_ALL_TESTS() != 0) {
      return 1;
    }
  }
  return 0;
}

    
      void Shutdown() override { impl_->Shutdown(); }
    
      void DoResponseStream() {
    EchoRequest request;
    EchoResponse response;
    request.set_message('hello world');
    }
    
    // Client uses proto, server uses generic codegen, server streaming
TEST_F(RawEnd2EndTest, RawServerServerStreaming) {
  typedef grpc::testing::EchoTestService::WithRawMethod_ResponseStream<
      grpc::testing::EchoTestService::Service>
      SType;
  ResetStub();
  auto service = BuildAndStartServer<SType>();
  grpc::GenericServerAsyncWriter srv_stream(&srv_ctx_);
    }
    
      void UpdatePlugins(
      std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {
    plugins->clear();
    }
    
    
    {    return Status(static_cast<StatusCode>(server_return_status_code), '');
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
    
      virtual ~DHTResponseMessage();
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    class DHTTaskQueueImpl : public DHTTaskQueue {
private:
  DHTTaskExecutor periodicTaskQueue1_;
    }
    
      std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port,
                            const unsigned char* secret) const;
    
    namespace aria2 {
    }
    
    
    {            auto timeRange     = fr.GetTimeRange();
            auto sequenceRange = fr.GetSequenceRange();
            m_beingUnrolled = true;
            for (auto t = timeRange.first; t < timeRange.second; t++)
                for (auto s = sequenceRange.first; s < sequenceRange.second; s++)
                    ForwardProp(fr.WithTimeStep(t).Sequence(s));
            m_beingUnrolled = false;
            return;
        }
    
    
    {                Matrix<ElemType>& NodeValue = pnode->Value();
                if (m_blockLevelSmoothedGradient.find(name) == m_blockLevelSmoothedGradient.end())
                {
                    // has not been initialized yet
                    auto pSmoothedGrad = make_shared<Matrix<ElemType>> (NodeValue.GetDeviceId());
                    pSmoothedGrad->Resize(NodeValue.GetNumRows(), NodeValue.GetNumCols());
                    pSmoothedGrad->SetValue((ElemType)0); 
                    m_blockLevelSmoothedGradient[name] = pSmoothedGrad; 
                }
                if (m_prevParameters.find(name) == m_prevParameters.end())
                {
                    auto pValue = make_shared<Matrix<ElemType>>  (NodeValue.GetDeviceId());
                    pValue->SetValue(NodeValue);
                    m_prevParameters[name] = pValue;
                }
                else
                {
                    m_prevParameters[name]->SetValue(NodeValue);
                }
            }
            fprintf(stderr, 'Parallel training (%d workers) using BlockMomentumSGD with '
                            'block momentum = %6.4f, '
                            'block momentum time constant (per worker) = %6.4f, '
                            'block learning rate = %6.4f, '
                            'block size per worker = %d samples, '
                            '%s'
                            '%s'
                            '\n',
                            (int)m_pMPI->NumNodesInUse(),      
                            BlockMomentumSGD<double>::TimeConstant2Momentum(m_blockMomentumAsTimeConstantPerWorker, m_syncPeriodPerWorker), 
                            m_blockMomentumAsTimeConstantPerWorker,
                            m_blockLearningRate, 
                            (int)m_syncPeriodPerWorker, 
                            m_useNesterovMomentum ? 'using Nesterov-style block momentum, ' : '' , 
                            m_resetSGDMomentumAfterAggregation ? 'resetting SGD momentum after sync.' : '.'
                );
        }
        /*virtual*/ void OnEpochEnd(const std::list<ComputationNodeBasePtr>& LearnableNodes, 
            std::list<MatrixBasePtr>&                   smoothedGradients,
            size_t                                      samplesSinceLastSync) override
        {
            Base::OnEpochEnd(LearnableNodes, smoothedGradients, samplesSinceLastSync);
        }
        /*virtual*/ void ModelAggregationProcessing(
            size_t samplesSinceLastSync,
            const std::list<ComputationNodeBasePtr>& learnableNodes,
            std::list<MatrixBasePtr>& smoothedGradients,
            size_t& totalSamplesProcessed,
            float& secondsOnCommunication
            ) override
        {
            //----------------------------------------
            // 1. communicate with other nodes to negotiate contribution weights
            //----------------------------------------
            int   nTotalSamples = samplesSinceLastSync;
            ElemType blockMomentum = (ElemType)BlockMomentumSGD<double>::TimeConstant2Momentum(m_blockMomentumAsTimeConstantPerWorker, m_syncPeriodPerWorker);
            Timer commTimer;
            secondsOnCommunication = 0.0f;
            commTimer.Start();
            m_pMPI->AllReduce(&nTotalSamples, 1);
            commTimer.Stop();
            secondsOnCommunication += (float)commTimer.ElapsedSeconds();
            totalSamplesProcessed = nTotalSamples;
    
    
    {
    {        // the rest is done in a lambda that is only evaluated when a virgin network is needed
        // Note that evaluating the BrainScript *is* instantiating the network, so the evaluate call must be inside the lambda.
        createNetworkFn = [expr](DEVICEID_TYPE /*deviceId*/)
        {
            // evaluate the parse tree, particularly the top-level field 'network'
            // Evaluating it will create the network.
            let object = EvaluateField(expr, L'network');                   // this comes back as a BS::Object
            let network = dynamic_pointer_cast<ComputationNetwork>(object); // cast it
            if (!network)
                LogicError('BuildNetworkFromDescription: ComputationNetwork not what it was meant to be');
            return network;
        };
        return true;
    }
    else
        return false;
}
    
    template <class ElemType>
ComputationNetworkPtr SimpleNetworkBuilder<ElemType>::BuildClassLSTMNetworkFromDescription()
{
    ComputationNetworkBuilder<ElemType> builder(*m_net);
    if (m_net->GetTotalNumberOfNodes() < 1) // not built yet
    {
        unsigned long randomSeed = 1;
    }
    }
    
        // sparse matrix size is optionally specified
    // ComputationNodePtr CreateSparseLearnableParameter(const std::wstring & paramName, const size_t rows, const size_t cols, const size_t size = 0);
    ComputationNodePtr CreateInputNode(const std::wstring& inputName, const size_t rows, const wstring& dynamicAxisName = L'');
    ComputationNodePtr CreateSparseInputNode(const std::wstring& inputName, const size_t rows, const wstring& dynamicAxisName = L'');
    shared_ptr<ComputationNode<ElemType>> CreateInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName = L'')
    {
        return this->template TypedCreateInputNode<ElemType>(inputName, sampleLayout, dynamicAxisName);
    }
    template<class ValueType>
    shared_ptr<ComputationNode<ValueType>> TypedCreateInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName);
    shared_ptr<ComputationNode<ElemType>> CreateSparseInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName = L'')
    {
        return this->template TypedCreateSparseInputNode<ElemType>(inputName, sampleLayout, dynamicAxisName);
    }
    template<class ValueType>
    shared_ptr<ComputationNode<ValueType>> TypedCreateSparseInputNode(const std::wstring& inputName, const TensorShape& sampleLayout, const wstring& dynamicAxisName);
    ComputationNodePtr CreateConvolutionNode(const std::wstring& nodeName, const TensorShape& kernelShape, const TensorShape& mapCount, const TensorShape& strideShape,
                                             const std::vector<bool>& sharing, const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad,
                                             bool transpose, const TensorShape& outputShape, ImageLayoutKind imageLayout, size_t maxTempMemSizeInSamples);
    ComputationNodePtr CreateConvolutionNode(const std::wstring& nodeName, const size_t kernelWidth, const size_t kernelHeight, const size_t outputChannels, 
                                             const size_t horizontalSubsample, const size_t verticalSubsample, 
                                             ImageLayoutKind imageLayoutKind, const bool zeroPadding = false, const size_t maxTempMemSizeInSamples = 0);
    ComputationNodePtr CreatePoolingNode(const std::wstring& nodeName, PoolKind poolKind, const TensorShape& kernelShape, const TensorShape& strideShape,
                                         const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad, bool ceilOutDim,
                                         const bool includePad, ImageLayoutKind imageLayout);
    ComputationNodePtr CreateMaxPoolingNode(const std::wstring& nodeName, const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind);
    ComputationNodePtr CreateAveragePoolingNode(const std::wstring& nodeName, const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind);
    ComputationNodePtr CreateROIPoolingNode(const std::wstring& nodeName, PoolKind poolKind, const TensorShape& roiOutputShape, double spatialScale);
    ComputationNodePtr CreateReconcileDynamicAxisNode(const std::wstring& nodeName);
    // this is the catch-all for all cases not covered as special cases above
    // Unlike the specialized ones above, this one creates nodes by type given as a string.
    ComputationNodePtr CreateComputationNode(const std::wstring& nodeType, const std::wstring& nodeName);
    // The following functions create nodes and link them to the network and their inputs.
    // TODO: Do we need both this set and the one above that does not add inputs? Can they share more code?
    ComputationNodePtr BatchNormalization(const ComputationNodePtr input, const ComputationNodePtr scale, const ComputationNodePtr bias,
                                          const ComputationNodePtr runMean, const ComputationNodePtr runVariance, const ComputationNodePtr runSampleCount,
                                          bool spatial = false, double normalizationTimeConstant = 0, double blendTimeConstant = 0, double epsilon = 1e-5, bool useCntkEngine = true,
                                          bool disableRegularization = false, ImageLayoutKind imageLayoutKind = ImageLayoutKind::CHW, const std::wstring nodeName = L'');
    ComputationNodePtr Convolution(const ComputationNodePtr weight,
                                   const ComputationNodePtr inputValues,
                                   const size_t kernelWidth, const size_t kernelHeight, const size_t outputChannels,
                                   const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                   const bool zeroPadding = false, const size_t maxTempMemSizeInSamples = 0,
                                   const std::wstring nodeName = L'');
    ComputationNodePtr Convolution(const ComputationNodePtr weight,
                                   const ComputationNodePtr inputValues,
                                   const TensorShape& kernelShape, const TensorShape& mapCount, const TensorShape& strideShape,
                                   const std::vector<bool>& sharing, const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad,
                                   bool transpose, const TensorShape& outputShape, ImageLayoutKind imageLayout, size_t maxTempMemSizeInSamples,
                                   const std::wstring nodeName = L'');
    ComputationNodePtr Pooling(const ComputationNodePtr inputValues, 
                               PoolKind poolKind, const TensorShape& kernelShape, const TensorShape& strideShape,
                               const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad, bool ceilOutDim, const bool includePad,
                               ImageLayoutKind imageLayout,
                               const std::wstring nodeName = L'');
    ComputationNodePtr MaxUnpooling(const ComputationNodePtr unpoolInputValues,
                                    const ComputationNodePtr poolInputValues,
                                    const TensorShape& kernelShape, const TensorShape& strideShape,
                                    const std::vector<bool>& autoPadding, const TensorShape& lowerPad, const TensorShape& upperPad,
                                    ImageLayoutKind imageLayout,
                                    const std::wstring nodeName = L'');
    ComputationNodePtr MaxPooling(const ComputationNodePtr inputValues,
                                  const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                  const std::wstring nodeName = L'');
    ComputationNodePtr AveragePooling(const ComputationNodePtr inputValues,
                                      const size_t windowWidth, const size_t windowHeight, const size_t horizontalSubsample, const size_t verticalSubsample, ImageLayoutKind imageLayoutKind,
                                      const std::wstring nodeName = L'');
    ComputationNodePtr ROIPooling(const ComputationNodePtr inputValues, const ComputationNodePtr inputROIs, PoolKind poolKind, const TensorShape& roiOutputShape, double spatialScale, const std::wstring nodeName = L'');
    ComputationNodePtr ReconcileDynamicAxis(const ComputationNodePtr dataInput, const ComputationNodePtr layoutInput, const std::wstring nodeName = L'');
    
    
    {            m_tableLength.push_back(layerSize);
        }
    
        // Prepare header.
    const size_t c_evalNodes = 1;
    if (gradHeader == nullptr)
        gradHeader.reset(DistGradHeader::Create(c_evalNodes),
                         [](DistGradHeader* ptr) { DistGradHeader::Destroy(ptr); });
    gradHeader->numEvalNode = c_evalNodes;
    gradHeader->numSamples = sampleCount;
    gradHeader->numSamplesWithLabel = sampleCount;
    gradHeader->criterion = 0.0; // (not used here)
    for (size_t i = 0; i < c_evalNodes; i++)
        // Not used here, but at least one is required by aggregation.
        gradHeader->evalErrors[i] = std::make_pair<double, size_t>(0.0, 0);
    
    
    {  is_first_time_refresh = false;
  loaded_ = true;
  return status;
}
    
    boost::filesystem::path const& getTestConfigDirectory();
    
    bool Flag::isDefault(const std::string& name) {
  flags::CommandLineFlagInfo info;
  if (!flags::GetCommandLineFlagInfo(name.c_str(), &info)) {
    return false;
  }
    }
    
    
    {  for (auto& line : doc.GetArray()) {
    log.push_back({
        static_cast<StatusLogSeverity>(line['s'].GetInt()),
        line['f'].GetString(),
        line['i'].GetUint64(),
        line['m'].GetString(),
        line['c'].GetString(),
        line['u'].GetUint64(),
        line['h'].GetString(),
    });
  }
}
    
      /**
   * @brief Optionally handle each published event via the logger.
   *
   * It is possible to skip the database representation of event subscribers
   * and instead forward each added event to the active logger plugin.
   */
  virtual Status logEvent(const std::string& /*s*/) {
    return Status(1, 'Not enabled');
  }
    
      /// Allow a specialized plugin type to act when an external plugin is removed.
  static void removeExternal(const std::string& /*name*/) {}