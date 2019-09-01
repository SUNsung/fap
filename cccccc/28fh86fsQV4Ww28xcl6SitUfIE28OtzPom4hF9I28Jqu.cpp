
        
        class SignVerifyMessageDialog : public QDialog
{
    Q_OBJECT
    }
    
    bool UniValue::get_bool() const
{
    if (typ != VBOOL)
        throw std::runtime_error('JSON value is not a boolean as expected');
    return getBool();
}
    
        uv.setInt(43);
    obj.pushKV('age', uv);
    BOOST_CHECK_EQUAL(obj.size(), 1);
    BOOST_CHECK_EQUAL(obj['age'].getValStr(), '43');
    
    #endif // BITCOIN_BECH32_H

    
      int TotalTableFiles() {
    int result = 0;
    for (int level = 0; level < config::kNumLevels; level++) {
      result += NumTableFilesAtLevel(level);
    }
    return result;
  }
    
    // Value types encoded as the last component of internal keys.
// DO NOT CHANGE THESE ENUM VALUES: they are embedded in the on-disk
// data structures.
enum ValueType {
  kTypeDeletion = 0x0,
  kTypeValue = 0x1
};
// kValueTypeForSeek defines the ValueType that should be passed when
// constructing a ParsedInternalKey object for seeking to a particular
// sequence number (since we sort sequence numbers in decreasing order
// and the value type is embedded as the low 8 bits in the sequence
// number in internal keys, we need to use the highest-numbered
// ValueType, not the lowest).
static const ValueType kValueTypeForSeek = kTypeValue;
    
      void PartialCompactTestPreFault(int num_pre_sync, int num_post_sync) {
    DeleteAllData();
    Build(0, num_pre_sync);
    db_->CompactRange(NULL, NULL);
    Build(num_pre_sync, num_post_sync);
  }
    
    
    {  auto nn = caffe2::convertToNNModule(net);
  auto new_netdef = caffe2::convertToCaffe2Proto(nn);
  EXPECT_EQ(new_netdef.external_input().size(), net.external_input().size());
  for (auto i = 0; i < net.external_input().size(); ++i) {
    EXPECT_EQ(new_netdef.external_input(i), net.external_input(i));
  }
}
    
    
    {  Linear l1, l2, l3;
};
    
      /// The running mean.
  /// Only defined if the `stateful` option was `true` upon construction.
  Tensor running_mean;
    
    namespace caffe {
    }
    
    string hdf5_get_name_by_idx(hid_t loc_id, int idx) {
  ssize_t str_size = H5Lget_name_by_idx(
      loc_id, '.', H5_INDEX_NAME, H5_ITER_NATIVE, idx, NULL, 0, H5P_DEFAULT);
  CHECK_GE(str_size, 0) << 'Error retrieving HDF5 dataset at index ' << idx;
  char *c_str = new char[str_size+1];
  ssize_t status = H5Lget_name_by_idx(
      loc_id, '.', H5_INDEX_NAME, H5_ITER_NATIVE, idx, c_str, str_size+1,
      H5P_DEFAULT);
  CHECK_GE(status, 0) << 'Error retrieving HDF5 dataset at index ' << idx;
  string result(c_str);
  delete[] c_str;
  return result;
}
    
    TYPED_TEST(NeuronLayerTest, TestReLUGradient) {
  typedef typename TypeParam::Dtype Dtype;
  LayerParameter layer_param;
  ReLULayer<Dtype> layer(layer_param);
  GradientChecker<Dtype> checker(1e-2, 1e-3, 1701, 0., 0.01);
  checker.CheckGradientEltwise(&layer, this->blob_bottom_vec_,
      this->blob_top_vec_);
}
    
    
    {}  // namespace caffe

    
    template <typename Dtype>
void PoolingLayer<Dtype>::LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  PoolingParameter pool_param = this->layer_param_.pooling_param();
  if (pool_param.global_pooling()) {
    CHECK(!(pool_param.has_kernel_size() ||
      pool_param.has_kernel_h() || pool_param.has_kernel_w()))
      << 'With Global_pooling: true Filter size cannot specified';
  } else {
    CHECK(!pool_param.has_kernel_size() !=
      !(pool_param.has_kernel_h() && pool_param.has_kernel_w()))
      << 'Filter size is kernel_size OR kernel_h and kernel_w; not both';
    CHECK(pool_param.has_kernel_size() ||
      (pool_param.has_kernel_h() && pool_param.has_kernel_w()))
      << 'For non-square filters both kernel_h and kernel_w are required.';
  }
  CHECK((!pool_param.has_pad() && pool_param.has_pad_h()
      && pool_param.has_pad_w())
      || (!pool_param.has_pad_h() && !pool_param.has_pad_w()))
      << 'pad is pad OR pad_h and pad_w are required.';
  CHECK((!pool_param.has_stride() && pool_param.has_stride_h()
      && pool_param.has_stride_w())
      || (!pool_param.has_stride_h() && !pool_param.has_stride_w()))
      << 'Stride is stride OR stride_h and stride_w are required.';
  global_pooling_ = pool_param.global_pooling();
  round_mode_ = pool_param.round_mode();
  if (global_pooling_) {
    kernel_h_ = bottom[0]->height();
    kernel_w_ = bottom[0]->width();
  } else {
    if (pool_param.has_kernel_size()) {
      kernel_h_ = kernel_w_ = pool_param.kernel_size();
    } else {
      kernel_h_ = pool_param.kernel_h();
      kernel_w_ = pool_param.kernel_w();
    }
  }
  CHECK_GT(kernel_h_, 0) << 'Filter dimensions cannot be zero.';
  CHECK_GT(kernel_w_, 0) << 'Filter dimensions cannot be zero.';
  if (!pool_param.has_pad_h()) {
    pad_h_ = pad_w_ = pool_param.pad();
  } else {
    pad_h_ = pool_param.pad_h();
    pad_w_ = pool_param.pad_w();
  }
  if (!pool_param.has_stride_h()) {
    stride_h_ = stride_w_ = pool_param.stride();
  } else {
    stride_h_ = pool_param.stride_h();
    stride_w_ = pool_param.stride_w();
  }
  if (global_pooling_) {
    CHECK(pad_h_ == 0 && pad_w_ == 0 && stride_h_ == 1 && stride_w_ == 1)
      << 'With Global_pooling: true; only pad = 0 and stride = 1';
  }
  if (pad_h_ != 0 || pad_w_ != 0) {
    CHECK(this->layer_param_.pooling_param().pool()
        == PoolingParameter_PoolMethod_AVE
        || this->layer_param_.pooling_param().pool()
        == PoolingParameter_PoolMethod_MAX)
        << 'Padding implemented only for average and max pooling.';
    CHECK_LT(pad_h_, kernel_h_);
    CHECK_LT(pad_w_, kernel_w_);
  }
}
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      inline int offset(const int n, const int c = 0, const int h = 0,
      const int w = 0) const {
    CHECK_GE(n, 0);
    CHECK_LE(n, num());
    CHECK_GE(channels(), 0);
    CHECK_LE(c, channels());
    CHECK_GE(height(), 0);
    CHECK_LE(h, height());
    CHECK_GE(width(), 0);
    CHECK_LE(w, width());
    return ((n * channels() + c) * height() + h) * width() + w;
  }
    
      // Thread local context for Caffe. Moved to common.cpp instead of
  // including boost/thread.hpp to avoid a boost/NVCC issues (#1009, #1010)
  // on OSX. Also fails on Linux with CUDA 7.0.18.
  static Caffe& Get();
    
      /**
   * @brief Applies the same transformation defined in the data layer's
   * transform_param block to all the num images in a input_blob.
   *
   * @param input_blob
   *    A Blob containing the data to be transformed. It applies the same
   *    transformation to all the num images in the blob.
   * @param transformed_blob
   *    This is destination blob, it will contain as many images as the
   *    input blob. It can be part of top blob's data.
   */
  void Transform(Blob<Dtype>* input_blob, Blob<Dtype>* transformed_blob);
    
        // Implementation of Blockwise Model Update and Filtering (BMUF, a.k.a. block momentum) 
    // For detail, see the following paper
    // Kai Chen and Qiang Huo, 'Scalable training of deep learning machines by incremental block training 
    // with intra-block parallel optimization and blockwise model-update filtering', 
    // in International Conference on Acoustics, Speech and Signal Processing , March 2016, Shanghai, China. 
    
    
    {            if (pass == ndlPassResolve)
            {
                void* np = nodeResult->GetEvalValue();
                assert(np != nullptr);
                inputs.push_back((void*)np);
            }
            else if (pass == ndlPassInitial) // for initial pass we are only interested in resolved nodes (to get constant values)
            {
                inputs.push_back((void*)nodeResult);
            }
            // NOTE: in final pass inputs are always NULL
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
    
        // empty constructor
    NDLScript()
        : ConfigParser(';')
    {
        m_macroNode = NULL;
        m_noDefinitions = false;
        m_definingMacro = false;
    } // parameterless version if needed
    
    
    {        // We don't use CreateFromFile() here since the user might specify OutputNodeNames in the config.
        // By not compiling the network before patching, we avoid double log output for validation.
        net = make_shared<ComputationNetwork>(deviceId);
        net->SetTraceLevel(config(L'traceLevel', 0));
        net->Read<ElemType>(modelPath);
        if (outputNodeNames.size() > 0)
            PatchOutputNodes(net, outputNodeNames, outputNodeNamesVector);
        net->CompileNetwork();
    }
    
                fprintf(stderr, '\n');
            if (traceLevel > 0)
            {
            LOGPRINTF(stderr, 'Action \'%s\' complete.\n\n', thisAction.c_str());
            }
    
            m_communicator->AggregateInPlace(valuesToAggregate, m_communicator->Workers());
    
            // Accumulator nodes already accumulate error for all samples that passed through network in forward pass.
        // For them we use 1 as number of samples to avoid averaging again.
        // Also, we always perform reset for those nodes to avoid accumulating again.
        bool nodeContainsAccumulatedResult = ContainsAccumulatedResult(node);
    
    
    {} // namespace aria2

    
    void DHTRoutingTable::dropNode(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->dropNode(node);
}
/*
  void DHTRoutingTable::moveBucketHead(const std::shared_ptr<DHTNode>& node)
  {
  getBucketFor(node)->moveToHead(node);
  }
*/
void DHTRoutingTable::moveBucketTail(const std::shared_ptr<DHTNode>& node)
{
  getBucketFor(node)->moveToTail(node);
}
    
    namespace aria2 {
    }
    
    void DHTTaskFactoryImpl::setMessageFactory(DHTMessageFactory* factory)
{
  factory_ = factory;
}
    
    #include 'DHTTaskQueue.h'
#include 'DHTTaskExecutor.h'
    
    
    {} // namespace aria2

    
      ~DHTTokenTracker();
    
    public:
  DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                        std::chrono::seconds interval);
    
    void DNSCache::markBad(const std::string& hostname, const std::string& ipaddr,
                       uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.find(target);
  if (i != entries_.end()) {
    (*i)->markBad(ipaddr);
  }
}
    
        bool contains(const std::string& addr) const;
    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    
    // out_of_range.106
    try
    {
        // try to use an array index with leading '0'
        json::reference ref = j.at('/array/01'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }