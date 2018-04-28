
        
          // Publish metadata about the debugged Session::Run() call.
  //
  // See the doc string of DebuggerStateInterface::PublishDebugMetadata() for
  // details.
  Status PublishDebugMetadata(const int64 global_step,
                              const int64 session_run_count,
                              const int64 executor_step_count,
                              const std::vector<string>& input_names,
                              const std::vector<string>& output_names,
                              const std::vector<string>& target_names) override;
    
    
    {  template <typename Packet>
  inline Packet packetOp(const Packet& y) const {
    const Packet one = internal::pset1<Packet>(1);
    return internal::psub(one, internal::pmul(y, y));
  }
};
    
    #if TENSORFLOW_USE_SYCL
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
REGISTER_COMPLEX(GPU, float, complex64);
REGISTER_COMPLEX(GPU, double, complex128);
#endif
    
    // Adds resource events for a single device.
void AddResourceMetadata(uint32 device_id,
                         const std::map<uint32, const Resource *> &resources,
                         string *json) {
  for (const auto &pair : resources) {
    uint32 resource_id = pair.first;
    const Resource &resource = *pair.second;
    if (!resource.name().empty()) {
      Appendf(json,
              R'({'ph':'M','pid':%u,'tid':%u,)'
              R'('name':'thread_name','args':{)',
              device_id, resource_id);
      AppendEscapedName(json, resource.name());
      Appendf(json, '}},');
    }
    Appendf(json,
            R'({'ph':'M','pid':%u,'tid':%u,)'
            R'('name':'thread_sort_index','args':{'sort_index':%u}},)',
            device_id, resource_id, resource_id);
  }
}
    
        // A\B
    cv::solve(H, A, A, cv::DECOMP_NORMAL);
    H.release();
    
    void ComputeExtrinsicRefine(const Mat& imagePoints, const Mat& objectPoints, Mat& rvec,
                            Mat&  tvec, Mat& J, const int MaxIter,
                            const IntrinsicParams& param, const double thresh_cond);
CV_EXPORTS Mat ComputeHomography(Mat m, Mat M);
    
    namespace cv
{
    }
    
      void Preprocess(const cv::Mat& img,
                  std::vector<cv::Mat>* input_channels);
    
    #if defined(USE_LEVELDB) && defined(USE_LMDB)
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_2 @f$
   *   -# ...
   *   - K @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_K @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      the concatenated output @f$
   *        y = [\begin{array}{cccc} x_1 & x_2 & ... & x_K \end{array}]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
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
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/sigmoid_layer.hpp'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #ifndef GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
#define GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    namespace grpc_node_generator {
    }
    
    #include <string>
    
    
    {  const Result start_;
};
    
    
    { private:
  std::map<string, std::shared_ptr<QpsGauge>> qps_gauges_;
  std::mutex mu_;
};
    
    
    {  return cli.Run(argc, argv);
}

    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    SEXP XGBoosterUpdateOneIter_R(SEXP handle, SEXP iter, SEXP dtrain) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterUpdateOneIter(R_ExternalPtrAddr(handle),
                                  asInteger(iter),
                                  R_ExternalPtrAddr(dtrain)));
  R_API_END();
  return R_NilValue;
}
    
    
    {  // training parameter
  CoordinateTrainParam param;
  std::unique_ptr<FeatureSelector> selector;
  common::Monitor monitor;
};
    
    TEST_F(OrderingTest, compare_less) {
  compare_less<OddCompare<int>> op;
  EXPECT_FALSE(op(3, 4));
  EXPECT_FALSE(op(3, 3));
  EXPECT_TRUE(op(4, 3));
}
    
    void copy(const char* srcFile, const char* dest) {
  fs::path destPath(dest);
  if (!destPath.is_absolute()) {
    auto hp = getHugePageSize();
    CHECK(hp) << 'no huge pages available';
    destPath = fs::canonical_parent(destPath, hp->mountPoint);
  }
    }
    
    
    {    for (size_t i = 0; i < nrRead; i++) {
      int id = completed[i] - ops.get();
      EXPECT_GE(id, 0);
      EXPECT_LT(id, specs.size());
      EXPECT_TRUE(pending[id]);
      pending[id] = false;
      ssize_t res = ops[id].result();
      EXPECT_LE(0, res) << folly::errnoStr(-res);
      EXPECT_EQ(specs[id].size, res);
    }
  }
  EXPECT_EQ(specs.size(), aioReader.totalSubmits());
    
      folly::File file_;
  folly::Synchronized<Data, std::mutex> data_;
  /**
   * messageReady_ is signaled by writer threads whenever they add a new
   * message to the current queue.
   */
  std::condition_variable messageReady_;
  /**
   * ioCV_ is signaled by the I/O thread each time it increments
   * the ioThreadCounter (once each time around its loop).
   */
  std::condition_variable ioCV_;
    
    
    {void ImmediateFileWriter::flush() {}
} // namespace folly

    
    namespace fuzzer {
    }
    
        void Reset() {
      BlockCoverage = 0;
      CallerCalleeCoverage = 0;
      CounterBitmapBits = 0;
      CounterBitmap.clear();
      VPMap.Reset();
    }
    
      if (!Options.Verbosity)
    return;
  Printf('#%zd\t%s', TotalNumberOfRuns, Where);
  if (MaxCoverage.BlockCoverage)
    Printf(' cov: %zd', MaxCoverage.BlockCoverage);
  if (size_t N = MaxCoverage.VPMap.GetNumBitsSinceLastMerge())
    Printf(' vp: %zd', N);
  if (size_t N = TPC.GetTotalPCCoverage())
    Printf(' cov: %zd', N);
  if (auto TB = MaxCoverage.CounterBitmapBits)
    Printf(' bits: %zd', TB);
  if (size_t N = Corpus.NumFeatures())
    Printf( ' ft: %zd', N);
  if (MaxCoverage.CallerCalleeCoverage)
    Printf(' indir: %zd', MaxCoverage.CallerCalleeCoverage);
  if (!Corpus.empty()) {
    Printf(' corp: %zd', Corpus.NumActiveUnits());
    if (size_t N = Corpus.SizeInBytes()) {
      if (N < (1<<14))
        Printf('/%zdb', N);
      else if (N < (1 << 24))
        Printf('/%zdKb', N >> 10);
      else
        Printf('/%zdMb', N >> 20);
    }
  }
  if (Units)
    Printf(' units: %zd', Units);
    
    MutationDispatcher::MutationDispatcher(Random &Rand,
                                       const FuzzingOptions &Options)
    : Rand(Rand), Options(Options) {
  DefaultMutators.insert(
      DefaultMutators.begin(),
      {
          {&MutationDispatcher::Mutate_EraseBytes, 'EraseBytes'},
          {&MutationDispatcher::Mutate_InsertByte, 'InsertByte'},
          {&MutationDispatcher::Mutate_InsertRepeatedBytes,
           'InsertRepeatedBytes'},
          {&MutationDispatcher::Mutate_ChangeByte, 'ChangeByte'},
          {&MutationDispatcher::Mutate_ChangeBit, 'ChangeBit'},
          {&MutationDispatcher::Mutate_ShuffleBytes, 'ShuffleBytes'},
          {&MutationDispatcher::Mutate_ChangeASCIIInteger, 'ChangeASCIIInt'},
          {&MutationDispatcher::Mutate_ChangeBinaryInteger, 'ChangeBinInt'},
          {&MutationDispatcher::Mutate_CopyPart, 'CopyPart'},
          {&MutationDispatcher::Mutate_CrossOver, 'CrossOver'},
          {&MutationDispatcher::Mutate_AddWordFromManualDictionary,
           'ManualDict'},
          {&MutationDispatcher::Mutate_AddWordFromTemporaryAutoDictionary,
           'TempAutoDict'},
          {&MutationDispatcher::Mutate_AddWordFromPersistentAutoDictionary,
           'PersAutoDict'},
      });
  if(Options.UseCmp)
    DefaultMutators.push_back(
        {&MutationDispatcher::Mutate_AddWordFromTORC, 'CMP'});
    }
    
    void sha1_writebyte(sha1nfo *s, uint8_t data) {
	++s->byteCount;
	sha1_addUncounted(s, data);
}
    
      void HandleTrace(uint32_t *guard, uintptr_t PC);
  void HandleInit(uint32_t *start, uint32_t *stop);
  void HandleCallerCallee(uintptr_t Caller, uintptr_t Callee);
  void HandleValueProfile(size_t Value) { ValueProfileMap.AddValue(Value); }
  template <class T> void HandleCmp(void *PC, T Arg1, T Arg2);
  size_t GetTotalPCCoverage();
  void SetUseCounters(bool UC) { UseCounters = UC; }
  void SetUseValueProfile(bool VP) { UseValueProfile = VP; }
  void SetPrintNewPCs(bool P) { DoPrintNewPCs = P; }
  template <class Callback> size_t CollectFeatures(Callback CB);
  bool UpdateValueProfileMap(ValueBitMap *MaxValueProfileMap) {
    return UseValueProfile && MaxValueProfileMap->MergeFrom(ValueProfileMap);
  }
    
      // We don't want to create too many trace-based mutations as it is both
  // expensive and useless. So after some number of mutations is collected,
  // start rejecting some of them. The more there are mutations the more we
  // reject.
  bool WantToHandleOneMoreMutation() {
    const size_t FirstN = 64;
    // Gladly handle first N mutations.
    if (NumMutations <= FirstN) return true;
    size_t Diff = NumMutations - FirstN;
    size_t DiffLog = sizeof(long) * 8 - __builtin_clzl((long)Diff);
    assert(DiffLog > 0 && DiffLog < 64);
    bool WantThisOne = MD.GetRand()(1 << DiffLog) == 0;  // 1 out of DiffLog.
    return WantThisOne;
  }
    
    static std::mutex SignalMutex;
// Global variables used to keep track of how signal handling should be
// restored. They should **not** be accessed without holding `SignalMutex`.
static int ActiveThreadCount = 0;
static struct sigaction OldSigIntAction;
static struct sigaction OldSigQuitAction;
static sigset_t OldBlockedSignalsSet;