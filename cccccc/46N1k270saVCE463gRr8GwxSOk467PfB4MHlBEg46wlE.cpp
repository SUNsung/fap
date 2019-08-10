
        
            const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    #endif /* SECP256K1_MODULE_RECOVERY_MAIN_H */

    
    #include <stdio.h>
#include 'leveldb/comparator.h'
#include 'leveldb/db.h'
#include 'leveldb/filter_policy.h'
#include 'leveldb/slice.h'
#include 'leveldb/table_builder.h'
#include 'util/coding.h'
#include 'util/logging.h'
    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    
    {  for (size_t i = 0; i < windows.size(); ++i) {
    // Only send close event to browser windows, since devtools windows will
    // be automatically closed.
    if (!windows[i]->is_devtools()) {
      // If there is no js object bound to the window, then just close.
      if (force || windows[i]->ShouldCloseWindow(quit))
        // we used to delete the Shell object here
        // but it should be deleted on native window destruction
        windows[i]->window()->Close();
    }
  }
  if (force) {
    // in a special force close case, since we're going to exit the
    // main loop soon, we should delete the shell object asap so the
    // render widget can be closed on the renderer side
    windows = Shell::windows();
    for (size_t i = 0; i < windows.size(); ++i) {
      if (!windows[i]->is_devtools())
        delete windows[i];
    }
  }
}
    
    
    {}  // namespace nwapi
    
    #include <string>
    
    v8::Handle<v8::Value> AllocateId(int routing_id);
    
       bool HasIcon(int command_id) override;
    
    void Menu::OnMenuClosed() {
  CHECK(!message_loop_quit_.is_null());
  message_loop_quit_.Run();
  
#if !defined(OS_WIN)
  // Ask PlatformEventSource to stop dispatching
  // events in this message loop
  // iteration. We want our menu's loop to return
  // before the next event.
  if (ui::PlatformEventSource::GetInstance())
    ui::PlatformEventSource::GetInstance()->StopCurrentEventStream();
#endif
}
    
    
    {  if (menu_)
    menu_->UpdateStates();
}
    
      private:
    bool WriteText(ClipboardData& data) {
      DCHECK(data.type == TYPE_TEXT);
      scw_->WriteText(base::UTF8ToUTF16(*(data.data)));
      return true;
    }
    
      void Backward(const OpContext &ctx,
                const std::vector<TBlob> &out_grad,
                const std::vector<TBlob> &in_data,
                const std::vector<TBlob> &out_data,
                const std::vector<OpReqType> &req,
                const std::vector<TBlob> &in_grad) {
    using namespace mshadow;
    using namespace mshadow::expr;
    CHECK(param_.p >= 0.0f && param_.p < 1.0f)
        << 'unsupported dropout value, should be 0 <= dropout < 1';
    }
    
      if (x_ptr && layer_index == 0) {
    (*x_memory)[layer_index].set_data_handle(x_ptr);
  } else {
    (*x_memory)[layer_index].set_data_handle((*user_src_layer_memory).get_data_handle());
  }
  (*y_memory)[layer_index].set_data_handle(y_ptr);
    
      // x * wx.T : [T * N, I] * [I, H]
  DType alpha = 1.0;
  DType beta = 0.0;
  linalg_gemm(x, wx, dgemmC1, alpha, beta, false, true);
  if (D == 2) {
    linalg_gemm(x, back_wx, dback_gemmC1, alpha, beta, false, true);
  }
    
      // setup arg_dtype_map
  std::unordered_map<std::string, int> arg_dtype_map;
  if (nullptr == provided_arg_dtypes) {  // use attr_dict
    for (const auto& arg_name : in_arg_names) {
      const auto it = attr_dict.find(arg_name);
      if (it == attr_dict.end() || !it->second.count('__dtype__')) {
        arg_dtype_map[arg_name] = mshadow::kFloat32;
      }
    }
  } else {  // use user input type_dict
    // create dtype map for in_args and aux_states
    arg_dtype_map.reserve(num_provided_arg_dtypes);
    for (mx_uint i = 0; i < num_provided_arg_dtypes; ++i) {
      arg_dtype_map[provided_arg_dtype_names[i]] = provided_arg_dtypes[i];
    }
  }
    
      std::vector<NDArray*> ndoutputs;
  ndoutputs.reserve(op->num_outputs());
  if (*outputs == nullptr) {
    *num_outputs = op->num_outputs();
    for (int i = 0; i < *num_outputs; ++i) ndoutputs.push_back(new NDArray());
  } else {
    CHECK_EQ(*num_outputs, op->num_outputs())
        << 'CachedOp expects ' << op->num_outputs() << ' outputs, but '
        << *num_outputs << ' was given.';
    for (int i = 0; i < *num_outputs; ++i) {
      ndoutputs.push_back(reinterpret_cast<NDArray*>((*outputs)[i]));
    }
  }
    
      std::vector<int64_t> index_products(static_cast<size_t>(ndim + 1));
    
    )code' ADD_FILELINE)
.set_num_inputs(1)
.set_num_outputs(1)
.set_attr<nnvm::FListInputNames>('FListInputNames',
                                 [](const NodeAttrs &attrs) {
                                   return std::vector<std::string>{ 'data' };
                                 })
.set_attr<nnvm::FListOutputNames>('FListOutputNames',
                                  [](const NodeAttrs &attrs) {
                                    return std::vector<std::string>{ 'output' };
                                  })
.set_attr_parser(ParamParser<IndexArrayParam>)
.set_attr<mxnet::FInferShape>('FInferShape', [](const nnvm::NodeAttrs &attrs,
                                                mxnet::ShapeVector *in_shape,
                                                mxnet::ShapeVector *out_shape) {
  const IndexArrayParam &param = nnvm::get<IndexArrayParam>(attrs.parsed);
  CHECK_EQ(in_shape->size(), 1U);
  CHECK_EQ(out_shape->size(), 1U);
  const mxnet::TShape &inshape = (*in_shape)[index_array_enum::kIn];
  if (!mxnet::ndim_is_known(inshape)) return false;
    }
    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
        public:
        BlockMomentumSGD(const MPIWrapperPtr& pMPI, size_t reportFreq, DEVICEID_TYPE devID, 
                        bool useNestrovMomentum, bool resetSGDM, 
                        double blockLearningRate, 
                        double blockMomentumAsTimeConstant, size_t syncPeriod)
            :IMASGD<ElemType>(pMPI, reportFreq, devID)
        {
            m_syncPeriodPerWorker = syncPeriod / pMPI->NumNodesInUse();
            m_blockMomentumAsTimeConstantPerWorker = blockMomentumAsTimeConstant / pMPI->NumNodesInUse(); 
            m_useNesterovMomentum = useNestrovMomentum;
            m_resetSGDMomentumAfterAggregation = resetSGDM; 
            m_blockLearningRate = blockLearningRate;
        }
    
        wstring nodeType = Microsoft::MSR::CNTK::ToFixedWStringFromMultiByte(p_nodeType);
    bool ret = false;
         if (EqualInsensitive(nodeType, OperationNameOf(AbsNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(AcosNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(AsinNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(AtanNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(AsinhNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(AtanhNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(AveragePoolingNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(BatchNormalizationNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationName2Of(CastNode))) ret = true;
#ifdef COMING_SOON
    else if (EqualInsensitive(nodeType, OperationNameOf(CRFNode), L'CRF')) ret = true;
#endif
    else if (EqualInsensitive(nodeType, OperationNameOf(ClassBasedCrossEntropyWithSoftmaxNode), L'CBCEWithSM')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ClassificationErrorNode), L'ErrorPrediction')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(EditDistanceErrorNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(StopGradientNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(EqualNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(GreaterEqualNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(GreaterNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ForwardBackwardNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LabelsToGraphNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LessEqualNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LessNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(NotEqualNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ClipNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ConvolutionNode), L'Convolve')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(CropNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(PassNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(PoolingNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(CosDistanceNode), L'CosDist')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(CosDistanceWithNegativeSamplesNode), L'CosWithNegSamples')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(CoshNode), L'Cosh')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(CosineNode), L'Cos')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(CrossEntropyNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(CrossEntropyWithSoftmaxNode), L'CEWithSM')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(DiagTimesNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(DiagonalNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(DropoutNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(DummyCriterionNode), L'DummyCriterion')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ElementTimesNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ExpNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(FloorNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(FutureValueNode))) ret = true;
#ifdef COMING_SOON
    else if (EqualInsensitive(nodeType, OperationNameOf(GMMLogLikelihoodNode), L'GMMLL')) ret = true;
#endif
    else if (EqualInsensitive(nodeType, OperationNameOf(HardmaxNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(IfNode), L'If')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(InputValue), L'Input')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(InvStdDevNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(KhatriRaoProductNode), L'ColumnwiseCrossProduct')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LearnableParameter), L'Parameter')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LogNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LogPlusNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LogSoftmaxNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LogisticNode), L'Logistic')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LookupTableNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(MatrixL1RegNode), L'L1Reg')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(MatrixL2RegNode), L'L2Reg')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(MaxPoolingNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(MaxUnpoolingNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(MeanNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(MinusNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(NegateNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(PastValueNode), L'Delay')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(PerDimMeanVarDeNormalizationNode), L'PerDimMVDeNorm')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(PerDimMeanVarNormalizationNode), L'PerDimMVNorm')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(PlusNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ReciprocalNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ReconcileDynamicAxisNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(RectifiedLinearNode), L'ReLU')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ReshapeNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(ROIPoolingNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(RowRepeatNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(RowStackNode))) ret = true;
#ifdef COMING_SOON
    else if (EqualInsensitive(nodeType, OperationNameOf(SequenceDecoderNode), L'SEWithSM')) ret = true;
#endif
    else if (EqualInsensitive(nodeType, OperationNameOf(SequenceWithSoftmaxNode), L'SEWithSM')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(LatticeSequenceWithSoftmaxNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(SigmoidNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(SinhNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(SinNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(SoftmaxNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(SparseInputValue), L'SparseInput')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(SqrtNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(SquareErrorNode), L'SE')) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(SumColumnElementsNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(SumElementsNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(TanNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(TanhNode))) ret = true;
    else if (EqualInsensitive(nodeType, OperationNameOf(TimesNode))) ret = true;
    //else if (EqualInsensitive(nodeType, OperationNameOf(TransposeDimensionsNode))) ret = true; // not supported from NDL, use Transpose()
    else if (EqualInsensitive(nodeType, OperationNameOf(TransposeTimesNode))) ret = true;
    // legacy names:
    else if (EqualInsensitive(nodeType, L'ColumnElementTimes')) ret = true;
    else if (EqualInsensitive(nodeType, L'Constant', L'Const')) ret = true;
    else if (EqualInsensitive(nodeType, L'ImageInput', L'Image')) ret = true;
    else if (EqualInsensitive(nodeType, L'ImageParameter')) ret = true;
    else if (EqualInsensitive(nodeType, L'RowElementTimes')) ret = true;
    else if (EqualInsensitive(nodeType, L'RowSlice')) ret = true;
    else if (EqualInsensitive(nodeType, L'Scale')) ret = true;
    else if (EqualInsensitive(nodeType, L'SparseImageInput', L'SparseImage')) ret = true;
    else if (EqualInsensitive(nodeType, L'Transpose')) ret = true;
    
    template <typename ElemType>
void DoBatchNormalizationStat(const ConfigParameters& config)
{
    ConfigParameters readerConfig(config(L'reader'));
    readerConfig.Insert('traceLevel', config(L'traceLevel', '0'));
    }
    
    #ifndef CPUONLY
    ConfigValue val = config('deviceId', 'auto');
    if (!EqualCI(val, 'cpu') && !EqualCI(val, 'auto'))
    {
        if (static_cast<int>(val) >= 0) // gpu (id >= 0)
        {
            CheckSupportForGpu(static_cast<int>(val)); // throws if gpu is not supported
        }
    }
#endif
    
        // ////////////////////////////////////////////////////////////////////////
    //    step 1.        get all the arcs in the network
    // ////////////////////////////////////////////////////////////////////////
    unordered_set<ComputationNodeBasePtr> visited;
    list<ComputationArc> arcs;
    
    // =======================================================================
// ComputationNodeBase -- abstract base class for all computation nodes
// =======================================================================
    
    template<typename ElemType>
template<template<typename> class ValueContainer>
void CNTKEvalExtended<ElemType>::ForwardPassT(const std::vector<ValueBuffer<ElemType, ValueContainer> >& inputs, std::vector<ValueBuffer<ElemType, ValueContainer> >& outputs, bool resetRNN)
{
    if (!m_started)
        RuntimeError('ForwardPass() called before StartForwardEvaluation()');
    }
    
        // SGDParams(SGDParams&&) = default; // (does not compile in VS 2013; not critical)
    
    template <typename ElemType>
void AggregateAccumulatorValuesAndUpdateEpochEvaluation(
    std::shared_ptr<ComputationNetwork> net,
    std::set<std::shared_ptr<ComputationNodeBase>> evalNodesWhichAccumulateResult,
    std::shared_ptr<DistGradHeader> gradHeader,
    std::shared_ptr<MPIWrapper> mpi,
    std::vector<EpochCriterion>& epochEvalErrors,
    const std::vector<ComputationNodeBasePtr>& evaluationNodes,
    CriterionAccumulatorBase& localEpochEvalErrors,
    std::function<bool(ComputationNodeBasePtr)> containsAccumulatedResult,
    size_t packThresholdSizeInBytes = DEFAULT_PACK_THRESHOLD_SIZE_IN_BYTES)
{
    // Each node contains accumulated values for part of the data set, we have to aggregate accumulated values.
    AggregateAccumulatorValuesAndUpdateEvaluation<ElemType>(net, evalNodesWhichAccumulateResult, gradHeader, mpi, packThresholdSizeInBytes);
    }