
        
          // Import user certificate from DER encoded |data|.
  // Returns a net error code on failure.
  int ImportUserCert(const std::string& data);
    
    namespace internal {
    }
    
    // static
void WrappableBase::FirstWeakCallback(
    const v8::WeakCallbackInfo<WrappableBase>& data) {
  WrappableBase* wrappable = data.GetParameter();
  wrappable->wrapper_.Reset();
  data.SetSecondPassCallback(SecondWeakCallback);
}
    
    #include 'base/macros.h'
#include 'native_mate/converter.h'
    
    namespace mate {
    }
    
      void Clear() {
    wrapper_.Clear();
    object_ = NULL;
  }
    
    // ProcessSingleton ----------------------------------------------------------
//
// This class allows different browser processes to communicate with
// each other.  It is named according to the user data directory, so
// we can be sure that no more than one copy of the application can be
// running at once with a given data directory.
//
// Implementation notes:
// - the Windows implementation uses an invisible global message window;
// - the Linux implementation uses a Unix domain socket in the user data dir.
    
    #include 'base/base_paths.h'
#include 'base/bind.h'
#include 'base/command_line.h'
#include 'base/files/file_path.h'
#include 'base/files/file_util.h'
#include 'base/process/process.h'
#include 'base/process/process_info.h'
#include 'base/strings/string_number_conversions.h'
#include 'base/strings/stringprintf.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/time/time.h'
#include 'base/win/registry.h'
#include 'base/win/scoped_handle.h'
#include 'base/win/windows_version.h'
#include 'chrome/browser/win/chrome_process_finder.h'
#include 'content/public/common/result_codes.h'
#include 'net/base/escape.h'
#include 'ui/base/l10n/l10n_util.h'
#include 'ui/gfx/win/hwnd_util.h'
    
    void ProcessSingleton::StartListeningOnSocket() {
  watcher_ = new LinuxWatcher(this);
  base::PostTaskWithTraits(
      FROM_HERE, {BrowserThread::IO},
      base::BindOnce(&ProcessSingleton::LinuxWatcher::StartListening, watcher_,
                     sock_));
}
    
    bool IsUrlArg(const base::CommandLine::CharType* arg) {
  // the first character must be a letter for this to be a URL
  auto c = *arg;
  if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
    for (auto* p = arg + 1; *p; ++p) {
      c = *p;
    }
    }
    }
    
      std::string mangleInitializerEntity(const VarDecl *var, SymbolKind SKind);
    
      /// Integrate \p integrand's fingerprint into \p dn.
  /// \returns true if there was a change requiring recompilation.
  bool integrateFingerprintFrom(const SourceFileDepGraphNode *integrand) {
    if (getFingerprint() == integrand->getFingerprint())
      return false;
    setFingerprint(integrand->getFingerprint());
    return true;
  }
    
    INSTANTIATE_TEST_CASE_P(videoio, videoio_gstreamer, testing::ValuesIn(test_data));
    
        void finalize(InputArrayOfArrays inputs_arr, OutputArrayOfArrays) CV_OVERRIDE
    {
        std::vector<Mat> inputs;
        inputs_arr.getMatVector(inputs);
        int splitDim = (acrossChannels) ? 1 : 2;
        int i, newRows = 1;
        for( i = 0; i < splitDim; i++ )
            newRows *= inputs[0].size[i];
        zeroDev = inputs[0].total() == newRows;
#ifdef HAVE_OPENCL
        umat_scale.release();
        umat_shift.release();
#endif
    }
    
    #include '../precomp.hpp'
#include 'layers_common.hpp'
#include '../op_inf_engine.hpp'
#include <opencv2/dnn/shape_utils.hpp>
    
    
    {    }
    
    void icvCvt_BGR2Gray_8u_C3C1R( const uchar* bgr, int bgr_step,
                               uchar* gray, int gray_step,
                               Size size, int swap_rb=0 );
void icvCvt_BGRA2Gray_8u_C4C1R( const uchar* bgra, int bgra_step,
                                uchar* gray, int gray_step,
                                Size size, int swap_rb=0 );
void icvCvt_BGRA2Gray_16u_CnC1R( const ushort* bgra, int bgra_step,
                               ushort* gray, int gray_step,
                               Size size, int ncn, int swap_rb=0 );
    
    
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
    
    
    {                double statusValue = 1;
                auto status = ::CNTK::MakeSharedObject<::CNTK::NDArrayView>(::CNTK::DataType::Double, ::CNTK::NDShape{ 1 }, &statusValue, sizeof(double), ::CNTK::DeviceDescriptor::CPUDevice());
                std::vector<::CNTK::NDArrayViewPtr> aggregatedStatus{ status };
                m_communicator->AggregateInPlace(aggregatedStatus, m_communicator->Workers());
            }
    
    
    {                // look up if 'nameBeforeDot' was a parameter to the macro.
                NDLNode<ElemType>* resolvedParam = nodeParam->GetParentScript()->FindSymbol(nameBeforeDot);
                if (resolvedParam != nullptr && resolvedParam->GetType() == ndlTypeMacroCall)
                {
                    // if 'nameBeforeDot' was a parameter to the macro, builds it's fully qualified name by
                    // replacing 'nameBeforeDot' with the fully qualified name of the node passed in as the parameter.
                    NDLScript<ElemType>* parentScript = resolvedParam->GetParentScript();
                    baseName = parentScript->GetBaseName();
                    std::wstring resolvedParamName = Microsoft::MSR::CNTK::ToFixedWStringFromMultiByte(resolvedParam->GetName());
                    wname = baseName.empty() ? resolvedParamName + L'.' + Microsoft::MSR::CNTK::ToFixedWStringFromMultiByte(nameAfterDot) : baseName + L'.' + resolvedParamName + L'.' + Microsoft::MSR::CNTK::ToFixedWStringFromMultiByte(nameAfterDot);
                }
                else if (!baseName.empty())
                {
                    // else, 'nameBeforeDot' wasn't a parameter to the macro, so treat it as a local variable.
                    wname = baseName + L'.' + wname;
                }
            }
            else if (!baseName.empty())
            {
                wname = baseName + L'.' + wname;
            }
    
    
    {    m_eval = nullptr; // pointer to an arbitrary eval structure
    // script for macro calls, need to expand the macro for each call
    // if it's not expanded the evalValue will be overwitten on multiple calls to a macro
    m_script = (copyMe.m_script) ? new NDLScript<ElemType>(*copyMe.m_script) : nullptr;
}
template <typename ElemType>
NDLScript<ElemType>::NDLScript(const NDLScript&& moveMe)
    : ConfigParser(move(moveMe))
{
    m_baseName      = move(moveMe.m_baseName);
    m_scriptString  = move(moveMe.m_scriptString);
    m_script        = move(moveMe.m_script);        // script lines in parsed node order, macros will have definition followed by body
    m_symbols       = move(moveMe.m_symbols);       // symbol table
    m_macroNode     = move(moveMe.m_macroNode);     // set when interpretting a macro definition
    m_noDefinitions = move(moveMe.m_noDefinitions); // no definitions can be made in this script, interpret all macro/function names as calls
    m_definingMacro = move(moveMe.m_definingMacro);
    m_children      = move(moveMe.m_children);      // child nodes. Note that m_script nodes may not be children of this object, they include macro nodes
    m_cn            = move(moveMe.m_cn);            // computation network to use for backup symbol lookup. Used for MEL where NDL and network nodes are mixed
}
    
    template <class ConfigRecordType, typename ElemType>
ComputationNetworkPtr GetModelFromConfig(const ConfigRecordType& config, const wstring& outputNodeNamesConfig, vector<wstring>& outputNodeNamesVector)
{
    DEVICEID_TYPE deviceId = DeviceFromConfig(config);
    }
    
    #include 'Basics.h'
#include 'ComputationNode.h'
#include 'ComputationNetwork.h'
#include 'TrainingNodes.h'      // for NCEEvalMode
#include 'ConvolutionalNodes.h' // for PoolKind
#include 'ScriptableObjects.h'
#include 'TensorShape.h'
#include <string>
    
        void SaveCheckPointInfo(const size_t epoch, const size_t totalSamplesSeen, // TODO: combine totalSamplesSeen and prevCriterion into a EpochCriterion type
                            const double learnRatePerSample,
                            const std::list<MatrixBasePtr>& smoothedGradients,
                            const std::vector<double>& smoothedCounts,
                            const double prevCriterion,
                            const size_t minibatchSize);