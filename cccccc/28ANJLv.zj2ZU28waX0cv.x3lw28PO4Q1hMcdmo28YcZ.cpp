
        
        /*! \internal Default constructor initialization must be equivalent to:
 * memset( this, 0, sizeof(Value) )
 * This optimization is used in ValueInternalMap fast allocator.
 */
Value::Value(ValueType vtype) {
  initBasic(vtype);
  switch (vtype) {
  case nullValue:
    break;
  case intValue:
  case uintValue:
    value_.int_ = 0;
    break;
  case realValue:
    value_.real_ = 0.0;
    break;
  case stringValue:
    value_.string_ = 0;
    break;
  case arrayValue:
  case objectValue:
    value_.map_ = new ObjectValues();
    break;
  case booleanValue:
    value_.bool_ = false;
    break;
  default:
    JSON_ASSERT_UNREACHABLE;
  }
}
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
    
    class RepeatedMessageFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedMessageFieldGenerator(const FieldDescriptor* descriptor,
                                int fieldOrdinal,
                                const Options *options);
  ~RepeatedMessageFieldGenerator();
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/wire_format.h>
    
      virtual MessageGenerator* NewMessageGenerator(
      const Descriptor* descriptor) const;
    
      // Gets the time of the test program start, in ms from the start of the
  // UNIX epoch.
  TimeInMillis start_timestamp() const;
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2;
}
    
      // Creates directories so that path exists. Returns true if successful or if
  // the directories already exist; returns false if unable to create
  // directories for any reason. Will also return false if the FilePath does
  // not represent a directory (that is, it doesn't end with a path separator).
  bool CreateDirectoriesRecursively() const;
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_)};
    return ValuesIn(array);
  }
    
    // The compiler used in Symbian has a bug that prevents us from declaring the
// tuple template as a friend (it complains that tuple is redefined).  This
// hack bypasses the bug by declaring the members that should otherwise be
// private as public.
// Sun Studio versions < 12 also have the above bug.
#if defined(__SYMBIAN32__) || (defined(__SUNPRO_CC) && __SUNPRO_CC < 0x590)
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ public:
#else
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ \
    template <GTEST_10_TYPENAMES_(U)> friend class tuple; \
   private:
#endif
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
    extern JSClass  *jsb_cocostudio_timeline_ActionTimelineData_class;
extern JSObject *jsb_cocostudio_timeline_ActionTimelineData_prototype;
    
    
    
    
    
    
    
    				b2FrictionJointDef jd;
				jd.localAnchorA.SetZero();
				jd.localAnchorB.SetZero();
				jd.bodyA = ground;
				jd.bodyB = body;
				jd.collideConnected = true;
				jd.maxForce = mass * gravity;
				jd.maxTorque = mass * radius * gravity;
    
    		for (int32 i = 0; i < 2; ++i)
		{
			b2Vec2 vertices[3];
			vertices[0].Set(-0.5f, 0.0f);
			vertices[1].Set(0.5f, 0.0f);
			vertices[2].Set(0.0f, 1.5f);
    }
    
    		// Boxes
		{
			b2PolygonShape box;
			box.SetAsBox(0.5f, 0.5f);
    }
    
    #endif

    
    private:
  void AlarmCallback();
  void CrashCallback();
  void InterruptCallback();
  void MutateAndTestOne();
  void ReportNewCoverage(InputInfo *II, const Unit &U);
  size_t RunOne(const Unit &U) { return RunOne(U.data(), U.size()); }
  void WriteToOutputCorpus(const Unit &U);
  void WriteUnitToFileWithPrefix(const Unit &U, const char *Prefix);
  void PrintStats(const char *Where, const char *End = '\n', size_t Units = 0);
  void PrintStatusForNewUnit(const Unit &U);
  void ShuffleCorpus(UnitVector *V);
  void AddToCorpus(const Unit &U);
  void CheckExitOnSrcPosOrItem();
    
    // Leak detection is expensive, so we first check if there were more mallocs
// than frees (using the sanitizer malloc hooks) and only then try to call lsan.
struct MallocFreeTracer {
  void Start(int TraceLevel) {
    this->TraceLevel = TraceLevel;
    if (TraceLevel)
      Printf('MallocFreeTracer: START\n');
    Mallocs = 0;
    Frees = 0;
  }
  // Returns true if there were more mallocs than frees.
  bool Stop() {
    if (TraceLevel)
      Printf('MallocFreeTracer: STOP %zd %zd (%s)\n', Mallocs.load(),
             Frees.load(), Mallocs == Frees ? 'same' : 'DIFFERENT');
    bool Result = Mallocs > Frees;
    Mallocs = 0;
    Frees = 0;
    TraceLevel = 0;
    return Result;
  }
  std::atomic<size_t> Mallocs;
  std::atomic<size_t> Frees;
  int TraceLevel = 0;
};
    
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
    
    void sha1_init(sha1nfo *s) {
	s->state[0] = 0x67452301;
	s->state[1] = 0xefcdab89;
	s->state[2] = 0x98badcfe;
	s->state[3] = 0x10325476;
	s->state[4] = 0xc3d2e1f0;
	s->byteCount = 0;
	s->bufferOffset = 0;
}
    
    void SleepSeconds(int Seconds);