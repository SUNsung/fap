
        
            // Adds the module variable 'api_version'.
    if (PyModule_AddIntConstant(
        module,
        const_cast<char*>(kImplVersionName),
        kImplVersion))
#if PY_MAJOR_VERSION < 3
      return;
#else
      { Py_DECREF(module); return NULL; }
    
    // Owns a python object and decrements the reference count on destruction.
// This class is not threadsafe.
template <typename PyObjectStruct>
class ScopedPythonPtr {
 public:
  // Takes the ownership of the specified object to ScopedPythonPtr.
  // The reference count of the specified py_object is not incremented.
  explicit ScopedPythonPtr(PyObjectStruct* py_object = NULL)
      : ptr_(py_object) {}
    }
    
    // Author: liujisi@google.com (Pherl Liu)
    
    static inline int internalInflateInit2(
    z_stream* zcontext, GzipInputStream::Format format) {
  int windowBitsFormat = 0;
  switch (format) {
    case GzipInputStream::GZIP: windowBitsFormat = 16; break;
    case GzipInputStream::AUTO: windowBitsFormat = 32; break;
    case GzipInputStream::ZLIB: windowBitsFormat = 0; break;
  }
  return inflateInit2(zcontext, /* windowBits */15 | windowBitsFormat);
}
    
    TEST(ByteSourceTest, CopyTo) {
  StringPiece data('Hello world!');
  MockByteSource source(data, 3);
  string str;
  StringByteSink sink(&str);
    }
    
    class CopyNoAssign {
 public:
  explicit CopyNoAssign(int value) : foo(value) {}
  CopyNoAssign(const CopyNoAssign& other) : foo(other.foo) {}
  int foo;
 private:
  const CopyNoAssign& operator=(const CopyNoAssign&);
};
    
    
    {  // Yes || Yes == true.
  value = or_<true_, true_>::value;
  EXPECT_TRUE(value);
  // Yes || No == true.
  value = or_<true_, false_>::value;
  EXPECT_TRUE(value);
  // No || Yes == true.
  value = or_<false_, true_>::value;
  EXPECT_TRUE(value);
  // No || No == false.
  value = or_<false_, false_>::value;
  EXPECT_FALSE(value);
}
    
    // Here's what happens when an ASSERT_DEATH* or EXPECT_DEATH* is
// executed:
//
//   1. It generates a warning if there is more than one active
//   thread.  This is because it's safe to fork() or clone() only
//   when there is a single thread.
//
//   2. The parent process clone()s a sub-process and runs the death
//   test in it; the sub-process exits with code 0 at the end of the
//   death test, if it hasn't exited already.
//
//   3. The parent process waits for the sub-process to terminate.
//
//   4. The parent process checks the exit code and error message of
//   the sub-process.
//
// Examples:
//
//   ASSERT_DEATH(server.SendMessage(56, 'Hello'), 'Invalid port number');
//   for (int i = 0; i < 5; i++) {
//     EXPECT_DEATH(server.ProcessRequest(i),
//                  'Invalid request .* in ProcessRequest()')
//                  << 'Failed to die on request ' << i;
//   }
//
//   ASSERT_EXIT(server.ExitNow(), ::testing::ExitedWithCode(0), 'Exiting');
//
//   bool KilledBySIGHUP(int exit_code) {
//     return WIFSIGNALED(exit_code) && WTERMSIG(exit_code) == SIGHUP;
//   }
//
//   ASSERT_EXIT(client.HangUpServer(), KilledBySIGHUP, 'Hanging up!');
//
// On the regular expressions used in death tests:
//
//   On POSIX-compliant systems (*nix), we use the <regex.h> library,
//   which uses the POSIX extended regex syntax.
//
//   On other platforms (e.g. Windows), we only support a simple regex
//   syntax implemented as part of Google Test.  This limited
//   implementation should be enough most of the time when writing
//   death tests; though it lacks many features you can find in PCRE
//   or POSIX extended regex syntax.  For example, we don't support
//   union ('x|y'), grouping ('(xy)'), brackets ('[xy]'), and
//   repetition count ('x{5,7}'), among others.
//
//   Below is the syntax that we do support.  We chose it to be a
//   subset of both PCRE and POSIX extended regex, so it's easy to
//   learn wherever you come from.  In the following: 'A' denotes a
//   literal character, period (.), or a single \\ escape sequence;
//   'x' and 'y' denote regular expressions; 'm' and 'n' are for
//   natural numbers.
//
//     c     matches any literal character c
//     \\d   matches any decimal digit
//     \\D   matches any character that's not a decimal digit
//     \\f   matches \f
//     \\n   matches \n
//     \\r   matches \r
//     \\s   matches any ASCII whitespace, including \n
//     \\S   matches any character that's not a whitespace
//     \\t   matches \t
//     \\v   matches \v
//     \\w   matches any letter, _, or decimal digit
//     \\W   matches any character that \\w doesn't match
//     \\c   matches any literal character c, which must be a punctuation
//     .     matches any single character except \n
//     A?    matches 0 or 1 occurrences of A
//     A*    matches 0 or many occurrences of A
//     A+    matches 1 or many occurrences of A
//     ^     matches the beginning of a string (not that of each line)
//     $     matches the end of a string (not that of each line)
//     xy    matches x followed by y
//
//   If you accidentally use PCRE or POSIX extended regex features
//   not implemented by us, you will get a run-time failure.  In that
//   case, please try to rewrite your regular expression within the
//   above syntax.
//
//   This implementation is *not* meant to be as highly tuned or robust
//   as a compiled regex library, but should perform well enough for a
//   death test, which already incurs significant overhead by launching
//   a child process.
//
// Known caveats:
//
//   A 'threadsafe' style death test obtains the path to the test
//   program from argv[0] and re-executes it in the sub-process.  For
//   simplicity, the current implementation doesn't search the PATH
//   when launching the sub-process.  This means that the user must
//   invoke the test program via a path that contains at least one
//   path separator (e.g. path/to/foo_test and
//   /absolute/path/to/bar_test are fine, but foo_test is not).  This
//   is rarely a problem as people usually don't put the test binary
//   directory in PATH.
//
// TODO(wan@google.com): make thread-safe death tests search the PATH.
    
    # if GTEST_HAS_COMBINE
// Combine() allows the user to combine two or more sequences to produce
// values of a Cartesian product of those sequences' elements.
//
// Synopsis:
// Combine(gen1, gen2, ..., genN)
//   - returns a generator producing sequences with elements coming from
//     the Cartesian product of elements from the sequences generated by
//     gen1, gen2, ..., genN. The sequence elements will have a type of
//     tuple<T1, T2, ..., TN> where T1, T2, ..., TN are the types
//     of elements from sequences produces by gen1, gen2, ..., genN.
//
// Combine can have up to 10 arguments. This number is currently limited
// by the maximum number of elements in the tuple implementation used by Google
// Test.
//
// Example:
//
// This will instantiate tests in test case AnimalTest each one with
// the parameter values tuple('cat', BLACK), tuple('cat', WHITE),
// tuple('dog', BLACK), and tuple('dog', WHITE):
//
// enum Color { BLACK, GRAY, WHITE };
// class AnimalTest
//     : public testing::TestWithParam<tuple<const char*, Color> > {...};
//
// TEST_P(AnimalTest, AnimalLooksNice) {...}
//
// INSTANTIATE_TEST_CASE_P(AnimalVariations, AnimalTest,
//                         Combine(Values('cat', 'dog'),
//                                 Values(BLACK, WHITE)));
//
// This will instantiate tests in FlagDependentTest with all variations of two
// Boolean flags:
//
// class FlagDependentTest
//     : public testing::TestWithParam<tuple<bool, bool> > {
//   virtual void SetUp() {
//     // Assigns external_flag_1 and external_flag_2 values from the tuple.
//     tie(external_flag_1, external_flag_2) = GetParam();
//   }
// };
//
// TEST_P(FlagDependentTest, TestFeature1) {
//   // Test your code using external_flag_1 and external_flag_2 here.
// }
// INSTANTIATE_TEST_CASE_P(TwoBoolSequence, FlagDependentTest,
//                         Combine(Bool(), Bool()));
//
template <typename Generator1, typename Generator2>
internal::CartesianProductHolder2<Generator1, Generator2> Combine(
    const Generator1& g1, const Generator2& g2) {
  return internal::CartesianProductHolder2<Generator1, Generator2>(
      g1, g2);
}
    
    #define EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter::INTERCEPT_ALL_THREADS, \
          &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    // Next, associate a list of types with the test case, which will be
// repeated for each type in the list.  The typedef is necessary for
// the macro to parse correctly.
typedef testing::Types<char, int, unsigned int> MyTypes;
TYPED_TEST_CASE(FooTest, MyTypes);
    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
      // Join an existing circle.
  void join(linked_ptr_internal const* ptr)
      GTEST_LOCK_EXCLUDED_(g_linked_ptr_mutex) {
    MutexLock lock(&g_linked_ptr_mutex);
    }
    
    
template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9>
class CartesianProductGenerator9
    : public ParamGeneratorInterface< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6,
        T7, T8, T9> > {
 public:
  typedef ::std::tr1::tuple<T1, T2, T3, T4, T5, T6, T7, T8, T9> ParamType;
    }
    
    // A unique struct template used as the default value for the
// arguments of class template Templates.  This allows us to simulate
// variadic templates (e.g. Templates<int>, Templates<int, double>,
// and etc), which C++ doesn't support directly.
template <typename T>
struct NoneT {};
    
      // Applies a function/functor on each element of the queue, and
  // returns the result in a new queue.  The original queue is not
  // affected.
  template <typename F>
  Queue* Map(F function) const {
    Queue* new_queue = new Queue();
    for (const QueueNode<E>* node = head_; node != NULL; node = node->next_) {
      new_queue->Enqueue(function(node->element()));
    }
    }