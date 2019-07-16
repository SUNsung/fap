
        
                    // find the 'run' and 'load' keys and add them
            if (config.Exists('run'))
            {
                ConfigValue sectionToRun = config('run');
                newConfig.Insert('run', sectionToRun);
            }
    
            m_word2class = config('word2cls', '');
        m_cls2index = config('cls2index', '');
        m_vocabSize = (int) config('vocabSize', '-1');
        m_nbrCls = (int) config('nbrClass', '-1');
        nce_noises = (int) config('noise_number', '-1'); // nce noise
    
    #ifndef let
#define let const auto
#endif
    
    private:
    // determine the node-group array by the group tag
    std::vector<ComputationNodeBasePtr>& GetNodeGroup(const std::wstring& groupTag)
    {
        if      (groupTag == L'feature'   ) return m_featureNodes;
        else if (groupTag == L'label'     ) return m_labelNodes;
        else if (groupTag == L'criterion' ) return m_criterionNodes;
        else if (groupTag == L'evaluation') return m_evaluationNodes;
        else if (groupTag == L'output'    ) return m_outputNodes;
        else InvalidArgument('Invalid group tag '%ls', must be one of 'feature', 'label', 'criterion', 'evaluation', 'output'.', groupTag.c_str());
    }
    
        // The following functions create nodes and add them to the net, but don't attach inputs (some don't have inputs).
    // There are special versions for nodes with custom constructors, and a catch-all, CreateComputationNode(), for all others.
    // TODO: Do we really need these? Folks who want to use C++ can instead say net->AddNodeToNet(New<>(...)), which is not that different.
    // TODO: separate into nodes that have inputs and those that duplicate functions with input adding except just not adding inputs. Clear?
    
    template<class ElemType>
ASGDHelper<ElemType>* NewASGDHelper(
    const std::list<ComputationNodeBasePtr> & learnableNodes,                // Parameters that needs to be train
    size_t nodeNumRanks,                                                     // Number of working nodes
    bool useAsyncBuffer,                                            // Using asynchonous buffer to hide communication cost
    bool isSimulatedModelAveragingSGD,
    AdjustLearningRateAtBeginning adjusttype,
    double adjustCoef,
    size_t adjustPerMinibatches,
    int traceLevel,
    int syncPerfStats) 
{
#ifdef ASGD_PARALLEL_SUPPORT
    return new MultiversoHelper<ElemType>(learnableNodes, nodeNumRanks, useAsyncBuffer, isSimulatedModelAveragingSGD, 
                                      adjusttype, adjustCoef, adjustPerMinibatches, traceLevel, syncPerfStats);
#else
    return new NoneASGDHelper<ElemType>(learnableNodes, nodeNumRanks, useAsyncBuffer, isSimulatedModelAveragingSGD, 
                                      adjusttype, adjustCoef, adjustPerMinibatches, traceLevel, syncPerfStats); 
#endif
}
    
    private:
    void MarkDropoutNodesEvalTimeStampAsOutdated(const ComputationNetworkPtr& net, const ComputationNodeBasePtr& criterionNode);
    std::shared_ptr<ASGDHelper<ElemType>> m_pASGDHelper;
    
    
    {
    {
    {}}}

    
        BOOST_CHECK_EQUAL_COLLECTIONS(result.begin(), result.end(), expected.begin(), expected.end());
    
    void GlobalData::InitHostInfo() {
  char host_name[1024];
  gethostname(host_name, sizeof(host_name));
  host_name_ = host_name;
    }
    
    class MainWindow : public QMainWindow {
  Q_OBJECT
    }
    
    #include <deque>
#include <list>
#include <memory>
#include <mutex>
#include <queue>
#include <vector>
    
    typedef boost::circular_buffer<VehicleStatus> MotionBuffer;
typedef std::shared_ptr<MotionBuffer> MotionBufferPtr;
typedef std::shared_ptr<const MotionBuffer> MotionBufferConstPtr;
    
    std::string Dst::PrintBba() const {
  SelfCheck();
  static constexpr size_t total_res_size = 10000;
  static constexpr size_t row_res_size = 1000;
  static auto print_row = [](const std::string &row_header,
                             const std::vector<double> &data) {
    std::string row_str = (boost::format('%19s ') % row_header).str();
    row_str.reserve(row_res_size);
    for (auto flt : data) {
      row_str += (boost::format('%20.6lf') % (flt * 100)).str();
    }
    row_str += '\n';
    return row_str;
  };
  std::string res;
  res.reserve(total_res_size);
  res += '\n';
  // output table header
  std::string header = (boost::format('%20s') % ' ').str();
  header.reserve(row_res_size);
  const std::vector<std::string> &fod_subset_names =
      dst_data_ptr_->fod_subset_names_;
  for (const auto &fod_subset_name : fod_subset_names) {
    header += (boost::format('%20s') % fod_subset_name).str();
  }
  res += header + '\n';
  res += print_row('belief_mass', bba_vec_);
  // res += print_row('support', support_vec_);
  // res += print_row('uncertainty', uncertainty_vec_);
  // res += print_row('probability', probability_vec_);
  return res;
}
    
    double DstExistanceFusion::GetUnexistReliability(const std::string &sensor_id) {
  common::SensorManager *sensor_manager = common::SensorManager::Instance();
  CHECK_NOTNULL(sensor_manager);
  if (sensor_manager->IsCamera(sensor_id)) {
    return 0.8;
  }
  if (sensor_manager->IsLidar(sensor_id)) {
    return 0.9;
  }
  return 0.6;
}
    
    bool KalmanMotionFusion::Init() {
  if (track_ref_ == nullptr) {
    return false;
  }
  if (track_ref_->GetLatestLidarObject() != nullptr) {
    filter_init_ = InitFilter(track_ref_->GetLatestLidarObject());
  } else if (track_ref_->GetLatestRadarObject() != nullptr) {
    filter_init_ = InitFilter(track_ref_->GetLatestRadarObject());
  }
  return true;
}