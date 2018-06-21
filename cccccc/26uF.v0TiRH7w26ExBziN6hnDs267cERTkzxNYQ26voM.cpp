
        
        /// Index the given source file and store the results to \p indexStorePath.
///
/// \param primarySourceFile The source file to index.
///
/// \param indexUnitToken A unique identifier for this translation unit in the
/// form of a file path.
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
bool indexAndRecord(SourceFile *primarySourceFile, StringRef indexUnitToken,
                    StringRef indexStorePath, bool indexSystemModules,
                    bool isDebugCompilation, StringRef targetTriple,
                    const DependencyTracker &dependencyTracker);
    
    
    {  const SILDebugScope *Scope = this;
  while (Scope->Parent.is<const SILDebugScope *>())
    Scope = Scope->Parent.get<const SILDebugScope *>();
  assert(Scope->Parent.is<SILFunction *>() && 'orphaned scope');
  return Scope->Parent.get<SILFunction *>();
}
    
    
    {
    {}
}
#endif

    
    // On non-Darwin platforms we do not assume any barrier-free inline path
// and SwiftTargetInfo.OnceDonePredicateValue is unset in the compiler.
    
      static ResultPlanPtr computeResultPlan(SILGenFunction &SGF,
                                         const CalleeTypeInfo &calleeTypeInfo,
                                         SILLocation loc,
                                         SGFContext evalContext);
    
    namespace swift {
    }
    
      // Returns true iff the test part passed.
  bool passed() const { return type_ == kSuccess; }
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Expands to the name of the variable used to remember the names of
// the defined tests in the given test case.
# define GTEST_TYPED_TEST_CASE_P_STATE_(TestCaseName) \
  gtest_typed_test_case_p_state_##TestCaseName##_
    
      // Returns true if the death test passed; that is, the test process
  // exited during the test, its exit status matches a user-supplied
  // predicate, and its stderr output matches a user-supplied regular
  // expression.
  // The user-supplied predicate may be a macro expression rather
  // than a function pointer or functor, or else Wait and Passed could
  // be combined.
  virtual bool Passed(bool exit_status_ok) = 0;
    
    // Allows a controller thread to pause execution of newly created
// threads until notified.  Instances of this class must be created
// and destroyed in the controller thread.
//
// This class is only for testing Google Test's own constructs. Do not
// use it in user tests, either directly or indirectly.
class Notification {
 public:
  Notification() : notified_(false) {
    GTEST_CHECK_POSIX_SUCCESS_(pthread_mutex_init(&mutex_, NULL));
  }
  ~Notification() {
    pthread_mutex_destroy(&mutex_);
  }
    }
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
      template <GTEST_7_TYPENAMES_(U)>
  tuple& operator=(const GTEST_7_TUPLE_(U)& t) {
    return CopyFrom(t);
  }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37>
struct Types37 {
  typedef T1 Head;
  typedef Types36<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37> Tail;
};
    
    namespace xgboost {
namespace common {
    }
    }
    
    SEXP XGDMatrixSetInfo_R(SEXP handle, SEXP field, SEXP array) {
  R_API_BEGIN();
  int len = length(array);
  const char *name = CHAR(asChar(field));
  if (!strcmp('group', name)) {
    std::vector<unsigned> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = static_cast<unsigned>(INTEGER(array)[i]);
    }
    CHECK_CALL(XGDMatrixSetGroup(R_ExternalPtrAddr(handle), BeginPtr(vec), len));
  } else {
    std::vector<float> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = REAL(array)[i];
    }
    CHECK_CALL(XGDMatrixSetFloatInfo(R_ExternalPtrAddr(handle),
                                   CHAR(asChar(field)),
                                   BeginPtr(vec), len));
  }
  R_API_END();
  return R_NilValue;
}
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitInit
 * Signature: ([Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitInit
  (JNIEnv *jenv, jclass jcls, jobjectArray jargs) {
  std::vector<std::string> args;
  std::vector<char*> argv;
  bst_ulong len = (bst_ulong)jenv->GetArrayLength(jargs);
  for (bst_ulong i = 0; i < len; ++i) {
    jstring arg = (jstring)jenv->GetObjectArrayElement(jargs, i);
    const char *s = jenv->GetStringUTFChars(arg, 0);
    args.push_back(std::string(s, jenv->GetStringLength(arg)));
    if (s != nullptr) jenv->ReleaseStringUTFChars(arg, s);
    if (args.back().length() == 0) args.pop_back();
  }
    }
    
    TEST(Metric, AMS) {
  EXPECT_ANY_THROW(xgboost::Metric::Create('ams'));
  xgboost::Metric * metric = xgboost::Metric::Create('ams@0.5f');
  ASSERT_STREQ(metric->Name(), 'ams@0.5');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0.311f, 0.001f);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.29710f, 0.001f);
    }
    
      /**
   * \brief Updates linear model given gradients.
   *
   * \param in_gpair            The gradient pair statistics of the data.
   * \param data                Input data matrix.
   * \param model               Model to be updated.
   * \param sum_instance_weight The sum instance weights, used to normalise l1/l2 penalty.
   */