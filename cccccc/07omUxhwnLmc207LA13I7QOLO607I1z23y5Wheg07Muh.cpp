
        
        // Get the python wrappers for a list of ops in a OpList.
// `op_list_buf` should be a pointer to a buffer containing
// the binary encoded OpList proto, and `op_list_len` should be the
// length of that buffer.
string GetPythonWrappers(const char* op_list_buf, size_t op_list_len);
    
    // Creates a numpy array in 'ret' and copies the content of tensor 't'
// into 'ret'.
Status ConvertTensorToNdarray(const Tensor& t, PyObject** ret);
    
    #include 'tensorflow/core/framework/node_def.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/util/device_name_utils.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
      // Updates the plan's work area with space allocated by a new scratch
  // allocator. This facilitates plan reuse with scratch allocators.
  //
  // This requires that the plan was originally created using a scratch
  // allocator, as otherwise scratch space will have been allocated internally
  // by cuFFT.
  virtual void UpdatePlanWithScratchAllocator(
      Stream *stream, Plan *plan, ScratchAllocator *scratch_allocator) = 0;
    
    
    {}  // namespace grpc

    
    // Client
MeasureDouble RpcClientSentBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientSentBytesPerRpcMeasureName,
      'Total bytes sent across all request messages per RPC', kUnitBytes);
  return measure;
}
    
    void DynamicThreadPool::Add(const std::function<void()>& callback) {
  std::lock_guard<std::mutex> lock(mu_);
  // Add works to the callbacks list
  callbacks_.push(callback);
  // Increase pool size or notify as needed
  if (threads_waiting_ == 0) {
    // Kick off a new thread
    nthreads_++;
    new DynamicThread(this);
  } else {
    cv_.notify_one();
  }
  // Also use this chance to harvest dead threads
  if (!dead_threads_.empty()) {
    ReapThreads(&dead_threads_);
  }
}
    
    #endif  // GPR_LINUX

    
    
    {DMLC_REGISTER_DATA_PARSER(uint32_t, real_t, dense_libsvm,
  data::CreateDenseLibSVMParser<uint32_t __DMLC_COMMA real_t>);
}  // namespace dmlc

    
    SparsePageWriter::SparsePageWriter(
    const std::vector<std::string>& name_shards,
    const std::vector<std::string>& format_shards,
    size_t extra_buffer_capacity)
    : num_free_buffer_(extra_buffer_capacity + name_shards.size()),
      clock_ptr_(0),
      workers_(name_shards.size()),
      qworkers_(name_shards.size()) {
  CHECK_EQ(name_shards.size(), format_shards.size());
  // start writer threads
  for (size_t i = 0; i < name_shards.size(); ++i) {
    std::string name_shard = name_shards[i];
    std::string format_shard = format_shards[i];
    auto* wqueue = &qworkers_[i];
    workers_[i].reset(new std::thread(
        [this, name_shard, format_shard, wqueue] () {
          std::unique_ptr<dmlc::Stream> fo(
              dmlc::Stream::Create(name_shard.c_str(), 'w'));
          std::unique_ptr<SparsePageFormat> fmt(
              SparsePageFormat::Create(format_shard));
          fo->Write(format_shard);
          std::shared_ptr<SparsePage> page;
          while (wqueue->Pop(&page)) {
            if (page == nullptr) break;
            fmt->Write(*page, fo.get());
            qrecycle_.Push(std::move(page));
          }
          fo.reset(nullptr);
          LOG(CONSOLE) << 'SparsePage::Writer Finished writing to ' << name_shard;
        }));
  }
}
    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    #pragma omp parallel for num_threads(std::min(nthread, n_blocks)) schedule(guided)
    for (bst_omp_uint iblock = 0; iblock < n_blocks; iblock++) {
      const size_t istart = iblock * block_size;
      const size_t iend = (((iblock + 1) * block_size > size) ? size : istart + block_size);
    }
    
      // p_last_fmat_ is a valid pointer as long as UpdatePredictionCache() is called in
  // conjunction with Update().
  if (!p_last_fmat_ || !p_last_tree_ || data != p_last_fmat_) {
    return false;
  }
    
    
    {// The number of bits required to represent a given unsigned range
static size_t SymbolBits(size_t num_symbols) {
  auto bits = std::ceil(std::log2(num_symbols));
  return std::max(static_cast<size_t>(bits), size_t(1));
}
}  // namespace detail
    
        // read-only access
    
        /** Creates an action with a Cardinal Spline array of points and tension.
     * @code
     * When this function bound to js or lua,the input params are changed.
     * In js: var create(var t,var table).
     * In lua: local create(local t, local table).
     * @param duration In seconds.
     * @param point An PointArray.
     * @param tension Goodness of fit.
     * @endcode
     */
    static CardinalSplineBy* create(float duration, PointArray* points, float tension);
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Twirl);
};
    
    
    {// end of actions group
/// @}
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(ScaleTo);
};
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
    AtlasNode::~AtlasNode()
{
    CC_SAFE_RELEASE(_textureAtlas);
}
    
    #endif // #ifndef COCOS_2D_CCAUTOPOLYGON_H__
