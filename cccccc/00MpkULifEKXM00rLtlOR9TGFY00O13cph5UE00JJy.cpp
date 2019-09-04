
        
        
    {}  // namespace nwapi
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/api_messages.h'
#include 'content/public/renderer/render_view.h'
#include 'content/public/renderer/render_thread.h'
#include 'content/public/renderer/v8_value_converter.h'
#include 'third_party/WebKit/public/web/WebView.h'
#include 'third_party/WebKit/public/web/WebLocalFrame.h'
#include 'ui/base/resource/resource_bundle.h'
    
            /*virtual*/ void SaveToCheckPoint(File& fstream) override
        {
            if (m_pMPI->IsMainNode())
            {
                fstream.PutMarker(FileMarker::fileMarkerBeginSection, L'BMACKP');
                fstream.PutMarker(FileMarker::fileMarkerBeginSection, L'BOptions');
                fstream << m_resetSGDMomentumAfterAggregation;
                fstream.PutMarker(FileMarker::fileMarkerEndSection, L'EOptions');
    }
    }
    
    template <class ConfigRecordType, typename ElemType>
void DoTrain(const ConfigRecordType& config)
{
    bool makeMode = config(L'makeMode', true);
    DEVICEID_TYPE deviceId = DeviceFromConfig(config);
    int traceLevel = config(L'traceLevel', 0);
    }
    
            void SetReportFrequency(size_t freq)
        {
            m_reportFrequency = freq;
        }
    
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