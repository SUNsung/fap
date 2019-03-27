
        
            template <typename ElementType>
    /*static*/ ValuePtr Value::CreateSequence(const NDShape& sampleShape, const std::vector<ElementType>& sequenceData, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly /*= false */)
    {
        auto shapeSize = sampleShape.TotalSize();
        if (sequenceData.size() % shapeSize != 0)
            InvalidArgument('The number of elements (%zu) in the sequence data must be a multiple of the size (%zu) of the sample shape '%S'', 
                            sequenceData.size(), shapeSize, sampleShape.AsString().c_str());
    }
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
        static void setupTimeout(int seconds)
    {
        struct sigaction action = {};
        action.sa_handler = &CrossProcessMutex::noOpAlarmHandler;
        sigaction(SIGALRM, &action, NULL);
        alarm(seconds);
    }
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
    #include <string>
    
        virtual void BackpropToNonLooping(size_t /*inputIndex*/) override
    {
        LogicError('%ls operation is used for evaluation only.', OperationName().c_str());
    }
    
    template <class ElemType>
EpochAccumulatorNode<ElemType>::EpochAccumulatorNode(const Microsoft::MSR::ScriptableObjects::IConfigRecordPtr configp)
    : EpochAccumulatorNode(configp->Get(L'deviceId'), L'<placeholder>')
{
    AttachInputsFromConfig(configp, this->GetExpectedNumInputs());
}
    
    private: 
    bool CheckOverlap(pair<int, int>occ, vector<pair<int, int>>&occVec)
    {
        bool bRet = false;
        for (auto& o : occVec)
        {
            if (occ.first <= o.second && occ.second >= o.first)
            {
                bRet = true;
                break;
            }
        }
//#define SUPRESS_MEMSHARING // #define this to disable memory sharing by always return true 
// TODO: Make this a runtime option.
#ifdef SUPRESS_MEMSHARING
        bRet = true; 
#endif
        return bRet;
    }
    
    SparsePageWriter::~SparsePageWriter() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    SEXP XGDMatrixSaveBinary_R(SEXP handle, SEXP fname, SEXP silent) {
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixSaveBinary(R_ExternalPtrAddr(handle),
                                 CHAR(asChar(fname)),
                                 asInteger(silent)));
  R_API_END();
  return R_NilValue;
}
    
    /*!
 * \brief Macro to register gradient booster.
 *
 * \code
 * // example of registering a objective ndcg@k
 * XGBOOST_REGISTER_GBM(GBTree, 'gbtree')
 * .describe('Boosting tree ensembles.')
 * .set_body([]() {
 *     return new GradientBooster<TStats>();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_GBM(UniqueId, Name)                            \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::GradientBoosterReg &          \
  __make_ ## GradientBoosterReg ## _ ## UniqueId ## __ =                \
      ::dmlc::Registry< ::xgboost::GradientBoosterReg>::Get()->__REGISTER__(Name)