
        
          /// This is the second time DebuggerClient is consulted:
  /// after all names in external Modules are checked, the client
  /// gets a chance to add names to the list of candidates that
  /// have been found in the external module lookup.
    
    void CodeCompletionOrganizer::addCompletionsWithFilter(
    ArrayRef<Completion *> completions, StringRef filterText,
    const FilterRules &rules, Completion *&exactMatch) {
  impl.addCompletionsWithFilter(completions, filterText, options, rules,
                                exactMatch);
}
    
    
    {} // end swift namespace
    
    /// Index the given module and store the results to \p indexStorePath.
///
/// \param module The module to index.
///
/// \param indexUnitTokens A list of unique identifiers for the index units to
/// be written. This may either be one unit per source file of \p module, or it
/// may be a single unit, in which case all the index information will be
/// combined into a single unit.
///
/// \param moduleUnitToken A unique identifier for this module unit in the form
/// of a file path. Only used if \p indexUnitTokens are specified for each
/// source file, otherwise the single \p indexUnitTokens value is used instead.
///
/// \param indexStorePath The location to write the indexing data to.
///
/// \param indexSystemModules If true, emit index data for imported serialized
/// swift system modules.
///
/// \param isDebugCompilation true for non-optimized compiler invocation.
///
/// \param targetTriple The target for this compilation.
///
/// \param dependencyTracker The set of dependencies seen while building.
bool indexAndRecord(ModuleDecl *module, ArrayRef<std::string> indexUnitTokens,
                    StringRef moduleUnitToken, StringRef indexStorePath,
                    bool indexSystemModules, bool isDebugCompilation,
                    StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
// FIXME: indexUnitTokens could be StringRef, but that creates an impedance
// mismatch in the caller.
    
      // Module dependencies.
  SmallVector<ModuleDecl::ImportedModule, 8> imports;
  primarySourceFile->getImportedModules(imports, ModuleDecl::ImportFilter::All);
  StringScratchSpace moduleNameScratch;
  addModuleDependencies(imports, indexStorePath, indexSystemModules,
                        targetTriple, clangCI, diags, unitWriter, moduleNameScratch);
    
      StringRef str() const {
    return LiteralContent;
  }
    
    namespace swift {
    }
    
      /// Get the canonicalized substitution. If wasCanonical is not nullptr,
  /// store there whether the current substitution was canonical already.
  Substitution getCanonicalSubstitution(bool *wasCanonical = nullptr) const;
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    namespace caffe {
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
    #include <vector>
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    TEST_F(BaseTest, HasFoo) {
  // This is an ordinary non-parameterized test.
}
    
    // The variables defined in the type-parameterized test macros are
// static as typically these macros are used in a .h file that can be
// #included in multiple translation units linked together.
# define TYPED_TEST_CASE_P(CaseName) \
  static ::testing::internal::TypedTestCasePState \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName)
    
    #undef GTEST_IMPL_FORMAT_C_STRING_AS_POINTER_
    
      // Assumes one of the above roles.
  virtual TestRole AssumeRole() = 0;
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_),
        static_cast<T>(v24_), static_cast<T>(v25_), static_cast<T>(v26_),
        static_cast<T>(v27_), static_cast<T>(v28_), static_cast<T>(v29_),
        static_cast<T>(v30_), static_cast<T>(v31_), static_cast<T>(v32_),
        static_cast<T>(v33_), static_cast<T>(v34_), static_cast<T>(v35_),
        static_cast<T>(v36_), static_cast<T>(v37_), static_cast<T>(v38_),
        static_cast<T>(v39_), static_cast<T>(v40_), static_cast<T>(v41_),
        static_cast<T>(v42_), static_cast<T>(v43_)};
    return ValuesIn(array);
  }
    
    
    {  const T1 v1_;
};
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(Notification);
};
    
      // Compares two wide C strings.  Returns true iff they have the same
  // content.
  //
  // Unlike wcscmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool WideCStringEquals(const wchar_t* lhs, const wchar_t* rhs);
    
    static void RunServer() {
  QpsWorker worker(FLAGS_driver_port, FLAGS_server_port, FLAGS_credential_type);
    }
    
    #endif  // GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    #ifndef GRPC_INTERNAL_COMPILER_PYTHON_GENERATOR_H
#define GRPC_INTERNAL_COMPILER_PYTHON_GENERATOR_H
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
    UsageTimer::UsageTimer() : start_(Sample()) {}
    
    #include <memory>
    
    // Keeps a thread-local reference to the current thread's JNIEnv.
struct Environment {
  // May be null if this thread isn't attached to the JVM
  FBEXPORT static JNIEnv* current();
  static void initialize(JavaVM* vm);
    }
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }
    
      bool operator==(const FixedWord<kMaxSize> &w) const {
    return Size == w.Size && 0 == memcmp(Data, w.Data, Size);
  }
    
    #include 'FuzzerCorpus.h'
#include 'FuzzerInterface.h'
#include 'FuzzerInternal.h'
#include 'FuzzerIO.h'
#include 'FuzzerMutate.h'
#include 'FuzzerRandom.h'
#include 'FuzzerTracePC.h'
#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstring>
#include <mutex>
#include <string>
#include <thread>
    
    #define EXT_FUNC(NAME, RETURN_TYPE, FUNC_SIG, WARN)                            \
  RETURN_TYPE(*NAME) FUNC_SIG = nullptr
    
    void CloseStdout();
    
    #endif // LIBFUZZER_POSIX

    
    
    {}  // namespace fuzzer
    
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
    
      void StartTraceRecording() {
    if (!Options.UseMemcmp)
      return;
    RecordingMemcmp = Options.UseMemcmp;
    RecordingMemmem = Options.UseMemmem;
    NumMutations = 0;
    InterestingWords.clear();
    MD.ClearAutoDictionary();
  }