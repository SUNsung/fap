
        
        #include 'atom/browser/api/trackable_object.h'
#include 'base/callback.h'
#include 'chrome/browser/extensions/global_shortcut_listener.h'
#include 'native_mate/handle.h'
#include 'ui/base/accelerators/accelerator.h'
    
      // Called by platform specific implementations of this class whenever a key
  // is struck. Only called for keys that have an observer registered.
  void NotifyKeyPressed(const ui::Accelerator& accelerator);
    
      scoped_refptr<MonitorFinder> monitor_finder_;
    
    bool
Reader::addError(const std::string& message, Token& token, Location extra) {
  ErrorInfo info;
  info.token_ = token;
  info.message_ = message;
  info.extra_ = extra;
  errors_.push_back(info);
  return false;
}
    
    // Find the file that declares the given fully-qualified symbol name.
bool PyDescriptorDatabase::FindFileContainingSymbol(
    const string& symbol_name, FileDescriptorProto* output) {
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallMethod(py_database_, 'FindFileContainingSymbol', 's#',
                          symbol_name.c_str(), symbol_name.size()));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    
    
    
    {
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    void RepeatedPrimitiveFieldGenerator::GenerateSerializationCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.WriteTo(output, _repeated_$name$_codec);\n');
}
    
    struct Options;
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(GeneratorFactory);
};
    
    // Determines whether to support stream redirection. This is used to test
// output correctness and to implement death tests.
#ifndef GTEST_HAS_STREAM_REDIRECTION
// By default, we assume that stream redirection is supported on all
// platforms except known mobile ones.
# if GTEST_OS_WINDOWS_MOBILE || GTEST_OS_SYMBIAN
#  define GTEST_HAS_STREAM_REDIRECTION 0
# else
#  define GTEST_HAS_STREAM_REDIRECTION 1
# endif  // !GTEST_OS_WINDOWS_MOBILE && !GTEST_OS_SYMBIAN
#endif  // GTEST_HAS_STREAM_REDIRECTION
    
    
    { private:
  String();  // Not meant to be instantiated.
};  // class String
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7>
struct Templates7 {
  typedef TemplateSel<T1> Head;
  typedef Templates6<T2, T3, T4, T5, T6, T7> Tail;
};
    
    // Tests some trivial cases.
TEST(IsPrimeTest, Trivial) {
  EXPECT_FALSE(IsPrime(0));
  EXPECT_FALSE(IsPrime(1));
  EXPECT_TRUE(IsPrime(2));
  EXPECT_TRUE(IsPrime(3));
}
    
    class UnicharcompressTest : public ::testing::Test {
 protected:
  // Loads and compresses the given unicharset.
  void LoadUnicharset(const string& unicharset_name) {
    string radical_stroke_file =
        file::JoinPath(FLAGS_test_srcdir,
                       'langdata/radical-stroke.txt');
    string unicharset_file = file::JoinPath(
        FLAGS_test_srcdir, 'testdata',
        unicharset_name);
    string uni_data;
    CHECK_OK(file::GetContents(unicharset_file, &uni_data, file::Defaults()));
    string radical_data;
    CHECK_OK(file::GetContents(radical_stroke_file, &radical_data,
                               file::Defaults()));
    CHECK(
        unicharset_.load_from_inmemory_file(uni_data.data(), uni_data.size()));
    STRING radical_str(radical_data.c_str());
    null_char_ =
        unicharset_.has_special_codes() ? UNICHAR_BROKEN : unicharset_.size();
    compressed_.ComputeEncoding(unicharset_, null_char_, &radical_str);
    // Get the encoding of the null char.
    RecodedCharID code;
    compressed_.EncodeUnichar(null_char_, &code);
    encoded_null_char_ = code(0);
    string output_name = file::JoinPath(
        FLAGS_test_tmpdir, absl::StrCat(unicharset_name, '.encoding.txt'));
    STRING encoding = compressed_.GetEncodingAsString(unicharset_);
    string encoding_str(&encoding[0], encoding.size());
    CHECK_OK(file::SetContents(output_name, encoding_str, file::Defaults()));
    LOG(INFO) << 'Wrote encoding to:' << output_name;
  }
  // Serializes and de-serializes compressed_ over itself.
  void SerializeAndUndo() {
    GenericVector<char> data;
    TFile wfp;
    wfp.OpenWrite(&data);
    EXPECT_TRUE(compressed_.Serialize(&wfp));
    TFile rfp;
    rfp.Open(&data[0], data.size());
    EXPECT_TRUE(compressed_.DeSerialize(&rfp));
  }
  // Returns true if the lang is in CJK.
  bool IsCJKLang(const string& lang) {
    return lang == 'chi_sim' || lang == 'chi_tra' || lang == 'kor' ||
           lang == 'jpn';
  }
  // Returns true if the lang is Indic.
  bool IsIndicLang(const string& lang) {
    return lang == 'asm' || lang == 'ben' || lang == 'bih' || lang == 'hin' ||
           lang == 'mar' || lang == 'nep' || lang == 'san' || lang == 'bod' ||
           lang == 'dzo' || lang == 'guj' || lang == 'kan' || lang == 'mal' ||
           lang == 'ori' || lang == 'pan' || lang == 'sin' || lang == 'tam' ||
           lang == 'tel';
  }
    }
    
    // dims=[5, 4, 3, 2]->[5, 3, 2, 4]
TEST_F(MatrixTest, RotatingTranspose_1_3) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 1, 3, &m);
  m.ResizeNoInit(kInputSize_ / 4, 4);
  // Verify that the result is:
  // output tensor=[[[[0, 6, 12, 18][1, 7, 13, 19]]
  //                 [[2, 8, 14, 20][3, 9, 15, 21]]
  //                 [[4, 10, 16, 22][5, 11, 17, 23]]]
  //                [[[24, 30, 36, 42]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(6, m(0, 1));
  EXPECT_EQ(1, m(1, 0));
  EXPECT_EQ(2, m(2, 0));
  EXPECT_EQ(3, m(3, 0));
  EXPECT_EQ(4, m(4, 0));
  EXPECT_EQ(5, m(5, 0));
  EXPECT_EQ(24, m(6, 0));
  EXPECT_EQ(30, m(6, 1));
}
    
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
    
    ScrollView* bln_word_window_handle();  //return handle
void build_image_window(int width, int height);
void display_bln_lines(ScrollView window,
                       ScrollView::Color colour,
                       float scale_factor,
                       float y_offset,
                       float minx,
                       float maxx);
                                 //function to call
void pgeditor_msg(  //message display
                  const char *msg);
void pgeditor_show_point(  //display coords
                         SVEvent *event);
                                 //put bln word in       box
void show_point(PAGE_RES* page_res, float x, float y);
    
      // Clean up the bounding boxes from the polygonal approximation by
  // expanding slightly, then clipping to the blobs from the original_word
  // that overlap. If not null, the block provides the inverse rotation.
  void ClipToOriginalWord(const BLOCK* block, WERD* original_word);
    
    #ifndef TESSERACT_CCSTRUCT_CCSTRUCT_H_
#define TESSERACT_CCSTRUCT_CCSTRUCT_H_
    
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
    
    template<typename DType>
inline void CompressArray<DType>::Decompress(int chunk_id) {
  int chunk_size = static_cast<int>(
      raw_chunks_[chunk_id + 1] - raw_chunks_[chunk_id]) * sizeof(DType);
  int encoded_size = static_cast<int>(
      encoded_chunks_[chunk_id + 1] - encoded_chunks_[chunk_id]);
  // decompress data
  int src_size = LZ4_decompress_fast(
      dmlc::BeginPtr(in_buffer_) + encoded_chunks_[chunk_id],
      reinterpret_cast<char*>(dmlc::BeginPtr(data) + raw_chunks_[chunk_id]),
      chunk_size);
  CHECK_EQ(encoded_size, src_size);
}
    
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

    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromDataIter
 * Signature: (Ljava/util/Iterator;Ljava/lang/String;[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromDataIter
  (JNIEnv *jenv, jclass jcls, jobject jiter, jstring jcache_info, jlongArray jout) {
  DMatrixHandle result;
  const char* cache_info = nullptr;
  if (jcache_info != nullptr) {
    cache_info = jenv->GetStringUTFChars(jcache_info, 0);
  }
  int ret = XGDMatrixCreateFromDataIter(
      jiter, XGBoost4jCallbackDataIterNext, cache_info, &result);
  if (cache_info) {
    jenv->ReleaseStringUTFChars(jcache_info, cache_info);
  }
  setHandle(jenv, jout, result);
  return ret;
}
    
    
    {  delete metric;
  metric = xgboost::Metric::Create('ams@0');
  ASSERT_STREQ(metric->Name(), 'ams@0');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0.311f, 0.001f);
}
    
    class ShotgunUpdater : public LinearUpdater {
 public:
  // set training parameter
  void Init(const std::vector<std::pair<std::string, std::string> > &args) override {
    param_.InitAllowUnknown(args);
    selector_.reset(FeatureSelector::Create(param_.feature_selector));
  }
  void Update(HostDeviceVector<GradientPair> *in_gpair, DMatrix *p_fmat,
              gbm::GBLinearModel *model, double sum_instance_weight) override {
    std::vector<GradientPair> &gpair = in_gpair->HostVector();
    param_.DenormalizePenalties(sum_instance_weight);
    const int ngroup = model->param.num_output_group;
    }
    }
    
    namespace detail {
/*! \brief Implementation of gradient statistics pair. Template specialisation
 * may be used to overload different gradients types e.g. low precision, high
 * precision, integer, floating point. */
template <typename T>
class GradientPairInternal {
  /*! \brief gradient statistics */
  T grad_;
  /*! \brief second order gradient statistics */
  T hess_;
    }
    }