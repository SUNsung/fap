
        
        
    { private:
  const HloCustomCallInstruction* cudnn_call_;
  std::vector<BufferAllocation::Slice> operand_buffers_;
  BufferAllocation::Slice result_buffer_;
  BufferAllocation::Slice scratch_buffer_;
  BufferAllocation::Slice tuple_result_buffer_;
};
    
    #include 'tensorflow/compiler/xla/service/gpu/infeed_thunk.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/infeed_manager.h'
#include 'tensorflow/compiler/xla/util.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
    
    {
    {}  // namespace gpu
}  // namespace xla

    
      Status ExecuteOnStream(const ExecuteParams& params) override;
    
    SequentialThunk::SequentialThunk(std::vector<std::unique_ptr<Thunk>> thunks,
                                 const HloInstruction* hlo)
    : Thunk(Kind::kSequential, hlo), thunks_(std::move(thunks)) {}
    
    #include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
#include 'tensorflow/compiler/xla/service/hlo_instruction.h'
#include 'tensorflow/core/platform/stream_executor_no_cuda.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        OP_REQUIRES(
        context, TensorShapeUtils::IsVectorOrHigher(buffer_shape),
        errors::InvalidArgument('Output must be at least 1-D, ',
                                'got shape: ', buffer_shape.DebugString()));
    
    #include 'hdf5.h'
    
    // Get softmax layer according to engine.
template <typename Dtype>
shared_ptr<Layer<Dtype> > GetSoftmaxLayer(const LayerParameter& param) {
  SoftmaxParameter_Engine engine = param.softmax_param().engine();
  if (engine == SoftmaxParameter_Engine_DEFAULT) {
    engine = SoftmaxParameter_Engine_CAFFE;
#ifdef USE_CUDNN
    engine = SoftmaxParameter_Engine_CUDNN;
#endif
  }
  if (engine == SoftmaxParameter_Engine_CAFFE) {
    return shared_ptr<Layer<Dtype> >(new SoftmaxLayer<Dtype>(param));
#ifdef USE_CUDNN
  } else if (engine == SoftmaxParameter_Engine_CUDNN) {
    return shared_ptr<Layer<Dtype> >(new CuDNNSoftmaxLayer<Dtype>(param));
#endif
  } else {
    LOG(FATAL) << 'Layer ' << param.name() << ' has unknown engine.';
    throw;  // Avoids missing return warning
  }
}
    
    TYPED_TEST(NeuronLayerTest, TestReLUGradient) {
  typedef typename TypeParam::Dtype Dtype;
  LayerParameter layer_param;
  ReLULayer<Dtype> layer(layer_param);
  GradientChecker<Dtype> checker(1e-2, 1e-3, 1701, 0., 0.01);
  checker.CheckGradientEltwise(&layer, this->blob_bottom_vec_,
      this->blob_top_vec_);
}
    
    Classifier::Classifier(const string& model_file,
                       const string& trained_file,
                       const string& mean_file,
                       const string& label_file) {
#ifdef CPU_ONLY
  Caffe::set_mode(Caffe::CPU);
#else
  Caffe::set_mode(Caffe::GPU);
#endif
    }
    
      virtual inline const char* type() const { return 'Pooling'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int MinTopBlobs() const { return 1; }
  // MAX POOL layers can output an extra top blob for the mask;
  // others can only output the pooled inputs.
  virtual inline int MaxTopBlobs() const {
    return (this->layer_param_.pooling_param().pool() ==
            PoolingParameter_PoolMethod_MAX) ? 2 : 1;
  }
    
    /**
 * @brief A wrapper around SyncedMemory holders serving as the basic
 *        computational unit through which Layer%s, Net%s, and Solver%s
 *        interact.
 *
 * TODO(dox): more thorough description.
 */
template <typename Dtype>
class Blob {
 public:
  Blob()
       : data_(), diff_(), count_(0), capacity_(0) {}
    }
    
      /**
   * @brief Applies the transformation defined in the data layer's
   * transform_param block to a cv::Mat
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   * @param transformed_blob
   *    This is destination blob. It can be part of top blob's data if
   *    set_cpu_data() is used. See image_data_layer.cpp for an example.
   */
  void Transform(const cv::Mat& cv_img, Blob<Dtype>* transformed_blob);
#endif  // USE_OPENCV
    
    
    {    // Create SwapChain, RenderPass, Framebuffer, etc.
    IM_ASSERT(g_MinImageCount >= 2);
    ImGui_ImplVulkanH_CreateWindow(g_Instance, g_PhysicalDevice, g_Device, wd, g_QueueFamily, g_Allocator, width, height, g_MinImageCount);
}
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    std::shared_ptr<DHTBucket>
DHTRoutingTable::getBucketFor(const std::shared_ptr<DHTNode>& node) const
{
  return getBucketFor(node->getID());
}
    
    void DHTRoutingTableDeserializer::deserialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Loading DHT routing table from %s.', filename.c_str()));
  BufferedFile fp(filename.c_str(), BufferedFile::READ);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to load DHT routing table from %s', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
    namespace aria2 {
    }
    
    #include <vector>
#include <memory>
    
    namespace {
const size_t NUM_CONCURRENT_TASK = 15;
} // namespace