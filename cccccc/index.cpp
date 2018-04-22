
        
          ArrayRef<SymbolOccurrence> getOccurrences() {
    if (!sorted) {
      std::stable_sort(occurrences.begin(), occurrences.end(),
          [](const SymbolOccurrence &a, const SymbolOccurrence& b) {
        if (a.line < b.line)
          return true;
        if (b.line < a.line)
          return false;
        return a.column < b.column;
      });
      sorted = true;
    }
    return occurrences;
  }
    
      /// Keep emitting subsequent diagnostics after a fatal error.
  bool ShowDiagnosticsAfterFatalError = false;
    
    #ifndef SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
#define SWIFT_PRINTINGDIAGNOSTICCONSUMER_H
    
      /// Returns true if range \c Enclosing contains the range \c Inner.
  bool rangeContains(SourceRange Enclosing, SourceRange Inner) const {
    return rangeContainsTokenLoc(Enclosing, Inner.Start) &&
           rangeContainsTokenLoc(Enclosing, Inner.End);
  }
    
    // On Cygwin, std::once_flag can not be used because it is larger than the
// platform word.
typedef uintptr_t swift_once_t;
#else
    
    /// Runs the given function with the given context argument exactly once.
/// The predicate argument must point to a global or static variable of static
/// extent of type swift_once_t.
void swift::swift_once(swift_once_t *predicate, void (*fn)(void *),
                       void *context) {
#if defined(__APPLE__)
  dispatch_once_f(predicate, context, fn);
#elif defined(__CYGWIN__)
  _swift_once_f(predicate, context, fn);
#else
  std::call_once(*predicate, [fn, context]() { fn(context); });
#endif
}

    
    bool Value::hasComment(CommentPlacement placement) const {
  return comments_ != 0 && comments_[placement].comment_ != 0;
}
    
    
    {  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
  ASSERT_TRUE(message.ParseFromString(message.SerializeAsString()));
  EXPECT_FALSE(message.any_value().Is<protobuf_unittest::TestAny>());
  EXPECT_TRUE(message.any_value().Is<google::protobuf::Any>());
}
    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #ifndef TESSERACT_CCMAIN_PARAGRAPHS_H_
#define TESSERACT_CCMAIN_PARAGRAPHS_H_
    
      // Delete all Added points.
  void Clear();
    
    // Raw features extracted from a single OCR hypothesis.
// The features are normalized (by outline length or number of unichars as
// appropriate) real-valued quantities with unbounded range and
// unknown distribution.
// Normalization / binarization of these features is done at a later stage.
// Note: when adding new fields to this enum make sure to modify
// kParamsTrainingFeatureTypeName
enum kParamsTrainingFeatureType {
  // Digits
  PTRAIN_DIGITS_SHORT,             // 0
  PTRAIN_DIGITS_MED,               // 1
  PTRAIN_DIGITS_LONG,              // 2
  // Number or pattern (NUMBER_PERM, USER_PATTERN_PERM)
  PTRAIN_NUM_SHORT,                // 3
  PTRAIN_NUM_MED,                  // 4
  PTRAIN_NUM_LONG,                 // 5
  // Document word (DOC_DAWG_PERM)
  PTRAIN_DOC_SHORT,                // 6
  PTRAIN_DOC_MED,                  // 7
  PTRAIN_DOC_LONG,                 // 8
  // Word (SYSTEM_DAWG_PERM, USER_DAWG_PERM, COMPOUND_PERM)
  PTRAIN_DICT_SHORT,               // 9
  PTRAIN_DICT_MED,                 // 10
  PTRAIN_DICT_LONG,                // 11
  // Frequent word (FREQ_DAWG_PERM)
  PTRAIN_FREQ_SHORT,               // 12
  PTRAIN_FREQ_MED,                 // 13
  PTRAIN_FREQ_LONG,                // 14
  PTRAIN_SHAPE_COST_PER_CHAR,      // 15
  PTRAIN_NGRAM_COST_PER_CHAR,      // 16
  PTRAIN_NUM_BAD_PUNC,             // 17
  PTRAIN_NUM_BAD_CASE,             // 18
  PTRAIN_XHEIGHT_CONSISTENCY,      // 19
  PTRAIN_NUM_BAD_CHAR_TYPE,        // 20
  PTRAIN_NUM_BAD_SPACING,          // 21
  PTRAIN_NUM_BAD_FONT,             // 22
  PTRAIN_RATING_PER_CHAR,          // 23
    }
    
    // Enum describing the loss function to apply during training and/or the
// decoding method to apply at runtime.
enum LossType {
  LT_NONE,      // Undefined.
  LT_CTC,       // Softmax with standard CTC for training/decoding.
  LT_SOFTMAX,   // Outputs sum to 1 in fixed positions.
  LT_LOGISTIC,  // Logistic outputs with independent values.
};
    
    /**
 * Return the character normalization feature for a blob.
 *
 * The features returned are in a scale where the x-height has been
 * normalized to live in the region y = [-0.25 .. 0.25].  Example ranges
 * for English below are based on the Linux font collection on 2009-12-04:
 *
 *  - Params[CharNormY]
 *     - The y coordinate of the grapheme's centroid.
 *     - English: [-0.27, 0.71]
 *
 *  - Params[CharNormLength]
 *     - The length of the grapheme's outline (tiny segments discarded),
 *     divided by 10.0=LENGTH_COMPRESSION.
 *     - English: [0.16, 0.85]
 *
 *  - Params[CharNormRx]
 *     - The radius of gyration about the x axis, as measured from CharNormY.
 *     - English: [0.011, 0.34]
 *
 *  - Params[CharNormRy]
 *     - The radius of gyration about the y axis, as measured from
 *     the x center of the grapheme's bounding box.
 *     - English: [0.011, 0.31]
 */
FEATURE_SET ExtractCharNormFeatures(const INT_FX_RESULT_STRUCT& fx_info) {
  FEATURE_SET feature_set = NewFeatureSet(1);
  FEATURE feature = NewFeature(&CharNormDesc);
    }
    
    #ifndef STREAM_PEER_SSL_H
#define STREAM_PEER_SSL_H
    
    
    {	connected = false;
	status = STATUS_DISCONNECTED;
}
    
    #include 'mbedtls/config.h'
#include 'mbedtls/ctr_drbg.h'
#include 'mbedtls/debug.h'
#include 'mbedtls/entropy.h'
#include 'mbedtls/net.h'
#include 'mbedtls/ssl.h'
    
    
    {	return connect_to_host(host, path, port, ssl, p_protocols);
}
    
    #if defined(MBEDTLS_MEMORY_BUFFER_ALLOC_C) &&                          \
    ( !defined(MBEDTLS_PLATFORM_C) || !defined(MBEDTLS_PLATFORM_MEMORY) )
#error 'MBEDTLS_MEMORY_BUFFER_ALLOC_C defined, but not all prerequisites'
#endif
    
    extern uint8_t script_encryption_key[32];
    
    	public:
		IncrementalSearch(EditorHelpSearch *p_search, Tree *p_search_options, const String &p_term);
    
    	real_t m_pitchControl;
	real_t m_steeringValue;
	real_t m_currentVehicleSpeedKmHour;
    
    	struct TileData {
		Point2i pos;
		int cell;
		bool flip_h;
		bool flip_v;
		bool transpose;
		int auto_x;
		int auto_y;
	};
    
    	Map<StringName, native_call_cb> native_calls;
    
    namespace rabit {
namespace utils {
extern 'C' {
  void (*Printf)(const char *fmt, ...) = Rprintf;
  void (*Assert)(int exp, const char *fmt, ...) = XGBoostAssert_R;
  void (*Check)(int exp, const char *fmt, ...) = XGBoostCheck_R;
  void (*Error)(const char *fmt, ...) = error;
}
}
}
    
    TEST(Metric, LogLoss) {
  xgboost::Metric * metric = xgboost::Metric::Create('logloss');
  ASSERT_STREQ(metric->Name(), 'logloss');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              1.2039f, 0.001f);
}
    
    class Random;
class Dictionary;
class DictionaryEntry;
class MutationDispatcher;
struct FuzzingOptions;
class InputCorpus;
struct InputInfo;
struct ExternalFunctions;
    
    void RemoveFile(const std::string &Path);
    
    bool IsFile(const std::string &Path) {
  struct stat St;
  if (stat(Path.c_str(), &St))
    return false;
  return S_ISREG(St.st_mode);
}
    
    void Fuzzer::SetMaxMutationLen(size_t MaxMutationLen) {
  assert(MaxMutationLen && MaxMutationLen <= MaxInputLen);
  this->MaxMutationLen = MaxMutationLen;
}
    
      // Sort. Give preference to
  //   * smaller files
  //   * files with more features.
  std::sort(Files.begin() + NumFilesInFirstCorpus, Files.end(),
            [&](const MergeFileInfo &a, const MergeFileInfo &b) -> bool {
              if (a.Size != b.Size)
                return a.Size < b.Size;
              return a.Features.size() > b.Features.size();
            });
    
    #ifndef LLVM_FUZZER_OPTIONS_H
#define LLVM_FUZZER_OPTIONS_H
    
    std::string Sha1ToString(const uint8_t Sha1[kSHA1NumBytes]);
    
    ScopedDoingMyOwnMemmem::ScopedDoingMyOwnMemmem() { DoingMyOwnMemmem = true; }
ScopedDoingMyOwnMemmem::~ScopedDoingMyOwnMemmem() { DoingMyOwnMemmem = false; }
    
    std::string Base64(const Unit &U) {
  static const char Table[] = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
                              'abcdefghijklmnopqrstuvwxyz'
                              '0123456789+/';
  std::string Res;
  size_t i;
  for (i = 0; i + 2 < U.size(); i += 3) {
    uint32_t x = (U[i] << 16) + (U[i + 1] << 8) + U[i + 2];
    Res += Table[(x >> 18) & 63];
    Res += Table[(x >> 12) & 63];
    Res += Table[(x >> 6) & 63];
    Res += Table[x & 63];
  }
  if (i + 1 == U.size()) {
    uint32_t x = (U[i] << 16);
    Res += Table[(x >> 18) & 63];
    Res += Table[(x >> 12) & 63];
    Res += '==';
  } else if (i + 2 == U.size()) {
    uint32_t x = (U[i] << 16) + (U[i + 1] << 8);
    Res += Table[(x >> 18) & 63];
    Res += Table[(x >> 12) & 63];
    Res += Table[(x >> 6) & 63];
    Res += '=';
  }
  return Res;
}
    
    void GenerateServerMethod(const grpc_generator::Method *method, grpc_generator::Printer *printer,
                          std::map<grpc::string, grpc::string> vars) {
	vars['Method'] = exportName(method->name());
	vars['Request'] = method->get_input_type_name();
	vars['Response'] = (vars['CustomMethodIO'] == '') ? method->get_output_type_name() : vars['CustomMethodIO'];
	vars['FullMethodName'] = '/' + vars['Package'] + '.' + vars['Service'] + '/' + vars['Method'];
	vars['Handler'] = '_' + vars['Service'] + '_' + vars['Method'] + '_Handler';
	if (method->NoStreaming()) {
		printer->Print(vars, 'func $Handler$(srv interface{}, ctx $context$.Context,\n\tdec func(interface{}) error, interceptor $grpc$.UnaryServerInterceptor) (interface{}, error) {\n');
		printer->Indent();
		printer->Print(vars, 'in := new($Request$)\n');
		printer->Print('if err := dec(in); err != nil { return nil, err }\n');
		printer->Print(vars, 'if interceptor == nil { return srv.($Service$Server).$Method$(ctx, in) }\n');
		printer->Print(vars, 'info := &$grpc$.UnaryServerInfo{\n');
		printer->Indent();
		printer->Print('Server: srv,\n');
		printer->Print(vars, 'FullMethod: \'$FullMethodName$\',\n');
		printer->Outdent();
		printer->Print('}\n\n');
		printer->Print(vars, 'handler := func(ctx $context$.Context, req interface{}) (interface{}, error) {\n');
		printer->Indent();
		printer->Print(vars, 'return srv.($Service$Server).$Method$(ctx, req.(* $Request$))\n');
		printer->Outdent();
		printer->Print('}\n');
		printer->Print('return interceptor(ctx, in, info, handler)\n');
		printer->Outdent();
		printer->Print('}\n\n');
		return;
	}
	vars['StreamType'] = vars['ServiceUnexported'] + vars['Method'] + 'Server';
	printer->Print(vars, 'func $Handler$(srv interface{}, stream $grpc$.ServerStream) error {\n');
	printer->Indent();
	if (ServerOnlyStreaming(method)) {
		printer->Print(vars, 'm := new($Request$)\n');
		printer->Print(vars, 'if err := stream.RecvMsg(m); err != nil { return err }\n');
		printer->Print(vars, 'return srv.($Service$Server).$Method$(m, &$StreamType${stream})\n');
	} else {
		printer->Print(vars, 'return srv.($Service$Server).$Method$(&$StreamType${stream})\n');
	}
	printer->Outdent();
	printer->Print('}\n\n');
    }
    
      // Ensure that a type is prefixed with its namespace whenever it is used
  // outside of its namespace.
  std::string WrapInNameSpace(const Namespace *ns,
                              const std::string &name) const;
    
    #include 'monster_generated.h'  // Already includes 'flatbuffers/flatbuffers.h'.
    
    struct EnumBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Enum::VT_NAME, name);
  }
  void add_values(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<EnumVal>>> values) {
    fbb_.AddOffset(Enum::VT_VALUES, values);
  }
  void add_is_union(bool is_union) {
    fbb_.AddElement<uint8_t>(Enum::VT_IS_UNION, static_cast<uint8_t>(is_union), 0);
  }
  void add_underlying_type(flatbuffers::Offset<Type> underlying_type) {
    fbb_.AddOffset(Enum::VT_UNDERLYING_TYPE, underlying_type);
  }
  void add_attributes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<KeyValue>>> attributes) {
    fbb_.AddOffset(Enum::VT_ATTRIBUTES, attributes);
  }
  void add_documentation(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> documentation) {
    fbb_.AddOffset(Enum::VT_DOCUMENTATION, documentation);
  }
  explicit EnumBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  EnumBuilder &operator=(const EnumBuilder &);
  flatbuffers::Offset<Enum> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Enum>(end);
    fbb_.Required(o, Enum::VT_NAME);
    fbb_.Required(o, Enum::VT_VALUES);
    fbb_.Required(o, Enum::VT_UNDERLYING_TYPE);
    return o;
  }
};