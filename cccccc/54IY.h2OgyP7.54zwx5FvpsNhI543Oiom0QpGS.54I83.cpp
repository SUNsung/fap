
        
        TEST(PartialRunMgrFindOrCreate, Find) {
  // Basic test of PartialRunMgr CancellationManager find.
  PartialRunMgr partial_run_mgr;
  int step_id = 1;
  CancellationManager* cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &cancellation_manager);
  // Looking for the same step should return the same cancellation_manager.
  CancellationManager* found_cancellation_manager;
  partial_run_mgr.FindOrCreate(step_id, &found_cancellation_manager);
  EXPECT_EQ(cancellation_manager, found_cancellation_manager);
}
    
    class SessionFactory {
 public:
  virtual Session* NewSession(const SessionOptions& options) = 0;
  virtual bool AcceptsOptions(const SessionOptions& options) = 0;
    }
    
    #if !TENSORFLOW_USE_SYCL
#error This file must only be included when building TensorFlow with SYCL support
#endif
    
    
    { private:
  enum { kBufferSize = 256 << 10 /* 256 kB */ };
  const int skip_header_lines_;
  Env* const env_;
  int64 line_number_;
  std::unique_ptr<RandomAccessFile> file_;  // must outlive input_buffer_
  std::unique_ptr<io::InputBuffer> input_buffer_;
};
    
      Status ReadLocked(string* key, string* value, bool* produced,
                    bool* at_end) override {
    *key = strings::StrCat(current_work(), ':', offset_);
    Status status = reader_->ReadRecord(&offset_, value);
    if (errors::IsOutOfRange(status)) {
      *at_end = true;
      return Status::OK();
    }
    if (!status.ok()) return status;
    *produced = true;
    return Status::OK();
  }
    
    Status DivGrad(const AttrSlice& attrs, FunctionDef* g) {
  // clang-format off
  return GradForBinaryCwise(g, {
      {{'gx'}, 'Div', {'dz', 'y'}},
      {{'nx'}, 'Neg', {'x'}, {}, {'dz'}},
      {{'y2'}, 'Square', {'y'}, {}, {'dz'}},
      {{'nx_y2'}, 'Div', {'nx', 'y2'}},
      {{'gy'}, 'Mul', {'dz', 'nx_y2'}},  // dz * (- x / y^2)
  });
  // clang-format on
}
REGISTER_OP_GRADIENT('Div', DivGrad);
    
    void AddDeviceMetadata(const std::map<uint32, const Device *> &devices,
                       string *json) {
  for (const auto &pair : devices) {
    uint32 device_id = pair.first;
    const Device &device = *pair.second;
    if (!device.name().empty()) {
      Appendf(json,
              R'({'ph':'M','pid':%u,'name':'process_name',)'
              R'('args':{)',
              device_id);
      AppendEscapedName(json, device.name());
      StrAppend(json, '}},');
    }
    Appendf(json,
            R'({'ph':'M','pid':%u,'name':'process_sort_index',)'
            R'('args':{'sort_index':%u}},)',
            device_id, device_id);
    // Convert to a std::map so that devices are sorted by the device id.
    std::map<uint32, const Resource *> sorted_resources;
    for (const auto &pair : device.resources()) {
      sorted_resources[pair.first] = &pair.second;
    }
    AddResourceMetadata(device_id, sorted_resources, json);
  }
}
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    class MapFieldGenerator : public FieldGeneratorBase {
 public:
  MapFieldGenerator(const FieldDescriptor* descriptor,
                    int fieldOrdinal,
                    const Options* options);
  ~MapFieldGenerator();
    }
    
    void RepeatedEnumFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    ServiceGenerator* ImmutableGeneratorFactory::NewServiceGenerator(
    const ServiceDescriptor* descriptor) const {
  return new ImmutableServiceGenerator(descriptor, context_);
}
    
    
    { private:
  Context* context_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ImmutableGeneratorFactory);
};
    
    
    {  class EuroText : public QuickTest {
  };
  
  TEST_F(EuroText, FastOCR) {
    OCRTester(TESTING_DIR '/eurotext.tif',
              TESTING_DIR '/eurotext.txt',
              TESSDATA_DIR '_fast', 'script/Latin');
  }
  
}  // namespace

    
    // C++ Implementation of the Softmax (output) class from lstm.py.
class FullyConnected : public Network {
 public:
  FullyConnected(const STRING& name, int ni, int no, NetworkType type);
  virtual ~FullyConnected();
    }
    
    // Runs two or more networks in series (layers) on the same input.
class Series : public Plumbing {
 public:
  // ni_ and no_ will be set by AddToStack.
  explicit Series(const STRING& name);
  virtual ~Series();
    }
    
    /**
 * Provide an image for Tesseract to recognize. As with SetImage above,
 * Tesseract takes its own copy of the image, so it need not persist until
 * after Recognize.
 * Pix vs raw, which to use?
 * Use Pix where possible. Tesseract uses Pix as its internal representation
 * and it is therefore more efficient to provide a Pix directly.
 */
void TessBaseAPI::SetImage(Pix* pix) {
  if (InternalSetImage()) {
    thresholder_->SetImage(pix);
    SetInputImage(thresholder_->GetPixRect());
  }
}
    
      const char* pageSeparator = api->GetStringVariable('page_separator');
  if (pageSeparator != nullptr && *pageSeparator != '\0') {
    AppendString(pageSeparator);
  }
    
    
    {}  // namespace tesseract.
    
    // Computes part of matrix.vector v = Wu. Computes N=64 results.
// The weights *must* be arranged so that consecutive reads from wi
// provides (num_in/kNumInputsPerGroup groups of (N output dim groups of
// (kNumInputsPerGroup inputs))). After that there must be N consecutive
// bias weights, before continuing with any more weights.
// u must be padded out with zeros to
// kNumInputsPerGroup*ceil(num_in/kNumInputsPerGroup) elements.
static void PartialMatrixDotVector64(const int8_t* wi, const double* scales,
                                     const int8_t* u, int num_in, int num_out,
                                     double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  __m256i result1 = _mm256_setzero_si256();
  __m256i result2 = _mm256_setzero_si256();
  __m256i result3 = _mm256_setzero_si256();
  __m256i result4 = _mm256_setzero_si256();
  __m256i result5 = _mm256_setzero_si256();
  __m256i result6 = _mm256_setzero_si256();
  __m256i result7 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result1);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result2);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result3);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result4);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result5);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result6);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result7);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result1, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result2, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result3, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result4, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result5, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result6, shift_id, wi, scales, kNumOutputsPerRegister, v);
  num_out -= kNumOutputsPerRegister * 7;
  ExtractResults(result7, shift_id, wi, scales,
                 std::min(kNumOutputsPerRegister, num_out), v);
}
    
    /// Enforce specific types of decoration.
enum DecorationPoint {
  DECORATE_LOAD,
  DECORATE_ALWAYS,
  DECORATE_INTERVAL,
};
    
    #include 'osquery/core/json.h'
    
    
    {  // Support a signed 64, a double, and treat everything else as a signed int.
  if (type == kCFNumberSInt64Type) {
    long long int value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  } else if (type == kCFNumberDoubleType) {
    double value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  } else {
    unsigned int value;
    if (CFNumberGetValue((CFNumberRef)cf_number, type, &value)) {
      return boost::lexical_cast<std::string>(value);
    }
  }
  // Cast as a string.
  return '0';
}
    
    TEST_F(TablesTests, test_constraint) {
  auto constraint = Constraint(EQUALS);
  constraint.expr = 'none';
    }
    
    TEST_F(TimeTests, test_asciitime) {
  const size_t epoch = 1491518994;
  const std::string expected = 'Thu Apr  6 22:49:54 2017 UTC';
    }
    
    #include <xgboost/logging.h>
#include 'src/common/random.h'
#include './xgboost_R.h'
    
    template <typename T>
size_t HostDeviceVector<T>::Size() const { return impl_->data_h_.size(); }
    
    
    {  for (size_t i = 0; i < nindptr; ++i) {
    col_ptr_[i] = static_cast<size_t>(p_indptr[i]);
  }
  #pragma omp parallel for schedule(static)
  for (int64_t i = 0; i < static_cast<int64_t>(ndata); ++i) {
    indices_[i] = static_cast<unsigned>(p_indices[i]);
    data_[i] = static_cast<float>(p_data[i]);
  }
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromCSCEx(BeginPtr(col_ptr_), BeginPtr(indices_),
                                      BeginPtr(data_), nindptr, ndata,
                                      nrow, &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    // training parameters
struct GBLinearTrainParam : public dmlc::Parameter<GBLinearTrainParam> {
  std::string updater;
  float tolerance;
  size_t max_row_perbatch;
  int debug_verbose;
  DMLC_DECLARE_PARAMETER(GBLinearTrainParam) {
    DMLC_DECLARE_FIELD(updater)
        .set_default('shotgun')
        .describe('Update algorithm for linear model. One of shotgun/coord_descent');
    DMLC_DECLARE_FIELD(tolerance)
        .set_lower_bound(0.0f)
        .set_default(0.0f)
        .describe('Stop if largest weight update is smaller than this number.');
    DMLC_DECLARE_FIELD(max_row_perbatch)
        .set_default(std::numeric_limits<size_t>::max())
        .describe('Maximum rows per batch.');
    DMLC_DECLARE_FIELD(debug_verbose)
        .set_lower_bound(0)
        .set_default(0)
        .describe('flag to print out detailed breakdown of runtime');
  }
};
/*!
 * \brief gradient boosted linear model
 */
class GBLinear : public GradientBooster {
 public:
  explicit GBLinear(const std::vector<std::shared_ptr<DMatrix> > &cache,
                    bst_float base_margin)
      : base_margin_(base_margin),
        sum_instance_weight_(0),
        sum_weight_complete_(false),
        is_converged_(false) {
    // Add matrices to the prediction cache
    for (auto &d : cache) {
      PredictionCacheEntry e;
      e.data = d;
      cache_[d.get()] = std::move(e);
    }
  }
  void Configure(const std::vector<std::pair<std::string, std::string> >& cfg) override {
    if (model_.weight.size() == 0) {
      model_.param.InitAllowUnknown(cfg);
    }
    param_.InitAllowUnknown(cfg);
    updater_.reset(LinearUpdater::Create(param_.updater));
    updater_->Init(cfg);
    monitor_.Init('GBLinear ', param_.debug_verbose);
  }
  void Load(dmlc::Stream* fi) override {
    model_.Load(fi);
  }
  void Save(dmlc::Stream* fo) const override {
    model_.Save(fo);
  }
    }
    
    bool js_cocos2dx_studio_Tween_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_Tween_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_Tween(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_Tween_getAnimation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Tween_gotoAndPause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Tween_play(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Tween_gotoAndPlay(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Tween_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Tween_setAnimation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Tween_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_Tween_Tween(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
        CC_INCREMENT_GL_DRAWN_BATCHES_AND_VERTICES(2,vertexCount*2);
    
    typedef Test* TestCreateFcn();
    
    
    {	static Test* Create()
	{
		return new AddPair;
	}
};
    
    	static Test* Create()
	{
		return new Breakable;
	}
    
      // returns true if the reader has encountered an eof condition.
  bool IsEOF() {
    return eof_;
  }
    
    #ifndef JAVA_ROCKSJNI_STATISTICSJNI_H_
#define JAVA_ROCKSJNI_STATISTICSJNI_H_
    
      // Add an entry into memtable that maps key to value at the
  // specified sequence number and with the specified type.
  // Typically value will be empty if type==kTypeDeletion.
  //
  // REQUIRES: if allow_concurrent = false, external synchronization to prevent
  // simultaneous operations on the same MemTable.
  //
  // Returns false if MemTableRepFactory::CanHandleDuplicatedKey() is true and
  // the <key, seq> already exists.
  bool Add(SequenceNumber seq, ValueType type, const Slice& key,
           const Slice& value, bool allow_concurrent = false,
           MemTablePostProcessInfo* post_process_info = nullptr);
    
    Status DateTieredDBImpl::Put(const WriteOptions& options, const Slice& key,
                             const Slice& val) {
  int64_t timestamp = 0;
  Status s;
  s = GetTimestamp(key, &timestamp);
  if (!s.ok()) {
    return s;
  }
  DropObsoleteColumnFamilies();
    }
    
    public:
  AbstractProxyResponseCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      const std::shared_ptr<HttpConnection>& httpConnection, DownloadEngine* e,
      const std::shared_ptr<SocketCore>& s);
    
    #else // defined(__MAC_10_6)
  A2_LOG_INFO('PKCS12 files are only supported in OSX 10.6 or later.');
  return false;