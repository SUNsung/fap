
        
        void BrowserWindow::UpdateDraggableRegions(
    content::RenderFrameHost* rfh,
    const std::vector<DraggableRegion>& regions) {
  if (window_->has_frame())
    return;
  static_cast<NativeWindowViews*>(window_.get())
      ->UpdateDraggableRegions(DraggableRegionsToSkRegion(regions));
}
    
      // Returns all objects in this class's weak map.
  static std::vector<v8::Local<v8::Object>> GetAll(v8::Isolate* isolate) {
    if (weak_map_)
      return weak_map_->Values(isolate);
    else
      return std::vector<v8::Local<v8::Object>>();
  }
    
    
    {}  // namespace atom
    
      static std::string GetFeedURL();
  static void SetFeedURL(mate::Arguments* args);
  static void CheckForUpdates();
  static void QuitAndInstall();
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    namespace base {
class FilePath;
}
    
    // Initialization funciton called by caffeOp & caffeLoss
template<typename Dtype>
void InitCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    v->push_back(new ::caffe::Blob<Dtype>());
}
    
    // specialize define for Layer Parameter
template<>
class FieldEntry<caffe::LayerParameter>
    : public FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> {
 public:
  // parent class
  typedef FieldEntryBase<FieldEntry<caffe::LayerParameter>, caffe::LayerParameter> Parent;
    }
    
    namespace mxnet {
namespace io {
/*!
 * \brief OpenCV based Image augmenter,
 *  The augmenter can contain internal temp state.
 */
class ImageAugmenter {
 public:
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief augment src image.
   *   this function is not thread safe, and will only be called by one thread
   *   however, it will tries to re-use memory space as much as possible
   * \param src the source image
   * \param prnd pointer to random number generator.
   * \return The processed image.
   */
  virtual cv::Mat Process(const cv::Mat &src, std::vector<float> *label,
                          common::RANDOM_ENGINE *prnd) = 0;
  // virtual destructor
  virtual ~ImageAugmenter() {}
  /*!
   * \brief factory function
   * \param name Name of the augmenter
   * \return The created augmenter.
   */
  static ImageAugmenter* Create(const std::string& name);
};
    }
    }
    
    // these gpu functions are defined in gradient_compression.cu
void Quantize2BitImpl(mshadow::Stream<mshadow::gpu> *s, const std::vector<mxnet::TBlob> &inputs,
                      const float threshold);
void Dequantize2BitImpl(mshadow::Stream<mshadow::gpu> *s, const std::vector<mxnet::TBlob> &inputs,
                        const float threshold);
    
    
    {  if (has('dist')) {
#if MXNET_USE_DIST_KVSTORE
    kv = new kvstore::KVStoreDist(use_device_comm);
    if (!has('_async') && kv->IsWorkerNode() && kv->get_rank() == 0) {
      // configure the server to be the sync mode
      kv->SendCommandToServers(static_cast<int>(kvstore::CommandType::kSyncMode), '');
    }
#else
    LOG(FATAL) << 'compile with USE_DIST_KVSTORE=1 to use ' << tname;
    return nullptr;
#endif  // MXNET_USE_DIST_KVSTORE
  } else {
    if (has('nccl')) {
#if MXNET_USE_NCCL
      kv = new kvstore::KVStoreNCCL();
#else
      LOG(FATAL) << 'compile with USE_NCCL=1 to use ' << tname;
      return nullptr;
#endif
    } else {
      kv =  new kvstore::KVStoreLocal(use_device_comm);
    }
  }
  kv->type_ = tname;
  return kv;
}
    
    template <>
void EvalBroadcast<DEVICE>(TBlob const& src, TBlob* ret, int size, RunContext ctx) {
  typedef DEVICE xpu;
  mshadow::Stream<xpu>* s = ctx.get_stream<xpu>();
  mshadow::Tensor<xpu, 3> out = ret->get<xpu, 3, real_t>(s);
  mshadow::Tensor<xpu, 2> in = src.get<xpu, 2, real_t>(s);
  out = mshadow::expr::broadcast_with_axis(in, 0, size);
}
    
        info = MXNET_LAPACK_posv<DType>(MXNET_LAPACK_ROW_MAJOR, 'U',
      k, out.size(1), hadamard_prod.dptr_, hadamard_prod.stride_,
      out.dptr_, out.stride_);
  } else {
    Tensor<cpu, 2, DType> kr(Shape2(out.size(1), out.size(0)));
    AllocSpace(&kr);
    khatri_rao(kr, ts_arr);
    
       out = data / sqrt(data.shape[-1])
    
    Operator *IdentityAttachKLSparseRegProp::CreateOperator(Context ctx) const {
  DO_BIND_DISPATCH(CreateOp, param_);
}
    
    
    {
    {        // For now reusing the shim to allow prefetch.
        // Please only use a subset of the shim interface that includes
        // Init()/StartEpoch()/GetMinibatch()/IsEndOfEpoch()
        // Shim will be deleted in the future versions.
        std::shared_ptr<ReaderShim<float>> m_shim;
        Microsoft::MSR::CNTK::StreamMinibatchInputs m_matrices;
    };
}

    
        void NDMask::Clear()
    {
        // Clear the mask by marking all samples as Valid
        GetMatrix()->SetValue((char)MaskKind::Valid);
    }
    
                m_totalSummaries++;
            auto now = std::chrono::high_resolution_clock::now();
            size_t durationMs = std::chrono::duration_cast<std::chrono::milliseconds>(now - m_lastResetTime).count();
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
    
            static NDShape GetUnpackedShape(const NDShape& sampleShape, const std::vector<Axis>& sampleDynamicAxes, const std::shared_ptr<Microsoft::MSR::CNTK::MBLayout>& packedDataLayout)
        {
            // Determine unpacked shape
            auto unpackedShape = sampleShape;
            if (packedDataLayout)
            {
                if (sampleDynamicAxes.empty())
                    LogicError('A PackedValue object that has a layout must have at least one dynamic axis.');
    }
    }
    
            if (m_valueInitializer->Contains(RandomSeedAttributeName)) {
            auto& seed = m_valueInitializer->operator[](RandomSeedAttributeName);
            if ((unsigned long)seed.Value<size_t>() == SentinelValueForAutoSelectRandomSeed)
                seed.Value<size_t>() = Internal::GenerateRandomSeed();
        }
    
        // Releases the mutex
    void Release()
    {
        assert(m_handle != NULL);
        int rc = 0;
        rc = ::ReleaseMutex(m_handle);
        if ((rc == RELEASEMUTEX_ERROR) && !std::uncaught_exception())
        {
            RuntimeError('Mutex Release: Failed to release mutex %s: %d', m_name.c_str(), ::GetLastError());
        }
        rc = ::CloseHandle(m_handle);
        if ((rc == CLOSEHANDLE_ERROR) && !std::uncaught_exception())
        {
            RuntimeError('Mutex Release: Failed to close handler %s: %d', m_name.c_str(), ::GetLastError());
        }
        m_handle = NULL;
    }
    
    namespace aria2 {
    }
    
    bool DHTRoutingTable::addNode(const std::shared_ptr<DHTNode>& node, bool good)
{
  A2_LOG_DEBUG(fmt('Trying to add node:%s', node->toString().c_str()));
  if (*localNode_ == *node) {
    A2_LOG_DEBUG('Adding node with the same ID with localnode is not allowed.');
    return false;
  }
  auto treeNode = dht::findTreeNodeFor(root_.get(), node->getID());
  while (1) {
    const std::shared_ptr<DHTBucket>& bucket = treeNode->getBucket();
    if (bucket->addNode(node)) {
      A2_LOG_DEBUG('Added DHTNode.');
      return true;
    }
    else if (bucket->splitAllowed()) {
      A2_LOG_DEBUG(fmt('Splitting bucket. Range:%s-%s',
                       util::toHex(bucket->getMinID(), DHT_ID_LENGTH).c_str(),
                       util::toHex(bucket->getMaxID(), DHT_ID_LENGTH).c_str()));
      treeNode->split();
      ++numBucket_;
      if (treeNode->getLeft()->isInRange(node->getID())) {
        treeNode = treeNode->getLeft();
      }
      else {
        treeNode = treeNode->getRight();
      }
    }
    else {
      if (good) {
        bucket->cacheNode(node);
        A2_LOG_DEBUG(fmt('Cached node=%s', node->toString().c_str()));
      }
      return false;
    }
  }
  return false;
}
    
      std::shared_ptr<DHTNode> localNode_;
    
    class DownloadEngine;
class Command;
    
      virtual std::shared_ptr<DHTTask>
  createNodeLookupTask(const unsigned char* targetID) = 0;
    
    
    {} // namespace aria2
    
    void DHTTokenUpdateCommand::preProcess()
{
  if (getDownloadEngine()->getRequestGroupMan()->downloadFinished() ||
      getDownloadEngine()->isHaltRequested()) {
    enableExit();
  }
}
    
      // always return false
  virtual bool isReply() const CXX11_OVERRIDE;
    
    TEST(ByteTest, SetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  value.set_value(0x06, 3, 3);
  EXPECT_EQ(0x32, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 8);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 10);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 1, 7);
  EXPECT_EQ(0x0C, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, 1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, -1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
}
    
    
    {
    {
    {}  // namespace conti_radar
}  // namespace drivers
}  // namespace apollo

    
      MatrixXd offset_golden(10, 1);
  offset_golden << 0, -40, -80, -120, -160, -200, -240, -280, -320, -360;
    
    void Brakemotorrpt170::Parse(const std::uint8_t* bytes, int32_t length,
                             ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_brake_motor_rpt_1_70()->set_motor_current(
      motor_current(bytes, length));
  chassis->mutable_gem()->mutable_brake_motor_rpt_1_70()->set_shaft_position(
      shaft_position(bytes, length));
}
    
    
    {
    {
    {
    {  double ret = x * 0.001000;
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    // config detail: {'name': 'usr_can_timeout', 'offset': 0.0, 'precision': 1.0,
// 'len': 1, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 5,
// 'type': 'bool', 'order': 'motorola', 'physical_unit': ''}
bool Globalrpt6a::usr_can_timeout(const std::uint8_t* bytes,
                                  int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(5, 1);
    }
    
    #include 'modules/canbus/vehicle/gem/protocol/headlight_rpt_77.h'
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    
    {
    {
    {
    {  int ret = x;
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
        for (i = 1; i < 1024; i++)
    {
        uint32_t key = (rand() % (20000 * 37));
        if (key % 37 == 0)
        {
            continue;
        }
        int ret = (int) (long) swRbtree_find(tree, key);
        ASSERT_EQ(ret, 0);
    }
    
    void my_onShutdown(swServer *serv)
{
    swNotice('Server is shutdown');
}