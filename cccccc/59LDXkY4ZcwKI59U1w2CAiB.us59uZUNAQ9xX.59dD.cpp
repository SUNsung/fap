
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #if GOOGLE_CUDA
    
      auto scale_broadcasted = add(HloInstruction::CreateBroadcast(
      activation_shape, scale, {feature_index}));
  auto variance_broadcasted = add(HloInstruction::CreateBroadcast(
      activation_shape, variance, {feature_index}));
    
    
    {  return kTfLiteOk;
}
    
    namespace {
// TODO(suharshs): Move this to a common location to allow other part of the
// repo to use it.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args) {
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace
    
    TEST(PartialRunMgr, PartialRunRemoved) {
  // Test that PartialRunMgr ensures that the PartialRun is deleted after
  // ExecutorDone and PartialRunDone are called.
  PartialRunMgr partial_run_mgr;
  int step_id = 1;
  CancellationManager* cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &cancellation_manager);
    }
    
    // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
        http://www.apache.org/licenses/LICENSE-2.0
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    TEST_F(GrpcDebugTest, SendDebugTensorWithLargeStringAtIndex1ViaGrpcTest) {
  Tensor tensor(DT_STRING, TensorShape({1, 2}));
  tensor.flat<string>()(0) = 'A';
  tensor.flat<string>()(1) = string(5000 * 1024, 'A');
  const DebugNodeKey kDebugNodeKey('/job:localhost/replica:0/task:0/cpu:0',
                                   'foo_tensor', 0, 'DebugIdentity');
  const Status status = DebugIO::PublishDebugTensor(
      kDebugNodeKey, tensor, Env::Default()->NowMicros(), {server_data_.url});
  ASSERT_FALSE(status.ok());
  ASSERT_NE(status.error_message().find('string value at index 1 from debug '
                                        'node foo_tensor:0:DebugIdentity does '
                                        'not fit gRPC message size limit'),
            string::npos);
  TF_ASSERT_OK(DebugIO::CloseDebugURL(server_data_.url));
}
    
    /**
 * @brief Compute the index of the @f$ K @f$ max values for each datum across
 *        all dimensions @f$ (C \times H \times W) @f$.
 *
 * Intended for use after a classification layer to produce a prediction.
 * If parameter out_max_val is set to true, output is a vector of pairs
 * (max_ind, max_val) for each image. The axis parameter specifies an axis
 * along which to maximise.
 *
 * NOTE: does not implement Backwards operation.
 */
template <typename Dtype>
class ArgMaxLayer : public Layer<Dtype> {
 public:
  /**
   * @param param provides ArgMaxParameter argmax_param,
   *     with ArgMaxLayer options:
   *   - top_k (\b optional uint, default 1).
   *     the number @f$ K @f$ of maximal items to output.
   *   - out_max_val (\b optional bool, default false).
   *     if set, output a vector of pairs (max_ind, max_val) unless axis is set then
   *     output max_val along the specified axis.
   *   - axis (\b optional int).
   *     if set, maximise along the specified axis else maximise the flattened
   *     trailing dimensions for each index of the first / num dimension.
   */
  explicit ArgMaxLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      int num_spatial_axes_;
  int bottom_dim_;
  int top_dim_;
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of ConvolutionLayer.
 *        Fallback to ConvolutionLayer for CPU mode.
 *
 * cuDNN accelerates convolution through forward kernels for filtering and bias
 * plus backward kernels for the gradient w.r.t. the filters, biases, and
 * inputs. Caffe + cuDNN further speeds up the computation through forward
 * parallelism across groups and backward parallelism across gradients.
 *
 * The CUDNN engine does not have memory overhead for matrix buffers. For many
 * input and filter regimes the CUDNN engine is faster than the CAFFE engine,
 * but for fully-convolutional models and large inputs the CAFFE engine can be
 * faster as long as it fits in memory.
*/
template <typename Dtype>
class CuDNNConvolutionLayer : public ConvolutionLayer<Dtype> {
 public:
  explicit CuDNNConvolutionLayer(const LayerParameter& param)
      : ConvolutionLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNConvolutionLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    namespace caffe {
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
    
    {  status_ = Status(0);
}
    
    FLAG(string, aws_kinesis_stream, '', 'Name of Kinesis stream for logging')
    
    
    {
    { private:
  std::shared_ptr<KinesisLogForwarder> forwarder_{nullptr};
};
}
