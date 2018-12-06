
        
            void add(const Size2D &size,
             const u8 *src0Base, ptrdiff_t src0Stride,
             const s16 *src1Base, ptrdiff_t src1Stride,
             s16 *dstBase, ptrdiff_t dstStride,
             CONVERT_POLICY policy);
    
        struct Size2D {
        Size2D() : width(0), height(0) {}
        Size2D(size_t width_, size_t height_) : width(width_), height(height_) {}
    }
    
    void accumulateWeighted(const Size2D &size,
                        const u8 *srcBase, ptrdiff_t srcStride,
                        u8 *dstBase, ptrdiff_t dstStride,
                        f32 alpha)
{
    if (alpha == 0.0f)
        return;
    if (alpha == 1.0f)
    {
        for (size_t i = 0; i < size.height; ++i)
        {
            const u8 * src = internal::getRowPtr(srcBase, srcStride, i);
            u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
            std::memcpy(dst, src, sizeof(u8) * size.width);
        }
        return;
    }
    }
    
            for (; i < roiw4; i += 4 )
        {
            internal::prefetch(src + i);
            float32x4_t vln = vld1q_f32(src + i);
            int32x4_t vnz = vreinterpretq_s32_u32(vmvnq_u32(vceqq_f32(vln, vc0)));
            vs = vqaddq_s32(vs, vnz);
        }
    
    
    {
    {        for (--jd; js < size.width; ++js, --jd)
            dst[jd] = src[js];
    }
}
    
            uint32x2_t el2l = vadd_u32(vget_low_u32(el8shr01l), vget_high_u32(el8shr01l));
        uint32x2_t el2hl = vadd_u32(vget_low_u32(el4h), vget_high_u32(el8shr01l));
        uint32x2_t el2hh = vadd_u32(vget_low_u32(el4h), vget_high_u32(el4h));
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_filename) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
      virtual inline const char* type() const { return 'ArgMax'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // CAFFE_CONV_LAYER_HPP_

    
    namespace caffe {
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
    // Overloads for ::wstring and ::std::wstring.
#if GTEST_HAS_GLOBAL_WSTRING
GTEST_API_ void PrintWideStringTo(const ::wstring&s, ::std::ostream* os);
inline void PrintTo(const ::wstring& s, ::std::ostream* os) {
  PrintWideStringTo(s, os);
}
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
    
    {  // The name of the source file where the test part took place, or
  // '' if the source file is unknown.
  std::string file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  int line_number_;
  std::string summary_;  // The test failure summary.
  std::string message_;  // The test failure message.
};
    
    // Next, associate a list of types with the test case, which will be
// repeated for each type in the list.  The typedef is necessary for
// the macro to parse correctly.
typedef testing::Types<char, int, unsigned int> MyTypes;
TYPED_TEST_CASE(FooTest, MyTypes);
    
      // Compares two C strings.  Returns true iff they have the same content.
  //
  // Unlike strcmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CStringEquals(const char* lhs, const char* rhs);
    
    #endif  // GTEST_HAS_TYPED_TEST || GTEST_HAS_TYPED_TEST_P
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
      if (UNLIKELY(m_arrayHandle->kind() == APCKind::SerializedVec ||
               m_arrayHandle->kind() == APCKind::SerializedDict)) {
    return createFromSerialized(m_colType, m_arrayHandle);
  }
    
      /**
   * Master Get Methods to get values associated with an ini or hdf setting.
   * These methods just get the value. They do not bind to a variable for
   * enabling ini_get()
   */
  static bool GetBool(const IniSettingMap &ini, const Hdf& config,
                      const std::string& name = '',
                      const bool defValue = false,
                      const bool prepend_hhvm = true);
  static const char *Get(const IniSettingMap &ini, const Hdf& config,
                         const std::string& name = '',
                         const char *defValue = nullptr,
                         const bool prepend_hhvm = true);
  static std::string GetString(const IniSettingMap &ini, const Hdf& config,
                               const std::string& name = '',
                               const std::string defValue = '',
                               const bool prepend_hhvm = true);
  static char GetByte(const IniSettingMap &ini, const Hdf& config,
                      const std::string& name = '', const char defValue = 0,
                      const bool prepend_hhvm = true);
  static unsigned char GetUByte(const IniSettingMap &ini, const Hdf& config,
                                const std::string& name = '',
                                const unsigned char defValue = 0,
                                const bool prepend_hhvm = true);
  static int16_t GetInt16(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const int16_t defValue = 0,
                          const bool prepend_hhvm = true);
  static uint16_t GetUInt16(const IniSettingMap &ini, const Hdf& config,
                            const std::string& name = '',
                            const uint16_t defValue = 0,
                            const bool prepend_hhvm = true);
  static int32_t GetInt32(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const int32_t defValue = 0,
                          const bool prepend_hhvm = true);
  static uint32_t GetUInt32(const IniSettingMap &ini, const Hdf& config,
                            const std::string& name = '',
                            const uint32_t defValue = 0,
                            const bool prepend_hhvm = true);
  static int64_t GetInt64(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const int64_t defValue = 0,
                          const bool prepend_hhvm = true);
  static uint64_t GetUInt64(const IniSettingMap &ini, const Hdf& config,
                            const std::string& name = '',
                            const uint64_t defValue = 0,
                            const bool prepend_hhvm = true);
  static double GetDouble(const IniSettingMap &ini, const Hdf& config,
                          const std::string& name = '',
                          const double defValue = 0,
                          const bool prepend_hhvm = true);
  static std::vector<uint32_t>
  GetUInt32Vector(const IniSettingMap& ini, const Hdf& config,
                  const std::string& name = '',
                  const std::vector<uint32_t>& def = std::vector<uint32_t>{},
                  const bool prepend_hhvm = true);
  static std::vector<std::string>
  GetStrVector(const IniSettingMap& ini, const Hdf& config,
               const std::string& name = '',
               const std::vector<std::string>& def = std::vector<std::string>{},
               const bool prepend_hhvm = true);
  static std::unordered_map<std::string, int>
  GetIntMap(const IniSettingMap& ini, const Hdf& config,
            const std::string& name = '',
            const std::unordered_map<std::string, int>& defValue =
              std::unordered_map<std::string, int>{},
            const bool prepend_hhvm = true);
  static ConfigMap GetMap(const IniSettingMap& ini, const Hdf& config,
                          const std::string& name = '',
                          const ConfigMap& defValue = ConfigMap(),
                          const bool prepend_hhvm = true);
  static ConfigMapC GetMapC(const IniSettingMap& ini, const Hdf& config,
                          const std::string& name = '',
                          const ConfigMapC& defValue = ConfigMapC(),
                          const bool prepend_hhvm = true);
  static ConfigSet GetSet(const IniSettingMap& ini, const Hdf& config,
                          const std::string& name = '',
                          const ConfigSet& defValue = ConfigSet(),
                          const bool prepend_hhvm = true);
  static ConfigSetC GetSetC(const IniSettingMap& ini, const Hdf& config,
                            const std::string& name = '',
                            const ConfigSetC& defValue = ConfigSetC(),
                            const bool prepend_hhvm = true);
  static ConfigIMap GetIMap(const IniSettingMap& ini, const Hdf& config,
                            const std::string& name = '',
                            const ConfigIMap& defValue = ConfigIMap(),
                            const bool prepend_hhvm = true);
  static ConfigFlatSet GetFlatSet(const IniSettingMap& ini, const Hdf& config,
                                  const std::string& name = '',
                                  const ConfigFlatSet& defValue
                                    = ConfigFlatSet(),
                                  const bool prepend_hhvm = true);
    
      if (need_file) {
    char tmp[] = '/tmp/php-wrap-XXXXXX';
    int tmp_fd = mkstemp(tmp);
    if (tmp_fd == -1) {
      fprintf(stderr, 'Error: unable to open temporary file');
      exit(EXIT_FAILURE);
    }
    if (program == nullptr) {
      // If the program wasn't specified on the command-line, ala' -r,
      // is no command-line parameter, read the PHP file from stdin.
      std::string line;
      while (std::getline(std::cin, line)) {
        write(tmp_fd, line.c_str(), line.length());
        write(tmp_fd, '\n', 1);
      }
    } else {
      // -r omits the braces
      write(tmp_fd, '<?\n', 3);
      write(tmp_fd, program, strlen(program));
    }
    close(tmp_fd);
    }
    
    struct FileStreamWrapper final : Stream::Wrapper {
  static req::ptr<MemFile> openFromCache(const String& filename,
                                         const String& mode);
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  int access(const String& path, int mode) override {
    return ::access(File::TranslatePath(path).data(), mode);
  }
  int stat(const String& path, struct stat* buf) override {
    return ::stat(File::TranslatePath(path).data(), buf);
  }
  int lstat(const String& path, struct stat* buf) override {
    return ::lstat(File::TranslatePath(path).data(), buf);
  }
  int unlink(const String& path) override;
  int rename(const String& oldname, const String& newname) override;
  int mkdir(const String& path, int mode, int options) override;
  int rmdir(const String& path, int /*options*/) override {
    ERROR_RAISE_WARNING(::rmdir(File::TranslatePath(path).data()));
    return ret;
  }
  bool isNormalFileStream() const override { return true; }
    }
    
    
    {protected:
  bool closeImpl();
};
    
    namespace HPHP {
    }
    
    
    {
    {        // For now reusing the shim to allow prefetch.
        // Please only use a subset of the shim interface that includes
        // Init()/StartEpoch()/GetMinibatch()/IsEndOfEpoch()
        // Shim will be deleted in the future versions.
        std::shared_ptr<ReaderShim<float>> m_shim;
        Microsoft::MSR::CNTK::StreamMinibatchInputs m_matrices;
    };
}

    
        template <>
    std::tuple<const void *, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers<float16>() const
    {
        return _SparseBlockColumnDataBuffers<float16, half>();
    }
    
        void ProgressWriter::UpdateTraining(size_t samples, const ValuePtr& accumulatedLoss,
                                        const ValuePtr& accumulatedMetric)
    {
        m_training->Update(samples, accumulatedLoss, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> aggregateLoss, std::pair<double, double> aggregateMetric)
            {
                OnWriteTrainingUpdate(samples, updates, aggregateLoss, aggregateMetric);
            });
        OnTrainingUpdateEnd();
    }
    
    // -----------------------------------------------------------------------
// (deprecated) PerDimMeanVarNormalizationNode (feature, mean, invStdDev)
// Computes
//   output = (feature - mean) .* invStdDev
// where mean and invStdDev are meant to be single elements while features
// is minibatch data.
// Deprecated since it can be trivially expressed in BrainScript.
// -----------------------------------------------------------------------
    
    void appendSubtag(CharString &s, char letter, const char *subtag, int32_t length,
                  UErrorCode &errorCode) {
    if(U_FAILURE(errorCode) || length == 0) { return; }
    if(!s.isEmpty()) {
        s.append('_', errorCode);
    }
    s.append(letter, errorCode);
    for(int32_t i = 0; i < length; ++i) {
        s.append(uprv_toupper(subtag[i]), errorCode);
    }
}
    
    ScientificNumberFormatter::ScientificNumberFormatter(
        const ScientificNumberFormatter &other)
        : UObject(other),
          fPreExponent(other.fPreExponent),
          fDecimalFormat(NULL),
          fStyle(NULL),
          fStaticSets(other.fStaticSets) {
    fDecimalFormat = static_cast<DecimalFormat *>(
            other.fDecimalFormat->clone());
    fStyle = other.fStyle->clone();
}
    
    U_NAMESPACE_END
    
    class U_I18N_API SharedCalendar : public SharedObject {
public:
    SharedCalendar(Calendar *calToAdopt) : ptr(calToAdopt) { }
    virtual ~SharedCalendar();
    const Calendar *get() const { return ptr; }
    const Calendar *operator->() const { return ptr; }
    const Calendar &operator*() const { return *ptr; }
private:
    Calendar *ptr;
    SharedCalendar(const SharedCalendar &);
    SharedCalendar &operator=(const SharedCalendar &);
};
    
    class  UnicodeSet;
    
    
    {    return outLen;
}
    
      /**
   * \brief Generate batch predictions for a given feature matrix. May use
   * cached predictions if available instead of calculating from scratch.
   *
   * \param [in,out]  dmat        Feature matrix.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       The model to predict from.
   * \param           tree_begin  The tree begin index.
   * \param           ntree_limit (Optional) The ntree limit. 0 means do not
   * limit trees.
   */
    
    #include <cstdio>
#include <cstring>
#include <string>
#include <istream>
#include <fstream>
    
    SEXP XGBoosterBoostOneIter_R(SEXP handle, SEXP dtrain, SEXP grad, SEXP hess) {
  R_API_BEGIN();
  CHECK_EQ(length(grad), length(hess))
      << 'gradient and hess must have same length';
  int len = length(grad);
  std::vector<float> tgrad(len), thess(len);
  #pragma omp parallel for schedule(static)
  for (int j = 0; j < len; ++j) {
    tgrad[j] = REAL(grad)[j];
    thess[j] = REAL(hess)[j];
  }
  CHECK_CALL(XGBoosterBoostOneIter(R_ExternalPtrAddr(handle),
                                 R_ExternalPtrAddr(dtrain),
                                 BeginPtr(tgrad), BeginPtr(thess),
                                 len));
  R_API_END();
  return R_NilValue;
}
    
    
    {// The number of bits required to represent a given unsigned range
static size_t SymbolBits(size_t num_symbols) {
  auto bits = std::ceil(std::log2(num_symbols));
  return std::max(static_cast<size_t>(bits), size_t(1));
}
}  // namespace detail
    
    
    {} // namespace osquery

    
    #include <gtest/gtest.h>
    
    class ProcessTests : public testing::Test {};
    
    TEST_F(QueryTests, test_query_name_not_found_in_db) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('not_a_real_query', query);
  auto status = cf.getPreviousQueryResults(previous_qd);
  EXPECT_FALSE(status.ok());
  EXPECT_TRUE(previous_qd.empty());
}