
        
        template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45>
internal::ValueArray45<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
    T44, T45> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8,
    T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16,
    T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24,
    T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32,
    T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40,
    T41 v41, T42 v42, T43 v43, T44 v44, T45 v45) {
  return internal::ValueArray45<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40, T41, T42, T43, T44, T45>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
      v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24,
      v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38,
      v39, v40, v41, v42, v43, v44, v45);
}
    
    # define TYPED_TEST_P(CaseName, TestName) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  template <typename gtest_TypeParam_> \
  class TestName : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  static bool gtest_##TestName##_defined_ GTEST_ATTRIBUTE_UNUSED_ = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).AddTestName(\
          __FILE__, __LINE__, #CaseName, #TestName); \
  } \
  template <typename gtest_TypeParam_> \
  void GTEST_CASE_NAMESPACE_(CaseName)::TestName<gtest_TypeParam_>::TestBody()
    
    // Typedefs the instances of the FloatingPoint template class that we
// care to use.
typedef FloatingPoint<float> Float;
typedef FloatingPoint<double> Double;
    
      // Returns true iff the given string ends with the given suffix, ignoring
  // case. Any string is considered to end with an empty suffix.
  static bool EndsWithCaseInsensitive(
      const std::string& str, const std::string& suffix);
    
    
    {  class EuroText : public QuickTest {
  };
  
  TEST_F(EuroText, FastOCR) {
    OCRTester(TESTING_DIR '/eurotext.tif',
              TESTING_DIR '/eurotext.txt',
              TESSDATA_DIR '_fast', 'script/Latin');
  }
  
}  // namespace

    
    
    {  class OSDTest : public TestClass ,
      public ::testing::WithParamInterface<std::tuple<int, const char*, const char*>> {};
  
  TEST_P(OSDTest, MatchOrientationDegrees) {
  OSDTester(std::get<0>(GetParam()), std::get<1>(GetParam()), std::get<2>(GetParam()));
  }
  
  INSTANTIATE_TEST_CASE_P( TessdataEngEuroHebrew, OSDTest, 
                        ::testing::Combine(
                        ::testing::Values(0),
                        ::testing::Values(TESTING_DIR '/phototest.tif',
                                          TESTING_DIR '/eurotext.tif',
                                          TESTING_DIR '/hebrew.png'),
                        ::testing::Values(TESSDATA_DIR)));
                        
  INSTANTIATE_TEST_CASE_P( TessdataBestEngEuroHebrew, OSDTest, 
                        ::testing::Combine(
                        ::testing::Values(0),
                        ::testing::Values(TESTING_DIR '/phototest.tif',
                                          TESTING_DIR '/eurotext.tif',
                                          TESTING_DIR '/hebrew.png'),
                        ::testing::Values(TESSDATA_DIR '_best')));
                        
  INSTANTIATE_TEST_CASE_P( TessdataFastEngEuroHebrew, OSDTest, 
                        ::testing::Combine(
                        ::testing::Values(0),
                        ::testing::Values(TESTING_DIR '/phototest.tif',
                                          TESTING_DIR '/eurotext.tif',
                                          TESTING_DIR '/hebrew.png'),
                        ::testing::Values(TESSDATA_DIR '_fast')));
                        
  INSTANTIATE_TEST_CASE_P( TessdataFastRotated90, OSDTest, 
                        ::testing::Combine(
                        ::testing::Values(90),
                        ::testing::Values(TESTING_DIR '/phototest-rotated-R.png'),
                        ::testing::Values(TESSDATA_DIR '_fast')));
                        
  INSTANTIATE_TEST_CASE_P( TessdataFastRotated180, OSDTest, 
                        ::testing::Combine(
                        ::testing::Values(180),
                        ::testing::Values(TESTING_DIR '/phototest-rotated-180.png'),
                        ::testing::Values(TESSDATA_DIR '_fast')));
                        
  INSTANTIATE_TEST_CASE_P( TessdataFastRotated270, OSDTest, 
                        ::testing::Combine(
                        ::testing::Values(270),
                        ::testing::Values(TESTING_DIR '/phototest-rotated-L.png'),
                        ::testing::Values(TESSDATA_DIR '_fast')));
                        
  INSTANTIATE_TEST_CASE_P( TessdataFastDevaRotated270, OSDTest, 
                        ::testing::Combine(
                        ::testing::Values(270),
                        ::testing::Values(TESTING_DIR '/devatest-rotated-270.png'),
                        ::testing::Values(TESSDATA_DIR '_fast')));
                        
  INSTANTIATE_TEST_CASE_P( TessdataFastDeva, OSDTest, 
                        ::testing::Combine(
                        ::testing::Values(0),
                        ::testing::Values(TESTING_DIR '/devatest.png'),
                        ::testing::Values(TESSDATA_DIR '_fast')));
                        
}  // namespace

    
    #if defined(X86_BUILD)
#if defined(__GNUC__)
#include <cpuid.h>
#elif defined(_WIN32)
#include <intrin.h>
#endif
#endif
    
    // Main entry point for Paragraph Detection Algorithm.
//
// Given a set of equally spaced textlines (described by row_infos),
// Split them into paragraphs.  See http://goto/paragraphstalk
//
// Output:
//   row_owners - one pointer for each row, to the paragraph it belongs to.
//   paragraphs - this is the actual list of PARA objects.
//   models - the list of paragraph models referenced by the PARA objects.
//            caller is responsible for deleting the models.
void DetectParagraphs(int debug_level,
                      GenericVector<RowInfo> *row_infos,
                      GenericVector<PARA *> *row_owners,
                      PARA_LIST *paragraphs,
                      GenericVector<ParagraphModel *> *models);
    
    
    {class Tesseract;
}  // namespace tesseract
    
      // Note: for computational efficiency, we do not normalize the variance,
  // covariance and cube variance here as they are in the same order in both
  // nominators and denominators. However, we need be careful in value range
  // check.
  if (x_variance < kMinVariance * n * n || degree < 1 || n < 2) {
    // We cannot calculate b reliably so forget a and b, and just work on c.
    a = b = 0.0;
    if (n >= 1 && degree >= 0) {
      c = sigy / n;
    } else {
      c = 0.0;
    }
    return;
  }
  long double top96 = 0.0;       // Accurate top.
  long double bottom96 = 0.0;    // Accurate bottom.
  long double cubevar = sigxxx * n - static_cast<long double>(sigxx) * sigx;
  long double covariance = static_cast<long double>(sigxy) * n -
      static_cast<long double>(sigx) * sigy;
    
      // Main worker method that retrieves the next number in the sequence.
  // Returns kInvalidVal if called more than N times after object initialization
  int GetVal() {
    const int kInvalidVal = -1;
    const int kMaxNaturalNumberValue = 1 << num_bits_;
    if (next_num_ >= kMaxNaturalNumberValue)
      return kInvalidVal;
    int n = next_num_;
    }
    
    #endif  // GRPC_TEST_CPP_UTIL_BENCHMARK_CONFIG_H

    
    static const int WARMUP = 5;
static const int BENCHMARK = 5;
    
      ServerConfig server_config;
  server_config.set_server_type(ASYNC_SERVER);
  server_config.set_async_server_threads(8);
    
      grpc::testing::RunSynchronousUnaryPingPong();
    
    class PythonGrpcGenerator : public grpc::protobuf::compiler::CodeGenerator {
 public:
  PythonGrpcGenerator(const GeneratorConfiguration& config);
  ~PythonGrpcGenerator();
    }
    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
    class MetricsServiceImpl final : public MetricsService::Service {
 public:
  grpc::Status GetAllGauges(ServerContext* context, const EmptyMessage* request,
                            ServerWriter<GaugeResponse>* writer) override;
    }
    
      int Join();
  void Interrupt();
    
    std::vector<float> Sharpen(const std::vector<float>& image, int w, int h,
                           float sigma, float amount) {
  // This is only made for small sigma, e.g. 1.3.
  std::vector<double> kernel(5);
  for (size_t i = 0; i < kernel.size(); i++) {
    kernel[i] = Normal(1.0 * i - kernel.size() / 2, sigma);
  }
    }
    
    // Sort the root nodes, least popular first.
static inline bool SortHuffmanTree(const HuffmanTree& v0,
                                   const HuffmanTree& v1) {
  if (v0.total_count_ != v1.total_count_) {
    return v0.total_count_ < v1.total_count_;
  }
  return v0.index_right_or_value_ > v1.index_right_or_value_;
}
    
    
    {}  // namespace guetzli
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_JPEG_DATA_DECODER_H_
#define GUETZLI_JPEG_DATA_DECODER_H_
    
    #include 'guetzli/fdct.h'
    
    #endif  // GUETZLI_JPEG_DATA_READER_H_

    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
    // Normally, pass through types unmolested.
template <typename T, typename Enabled = void>
struct Convert {
  typedef T jniType;
  static jniType fromJni(jniType t) {
    return t;
  }
  static jniType toJniRet(jniType t) {
    return t;
  }
  static jniType toCall(jniType t) {
    return t;
  }
};
    
    /**
 * Symbolicates a stack trace into a new vector
 *
 * @param stackTrace The input stack trace
 */
FBEXPORT inline std::vector<StackTraceElement> getStackTraceSymbols(
    const std::vector<InstructionPointer>& trace) {
  auto symbols = std::vector<StackTraceElement>{};
  getStackTraceSymbols(symbols, trace);
  return symbols;
}
    
    #pragma once
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);
    
    
    {#undef EXT_FUNC
}
    
    #endif // LIBFUZZER_WINDOWS

    
    void WriteToFile(const Unit &U, const std::string &Path) {
  // Use raw C interface because this function may be called from a sig handler.
  FILE *Out = fopen(Path.c_str(), 'w');
  if (!Out) return;
  fwrite(U.data(), sizeof(U[0]), U.size(), Out);
  fclose(Out);
}
    
    void Fuzzer::ShuffleAndMinimize(UnitVector *InitialCorpus) {
  Printf('#0\tREAD units: %zd\n', InitialCorpus->size());
  if (Options.ShuffleAtStartUp)
    ShuffleCorpus(InitialCorpus);
    }
    
      // Parse NumFilesInFirstCorpus.
  if (!std::getline(IS, Line, '\n')) return false;
  std::istringstream L2(Line);
  NumFilesInFirstCorpus = NumFiles + 1;
  L2 >> NumFilesInFirstCorpus;
  if (NumFilesInFirstCorpus > NumFiles) return false;
    
    size_t MutationDispatcher::Mutate_ShuffleBytes(uint8_t *Data, size_t Size,
                                               size_t MaxSize) {
  if (Size > MaxSize) return 0;
  assert(Size);
  size_t ShuffleAmount =
      Rand(std::min(Size, (size_t)8)) + 1; // [1,8] and <= Size.
  size_t ShuffleStart = Rand(Size - ShuffleAmount);
  assert(ShuffleStart + ShuffleAmount <= Size);
  std::random_shuffle(Data + ShuffleStart, Data + ShuffleStart + ShuffleAmount,
                      Rand);
  return Size;
}
    
    extern TracePC TPC;