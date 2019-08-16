
        
        class AggregateStats {
 public:
  struct StatData {
    /*!
     * \brief Types that the console printer knows how to format
     */
    enum StatType {
      kDuration = 1,
      kCounter = 2,
      kOther = 4
    };
    }
    }
    
          // gradient w.r.t. weight, dWeight should accumulate across the batch and group
      deformable_im2col(s, in_data[conv::kData].dptr<DType>() + n * input_dim_,
                        in_data[conv::kOffset].dptr<DType>() + n * input_offset_dim_,
                        in_data[conv::kData].shape_, col_buffer.shape_, param_.kernel,
                        param_.pad, param_.stride, param_.dilate,
                        param_.num_deformable_group, col_buffer.dptr<DType>());
    
    
    {    static bool IsVariable(const nnvm::NodePtr& node) {
      AGInfo& info = Get(node);
      return info.grad_req != kNullOp && info.outputs.size() == 1
             && info.out_grads.size() == 1;
    }
  };
  /*! \brief whether operator recording is on. */
  bool is_training() const {
    return is_train_;
  }
  /*! \brief turn on or turn off operator recording for autograd. */
  bool set_is_training(bool is_train) {
      bool old = is_train_;
      is_train_ = is_train;
      return old;
  }
  /*! \brief whether operator recording is on. */
  bool is_recording() const {
    return is_recording_;
  }
  /*! \brief turn on or turn off operator recording for autograd. */
  bool set_is_recording(bool is_recording) {
      bool old = is_recording_;
      is_recording_ = is_recording;
      return old;
  }
  /*! brief whether numpy compatibility is on. */
  bool is_np_shape() const {
    return is_np_shape_;
  }
  /*! brief turn on or turn off numpy compatibility switch. */
  bool set_is_np_shape(bool is_np_shape) {
    bool old = is_np_shape_;
    is_np_shape_ = is_np_shape;
    return old;
  }
  /*! \brief to record operator, return corresponding node. */
  void RecordOp(nnvm::NodeAttrs&& attrs,
                const std::vector<NDArray*>& inputs,
                const std::vector<NDArray*>& outputs,
                const OpStatePtr& state = OpStatePtr(),
                std::vector<bool>* p_save_inputs = nullptr,
                std::vector<bool>* p_save_outputs = nullptr);
  /*! \brief */
  OpStatePtr Invoke(const Context& default_ctx,
                    const nnvm::NodeAttrs& attrs,
                    const std::vector<NDArray*>& inputs,
                    const std::vector<NDArray*>& outputs);
  /*! \brief */
  OpStatePtr InvokeOp(const Context& ctx,
                      const nnvm::NodeAttrs& attrs,
                      const std::vector<NDArray*>& inputs,
                      const std::vector<NDArray*>& outputs,
                      const std::vector<OpReqType>& req,
                      const DispatchMode dispatch_mode,
                      OpStatePtr state = OpStatePtr());
  /*! \brief mark variables for computing gradients. */
  void MarkVariables(const std::vector<NDArray*>& variables,
                     const std::vector<mx_uint>& grad_reqs,
                     const std::vector<NDArray*>& gradients);
  /*! \brief compute the gradient of outputs w.r.t variables. */
  std::vector<NDArray*> Backward(const std::vector<NDArray*>& outputs,
                                 const std::vector<NDArray*>& ograds,
                                 const std::vector<NDArray*>& variables,
                                 bool is_train, bool retain_graph,
                                 bool create_graph);
  /*! \return AutogradRuntime singleton */
  static Imperative* Get();
  /*! \brief Should op execution bulking be employed during inference. */
  static bool PreferBulkExecInference() {
    return dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_INFERENCE', true);
  }
  /*! \brief Should op execution bulking be employed during training. */
  static bool PreferBulkExecTrain() {
    return dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_TRAIN', true);
  }
  /*! \brief The max number of op nodes in a bulk during forward pass of training. */
  static int BulkExecMaxNodeTrainFwd() {
    return dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_MAX_NODE_TRAIN_FWD',
                        dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_MAX_NODE_TRAIN', 15));
  }
  /*! \brief The max number of op nodes in a bulk during backward pass of training. */
  static int BulkExecMaxNodeTrainBwd() {
    return dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_MAX_NODE_TRAIN_BWD',
                        dmlc::GetEnv('MXNET_EXEC_BULK_EXEC_MAX_NODE_TRAIN', 15));
  }
    
     public:
  /*! \brief cuda kernel argument descriptor */
  struct ArgType {
    /*! \brief whether argument is NDArray */
    bool is_ndarray;
    /*! \brief whether argument is constant (input) */
    bool is_const;
    /*! \brief data type of argument */
    mshadow::TypeFlag dtype;
  };
  /*! \brief Cuda kernel */
  class Kernel {
   public:
    /*! \brief Launch the kernel */
    void Launch(const Context& ctx, const std::vector<dmlc::any>& args,
                uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z,
                uint32_t shared_mem);
    /*! \brief kernel interface signature */
    const std::vector<ArgType>& signature() { return signature_; }
    }
    
    template <typename Dtype>
class LayerRegistry {
 public:
  static ::caffe::Layer<Dtype> * CreateLayer(const ::caffe::LayerParameter& param) {
    ::caffe::shared_ptr< ::caffe::Layer<Dtype> > ptr =
      ::caffe::LayerRegistry<Dtype>::CreateLayer(param);
    // avoid caffe::layer destructor, which deletes the weights layer owns
    new ::caffe::shared_ptr< ::caffe::Layer<Dtype> >(ptr);
    return ptr.get();
  }
};
    
      virtual void PrintDefaultValueString(std::ostream &os) const {  // NOLINT(*)
    std::string s;
    caffe::NetParameter np;
    // Avoid wasting time making a copy -- just push in out default object's pointer
    np.mutable_layer()->AddAllocated(const_cast<::caffe::LayerParameter *>(&default_value_));
    google::protobuf::TextFormat::PrintToString(np, &s);
    np.mutable_layer()->ReleaseLast();
    os << '\'' << s << '\'';
  }
    
    Graph DetectInplaceAddTo(Graph g) {
  nnvm::StorageVector storage_id =
      g.MoveCopyAttr<nnvm::StorageVector>('storage_id');
  std::vector<int> storage_inplace_index =
      g.MoveCopyAttr<std::vector<int> >('storage_inplace_index');
  static const Op* ewise_plus_op = Op::Get('_grad_add');
  auto& idx = g.indexed_graph();
  // reference cont.
  std::vector<int> ref_count(idx.num_node_entries(), 0);
  std::vector<int> addto_entry(idx.num_node_entries(), 0);
  std::vector<int> skip_plus_node(idx.num_nodes(), 0);
    }
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
    class DHTSetup {
public:
  DHTSetup();
    }
    
      virtual void addPeriodicTask2(const std::shared_ptr<DHTTask>& task) = 0;
    
      unsigned char secret_[2][SECRET_SIZE];
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
        // print values
    std::cout << object << '\n';
    std::cout << null << '\n';