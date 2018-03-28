
        
        void leveldb_delete(
    leveldb_t* db,
    const leveldb_writeoptions_t* options,
    const char* key, size_t keylen,
    char** errptr) {
  SaveError(errptr, db->rep->Delete(options->rep, Slice(key, keylen)));
}
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    const char* InternalKeyComparator::Name() const {
  return 'leveldb.InternalKeyComparator';
}
    
    static void TestKey(const std::string& key,
                    uint64_t seq,
                    ValueType vt) {
  std::string encoded = IKey(key, seq, vt);
    }
    
    namespace leveldb {
    }
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
      // If *start < limit, changes *start to a short string in [start,limit).
  // Simple comparator implementations may return with *start unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortestSeparator(
      std::string* start,
      const Slice& limit) const = 0;
    
      // Drop the first 'n' bytes from this slice.
  void remove_prefix(size_t n) {
    assert(n <= size());
    data_ += n;
    size_ -= n;
  }
    
    
// //////////////////////////////////////////////////////////////////////
// Beginning of content of file: include/json/value.h
// //////////////////////////////////////////////////////////////////////
    
        // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    class MapFieldGenerator : public FieldGeneratorBase {
 public:
  MapFieldGenerator(const FieldDescriptor* descriptor,
                    int fieldOrdinal,
                    const Options* options);
  ~MapFieldGenerator();
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    #include 'test/cpp/qps/report.h'
    
    /* Opaque object representing a Bidirectional stream creating engine. Created
 * and configured outside of this API to facilitate sharing with other
 * components */
typedef struct stream_engine {
  void* obj;
  void* annotation;
} stream_engine;
    
    #include 'test/core/util/test_config.h'
#include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    #include <signal.h>
    
    #include <utility>
    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
      NSDictionary *flagNames = @{
#define GRPC_XMACRO_ITEM(methodName, FlagName) \
    @(kSCNetworkReachabilityFlags ## FlagName): @#methodName,
#include 'GRXReachabilityFlagNames.xmacro.h'
#undef GRPC_XMACRO_ITEM
  };
    
    
    {  return 0;
}

    
      InstructionPointer libraryBase() const noexcept { return libraryBase_; }
    
        method(setWidth);
    method(setWidthPercent);
    method(setWidthAuto);
    method(setHeight);
    method(setHeightPercent);
    method(setHeightAuto);
    
      // The STL assumes rvalue references are unique and for simplicity's sake, we
  // make the same assumption here, that &ref != this.
  RefPtr<T>& operator=(RefPtr<T>&& ref) {
    unrefIfNecessary(m_ptr);
    m_ptr = ref.m_ptr;
    ref.m_ptr = nullptr;
    return *this;
  }
    
    using namespace fuzzer;
    
    #include 'FuzzerExtFunctions.def'
    
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
    
    template <class T>
ATTRIBUTE_TARGET_POPCNT
#ifdef __clang__  // g++ can't handle this __attribute__ here :(
__attribute__((always_inline))
#endif  // __clang__
void TracePC::HandleCmp(void *PC, T Arg1, T Arg2) {
  uintptr_t PCuint = reinterpret_cast<uintptr_t>(PC);
  uint64_t ArgXor = Arg1 ^ Arg2;
  uint64_t ArgDistance = __builtin_popcountl(ArgXor) + 1; // [1,65]
  uintptr_t Idx = ((PCuint & 4095) + 1) * ArgDistance;
  if (sizeof(T) == 4)
      TORC4.Insert(ArgXor, Arg1, Arg2);
  else if (sizeof(T) == 8)
      TORC8.Insert(ArgXor, Arg1, Arg2);
  HandleValueProfile(Idx);
}
    
      void PrintNewPCs();
  size_t GetNumPCs() const { return Min(kNumPCs, NumGuards + 1); }
  uintptr_t GetPC(size_t Idx) {
    assert(Idx < GetNumPCs());
    return PCs[Idx];
  }