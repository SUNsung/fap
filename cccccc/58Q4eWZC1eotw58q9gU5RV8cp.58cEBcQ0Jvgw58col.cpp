
        
        Dictionary::Dictionary(const Dictionary& other) = default;
    
    Promise::Promise() : isolate_(NULL) {}
    
    template <typename T>
struct Converter<mate::Handle<T>> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const mate::Handle<T>& val) {
    return val.ToV8();
  }
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     mate::Handle<T>* out) {
    T* object = NULL;
    if (val->IsNull() || val->IsUndefined()) {
      *out = mate::Handle<T>();
      return true;
    }
    if (!Converter<T*>::FromV8(isolate, val, &object)) {
      return false;
    }
    v8::Local<v8::Context> context = isolate->GetCurrentContext();
    *out = mate::Handle<T>(val->ToObject(context).ToLocalChecked(), object);
    return true;
  }
};
    
      void reset(v8::Isolate* isolate, v8::Local<T> handle) {
    if (!handle.IsEmpty()) {
      isolate_ = isolate;
      handle_.Reset(isolate, handle);
    } else {
      reset();
    }
  }
    
    
    {  return exports;
}
    
    grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    namespace grpc {
namespace testing {
namespace {
    }
    }
    }
    
    static void winsock_init(void) {
  WSADATA wsaData;
  int status = WSAStartup(MAKEWORD(2, 0), &wsaData);
  GPR_ASSERT(status == 0);
}
    
      status =
      bind(sock, (grpc_sockaddr*)&local_address.addr, (int)local_address.len);
  if (status != 0) {
    error = GRPC_WSA_ERROR(WSAGetLastError(), 'bind');
    goto failure;
  }
    
      UniquePtr<char> Get();
  void Set(const char* value);
    
    static void test_setenv_getenv(void) {
  const char* name = 'FOO';
  const char* value = 'BAR';
  char* retrieved_value;
    }
    
    GPR_GLOBAL_CONFIG_DEFINE_BOOL(bool_var, false, '');
GPR_GLOBAL_CONFIG_DEFINE_INT32(int32_var, 0, '');
GPR_GLOBAL_CONFIG_DEFINE_STRING(string_var, '', '');
    
    bool grpc_combiner_continue_exec_ctx();
    
    #ifndef GRPCPP_CREATE_CHANNEL_H
#define GRPCPP_CREATE_CHANNEL_H
    
    ChannelCredentials::~ChannelCredentials() {}
    
    using grpc::testing::EchoRequest;
using grpc::testing::EchoResponse;
using std::chrono::system_clock;
    
        SendHealthCheckRpc('', Status::OK, HealthCheckResponse::SERVING);
    SendHealthCheckRpc(kHealthyService, Status::OK,
                       HealthCheckResponse::SERVING);
    SendHealthCheckRpc(kUnhealthyService, Status::OK,
                       HealthCheckResponse::NOT_SERVING);
    SendHealthCheckRpc(kNotRegisteredService,
                       Status(StatusCode::NOT_FOUND, ''));
    SendHealthCheckRpc(kNewService, Status(StatusCode::NOT_FOUND, ''));
    
    // Add a second service that is fully split server streamed
class FullySplitStreamedDupPkg
    : public duplicate::EchoTestService::SplitStreamedService {
 public:
  Status StreamedResponseStream(
      ServerContext* context,
      ServerSplitStreamer<EchoRequest, EchoResponse>* stream) override {
    EchoRequest req;
    EchoResponse resp;
    uint32_t next_msg_sz;
    stream->NextMessageSize(&next_msg_sz);
    gpr_log(GPR_INFO, 'Split Streamed Next Message Size is %u', next_msg_sz);
    GPR_ASSERT(stream->Read(&req));
    for (int i = 0; i < kServerDefaultResponseStreamsToSend; i++) {
      resp.set_message(req.message() + grpc::to_string(i) + '_dup');
      GPR_ASSERT(stream->Write(resp));
    }
    return Status::OK;
  }
};
    
    
    {    const protobuf::Descriptor* desc = desc_pool_->FindMessageTypeByName(type);
    const protobuf::Descriptor* ref_desc =
        ref_desc_pool_->FindMessageTypeByName(type);
    EXPECT_TRUE(desc != nullptr);
    EXPECT_TRUE(ref_desc != nullptr);
    EXPECT_EQ(desc->DebugString(), ref_desc->DebugString());
  }
    
    
    {  if (s.ok() && meta->file_size > 0) {
    // Keep it
  } else {
    env->DeleteFile(fname);
  }
  return s;
}
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
      // keys[0,n-1] contains a list of keys (potentially with duplicates)
  // that are ordered according to the user supplied comparator.
  // Append a filter that summarizes keys[0,n-1] to *dst.
  //
  // Warning: do not change the initial contents of *dst.  Instead,
  // append the newly constructed filter to *dst.
  virtual void CreateFilter(const Slice* keys, int n,
                            std::string* dst) const = 0;
    
      // Change this slice to refer to an empty array
  void clear() {
    data_ = '';
    size_ = 0;
  }
    
    namespace {
    }
    
      // TODO(sanjay): Skip this if footer.metaindex_handle() size indicates
  // it is an empty block.
  ReadOptions opt;
  if (rep_->options.paranoid_checks) {
    opt.verify_checksums = true;
  }
  BlockContents contents;
  if (!ReadBlock(rep_->file, opt, footer.metaindex_handle(), &contents).ok()) {
    // Do not propagate errors since meta info is not needed for operation
    return;
  }
  Block* meta = new Block(contents);
    
    /*!
 * \brief create a matrix content from CSR format
 * \param indptr pointer to row headers
 * \param indices findex
 * \param data fvalue
 * \param nindptr number of rows in the matrix + 1
 * \param nelem number of nonzero elements in the matrix
 * \param num_col number of columns; when it's set to 0, then guess from data
 * \param out created dmatrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromCSREx(const size_t* indptr,
                                     const unsigned* indices,
                                     const float* data,
                                     size_t nindptr,
                                     size_t nelem,
                                     size_t num_col,
                                     DMatrixHandle* out);
/*!
 * \brief create a matrix content from CSC format
 * \param col_ptr pointer to col headers
 * \param indices findex
 * \param data fvalue
 * \param nindptr number of rows in the matrix + 1
 * \param nelem number of nonzero elements in the matrix
 * \param num_row number of rows; when it's set to 0, then guess from data
 * \param out created dmatrix
 * \return 0 when success, -1 when failure happens
 */
XGB_DLL int XGDMatrixCreateFromCSCEx(const size_t* col_ptr,
                                     const unsigned* indices,
                                     const float* data,
                                     size_t nindptr,
                                     size_t nelem,
                                     size_t num_row,
                                     DMatrixHandle* out);
    
    struct SquaredLogError {
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float label) {
    return label > -1;
  }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);  // ensure correct value for log1p
    return (std::log1p(predt) - std::log1p(label)) / (predt + 1);
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);
    float res = (-std::log1p(predt) + std::log1p(label) + 1) /
                std::pow(predt + 1, 2);
    res = fmaxf(res, 1e-6f);
    return res;
  }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() {
    return 'label must be greater than -1 for rmsle so that log(label + 1) can be valid.';
  }
  static const char* DefaultEvalMetric() { return 'rmsle'; }
};
    
    // Define a customized logistic regression objective in C++.
// Implement the interface.
class MyLogistic : public ObjFunction {
 public:
  void Configure(const std::vector<std::pair<std::string, std::string> >& args) override {
    param_.InitAllowUnknown(args);
  }
  void GetGradient(const HostDeviceVector<bst_float> &preds,
                   const MetaInfo &info,
                   int iter,
                   HostDeviceVector<GradientPair> *out_gpair) override {
    out_gpair->Resize(preds.Size());
    const std::vector<bst_float>& preds_h = preds.HostVector();
    std::vector<GradientPair>& out_gpair_h = out_gpair->HostVector();
    const std::vector<bst_float>& labels_h = info.labels_.HostVector();
    for (size_t i = 0; i < preds_h.size(); ++i) {
      bst_float w = info.GetWeight(i);
      // scale the negative examples!
      if (labels_h[i] == 0.0f) w *= param_.scale_neg_weight;
      // logistic transformation
      bst_float p = 1.0f / (1.0f + std::exp(-preds_h[i]));
      // this is the gradient
      bst_float grad = (p - labels_h[i]) * w;
      // this is the second order gradient
      bst_float hess = p * (1.0f - p) * w;
      out_gpair_h.at(i) = GradientPair(grad, hess);
    }
  }
  const char* DefaultEvalMetric() const override {
    return 'error';
  }
  void PredTransform(HostDeviceVector<bst_float> *io_preds) override {
    // transform margin value to probability.
    std::vector<bst_float> &preds = io_preds->HostVector();
    for (size_t i = 0; i < preds.size(); ++i) {
      preds[i] = 1.0f / (1.0f + std::exp(-preds[i]));
    }
  }
  bst_float ProbToMargin(bst_float base_score) const override {
    // transform probability to margin value
    return -std::log(1.0f / base_score - 1.0f);
  }
    }
    
    
    {
    {XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
.describe('Raw binary data format.')
.set_body([]() {
    return new SparsePageRawFormat();
  });
}  // namespace data
}  // namespace xgboost

    
      template <typename IterT>
  void Write(CompressedByteT *buffer, IterT input_begin, IterT input_end) {
    uint64_t tmp = 0;
    size_t stored_bits = 0;
    const size_t max_stored_bits = 64 - symbol_bits_;
    size_t buffer_position = detail::kPadding;
    const size_t num_symbols = input_end - input_begin;
    for (size_t i = 0; i < num_symbols; i++) {
      typename std::iterator_traits<IterT>::value_type symbol = input_begin[i];
      if (stored_bits > max_stored_bits) {
        // Eject only full bytes
        size_t tmp_bytes = stored_bits / 8;
        for (size_t j = 0; j < tmp_bytes; j++) {
          buffer[buffer_position] = static_cast<CompressedByteT>(
              tmp >> (stored_bits - (j + 1) * 8));
          buffer_position++;
        }
        stored_bits -= tmp_bytes * 8;
        tmp &= (1 << stored_bits) - 1;
      }
      // Store symbol
      tmp <<= symbol_bits_;
      tmp |= symbol;
      stored_bits += symbol_bits_;
    }
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
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
                // if we have resolved the name, no need to continue evaluation
            if (!(pass == ndlPassResolve && nodeResolve && nodeParam->GetEvalValue() == nullptr))
            {
                break;
            }
            if (pass > ndlPassInitial && evaluateNode && nodeResolve)
            {
                std::string name = nodeResolve->GetName();
                // we need to start from the parent script, because that is the namespace of the parameter being passed in
                NDLScript<ElemType>* parentScript = nodeResolve->GetParentScript();
                nodeResolve = parentScript->FindSymbol(name);
    }
    
        // ClearLastNodes - Clear out the last node values for all passes
    void ClearLastNodes()
    {
        for (NDLPass pass = ndlPassInitial; pass < ndlPassMax; ++pass)
        {
            lastNode[pass] = nullptr;
        }
    }
    
    
    {
    {        // the rest is done in a lambda that is only evaluated when a virgin network is needed
        // Note that evaluating the BrainScript *is* instantiating the network, so the evaluate call must be inside the lambda.
        createNetworkFn = [expr](DEVICEID_TYPE /*deviceId*/)
        {
            // evaluate the parse tree, particularly the top-level field 'network'
            // Evaluating it will create the network.
            let object = EvaluateField(expr, L'network');                   // this comes back as a BS::Object
            let network = dynamic_pointer_cast<ComputationNetwork>(object); // cast it
            if (!network)
                LogicError('BuildNetworkFromDescription: ComputationNetwork not what it was meant to be');
            return network;
        };
        return true;
    }
    else
        return false;
}
    
                        // output = (ComputationNodePtr)BuildLSTMNodeComponent(randomSeed, i, m_layerSizes[i], m_layerSizes[i + 1], input);
                    output = (ComputationNodePtr) BuildLSTMComponent(randomSeed, i, m_layerSizes[i], m_layerSizes[i + 1], input);
                    // previously used function, now uses LSTMnode, which is fast and correct
    
    // function to create an object of a certain type, using both old CNTK config and BrainScript
template <class C>
shared_ptr<C> CreateObject(const ScriptableObjects::IConfigRecord& config, const wchar_t* id)
{
    // TODO: CNTK config added 'traceLevel = 0' to 'config'. In BS, we cannot do that (IConfigRecord is immutable). Solution: Just say 'traceLevel = 0' in the BS macros for readers.
    return config[id].AsPtr<C>(); // BS instantiates this object through this call
}
template <class C>
shared_ptr<C> CreateObject(const ConfigParameters& config, const wchar_t* id)
{
    ConfigParameters objConfig(config(id));
    const auto& readerType = string(objConfig('readerType', ''));
    if (objConfig.ExistsCurrent('traceLevel') || // do not overwrite 'traceLevel' if it's already present
        AreEqualIgnoreCase(readerType, 'CNTKTextFormatReader') || // do not overwrite 'traceLevel' when creating a CTF reader
        AreEqualIgnoreCase(readerType, 'CNTKBinaryReader'))  // do not overwrite 'traceLevel' when creating a binary reader
    {
        return make_shared<C>(objConfig);
    }
    }
    
    
    {    // if any of the action has set a reader/SGD section and has different Truncated value for reader and SGD section
    ConfigArray actions = commandConfig(L'action');
    for (size_t i = 0; i < actions.size(); i++)
    {
        if (actions[i] == 'train' || actions[i] == 'trainRNN')
        {
            ConfigParameters sgd = ConfigParameters(commandConfig(L'SGD'));
            ConfigParameters reader = ConfigParameters(commandConfig(L'reader'));
            // reader and SGD sections are two must-have sections in train/trainRNN
            if (reader.ExistsCurrent(L'Truncated') && !sgd.ExistsCurrent(L'Truncated'))
            {
                InvalidArgument('DisableLegacyUsage: setting Truncated only in reader section are not allowed. Please move Truncated=true/false to the top level section.');
            }
        }
    }
}
static void DisableLegacyUsage(const ConfigParameters& TopLevelConfig, const ConfigArray& commands)
{
    for (size_t i = 0; i < commands.size(); i++)
    {
        ConfigParameters cfgParameters(TopLevelConfig(commands[i]));
        DisableLegacyTruncationSettings(TopLevelConfig, cfgParameters);
    }
}
    
        // ////////////////////////////////////////////////////////////////////////
    //    specify arc connections
    // ////////////////////////////////////////////////////////////////////////
    for (auto x = arcs.begin(); x != arcs.end(); x++)
    {
        ComputationNodeBasePtr src = (*x).first;
        ComputationNodeBasePtr des = (*x).second;
    }
    
        void VerifyGradientOptimization(const ComputationNodeBase* gradientInitializedBy) const
    {
        if (m_gradientInitializedBy != gradientInitializedBy && IsGradientOptimized(gradientInitializedBy))
            LogicError('Unexpected gradient initialization');
    }
    
        // create the writer if necessary
    if (m_writer == nullptr)
    {
        m_writer = new EvalWriter<ElemType>(config);
    }