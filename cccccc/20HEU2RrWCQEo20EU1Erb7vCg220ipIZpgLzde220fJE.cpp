
        
        int CertificateManagerModel::ImportFromPKCS12(
    PK11SlotInfo* slot_info,
    const std::string& data,
    const base::string16& password,
    bool is_extractable,
    net::ScopedCERTCertificateList* imported_certs) {
  return cert_db_->ImportFromPKCS12(slot_info, data, password, is_extractable,
                                    imported_certs);
}
    
    template <typename P1, typename P2>
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*(P1, P2)>& callback) {
  typename CallbackParamTraits<P1>::LocalType a1;
  typename CallbackParamTraits<P2>::LocalType a2;
  if (!GetNextArgument(args, 0, true, &a1) ||
      !GetNextArgument(args, 0, false, &a2))
    return nullptr;
  return callback.Run(a1, a2);
}
    
    const char kLockfile[] = 'lockfile';
    
      // base::SingleThreadTaskRunner:
  bool PostDelayedTask(const base::Location& from_here,
                       base::OnceClosure task,
                       base::TimeDelta delay) override;
  bool RunsTasksInCurrentSequence() const override;
  bool PostNonNestableDelayedTask(const base::Location& from_here,
                                  base::OnceClosure task,
                                  base::TimeDelta delay) override;
    
    // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    // Request Shell's id for current render_view_host.
IPC_SYNC_MESSAGE_ROUTED0_1(ShellViewHostMsg_GetShellId,
                           int /* result */)
    
    void App::ClearCache(content::RenderProcessHost* render_process_host) {
  render_process_host->Send(new ShellViewMsg_ClearCache());
  nw::RemoveHttpDiskCache(render_process_host->GetBrowserContext(),
                          render_process_host->GetID());
}
    
    v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  if (pos < 0 || pos > (int)menu_items_.size()) return;
    }
    
    void MenuItem::SetChecked(bool checked) {
  // Set active will cause 'activate' to be emitted, so block here
  block_active_ = true;
  gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(menu_item_), checked);
  block_active_ = false;
}
    
      GURL manifest_url(manifest);
  scoped_refptr<CannedBrowsingDataAppCacheHelper> helper(
                                                         new CannedBrowsingDataAppCacheHelper(content::BrowserContext::GetDefaultStoragePartition(context_)
                                                                                              ->GetAppCacheService()));
    
    class NwAppSetProxyConfigFunction : public NWSyncExtensionFunction {
 public:
  NwAppSetProxyConfigFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  const int num_output = this->layer_param_.inner_product_param().num_output();
  bias_term_ = this->layer_param_.inner_product_param().bias_term();
  transpose_ = this->layer_param_.inner_product_param().transpose();
  N_ = num_output;
  const int axis = bottom[0]->CanonicalAxisIndex(
      this->layer_param_.inner_product_param().axis());
  // Dimensions starting from 'axis' are 'flattened' into a single
  // length K_ vector. For example, if bottom[0]'s shape is (N, C, H, W),
  // and axis == 1, N inner products with dimension CHW are performed.
  K_ = bottom[0]->count(axis);
  // Check if we need to set up the weights
  if (this->blobs_.size() > 0) {
    LOG(INFO) << 'Skipping parameter initialization';
  } else {
    if (bias_term_) {
      this->blobs_.resize(2);
    } else {
      this->blobs_.resize(1);
    }
    // Initialize the weights
    vector<int> weight_shape(2);
    if (transpose_) {
      weight_shape[0] = K_;
      weight_shape[1] = N_;
    } else {
      weight_shape[0] = N_;
      weight_shape[1] = K_;
    }
    this->blobs_[0].reset(new Blob<Dtype>(weight_shape));
    // fill the weights
    shared_ptr<Filler<Dtype> > weight_filler(GetFiller<Dtype>(
        this->layer_param_.inner_product_param().weight_filler()));
    weight_filler->Fill(this->blobs_[0].get());
    // If necessary, initialize and fill the bias term
    if (bias_term_) {
      vector<int> bias_shape(1, N_);
      this->blobs_[1].reset(new Blob<Dtype>(bias_shape));
      shared_ptr<Filler<Dtype> > bias_filler(GetFiller<Dtype>(
          this->layer_param_.inner_product_param().bias_filler()));
      bias_filler->Fill(this->blobs_[1].get());
    }
  }  // parameter initialization
  this->param_propagate_down_.resize(this->blobs_.size(), true);
}
    
      void CheckSnapshotWritePermissions();
  /**
   * @brief Returns the solver type.
   */
  virtual inline const char* type() const { return ''; }
    
      bp::class_<SGDSolver<Dtype>, bp::bases<Solver<Dtype> >,
    shared_ptr<SGDSolver<Dtype> >, boost::noncopyable>(
        'SGDSolver', bp::init<string>())
        .add_property('lr', &SGDSolver<Dtype>::GetLearningRate);
  bp::class_<NesterovSolver<Dtype>, bp::bases<SGDSolver<Dtype> >,
    shared_ptr<NesterovSolver<Dtype> >, boost::noncopyable>(
        'NesterovSolver', bp::init<string>());
  bp::class_<AdaGradSolver<Dtype>, bp::bases<SGDSolver<Dtype> >,
    shared_ptr<AdaGradSolver<Dtype> >, boost::noncopyable>(
        'AdaGradSolver', bp::init<string>());
  bp::class_<RMSPropSolver<Dtype>, bp::bases<SGDSolver<Dtype> >,
    shared_ptr<RMSPropSolver<Dtype> >, boost::noncopyable>(
        'RMSPropSolver', bp::init<string>());
  bp::class_<AdaDeltaSolver<Dtype>, bp::bases<SGDSolver<Dtype> >,
    shared_ptr<AdaDeltaSolver<Dtype> >, boost::noncopyable>(
        'AdaDeltaSolver', bp::init<string>());
  bp::class_<AdamSolver<Dtype>, bp::bases<SGDSolver<Dtype> >,
    shared_ptr<AdamSolver<Dtype> >, boost::noncopyable>(
        'AdamSolver', bp::init<string>());
    
    template <typename Dtype>
Solver<Dtype>::Solver(const string& param_file)
    : net_(), callbacks_(), requested_early_exit_(false) {
  SolverParameter param;
  ReadSolverParamsFromTextFileOrDie(param_file, &param);
  Init(param);
}
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
      str = tree.DumpModel(fmap, true, 'json');
  ASSERT_NE(str.find(R'('split': 'feat_0')'), std::string::npos);
  ASSERT_NE(str.find(R'('split': 'feat_1')'), std::string::npos);
  ASSERT_NE(str.find(R'('split': 'feat_2')'), std::string::npos);
    
      bool Read(SparsePage* page,
            dmlc::SeekStream* fi,
            const std::vector<bst_uint>& sorted_index_set) override {
    if (!fi->Read(&disk_offset_)) return false;
    this->LoadIndexValue(fi);
    auto& offset_vec = page->offset.HostVector();
    auto& data_vec = page->data.HostVector();
    offset_vec.clear();
    offset_vec.push_back(0);
    for (bst_uint cid : sorted_index_set) {
      offset_vec.push_back(
          offset_vec.back() + disk_offset_[cid + 1] - disk_offset_[cid]);
    }
    data_vec.resize(offset_vec.back());
    CHECK_EQ(index_.data.size(), value_.data.size());
    CHECK_EQ(index_.data.size(), disk_offset_.back());
    }
    
    /*!
 * \brief Macro to register sparse page format.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
 * .describe('Raw binary data format.')
 * .set_body([]() {
 *     return new RawFormat();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(Name)                       \
  DMLC_REGISTRY_REGISTER(::xgboost::data::SparsePageFormatReg, SparsePageFormat, Name)
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << '1a';
  ss >> vals_in;
  EXPECT_NE(vals_in, vals);
    
    
    {DMLC_REGISTER_DATA_PARSER(uint32_t, real_t, dense_libsvm,
  data::CreateDenseLibSVMParser<uint32_t __DMLC_COMMA real_t>);
}  // namespace dmlc

    
                    //----------------------------------------
                // 3. reset SGD momentum if necessary 
                //----------------------------------------
                {
                    // For half, we keep a copy of float weights, update that too
                    if (std::is_same<ElemType, half>())
                    {
                        auto compoundMatrixPtr = dynamic_pointer_cast<Matrix<float>> (*smoothedGradientIter);
                        size_t numCols = currentWeight.GetNumCols();
    }
    }
    
    // helper to remove all existing Output nodes and replace them by a new given set
static void PatchOutputNodes(const ComputationNetworkPtr& net, const ConfigArray& outputNodeNames, vector<wstring>& outputNodeNamesVector)
{
    // clear out current list of outputNodes
    while (!net->OutputNodes().empty())
        net->RemoveFromNodeGroup(L'output', net->OutputNodes().back());
    // and insert the desired nodes instead
    for (wstring name : outputNodeNames)
    {
        if (!net->NodeNameExists(name))
        {
            fprintf(stderr, 'PatchOutputNodes: No node named '%ls'; skipping\n', name.c_str());
            continue;
        }
        outputNodeNamesVector.push_back (name);
        let& node = net->GetNodeFromName(name);
        net->AddToNodeGroup(L'output', node);
    }
}
    
    template <class ElemType>
shared_ptr<ComputationNode<ElemType>> /*ComputationNodePtr*/ SimpleNetworkBuilder<ElemType>::BuildLSTMComponent(unsigned long& randomSeed, size_t iLayer, size_t inputDim, size_t outputDim, ComputationNodePtr inputObs)
{
    ComputationNetworkBuilder<ElemType> builder(*m_net);
    }
    
            // dbn operates on row vectors not column vectors. x*W + b, so need to read in as W'
        // ElemType* d_array = new ElemType[numRows*numCols];
        float tmp;
        for (long i = 0; i < numRows; i++)
            for (long j = 0; j < numCols; j++)
            {
                fstream >> tmp;
                mat(i, j) = tmp;
                // d_array[i] = (ElemType)tmp;
            }
        if (!CheckDbnTag(fstream, 'EMAT'))
            RuntimeError('Error reading DBN file - did not find expected tag EMAT\n');
        // fstream.GetMarker(FileMarker::fileMarkerBeginSection, 'EMAT');
    
    private:
    void PrintMemorySharingStructure(const std::vector<ComputationNodeBasePtr>& nodes);
    void ReleaseMatricesAfterEvalForChildren(ComputationNodeBasePtr n, std::unordered_map<ComputationNodeBasePtr, std::unordered_set<ComputationNodeBasePtr>>& parentsMap);
    
    
template<typename ElemType>
void CNTKEvalExtended<ElemType>::StartForwardEvaluation(const std::vector<wstring>& outputNodeNames)
{
    m_scopedNetworkOperationMode = make_shared<ScopedNetworkOperationMode>(this->m_net, NetworkOperationMode::inferring);
    m_outputNodes  = this->m_net->OutputNodesByName(outputNodeNames);
    m_inputNodes = this->m_net->InputNodesForOutputs(outputNodeNames);
    // allocate memory for forward computation
    this->m_net->AllocateAllMatrices({}, m_outputNodes, nullptr);
    this->m_net->StartEvaluateMinibatchLoop(m_outputNodes);
    m_inputMatrices = DataReaderHelpers::RetrieveInputMatrices(m_inputNodes);
    }
    
            std::vector<shared_ptr<ComputationNode<ElemType>>> m_netCriterionNodes;
        std::vector<shared_ptr<ComputationNode<ElemType>>> m_netEvaluationNodes;
        std::map<wstring, shared_ptr<IStatefulNode>> m_netStatefulNodes; // we need to Export/Import states of stateful nodes when we swtich subminibatches
    
    template std::shared_ptr<IDistGradAggregator<double>> GetSimpleDistGradAggregator<double>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce);
    
    
    {    for (int i = 0; i < strlen(buffer); i++)
    {
        if (buffer[i] == 'e' || buffer[i] == 'E')
        {
            sprintf(format, '%%%d.%de', padSize, precision);
            return format;
        }
    }
    sprintf(format, '%%%d.%df', padSize, precision);
    return format;
}