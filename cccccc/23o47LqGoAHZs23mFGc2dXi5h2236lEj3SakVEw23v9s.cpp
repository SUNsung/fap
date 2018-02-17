
        
        using namespace std;
    
            std::vector<std::vector<Point> > white_contours, black_contours;
        std::vector<Vec4i> white_hierarchy, black_hierarchy;
        findContours(black_comp, black_contours, black_hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE);
        findContours(white_comp, white_contours, white_hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE);
    
    #include 'opencv2/core.hpp'
    
    #ifndef __OPENCV_CORE_BUFFER_POOL_IMPL_HPP__
#define __OPENCV_CORE_BUFFER_POOL_IMPL_HPP__
    
    #endif //HAVE_LAPACK
#endif //OPENCV_CORE_HAL_INTERNAL_HPP

    
        bool TryLoadCheckPointInfo(const size_t epochNumber,
                               /*out*/ size_t& totalSamplesSeen,
                               /*out*/ double& learnRatePerSample,
                               std::list<Matrix<ElemType>>& smoothedGradients,
                               std::vector<double>& smoothedCounts,
                               /*out*/ double& prevCriterion,
                               /*out*/ size_t& minibatchSize);
    void LoadCheckPointInfo(const size_t epochNumber,
                            /*out*/ size_t& totalSamplesSeen,
                            /*out*/ double& learnRatePerSample,
                            std::list<Matrix<ElemType>>& smoothedGradients,
                            std::vector<double>& smoothedCounts,
                            /*out*/ double& prevCriterion,
                            /*out*/ size_t& minibatchSize);
    
    // only copy a complete independent tree
// when node name exists
void ComputationNetwork::CopySubTree(const ComputationNetwork& fromNet,
                                     const std::wstring fromName, std::wstring toNamePrefix,
                                     const CopyNodeFlags flags)
{
    InvalidateCompiledNetwork();
    }
    
        size_t GetNumParallelSequencesForFixingBPTTMode()
    {
        return 1;
    }
    void SetNumParallelSequences(const size_t){};
    void CopyMBLayoutTo(MBLayoutPtr pMBLayout)
    {
        pMBLayout->CopyFrom(m_pMBLayout);
        NOT_IMPLEMENTED;
    }
    virtual const std::map<LabelIdType, LabelType>& GetLabelMapping(const std::wstring& sectionName);
    virtual void SetLabelMapping(const std::wstring& sectionName, const std::map<typename BinaryReader<ElemType>::LabelIdType, typename BinaryReader<ElemType>::LabelType>& labelMapping);
    virtual bool GetData(const std::wstring& sectionName, size_t numRecords, void* data, size_t& dataBufferSize, size_t recordStart = 0);
    
    BOOST_FIXTURE_TEST_CASE(MatrixDensePlusSparse, RandomSeedFixture)
{
    std::mt19937 rng(0);
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    }
    
        // EvaluateNDLSnippet - evaluate the passed snippet of NDL into a computational network
    // script - [in] text of the NDL snippet
    // network - [in/out] computation network to insert NDL into
    void EvaluateNDLSnippet(const ConfigValue& script, ComputationNetworkPtr network)
    {
        NDLUtil<ElemType> ndlUtil(network);
        ndlUtil.ProcessNDLConfig(script);
    }
    
    template void FindConfigNames<ConfigParameters>(const ConfigParameters&, std::string key, std::vector<std::wstring>& names);
template void FindConfigNames<ScriptableObjects::IConfigRecord>(const ScriptableObjects::IConfigRecord&, std::string key, std::vector<std::wstring>& names);
    
        page->offset.clear();
    page->offset.push_back(0);
    for (bst_uint cid : sorted_index_set) {
      page->offset.push_back(
          page->offset.back() + disk_offset_[cid + 1] - disk_offset_[cid]);
    }
    page->data.resize(page->offset.back());
    CHECK_EQ(index_.data.size(), value_.data.size());
    CHECK_EQ(index_.data.size(), disk_offset_.back());
    
      /* Fetch an individual column. This code should be used with XGBOOST_TYPE_SWITCH
     to determine type of bin id's */
  template<typename T>
  inline Column<T> GetColumn(unsigned fid) const {
    const bool valid_type = std::is_same<T, uint32_t>::value
                          || std::is_same<T, uint16_t>::value
                          || std::is_same<T, uint8_t>::value;
    CHECK(valid_type);
    }
    
    TEST(Param, VectorIOStream) {
  std::vector<int> vals = {3, 2, 1};
  std::stringstream ss;
  std::vector<int> vals_in;
  
  ss << vals;
  EXPECT_EQ(ss.str(), '(3,2,1)');
    }
    
    /*! \brief pruner that prunes a tree after growing finishs */
template<typename TStats>
class TreeRefresher: public TreeUpdater {
 public:
  void Init(const std::vector<std::pair<std::string, std::string> >& args) override {
    param.InitAllowUnknown(args);
  }
  // update the tree, do pruning
  void Update(const std::vector<bst_gpair> &gpair,
              DMatrix *p_fmat,
              const std::vector<RegTree*> &trees) override {
    if (trees.size() == 0) return;
    // number of threads
    // thread temporal space
    std::vector<std::vector<TStats> > stemp;
    std::vector<RegTree::FVec> fvec_temp;
    // setup temp space for each thread
    const int nthread = omp_get_max_threads();
    fvec_temp.resize(nthread, RegTree::FVec());
    stemp.resize(nthread, std::vector<TStats>());
    #pragma omp parallel
    {
      int tid = omp_get_thread_num();
      int num_nodes = 0;
      for (size_t i = 0; i < trees.size(); ++i) {
        num_nodes += trees[i]->param.num_nodes;
      }
      stemp[tid].resize(num_nodes, TStats(param));
      std::fill(stemp[tid].begin(), stemp[tid].end(), TStats(param));
      fvec_temp[tid].Init(trees[0]->param.num_feature);
    }
    // if it is C++11, use lazy evaluation for Allreduce,
    // to gain speedup in recovery
#if __cplusplus >= 201103L
    auto lazy_get_stats = [&]()
#endif
    {
      const MetaInfo &info = p_fmat->info();
      // start accumulating statistics
      dmlc::DataIter<RowBatch> *iter = p_fmat->RowIterator();
      iter->BeforeFirst();
      while (iter->Next()) {
        const RowBatch &batch = iter->Value();
        CHECK_LT(batch.size, std::numeric_limits<unsigned>::max());
        const bst_omp_uint nbatch = static_cast<bst_omp_uint>(batch.size);
        #pragma omp parallel for schedule(static)
        for (bst_omp_uint i = 0; i < nbatch; ++i) {
          RowBatch::Inst inst = batch[i];
          const int tid = omp_get_thread_num();
          const bst_uint ridx = static_cast<bst_uint>(batch.base_rowid + i);
          RegTree::FVec &feats = fvec_temp[tid];
          feats.Fill(inst);
          int offset = 0;
          for (size_t j = 0; j < trees.size(); ++j) {
            AddStats(*trees[j], feats, gpair, info, ridx,
                     dmlc::BeginPtr(stemp[tid]) + offset);
            offset += trees[j]->param.num_nodes;
          }
          feats.Drop(inst);
        }
      }
      // aggregate the statistics
      int num_nodes = static_cast<int>(stemp[0].size());
      #pragma omp parallel for schedule(static)
      for (int nid = 0; nid < num_nodes; ++nid) {
        for (int tid = 1; tid < nthread; ++tid) {
          stemp[0][nid].Add(stemp[tid][nid]);
        }
      }
    };
#if __cplusplus >= 201103L
    reducer.Allreduce(dmlc::BeginPtr(stemp[0]), stemp[0].size(), lazy_get_stats);
#else
    reducer.Allreduce(dmlc::BeginPtr(stemp[0]), stemp[0].size());
#endif
    // rescale learning rate according to size of trees
    float lr = param.learning_rate;
    param.learning_rate = lr / trees.size();
    int offset = 0;
    for (size_t i = 0; i < trees.size(); ++i) {
      for (int rid = 0; rid < trees[i]->param.num_roots; ++rid) {
        this->Refresh(dmlc::BeginPtr(stemp[0]) + offset, rid, trees[i]);
      }
      offset += trees[i]->param.num_nodes;
    }
    // set learning rate back
    param.learning_rate = lr;
  }
    }