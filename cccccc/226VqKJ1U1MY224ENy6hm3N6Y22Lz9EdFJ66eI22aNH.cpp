
        
        Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
      // These two overloads allow streaming a wide C string to a Message
  // using the UTF-8 encoding.
  Message& operator <<(const wchar_t* wide_c_str);
  Message& operator <<(wchar_t* wide_c_str);
    
    #include <iosfwd>
#include <vector>
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-string.h'
    
    // First, define a fixture class template.  It should be parameterized
// by a type.  Remember to derive it from testing::Test.
template <typename T>
class FooTest : public testing::Test {
  ...
};
    
    // Generates a nonfatal failure at the given source file location with
// a generic message.
#define ADD_FAILURE_AT(file, line) \
  GTEST_MESSAGE_AT_(file, line, 'Failed', \
                    ::testing::TestPartResult::kNonFatalFailure)
    
      CartesianProductGenerator5(const ParamGenerator<T1>& g1,
      const ParamGenerator<T2>& g2, const ParamGenerator<T3>& g3,
      const ParamGenerator<T4>& g4, const ParamGenerator<T5>& g5)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5) {}
  virtual ~CartesianProductGenerator5() {}
    
    #if GTEST_HAS_GLOBAL_WSTRING
typedef ::wstring wstring;
#elif GTEST_HAS_STD_WSTRING
typedef ::std::wstring wstring;
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
    // Returns true iff n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;
    }
    
      bool check_for_leaks = false;
  if (argc > 1 && strcmp(argv[1], '--check_for_leaks') == 0 )
    check_for_leaks = true;
  else
    printf('%s\n', 'Run this program with --check_for_leaks to enable '
           'custom leak checking in the tests.');
    
    #include 'power_iphone.h'
    
    public:
	virtual void poll();
	virtual Error accept_stream(Ref<StreamPeer> p_base);
	virtual Error connect_to_stream(Ref<StreamPeer> p_base, bool p_validate_certs = false, const String &p_for_hostname = String());
	virtual Status get_status() const;
    
    
    {	return connect_to_host(host, path, port, ssl, p_protocols);
}
    
    
    {  p[0] = static_cast<jpgd_block_t>(s << pD->m_successive_low);
}
    
    /*Some specific platforms may have optimized intrinsic or inline assembly
   versions of these functions which can substantially improve performance.
  We define macros for them to allow easy incorporation of these non-ANSI
   features.*/
    
      const timespec& getStartTimer() const;
  int getTimeoutSeconds() const;
    
    
    {  return setCouldHaveSideEffects(locRaw(env, loc));
}
    
    bool mustBeArrLike(const Type& ty) {
  return ty.subtypeOf(BArr | BVec | BDict | BKeyset);
}
    
      // Non-simple types (ones that are represented by pointers) can always
  // possibly be null.
  if (t.subtypeOfAny(TStr, TArr, TVec, TDict,
                     TKeyset, TObj, TRes)) {
    t |= TInitNull;
  } else {
    // Otherwise it should be a simple type or possibly everything.
    assert(t == TInitCell || t.subtypeOfAny(TBool, TInt, TDbl, TNull));
  }
    
    Type typeAddO(Type t1, Type t2) {
  if (auto t = eval_const(t1, t2, cellAddO))          return *t;
  if (t1.subtypeOf(BInt) && t2.subtypeOf(BInt))       return TNum;
  if (auto t = usual_arith_conversions(t1, t2))       return *t;
  if (t1.subtypeOf(BArr) && t2.subtypeOf(BArr))       return TArr;
  if (t1.subtypeOf(BVec) && t2.subtypeOf(BVec))       return TVec;
  if (t1.subtypeOf(BDict) && t2.subtypeOf(BDict))     return TDict;
  if (t1.subtypeOf(BKeyset) && t2.subtypeOf(BKeyset)) return TKeyset;
  return TInitCell;
}
    
    
    {  // session backup/restore for RPCRequestHandler
  Array m_shutdownsBackup;
  req::vector<std::pair<Variant,int>> m_userErrorHandlersBackup;
  req::vector<Variant> m_userExceptionHandlersBackup;
  Variant m_exitCallback;
  String m_sandboxId; // cache the sandbox id for the request
  int m_pageletTasksStarted;
  const VirtualHost* m_vhost;
public:
  DebuggerSettings debuggerSettings;
  req::vector_set<ObjectData*> m_liveBCObjs; // objects with destructors
private:
  size_t m_apcMemSize{0};
  std::vector<APCHandle*> m_apcHandles; // gets moved to treadmill
public:
  // Although the error handlers may want to access dynamic properties,
  // we cannot *call* the error handlers (or their destructors) while
  // destroying the context, so C++ order of destruction is not an issue.
  req::fast_map<const ObjectData*,ArrayNoDtor> dynPropTable;
  TYPE_SCAN_IGNORE_FIELD(dynPropTable);
  VarEnv* m_globalVarEnv;
  struct FileInfo {
    Unit* unit;
    time_t ts_sec; // timestamp seconds
    unsigned long ts_nsec; // timestamp nanoseconds (or 0 if ns not supported)
  };
  req::hash_map<const StringData*, FileInfo, string_data_hash, string_data_same>
    m_evaledFiles;
  req::vector<const StringData*> m_evaledFilesOrder;
  req::vector<Unit*> m_createdFuncs;
  req::vector<Fault> m_faults;
  int m_lambdaCounter;
  using VMStateVec = req::TinyVector<VMState, 32>;
  VMStateVec m_nestedVMs;
  TYPE_SCAN_IGNORE_FIELD(m_nestedVMs); // handled explicitly in heap-scan.h
  int m_nesting;
  bool m_dbgNoBreak;
  bool m_unwindingCppException;
private:
  Array m_evaledArgs;
  String m_lastErrorPath;
  int m_lastErrorLine;
public:
  Variant m_setprofileCallback;
  Variant m_memThresholdCallback;
  uint64_t m_setprofileFlags;
  bool m_executingSetprofileCallback;
public:
  Cell m_headerCallback;
  bool m_headerCallbackDone{false}; // used to prevent infinite loops
private:
  ExcLoggerHook m_logger_hook;
};
    
    /*! \brief data type accepted by xgboost interface */
enum DataType {
  kFloat32 = 1,
  kDouble = 2,
  kUInt32 = 3,
  kUInt64 = 4
};
    
    SparsePageSource::SparsePageSource(const std::string& cache_info)
    : base_rowid_(0), page_(nullptr), clock_ptr_(0) {
  // read in the info files
  std::vector<std::string> cache_shards = common::Split(cache_info, ':');
  CHECK_NE(cache_shards.size(), 0U);
  {
    std::string name_info = cache_shards[0];
    std::unique_ptr<dmlc::Stream> finfo(dmlc::Stream::Create(name_info.c_str(), 'r'));
    int tmagic;
    CHECK_EQ(finfo->Read(&tmagic, sizeof(tmagic)), sizeof(tmagic));
    this->info.LoadBinary(finfo.get());
  }
  files_.resize(cache_shards.size());
  formats_.resize(cache_shards.size());
  prefetchers_.resize(cache_shards.size());
    }
    
    using LogCallbackRegistryStore = dmlc::ThreadLocalStore<LogCallbackRegistry>;
    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;
    }
    
    
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    // This class implements debug drawing callbacks that are invoked
// inside b2World::Step.
class GLESDebugDraw : public b2Draw
{
    float32 mRatio;
    cocos2d::GLProgram* mShaderProgram;
    GLint        mColorLocation;
    }
    
    
    {	b2Vec2 viewCenter;
	float32 hz;
	int32 velocityIterations;
	int32 positionIterations;
	int32 drawShapes;
	int32 drawJoints;
	int32 drawAABBs;
	int32 drawContactPoints;
	int32 drawContactNormals;
	int32 drawContactImpulse;
	int32 drawFrictionImpulse;
	int32 drawCOMs;
	int32 drawStats;
	int32 drawProfile;
	int32 enableWarmStarting;
	int32 enableContinuous;
	int32 enableSubStepping;
	int32 enableSleep;
	int32 pause;
	int32 singleStep;
};
    
    		body1->SetAngularVelocity(m_angularVelocity);
		body1->SetLinearVelocity(velocity1);
    
    #endif

    
    #include 'Common.h'
#include 'References.h'
    
    /**
 * Symbolicates a stack trace into a given vector
 *
 * @param symbols The vector to receive the output. The vector is cleared and
 * enough room to keep the frames are reserved.
 *
 * @param stackTrace The input stack trace
 */
FBEXPORT void getStackTraceSymbols(std::vector<StackTraceElement>& symbols,
                                   const std::vector<InstructionPointer>& trace);
    
      YGNodeCalculateLayout(root, 200, 100, YGDirectionLTR);
    
        Node * getParent(void);
    Node * getChild(unsigned index);
    
        method(getAlignContent);
    method(getAlignItems);
    method(getAlignSelf);
    method(getFlexDirection);
    method(getFlexWrap);
    method(getJustifyContent);
    
    template<typename... ARGS>
inline void logv(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_VERBOSE, tag, msg, args...);
}
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }
    
    #ifndef FBASSERT_H
#define FBASSERT_H