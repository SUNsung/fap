    http://www.apache.org/licenses/LICENSE-2.0
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Safe containers for an owned TFE_TensorHandle. On destruction, the handle
// will be deleted by TFE_DeleteTensorHandle.
using Safe_TFE_TensorHandlePtr =
    std::unique_ptr<TFE_TensorHandle, detail::TFETensorHandleDeleter>;
Safe_TFE_TensorHandlePtr make_safe(TFE_TensorHandle* handle);
    
      ~PyRecordReader();
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include 'tensorflow/python/util/kernel_registry.h'
    
    namespace tensorflow {
namespace swig {
    }
    }
    
    #include 'tensorflow/stream_executor/platform/port.h'
    
        const QString &getAppName() const { return appName; }
    const QIcon &getAppIcon() const { return appIcon; }
    const QIcon &getTrayAndWindowIcon() const { return trayAndWindowIcon; }
    const QString &getTitleAddText() const { return titleAddText; }
    
    protected:
    void paintEvent(QPaintEvent *);
    
    /** Dialog showing transaction details. */
class TransactionDescDialog : public QDialog
{
    Q_OBJECT
    }
    
    #include <script/script.h>
    
    
static void secp256k1_rfc6979_hmac_sha256_initialize(secp256k1_rfc6979_hmac_sha256_t *rng, const unsigned char *key, size_t keylen) {
    secp256k1_hmac_sha256_t hmac;
    static const unsigned char zero[1] = {0x00};
    static const unsigned char one[1] = {0x01};
    }
    
    
    {
    {        /* compute using ECDH function */
        CHECK(secp256k1_ec_pubkey_create(ctx, &point[0], s_one) == 1);
        CHECK(secp256k1_ecdh(ctx, output_ecdh, &point[0], s_b32) == 1);
        /* compute 'explicitly' */
        CHECK(secp256k1_ec_pubkey_create(ctx, &point[1], s_b32) == 1);
        CHECK(secp256k1_ec_pubkey_serialize(ctx, point_ser, &point_ser_len, &point[1], SECP256K1_EC_COMPRESSED) == 1);
        CHECK(point_ser_len == sizeof(point_ser));
        secp256k1_sha256_initialize(&sha);
        secp256k1_sha256_write(&sha, point_ser, point_ser_len);
        secp256k1_sha256_finalize(&sha, output_ser);
        /* compare */
        CHECK(memcmp(output_ecdh, output_ser, sizeof(output_ser)) == 0);
    }
}
    
        /* Check NULLs for conversion */
    CHECK(secp256k1_ecdsa_sign(both, &normal_sig, message, privkey, NULL, NULL) == 1);
    ecount = 0;
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(both, NULL, &recsig) == 0);
    CHECK(ecount == 1);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(both, &normal_sig, NULL) == 0);
    CHECK(ecount == 2);
    CHECK(secp256k1_ecdsa_recoverable_signature_convert(both, &normal_sig, &recsig) == 1);
    
    
    {} // namespace detail
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel AVX intrinsics to access the SIMD instruction set.
double DotProductAVX(const double* u, const double* v, int n) {
  int max_offset = n - 4;
  int offset = 0;
  // Accumulate a set of 4 sums in sum, by loading pairs of 4 values from u and
  // v, and multiplying them together in parallel.
  __m256d sum = _mm256_setzero_pd();
  if (offset <= max_offset) {
    offset = 4;
    // Aligned load is reputedly faster but requires 32 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 31) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 31) == 0) {
      // Use aligned load.
      __m256d floats1 = _mm256_load_pd(u);
      __m256d floats2 = _mm256_load_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_load_pd(u + offset);
        floats2 = _mm256_load_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    } else {
      // Use unaligned load.
      __m256d floats1 = _mm256_loadu_pd(u);
      __m256d floats2 = _mm256_loadu_pd(v);
      // Multiply.
      sum = _mm256_mul_pd(floats1, floats2);
      while (offset <= max_offset) {
        floats1 = _mm256_loadu_pd(u + offset);
        floats2 = _mm256_loadu_pd(v + offset);
        offset += 4;
        __m256d product = _mm256_mul_pd(floats1, floats2);
        sum = _mm256_add_pd(sum, product);
      }
    }
  }
  // Add the 4 product sums together horizontally. Not so easy as with sse, as
  // there is no add across the upper/lower 128 bit boundary, so permute to
  // move the upper 128 bits to lower in another register.
  __m256d sum2 = _mm256_permute2f128_pd(sum, sum, 1);
  sum = _mm256_hadd_pd(sum, sum2);
  sum = _mm256_hadd_pd(sum, sum);
  double result;
  // _mm256_extract_f64 doesn't exist, but resist the temptation to use an sse
  // instruction, as that introduces a 70 cycle delay. All this casting is to
  // fool the intrinsics into thinking we are extracting the bottom int64.
  auto cast_sum = _mm256_castpd_si256(sum);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored '-Wstrict-aliasing'
  *(reinterpret_cast<int64_t*>(&result)) =
#if defined(_WIN32) || defined(__i386__)
      // This is a very simple workaround that is activated
      // for all platforms that do not have _mm256_extract_epi64.
      // _mm256_extract_epi64(X, Y) == ((uint64_t*)&X)[Y]
      ((uint64_t*)&cast_sum)[0]
#else
      _mm256_extract_epi64(cast_sum, 0)
#endif
      ;
#pragma GCC diagnostic pop
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    #ifndef TESSERACT_ARCH_INTSIMDMATRIX_H_
#define TESSERACT_ARCH_INTSIMDMATRIX_H_
    
      // Check if the neighbor with vertical distance of y_gap is a near and math
  // block partition.
  bool IsNearMathNeighbor(const int y_gap, const ColPartition *neighbor) const;
    
    struct OSBestResult {
  OSBestResult() : orientation_id(0), script_id(0), sconfidence(0.0),
                   oconfidence(0.0) {}
  int orientation_id;
  int script_id;
  float sconfidence;
  float oconfidence;
};
    
    namespace tesseract {
    }
    
      STRING paramfile;
  paramfile = tess->datadir;
  paramfile += VARDIR;             // parameters dir
  paramfile += 'edited';           // actual name
    
      // Construct the cartesian product of the best_choices of word(1) and word2.
  WERD_CHOICE_LIST joined_choices;
  WERD_CHOICE_IT jc_it(&joined_choices);
  WERD_CHOICE_IT bc1_it(&word->best_choices);
  WERD_CHOICE_IT bc2_it(&word2->best_choices);
  int num_word1_choices = word->best_choices.length();
  int total_joined_choices = num_word1_choices;
  // Nota Bene: For the main loop here, we operate only on the 2nd and greater
  // word2 choices, and put them in the joined_choices list. The 1st word2
  // choice gets added to the original word1 choices in-place after we have
  // finished with them.
  int bc2_index = 1;
  for (bc2_it.forward(); !bc2_it.at_first(); bc2_it.forward(), ++bc2_index) {
    if (total_joined_choices >= kTooManyAltChoices &&
        bc2_index > kAltsPerPiece)
      break;
    int bc1_index = 0;
    for (bc1_it.move_to_first(); bc1_index < num_word1_choices;
        ++bc1_index, bc1_it.forward()) {
      if (total_joined_choices >= kTooManyAltChoices &&
          bc1_index > kAltsPerPiece)
        break;
      WERD_CHOICE *wc = new WERD_CHOICE(*bc1_it.data());
      *wc += *bc2_it.data();
      jc_it.add_after_then_move(wc);
      ++total_joined_choices;
    }
  }
  // Now that we've filled in as many alternates as we want, paste the best
  // choice for word2 onto the original word alt_choices.
  bc1_it.move_to_first();
  bc2_it.move_to_first();
  for (bc1_it.mark_cycle_pt(); !bc1_it.cycled_list(); bc1_it.forward()) {
    *bc1_it.data() += *bc2_it.data();
  }
  bc1_it.move_to_last();
  bc1_it.add_list_after(&joined_choices);
    
      /// Pix vs raw, which to use? Pix is the preferred input for efficiency,
  /// since raw buffers are copied.
  /// SetImage for Pix clones its input, so the source pix may be pixDestroyed
  /// immediately after, but may not go away until after the Thresholder has
  /// finished with it.
  void SetImage(const Pix* pix);
    
      // Clean up the bounding boxes from the polygonal approximation by
  // expanding slightly, then clipping to the blobs from the original_word
  // that overlap. If not null, the block provides the inverse rotation.
  void ClipToOriginalWord(const BLOCK* block, WERD* original_word);
    
    namespace tesseract {
    }
    
    /*! \brief typedef the factory function of operator property */
typedef std::function<OperatorProperty *()> OperatorPropertyFactory;
/*!
 * \brief Registry entry for OperatorProperty factory functions.
 */
struct OperatorPropertyReg
    : public dmlc::FunctionRegEntryBase<OperatorPropertyReg,
                                        OperatorPropertyFactory> {
  /*!
   * \brief Set key_var_num_args
   *  When this is set, the API caller is required to pass in a
   *  argument with key=key_num_args.c_str(), and value=num_args.
   *  num_args is number of positional argument when calling the function.
   *
   *  This is used to pass in length of positional arguments
   *  for operators that can take variable length of input.
   *  Most operators do not need to set this property.
   *
   * \param key the key name to be set
   */
  inline OperatorPropertyReg& set_key_var_num_args(const std::string &key) {  // NOLINT(*)
    this->key_var_num_args = key;
    return *this;
  }
  /*!
   * \brief Check if TypeString of the type matches the registered name
   */
  inline OperatorPropertyReg& check_name() {
    OperatorProperty *p = this->body();
    std::string type = p->TypeString();
    delete p;
    CHECK_EQ(this->name, type)
        << 'Register Name and TypeString mismatch, name=\'' << this->name << '\','
        << ' but TypeString=\'' << type <<'\'';
    return *this;
  }
    }
    
    
    {
    {   private:
    friend class CudaModule;
    /*!
     * \brief constructor
     * \param mod module of this kernel
     * \param mangled_name mangled kernel name
     * \param signature kernel argument signature
     */
    Kernel(const std::shared_ptr<Chunk>& mod,
           const std::string& mangled_name,
           const std::vector<ArgType>& signature);
    /*! \brief mangled kernel name */
    std::string mangled_name_;
    /*! \brief kernel argument signature */
    std::vector<ArgType> signature_;
    /*! \brief module of this kernel */
    std::shared_ptr<Chunk> mod_;
    /*! \brief cached kernel function on each device */
    std::unordered_map<int, CUfunction> func_;
  };
  /*!
   * \brief CudaModule constructor
   * \param source cuda source code.
   * \param exports export symbols before mangling.
   */
  CudaModule(const char* source,
             const std::vector<std::string>& options,
             const std::vector<std::string>& exports)
      : ptr_(std::make_shared<Chunk>(source, options, exports)) {}
  /*!
   * \brief Get cuda kernal from module by name
   * \param name kernel name
   * \param signature kernel signature
   * \return shared pointer to cuda kernel
   */
  std::shared_ptr<Kernel> GetKernel(const std::string& name,
                                    const std::vector<ArgType>& signature);
};
    
    template<typename Dtype>
void DelCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    delete v->at(i);
}
    
        std::string type = param_.prototxt.type();
    caffe_data_layer_ = caffe::LayerRegistry<Dtype>::CreateLayer(param_.prototxt);
    CHECK(caffe_data_layer_ != nullptr) << 'Failed creating caffe data layer';
    const size_t top_size = param_.prototxt.top_size();
    if (top_size > 0) {
      if (top_size > NR_SUPPORTED_TOP_ITEMS) {
        LOG(WARNING)
          << 'Too may \'top\' items, only two (one data, one label) are currently supported';
      }
      top_.reserve(top_size);
      for (size_t x = 0; x < top_size; ++x) {
        ::caffe::Blob<Dtype> *blob = new ::caffe::Blob<Dtype>();
        cleanup_blobs_.push_back(std::unique_ptr<::caffe::Blob<Dtype>>(blob));
        top_.push_back(blob);
      }
      caffe_data_layer_->SetUp(bottom_, top_);
      const std::vector<int> &shape = top_[DATA]->shape();
      const size_t shapeDimCount = shape.size();
      if (shapeDimCount > 0) {
        batch_size_ = shape[0];
        if (shapeDimCount > 1) {
          channels_ = shape[1];
          if (shapeDimCount > 2) {
            width_ = shape[2];
            if (shapeDimCount > 3) {
              height_ = shape[3];
            }
          }
        }
      }
    }
    
    
    {
    {    CHECK_EQ(net_param.layer_size(), 1) << 'Protoxt ' << value <<' is more than one layer';
    default_value_ = caffe::LayerParameter(net_param.layer(0));
    has_default_ = true;
    // return self to allow chaining
    return this->self();
  }
};
    
    
    {
    {}  // namespace op
}  // namespace mxnet

    
      virtual bool Next(void) {
    out_.num_batch_padd = 0;
    out_.batch_size = param_.batch_size;
    this->head_ = 0;
    }
    
      # Creates a `LibSVMIter` with `batch_size`=3.
  >>> data_iter = mx.io.LibSVMIter(data_libsvm = 'data.t', data_shape = (3,), batch_size = 3)
  # The data of the first batch is stored in csr storage type
  >>> batch = data_iter.next()
  >>> csr = batch.data[0]
  <CSRNDArray 3x3 @cpu(0)>
  >>> csr.asnumpy()
  [[ 0.5        0.          1.2 ]
  [ 0.          0.          0.  ]
  [ 0.6         2.4         1.2]]
  # The label of first batch
  >>> label = batch.label[0]
  >>> label
  [ 1. -2. -3.]
  <NDArray 3 @cpu(0)>
    
        bool Trainer::TrainDistributedMinibatch(const std::unordered_map<Variable, ValuePtr>& arguments, std::unordered_map<Variable, ValuePtr>& outputsToFetch, bool sweepEnd, const DeviceDescriptor& computeDevice /*= DeviceDescriptor::UseDefaultDevice()*/)
    {
        std::unordered_map<Parameter, NDArrayViewPtr> gradients;
        gradients.reserve(m_learnerParameters.size());
    }
    
            void Erase() override
        {
            if (IsPacked())
            {
                m_packedData = nullptr;
                m_packedDataLayout = nullptr;
                m_isPacked = false;
            }
            else
                Value::Erase();
        }
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange&) override
    {
        RuntimeError('%ls is a special node only to be used as input to the Input() node.', NodeDescription().c_str());
    }
    
    DHTSetup::~DHTSetup() = default;
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
      ~DHTTaskExecutor();
    
      virtual std::shared_ptr<DHTTask>
  createPeerAnnounceTask(const unsigned char* infoHash) CXX11_OVERRIDE;
    
    void DHTTokenUpdateCommand::process()
{
  try {
    tokenTracker_->updateTokenSecret();
  }
  catch (RecoverableException& e) {
    A2_LOG_ERROR_EX(EX_EXCEPTION_CAUGHT, e);
  }
}
    
    void DHTUnknownMessage::doReceivedAction() {}
    
    
    {  static const std::string UNKNOWN;
};
    
    
    {} // namespace aria2

    
    namespace aria2 {
    }
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
    std::unique_ptr<WriteControllerToken> WriteController::GetDelayToken(
    uint64_t write_rate) {
  total_delayed_++;
  // Reset counters.
  last_refill_time_ = 0;
  bytes_left_ = 0;
  set_delayed_write_rate(write_rate);
  return std::unique_ptr<WriteControllerToken>(new DelayWriteToken(this));
}
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
    namespace {
// A dummy compaction filter
class DummyCompactionFilter : public CompactionFilter {
 public:
  virtual ~DummyCompactionFilter() {}
  virtual bool Filter(int level, const Slice& key, const Slice& existing_value,
                      std::string* new_value, bool* value_changed) const {
    return false;
  }
  virtual const char* Name() const { return 'DummyCompactionFilter'; }
};
    }
    
    Status GetPlainTableOptionsFromString(
    const PlainTableOptions& table_options,
    const std::string& opts_str,
    PlainTableOptions* new_table_options);
    
    
    { private:
  DB* db_;
  const Snapshot* snapshot_;
};