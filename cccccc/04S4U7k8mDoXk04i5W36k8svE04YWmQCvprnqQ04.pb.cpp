
        
        bool Reader::decodeNumber(Token& token) {
  Value decoded;
  if (!decodeNumber(token, decoded))
    return false;
  currentValue().swapPayload(decoded);
  currentValue().setOffsetStart(token.start_ - begin_);
  currentValue().setOffsetLimit(token.end_ - begin_);
  return true;
}
    
    namespace message_descriptor {
PyObject* NewMessageFieldsByName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByCamelcaseName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByNumber(const Descriptor* descriptor);
PyObject* NewMessageFieldsSeq(const Descriptor* descriptor);
    }
    
    // This file defines a C++ DescriptorDatabase, which wraps a Python Database
// and delegate all its operations to Python methods.
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_REFLECTION_CLASS_H__

    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
    
    {  printer->Print(variables_,
    '$deprecation$public $type$ get$capitalized_name$() {\n'
    '  return ($type$) $name$_.getValue($type$.getDefaultInstance());\n'
    '}\n');
  WriteFieldDocComment(printer, descriptor_);
  printer->Print(variables_,
    '$deprecation$public $type$OrBuilder get$capitalized_name$OrBuilder() {\n'
    '  return $name$_;\n'
    '}\n');
}
    
    
    {  #ifndef NDEBUG
  if (!next)
    NULL_NEXT.error ('ELIST_ITERATOR::forward', ABORT,
                     'This is: %p  Current is: %p', this, current);
  #endif
  return current;
}
    
      // Returns true of this is a 2-d lstm.
  bool Is2D() const {
    return is_2d_;
  }
    
    /**
 * Get the given level kind of components (block, textline, word etc.) as a
 * leptonica-style Boxa, Pixa pair, in reading order.
 * Can be called before or after Recognize.
 * If blockids is not nullptr, the block-id of each component is also returned
 * as an array of one element per component. delete [] after use.
 * If text_only is true, then only text components are returned.
 */
Boxa* TessBaseAPI::GetComponentImages(PageIteratorLevel level,
                                      bool text_only, bool raw_image,
                                      const int raw_padding,
                                      Pixa** pixa, int** blockids,
                                      int** paraids) {
  PageIterator* page_it = GetIterator();
  if (page_it == nullptr)
    page_it = AnalyseLayout();
  if (page_it == nullptr)
    return nullptr;  // Failed.
    }
    
      /**
   * Find lines from the image making the BLOCK_LIST.
   * @return 0 on success.
   */
  TESS_LOCAL int FindLines();
    
    namespace tesseract {
    }
    
    // Number of outputs held in each register. 8 x 32 bit ints.
constexpr int kNumOutputsPerRegister = 8;
// Maximum number of registers that we will use.
constexpr int kMaxOutputRegisters = 8;
// Number of inputs in the inputs register.
constexpr int kNumInputsPerRegister = 32;
// Number of inputs in each weight group.
constexpr int kNumInputsPerGroup = 4;
// Number of groups of inputs to be broadcast.
constexpr int kNumInputGroups = kNumInputsPerRegister / kNumInputsPerGroup;
    
    #ifdef __SSE4_1__
// Computes part of matrix.vector v = Wu. Computes 1 result.
static void PartialMatrixDotVector1(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  int total = IntDotProductSSE(u, wi, num_in);
  // Add in the bias and correct for integer values.
  *v = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * *scales;
}
#endif  // __SSE4_1__
    
    
    {  int64_t measure() const;
};
    
    
    {  v << vcall{
    CallSpec::direct(pthread_getspecific),
    v.makeVcallArgs({{v.cns(datum.tls->m_key)}}),
    v.makeTuple({d}),
    Fixup{},
    DestType::SSA
  };
}
    
    /*
 * Assert that Vreg widths match between defs and uses.
 *
 * This should only be run before any zero-extending or truncating copies get
 * reduced to regular copies---so, before simplify() or the various lowering
 * passes.
 */
bool checkWidths(Vunit& unit);
    
    #include 'hphp/runtime/ext/extension.h'
#include 'hphp/util/type-scan.h'
#include <curl/curl.h>
    
    private:
  // The function being inlined into.
  const Func* const m_topFunc;
    
      /**
   * @brief Return the publisher registry name given a type.
   *
   * Subscriber initialization and runtime static callbacks can lookup the
   * publisher type name, which is the registry plugin name. This allows static
   * callbacks to fire into subscribers.
   */
  template <class PUB>
  static const std::string getType() {
    auto pub = std::make_shared<PUB>();
    return pub->type();
  }
    
      // Only stop if there are no connected daemons.
  lck_mtx_lock(osquery.mtx);
  if (osquery.open_count > 0) {
    lck_mtx_unlock(osquery.mtx);
    return KERN_FAILURE;
  }
    
    #include <gtest/gtest.h>
    
      std::vector<std::string> conf_files;
  resolveFilePattern(FLAGS_config_path + '.d/%.conf', conf_files);
  std::sort(conf_files.begin(), conf_files.end());
  conf_files.push_back(FLAGS_config_path);
    
    #include 'osquery/core/utils.h'
    
    
    {TEST_F(StatusTests, test_to_string) {
  auto s = Status(0, 'foobar');
  EXPECT_EQ(s.toString(), 'foobar');
}
}

    
    
    {  EXPECT_EQ(expected, toAsciiTime(&result));
}
    
      /// The state machine is starting, and is forking a managed extension.
  MOCK_METHOD1(createExtension, void(const std::string& extension));
    
    namespace osquery {
    }
    
    
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect'', nullptr);
        return 0;
    }
#endif
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    void GLESDebugDraw::DrawString(int x, int y, const char *string, ...)
{
//    NSLog(@'DrawString: unsupported: %s', string);
    //printf(string);
    /* Unsupported as yet. Could replace with bitmap font renderer at a later date */
}
    
        virtual void DrawPolygon(const b2Vec2* vertices, int vertexCount, const b2Color& color);
    
    	Breakable()
	{
		// Ground body
		{
			b2BodyDef bd;
			b2Body* ground = m_world->CreateBody(&bd);
    }
    }
    
    			b2Body* prevBody = ground;
			for (int32 i = 0; i < e_count; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position.Set(-14.5f + 1.0f * i, 5.0f);
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&fd);
    }
    
    		{
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(0.0f, 4.0f);
    }
    
    				b2Vec2 anchor(-15.0f + 2.0f * i, 15.0f);
				jd.Initialize(prevBody, body, anchor);
				m_world->CreateJoint(&jd);
    
    // Reads the Start of Frame (SOF) marker segment and fills in *jpg with the
// parsed data.
bool ProcessSOF(const uint8_t* data, const size_t len,
                JpegReadMode mode, size_t* pos, JPEGData* jpg) {
  if (jpg->width != 0) {
    fprintf(stderr, 'Duplicate SOF marker.\n');
    jpg->error = JPEG_DUPLICATE_SOF;
    return false;
  }
  const size_t start_pos = *pos;
  VERIFY_LEN(8);
  size_t marker_len = ReadUint16(data, pos);
  int precision = ReadUint8(data, pos);
  int height = ReadUint16(data, pos);
  int width = ReadUint16(data, pos);
  int num_components = ReadUint8(data, pos);
  VERIFY_INPUT(precision, 8, 8, PRECISION);
  VERIFY_INPUT(height, 1, 65535, HEIGHT);
  VERIFY_INPUT(width, 1, 65535, WIDTH);
  VERIFY_INPUT(num_components, 1, kMaxComponents, NUMCOMP);
  VERIFY_LEN(3 * num_components);
  jpg->height = height;
  jpg->width = width;
  jpg->components.resize(num_components);
    }
    
    
    {  // Returns a heuristic cutoff on block errors in the sense that we won't
  // consider distortions where a block error is greater than this.
  virtual float BlockErrorLimit() const = 0;
  // Given the search direction (+1 for upwards and -1 for downwards) and the
  // current distance map, fills in *block_weight image with the relative block
  // error adjustment weights.
  // The target_mul param has the same semantics as in DistanceOK().
  // Note that this is essentially a static function in the sense that it does
  // not depend on the last Compare() call.
  virtual void ComputeBlockErrorAdjustmentWeights(
      int direction, int max_block_dist, double target_mul, int factor_x,
      int factor_y, const std::vector<float>& distmap,
      std::vector<float>* block_weight) = 0;
};
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    // Integer implementation of the Inverse Discrete Cosine Transform (IDCT).
    
      // Make a local copy of the input bit length histogram.
  int count[kJpegHuffmanMaxBitLength + 1] = { 0 };
  int total_count = 0;
  for (len = 1; len <= kJpegHuffmanMaxBitLength; ++len) {
    count[len] = count_in[len];
    total_count += count[len];
  }
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    #include <folly/io/async/AsyncTransport.h>
#include <folly/io/async/WriteChainAsyncTransportWrapper.h>
#include <folly/portability/GMock.h>
#include <folly/portability/GTest.h>
    
      Appender app(head.get(), 10);
  auto cap = head->capacity();
  auto len1 = app.length();
  EXPECT_EQ(cap - 5, len1);
  app.ensure(len1);  // won't grow
  EXPECT_EQ(len1, app.length());
  app.ensure(len1 + 1);  // will grow
  EXPECT_LE(len1 + 1, app.length());
    
      // Clone one of the IOBufs in the chain
  unique_ptr<IOBuf> iob4clone = iob4ptr->cloneOne();
  gen.seed(fillSeed);
  checkBuf(iob1.get(), gen);
  checkBuf(iob2ptr, gen);
  checkBuf(iob3ptr, gen);
  checkBuf(iob4clone.get(), gen);
  checkBuf(iob5ptr, gen);
    
    namespace folly {
    }
    
    template <>
FutexResult Futex<EmulatedFutexAtomic>::futexWaitImpl(
    uint32_t expected,
    system_clock::time_point const* absSystemTime,
    steady_clock::time_point const* absSteadyTime,
    uint32_t waitMask) {
  return emulatedFutexWaitImpl(
      this, expected, absSystemTime, absSteadyTime, waitMask);
}
    
    
/// MockClock is a bit tricky because we are mocking a static function
/// (now()), so we need to find the corresponding mock instance without
/// extending its scope beyond that of the test.  I generally avoid
/// shared_ptr, but a weak_ptr is just the ticket here
struct MockClock {
  using duration = std::chrono::steady_clock::duration;
  using time_point = std::chrono::time_point<MockClock, duration>;
    }
    
    size_t qfind_first_byte_of_sse42(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  if (UNLIKELY(needles.empty() || haystack.empty())) {
    return std::string::npos;
  } else if (needles.size() <= 16) {
    // we can save some unnecessary load instructions by optimizing for
    // the common case of needles.size() <= 16
    return qfind_first_byte_of_needles16(haystack, needles);
  }
    }
    
    #include <folly/CPortability.h>
#include <folly/ScopeGuard.h>
#include <folly/dynamic.h>
    
    //
//  testspy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
    
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #define DEFINE_HAS_MEMBER(member_name) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <int> struct tester;\
        template <typename U> static yes_type test(tester<sizeof(&U::member_name)>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
    
/*
 * scop_jenv.cpp
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
    
    
/*
 * scop_jenv.h
 *
 *  Created on: 2012-8-21
 *      Author: yanguoyue
 */
    
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
    
      bool operator==(const FixedWord<kMaxSize> &w) const {
    return Size == w.Size && 0 == memcmp(Data, w.Data, Size);
  }
    
    std::string DirPlusFile(const std::string &DirPath,
                        const std::string &FileName) {
  return DirPath + GetSeparator() + FileName;
}
    
    std::string DirName(const std::string &FileName) {
  char *Tmp = new char[FileName.size() + 1];
  memcpy(Tmp, FileName.c_str(), FileName.size() + 1);
  std::string Res = dirname(Tmp);
  delete [] Tmp;
  return Res;
}
    
    
    {} // namespace fuzzer

    
    struct FuzzingOptions {
  int Verbosity = 1;
  size_t MaxLen = 0;
  int UnitTimeoutSec = 300;
  int TimeoutExitCode = 77;
  int ErrorExitCode = 77;
  int MaxTotalTimeSec = 0;
  int RssLimitMb = 0;
  bool DoCrossOver = true;
  int MutateDepth = 5;
  bool UseCounters = false;
  bool UseIndirCalls = true;
  bool UseMemcmp = true;
  bool UseMemmem = true;
  bool UseCmp = false;
  bool UseValueProfile = false;
  bool Shrink = false;
  int ReloadIntervalSec = 1;
  bool ShuffleAtStartUp = true;
  bool PreferSmall = true;
  size_t MaxNumberOfRuns = -1L;
  int ReportSlowUnits = 10;
  bool OnlyASCII = false;
  std::string OutputCorpus;
  std::string ArtifactPrefix = './';
  std::string ExactArtifactPath;
  std::string ExitOnSrcPos;
  std::string ExitOnItem;
  bool SaveArtifacts = true;
  bool PrintNEW = true; // Print a status line when new units are found;
  bool OutputCSV = false;
  bool PrintNewCovPcs = false;
  bool PrintFinalStats = false;
  bool PrintCorpusStats = false;
  bool PrintCoverage = false;
  bool DumpCoverage = false;
  bool DetectLeaks = true;
  int  TraceMalloc = 0;
  bool HandleAbrt = false;
  bool HandleBus = false;
  bool HandleFpe = false;
  bool HandleIll = false;
  bool HandleInt = false;
  bool HandleSegv = false;
  bool HandleTerm = false;
};
    
    extern 'C' {
__attribute__((visibility('default')))
void __sanitizer_cov_trace_pc_guard(uint32_t *Guard) {
  uintptr_t PC = (uintptr_t)__builtin_return_address(0);
  fuzzer::TPC.HandleTrace(Guard, PC);
}
    }