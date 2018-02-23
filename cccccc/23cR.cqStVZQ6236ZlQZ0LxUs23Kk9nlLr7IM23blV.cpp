
        
        void dls::compute_eigenvec(const cv::Mat& Mtilde, cv::Mat& eigenval_real, cv::Mat& eigenval_imag,
                                                  cv::Mat& eigenvec_real, cv::Mat& eigenvec_imag)
{
#ifdef HAVE_EIGEN
    Eigen::MatrixXd Mtilde_eig, zeros_eig;
    cv::cv2eigen(Mtilde, Mtilde_eig);
    cv::cv2eigen(cv::Mat::zeros(27, 27, CV_64F), zeros_eig);
    }
    
    /** @file
 * @deprecated Use @ref cudev instead.
 */
    
    CV_EXPORTS_W void absdiff(InputArray src1, Scalar src2, OutputArray dst);
    
        if (refcount)
        CV_XADD(refcount, 1);
    
    #include <stddef.h>
    
    // This flag controls the style of death tests.  Valid values are 'threadsafe',
// meaning that the death test child process will re-execute the test binary
// from the start, running only a single death test, or 'fast',
// meaning that the child process will execute the test logic immediately
// after forking.
GTEST_DECLARE_string_(death_test_style);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26>
internal::ValueArray26<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
    T26> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
    T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
    T26 v26) {
  return internal::ValueArray26<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15,
      v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
}
    
     private:
  std::vector<TestPartResult> array_;
    
    // Use this function in main() to run all tests.  It returns 0 if all
// tests are successful, or 1 otherwise.
//
// RUN_ALL_TESTS() should be invoked after the command line has been
// parsed by InitGoogleTest().
//
// This function was formerly a macro; thus, it is in the global
// namespace and has an all-caps name.
int RUN_ALL_TESTS() GTEST_MUST_USE_RESULT_;
    
    
$for j [[
  const ParamGenerator<T$j> g$(j)_;
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// ParameterizedTestCaseInfoBase is a generic interface
// to ParameterizedTestCaseInfo classes. ParameterizedTestCaseInfoBase
// accumulates test information provided by TEST_P macro invocations
// and generators provided by INSTANTIATE_TEST_CASE_P macro invocations
// and uses that information to register all resulting test instances
// in RegisterTests method. The ParameterizeTestCaseRegistry class holds
// a collection of pointers to the ParameterizedTestCaseInfo objects
// and calls RegisterTests() on each of them when asked.
class ParameterizedTestCaseInfoBase {
 public:
  virtual ~ParameterizedTestCaseInfoBase() {}
    }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41, GTEST_TEMPLATE_ T42,
    GTEST_TEMPLATE_ T43, GTEST_TEMPLATE_ T44, GTEST_TEMPLATE_ T45,
    GTEST_TEMPLATE_ T46, GTEST_TEMPLATE_ T47>
struct Templates47 {
  typedef TemplateSel<T1> Head;
  typedef Templates46<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
      T43, T44, T45, T46, T47> Tail;
};
    
    #include 'leveldb/env.h'
    
    TEST(LogTest, UnexpectedMiddleType) {
  Write('foo');
  SetByte(6, kMiddleType);
  FixChecksum(0, 3);
  ASSERT_EQ('EOF', Read());
  ASSERT_EQ(3, DroppedBytes());
  ASSERT_EQ('OK', MatchError('missing start'));
}
    
    namespace leveldb {
    }
    
     private:
  Env* const env_;
  const std::string dbname_;
  const Options* options_;
  Cache* cache_;
    
    void VersionEdit::Clear() {
  comparator_.clear();
  log_number_ = 0;
  prev_log_number_ = 0;
  last_sequence_ = 0;
  next_file_number_ = 0;
  has_comparator_ = false;
  has_log_number_ = false;
  has_prev_log_number_ = false;
  has_next_file_number_ = false;
  has_last_sequence_ = false;
  deleted_files_.clear();
  new_files_.clear();
}
    
    // Size of each value
static int FLAGS_value_size = 100;
    
    
    {  enum { kBlockSize = 8 * 1024 };
};
    
    #include 'port/port_posix.h'
    
    
    { private:
  const FilterPolicy* policy_;
  const char* data_;    // Pointer to filter data (at block-start)
  const char* offset_;  // Pointer to beginning of offset array (at block-end)
  size_t num_;          // Number of entries in offset array
  size_t base_lg_;      // Encoding parameter (see kFilterBaseLg in .cc file)
};
    
    TEST(FilterBlockTest, SingleChunk) {
  FilterBlockBuilder builder(&policy_);
  builder.StartBlock(100);
  builder.AddKey('foo');
  builder.AddKey('bar');
  builder.AddKey('box');
  builder.StartBlock(200);
  builder.AddKey('box');
  builder.StartBlock(300);
  builder.AddKey('hello');
  Slice block = builder.Finish();
  FilterBlockReader reader(&policy_, block);
  ASSERT_TRUE(reader.KeyMayMatch(100, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'bar'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'hello'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(100, 'missing'));
  ASSERT_TRUE(! reader.KeyMayMatch(100, 'other'));
}
    
    Iterator::Iterator() {
  cleanup_.function = NULL;
  cleanup_.next = NULL;
}
    
    // convert return from local_ref<T>
template <typename T>
struct Convert<local_ref<T>> {
  typedef JniType<T> jniType;
  // No automatic synthesis of local_ref
  static jniType toJniRet(local_ref<jniType> t) {
    return t.release();
  }
  static jniType toCall(local_ref<jniType> t) {
    return t.get();
  }
};
    
    
/**
 * Captures and symbolicates a stack trace
 *
 * Beware of a bug on some platforms, which makes the trace loop until the
 * buffer is full when it reaches a noexpr function. It seems to be fixed in
 * newer versions of gcc. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=56846
 *
 * @param skip The number of frames before capturing the trace
 *
 * @param limit The maximum number of frames captured
 */
FBEXPORT inline std::vector<StackTraceElement> getStackTraceSymbols(
    size_t skip = 0,
    size_t limit = kDefaultLimit) {
  return getStackTraceSymbols(getStackTrace(skip + 1, limit));
}
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
#include <yoga/Yoga.h>
    
    Value Node::getMaxWidth(void) const
{
    return Value::fromYGValue(YGNodeStyleGetMaxWidth(m_node));
}
    
        void insertChild(Node * child, unsigned index);
    void removeChild(Node * child);
    
        Size(void)
    : width(0.0)
    , height(0.0)
    {
    }
    
    // Reference counting smart pointer. This is designed to work with the
// Countable class or other implementations in the future. It is designed in a
// way to be both efficient and difficult to misuse. Typical usage is very
// simple once you learn the patterns (and the compiler will help!):
//
// By default, the internal pointer is null.
//   RefPtr<Foo> ref;
//
// Object creation requires explicit construction:
//   RefPtr<Foo> ref = createNew<Foo>(...);
//
// Or if the constructor is not public:
//   RefPtr<Foo> ref = adoptRef(new Foo(...));
//
// But you can implicitly create from nullptr:
//   RefPtr<Foo> maybeRef = cond ? ref : nullptr;
//
// Move/Copy Construction/Assignment are straightforward:
//   RefPtr<Foo> ref2 = ref;
//   ref = std::move(ref2);
//
// Destruction automatically drops the RefPtr's reference as expected.
//
// Upcasting is implicit but downcasting requires an explicit cast:
//   struct Bar : public Foo {};
//   RefPtr<Bar> barRef = static_cast<RefPtr<Bar>>(ref);
//   ref = barRef;
//
template <class T>
class RefPtr {
public:
  constexpr RefPtr() :
    m_ptr(nullptr)
  {}
    }
    
    inline local_ref<jobject> autobox(alias_ref<jobject> val) {
  return make_local(val);
}