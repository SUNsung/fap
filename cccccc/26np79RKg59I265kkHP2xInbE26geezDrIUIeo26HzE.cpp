
        
        #include 'src/cpp/ext/filters/census/context.h'
    
    // Returns the outgoing data size from the grpc call final info.
uint64_t GetOutgoingDataSize(const grpc_call_final_info* final_info);
    
    constexpr size_t TraceContextEncoding::kGrpcTraceContextSize;
constexpr size_t TraceContextEncoding::kEncodeDecodeFailure;
constexpr size_t TraceContextEncoding::kVersionIdSize;
constexpr size_t TraceContextEncoding::kFieldIdSize;
constexpr size_t TraceContextEncoding::kVersionIdOffset;
constexpr size_t TraceContextEncoding::kVersionId;
    
    #ifndef GRPC_CUSTOM_DEFAULT_THREAD_POOL
    
    #include <windows.h>
#include <cstdint>
    
     */
    
            static FunctionPtr Deserialize(const Dictionary& dictionary,
            const std::unordered_map<std::wstring, Variable>& uidToVariableMap,
            const CNTK::DeviceDescriptor& device);
    
    
    {            return { m_packedData->GetMatrix<ElementType>(), m_packedDataLayout };
        }
    
                if (m_varKind == VariableKind::Input)
            {
                for (auto dim : m_shape.Dimensions())
                {
                    if (dim == 0)
                        InvalidArgument('Variable '%S' has invalid shape '%S'.', AsString().c_str(), m_shape.AsString().c_str());
                }
            }
    
    
    {        assert(m_fd == -1);
        for (;;)
        {
            // opening a lock file
            int fd = open(m_fileName.c_str(), O_WRONLY | O_CREAT, 0666);
            if (fd < 0)
                RuntimeError('Acquire: Failed to open lock file %s: %s.', m_fileName.c_str(), strerror(errno));
            // locking it with the fcntl API
            memset(&m_lock, 0, sizeof(m_lock));
            m_lock.l_type = F_WRLCK;
            // BUG: fcntl call with F_SETLKW doesn't always reliably detect when lock is released
            // As a workaround, using alarm() for interupting fcntl if it waits more than 1 second
            setupTimeout(1);
            int r = fcntl(fd, wait ? F_SETLKW : F_SETLK, &m_lock);
            if (errno == EINTR)
            {
                sleep(1);
                // retrying in the case of signal or timeout
                close(fd);
                continue;
            }
            if (r != 0)
            {
                // acquire failed
                close(fd);
                umask(mask);
                return false;
            }
            // we own the exclusive lock on file descriptor, but we need to double-check
            // that the lock file wasn't deleted and/or re-created;
            // checking this by comparing inode numbers
            struct stat before, after;
            fstat(fd, &before);
            if (stat(m_fileName.c_str(), &after) != 0 || before.st_ino != after.st_ino)
            {
                // we have a race with 'unlink' call in Release()
                // our lock is held to the previous instance of the file;
                // this is not a problem, we just need to retry locking the new file
                close(fd);
                continue;
            }
            else
            {
                // lock acquired successfully
                m_fd = fd;
                umask(mask);
                return true;
            }
        }
    }
    
        // Executing this function from BrainScript merely sets up a lambda, but does not actually create any clone.
    // This is so that the function can be called multiple times in order to create multiple clones.
    CloneFunctionConfigLambda(const IConfigRecordPtr configp) :
        ConfigLambda(CreateParamNames(*configp), NamedParams(), [this](vector<ConfigValuePtr> &&args, NamedParams &&namedArgs, const std::wstring &exprName){ return this->DoClone(args, exprName); })
    {
        let& config = *configp;
        // input nodes
        inputNodes = GetInputNodes(config);
        // output nodes
        let outputNodesParam = config[L'outputNodes'];  // can be a node or a record
        if (outputNodesParam.Is<ComputationNodeBase>()) // scalar case: result is a single node
            outputNodes[L''] = outputNodesParam.AsPtr<ComputationNodeBase>(); // indicated by a '' node name in outputNodes[]
        else                                            // multi-valued case: result is a record of nodes
        {
            let& outputNodesRecord = outputNodesParam.AsRef<IConfigRecord>();
            for (let& nodeName : outputNodesRecord.GetMemberIds())
                outputNodes[nodeName] = outputNodesRecord[nodeName].AsPtr<ComputationNodeBase>();
            if (outputNodes.empty())
                InvalidArgument('CloneFunction: At least one output nodes must be specified.');
        }
        // treatment of parameters
        wstring parametersOption = config[L'parameters'];
        if      (parametersOption == L'learnable') parameterTreatment = ParameterTreatment::learnable;
        else if (parametersOption == L'constant')  parameterTreatment = ParameterTreatment::constant;
        else if (parametersOption == L'shared')    parameterTreatment = ParameterTreatment::shared;
        else InvalidArgument('CloneFunction: 'parameters' option must be 'learnable', 'constant', or 'shared'.');
    }
    
        virtual void /*ComputationNodeBase::*/ Validate(bool isFinalValidationPass) override
    {
        Base::Validate(isFinalValidationPass);
        InferMBLayoutFromInputsForStandardCase(isFinalValidationPass);
    }
    
    // MatrixPool -- class to support memory sharing
// Despite the gather general name of this class, it is specifically designed to support the memory sharing of ComputationNodes.
// Note: see #define SUPRESS_MEMSHARING below as for how to temporarily disable memory sharing altogether, for debugging
class MatrixPool
{
public:
    typedef const void* AliasNodePtr; // use as an identifier in place of ComputationNodeBasePtr to avoid include order issue
    }
    
      static bool isInitialized6() { return data6_.initialized; }
    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
    void DHTRoutingTable::showBuckets() const
{
  /*
    for(std::deque<std::shared_ptr<DHTBucket> >::const_iterator itr =
    buckets_.begin(); itr != buckets_.end(); ++itr) {
    cerr << 'prefix = ' << (*itr)->getPrefixLength() << ', '
    << 'nodes = ' << (*itr)->countNode() << endl;
    }
  */
}
    
    void DHTRoutingTableSerializer::serialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Saving DHT routing table to %s.', filename.c_str()));
  std::string filenameTemp = filename;
  filenameTemp += '__temp';
  BufferedFile fp(filenameTemp.c_str(), BufferedFile::WRITE);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to save DHT routing table to %s.', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
    #include 'common.h'
    
    class DHTTask {
public:
  virtual ~DHTTask() = default;
    }
    
    class DHTTaskFactoryImpl : public DHTTaskFactory {
private:
  std::shared_ptr<DHTNode> localNode_;
    }
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);
    
        // out_of_range.402
    try
    {
        // try to use the array index '-'
        json::const_reference ref = j.at('/array/-'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }