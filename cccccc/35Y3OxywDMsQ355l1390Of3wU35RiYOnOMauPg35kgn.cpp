
        
        // Class to hold an array of bounding boxes for an output word and
// the bounding box of the whole word.
class BoxWord {
 public:
  BoxWord();
  explicit BoxWord(const BoxWord& src);
  ~BoxWord() = default;
    }
    
    
    {  // Stores all the source points in the order they were given and their
  // halfwidths, if any.
  GenericVector<PointWidth> pts_;
  // Stores the computed perpendicular distances of (some of) the pts_ from a
  // given vector (assuming it goes through the origin, making it a line).
  // Since the distances may be a subset of the input points, and get
  // re-ordered by the nth_item function, the original point is stored
  // along side the distance.
  GenericVector<DistPointPair> distances_;  // Distances of points.
  // The squared length of the vector used to compute distances_.
  double square_length_;
};
    
    
    {  int delta = this - prev;
  int32_t n = prev->n_ + 1;
  int32_t sig_x = prev->sig_x_ + delta;
  int64_t sig_xsq = prev->sig_xsq_ + delta * delta;
  int64_t cost = (sig_xsq - sig_x * sig_x / n) / n;
  cost += prev->total_cost_;
  UpdateIfBetter(cost, prev->total_steps_ + 1, prev, n, sig_x, sig_xsq);
  return cost;
}
    
    // Computes the Otsu threshold(s) for the given image rectangle, making one
// for each channel. Each channel is always one byte per pixel.
// Returns an array of threshold values and an array of hi_values, such
// that a pixel value >threshold[channel] is considered foreground if
// hi_values[channel] is 0 or background if 1. A hi_value of -1 indicates
// that there is no apparent foreground. At least one hi_value will not be -1.
// Delete thresholds and hi_values with delete [] after use.
// The return value is the number of channels in the input image, being
// the size of the output thresholds and hi_values arrays.
int OtsuThreshold(Pix* src_pix, int left, int top, int width, int height,
                  int** thresholds, int** hi_values);
    
        int16_t accept_count();  //How many accepted?
    
    
    {}  // namespace tesseract.
    
      void DeleteUnusedObjects() {
    mu_.Lock();
    for (int i = cache_.size() - 1; i >= 0; i--) {
      if (cache_[i].count <= 0) {
        delete cache_[i].object;
        cache_.remove(i);
      }
    }
    mu_.Unlock();
  }
    
    /*!
+ * \brief The result holder of dispatch mode of each Node in the graph.
+ * \note Stored under graph.attrs['dispatch_mode'], provided by Pass 'InferStorageType'
+ *
+ * \code
+ *  Graph g = ApplyPass(src_graph, 'InferStorageType');
+ *  const DispatchModeVector& dispatch_modes = g.GetAttr<DispatchModeVector>('dispatch_mode');
+ *  // get dispatch mode by entry node id
+ *  int node_type = dispatch_modes[nid];
+ * \endcode
+ *
+ * \sa FInferStorageType
+ */
using DispatchModeVector = std::vector<DispatchMode>;
    
      virtual bool Next(void) {
    // MxNet iterator is expected to return CPU-accessible memory
    if (::caffe::Caffe::mode() != ::caffe::Caffe::CPU) {
      ::caffe::Caffe::set_mode(::caffe::Caffe::CPU);
      CHECK_EQ(::caffe::Caffe::mode(), ::caffe::Caffe::CPU);
    }
    caffe_data_layer_->Forward(bottom_, top_);
    CHECK_GT(batch_size_, 0) << 'batch size must be greater than zero';
    CHECK_EQ(out_.batch_size, batch_size_) << 'Internal Error: batch size mismatch';
    }
    
     private:
  /*!
   * \brief Wait for all started threads to signal that they're ready
   */
  void WaitForReady() {
    for (const std::shared_ptr<dmlc::ManualEvent>& ptr : ready_events_) {
      ptr->wait();
    }
  }
    
    /*!
 * \brief Iterator that normalize a image.
 *  It also applies a few augmention before normalization.
 */
class ImageNormalizeIter : public IIterator<DataInst> {
 public:
  explicit ImageNormalizeIter(IIterator<DataInst> *base)
      : base_(base), meanfile_ready_(false) {
  }
    }
    
      virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    InitParams(kwargs);
    // use the kwarg to init batch loader
    loader_->Init(kwargs);
    iter.Init([this](DataBatch **dptr) {
        if (!loader_->Next()) return false;
        const TBlobBatch& batch = loader_->Value();
        if (*dptr == nullptr) {
          // allocate databatch
          *dptr = new DataBatch();
          (*dptr)->num_batch_padd = batch.num_batch_padd;
          (*dptr)->data.resize(batch.data.size());
          (*dptr)->index.resize(batch.batch_size);
          for (size_t i = 0; i < batch.data.size(); ++i) {
            auto dtype = param_.dtype
                             ? param_.dtype.value()
                             : batch.data[i].type_flag_;
            (*dptr)->data.at(i) = NDArray(batch.data[i].shape_,
                                          Context::CPU(), false,
                                          dtype);
          }
        }
        CHECK(batch.data.size() == (*dptr)->data.size());
        // copy data over
        for (size_t i = 0; i < batch.data.size(); ++i) {
          CHECK_EQ((*dptr)->data.at(i).shape(), batch.data[i].shape_);
          MSHADOW_TYPE_SWITCH(batch.data[i].type_flag_, DType, {
              mshadow::Copy(((*dptr)->data)[i].data().FlatTo2D<cpu, DType>(),
                        batch.data[i].FlatTo2D<cpu, DType>());
          });
          (*dptr)->num_batch_padd = batch.num_batch_padd;
        }
        if (batch.inst_index) {
          std::copy(batch.inst_index,
                    batch.inst_index + batch.batch_size,
                    (*dptr)->index.begin());
        }
       return true;
      },
      [this]() { loader_->BeforeFirst(); });
  }
    
    template<typename xpu, typename OP>
void EvalOneHot_(const TBlob &index, const TBlob &rhs,
                 TBlob *ret, RunContext ctx) {
  LOG(INFO) << 'The operator onehot_encode is deprecated; use one_hot instead.';
  using namespace mshadow::expr;
  mshadow::Stream<xpu> *s = ctx.get_stream<xpu>();
  // TODO(eric): support mixed type encoding, i.e. int index and float rhs.
  CHECK_EQ(ret->type_flag_, mshadow::default_type_flag)
    << 'one_hot_encode only support float32 as input/output';
  CHECK_EQ(rhs.type_flag_, mshadow::default_type_flag)
    << 'one_hot_encode only support float32 as input/output';
  CHECK_EQ(index.type_flag_, mshadow::default_type_flag)
    << 'one_hot_encode only support float32 as input/output';
  ret->get<xpu, 2, real_t>(s) =
    one_hot_encode(index.get<xpu, 1, real_t>(s),
                   rhs.shape_[1]);
}
    
    template<>
Operator* CreateOp<gpu>(NDArrayOpParam param) {
  return new NDArrayOp<gpu>(param);
}
#endif  // MXNET_USE_CUDA
    
    template<typename xpu>
void ConcatCSRImpl(const nnvm::NodeAttrs& attrs,
                   const OpContext& ctx,
                   const std::vector<NDArray>& inputs,
                   const std::vector<OpReqType>& req,
                   const std::vector<NDArray>& outputs) {
  using namespace mshadow;
  using namespace mxnet_op;
  using namespace csr;
  const ConcatParam& param = nnvm::get<ConcatParam>(attrs.parsed);
  int num_args = param.num_args;
  int concat_dim = param.dim;
  CHECK_EQ(inputs.size(), num_args);
  CHECK_EQ(outputs.size(), 1);
  int axis = CheckAxis(concat_dim, inputs[0].shape().ndim());
  CHECK_EQ(axis, 0) << 'concat of csr ndarrays on axis 1 is not supported.';
  if (req[0] == kNullOp) return;
  Stream<xpu>* s = ctx.get_stream<xpu>();
  nnvm::dim_t nnz = 0;
  for (int i=0; i < num_args; i++) {
    nnz += inputs[i].aux_shape(kIdx)[0];
  }
  const NDArray& out = outputs[0];
  if (nnz == 0) {
    FillZerosCsrImpl(s, out);
    return;
  }
  const nnvm::dim_t num_rows = out.shape()[0];
  out.CheckAndAllocAuxData(kIndPtr, Shape1(num_rows+1));
    }
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    
    {
    {  // declare parameters
  DMLC_DECLARE_PARAMETER(LearnerTrainParam) {
    DMLC_DECLARE_FIELD(seed).set_default(0).describe(
        'Random number seed during training.');
    DMLC_DECLARE_FIELD(seed_per_iteration)
        .set_default(false)
        .describe(
            'Seed PRNG determnisticly via iterator number, '
            'this option will be switched on automatically on distributed '
            'mode.');
    DMLC_DECLARE_FIELD(dsplit)
        .set_default(DataSplitMode::kAuto)
        .add_enum('auto', DataSplitMode::kAuto)
        .add_enum('col', DataSplitMode::kCol)
        .add_enum('row', DataSplitMode::kRow)
        .describe('Data split mode for distributed training.');
    DMLC_DECLARE_FIELD(tree_method)
        .set_default(TreeMethod::kAuto)
        .add_enum('auto', TreeMethod::kAuto)
        .add_enum('approx', TreeMethod::kApprox)
        .add_enum('exact', TreeMethod::kExact)
        .add_enum('hist', TreeMethod::kHist)
        .add_enum('gpu_exact', TreeMethod::kGPUExact)
        .add_enum('gpu_hist', TreeMethod::kGPUHist)
        .describe('Choice of tree construction method.');
    DMLC_DECLARE_FIELD(nthread).set_default(0).describe(
        'Number of threads to use.');
    DMLC_DECLARE_FIELD(disable_default_eval_metric)
        .set_default(0)
        .describe('flag to disable default metric. Set to >0 to disable');
    DMLC_DECLARE_FIELD(gpu_id)
        .set_default(0)
        .describe('The primary GPU device ordinal.');
    DMLC_DECLARE_FIELD(n_gpus)
        .set_default(0)
        .set_lower_bound(-1)
        .describe('Number of GPUs to use for multi-gpu algorithms.');
  }
};
}  // namespace xgboost
    
      /**
   * \fn  virtual void Predictor::Init(const std::vector<std::pair<std::string,
   * std::string> >&cfg ,const std::vector<std::shared_ptr<DMatrix> > &cache);
   *
   * \brief Configure and register input matrices in prediction cache.
   *
   * \param cfg   The configuration.
   * \param cache Vector of DMatrix's to be used in prediction.
   */
    
    static void ImGui_ImplGlfw_UpdateGamepads()
{
    ImGuiIO& io = ImGui::GetIO();
    memset(io.NavInputs, 0, sizeof(io.NavInputs));
    if ((io.ConfigFlags & ImGuiConfigFlags_NavEnableGamepad) == 0)
        return;
    }
    
            // Start the Dear ImGui frame
        ImGui_ImplVulkan_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
            // Rendering
        ImGui::Render();
        IwGxSetColClear(clear_color.x * 255, clear_color.y * 255, clear_color.z * 255, clear_color.w * 255);
        IwGxClear();
        ImGui_Marmalade_RenderDrawData(ImGui::GetDrawData());
        IwGxSwapBuffers();
    
        if (g_pd3dDevice->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, g_frameContext[0].CommandAllocator, NULL, IID_PPV_ARGS(&g_pd3dCommandList)) != S_OK ||
        g_pd3dCommandList->Close() != S_OK)
        return false;
    
    
    {        ImGui::Render();
    }
    
        // Create Window Surface
    VkSurfaceKHR surface;
    VkResult err;
    if (SDL_Vulkan_CreateSurface(window, g_Instance, &surface) == 0)
    {
        printf('Failed to create Vulkan surface.\n');
        return 1;
    }
    
    
    {    // Destroy SDL mouse cursors
    for (ImGuiMouseCursor cursor_n = 0; cursor_n < ImGuiMouseCursor_COUNT; cursor_n++)
        SDL_FreeCursor(g_MouseCursors[cursor_n]);
    memset(g_MouseCursors, 0, sizeof(g_MouseCursors));
}
    
      static Data data_;
  static Data data6_;
    
    #include 'DHTNode.h'
#include 'DHTBucket.h'
#include 'DHTBucketTree.h'
#include 'DHTTaskQueue.h'
#include 'DHTTaskFactory.h'
#include 'DHTTask.h'
#include 'util.h'
#include 'LogFactory.h'
#include 'Logger.h'
#include 'fmt.h'
    
    
    {} // namespace aria2
    
    DHTTaskExecutor::~DHTTaskExecutor() = default;
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                                   int numRetry)
{
  auto task = std::make_shared<DHTPingTask>(remoteNode, numRetry);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
      void setLocalNode(const std::shared_ptr<DHTNode>& localNode);
    
    
    {  void updateTokenSecret();
};
    
    namespace aria2 {
    }