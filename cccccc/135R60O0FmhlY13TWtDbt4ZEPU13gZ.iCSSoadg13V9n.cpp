
        
            mpi->Bcast(&ncclId, NCCL_UNIQUE_ID_BYTES, MPI_CHAR, 0);
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::Logistic(const ComputationNodePtr a, const ComputationNodePtr b, const ComputationNodePtr c, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<LogisticNode<ElemType>>(net.GetDeviceId(), nodeName), { a, b, c });
}
    
                    fstream.GetMarker(FileMarker::fileMarkerBeginSection, L'BSyncPeriodInSamples');
                fstream >> m_syncPeriodPerWorker;
                fstream.GetMarker(FileMarker::fileMarkerEndSection, L'ESyncPeriodInSamples');
    
    
    {            if (cnNodeType == OperationNameOf(PastValueNode))
                nodePtr = builder.PastValue(NULL, defaultHiddenActivity, rows, timeStep, name);
            else
                nodePtr = builder.FutureValue(NULL, defaultHiddenActivity, rows, timeStep, name);
        }
    }
    else if (cnNodeType == OperationNameOf(ConvolutionNode) ||
             cnNodeType == OperationNameOf(PoolingNode) ||
             cnNodeType == OperationNameOf(MaxUnpoolingNode))
    {
        if (parameter.size() != 2 && parameter.size() != 3 && parameter.size() != 7)
        {
            if (cnNodeType == OperationNameOf(ConvolutionNode))
            {
                RuntimeError('%ls: unexpected parameter count. %ls supports 2 modes: \n'
                             '1. 2D convolution which takes 7 fixed parameters [weightNodeName, inputValueNodeName, kernelWidth, kernelHeight, outputChannels, horizontalSubsample, verticalSubsample] \n'
                             'and two optional parameters [zeroPadding = [false|yourvalue], maxTempMemSizeInSamples = [0|yourvalue], imageLayout = \'HWC\'|\'cudnn\']. \n'
                             '2. ND convolution which takes 3 fixed parameters [weightNodeName, inputValueNodeName, kernelShape] and \n'
                             '10 optional parameters [mapCount = [0|yourvalue], stride = [1|yourvalue], sharing = [true|yourvalue], autoPadding = [true|yourvalue], lowerPad = [0|yourvalue], upperPad = [0|yourvalue], bool transpose = [false|yourvalue], maxTempMemSizeInSamples = [0|yourvalue], imageLayout = \'cudnn\'|\'HWC\']. \n'
                             'For ND convolution, parameters kernelShape, mapCount, stride, sharing, autoPadding, lowerPad, upperPad can be arrays, e.g. kernelShape={5, 5, 3}',
                             cnNodeType.c_str(), cnNodeType.c_str());
            }
            else if (cnNodeType == OperationNameOf(PoolingNode))
            {
                RuntimeError('%ls: unexpected parameter count. %ls 3 fixed parameters [inputValueNodeName, poolKind, kernelShape] and \n'
                             '5 optional parameters stride = [1|yourvalue], autoPadding = [true|yourvalue], lowerPad = [0|yourvalue], upperPad = [0|yourvalue], imageLayout = \'cudnn\']. \n'
                             'Parameters kernelShape, stride, autoPadding, lowerPad, upperPad can be arrays, e.g. kernelShape={5, 5, 3}',
                             cnNodeType.c_str(), cnNodeType.c_str());
            }
            else if (cnNodeType == OperationNameOf(MaxUnpoolingNode))
            {
                RuntimeError('%ls: unexpected parameter count. %ls 3 fixed parameters [inputValueNodeName, mask, kernelShape] and \n'
                             '5 optional parameters stride = [1|yourvalue], autoPadding = [true|yourvalue], lowerPad = [0|yourvalue], upperPad = [0|yourvalue], imageLayout = \'cudnn\']. \n'
                             'Parameters kernelShape, stride, autoPadding, lowerPad, upperPad can be arrays, e.g. kernelShape={5, 5, 3}',
                             cnNodeType.c_str(), cnNodeType.c_str());
            }
        }
    
            // load and then execute
        if (sections.Exists('run'))
        {
            auto config = ConfigArray(sections('run'));
            for (int i = 0; i < config.size(); ++i)
            {
                Parse(sections(config[i]));
            }
            loadOrRunFound = true;
        }
    
    function<ComputationNetworkPtr(DEVICEID_TYPE)> GetCreateNetworkFn(const ScriptableObjects::IConfigRecord& config)
{
    // createNetwork() is a BrainScript lambda that creates the model
    // We create a C++ wrapper around it, which we then pass to Train().
    auto createNetworkConfigLambda = config[L'createNetwork'].AsPtr<ScriptableObjects::ConfigLambda>();
    return [createNetworkConfigLambda](DEVICEID_TYPE /*deviceId*/)
    {
        // execute the lambda
        vector<ScriptableObjects::ConfigValuePtr> args; // this lambda has no arguments
        ScriptableObjects::ConfigLambda::NamedParams namedArgs;
        let netValue = createNetworkConfigLambda->Apply(move(args), move(namedArgs), L'BuildNetworkFromDescription');
        // typecast the result to the desired type
        return netValue.AsPtr<ComputationNetwork>();
    };
}
    
            ValueContainer<ElemType>& vec = outputs[i2].m_buffer;
    
        public:
        MASGDPerfStats(size_t myRank, size_t numWorkers):
            m_numWorkers(numWorkers), m_myRank(myRank), m_numSyncPerformedInCurrentEpoch(0), m_reportFrequency(1), 
            m_totalSamplesProcessedSinceLastReport(0), m_localSamplesProcessedSinceLastReport(0)
        {
            m_Timer.Start();
        }
    
        // change element with key 'the bad'
    object.at('the bad') = 'il cattivo';
    
        // output changed array
    std::cout << array << '\n';
    
        // create an object from std::multimap
    std::multimap<std::string, bool> c_mmap
    {
        {'one', true}, {'two', true}, {'three', false}, {'three', true}
    };
    json j_mmap(c_mmap); // only one entry for key 'three' is used