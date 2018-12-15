
        
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
    
    /**
 * Returns the baseline of the current object at the given level.
 * The baseline is the line that passes through (x1, y1) and (x2, y2).
 * WARNING: with vertical text, baselines may be vertical!
 */
bool PageIterator::Baseline(PageIteratorLevel level,
                            int* x1, int* y1, int* x2, int* y2) const {
  if (it_->word() == nullptr) return false;  // Already at the end!
  ROW* row = it_->row()->row;
  WERD* word = it_->word()->word;
  TBOX box = (level == RIL_WORD || level == RIL_SYMBOL)
           ? word->bounding_box()
           : row->bounding_box();
  int left = box.left();
  ICOORD startpt(left, static_cast<int16_t>(row->base_line(left) + 0.5));
  int right = box.right();
  ICOORD endpt(right, static_cast<int16_t>(row->base_line(right) + 0.5));
  // Rotate to image coordinates and convert to global image coords.
  startpt.rotate(it_->block()->block->re_rotation());
  endpt.rotate(it_->block()->block->re_rotation());
  *x1 = startpt.x() / scale_ + rect_left_;
  *y1 = (rect_height_ - startpt.y()) / scale_ + rect_top_;
  *x2 = endpt.x() / scale_ + rect_left_;
  *y2 = (rect_height_ - endpt.y()) / scale_ + rect_top_;
  return true;
}
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    // Open the boxfile based on the given image filename.
// Returns nullptr if the box file cannot be opened.
FILE* OpenBoxFile(const STRING& fname);
    
    // Clip output boxes to input blob boxes for bounds that are within this
// tolerance. Otherwise, the blob may be chopped and we have to just use
// the word bounding box.
const int kBoxClipTolerance = 2;
    
    REGISTER_CPU_OPERATOR(EnforceFinite, EnforceFiniteOp<CPUContext>);
    
        for (int inputIdx = 0; inputIdx < def_.input_size() / kNumTensorsPerInput;
         ++inputIdx) {
      input_blob_names.push_back(I(inputIdx * kNumTensorsPerInput));
      output_blob_names.push_back(GI(inputIdx * kNumTensorsPerInput + 2));
    }
    input_blob_names.push_back(GO(2));
    
    #ifndef CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_
#define CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_
    
    **Code**
    
    **Code**
    
    namespace {
float sigmoid(const float x) {
  if (x >= 0) {
    return 1. / (1. + exp(-x));
  } else {
    const float exp_x = exp(x);
    return exp_x / (1 + exp_x);
  }
}
} // namespace
    
    namespace caffe2 {
OPERATOR_SCHEMA(FloatToHalf)
    .NumInputs(1)
    .NumOutputs(1)
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          vector<TensorShape> out;
          const TensorShape& X = in[0];
          out.push_back(X);
          out[0].set_data_type(TensorProto_DataType_FLOAT16);
    }
    }
    
    void ChannelArguments::SetString(const grpc::string& key,
                                 const grpc::string& value) {
  grpc_arg arg;
  arg.type = GRPC_ARG_STRING;
  strings_.push_back(key);
  arg.key = const_cast<char*>(strings_.back().c_str());
  strings_.push_back(value);
  arg.value.string = const_cast<char*>(strings_.back().c_str());
    }
    
    #include 'src/cpp/ext/filters/census/context.h'
    
    #include <grpc/support/port_platform.h>
    
      // Field data sizes in bytes
  enum FieldSize {
    kTraceIdSize = 16,
    kSpanIdSize = 8,
    kTraceOptionsSize = 1,
  };
    
    
    {  const protobuf::FileDescriptor* file_desc =
      descriptor_pool_->FindFileByName(filename);
  if (file_desc == nullptr) {
    return Status(StatusCode::NOT_FOUND, 'File not found.');
  }
  std::unordered_set<grpc::string> seen_files;
  FillFileDescriptorResponse(file_desc, response, &seen_files);
  return Status::OK;
}
    
      Status GetFileContainingSymbol(
      ServerContext* context, const grpc::string& symbol,
      reflection::v1alpha::ServerReflectionResponse* response);
    
    // Force InitProtoReflectionServerBuilderPlugin() to be called at static
// initialization time.
struct StaticProtoReflectionPluginInitializer {
  StaticProtoReflectionPluginInitializer() {
    InitProtoReflectionServerBuilderPlugin();
  }
} static_proto_reflection_plugin_initializer;
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
        AGInfo() :
      grad_req(kNullOp), fresh_out_grad(false) {}
    
    /*! \brief a single data instance */
struct DataInst {
  /*! \brief unique id for instance */
  unsigned index;
  /*! \brief content of data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
};  // struct DataInst
    
    /*!
 * \brief Environment arguments that is used by the function.
 * These can be things like scalar arguments when add a value with scalar.
 */
struct EnvArguments {
  /*! \brief scalar argument, if enabled */
  real_t scalar;
  /*! \brief keyword arguments */
  std::vector<std::pair<std::string, std::string> > kwargs;
  /*! \brief pointer to the resources requested */
  std::vector<Resource> resource;
};
    
    DMLC_REGISTER_PARAMETER(CaffeOpParam);
    
    namespace mxnet {
namespace io {
/*!
 * \brief OpenCV based Image augmenter,
 *  The augmenter can contain internal temp state.
 */
class ImageAugmenter {
 public:
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief augment src image.
   *   this function is not thread safe, and will only be called by one thread
   *   however, it will tries to re-use memory space as much as possible
   * \param src the source image
   * \param prnd pointer to random number generator.
   * \return The processed image.
   */
  virtual cv::Mat Process(const cv::Mat &src, std::vector<float> *label,
                          common::RANDOM_ENGINE *prnd) = 0;
  // virtual destructor
  virtual ~ImageAugmenter() {}
  /*!
   * \brief factory function
   * \param name Name of the augmenter
   * \return The created augmenter.
   */
  static ImageAugmenter* Create(const std::string& name);
};
    }
    }
    
      # Creates a `LibSVMIter` with specified label file
  >>> data_iter = mx.io.LibSVMIter(data_libsvm = 'data.t', data_shape = (3,),
                   label_libsvm = 'label.t', label_shape = (3,), batch_size = 3)
    
    static void Dump(benchmark::State& state, const char* filename, int indent)
{
    std::ifstream f(filename);
    std::string str((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    json j = json::parse(str);
    }
    
    
    {// Returns true unless value starts with one of: '0', 'f', 'F', 'n' or 'N', or
// some non-alphanumeric character. As a special case, also returns true if
// value is the empty string.
bool IsTruthyFlagValue(const std::string& value);
}  // end namespace benchmark
    
    
    {}  // end namespace benchmark
    
    
    {
    {#if defined(NDEBUG)
  const char build_type[] = 'release';
#else
  const char build_type[] = 'debug';
#endif
  out << indent << FormatKV('library_build_type', build_type) << '\n';
  // Close context block and open the list of benchmarks.
  out << inner_indent << '},\n';
  out << inner_indent << '\'benchmarks\': [\n';
  return true;
}
    
    #if defined(HAVE_STD_REGEX)
#include <regex>
#elif defined(HAVE_GNU_POSIX_REGEX)
#include <gnuregex.h>
#elif defined(HAVE_POSIX_REGEX)
#include <regex.h>
#else
#error No regular expression backend was found!
#endif
#include <string>
    
    
    {void SleepForSeconds(double seconds) {
  SleepForMicroseconds(static_cast<int>(seconds * kNumMicrosPerSecond));
}
#endif  // BENCHMARK_OS_WINDOWS
}  // end namespace benchmark

    
    
    {  std::string arguments;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_many_arg_types', 0, arguments));
  std::array<int, 8> expected{{
      sizeof(uint32_t),
      sizeof(uint32_t),
      sizeof(bool),
      sizeof(char),
      sizeof(short),
      sizeof(long),
      sizeof(float),
      sizeof(double),
  }};
  checkTracepointArguments(arguments, expected);
}
    
    enum class CompressionCounterKey {
  BYTES_BEFORE_COMPRESSION = 0,
  BYTES_AFTER_COMPRESSION = 1,
  BYTES_BEFORE_DECOMPRESSION = 2,
  BYTES_AFTER_DECOMPRESSION = 3,
  COMPRESSIONS = 4,
  DECOMPRESSIONS = 5,
  COMPRESSION_MILLISECONDS = 6,
  DECOMPRESSION_MILLISECONDS = 7,
};
    
      bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto newptr = get_newptr(n);
    PackedPtr oldptr, expectedptr;
    }