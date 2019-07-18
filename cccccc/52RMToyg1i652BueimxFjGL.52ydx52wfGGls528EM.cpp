
        
        
    {
    {
    {
    {}  // namespace js
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    template <int N>
struct SCCInfo {
  SCCInfoBase base;
  // Semantically this is const SCCInfo<T>* which is is a templated type.
  // The obvious inheriting from SCCInfoBase mucks with struct initialization.
  // Attempts showed the compiler was generating dynamic initialization code.
  // Zero length arrays produce warnings with MSVC.
  SCCInfoBase* deps[N ? N : 1];
};
    
    // Compares fields by their index offset by one, so index 0 matches with 1, etc.
class OffsetByOneMapKeyComparator
    : public util::MessageDifferencer::MapKeyComparator {
 public:
  typedef util::MessageDifferencer::SpecificField SpecificField;
  virtual bool IsMatch(const Message& message1, const Message& message2,
                       const std::vector<SpecificField>& parent_fields) const {
    return parent_fields.back().index + 1 == parent_fields.back().new_index;
  }
};
    
    
    {  return true;
}
    
    TEST_F(ParserTest, WarnIfFieldNameIsNotUpperCamel) {
  SetupParser(
      'syntax = \'proto2\';'
      'message abc {}');
  FileDescriptorProto file;
  EXPECT_TRUE(parser_->Parse(input_.get(), &file));
  EXPECT_TRUE(error_collector_.warning_.find(
                  'Message name should be in UpperCamelCase. Found: abc.') !=
              string::npos);
}
    
    TEST_F(JsonObjectWriterTest, ListInList) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->StartList('')
      ->StartList('')
      ->RenderString('', 'value')
      ->EndList()
      ->EndList();
  EXPECT_EQ('[[\'value\']]', CloseStreamAndGetString());
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    namespace grpc_impl {
    }
    
    std::vector<string> GetAllCredentialsTypeList() {
  std::vector<grpc::string> credentials_types;
  if (GetCredentialsProvider()->GetChannelCredentials(kInsecureCredentialsType,
                                                      nullptr) != nullptr) {
    credentials_types.push_back(kInsecureCredentialsType);
  }
  auto sec_list = GetCredentialsProvider()->GetSecureCredentialsTypeList();
  for (auto sec = sec_list.begin(); sec != sec_list.end(); sec++) {
    credentials_types.push_back(*sec);
  }
  GPR_ASSERT(!credentials_types.empty());
    }
    
    #endif /* GRPC_CORE_LIB_GPRPP_GLOBAL_CONFIG_ENV_H */

    
    namespace experimental {
    }
    
    
    {}  // namespace grpc_impl

    
    
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

    
    namespace {
    }
    
        static const ncclUniqueId emptyNcclId = {};
    if (memcmp(&ncclId, &emptyNcclId, sizeof(ncclId)) == 0)
    {
        fprintf(stderr, 'NcclComm failed to obtain ncclUniqueId: %s\n', ncclGetErrorString(res));
        return;
    }
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::CreateSparseInputNode(const std::wstring& inputName, const size_t rows, const wstring& dynamicAxisName)
{
    return net.AddNodeToNetWithElemType(New<SparseInputValue<ElemType>>(net.GetDeviceId(), inputName, rows, dynamicAxisName));
}
    
            if (pass == ndlPassInitial)
        {
            // evaluate only scalar parameters
            vector<void*> params = EvaluateParameters(node, baseName, 0, parameter.size(), pass);
            size_t i = 0;
            auto tensorShape = ProcessTensorShapeParameters(node, params, i, /*isImage=*/false, cnNodeType);
    }
    
    // EqualInsensitive - check to see if two nodes are equal
// string1 - [in,out] string to compare, if comparision is equal insensitive but not sensitive, will replace with sensitive version
// string2 - second string to compare
// alternate - alternate naming of the string
// return - true if strings are equal insensitive and modifies string1 to sensitive version if different
bool EqualInsensitive(std::wstring& string1, const std::wstring& string2, const wchar_t* alternate /*=NULL*/)
{
    bool equal = EqualCI(string1, string2) ||
                 (alternate && EqualCI(string1, alternate));
    }
    
            NDLNode<ElemType>* ndlNode = NULL;
    
    #include 'stdafx.h'
#include 'Actions.h'
#include 'SimpleNetworkBuilder.h'
#include 'NDLNetworkBuilder.h'
#include 'ScriptableObjects.h'
#include 'BrainScriptEvaluator.h'
#include 'BrainScriptParser.h'
    
    
    {        // determine the node group by its group tag string
        auto& nodeGroup = GetNodeGroup(groupTag);
        // if node is already in the list then we are done
        if (node->HasTag(groupTag))
        {
            for (const auto& groupNode : nodeGroup) // TODO: is there an STL algorithm?
                if (groupNode == node)
                    return;
            // we get here if the node has the tag but is not in the node group yet
        }
        // verify and update the node's tag
        node->SetTag(groupTag);
        // add to the node group
        nodeGroup.push_back(node);
    }
    
    template <class ElemType>
class ComputationNetworkBuilder
{
    typedef shared_ptr<ComputationNode<ElemType>> ComputationNodePtr;
    ComputationNetwork& net;
    ComputationNetworkBuilder();
    ComputationNetworkBuilder(const ComputationNetworkBuilder&);
    void operator=(const ComputationNetworkBuilder&);
    }
    
        float DecayCoefficient()
    {
        float f = 1.f;
        switch (m_adjustLearningRateAtBeginningType)
        {
        case AdjustLearningRateAtBeginning::None:
            break;
        case AdjustLearningRateAtBeginning::Linearly:
            f = min(f, max(0.f, (float)(m_adjustCoefficient + (1 - m_adjustCoefficient) / m_adjustMBNumber * m_parameterSyncCounter)));
            break;
        case AdjustLearningRateAtBeginning::Staircase:
            f = min(f, max(0.f, (float)(m_adjustCoefficient * (m_parameterSyncCounter / m_adjustMBNumber + 1))));
            break;
        default:
            break;
        }
        return f;
    }
    
            // begin decimating matrices
        size_t rv = 0;
        for (const auto& it : MB)
        {
            const wstring& name = it.first;
            const auto& input = it.second;
            auto& mat = MB.GetInputMatrix<ElemType>(name);
            size_t numRows = mat.GetNumRows();
            size_t numCols = mat.GetNumCols();
            int deviceId   = mat.GetDeviceId();
    }
    
        // uses a small percentage of training data of minibatch to
    // speculatively train with various MB sizes; then picks the best
    size_t SearchForBestMinibatchSize(ComputationNetworkPtr net,
                                      ComputationNetworkPtr refNet,
                                      const ComputationNodeBasePtr& refNode,
                                      const int epochNumber,
                                      const size_t numFramesToUseInSearch,
                                      IDataReader* trainSetDataReader,
                                      const double learnRatePerSample,
                                      const std::vector<ComputationNodeBasePtr>& featureNodes,
                                      const std::vector<ComputationNodeBasePtr>& labelNodes,
                                      const std::vector<ComputationNodeBasePtr>& criterionNodes,
                                      const std::vector<ComputationNodeBasePtr>& evaluationNodes,
                                      StreamMinibatchInputs* inputMatrices,
                                      const std::list<ComputationNodeBasePtr>& learnableNodes,
                                      std::list<MatrixBasePtr>& smoothedGradients, std::vector<double> smoothedCounts,
                                      const size_t minMinibatchSize, const size_t maxMinibatchSize);
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
    public:
  DHTResponseMessage(const std::shared_ptr<DHTNode>& localNode,
                     const std::shared_ptr<DHTNode>& remoteNode,
                     const std::string& transactionID);
    
        dispatcher->setTimeout(std::chrono::seconds(messageTimeout));
    
    class DownloadContext;
class PeerStorage;
class DHTTask;
class DHTNode;
class DHTBucket;
    
    namespace aria2 {
    }
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    #include 'DHTNode.h'
#include 'util.h'
#include 'a2functional.h'
    
    DNSCache::CacheEntry::CacheEntry(const std::string& hostname, uint16_t port)
    : hostname_(hostname), port_(port)
{
}
    
            /**
         * Less or equal comparison operator.
         * @param point Point<T> to be compared.
         * @result Whether the instance satisfies the condition with respect to point.
         */
        inline bool operator<=(const Point<T>& point) const
        {
            return area() <= point.area();
        }
    
            Rectangle(const T x = 0, const T y = 0, const T width = 0, const T height = 0);
    
        /**
     * A synchronization point that enqueues a barrier operation.
     *
     * Enqueues a barrier command which waits for either a list of events to complete, 
     * or if the list is empty it waits for all commands previously enqueued in command_queue 
     * to complete before it completes. This command blocks command execution, that is, any 
     * following commands enqueued after it do not execute until it completes. This command 
     * returns an event which can be waited on, i.e. this event can be waited on to insure that 
     * all events either in the event_wait_list or all previously enqueued commands, queued 
     * before this command to command_queue, have completed.
     */
    cl_int enqueueBarrierWithWaitList(
        const vector<Event> *events = 0,
        Event *event = 0)
    {
        cl_event tmp;
        cl_int err = detail::errHandler(
            ::clEnqueueBarrierWithWaitList(
                object_,
                (events != NULL) ? (cl_uint) events->size() : 0,
                (events != NULL && events->size() > 0) ? (cl_event*) &events->front() : NULL,
                (event != NULL) ? &tmp : NULL),
            __ENQUEUE_BARRIER_WAIT_LIST_ERR);
    }
    
            void generateMesh(const Array<float>& poseKeypoints3D, const Array<float>& faceKeypoints3D,
                          const std::array<Array<float>, 2>& handKeypoints3D,
                          const double* const adamPosePtr,
                          const double* const adamTranslationPtr,
                          const double* const vtVecPtr, const int vtVecRows,
                          const double* const j0VecPtr, const int j0VecRows,
                          const double* const adamFaceCoeffsExpPtr);
    
        public:
        PersonIdExtractor(const float confidenceThreshold = 0.1f, const float inlierRatioThreshold = 0.5f,
                          const float distanceThreshold = 30.f, const int numberFramesToDeletePerson = 10);