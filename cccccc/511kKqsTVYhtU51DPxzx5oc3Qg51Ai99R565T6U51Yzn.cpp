
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #include 'tensorflow/compiler/xla/service/gpu/buffer_allocations.h'
#include 'tensorflow/compiler/xla/service/gpu/hlo_execution_profiler.h'
#include 'tensorflow/compiler/xla/service/gpu/thunk.h'
    
    Status MemzeroThunk::ExecuteOnStream(const ExecuteParams& params) {
  se::DeviceMemoryBase dest_data =
      params.buffer_allocations->GetDeviceAddress(dest_);
  auto op_profiler =
      params.profiler->MakeScopedInstructionProfiler(hlo_instruction());
  params.stream->ThenMemZero(&dest_data, dest_data.size());
  return Status::OK();
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      TriangularSolveThunk(const TriangularSolveThunk&) = delete;
  TriangularSolveThunk& operator=(const TriangularSolveThunk&) = delete;
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    #include <string>
    
    #ifndef CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
#define CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_
    
        if (!found) {
      KeyMap::iterator it = keymap.find(upperText);
      if (it != keymap.end()) {
        keyName = it->second;
        found = true;
      }
    }
    
      class ClipboardWriter {
  public:
    ClipboardWriter() {
      scw_.reset(new ui::ScopedClipboardWriter(ui::CLIPBOARD_TYPE_COPY_PASTE));
    }
    }
    
     protected:
  ~NwObjCallObjectMethodSyncFunction() override;
    
        // Helper function to convert display::Display to nwapi::nw__screen::Display
    std::unique_ptr<nwapi::nw__screen::Display> ConvertGfxDisplay(const display::Display& gfx_display) {
      std::unique_ptr<nwapi::nw__screen::Display> displayResult(new nwapi::nw__screen::Display);
    }
    
    template<typename Dtype>
void HDF5DataLayer<Dtype>::Next() {
  if (++current_row_ == hdf_blobs_[0]->shape(0)) {
    if (num_files_ > 1) {
      ++current_file_;
      if (current_file_ == num_files_) {
        current_file_ = 0;
        if (this->layer_param_.hdf5_data_param().shuffle()) {
          std::random_shuffle(file_permutation_.begin(),
                              file_permutation_.end());
        }
        DLOG(INFO) << 'Looping around to first file.';
      }
      LoadHDF5FileData(
        hdf_filenames_[file_permutation_[current_file_]].c_str());
    }
    current_row_ = 0;
    if (this->layer_param_.hdf5_data_param().shuffle())
      std::random_shuffle(data_permutation_.begin(), data_permutation_.end());
  }
  offset_++;
}
    
    
    {  status = H5Fclose(file_id);
  EXPECT_GE(status, 0) << 'Failed to close HDF5 file ' <<
      this->output_file_name_;
}
    
    template <typename Dtype>
void InnerProductLayer<Dtype>::Forward_cpu(const vector<Blob<Dtype>*>& bottom,
    const vector<Blob<Dtype>*>& top) {
  const Dtype* bottom_data = bottom[0]->cpu_data();
  Dtype* top_data = top[0]->mutable_cpu_data();
  const Dtype* weight = this->blobs_[0]->cpu_data();
  caffe_cpu_gemm<Dtype>(CblasNoTrans, transpose_ ? CblasNoTrans : CblasTrans,
      M_, N_, K_, (Dtype)1.,
      bottom_data, weight, (Dtype)0., top_data);
  if (bias_term_) {
    caffe_cpu_gemm<Dtype>(CblasNoTrans, CblasNoTrans, M_, N_, 1, (Dtype)1.,
        bias_multiplier_.cpu_data(),
        this->blobs_[1]->cpu_data(), (Dtype)1., top_data);
  }
}
    
      // Client of the Solver optionally may call this in order to set the function
  // that the solver uses to see what action it should take (e.g. snapshot or
  // exit training early).
  void SetActionFunction(ActionCallback func);
  SolverAction::Enum GetRequestedAction();
  // The main entry of the solver function. In default, iter will be zero. Pass
  // in a non-zero iter number to resume training for a pre-trained net.
  virtual void Solve(const char* resume_file = NULL);
  inline void Solve(const string& resume_file) { Solve(resume_file.c_str()); }
  void Step(int iters);
  // The Restore method simply dispatches to one of the
  // RestoreSolverStateFrom___ protected methods. You should implement these
  // methods to restore the state from the appropriate snapshot type.
  void Restore(const char* resume_file);
  // The Solver::Snapshot function implements the basic snapshotting utility
  // that stores the learned net. You should implement the SnapshotSolverState()
  // function that produces a SolverState protocol buffer that needs to be
  // written to disk together with the learned net.
  void Snapshot();
  virtual ~Solver() {}
  inline const SolverParameter& param() const { return param_; }
  inline shared_ptr<Net<Dtype> > net() { return net_; }
  inline const vector<shared_ptr<Net<Dtype> > >& test_nets() {
    return test_nets_;
  }
  int iter() const { return iter_; }
    
      // Load weights
  if (!weights.is_none()) {
    std::string weights_file_str = bp::extract<std::string>(weights);
    CheckFile(weights_file_str);
    net->CopyTrainedLayersFrom(weights_file_str);
  }
    
    const int kCIFARSize = 32;
const int kCIFARImageNBytes = 3072;
const int kCIFARBatchSize = 10000;
const int kCIFARTrainBatches = 5;
    
      cv::Mat img = cv::imread(file, -1);
  CHECK(!img.empty()) << 'Unable to decode image ' << file;
  std::vector<Prediction> predictions = classifier.Classify(img);
    
    
    {  delete db;
  delete [] pixels;
}
    
    /**
 * @brief Fills a Blob with values @f$ x \sim U(-a, +a) @f$ where @f$ a @f$ is
 *        set inversely proportional to number of incoming nodes, outgoing
 *        nodes, or their average.
 *
 * A Filler based on the paper [Bengio and Glorot 2010]: Understanding
 * the difficulty of training deep feedforward neuralnetworks.
 *
 * It fills the incoming matrix by randomly sampling uniform data from [-scale,
 * scale] where scale = sqrt(3 / n) where n is the fan_in, fan_out, or their
 * average, depending on the variance_norm option. You should make sure the
 * input blob has shape (num, a, b, c) where a * b * c = fan_in and num * b * c
 * = fan_out. Note that this is currently not the case for inner product layers.
 *
 * TODO(dox): make notation in above comment consistent with rest & use LaTeX.
 */
template <typename Dtype>
class XavierFiller : public Filler<Dtype> {
 public:
  explicit XavierFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype scale = sqrt(Dtype(3) / n);
    caffe_rng_uniform<Dtype>(blob->count(), -scale, scale,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    ProgressDialog *ProgressDialog::singleton = NULL;
    
    Error MessageQueue::push_call(Object *p_object, const StringName &p_method, VARIANT_ARG_DECLARE) {
    }
    
    #include 'core/string_name.h'
#include 'core/ustring.h'
    
    void GDAPI godot_pool_vector2_array_new_with_array(godot_pool_vector2_array *r_dest, const godot_array *p_a) {
	PoolVector<Vector2> *dest = (PoolVector<Vector2> *)r_dest;
	Array *a = (Array *)p_a;
	memnew_placement(dest, PoolVector<Vector2>);
    }
    
    
    {	return self->findmk(keys);
}
    
        size_t num_inputs = GetNumInputArguments(param_);
    //  kOut
    size_t num_outputs = 1;
    if (param_.state_outputs) {
      // kOut, kStateOut, kStateCellOut
      num_outputs = (param_.mode == rnn_enum::kLstm) ? 3U : 2U;
    }
    
    int MXKVStorePullRowSparse(KVStoreHandle handle,
                           mx_uint num,
                           const int* keys,
                           NDArrayHandle* vals,
                           const NDArrayHandle* row_ids,
                           int priority) {
  API_BEGIN();
  std::vector<int> v_keys(num);
  std::vector<std::pair<NDArray*, NDArray>> v_val_rowids(num);
  for (mx_uint i = 0; i < num; ++i) {
    v_keys[i] = keys[i];
    v_val_rowids[i] = std::make_pair(static_cast<NDArray*>(vals[i]),
                                     *static_cast<NDArray*>(row_ids[i]));
  }
  static_cast<KVStore*>(handle)->PullRowSparse(v_keys, v_val_rowids, priority);
  API_END();
}
    
    inline static bool FCStorageType(const nnvm::NodeAttrs& attrs,
                                 const int dev_mask,
                                 DispatchMode* dispatch_mode,
                                 std::vector<int> *in_attrs,
                                 std::vector<int> *out_attrs) {
  const FullyConnectedParam& param = nnvm::get<FullyConnectedParam>(attrs.parsed);
  const bool valid_data = in_attrs->at(0) == kDefaultStorage;
  const bool valid_weight = in_attrs->at(1) == kDefaultStorage ||
                            in_attrs->at(1) == kRowSparseStorage;
  bool valid_bias = true;
  uint32_t in_expected = 2;
  if (!param.no_bias) {
    in_expected = 3;
    valid_bias = in_attrs->at(2) == kDefaultStorage || in_attrs->at(2) == kRowSparseStorage;
  }
  CHECK_EQ(in_attrs->size(), in_expected);
  CHECK_EQ(out_attrs->size(), 1);
  // dispatch to kFComputeEx is fine even if all inputs are dense and no MKL is present
  bool dispatched = false;
  if (!dispatched && valid_data && valid_weight && valid_bias) {
    dispatched = storage_type_assign(out_attrs, mxnet::kDefaultStorage,
                                     dispatch_mode, DispatchMode::kFComputeEx);
  }
#if MXNET_USE_MKLDNN == 1
  if (!MKLDNNEnvSet())
    *dispatch_mode = DispatchMode::kFComputeFallback;
#endif
    }
    
    
    {
    {
    {            if (strategy == 'Round') {
              ptr = new storage::GPUPooledRoundedStorageManager(handle->ctx);
              LOG(INFO) << 'Using GPUPooledRoundedStorageManager.';
            } else if (strategy == 'Naive') {
              ptr = new storage::GPUPooledStorageManager(handle->ctx);
            } else if (strategy == 'Unpooled') {
              ptr = new storage::NaiveStorageManager<storage::GPUDeviceStorage>();
            } else {
              LOG(FATAL) << 'Unknown memory pool strategy specified: ' << strategy << '.';
            }
#else
            LOG(FATAL) << 'Compile with USE_CUDA=1 to enable GPU usage';
#endif  // MXNET_USE_CUDA
            break;
          }
          default: LOG(FATAL) <<  'Unimplemented device ' << handle->ctx.dev_type;
        }
        return ptr;
      });
    
    #include <mxnet/storage.h>
#include <cstddef>
    
    If ``num_deformable_group`` is larger than 1, denoted by *dg*, then split the
input ``offset`` evenly into *dg* parts along the channel axis, and also evenly
split ``data`` into *dg* parts along the channel axis. Next compute the
deformable convolution, apply the *i*-th part of the offset on the *i*-th part
of the data.
    
      index_t argmax_h_low = static_cast<index_t>(argmax_h);
  index_t argmax_w_low = static_cast<index_t>(argmax_w);
  index_t argmax_h_high;
  index_t argmax_w_high;
  if (argmax_h_low >= height - 1) {
    argmax_h_high = argmax_h_low = height - 1;
    argmax_h = static_cast<DType>(argmax_h_low);
  } else {
    argmax_h_high = argmax_h_low + 1;
  }
  if (argmax_w_low >= width - 1) {
    argmax_w_high = argmax_w_low = width - 1;
    argmax_w = static_cast<DType>(argmax_w_low);
  } else {
    argmax_w_high = argmax_w_low + 1;
  }
    
          DType sum = 0;
      index_t count = 0;
      index_t gw = floor(static_cast<DType>(pw) * group_size / pooled_width);
      index_t gh = floor(static_cast<DType>(ph) * group_size / pooled_height);
      gw = min(max(gw, static_cast<index_t>(0)), group_size - 1);
      gh = min(max(gh, static_cast<index_t>(0)), group_size - 1);
    
    
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
    
      for (int i = 0; i < inshape.ndim(); i++) {
    oshape[i] = inshape[i];
  }
  if (param.axes.has_value()) {
    oshape[inshape.ndim()] = param.axes.value().ndim();
  } else {
    oshape[inshape.ndim()] = inshape.ndim();
  }
    
    #ifndef MXNET_RTC_H_
#define MXNET_RTC_H_
#include './base.h'
#if MXNET_USE_CUDA && MXNET_ENABLE_CUDA_RTC
#include <nvrtc.h>
#include <cuda.h>
    
        do {
      rocksdb::SyncPoint::GetInstance()->ClearTrace();
      rocksdb::SyncPoint::GetInstance()->DisableProcessing();
      Options options = OptionsForLogIterTest();
      DestroyAndReopen(options);
      Put('key1', DummyString(1024));
      dbfull()->Flush(FlushOptions());
      Put('key2', DummyString(1024));
      dbfull()->Flush(FlushOptions());
      Put('key3', DummyString(1024));
      dbfull()->Flush(FlushOptions());
      Put('key4', DummyString(1024));
      ASSERT_EQ(dbfull()->GetLatestSequenceNumber(), 4U);
      dbfull()->FlushWAL(false);
    }
    
      // put and get from non-default column family
  s = db->Put(WriteOptions(), handles[1], Slice('key'), Slice('value'));
  assert(s.ok());
  std::string value;
  s = db->Get(ReadOptions(), handles[1], Slice('key'), &value);
  assert(s.ok());
    
    
    {  const char* Name() const override { return 'MyMerge'; }
};
    
      // Put key-value
  s = db->Put(WriteOptions(), 'key1', 'value');
  assert(s.ok());
  std::string value;
  // get value
  s = db->Get(ReadOptions(), 'key1', &value);
  assert(s.ok());
  assert(value == 'value');
    
    
    {
    {}  // namespace experimental
}  // namespace rocksdb

    
      // -------------------
  // Parameters that affect performance