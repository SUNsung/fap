
        
        HINSTANCE g_hInst = NULL;
D3D_DRIVER_TYPE g_driverType = D3D_DRIVER_TYPE_NULL;
D3D_FEATURE_LEVEL g_featureLevel = D3D_FEATURE_LEVEL_11_0;
ID3D11Device* g_pd3dDevice = NULL;
ID3D11DeviceContext* g_pImmediateContext = NULL;
IDXGISwapChain* g_pSwapChain = NULL;
    
    cv::Mat dls::LeftMultVec(const cv::Mat& v)
{
    cv::Mat mat_ = cv::Mat::zeros(3, 9, CV_64F);
    }
    
    namespace cv {
    }
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
    #include 'opencv2/core/opencl/runtime/opencl_core.hpp'
#include 'opencv2/core/opencl/runtime/opencl_clamdblas.hpp'
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdFft.Runtime.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
    namespace testing {
    }
    
    // Bool() allows generating tests with parameters in a set of (false, true).
//
// Synopsis:
// Bool()
//   - returns a generator producing sequences with elements {false, true}.
//
// It is useful when testing code that depends on Boolean flags. Combinations
// of multiple flags can be tested when several Bool()'s are combined using
// Combine() function.
//
// In the following example all tests in the test case FlagDependentTest
// will be instantiated twice with parameters false and true.
//
// class FlagDependentTest : public testing::TestWithParam<bool> {
//   virtual void SetUp() {
//     external_flag = GetParam();
//   }
// }
// INSTANTIATE_TEST_CASE_P(BoolSequence, FlagDependentTest, Bool());
//
inline internal::ParamGenerator<bool> Bool() {
  return Values(false, true);
}
    
    // An array of TestPartResult objects.
//
// Don't inherit from TestPartResultArray as its destructor is not
// virtual.
class GTEST_API_ TestPartResultArray {
 public:
  TestPartResultArray() {}
    }
    
      // RemoveFileName returns the directory path with the filename removed.
  // Example: FilePath('path/to/file').RemoveFileName() returns 'path/to/'.
  // If the FilePath is 'a_file' or '/a_file', RemoveFileName returns
  // FilePath('./') or, on Windows, FilePath('.\\'). If the filepath does
  // not have a file, like 'just/a/dir/', it returns the FilePath unmodified.
  // On Windows platform, '\' is the path separator, otherwise it is '/'.
  FilePath RemoveFileName() const;
    
          const ParamGenerator<T$j>& g$j,
      const typename ParamGenerator<T$j>::iterator& current$(j)]])
        : base_(base),
$for j, [[
    
    // 6.1.3.5 Relational operators
    
    #include 'sample1.h'
    
    class MatrixTest : public ::testing::Test {
 protected:
  // Fills src_ with data so it can pretend to be a tensor thus:
  //  dims_=[5, 4, 3, 2]
  //  array_=[0, 1, 2, ....119]
  //  tensor=[[[[0, 1][2, 3][4, 5]]
  //           [[6, 7][8, 9][10, 11]]
  //           [[12, 13][14, 15][16, 17]]
  //           [[18, 19][20, 21][22, 23]]]
  //          [[[24, 25]...
  MatrixTest() {
    src_.Resize(1, kInputSize_, 0);
    for (int i = 0; i < kInputSize_; ++i) {
      src_.put(0, i, i);
    }
    for (int i = 0; i < kNumDims_; ++i) dims_[i] = 5 - i;
  }
  // Number of dimensions in src_.
  static const int kNumDims_ = 4;
  // Number of elements in src_.
  static const int kInputSize_ = 120;
  // Size of each dimension in src_;
  int dims_[kNumDims_];
  // Input array filled with [0,kInputSize).
  GENERIC_2D_ARRAY<int> src_;
};
    
    class MutableIterator : public ResultIterator {
 public:
  // See argument descriptions in ResultIterator()
  MutableIterator(PAGE_RES* page_res, Tesseract* tesseract,
                  int scale, int scaled_yres,
                  int rect_left, int rect_top,
                  int rect_width, int rect_height)
      : ResultIterator(
          LTRResultIterator(page_res, tesseract, scale, scaled_yres, rect_left,
                            rect_top, rect_width, rect_height)) {}
  virtual ~MutableIterator() {}
    }
    
    bool ParagraphModel::Comparable(const ParagraphModel &other) const {
  if (justification_ != other.justification_)
    return false;
  if (justification_ == JUSTIFICATION_CENTER ||
      justification_ == JUSTIFICATION_UNKNOWN)
    return true;
  int tolerance = (tolerance_ + other.tolerance_) / 4;
  return NearlyEqual(margin_ + first_indent_,
                     other.margin_ + other.first_indent_, tolerance) &&
         NearlyEqual(margin_ + body_indent_,
                     other.margin_ + other.body_indent_, tolerance);
}
    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
    const void* ${Storage}::data() const {
  return storage->data;
}
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
    #define THCPStorage TH_CONCAT_3(THCP,Real,Storage)
#define THCPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THCPStorageClass TH_CONCAT_3(THCP,Real,StorageClass)
#define THCPStorage_(NAME) TH_CONCAT_4(THCP,Real,Storage_,NAME)
    
      /// Pause until the requested millisecond delay has elapsed or a cancel.
  void pause(std::chrono::milliseconds milli);
    
    /// The main runloop entered by an Extension, start an ExtensionRunner thread.
Status startExtension(const std::string& name, const std::string& version);
    
    struct FlagDetail {
  std::string description;
  bool shell;
  bool external;
  bool cli;
  bool hidden;
};
    
      /**
   * @brief A feature method to decide if Glog should stop handling statuses.
   *
   * Return true if this logger plugin's #logStatus method should handle Glog
   * statuses exclusively. If true then Glog will stop writing status lines
   * to the configured log path.
   *
   * @return false if this logger plugin should NOT handle Glog statuses.
   */
  virtual bool usesLogStatus() {
    return false;
  }
    
    
    {// Remove registry-helper macros from the SDK.
#undef REGISTER
#define REGISTER 'Do not REGISTER in the osquery SDK'
#undef REGISTER_INTERNAL
#define REGISTER_INTERNAL 'Do not REGISTER_INTERNAL in the osquery SDK'
#undef CREATE_REGISTRY
#define CREATE_REGISTRY 'Do not CREATE_REGISTRY in the osquery SDK'
#undef CREATE_LAZY_REGISTRY
#define CREATE_LAZY_REGISTRY 'Do not CREATE_LAZY_REGISTRY in the osquery SDK'
}

    
      /**
   * @brief Sets up the process as an osquery daemon.
   *
   * A daemon has additional constraints, it can use a process mutex, check
   * for sane/non-default configurations, etc.
   */
  void initDaemon() const;
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    namespace osquery {
    }
    
        // We should have a property tree of pack content mimicking embedded
    // configuration packs, ready to parse as a string.
    std::ostringstream output;
    pt::write_json(output, multi_pack, false);
    pack = output.str();
    if (pack.empty()) {
      return Status(1, 'Multi-pack content empty');
    }
    
    namespace osquery {
    }
    
    Status platformStrncpy(char* dst, size_t nelms, const char* src, size_t count) {
  if (dst == nullptr || src == nullptr || nelms == 0) {
    return Status(1, 'Failed to strncpy: invalid arguments');
  }
    }
    
    class PermissionsRunnable : public InternalRunnable {
 public:
  PermissionsRunnable() : InternalRunnable('PermissionsRunnable') {}
  PermissionsRunnable(const std::string& name) : InternalRunnable(name) {}
    }
    
    extern JSClass  *jsb_cocosbuilder_CCBReader_class;
extern JSObject *jsb_cocosbuilder_CCBReader_prototype;
    
    extern JSClass  *jsb_cocos2d_PhysicsSprite3D_class;
extern JSObject *jsb_cocos2d_PhysicsSprite3D_prototype;
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    	static Test* Create()
	{
		return new Bridge;
	}
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
    SEXP XGCheckNullPtr_R(SEXP handle) {
  return ScalarLogical(R_ExternalPtrAddr(handle) == NULL);
}
    
          cbw.Write(buffer.data(), input.begin(), input.end());
    
    Unit FileToVector(const std::string &Path, size_t MaxSize, bool ExitOnError) {
  std::ifstream T(Path);
  if (ExitOnError && !T) {
    Printf('No such directory: %s; exiting\n', Path.c_str());
    exit(1);
  }
    }
    
    ATTRIBUTE_NO_SANITIZE_MEMORY
void MallocHook(const volatile void *ptr, size_t size) {
  size_t N = AllocTracer.Mallocs++;
  F->HandleMalloc(size);
  if (int TraceLevel = AllocTracer.TraceLevel) {
    Printf('MALLOC[%zd] %p %zd\n', N, ptr, size);
    if (TraceLevel >= 2 && EF)
      EF->__sanitizer_print_stack_trace();
  }
}
    
    
    {}  // namespace fuzzer
    
    
    {}  // namespace fuzzer