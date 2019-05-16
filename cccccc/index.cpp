
        
        #include <string>
    
    /**
 Forward declare boost::thread instead of including boost/thread.hpp
 to avoid a boost/NVCC issues (#1009, #1010) on OSX.
 */
namespace boost { class thread; }
    
      // Get a layer using a LayerParameter.
  static shared_ptr<Layer<Dtype> > CreateLayer(const LayerParameter& param) {
    if (Caffe::root_solver()) {
      LOG(INFO) << 'Creating layer ' << param.name();
    }
    const string& type = param.type();
    CreatorRegistry& registry = Registry();
    CHECK_EQ(registry.count(type), 1) << 'Unknown layer type: ' << type
        << ' (known types: ' << LayerTypeListString() << ')';
    return registry[type](param);
  }
    
      /// @brief The spatial dimensions of a filter kernel.
  Blob<int> kernel_shape_;
  /// @brief The spatial dimensions of the stride.
  Blob<int> stride_;
  /// @brief The spatial dimensions of the padding.
  Blob<int> pad_;
  /// @brief The spatial dimensions of the dilation.
  Blob<int> dilation_;
  /// @brief The spatial dimensions of the convolution input.
  Blob<int> conv_input_shape_;
  /// @brief The spatial dimensions of the col_buffer.
  vector<int> col_buffer_shape_;
  /// @brief The spatial dimensions of the output.
  vector<int> output_shape_;
  const vector<int>* bottom_shape_;
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #include <vector>
    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
    
    {} // namespace caffe2

    
        for (int inputIdx = 0; inputIdx < def_.input_size() / 2; ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * 2 + 1));
      output_blob_names.push_back(GI(inputIdx * 2));
    }
    input_blob_names.push_back(GO(2));
    
    REGISTER_CUDA_OPERATOR(LC2D, LocallyConnectedOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    LC2DGradient,
    LocallyConnectedGradientOp<float, CUDAContext>);
    
      virtual std::unique_ptr<Dict> getResponse() = 0;
    
        auto node = std::make_shared<DHTNode>(buf);
    node->setIPAddress(peer.first);
    node->setPort(peer.second);
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
    
      // localnode
  // 8bytes reserved
  WRITE_CHECK(fp, zero, 8);
  // 20bytes localnode ID
  WRITE_CHECK(fp, localNode_->getID(), DHT_ID_LENGTH);
  // 4bytes reserved
  WRITE_CHECK(fp, zero, 4);
    
    #include 'common.h'
    
      virtual std::shared_ptr<DHTTask>
  createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                 int numRetry = 0) CXX11_OVERRIDE;
    
      virtual void executeTask() = 0;
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    public:
  DHTTaskQueueImpl();
    
      bool validateToken(const std::string& token, const unsigned char* infoHash,
                     const std::string& ipaddr, uint16_t port) const;
    
    void DNSCache::put(const std::string& hostname, const std::string& ipaddr,
                   uint16_t port)
{
  auto target = std::make_shared<CacheEntry>(hostname, port);
  auto i = entries_.lower_bound(target);
  if (i != entries_.end() && *(*i) == *target) {
    (*i)->add(ipaddr);
  }
  else {
    target->add(ipaddr);
    entries_.insert(i, target);
  }
}