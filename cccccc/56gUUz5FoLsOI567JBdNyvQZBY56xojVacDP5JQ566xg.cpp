
        
        //-----------------------------------------------------------------------------
//
//	class FloatAttribute
//
//-----------------------------------------------------------------------------
    
    #ifndef IMFGENERICOUTPUTFILE_H_
#define IMFGENERICOUTPUTFILE_H_
    
    		    _data->cachedBuffer->insert
			(k.name(),
			 Slice (UINT,
				(char *)(new unsigned int[tileRowSize] - 
					_data->offset),
				sizeof (unsigned int),
				sizeof (unsigned int) *
				    _data->tFile->levelWidth(0),
				1, 1,
				s.fillValue,
				false, true));
		    break;
    
    
struct InputPartData
{
        Header                  header;
        int                     numThreads;
        int                     partNumber;
        int                     version;
        InputStreamMutex*       mutex;
        std::vector<Int64>      chunkOffsets;
        bool                    completed;
    }
    
    template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6,
    typename Generator7, typename Generator8, typename Generator9,
    typename Generator10>
internal::CartesianProductHolder10<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6, Generator7, Generator8, Generator9,
    Generator10> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6,
        const Generator7& g7, const Generator8& g8, const Generator9& g9,
        const Generator10& g10) {
  return internal::CartesianProductHolder10<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6, Generator7, Generator8, Generator9,
      Generator10>(
      g1, g2, g3, g4, g5, g6, g7, g8, g9, g10);
}
# endif  // GTEST_HAS_COMBINE
    
    #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_

    
      tuple(const tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_) {}
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> ComputationNetworkBuilder<ElemType>::LookupTable(const ComputationNodePtr dictionary, const ComputationNodePtr input, const std::wstring nodeName)
{
    return net.AddNodeToNetAndAttachInputs(New<LookupTableNode<ElemType>>(net.GetDeviceId(), nodeName), { dictionary, input });
}
    
                    std::size_t firstDotPos = name.find_first_of('.');
                if (firstDotPos == std::string::npos)
                {
                    LogicError('nodeParam of type \'ndlTypeDotParameter\' doesn't have a dot in its name: %s', name.c_str());
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
    
        // FindSymbol - Find a symbol to the symbol table
    // symbol - symbol to find
    // searchForDotNames - search for NDL symbols traversing call heirarchy
    // returns - node this symbol references
    NDLNode<ElemType>* FindSymbol(const std::string& symbol, bool searchForDotNames = true)
    {
        auto found = m_symbols.find(symbol); // search symbol directly first
        if (found != m_symbols.end())
            return found->second;
    }
    
            // need to have [input_dim x output_dim] matrix
        // e.g., [200 x 10000], where 10000 is the vocabulary size
        // this is for speed-up issue as per word matrix can be simply obtained using column slice
        w = builder.CreateLearnableParameter(msra::strfun::wstrprintf(L'W%d', numHiddenLayers), m_layerSizes[numHiddenLayers], m_layerSizes[numHiddenLayers + 1]);
        m_net->RandomInitLearnableParameters(w, m_uniformInit, randomSeed++, m_initValueScale);
    
        intargvector m_directConnect; // connect those layers directly in a sequence order
    // for example: 1:2:3 will connect 1 to 2 and then 2 to 3
    
    
    {    // Same as above, but all variables are resolved.  If a parameter is set multiple times (eg, set in config, overridden at command line),
    // All of these assignments will appear, even though only the last assignment matters.
        fprintf(stderr, '\nConfiguration After Variable Resolution:\n\n');
        LOGPRINTF(stderr, '%s\n', config.ResolveVariables(rawConfigString).c_str());
    }
#endif
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
        // Attempts to compute the error signal for the whole utterance, which will
    // be fed to the neural network as features. Currently it is a workaround
    // for the two-forward-pass sequence and ctc training, which allows
    // processing more utterances at the same time. Only used in Kaldi2Reader.
    // TODO: move the two-forward-pass support out of the reader.
    void AttemptUtteranceDerivativeFeatures(ComputationNetworkPtr net,
                                            IDataReader* trainSetDataReader,
                                            const std::vector<ComputationNodeBasePtr>& featureNodes,
                                            StreamMinibatchInputs* inputMatrices);
    
    template <>
std::shared_ptr<IDistGradAggregator<half>> GetSimpleDistGradAggregator<half>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce)
{
    if (Globals::UseV2Aggregator())
        return std::make_shared<V2SimpleDistGradAggregator<half>>(
            mpi,
            useAsyncAggregation,
            deviceId,
            syncStatsTrace,
            ::CNTK::MPICommunicator(packThresholdSizeInBytes, useFP16AllReduce));
    else
        RuntimeError('SGD - half not supported when useV2Aggregator is false!');
}
    
    BOOST_AUTO_TEST_CASE(EvalDenseTimesTest)
{
    std::string modelDefinition =
        'deviceId = -1 \n'
        'precision = \'float\' \n'
        'traceLevel = 1 \n'
        'run=NDLNetworkBuilder \n'
        'NDLNetworkBuilder=[ \n'
        'i1 = Input(4) \n'
        'o1 = Times(Constant(2, rows=1, cols=4), i1, tag=\'output\') \n'
        'FeatureNodes = (i1) \n'
        '] \n';
    }
    
    template <typename ElemType>
void UpdateEpochEvaluationForAccumulatedResult(
    std::vector<EpochCriterion>& epochEvalErrors,
    const std::vector<ComputationNodeBasePtr>& evaluationNodes,
    CriterionAccumulatorBase& localEpochEvalErrors,
    std::function<bool(ComputationNodeBasePtr)> containsAccumulatedResult
    )
{
    for (size_t i = 0; i < epochEvalErrors.size(); i++)
    {
        if (containsAccumulatedResult(evaluationNodes[i]))
        {
            // We don't accumulate error in epoch criterion as this node has already accumulated error for all
            // samples that passed through network in forward pass.
            // Since accumulators already average error, we use 1 as number of samples to avoid averaging again.
            localEpochEvalErrors.Assign(i, 1);
            epochEvalErrors[i] = localEpochEvalErrors.GetCriterion(i);
        }
    }
}
    
      virtual TStatementPtr extractStatement(ScannerToken *stmt) = 0;
    
    #ifndef incl_HPHP_USER_ATTRIBUTES_H_
#define incl_HPHP_USER_ATTRIBUTES_H_
    
    template<class V, bool case_sensitive, class ExtraType = int32_t>
struct FixedStringMap {
  explicit FixedStringMap(int num) : m_table(nullptr) { init(num); }
  FixedStringMap() : m_mask(0), m_table(nullptr) {}
  ~FixedStringMap() { clear(); }
    }
    
    /**
 * Trying to get a node's value, but it's not in the specified type.
 */
struct HdfDataTypeException : HdfException {
  HdfDataTypeException(const Hdf *hdf, const char *type, const char *value)
    : HdfException('HDF node [%s]'s value \'%s\' is not %s',
                   hdf->getFullPath().c_str(), value, type) {
  }
  EXCEPTION_COMMON_IMPL(HdfDataTypeException);
};
    
      if (k < 0x80) {
    buf[0] = k;
    retval = 1;
  } else if (k < 0x800) {
    buf[0] = 0xc0 | (k >> 6);
    buf[1] = 0x80 | (k & 0x3f);
    retval = 2;
  } else if (k < 0x10000) {
    buf[0] = 0xe0 | (k >> 12);
    buf[1] = 0x80 | ((k >> 6) & 0x3f);
    buf[2] = 0x80 | (k & 0x3f);
    retval = 3;
  } else if (k < 0x200000) {
    buf[0] = 0xf0 | (k >> 18);
    buf[1] = 0x80 | ((k >> 12) & 0x3f);
    buf[2] = 0x80 | ((k >> 6) & 0x3f);
    buf[3] = 0x80 | (k & 0x3f);
    retval = 4;
  } else if (k < 0x4000000) {
    buf[0] = 0xf8 | (k >> 24);
    buf[1] = 0x80 | ((k >> 18) & 0x3f);
    buf[2] = 0x80 | ((k >> 12) & 0x3f);
    buf[3] = 0x80 | ((k >> 6) & 0x3f);
    buf[4] = 0x80 | (k & 0x3f);
    retval = 5;
  } else {
    buf[0] = 0xfc | (k >> 30);
    buf[1] = 0x80 | ((k >> 24) & 0x3f);
    buf[2] = 0x80 | ((k >> 18) & 0x3f);
    buf[3] = 0x80 | ((k >> 12) & 0x3f);
    buf[4] = 0x80 | ((k >> 6) & 0x3f);
    buf[5] = 0x80 | (k & 0x3f);
    retval = 6;
  }
  buf[retval] = '\0';
    
    void RangeState::reserve() {
  auto const base = reinterpret_cast<void*>(low());
  auto const size = capacity();
  auto ret = mmap(base, size, PROT_NONE,
                  MAP_ANONYMOUS | MAP_PRIVATE | MAP_NORESERVE, -1, 0);
  if (ret != base) {
    char msg[128];
    if (ret == MAP_FAILED) {
      std::snprintf(msg, sizeof(msg),
                    'failed to reserve address range 0x%p to 0x%' PRIuPTR
                    ', errno = %d',
                    base, high(), errno);
    } else {
      munmap(ret, capacity());
      std::snprintf(msg, sizeof(msg),
                    'failed to reserve address range 0x%p to 0x%' PRIuPTR
                    ', got 0x%p instead',
                    base, high(), ret);
    }
    throw std::runtime_error{msg};
  }
}
    
    #include 'hphp/util/address-range.h'
#include 'hphp/util/alloc-defs.h'
#include 'hphp/util/alloc.h'
#include <utility>
    
    namespace {
bool Enabled;
int32_t UpdateFreq;
    }
    
    struct ProxygenTransportRepostTest : ProxygenTransportTest {
  // Initiates a simple GET request to the transport
  void SetUp() override {
  }
    }
    
    
    {    return data;
  };
    
    bool check(const php::Func& f) {
  assert(checkParams(f));
  assert(checkName(f.name));
  for (DEBUG_ONLY auto& block : f.blocks) assert(checkBlock(f, *block));
    }
    
    
  /////////////////////////////////////////////////////////////////////////////
  // Opcode, marker, and type.
    
    
    {  emit operationNameChanged();
  emit connectionNameChanged();
  emit dbIndexChanged();
  emit keyPatternChanged();
  emit operationProgressChanged();
  emit openDialog(m_operation->getTypeName());
}

    
    
    {
    { protected:
  QSharedPointer<RedisClient::Connection> m_connection;
  int m_dbIndex;
  QRegExp m_keyPattern;
  State m_currentState;
  int m_progress;
  QStringList m_affectedKeys;
  QVariantMap m_metadata;
  OperationCallback m_callback;
  QSharedPointer<AsyncFuture::Combinator> m_combinator;
  QStringList m_errors;
  QMutex m_errorsMutex;
  QMutex m_processedKeysMutex;
};
}  // namespace BulkOperations

    
    
    {          m_combinator->combine(future);
        }
    
    class QmlUtils;
class Events;
class ConnectionsManager;
class Updater;
class KeyFactory;
class TabViewModel;
class QPython;
namespace ValueEditor {
class TabsModel;
}
namespace ValueEditor {
class ExternalFormattersManager;
class EmbeddedFormattersManager;
}  // namespace ValueEditor
namespace BulkOperations {
class Manager;
}
namespace Console {
class AutocompleteModel;
}
    
    void ValueEditor::EmbeddedFormattersManager::loadFormatters(QJSValue callback) {
  m_python->importModule_sync('formatters');
  m_python->call('formatters.get_formatters_list', QVariantList(), callback);
}
    
      QVariantMap formatter = m_formattersData[m_mapping[formatterName]];
    
    QVariantMap ConnectionsTree::TreeItem::metadata() const {
  QVariantMap meta;
  meta['name'] = getDisplayName();
  meta['full_name'] = getName();
  meta['type'] = type();
  meta['locked'] = isLocked();
  meta['state'] = isEnabled();
  return meta;
}