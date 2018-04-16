
        
        /*
The JsonCpp library's source code, including accompanying documentation, 
tests and demonstration applications, are licensed under the following
conditions...
    
    #include <google/protobuf/descriptor_database.h>
    
    
    {
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
    void RepeatedPrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.For$capitalized_type_name$($tag$);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__

    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace java
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    
    {    return state;
}
    
        f2coeff[1] = - 2*D[1][3] + 2*D[1][7] - 2*D[3][1] - 2*D[3][5] - 2*D[3][9] - 2*D[5][3] + 2*D[5][7] + 2*D[7][1] + 2*D[7][5] + 2*D[7][9] - 2*D[9][3] + 2*D[9][7]; // constant term
    f2coeff[2] = 4*D[1][5] - 4*D[1][1] + 8*D[2][2] + 8*D[2][4] + 8*D[4][2] + 8*D[4][4] + 4*D[5][1] - 4*D[5][5] + 4*D[9][9]; // s1^2  * s2
    f2coeff[3] = 4*D[1][8] - 4*D[1][6] - 8*D[2][3] + 8*D[2][7] - 8*D[3][2] - 8*D[3][4] - 8*D[4][3] + 8*D[4][7] + 4*D[5][6] - 4*D[5][8] - 4*D[6][1] + 4*D[6][5] - 4*D[6][9] + 8*D[7][2] + 8*D[7][4] + 4*D[8][1] - 4*D[8][5] + 4*D[8][9] - 4*D[9][6] + 4*D[9][8]; // s1 * s2
    f2coeff[4] = 8*D[2][2] - 8*D[3][3] - 8*D[4][4] + 8*D[6][6] + 8*D[7][7] - 8*D[8][8]; // s1 * s3
    f2coeff[5] = 4*D[1][4] - 4*D[1][2] - 4*D[2][1] + 4*D[2][5] - 4*D[2][9] - 8*D[3][6] - 8*D[3][8] + 4*D[4][1] - 4*D[4][5] + 4*D[4][9] + 4*D[5][2] - 4*D[5][4] - 8*D[6][3] + 8*D[6][7] + 8*D[7][6] + 8*D[7][8] - 8*D[8][3] + 8*D[8][7] - 4*D[9][2] + 4*D[9][4]; // s2 * s3
    f2coeff[6] = 6*D[5][6] - 6*D[1][8] - 6*D[1][6] + 6*D[5][8] - 6*D[6][1] + 6*D[6][5] - 6*D[6][9] - 6*D[8][1] + 6*D[8][5] - 6*D[8][9] - 6*D[9][6] - 6*D[9][8]; // s2^2 * s3
    f2coeff[7] = 4*D[1][1] - 4*D[1][5] + 4*D[1][9] - 4*D[5][1] + 4*D[5][5] - 4*D[5][9] + 4*D[9][1] - 4*D[9][5] + 4*D[9][9]; // s2^3
    f2coeff[8] = 2*D[2][9] - 2*D[1][4] - 2*D[2][1] - 2*D[2][5] - 2*D[1][2] + 4*D[3][6] + 4*D[3][8] - 2*D[4][1] - 2*D[4][5] + 2*D[4][9] - 2*D[5][2] - 2*D[5][4] + 4*D[6][3] + 4*D[6][7] + 4*D[7][6] + 4*D[7][8] + 4*D[8][3] + 4*D[8][7] + 2*D[9][2] + 2*D[9][4]; // s1 * s3^2
    f2coeff[9] = 2*D[1][2] + 2*D[1][4] + 2*D[2][1] + 2*D[2][5] + 2*D[2][9] - 4*D[3][6] + 4*D[3][8] + 2*D[4][1] + 2*D[4][5] + 2*D[4][9] + 2*D[5][2] + 2*D[5][4] - 4*D[6][3] + 4*D[6][7] + 4*D[7][6] - 4*D[7][8] + 4*D[8][3] - 4*D[8][7] + 2*D[9][2] + 2*D[9][4]; // s1
    f2coeff[10] = 2*D[1][6] + 2*D[1][8] - 4*D[2][3] + 4*D[2][7] - 4*D[3][2] + 4*D[3][4] + 4*D[4][3] - 4*D[4][7] + 2*D[5][6] + 2*D[5][8] + 2*D[6][1] + 2*D[6][5] + 2*D[6][9] + 4*D[7][2] - 4*D[7][4] + 2*D[8][1] + 2*D[8][5] + 2*D[8][9] + 2*D[9][6] + 2*D[9][8]; // s3
    f2coeff[11] = 8*D[3][3] - 4*D[1][9] - 4*D[1][1] - 8*D[3][7] + 4*D[5][5] - 8*D[7][3] + 8*D[7][7] - 4*D[9][1] - 4*D[9][9]; // s2
    f2coeff[12] = 4*D[1][1] - 4*D[5][5] + 4*D[5][9] + 8*D[6][6] + 8*D[6][8] + 8*D[8][6] + 8*D[8][8] + 4*D[9][5] - 4*D[9][9]; // s2 * s3^2
    f2coeff[13] = 2*D[1][7] - 2*D[1][3] + 4*D[2][6] - 4*D[2][8] - 2*D[3][1] + 2*D[3][5] + 2*D[3][9] + 4*D[4][6] - 4*D[4][8] + 2*D[5][3] - 2*D[5][7] + 4*D[6][2] + 4*D[6][4] + 2*D[7][1] - 2*D[7][5] - 2*D[7][9] - 4*D[8][2] - 4*D[8][4] + 2*D[9][3] - 2*D[9][7]; // s1^2
    f2coeff[14] = 2*D[1][3] - 2*D[1][7] + 4*D[2][6] + 4*D[2][8] + 2*D[3][1] + 2*D[3][5] - 2*D[3][9] - 4*D[4][6] - 4*D[4][8] + 2*D[5][3] - 2*D[5][7] + 4*D[6][2] - 4*D[6][4] - 2*D[7][1] - 2*D[7][5] + 2*D[7][9] + 4*D[8][2] - 4*D[8][4] - 2*D[9][3] + 2*D[9][7]; // s3^2
    f2coeff[15] = 6*D[1][3] - 6*D[1][7] + 6*D[3][1] - 6*D[3][5] + 6*D[3][9] - 6*D[5][3] + 6*D[5][7] - 6*D[7][1] + 6*D[7][5] - 6*D[7][9] + 6*D[9][3] - 6*D[9][7]; // s2^2
    f2coeff[16] = 2*D[6][9] - 2*D[1][8] - 2*D[5][6] - 2*D[5][8] - 2*D[6][1] - 2*D[6][5] - 2*D[1][6] - 2*D[8][1] - 2*D[8][5] + 2*D[8][9] + 2*D[9][6] + 2*D[9][8]; // s3^3
    f2coeff[17] = 8*D[2][6] - 4*D[1][7] - 4*D[1][3] + 8*D[2][8] - 4*D[3][1] + 4*D[3][5] - 4*D[3][9] + 8*D[4][6] + 8*D[4][8] + 4*D[5][3] + 4*D[5][7] + 8*D[6][2] + 8*D[6][4] - 4*D[7][1] + 4*D[7][5] - 4*D[7][9] + 8*D[8][2] + 8*D[8][4] - 4*D[9][3] - 4*D[9][7]; // s1 * s2 * s3
    f2coeff[18] = 6*D[2][5] - 6*D[1][4] - 6*D[2][1] - 6*D[1][2] - 6*D[2][9] - 6*D[4][1] + 6*D[4][5] - 6*D[4][9] + 6*D[5][2] + 6*D[5][4] - 6*D[9][2] - 6*D[9][4]; // s1 * s2^2
    f2coeff[19] = 2*D[1][6] + 2*D[1][8] + 4*D[2][3] + 4*D[2][7] + 4*D[3][2] + 4*D[3][4] + 4*D[4][3] + 4*D[4][7] - 2*D[5][6] - 2*D[5][8] + 2*D[6][1] - 2*D[6][5] - 2*D[6][9] + 4*D[7][2] + 4*D[7][4] + 2*D[8][1] - 2*D[8][5] - 2*D[8][9] - 2*D[9][6] - 2*D[9][8]; // s1^2 * s3
    f2coeff[20] = 2*D[1][2] + 2*D[1][4] + 2*D[2][1] - 2*D[2][5] - 2*D[2][9] + 2*D[4][1] - 2*D[4][5] - 2*D[4][9] - 2*D[5][2] - 2*D[5][4] - 2*D[9][2] - 2*D[9][4]; // s1^3
    
        if (new_width * new_cn != total_width)
        CV_Error(cv::Error::BadNumChannels, 'The total width is not divisible by the new number of channels');
    
    // GL type for 'half' precision (s10e5) float data in host memory
#ifndef GL_ARB_half_float_pixel
    typedef unsigned short GLhalfARB;
#endif
#ifndef GL_NV_half_float
    typedef unsigned short GLhalfNV;
#endif
    
    #undef cv_hal_gemm32f
#define cv_hal_gemm32f lapack_gemm32f
#undef cv_hal_gemm64f
#define cv_hal_gemm64f lapack_gemm64f
#undef cv_hal_gemm32fc
#define cv_hal_gemm32fc lapack_gemm32fc
#undef cv_hal_gemm64fc
#define cv_hal_gemm64fc lapack_gemm64fc
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdBlas.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
    // Prints the given value using the << operator if it has one;
// otherwise prints the bytes in it.  This is what
// UniversalPrinter<T>::Print() does when PrintTo() is not specialized
// or overloaded for type T.
//
// A user can override this behavior for a class type Foo by defining
// an overload of PrintTo() in the namespace where Foo is defined.  We
// give the user this option as sometimes defining a << operator for
// Foo is not desirable (e.g. the coding style may prevent doing it,
// or there is already a << operator but it doesn't do what the user
// wants).
template <typename T>
void PrintTo(const T& value, ::std::ostream* os) {
  // DefaultPrintTo() is overloaded.  The type of its first two
  // arguments determine which version will be picked.  If T is an
  // STL-style container, the version for container will be called; if
  // T is a pointer, the pointer version will be called; otherwise the
  // generic version will be called.
  //
  // Note that we check for container types here, prior to we check
  // for protocol message types in our operator<<.  The rationale is:
  //
  // For protocol messages, we want to give people a chance to
  // override Google Mock's format by defining a PrintTo() or
  // operator<<.  For STL containers, other formats can be
  // incompatible with Google Mock's format for the container
  // elements; therefore we check for container types here to ensure
  // that our format is used.
  //
  // The second argument of DefaultPrintTo() is needed to bypass a bug
  // in Symbian's C++ compiler that prevents it from picking the right
  // overload between:
  //
  //   PrintTo(const T& x, ...);
  //   PrintTo(T* x, ...);
  DefaultPrintTo(IsContainerTest<T>(0), is_pointer<T>(), value, os);
}
    
    // This helper class can be used to mock out Google Test failure reporting
// so that we can test Google Test or code that builds on Google Test.
//
// An object of this class appends a TestPartResult object to the
// TestPartResultArray object given in the constructor whenever a Google Test
// failure is reported. It can either intercept only failures that are
// generated in the same thread that created this object or it can intercept
// all generated failures. The scope of this mock object can be controlled with
// the second argument to the two arguments constructor.
class GTEST_API_ ScopedFakeTestPartResultReporter
    : public TestPartResultReporterInterface {
 public:
  // The two possible mocking modes of this object.
  enum InterceptMode {
    INTERCEPT_ONLY_CURRENT_THREAD,  // Intercepts only thread local failures.
    INTERCEPT_ALL_THREADS           // Intercepts all failures.
  };
    }
    
      // Adds a test property to the list. The property is validated and may add
  // a non-fatal failure if invalid (e.g., if it conflicts with reserved
  // key names). If a property is already recorded for the same key, the
  // value will be updated, rather than storing multiple values for the same
  // key.  xml_element specifies the element for which the property is being
  // recorded and is used for validation.
  void RecordProperty(const std::string& xml_element,
                      const TestProperty& test_property);
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED1.  Don't use
// this in your code.
#define GTEST_PRED1_(pred, v1, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred1Helper(#pred, \
                                             #v1, \
                                             pred, \
                                             v1), on_failure)
    
    int Water::allocated_ = 0;
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    // APPROXIMATIONS of the fractions of the character cell taken by
// the descenders, ascenders, and x-height.
const double CCStruct::kDescenderFraction = 0.25;
const double CCStruct::kXHeightFraction = 0.5;
const double CCStruct::kAscenderFraction = 0.25;
const double CCStruct::kXHeightCapRatio = CCStruct::kXHeightFraction /
    (CCStruct::kXHeightFraction + CCStruct::kAscenderFraction);
    
    namespace tesseract {
    }
    
    /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    
    {  void ReadLong(long* l) {
    size_t start = current_;
    while (current_ != db_.size() && db_[current_] != ',' && db_[current_] != '}') {
      current_++;
    }
    // It will throw an exception if fails.
    *l = std::stol(db_.substr(start, current_ - start));
  }
    
    template <class T, class F>
double sum(const T& container, F functor) {
  double r = 0;
  for (auto v = container.begin(); v != container.end(); v++) {
    r += functor(*v);
  }
  return r;
}
    
      // Create a QpsGauge with name 'name'. is_present is set to true if the Gauge
  // is already present in the map.
  // NOTE: CreateQpsGauge can be called anytime (i.e before or after calling
  // StartServer).
  std::shared_ptr<QpsGauge> CreateQpsGauge(const grpc::string& name,
                                           bool* already_present);
    
    #endif  // GRPC_TEST_CPP_UTIL_SUBPROCESS_H

    
    			/* is this a mandated initial header? If not, stop parsing */
			if (!ogg_page_bos(&og)) {
				/* don't leak the page; get it into the appropriate stream */
				queue_page(&og);
				stateflag = 1;
				break;
			}
    
    	virtual void disconnect_from_stream() = 0;
    
    	// init lws client
	struct lws_context_creation_info info;
	struct lws_client_connect_info i;
    
    	friend class PlaceHolderScriptInstance;
	virtual void _placeholder_erased(PlaceHolderScriptInstance *p_placeholder) {}
    
    
    {	return m_skidInfo;
}
    
    /// Returns the list of contacts pairs in this order: Local contact, other body contact
struct GodotContactPairContactResultCallback : public btCollisionWorld::ContactResultCallback {
public:
	const btCollisionObject *m_self_object;
	Vector3 *m_results;
	int m_resultMax;
	int m_count;
	const Set<RID> *m_exclude;
    }
    
    	updating_graph = true;
    
    
    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsShape_getRestitution'', nullptr);
            return 0;
        }
        double ret = cobj->getRestitution();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.PhysicsShape:getRestitution',argc, 0);
    return 0;
    
    struct TestEntry
{
	const char *name;
	TestCreateFcn *createFcn;
};
    
    
    {	b2Body* m_middle;
};
    
    		if (b2_gjkCalls > 0)
		{
			m_debugDraw.DrawString(5, m_textLine, 'gjk calls = %d, ave gjk iters = %3.1f, max gjk iters = %d',
				b2_gjkCalls, b2_gjkIters / float32(b2_gjkCalls), b2_gjkMaxIters);
			m_textLine += DRAW_STRING_NEW_LINE;
		}
    
      EXPECT_CALL(transport, writeChain(_, BufMatches(buf.get()), _));
    
    namespace detail {
    }
    
      /*
   * Returns a new TDigest constructed with values merged from the current
   * digest and the given sortedValues.
   */
  TDigest merge(Range<const double*> sortedValues) const;
    
    using namespace folly;
    
      fs::path filePath(const fs::path& relpath) const {
    return mountPoint / relpath;
  }
    
        if (numDiscarded > 0) {
      auto msg = getNumDiscardedMsg(numDiscarded);
      if (!msg.empty()) {
        auto ret = folly::writeFull(file_.fd(), msg.data(), msg.size());
        // We currently ignore errors from writeFull() here.
        // There's not much we can really do.
        (void)ret;
      }
    }
    
    class InputCorpus {
 public:
  static const size_t kFeatureSetSize = 1 << 16;
  InputCorpus(const std::string &OutputCorpus) : OutputCorpus(OutputCorpus) {
    memset(InputSizesPerFeature, 0, sizeof(InputSizesPerFeature));
    memset(SmallestElementPerFeature, 0, sizeof(SmallestElementPerFeature));
  }
  ~InputCorpus() {
    for (auto II : Inputs)
      delete II;
  }
  size_t size() const { return Inputs.size(); }
  size_t SizeInBytes() const {
    size_t Res = 0;
    for (auto II : Inputs)
      Res += II->U.size();
    return Res;
  }
  size_t NumActiveUnits() const {
    size_t Res = 0;
    for (auto II : Inputs)
      Res += !II->U.empty();
    return Res;
  }
  bool empty() const { return Inputs.empty(); }
  const Unit &operator[] (size_t Idx) const { return Inputs[Idx]->U; }
  void AddToCorpus(const Unit &U, size_t NumFeatures, bool MayDeleteFile = false) {
    assert(!U.empty());
    uint8_t Hash[kSHA1NumBytes];
    if (FeatureDebug)
      Printf('ADD_TO_CORPUS %zd NF %zd\n', Inputs.size(), NumFeatures);
    ComputeSHA1(U.data(), U.size(), Hash);
    Hashes.insert(Sha1ToString(Hash));
    Inputs.push_back(new InputInfo());
    InputInfo &II = *Inputs.back();
    II.U = U;
    II.NumFeatures = NumFeatures;
    II.MayDeleteFile = MayDeleteFile;
    memcpy(II.Sha1, Hash, kSHA1NumBytes);
    UpdateCorpusDistribution();
    ValidateFeatureSet();
  }
    }
    
    #endif // LIBFUZZER_APPLE

    
    #endif // LIBFUZZER_LINUX

    
    // Platform specific functions:
bool IsFile(const std::string &Path);
    
    #ifndef LLVM_FUZZER_MERGE_H
#define LLVM_FUZZER_MERGE_H
    
    // Private copy of SHA1 implementation.
static const int kSHA1NumBytes = 20;
    
    void PrintHexArray(const Unit &U, const char *PrintAfter = '');