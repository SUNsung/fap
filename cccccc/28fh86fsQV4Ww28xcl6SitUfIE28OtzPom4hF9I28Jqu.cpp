
        
        public:
  /** \brief Serialize a Value in <a HREF='http://www.json.org'>JSON</a> format.
   * \param out Stream to write to. (Can be ostringstream, e.g.)
   * \param root Value to serialize.
   * \note There is no point in deriving from Writer, since write() should not
   * return a value.
   */
  void write(std::ostream& out, const Value& root);
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* generator_context,
                string* error) const;
    
    class EnumGenerator : public SourceGeneratorBase {
 public:
  EnumGenerator(const EnumDescriptor* descriptor, const Options* options);
  ~EnumGenerator();
    }
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    #include <sstream>
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_field_base.h>
    
    class SourceGeneratorBase {
 protected:
  SourceGeneratorBase(const FileDescriptor* descriptor, const Options* options);
  virtual ~SourceGeneratorBase();
    }
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_FACTORY_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_FACTORY_H__
    
    ImmutableLazyMessageOneofFieldGenerator::
ImmutableLazyMessageOneofFieldGenerator(const FieldDescriptor* descriptor,
                                        int messageBitIndex,
                                        int builderBitIndex,
                                        Context* context)
    : ImmutableLazyMessageFieldGenerator(
          descriptor, messageBitIndex, builderBitIndex, context) {
  const OneofGeneratorInfo* info =
      context->GetOneofGeneratorInfo(descriptor->containing_oneof());
  SetCommonOneofVariables(descriptor, info, &variables_);
  variables_['lazy_type'] = 'com.google.protobuf.LazyFieldLite';
}
    
    namespace HPHP {
    }
    
    TRACE_SET_MOD(jittime);
    
      std::deque<std::string> m_pipeline; // the intermediate pagelet results
  std::set<std::string> m_rfc1867UploadedFiles;
  std::string m_files; // serialized to use as $_FILES
    
    /*
 * Assert that Vreg widths match between defs and uses.
 *
 * This should only be run before any zero-extending or truncating copies get
 * reduced to regular copies---so, before simplify() or the various lowering
 * passes.
 */
bool checkWidths(Vunit& unit);
    
      APPENDPATH();
    
    namespace HPHP { namespace jit { namespace irgen {
    }
    }
    }
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    {    CondVarNode() {
      pthread_cond_init(&m_cond, nullptr);
    }
    ~CondVarNode() {
      pthread_cond_destroy(&m_cond);
    }
    /* implicit */ operator pthread_cond_t*() {
      return &m_cond;
    }
    void unlink() {
      if (m_listHook.is_linked()) m_listHook.unlink();
    }
  };
    
    QueryData genKernelIntegrity(QueryContext &context) {
  QueryData results;
  Row r;
  std::string content;
  std::string text_segment_hash;
  std::string syscall_addr_modified;
    }
    
      /// Return an instance to a registered EventPublisher.
  static EventPublisherRef getEventPublisher(const std::string& pub);
    
    #include <osquery/config.h>
#include <osquery/filesystem.h>
#include <osquery/flags.h>
#include <osquery/logger.h>
    
    TEST_F(ProcessTests, test_launchExtension) {
  {
    auto process =
        PlatformProcess::launchExtension(kProcessTestExecPath.c_str(),
                                         kExpectedExtensionArgs[3],
                                         kExpectedExtensionArgs[5],
                                         kExpectedExtensionArgs[7],
                                         true);
    EXPECT_NE(nullptr, process.get());
    }
    }
    
    #include <gtest/gtest.h>
    
    #include <osquery/core.h>
    
    template <typename T>
struct constexpr_abs_helper<
    T,
    typename std::enable_if<
        std::is_integral<T>::value && !std::is_same<T, bool>::value &&
        std::is_unsigned<T>::value>::type> {
  static constexpr T go(T t) {
    return t;
  }
};
    
    template <typename C>
struct compare_not_equal_to : detail::cmp_pred<C, ordering::eq, 1> {
  using detail::cmp_pred<C, ordering::eq, 1>::cmp_pred;
};
    
    #include <sys/types.h>
    
    // Get the default huge page size
size_t getDefaultHugePageSize() {
  // We need to parse /proc/meminfo
  static const boost::regex regex(R'!(Hugepagesize:\s*(\d+)\s*kB)!');
  size_t pageSize = 0;
  boost::cmatch match;
    }
    
    /**
 * Return the mount point for the requested huge page size.
 * 0 = use smallest available.
 * Returns nullptr if the requested huge page size is not available.
 */
const HugePageSize* getHugePageSize(size_t size = 0);
    
      Observer<T> getObserver() &&;
    
      /**
   * Gets the version of the observed object.
   */
  size_t getVersion() const {
    return version_;
  }
    
        explicit DependencyRecorder(const Core& core) : dependencies_(core) {
      DCHECK(inManagerThread());
    }
    
    int FuzzerDriver(int *argc, char ***argv, UserCallback Callback) {
  using namespace fuzzer;
  assert(argc && argv && 'Argument pointers cannot be nullptr');
  EF = new ExternalFunctions();
  if (EF->LLVMFuzzerInitialize)
    EF->LLVMFuzzerInitialize(argc, argv);
  const std::vector<std::string> Args(*argv, *argv + *argc);
  assert(!Args.empty());
  ProgName = new std::string(Args[0]);
  ParseFlags(Args);
  if (Flags.help) {
    PrintHelp();
    return 0;
  }
    }
    
    ExternalFunctions::ExternalFunctions() {
#define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  this->NAME = ::NAME;                                                         \
  CheckFnPtr((void *)::NAME, #NAME, WARN);
    }
    
    #include 'FuzzerExtFunctions.def'
    
    void CloseStdout() {
  CloseFile(1);
}
    
    void RemoveFile(const std::string &Path) {
  unlink(Path.c_str());
}
    
      system_clock::time_point ProcessStartTime = system_clock::now();
  system_clock::time_point UnitStartTime, UnitStopTime;
  long TimeOfLongestUnitInSeconds = 0;
  long EpochOfLastReadOfOutputCorpus = 0;
    
    #ifndef LLVM_FUZZER_OPTIONS_H
#define LLVM_FUZZER_OPTIONS_H
    
    namespace fuzzer {
    }
    
    // This is a reimplementation of Libc's `system()`. On Darwin the Libc
// implementation contains a mutex which prevents it from being used
// concurrently. This implementation **can** be used concurrently. It sets the
// signal handlers when the first thread enters and restores them when the last
// thread finishes execution of the function and ensures this is not racey by
// using a mutex.
int ExecuteCommand(const std::string &Command) {
  posix_spawnattr_t SpawnAttributes;
  if (posix_spawnattr_init(&SpawnAttributes))
    return -1;
  // Block and ignore signals of the current process when the first thread
  // enters.
  {
    std::lock_guard<std::mutex> Lock(SignalMutex);
    if (ActiveThreadCount == 0) {
      static struct sigaction IgnoreSignalAction;
      sigset_t BlockedSignalsSet;
      memset(&IgnoreSignalAction, 0, sizeof(IgnoreSignalAction));
      IgnoreSignalAction.sa_handler = SIG_IGN;
    }
    }
    }