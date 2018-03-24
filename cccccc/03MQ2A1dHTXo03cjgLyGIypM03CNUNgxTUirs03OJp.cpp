
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    { private:
  Cluster* cluster_;  // Not owned.
  int measurement_steps_;
  int measurement_threads_;
  std::vector<std::pair<string, Tensor>> feed_;
  std::vector<string> fetch_;
  std::unique_ptr<thread::ThreadPool> thread_pool_;
};
    
      double ComputeDualLoss(const double current_dual, const double example_label,
                         const double example_weight) const final {
    // For binary classification, there are 2 conjugate functions, one per
    // label value (-1 and 1).
    const double y_alpha = current_dual * example_label;  // y \alpha
    if (y_alpha < 0 || y_alpha > 1.0) {
      return std::numeric_limits<double>::max();
    }
    return (-y_alpha + 0.5 * gamma * current_dual * current_dual) *
           example_weight;
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
    
    #endif  // TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_DIAGNOSTICS_H_

    
      ~CUDAEvent() override;
    
    TEST_F(NodeDefBuilderTest, TypeListTwice) {
  Op(OpDefBuilder('TypeListTwice')
         .Input('a: T')
         .Input('b: T')
         .Attr('T: list(type) >= 0'));
    }
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    void SYCLDeviceContext::CopyDeviceTensorToCPU(const Tensor *device_tensor,
                                              StringPiece edge_name,
                                              Device *device,
                                              Tensor *cpu_tensor,
                                              StatusCallback done) {
  const int64 total_bytes = device_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(device_tensor);
    void *dst_ptr = DMAHelper::base(cpu_tensor);
    switch (device_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
      void CopyCPUTensorToDevice(const Tensor *cpu_tensor, Device *device,
                             Tensor *device_tensor,
                             StatusCallback done) const override;
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/inputbuffer.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
      // If instruction is part of inputs, don't reset the bit_vector.
  if (std::find(inputs.begin(), inputs.end(), instruction) == inputs.end()) {
    bit_vector.SetToZero();
  }
  bit_vector.Set(GetIndex(instruction));
  for (const HloInstruction* input : inputs) {
    bit_vector.OrWith(GetBitVector(input));
  }
    
    void leveldb_release_snapshot(
    leveldb_t* db,
    const leveldb_snapshot_t* snapshot) {
  db->rep->ReleaseSnapshot(snapshot->rep);
  delete snapshot;
}
    
      // When user keys are different, but correctly ordered
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('hello', 200, kTypeValue)));
    
    // Called on every item found in a WriteBatch.
class WriteBatchItemPrinter : public WriteBatch::Handler {
 public:
  WritableFile* dst_;
  virtual void Put(const Slice& key, const Slice& value) {
    std::string r = '  put '';
    AppendEscapedStringTo(&r, key);
    r += '' '';
    AppendEscapedStringTo(&r, value);
    r += ''\n';
    dst_->Append(r);
  }
  virtual void Delete(const Slice& key) {
    std::string r = '  del '';
    AppendEscapedStringTo(&r, key);
    r += ''\n';
    dst_->Append(r);
  }
};
    
    std::string LogFileName(const std::string& name, uint64_t number) {
  assert(number > 0);
  return MakeFileName(name, number, 'log');
}
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
      // Delete the specified 'file' from the specified 'level'.
  void DeleteFile(int level, uint64_t file) {
    deleted_files_.insert(std::make_pair(level, file));
  }
    
        status = sqlite3_prepare_v2(db_, read_str.c_str(), -1, &pStmt, NULL);
    ErrorCheck(status);
    for (int i = 0; i < reads_ && SQLITE_ROW == sqlite3_step(pStmt); i++) {
      bytes_ += sqlite3_column_bytes(pStmt, 1) + sqlite3_column_bytes(pStmt, 2);
      FinishedSingleOp();
    }
    
      // Advanced functions: these are used to reduce the space requirements
  // for internal data structures like index blocks.
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
    namespace caffe {
    }
    
    #endif  // CAFFE_CUDNN_SIGMOID_LAYER_HPP_

    
    /**
 * @brief Convolve the input with a bank of learned filters, and (optionally)
 *        add biases, treating filters and convolution parameters in the
 *        opposite sense as ConvolutionLayer.
 *
 *   ConvolutionLayer computes each output value by dotting an input window with
 *   a filter; DeconvolutionLayer multiplies each input value by a filter
 *   elementwise, and sums over the resulting output windows. In other words,
 *   DeconvolutionLayer is ConvolutionLayer with the forward and backward passes
 *   reversed. DeconvolutionLayer reuses ConvolutionParameter for its
 *   parameters, but they take the opposite sense as in ConvolutionLayer (so
 *   padding is removed from the output rather than added to the input, and
 *   stride results in upsampling rather than downsampling).
 */
template <typename Dtype>
class DeconvolutionLayer : public BaseConvolutionLayer<Dtype> {
 public:
  explicit DeconvolutionLayer(const LayerParameter& param)
      : BaseConvolutionLayer<Dtype>(param) {}
    }
    
    namespace caffe {
    }
    
    
    {  MockEnvTest()
      : env_(new MockEnv(Env::Default())) {
  }
  ~MockEnvTest() {
    delete env_;
  }
};
    
      // After a partial flush move the tail to the beginning of the buffer
  void RefitTail(size_t tail_offset, size_t tail_size) {
    if (tail_size > 0) {
      memmove(bufstart_, bufstart_ + tail_offset, tail_size);
    }
    cursize_ = tail_size;
  }
    
      // Offset at which to start looking for the first record to return
  uint64_t const initial_offset_;
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats)
      : StatisticsImpl(stats, false), m_ignore_histograms() {
  }
    
    Status DateTieredDB::Open(const Options& options, const std::string& dbname,
                          DateTieredDB** dbptr, int64_t ttl,
                          int64_t column_family_interval, bool read_only) {
  DBOptions db_options(options);
  ColumnFamilyOptions cf_options(options);
  std::vector<ColumnFamilyDescriptor> descriptors;
  std::vector<ColumnFamilyHandle*> handles;
  DB* db;
  Status s;
    }
    
      // Cached pointer to child iterator with the current key, or nullptr if no
  // child iterators are valid.  This is the top of minHeap_ or maxHeap_
  // depending on the direction.
  IteratorWrapper* current_;
  // Which direction is the iterator moving?
  enum Direction {
    kForward,
    kReverse
  };
  Direction direction_;
  MergerMinIterHeap minHeap_;
  bool prefix_seek_mode_;
    
      m_jSliceB = env->NewGlobalRef(SliceJni::construct0(env));
  if(m_jSliceB == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
    
      bool any_generator = false;
  bool print_make_rules = false;
  bool raw_binary = false;
  bool schema_binary = false;
  bool grpc_enabled = false;
  std::vector<std::string> filenames;
  std::list<std::string> include_directories_storage;
  std::vector<const char *> include_directories;
  std::vector<const char *> conform_include_directories;
  std::vector<bool> generator_enabled(params_.num_generators, false);
  size_t binary_files_from = std::numeric_limits<size_t>::max();
  std::string conform_to_schema;
    
        Value() : i_(0), type_(TYPE_NULL), min_bit_width_(BIT_WIDTH_8) {}
    
    // Return the source of the generated service file.
grpc::string GenerateServiceSource(grpc_generator::File *file,
                                   const grpc_generator::Service *service,
                                   grpc_go_generator::Parameters *parameters);
    
    class GreeterServiceImpl final : public Greeter::Service {
  virtual grpc::Status SayHello(
      grpc::ServerContext *context,
      const flatbuffers::grpc::Message<HelloRequest> *request_msg,
      flatbuffers::grpc::Message<HelloReply> *response_msg) override {
    // flatbuffers::grpc::MessageBuilder mb_;
    // We call GetRoot to 'parse' the message. Verification is already
    // performed by default. See the notes below for more details.
    const HelloRequest *request = request_msg->GetRoot();
    }
    }
    
    struct Printer {
  virtual ~Printer() {}
    }
    
    // This function implements the server thread.
void RunServer() {
  auto server_address = '0.0.0.0:50051';
  // Callback interface we implemented above.
  ServiceImpl service;
  grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
    }
    
    // Generate table constructors, conditioned on its members' types.
static void GenTableBuilders(const StructDef &struct_def,
                             std::string *code_ptr) {
  GetStartOfTable(struct_def, code_ptr);
    }
    
    int RunOneTest(Fuzzer *F, const char *InputFilePath, size_t MaxLen) {
  Unit U = FileToVector(InputFilePath);
  if (MaxLen && MaxLen < U.size())
    U.resize(MaxLen);
  F->RunOne(U.data(), U.size());
  F->TryDetectingAMemoryLeak(U.data(), U.size(), true);
  return 0;
}
    
    namespace fuzzer {
    }
    
      // Dictionary provided by the user via -dict=DICT_FILE.
  Dictionary ManualDictionary;
  // Temporary dictionary modified by the fuzzer itself,
  // recreated periodically.
  Dictionary TempAutoDictionary;
  // Persistent dictionary modified by the fuzzer, consists of
  // entries that led to successfull discoveries in the past mutations.
  Dictionary PersistentAutoDictionary;
    
    struct FuzzingOptions {
  int Verbosity = 1;
  size_t MaxLen = 0;
  int UnitTimeoutSec = 300;
  int TimeoutExitCode = 77;
  int ErrorExitCode = 77;
  int MaxTotalTimeSec = 0;
  int RssLimitMb = 0;
  bool DoCrossOver = true;
  int MutateDepth = 5;
  bool UseCounters = false;
  bool UseIndirCalls = true;
  bool UseMemcmp = true;
  bool UseMemmem = true;
  bool UseCmp = false;
  bool UseValueProfile = false;
  bool Shrink = false;
  int ReloadIntervalSec = 1;
  bool ShuffleAtStartUp = true;
  bool PreferSmall = true;
  size_t MaxNumberOfRuns = -1L;
  int ReportSlowUnits = 10;
  bool OnlyASCII = false;
  std::string OutputCorpus;
  std::string ArtifactPrefix = './';
  std::string ExactArtifactPath;
  std::string ExitOnSrcPos;
  std::string ExitOnItem;
  bool SaveArtifacts = true;
  bool PrintNEW = true; // Print a status line when new units are found;
  bool OutputCSV = false;
  bool PrintNewCovPcs = false;
  bool PrintFinalStats = false;
  bool PrintCorpusStats = false;
  bool PrintCoverage = false;
  bool DumpCoverage = false;
  bool DetectLeaks = true;
  int  TraceMalloc = 0;
  bool HandleAbrt = false;
  bool HandleBus = false;
  bool HandleFpe = false;
  bool HandleIll = false;
  bool HandleInt = false;
  bool HandleSegv = false;
  bool HandleTerm = false;
};
    
    std::string Sha1ToString(const uint8_t Sha1[kSHA1NumBytes]) {
  std::stringstream SS;
  for (int i = 0; i < kSHA1NumBytes; i++)
    SS << std::hex << std::setfill('0') << std::setw(2) << (unsigned)Sha1[i];
  return SS.str();
}
    
    std::string Hash(const Unit &U);
    
    void TracePC::HandleTrace(uint32_t *Guard, uintptr_t PC) {
  uint32_t Idx = *Guard;
  if (!Idx) return;
  PCs[Idx % kNumPCs] = PC;
  Counters[Idx % kNumCounters]++;
}