
        
        void ModelAnalyzer::PrintNodeInfo(const NodeDef* node,
                                  const GraphProperties& properties, bool debug,
                                  std::ostream& os) const {
  os << node->name() << ' [' << node->op() << ']' << std::endl;
  if (properties.HasOutputProperties(node->name())) {
    const std::vector<OpInfo::TensorProperties>& props =
        properties.GetOutputProperties(node->name());
    for (int i = 0; i < props.size(); ++i) {
      const OpInfo::TensorProperties& prop = props[i];
      os << '\t'
         << 'output ' << i << ' (' << DataTypeString(prop.dtype())
         << ') has shape ';
      if (prop.shape().unknown_rank()) {
        os << '?';
      } else {
        os << '[';
        for (int i = 0; i < prop.shape().dim_size(); ++i) {
          if (i > 0) {
            os << ', ';
          }
          if (prop.shape().dim(i).size() >= 0) {
            // Print the actual dimension.
            os << prop.shape().dim(i).size();
          } else if (prop.shape().dim(i).size() == -1) {
            // We don't know anything about the dimension.
            os << '?';
          } else {
            // Symbolic dimension.
            os << 'x' << -prop.shape().dim(i).size();
          }
        }
        os << ']';
      }
      os << std::endl;
    }
  }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_
    
    namespace tensorflow {
    }
    
      TemporaryFile() {
    path = tmppath();
  }
    
    class GetMergeSingleListFeatureTensorsGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    vector<string> input_blob_names{};
    vector<string> output_blob_names{};
    }
    }
    
    namespace caffe2 {
namespace {
    }
    }
    
    #include <cstdio>    // for FILE
#include 'strngs.h'  // for STRING
    
      // Adds an element with a weight of 1.
  void add(double x, double y);
  // Adds an element with a specified weight.
  void add(double x, double y, double weight);
  // Adds a whole LLSQ.
  void add(const LLSQ& other);
  // Deletes an element with a weight of 1.
  void remove(double x, double y);
  int32_t count() const {  // no of elements
    return static_cast<int>(total_weight + 0.5);
  }
    
    #endif

    
      // Return whether this model is likely to agree with the other model on most
  // paragraphs they are marked.
  bool Comparable(const ParagraphModel &other) const;
    
      public:
    REJ() = default;
    
    // Trivial class to encapsulate a fixed-length array of bits, with
// Serialize/DeSerialize. Replaces the old macros.
class BitVector {
 public:
  // Fast lookup table to get the first least significant set bit in a byte.
  // For zero, the table has 255, but since it is a special case, most code
  // that uses this table will check for zero before looking up lsb_index_.
  static const uint8_t lsb_index_[256];
  // Fast lookup table to get the residual bits after zeroing the least
  // significant set bit in a byte.
  static const uint8_t lsb_eroded_[256];
  // Fast lookup table to give the number of set bits in a byte.
  static const int hamming_table_[256];
    }
    
    TEST_P(FooTest, DoesBlah) {
  // Inside a test, access the test parameter with the GetParam() method
  // of the TestWithParam<T> class:
  EXPECT_TRUE(foo.Blah(GetParam()));
  ...
}
    
    // A set of macros for testing Google Test assertions or code that's expected
// to generate Google Test fatal failures.  It verifies that the given
// statement will cause exactly one fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_FATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_FATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - 'statement' cannot reference local non-static variables or
//     non-static members of the current object.
//   - 'statement' cannot return a value.
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  The AcceptsMacroThatExpandsToUnprotectedComma test in
// gtest_unittest.cc will fail to compile if we do that.
#define EXPECT_FATAL_FAILURE(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      // Protects mutable state in *impl_.  This is mutable as some const
  // methods need to lock it too.
  mutable internal::Mutex mutex_;
    
      // Called after a test ends.
  virtual void OnTestEnd(const TestInfo& /* test_info */) {
    int difference = Water::allocated() - initially_allocated_;
    }
    
      // Gets the next node in the queue.
  QueueNode* next() { return next_; }
  const QueueNode* next() const { return next_; }
    
    
    { private:
  CensusContext context_;
  // Metadata elements for tracing and census stats data.
  grpc_linked_mdelem stats_bin_;
  grpc_linked_mdelem tracing_bin_;
  // Client method.
  absl::string_view method_;
  std::string qualified_method_;
  grpc_slice path_;
  // The recv trailing metadata callbacks.
  grpc_metadata_batch* recv_trailing_metadata_;
  grpc_closure* initial_on_done_recv_trailing_metadata_;
  grpc_closure on_done_recv_trailing_metadata_;
  // recv message
  grpc_closure* initial_on_done_recv_message_;
  grpc_closure on_done_recv_message_;
  // Start time (for measuring latency).
  absl::Time start_time_;
  // Server elapsed time in nanoseconds.
  uint64_t elapsed_time_;
  // The received message--may be null.
  grpc_core::OrphanablePtr<grpc_core::ByteStream>* recv_message_;
  // Number of messages in this RPC.
  uint64_t recv_message_count_;
  uint64_t sent_message_count_;
  // Buffer needed for grpc_slice to reference when adding trace context
  // metatdata to outgoing message.
  char tracing_buf_[kMaxTraceContextLen];
};
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H */

    
    
    {    uint8_t version = buf[kVersionIdOffset];
    uint32_t fieldID = buf[kServerElapsedTimeOffset];
    if (version != kVersionId || fieldID != kServerElapsedTimeField) {
      *time = 0;
      return kEncodeDecodeFailure;
    }
    *time = absl::little_endian::Load64(
        &buf[kServerElapsedTimeOffset + kFieldIdSize]);
    return kRpcServerStatsSize;
  }
    
    #endif  // !GRPC_CUSTOM_DEFAULT_THREAD_POOL

    
    DynamicThreadPool::DynamicThreadPool(int reserve_threads)
    : shutdown_(false),
      reserve_threads_(reserve_threads),
      nthreads_(0),
      threads_waiting_(0) {
  for (int i = 0; i < reserve_threads_; i++) {
    std::lock_guard<std::mutex> lock(mu_);
    nthreads_++;
    new DynamicThread(this);
  }
}
    
    // Reads the CPU stats (in a pair of busy and total numbers) from the system.
// The units of the stats should be the same.
std::pair<uint64_t, uint64_t> GetCpuStatsImpl();
    
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
    
    class CaffeDataIterWrapper : public PrefetcherIter {
 public:
  CaffeDataIterWrapper() : PrefetcherIter(NULL), next_time_(0) {}
  virtual ~CaffeDataIterWrapper() {
    IF_CHECK_TIMING(
      if (next_time_.load() > 0) {
        LOG(WARNING) << 'Caffe data loader was blocked for '
                     << next_time_.load()
                     << ' ms waiting for incoming data';
      }
    )
  }
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    // We need to init prefetcher args in order to get dtype
    this->param_.InitAllowUnknown(kwargs);
    if (!this->param_.dtype) this->param_.dtype = mshadow::kFloat32;
    switch (this->param_.dtype.value()) {
      case mshadow::kFloat32:
        this->loader_.reset(new CaffeDataIter<float>(this->param_.dtype.value()));
        break;
      case mshadow::kFloat64:
        this->loader_.reset(new CaffeDataIter<double>(this->param_.dtype.value()));
        break;
      case mshadow::kFloat16:
        LOG(FATAL) << 'float16 layer is not supported by caffe';
        return;
      default:
        LOG(FATAL) << 'Unsupported type ' << this->param_.dtype.value();
        return;
    }
    PrefetcherIter::Init(kwargs);
    this->param_.prefetch_buffer = 1;
  }
  virtual void BeforeFirst(void) {
    return PrefetcherIter::BeforeFirst();
  }
  virtual bool Next(void) {
    IF_CHECK_TIMING(
      const uint64_t start_time = GetTickCountMS();
    )
    const bool rc = PrefetcherIter::Next();
    IF_CHECK_TIMING(
      const uint64_t diff_time  = GetTickCountMS() - start_time;
      next_time_.fetch_add(diff_time);
    )
    return rc;
  }
    }
    
    
    {    // one-liner channel-wise normalization
    switch (data.shape_[0]) {
      case 4:
        if (meanfile_ready_ && flip) {
          outimg_[3] = mirror((data[3] - meanimg_[3]) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[3] = ((data[3] - meanimg_[3]) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else if (!meanfile_ready_ && flip) {
          outimg_[3] = mirror((data[3] - param_.mean_a) * contrast + illumination)
            * param_.scale / param_.std_a;
        } else {
          outimg_[3] = ((data[3] - param_.mean_a) * contrast + illumination)
            * param_.scale / param_.std_a;
        }
      case 3:
        if (meanfile_ready_ && flip) {
          outimg_[2] = mirror((data[2] - meanimg_[2]) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[2] = ((data[2] - meanimg_[2]) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else if (!meanfile_ready_ && flip) {
          outimg_[2] = mirror((data[2] - param_.mean_b) * contrast + illumination)
            * param_.scale / param_.std_b;
        } else {
          outimg_[2] = ((data[2] - param_.mean_b) * contrast + illumination)
            * param_.scale / param_.std_b;
        }
      case 2:
        if (meanfile_ready_ && flip) {
          outimg_[1] = mirror((data[1] - meanimg_[1]) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[1] = ((data[1] - meanimg_[1]) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else if (!meanfile_ready_ && flip) {
          outimg_[1] = mirror((data[1] - param_.mean_g) * contrast + illumination)
            * param_.scale / param_.std_g;
        } else {
          outimg_[1] = ((data[1] - param_.mean_g) * contrast + illumination)
            * param_.scale / param_.std_g;
        }
      case 1:
        if (meanfile_ready_ && flip) {
          outimg_[0] = mirror((data[0] - meanimg_[0]) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else if (meanfile_ready_ && (!flip)) {
          outimg_[0] = ((data[0] - meanimg_[0]) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else if (!meanfile_ready_ && flip) {
          outimg_[0] = mirror((data[0] - param_.mean_r) * contrast + illumination)
            * param_.scale / param_.std_r;
        } else {
          outimg_[0] = ((data[0] - param_.mean_r) * contrast + illumination)
            * param_.scale / param_.std_r;
        }
        break;
      default:
        LOG(FATAL) << 'Expected image channels range 1-4, got ' << data.shape_[0];
    }
  }
    
      std::vector<Tensor<cpu, 2, DType> > ts_t_arr;
  for (int i = 0; i < static_cast<int>(ts_arr.size()); ++i) {
    ts_t_arr.emplace_back(Shape2(ts_arr[i].size(1), ts_arr[i].size(0)));
    AllocSpace(&ts_t_arr[i]);
    flip<cpu, DType>(ts_arr[i].size(0), ts_arr[i].size(1), ts_t_arr[i].dptr_,
      ts_t_arr[i].stride_, ts_arr[i].dptr_, ts_arr[i].stride_);
  }
    
    // relu
MXNET_OPERATOR_REGISTER_UNARY(_contrib_div_sqrt_dim)
.describe(R'code(Rescale the input by the square root of the channel dimension.