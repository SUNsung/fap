
        
            btree_slice_t(cache_t *cache,
                  perfmon_collection_t *parent,
                  const std::string &identifier,
                  index_type_t index_type);
    
            secondary_index_slices.insert(
                std::make_pair(sindex.id,
                               make_scoped<btree_slice_t>(cache.get(),
                                                          &perfmon_collection,
                                                          name.name,
                                                          index_type_t::SECONDARY)));
    
    public:
    // This lock is used to pause backfills while secondary indexes are being
    // post constructed. Secondary index post construction gets in line for a write
    // lock on this and stays there for as long as it's running. It does not
    // actually wait for the write lock, so multiple secondary indexes can be
    // post constructed at the same time.
    // A read lock is acquired before a backfill chunk is being processed.
    rwlock_t backfill_postcon_lock;
    
    // Asserts that val1 is less than, or almost equal to, val2.  Fails
// otherwise.  In particular, it fails if either val1 or val2 is NaN.
GTEST_API_ AssertionResult FloatLE(const char* expr1, const char* expr2,
                                   float val1, float val2);
GTEST_API_ AssertionResult DoubleLE(const char* expr1, const char* expr2,
                                    double val1, double val2);
    
    // This macro is for implementing ASSERT_DEATH*, EXPECT_DEATH*,
// ASSERT_EXIT*, and EXPECT_EXIT*.
# define GTEST_DEATH_TEST_(statement, predicate, regex, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    const ::testing::internal::RE& gtest_regex = (regex); \
    ::testing::internal::DeathTest* gtest_dt; \
    if (!::testing::internal::DeathTest::Create(#statement, &gtest_regex, \
        __FILE__, __LINE__, &gtest_dt)) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__); \
    } \
    if (gtest_dt != NULL) { \
      ::testing::internal::scoped_ptr< ::testing::internal::DeathTest> \
          gtest_dt_ptr(gtest_dt); \
      switch (gtest_dt->AssumeRole()) { \
        case ::testing::internal::DeathTest::OVERSEE_TEST: \
          if (!gtest_dt->Passed(predicate(gtest_dt->Wait()))) { \
            goto GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__); \
          } \
          break; \
        case ::testing::internal::DeathTest::EXECUTE_TEST: { \
          ::testing::internal::DeathTest::ReturnSentinel \
              gtest_sentinel(gtest_dt); \
          GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, gtest_dt); \
          gtest_dt->Abort(::testing::internal::DeathTest::TEST_DID_NOT_DIE); \
          break; \
        } \
        default: \
          break; \
      } \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__): \
      fail(::testing::internal::DeathTest::LastMessage())
// The symbol 'fail' here expands to something into which a message
// can be streamed.
    
    template <GTEST_3_TYPENAMES_(T)>
inline GTEST_3_TUPLE_(T) make_tuple(const T0& f0, const T1& f1, const T2& f2) {
  return GTEST_3_TUPLE_(T)(f0, f1, f2);
}
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32>
struct Templates32 {
  typedef TemplateSel<T1> Head;
  typedef Templates31<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32> Tail;
};
    
    
]]
    
    void NcclComm::Sync()
{
    cudaStreamSynchronize(m_stream) || 'NcclComm: cudaStreamSynchronize failed';
}
    
        try
    {        
        if (argc <= 1)
        {
            ::CNTK::Internal::PrintBuiltInfo(); // print build info directly in case that user provides zero argument (convenient for checking build type)
            LOGPRINTF(stderr, 'No command-line argument given.\n');
            PrintUsageInfo();
            fflush(stderr);
            return EXIT_FAILURE;
        }
    }
    
        ComputationNodeBasePtr CopyNode(const ComputationNetwork& fromNet, const std::wstring fromName, std::wstring toName, const CopyNodeFlags flags);
    void CopySubTree(const ComputationNetwork& fromNet, const std::wstring fromName, std::wstring toNamePrefix, const CopyNodeFlags flags);
    void CopyInputs(const std::wstring fromName, std::wstring toName);
    void RenameNode(const std::wstring& nodeNameOrig, const std::wstring& nodeNameNew);
    void RenameNode(ComputationNodeBasePtr node, const std::wstring& newNodeName);
    void DeleteNode(const std::wstring& nodeName);
    void ReplaceNode(wstring nodeName, ComputationNodeBasePtr newNode);
    void InsertNode(wstring nodeName, ComputationNodeBasePtr newNode, const std::set<std::wstring>& newNodeTags);
    void ReplaceLeafNode(wstring oldNodeName, ComputationNodeBasePtr newNode);
    void ReplaceFinalCriterionNode(wstring oldNodeName, ComputationNodeBasePtr newNode);
    void AddFeatureNode(ComputationNodeBasePtr featureNode);
    //ComputationNodeBasePtr RemoveFeatureNode(ComputationNodeBasePtr featureNode);
    void SetLearnableNodesBelowLearningRateMultiplier(const float learningRateMultiplier, const ComputationNodeBasePtr& rootNode = nullptr);
    
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
    
    // Evaluate - Evalute using the model with the given inputs and outputs
// inputs - map from node name to input vector
// outputs - map from node name to output vector, outputs vectors need to be preallocated by caller, sizing will happen during evaluation
template <typename ElemType>
void CNTKEval<ElemType>::Evaluate(std::map<std::wstring, std::vector<ElemType>*>& inputs, std::map<std::wstring, std::vector<ElemType>*>& outputs)
{
    size_t minibatchSize = this->m_config(L'minibatchSize', (size_t) 10240);
    size_t rightSplice = this->m_config(L'rightSplice', (size_t) 0);
    // get the evaluation names from the output string
    vector<wstring> outNodeNames;
    }
    
        // helper function to initialize and check BlockMomentumSGD related parameters
    void InitializeAndCheckBlockMomentumSGDParameters();
    // only true when the user specify LearningRatePerMB and the number of parallel utterances in Reader > 1
    // bool m_needToNormalizeLRByParallUtterance;          // TODO: should go away
    // bool m_needToNormalizeMomentumByParallUtterance;
    
    
    {        if (showSyncPerfStats)
        {
            aggregationTimer.Stop();
            double gradientAggregationTime = aggregationTimer.ElapsedSeconds();
            fprintf(stderr, 'Actual gradient aggregation time: %.6g\n', gradientAggregationTime);
        }
    }
    
    //
// Hide
//
Hide * Hide::create() 
{
    Hide *ret = new (std::nothrow) Hide();
    }
    
    
    {
    {
    {            if (action->getTag() == (int)tag && action->getOriginalTarget() == target)
            {
                removeActionAtIndex(i, element);
                break;
            }
        }
    }
}
    
    
NS_CC_END

    
     * Each object group is created using a TMXObjectGroup which is a subclass of MutableArray.
 * You can obtain the object groups at runtime by:
 * - map->getObjectGroup(name_of_the_object_group);