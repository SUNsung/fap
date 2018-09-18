
        
        /**
 * @brief Get a specific filler from the specification given in FillerParameter.
 *
 * Ideally this would be replaced by a factory pattern, but we will leave it
 * this way for now.
 */
template <typename Dtype>
Filler<Dtype>* GetFiller(const FillerParameter& param) {
  const std::string& type = param.type();
  if (type == 'constant') {
    return new ConstantFiller<Dtype>(param);
  } else if (type == 'gaussian') {
    return new GaussianFiller<Dtype>(param);
  } else if (type == 'positive_unitball') {
    return new PositiveUnitballFiller<Dtype>(param);
  } else if (type == 'uniform') {
    return new UniformFiller<Dtype>(param);
  } else if (type == 'xavier') {
    return new XavierFiller<Dtype>(param);
  } else if (type == 'msra') {
    return new MSRAFiller<Dtype>(param);
  } else if (type == 'bilinear') {
    return new BilinearFiller<Dtype>(param);
  } else {
    CHECK(false) << 'Unknown filler name: ' << param.type();
  }
  return (Filler<Dtype>*)(NULL);
}
    
     protected:
  /// @copydoc AbsValLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
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
    
    
    {}  // namespace caffe
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(SingleFailureChecker);
};
    
    // A concrete DeathTestFactory implementation for normal use.
class DefaultDeathTestFactory : public DeathTestFactory {
 public:
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test);
};
    
      // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;
    
    int Water::allocated_ = 0;
    
    
    {  return clone;
}
    
    std::shared_ptr<Channel> CreateChannelInternal(const grpc::string& host,
                                               grpc_channel* c_channel);
    
    namespace internal {
class AlarmImpl : public CompletionQueueTag {
 public:
  AlarmImpl() : cq_(nullptr), tag_(nullptr) {
    gpr_ref_init(&refs_, 1);
    grpc_timer_init_unset(&timer_);
    GRPC_CLOSURE_INIT(&on_alarm_,
                      [](void* arg, grpc_error* error) {
                        // queue the op on the completion queue
                        AlarmImpl* alarm = static_cast<AlarmImpl*>(arg);
                        alarm->Ref();
                        grpc_cq_end_op(
                            alarm->cq_, alarm, error,
                            [](void* arg, grpc_cq_completion* completion) {},
                            arg, &alarm->completion_);
                      },
                      this, grpc_schedule_on_exec_ctx);
  }
  ~AlarmImpl() {
    grpc_core::ExecCtx exec_ctx;
    if (cq_ != nullptr) {
      GRPC_CQ_INTERNAL_UNREF(cq_, 'alarm');
    }
  }
  bool FinalizeResult(void** tag, bool* status) override {
    *tag = tag_;
    Unref();
    return true;
  }
  void Set(CompletionQueue* cq, gpr_timespec deadline, void* tag) {
    grpc_core::ExecCtx exec_ctx;
    GRPC_CQ_INTERNAL_REF(cq->cq(), 'alarm');
    cq_ = cq->cq();
    tag_ = tag;
    GPR_ASSERT(grpc_cq_begin_op(cq_, this));
    grpc_timer_init(&timer_, grpc_timespec_to_millis_round_up(deadline),
                    &on_alarm_);
  }
  void Cancel() {
    grpc_core::ExecCtx exec_ctx;
    grpc_timer_cancel(&timer_);
  }
  void Destroy() {
    Cancel();
    Unref();
  }
    }
    }
    
    
    {}  // namespace grpc
    
    grpc_error* CensusClientCallData::Init(grpc_call_element* elem,
                                       const grpc_call_element_args* args) {
  path_ = grpc_slice_ref_internal(args->path);
  start_time_ = absl::Now();
  method_ = GetMethod(&path_);
  qualified_method_ = absl::StrCat('Sent.', method_);
  GRPC_CLOSURE_INIT(&on_done_recv_message_, OnDoneRecvMessageCb, elem,
                    grpc_schedule_on_exec_ctx);
  GRPC_CLOSURE_INIT(&on_done_recv_trailing_metadata_,
                    OnDoneRecvTrailingMetadataCb, elem,
                    grpc_schedule_on_exec_ctx);
  return GRPC_ERROR_NONE;
}
    
    // These helper functions return the SpanContext and Span, respectively
// associated with the census_context* stored by grpc. The user will need to
// call this for manual propagation of tracing data.
::opencensus::trace::SpanContext SpanContextFromCensusContext(
    const census_context* ctxt);
::opencensus::trace::Span SpanFromCensusContext(const census_context* ctxt);
    
    MeasureDouble RpcClientServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error (propagated from the server)',
      kUnitMilliseconds);
  return measure;
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
      void StartTransportStreamOpBatch(grpc_call_element* elem,
                                   TransportStreamOpBatch* op) override;
    
    const ViewDescriptor& ClientServerLatencyMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/client/server_latency/minute')
          .set_measure(kRpcClientServerLatencyMeasureName)
          .set_aggregation(MillisDistributionAggregation())
          .add_column(ClientMethodTagKey());
  return descriptor;
}
    
    /*!
 *  Copyright (c) 2015 by Contributors
 * \file operator.h
 * \brief Operator interface of mxnet.
 * \author Naiyan Wang
 */
#ifndef MXNET_OPERATOR_H_
#define MXNET_OPERATOR_H_
    
    
    { private:
  CaffeOpParam param_;
  ::caffe::Layer<Dtype> *caffeOp_;
  std::vector< ::caffe::Blob<Dtype> *> bot_, top_, wei_;
  std::vector<bool> flags_;
  bool init_w_, init_wd_, setup_;
};  // class CaffeOp
    
    template <std::size_t kNumGpus, std::size_t kStreams>
RunContext StreamManager<kNumGpus, kStreams>::GetRunContext(
    Context const& ctx) {
  RunContext ret;
  switch (ctx.dev_mask()) {
    case cpu::kDevMask:
      ret = RunContext{ctx, nullptr};
      break;
    case gpu::kDevMask: {
#if MXNET_USE_CUDA
      std::size_t use_counter;
      CUDA_CALL(cudaSetDevice(ctx.dev_id));
      {
        std::lock_guard<std::mutex> lock{mutex_};
        auto&& counter = gpu_cnt_.at(ctx.dev_id);
        if (counter == -1) {
          for (auto&& i : gpu_streams_.at(ctx.dev_id)) {
            i = mshadow::NewStream<gpu>(true, MXNET_USE_CUDNN != 0, ctx.dev_id);
          }
          counter = 0;
        }
        use_counter = counter;
        counter = (counter + 1) % kStreams;
      }
      ret = RunContext{ctx, gpu_streams_.at(ctx.dev_id).at(use_counter)};
      break;
#else
      LOG(FATAL) << MXNET_GPU_NOT_ENABLED_ERROR;
#endif  // MXNET_USE_CUDA
    default:
      LOG(FATAL) << 'Not Reached';
    }
  }
  return ret;
}
    
    nnvm::Graph InferShape(nnvm::Graph&& graph,
                       nnvm::ShapeVector&& shape_inputs,
                       const std::string& shape_attr_key) {
  using dmlc::any;
  if (shape_inputs.size() != 0) {
    graph.attrs['shape_inputs'] = std::make_shared<any>(std::move(shape_inputs));
  }
  if (shape_attr_key.length() != 0) {
    graph.attrs['shape_attr_key'] = std::make_shared<any>(std::move(shape_attr_key));
  }
  return InferAttr<nnvm::TShape, nnvm::FInferShape>(
      std::move(graph), nnvm::TShape(),
      'FInferShape', 'shape_inputs', 'shape_attr_key',
      'shape', 'shape_num_unknown_nodes',
      [](const nnvm::TShape& s) { return s.ndim() == 0 || s.Size() == 0; },
      nullptr, true, nullptr);
}
    
    #include <dmlc/registry.h>
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
    
    
    {        assert(m_fd == -1);
        for (;;)
        {
            // opening a lock file
            int fd = open(m_fileName.c_str(), O_WRONLY | O_CREAT, 0666);
            if (fd < 0)
                RuntimeError('Acquire: Failed to open lock file %s: %s.', m_fileName.c_str(), strerror(errno));
            // locking it with the fcntl API
            memset(&m_lock, 0, sizeof(m_lock));
            m_lock.l_type = F_WRLCK;
            // BUG: fcntl call with F_SETLKW doesn't always reliably detect when lock is released
            // As a workaround, using alarm() for interupting fcntl if it waits more than 1 second
            setupTimeout(1);
            int r = fcntl(fd, wait ? F_SETLKW : F_SETLK, &m_lock);
            if (errno == EINTR)
            {
                sleep(1);
                // retrying in the case of signal or timeout
                close(fd);
                continue;
            }
            if (r != 0)
            {
                // acquire failed
                close(fd);
                umask(mask);
                return false;
            }
            // we own the exclusive lock on file descriptor, but we need to double-check
            // that the lock file wasn't deleted and/or re-created;
            // checking this by comparing inode numbers
            struct stat before, after;
            fstat(fd, &before);
            if (stat(m_fileName.c_str(), &after) != 0 || before.st_ino != after.st_ino)
            {
                // we have a race with 'unlink' call in Release()
                // our lock is held to the previous instance of the file;
                // this is not a problem, we just need to retry locking the new file
                close(fd);
                continue;
            }
            else
            {
                // lock acquired successfully
                m_fd = fd;
                umask(mask);
                return true;
            }
        }
    }
    
    
    {
    {
    {}}}

    
    Status PrometheusMetricsConfigParserPlugin::update(const std::string& source,
                                                   const ParserConfig& config) {
  auto prometheus_targets = config.find(kPrometheusParserRootKey);
  if (prometheus_targets != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(prometheus_targets->second.doc(), obj);
    data_.add(kPrometheusParserRootKey, obj);
  }
    }
    
    TEST_F(OptionsConfigParserPluginTests, test_json_option) {
  Config c;
  std::map<std::string, std::string> update;
    }
    
    
    {  query.query += ' LIMIT 1';
  counter = 128;
  auto cf2 = Query('will_update_query', query);
  EXPECT_TRUE(cf2.isQueryNameInDatabase());
  EXPECT_TRUE(cf2.isNewQuery());
  cf2.addNewResults(results, 0, counter, dr);
  EXPECT_FALSE(cf2.isNewQuery());
  EXPECT_EQ(counter, 0UL);
}
    
      /// Number of worker restarts NOT induced by a watchdog process.
  size_t worker_restarts_{0};
    
      /**
   * @brief Helper method to map a string action to `inotify` action mask bit.
   *
   * This helper method will set the `mask` value for this SubscriptionContext.
   *
   * @param action The string action, a value in kMaskAction%s.
   */
  void requireAction(const std::string& action) {
    for (const auto& bit : kMaskActions) {
      if (action == bit.second) {
        mask = mask | bit.first;
      }
    }
  }
    
      // Must be called before any CompareBlock() calls can be called.
  virtual void StartBlockComparisons() = 0;
  // No more CompareBlock() calls can be called after this.
  virtual void FinishBlockComparisons() = 0;
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    
    {
    {
    {      // Add back the last sentinel node.
      tree[j_end + 1] = sentinel;
    }
    if (SetDepth(static_cast<int>(2 * n - 1), &tree[0], depth, tree_limit)) {
      /* We need to pack the Huffman tree in tree_limit bits. If this was not
         successful, add fake entities to the lowest values and retry. */
      break;
    }
  }
}