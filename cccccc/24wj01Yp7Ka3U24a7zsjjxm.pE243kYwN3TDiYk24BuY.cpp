
        
            virtual void CopyTo(ComputationNodeBasePtr nodeP, const std::wstring& newName, const CopyNodeFlags flags) const override
    {
        Base::CopyTo(nodeP, newName, flags);
        if (flags & CopyNodeFlags::copyNodeValue)
        {
            auto node = dynamic_pointer_cast<QuantizedTimesNode<ElemType>>(nodeP);
            node->m_bitShiftA = m_bitShiftA;
            node->m_bitShiftB = m_bitShiftB;
        }
    }
    
        // Implementation of Blockwise Model Update and Filtering (BMUF, a.k.a. block momentum) 
    // For detail, see the following paper
    // Kai Chen and Qiang Huo, 'Scalable training of deep learning machines by incremental block training 
    // with intra-block parallel optimization and blockwise model-update filtering', 
    // in International Conference on Acoustics, Speech and Signal Processing , March 2016, Shanghai, China. 
    
                    // Subtract it from the previous model
                auto blockGrad = std::make_shared<Matrix<ElemType>>(prevWeight, CPUDEVICE);
                *blockGrad -= currentWeight;                                              // matW becomes local block gradient (of one worker)
    
                nodePtr->AttachInputs(inputNodes);
        }
        else
        {
#if 1
            vector<ComputationNodeBasePtr> inputNodes;
            for (let& in : inputs)
            {
                ComputationNodeBase *p = (ComputationNodeBase *)in;
                inputNodes.push_back(p ? p->shared_from_this() : nullptr);
            }
    
            if (fstream.TryGetMarker(FileMarker::fileMarkerBeginSection, L'BOutputNodes'))
        {
            fstream >> num;
            for (size_t i = 0; i < num; i++)
            {
                fstream >> nodeName;
                AddToNodeGroup(L'output', GetNodeFromName(nodeName));
            }
            fstream.GetMarker(FileMarker::fileMarkerEndSection, L'EOutputNodes');
        }
    
    public:
    // TODO: move these to ComputationNetworkBuilder.cpp
    
        // helper to access to element(0,0) without having to type-cast
    virtual double Get00Element() const = 0;
    virtual MatrixBasePtr ValuePtr() const = 0; // for use in readers that pass the agnostic object around
    
        template<class ElemType>
    static size_t GetNumSubminibatchesNeeded(IDataReader* dataReader,
                                           size_t maxSamplesInRAM,
                                           size_t numSubminibatches,
                                           size_t tunedMBSize)
    {
        if (numSubminibatches > 1) // user-specified maximum number of samples
            return numSubminibatches;
    }
    
    struct AdamInfo
{
    double meanMomentum; //beta_1
    double varMomentum;  //beta_2
    double epsilon;
    }
    
    
    {    eval->Destroy();
}
    
        // Accumulators should contain mean values. We calculated them based on aggregated sums and number of samples.
    for (Matrix<ElemType>* acc : accumulatorValues)
        (*acc) /= (ElemType) gradHeader->numSamples;
    
        bool ContainsAccumulatedResult(const ComputationNodeBasePtr& node) const
    {
        // Node contains accumulated result if it can be found in the list of accumulation nodes specified in
        // CriterionAccumulator constructor.
        return std::find(m_accumulatorCriterionNodes.begin(), m_accumulatorCriterionNodes.end(), node) !=
               m_accumulatorCriterionNodes.end();
    }