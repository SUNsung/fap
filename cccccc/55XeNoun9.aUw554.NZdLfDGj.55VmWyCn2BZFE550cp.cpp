
        
        
    {  if (argc != 4) {
    printf('This script converts the CIFAR dataset to the leveldb format used\n'
           'by caffe to perform classification.\n'
           'Usage:\n'
           '    convert_cifar_data input_folder output_folder db_type\n'
           'Where the input folder should contain the binary batch files.\n'
           'The CIFAR dataset could be downloaded at\n'
           '    http://www.cs.toronto.edu/~kriz/cifar.html\n'
           'You should gunzip them after downloading.\n');
  } else {
    google::InitGoogleLogging(argv[0]);
    convert_dataset(string(argv[1]), string(argv[2]), string(argv[3]));
  }
  return 0;
}

    
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
    
    /**
 * @brief Convolves the input image with a bank of learned filters,
 *        and (optionally) adds biases.
 *
 *   Caffe convolves by reduction to matrix multiplication. This achieves
 *   high-throughput and generality of input and filter dimensions but comes at
 *   the cost of memory for matrices. This makes use of efficiency in BLAS.
 *
 *   The input is 'im2col' transformed to a channel K' x H x W data matrix
 *   for multiplication with the N x K' x H x W filter matrix to yield a
 *   N' x H x W output matrix that is then 'col2im' restored. K' is the
 *   input channel * kernel height * kernel width dimension of the unrolled
 *   inputs so that the im2col matrix has a column for each input region to
 *   be filtered. col2im restores the output spatial structure by rolling up
 *   the output channel N' columns of the output matrix.
 */
template <typename Dtype>
class ConvolutionLayer : public BaseConvolutionLayer<Dtype> {
 public:
  /**
   * @param param provides ConvolutionParameter convolution_param,
   *    with ConvolutionLayer options:
   *  - num_output. The number of filters.
   *  - kernel_size / kernel_h / kernel_w. The filter dimensions, given by
   *  kernel_size for square filters or kernel_h and kernel_w for rectangular
   *  filters.
   *  - stride / stride_h / stride_w (\b optional, default 1). The filter
   *  stride, given by stride_size for equal dimensions or stride_h and stride_w
   *  for different strides. By default the convolution is dense with stride 1.
   *  - pad / pad_h / pad_w (\b optional, default 0). The zero-padding for
   *  convolution, given by pad for equal dimensions or pad_h and pad_w for
   *  different padding. Input padding is computed implicitly instead of
   *  actually padding.
   *  - dilation (\b optional, default 1). The filter
   *  dilation, given by dilation_size for equal dimensions for different
   *  dilation. By default the convolution has dilation 1.
   *  - group (\b optional, default 1). The number of filter groups. Group
   *  convolution is a method for reducing parameterization by selectively
   *  connecting input and output channels. The input and output channel dimensions must be divisible
   *  by the number of groups. For group @f$ \geq 1 @f$, the
   *  convolutional filters' input and output channels are separated s.t. each
   *  group takes 1 / group of the input channels and makes 1 / group of the
   *  output channels. Concretely 4 input channels, 8 output channels, and
   *  2 groups separate input channels 1-2 and output channels 1-4 into the
   *  first group and input channels 3-4 and output channels 5-8 into the second
   *  group.
   *  - bias_term (\b optional, default true). Whether to have a bias.
   *  - engine: convolution has CAFFE (matrix multiplication) and CUDNN (library
   *    kernels + stream parallelism) engines.
   */
  explicit ConvolutionLayer(const LayerParameter& param)
      : BaseConvolutionLayer<Dtype>(param) {}
    }
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    namespace caffe {
    }
    
      virtual inline const char* type() const { return 'Eltwise'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    #include <vector>
    
    static const int kBlockSize = 32768;
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
    
    {}  // namespace leveldb
    
    size_t BlockBuilder::CurrentSizeEstimate() const {
  return (buffer_.size() +                        // Raw data buffer
          restarts_.size() * sizeof(uint32_t) +   // Restart array
          sizeof(uint32_t));                      // Restart array length
}
    
    TEST(BloomTest, EmptyFilter) {
  ASSERT_TRUE(! Matches('hello'));
  ASSERT_TRUE(! Matches('world'));
}
    
    #include <string.h>
#include 'util/coding.h'
#include 'util/hash.h'
    
    
    {  // Verify that the size of the key space not touched by the reads
  // is pretty much unchanged.
  const int64_t final_other_size = Size(Key(n), Key(kCount));
  ASSERT_LE(final_other_size, initial_other_size + 1048576);
  ASSERT_GE(final_other_size, initial_other_size/5 - 1048576);
}
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    
    {}  // namespace guetzli

    
    void BuildDCHistograms(const JPEGData& jpg, JpegHistogram* histo);
void BuildACHistograms(const JPEGData& jpg, JpegHistogram* histo);
size_t JpegHeaderSize(const JPEGData& jpg, bool strip_metadata);
size_t EstimateJpegDataSize(const int num_components,
                            const std::vector<JpegHistogram>& histograms);
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
    #include 'guetzli/jpeg_huffman_decode.h'
    
      int width() const { return width_; }
  int height() const { return height_; }
  int factor_x() const { return factor_x_; }
  int factor_y() const { return factor_y_; }
  int width_in_blocks() const { return width_in_blocks_; }
  int height_in_blocks() const { return height_in_blocks_; }
  const coeff_t* coeffs() const { return &coeffs_[0]; }
  const int* quant() const { return &quant_[0]; }
  bool IsAllZero() const;
    
    namespace guetzli {
    }
    
        int argn = 1;
    bool use_base85_encoding = false;
    bool use_compression = true;
    if (argv[argn][0] == '-')
    {
        if (strcmp(argv[argn], '-base85') == 0) { use_base85_encoding = true; argn++; }
        else if (strcmp(argv[argn], '-nocompress') == 0) { use_compression = false; argn++; }
        else
        {
            printf('Unknown argument: '%s'\n', argv[argn]);
            return 1;
        }
    }
    
    IMGUI_API bool        ImGui_ImplSdlGL2_Init(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL2_NewFrame(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_RenderDrawData(ImDrawData* draw_data);
IMGUI_API bool        ImGui_ImplSdlGL2_ProcessEvent(SDL_Event* event);
    
    void WaitForLastSubmittedFrame()
{
    FrameContext* frameCtxt = &g_frameContext[g_frameIndex % NUM_FRAMES_IN_FLIGHT];
    }
    
    
    {    return 0;
}

    
            fence->SetEventOnCompletion(1, event);
        WaitForSingleObject(event, INFINITE);
    
    template <typename T>
constexpr T constexpr_sub_overflow_clamped(T a, T b) {
  using L = std::numeric_limits<T>;
  using M = std::intmax_t;
  static_assert(
      !std::is_integral<T>::value || sizeof(T) <= sizeof(M),
      'Integral type too large!');
  // clang-format off
  return
    // don't do anything special for non-integral types.
    !std::is_integral<T>::value ? a - b :
    // for unsigned type, keep result >= 0.
    std::is_unsigned<T>::value ? (a < b ? 0 : a - b) :
    // for narrow signed integral types, just convert to intmax_t.
    sizeof(T) < sizeof(M)
      ? T(constexpr_clamp(M(a) - M(b), M(L::min()), M(L::max()))) :
    // (a >= 0 && b >= 0) || (a < 0 && b < 0), `a - b` will always be valid.
    (a < 0) == (b < 0) ? a - b :
    // MIN < b, so `-b` should be in valid range (-MAX <= -b <= MAX),
    // convert subtraction to addition.
    L::min() < b ? constexpr_add_overflow_clamped(a, T(-b)) :
    // -b = -MIN = (MAX + 1) and a <= -1, result is in valid range.
    a < 0 ? a - b :
    // -b = -MIN = (MAX + 1) and a >= 0, result > MAX.
            L::max();
  // clang-format on
}
    
      // buf1 and buf3 share the same memory (but are unmanaged)
  EXPECT_FALSE(buf1->isManagedOne());
  EXPECT_FALSE(buf3->isManagedOne());
  EXPECT_TRUE(buf1->isSharedOne());
  EXPECT_TRUE(buf3->isSharedOne());
  EXPECT_EQ(buf1->data(), buf3->data());
    
    AsyncIO::~AsyncIO() {
  CHECK_EQ(pending_, 0);
  if (ctx_) {
    int rc = io_queue_release(ctx_);
    CHECK_EQ(rc, 0) << 'io_queue_release: ' << errnoStr(-rc);
  }
  if (pollFd_ != -1) {
    CHECK_ERR(close(pollFd_));
  }
}
    
    bool starts_with(const path& pth, const path& prefix) {
  path::const_iterator it;
  return skipPrefix(pth, prefix, it);
}
    
    
    {  mmapFileCopy(srcFile, destPath.c_str());
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
    
    /**
 * A helper class for creating an AsyncFileWriter or ImmediateFileWriter based
 * on log handler options settings.
 *
 * This is used by StreamHandlerFactory and FileHandlerFactory.
 */
class FileWriterFactory {
 public:
  bool processOption(StringPiece name, StringPiece value);
  std::shared_ptr<LogWriter> createWriter(File file);
    }
    
    ImmediateFileWriter::ImmediateFileWriter(folly::File&& file)
    : file_{std::move(file)} {}
    
      std::string scratch;
  scratch.resize(kGood.size() + kCorrupted.size() + 16);
  Slice result;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_OK(env_->NewRandomAccessFile(kFileName, &rand_file, soptions_));
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    This pointer must be provided as 'void* state' parameter for XXH32_update().
XXH32_update() can be called as many times as necessary.
The user must provide a valid (allocated) input.
The function returns an error code, with 0 meaning OK, and any other value meaning there is an error.
Note that 'len' is type 'int', which means it is limited to 2^31-1.
If your data is larger, it is recommended to chunk your data into blocks
of size for example 2^30 (1GB) to avoid any 'int' overflow issue.
    
    class StringAppendOperator : public AssociativeMergeOperator {
 public:
  // Constructor: specify delimiter
  explicit StringAppendOperator(char delim_char);
    }
    
      // disable sync point processing
  void DisableProcessing();
    
    #include <string>
#include <inttypes.h>
    
        Status file_delete;
    std::string trash_file = path + '/' + current_file;
    if (sfm) {
      // We have an SstFileManager that will schedule the file delete
      sfm->OnAddFile(trash_file);
      file_delete = sfm->ScheduleFileDeletion(trash_file);
    } else {
      // Delete the file immediately
      file_delete = env->DeleteFile(trash_file);
    }
    
    typedef union jvalue {
    jboolean    z;
    jbyte       b;
    jchar       c;
    jshort      s;
    jint        i;
    jlong       j;
    jfloat      f;
    jdouble     d;
    jobject     l;
} jvalue;
    
    /* static */ Config * Config::create(void)
{
    return new Config();
}
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    template<typename... ARGS>
inline void loge(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_ERROR, tag, msg, args...);
}
    
      // Allow implicit construction from a pointer only from nullptr
  constexpr RefPtr(std::nullptr_t ptr) :
    m_ptr(nullptr)
  {}
    
    namespace facebook {
    }
    
    namespace detail {
template <typename T, typename jprim>
struct JPrimitive : JavaClass<T> {
  using typename JavaClass<T>::javaobject;
  using JavaClass<T>::javaClassStatic;
  static local_ref<javaobject> valueOf(jprim val) {
    static auto cls = javaClassStatic();
    static auto method =
      cls->template getStaticMethod<javaobject(jprim)>('valueOf');
    return method(cls, val);
  }
  jprim value() const {
    static auto method =
      javaClassStatic()->template getMethod<jprim()>(T::kValueMethod);
    return method(this->self());
  }
};
    }