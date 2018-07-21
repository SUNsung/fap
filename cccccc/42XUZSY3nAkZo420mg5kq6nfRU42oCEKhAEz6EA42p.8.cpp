#ifdef USE_GCC_FAST_TLS
    
    #endif

    
    void Vunit::freeScratchBlock(Vlabel l) {
  // This will leak blocks if anything's been added since the corresponding
  // call to makeScratchBlock(), but it's harmless.
  if (l == blocks.size() - 1) blocks.pop_back();
}
    
    const StaticString s_add('add');
const StaticString s_addall('addall');
const StaticString s_append('append');
const StaticString s_clear('clear');
const StaticString s_remove('remove');
const StaticString s_removeall('removeall');
const StaticString s_removekey('removekey');
const StaticString s_set('set');
const StaticString s_setall('setall');
    
    namespace HPHP {
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    
    {        auto numOfSequences = batchData.size() / shapeSize;
        std::vector<NDArrayViewPtr> sequencesView(numOfSequences);
        for (size_t i = 0; i < numOfSequences; i++)
        {
            // Sequence length is 1.
            auto sequenceDataShape = sampleShape.AppendShape({ 1 });
            sequencesView[i] = MakeSharedObject<NDArrayView>(sequenceDataShape, batchData.data() + i * shapeSize, shapeSize, DeviceDescriptor::CPUDevice());
        }
        // Pass the empty seqStartFlags means all sequences have the start flag with true.
        return Create(sampleShape, sequencesView, {}, device, readOnly, /*createNewCopy =*/ true);
    }
    
    // CUDA failed
// Since the outer code sometimes does not recover properly, as an option we log and die right away.
// This is needed for our GCD farm which has intermittent CUDA errors that sometimes cause the DBN tool, when running with MPI, to hang instead of terminating.
static void cudafail(const char* msg)
{
    // TODO: get from an env variable
    bool dieoncudafailure = false;
    if (!dieoncudafailure)
    {
        RuntimeError('%s', msg);
    }
    fprintf(stderr, '%s\n', msg);
    fprintf(stderr, 'cudafail: terminating\n'), fflush(stderr);
#ifdef WIN32
    TerminateProcess(GetCurrentProcess(), EXIT_FAILURE); // fail the hard way to ensure it won't hang elsewhere
#else
    exit(1);
#endif
}
    
    
    {    auto netBuilder = make_shared<SimpleNetworkBuilder<ElemType>>(config);
    ComputationNetworkPtr net = netBuilder->BuildNetworkFromDbnFile(dbnModelPath);
    net->Save(modelPath);
}
    
        // Init - Writer Initialize for multiple data sets
    // config - [in] configuration parameters for the datawriter
    // Sample format below for BinaryWriter:
    // writer=[
    //  # writer to use, can implement both reader and writer
    //  writerType=BinaryWriter
    //  miniBatchMode=Partial
    //  randomize=None
    //  wfile=c:\speech\mnist\mnist_test.bin
    //  #wrecords - number of records we should allocate space for in the file
    //  # files cannot be expanded, so this should be large enough. If known modify this element in config before creating file
    //  wrecords=50000
    //  features=[
    //    dim=784
    //    start=1
    //    sectionType='data'
    //    stats=[
    //      sectionType='stats'
    //      elementSize=8
    //      compute={'sum':'count':'mean:'v'ariance':'stddev':'max':'min':'range'}
    //    ]
    //  ]
    //  labels=[
    //    dim=1
    //    # sizeof(unsigned) which is the label index type
    //    elementSize=4
    //    wref='features'
    //    sectionType='labels'
    //    mapping=[
    //      #redefine number of records for this section, since we don't need to save it for each data record
    //      wrecords=10
    //      #variable size so use an average string size
    //      elementSize=10
    //      sectionType='stringMap'
    //    ]
    //    category=[
    //      dim=10
    //      #elementSize=sizeof(ElemType) is default
    //      sectionType='categoryLabels'
    //    ]
    //    labelType='category'
    //  ]
    //]
    template <class ConfigRecordType>
    void InitFromConfig(const ConfigRecordType&);
    virtual void Init(const ConfigParameters& config) override
    {
        InitFromConfig(config);
    }
    virtual void Init(const ScriptableObjects::IConfigRecord& config) override
    {
        InitFromConfig(config);
    }
    
    template <class _T, int _N>
class hardcoded_array
{
    _T data[_N];
    inline void check_index(size_t i) const
    {
        i;
        assert(i < _N);
    }
    inline void check_size(size_t n) const
    {
        n;
        assert(n == _N);
    }
    }
    
    
    {
    {
    {    // please add anything else you might need HERE
};
};
};

    
      /*!
   * \brief Push row block into the page.
   * \param batch the row batch.
   */
  inline void Push(const dmlc::RowBlock<uint32_t>& batch) {
    data.reserve(data.size() + batch.offset[batch.size] - batch.offset[0]);
    offset.reserve(offset.size() + batch.size);
    CHECK(batch.index != nullptr);
    for (size_t i = 0; i < batch.size; ++i) {
      offset.push_back(offset.back() + batch.offset[i + 1] - batch.offset[i]);
    }
    for (size_t i = batch.offset[0]; i < batch.offset[batch.size]; ++i) {
      uint32_t index = batch.index[i];
      bst_float fvalue = batch.value == nullptr ? 1.0f : batch.value[i];
      data.emplace_back(index, fvalue);
    }
    CHECK_EQ(offset.back(), data.size());
  }
  /*!
   * \brief Push a sparse page
   * \param batch the row page
   */
  inline void Push(const SparsePage &batch) {
    size_t top = offset.back();
    data.resize(top + batch.data.size());
    std::memcpy(dmlc::BeginPtr(data) + top,
                dmlc::BeginPtr(batch.data),
                sizeof(Entry) * batch.data.size());
    size_t begin = offset.size();
    offset.resize(begin + batch.Size());
    for (size_t i = 0; i < batch.Size(); ++i) {
      offset[i + begin] = top + batch.offset[i + 1];
    }
  }
  /*!
   * \brief Push one instance into page
   *  \param inst an instance row
   */
  inline void Push(const Inst &inst) {
    offset.push_back(offset.back() + inst.length);
    size_t begin = data.size();
    data.resize(begin + inst.length);
    if (inst.length != 0) {
      std::memcpy(dmlc::BeginPtr(data) + begin, inst.data,
                  sizeof(Entry) * inst.length);
    }
  }
    
    
    {namespace data {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(sparse_page_raw_format);
}  // namespace data
}  // namespace xgboost

    
    class LogCallbackRegistry {
 public:
  using Callback = void (*)(const char*);
  LogCallbackRegistry()
    : log_callback_([] (const char* msg) { std::cerr << msg << std::endl; }) {}
  inline void Register(Callback log_callback) {
    this->log_callback_ = log_callback;
  }
  inline Callback Get() const {
    return log_callback_;
  }
 private:
  Callback log_callback_;
};
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('ndcg@2-');
  ASSERT_STREQ(metric->Name(), 'ndcg@2-');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.3868f, 0.001f);
}
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
    #include <boost/lexical_cast.hpp>
    
      HRESULT hr = E_FAIL;
    
    /**
 * @brief Pretty print a QueryData object
 *
 * This is a helper method which called osquery::beautify on the supplied
 * QueryData object and prints the results to stdout.
 *
 * @param results The QueryData object to print
 * @param columns The order of the keys (since maps are unordered)
 * @param lengths A mutable set of column lengths
 */
void prettyPrint(const QueryData& results,
                 const std::vector<std::string>& columns,
                 std::map<std::string, size_t>& lengths);
    
      short family{0};
    
      CQueue *queue_{nullptr};
    
    
    {  // Too many fields
  bad_line = R'('2016-03-22T21:17:01.701882+00:00','','6','','','','')';
  ec = pub.createEventContext();
  status = pub.populateEventContext(bad_line, ec);
  ASSERT_FALSE(status.ok());
  ASSERT_NE(std::string::npos, status.getMessage().find('more'));
}
    
    
    {    return true;
}
    
    static VkDescriptorSetLayout        g_DescriptorSetLayout = VK_NULL_HANDLE;
static VkPipelineLayout             g_PipelineLayout = VK_NULL_HANDLE;
static VkDescriptorSet              g_DescriptorSet = VK_NULL_HANDLE;
static VkPipeline                   g_Pipeline = VK_NULL_HANDLE;
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        if (EXPECTS_CRASH_DUMP_END == _state)
        return -1;
    
    #endif /* DUMPCRASHSTACK_H_ */

    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    #endif

    
    
    {
    {        if (JNI_OK == status_) {
            we_attach_ = true;
            pthread_setspecific(g_env_key, env_);
        } else {
            ASSERT2(false, 'vm:%p, env:%p, status:%d', vm_, env_, status_);
            env_ = NULL;
            return;
        }
    } while (false);
    
    jint ret = env_->PushLocalFrame(_capacity);
    ASSERT2(0 == ret, 'ret:%d', ret);
}
    
    std::string AbstractOptionHandler::toTagString() const
{
  std::string s;
  for (int i = 0; i < MAX_HELP_TAG; ++i) {
    if (tags_ & (1 << i)) {
      s += strHelpTag(i);
      s += ', ';
    }
  }
  if (!s.empty()) {
    s.resize(s.size() - 2);
  }
  return s;
}
    
    private:
  void startAsyncFamily(const std::string& hostname, int family,
                        DownloadEngine* e, Command* command);
  void setNameResolverCheck(size_t resolverIndex, DownloadEngine* e,
                            Command* command);
  void disableNameResolverCheck(size_t index, DownloadEngine* e,
                                Command* command);