
        
        
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    #include 'caffe2/core/context.h'
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
    OPERATOR_SCHEMA(GatherRangesToDense)
    .NumInputs(2, 3)
    .NumOutputs(1, INT_MAX)
    .SetDoc(R'DOC(
Given DATA tensor of rank 1, and RANGES tensor of rank 3, gather values
corresponding to each range into a separate output tensor. If the optional input
KEY tensor is also given, the output will be sorted by KEY for each example.
    
            // Return true if the update should use classic momentum and 
        // false if the unit-gain momentum should be used instead.
        bool UseUnitGainMomentum() const
        {
            return m_unitGain;
        }
    
    
    {            sequenceLengths[i] = currentSequenceDataShape.SubShape(fullyDefinedSampleShape.Rank()).TotalSize();
            maxSequenceLength = std::max(maxSequenceLength, sequenceLengths[i]);
        }
    
            static NDShape GetUnpackedShape(const NDShape& sampleShape, const std::vector<Axis>& sampleDynamicAxes, const std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>& packedDataLayout)
        {
            // Determine unpacked shape
            auto unpackedShape = sampleShape;
            if (packedDataLayout)
            {
                if (sampleDynamicAxes.empty())
                    LogicError('A PackedValue object that has a layout must have at least one dynamic axis.');
    }
    }
    
    
    {
    {
    {}}}

    
    
    {
    {
    {}}}

    
            // also 'edit' all nodes that have updated *inputs*
        // All nodes that take inputs that have been edited must have their inputs updated.
        // Since we do not update the model in-place, we must also create replacements for these.
        // That is achieved by recursively including all parents of edits into the set of edits.
        let parents = net.CreateParentsMap();
        deque<ComputationNodeBasePtr> workList; // work list for recursion
        for (let& replacement : replacements)
            workList.push_back(replacement.first);
        while (!workList.empty())
        {
            let node = workList.front();
            workList.pop_front();
            // loop over the node's parents
            for (let& parent : parents.find(node)->second)
            {
                // 'edit' (clone) the parent if not yet
                if (replacements.find(parent) != replacements.end())
                    continue; // already a known replacement
                // we must 'edit' the parent since it depends on a replaced input
                replacements[parent] = parent->Duplicate();
                // and put this parent into the workList, so that we will gets its parent in turn, etc.
                workList.push_back(parent);
#if 0 //def _DEBUG
                fprintf(stderr, '\t%ls = %ls() --> relink %ls\n', parent->NodeName().c_str(), parent->OperationName().c_str(), replacements[parent]->NodeName().c_str());
#endif
            }
        }
        if (TraceLevel() > 0)
            fprintf(stderr, 'Edit: %d out of %d nodes were either edited or need to be relinked.\n', (int)replacements.size(), (int)net.GetTotalNumberOfNodes());
        // Now the keys of replacements[] define the set of all nodes that must be relinked.
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        auto sliceInputValue  = InputRef(0).ValueFor(fr);
        auto sliceOutputValue =           ValueFor(fr); // row vector
    }
    
        /** Returns a clone of action.
     *
     * @return A clone action.
     */
    virtual Action* clone() const
    {
        CC_ASSERT(0);
        return nullptr;
    }
    
    
    {    return ret;
}
    
        // Overrides
    void startWithTarget(Node *target) override;
    void update(float dt) override;
    ActionTween* reverse() const override;
    ActionTween *clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    /** 
     * @brief Initializes the action with the property name (key), and the from and to parameters.
     * @param duration The duration of the ActionTween. It's a value in seconds.
     * @param key The key of property which should be updated.
     * @param from The value of the specified property when the action begin.
     * @param to The value of the specified property when the action end.
     * @return If the initialization success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, const std::string& key, float from, float to);
    
    /**
 * @addtogroup _2d
 * @{
 */
    }