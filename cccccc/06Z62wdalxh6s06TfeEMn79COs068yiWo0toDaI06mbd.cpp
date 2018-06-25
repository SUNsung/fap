
        
            f3coeff[1] = 2*D[1][2] - 2*D[1][4] + 2*D[2][1] + 2*D[2][5] + 2*D[2][9] - 2*D[4][1] - 2*D[4][5] - 2*D[4][9] + 2*D[5][2] - 2*D[5][4] + 2*D[9][2] - 2*D[9][4]; // constant term
    f3coeff[2] = 2*D[1][6] + 2*D[1][8] + 4*D[2][3] + 4*D[2][7] + 4*D[3][2] + 4*D[3][4] + 4*D[4][3] + 4*D[4][7] - 2*D[5][6] - 2*D[5][8] + 2*D[6][1] - 2*D[6][5] - 2*D[6][9] + 4*D[7][2] + 4*D[7][4] + 2*D[8][1] - 2*D[8][5] - 2*D[8][9] - 2*D[9][6] - 2*D[9][8]; // s1^2  * s2
    f3coeff[3] = 8*D[2][2] - 8*D[3][3] - 8*D[4][4] + 8*D[6][6] + 8*D[7][7] - 8*D[8][8]; // s1 * s2
    f3coeff[4] = 4*D[1][8] - 4*D[1][6] + 8*D[2][3] + 8*D[2][7] + 8*D[3][2] - 8*D[3][4] - 8*D[4][3] - 8*D[4][7] - 4*D[5][6] + 4*D[5][8] - 4*D[6][1] - 4*D[6][5] + 4*D[6][9] + 8*D[7][2] - 8*D[7][4] + 4*D[8][1] + 4*D[8][5] - 4*D[8][9] + 4*D[9][6] - 4*D[9][8]; // s1 * s3
    f3coeff[5] = 4*D[1][3] - 4*D[1][7] + 8*D[2][6] + 8*D[2][8] + 4*D[3][1] + 4*D[3][5] - 4*D[3][9] - 8*D[4][6] - 8*D[4][8] + 4*D[5][3] - 4*D[5][7] + 8*D[6][2] - 8*D[6][4] - 4*D[7][1] - 4*D[7][5] + 4*D[7][9] + 8*D[8][2] - 8*D[8][4] - 4*D[9][3] + 4*D[9][7]; // s2 * s3
    f3coeff[6] = 4*D[1][1] - 4*D[5][5] + 4*D[5][9] + 8*D[6][6] + 8*D[6][8] + 8*D[8][6] + 8*D[8][8] + 4*D[9][5] - 4*D[9][9]; // s2^2 * s3
    f3coeff[7] = 2*D[5][6] - 2*D[1][8] - 2*D[1][6] + 2*D[5][8] - 2*D[6][1] + 2*D[6][5] - 2*D[6][9] - 2*D[8][1] + 2*D[8][5] - 2*D[8][9] - 2*D[9][6] - 2*D[9][8]; // s2^3
    f3coeff[8] = 6*D[3][9] - 6*D[1][7] - 6*D[3][1] - 6*D[3][5] - 6*D[1][3] - 6*D[5][3] - 6*D[5][7] - 6*D[7][1] - 6*D[7][5] + 6*D[7][9] + 6*D[9][3] + 6*D[9][7]; // s1 * s3^2
    f3coeff[9] = 2*D[1][3] + 2*D[1][7] + 4*D[2][6] - 4*D[2][8] + 2*D[3][1] + 2*D[3][5] + 2*D[3][9] - 4*D[4][6] + 4*D[4][8] + 2*D[5][3] + 2*D[5][7] + 4*D[6][2] - 4*D[6][4] + 2*D[7][1] + 2*D[7][5] + 2*D[7][9] - 4*D[8][2] + 4*D[8][4] + 2*D[9][3] + 2*D[9][7]; // s1
    f3coeff[10] = 8*D[2][2] - 4*D[1][5] - 4*D[1][1] - 8*D[2][4] - 8*D[4][2] + 8*D[4][4] - 4*D[5][1] - 4*D[5][5] + 4*D[9][9]; // s3
    f3coeff[11] = 2*D[1][6] + 2*D[1][8] - 4*D[2][3] + 4*D[2][7] - 4*D[3][2] + 4*D[3][4] + 4*D[4][3] - 4*D[4][7] + 2*D[5][6] + 2*D[5][8] + 2*D[6][1] + 2*D[6][5] + 2*D[6][9] + 4*D[7][2] - 4*D[7][4] + 2*D[8][1] + 2*D[8][5] + 2*D[8][9] + 2*D[9][6] + 2*D[9][8]; // s2
    f3coeff[12] = 6*D[6][9] - 6*D[1][8] - 6*D[5][6] - 6*D[5][8] - 6*D[6][1] - 6*D[6][5] - 6*D[1][6] - 6*D[8][1] - 6*D[8][5] + 6*D[8][9] + 6*D[9][6] + 6*D[9][8]; // s2 * s3^2
    f3coeff[13] = 2*D[1][2] - 2*D[1][4] + 2*D[2][1] - 2*D[2][5] - 2*D[2][9] + 4*D[3][6] - 4*D[3][8] - 2*D[4][1] + 2*D[4][5] + 2*D[4][9] - 2*D[5][2] + 2*D[5][4] + 4*D[6][3] + 4*D[6][7] + 4*D[7][6] - 4*D[7][8] - 4*D[8][3] - 4*D[8][7] - 2*D[9][2] + 2*D[9][4]; // s1^2
    f3coeff[14] = 6*D[1][4] - 6*D[1][2] - 6*D[2][1] - 6*D[2][5] + 6*D[2][9] + 6*D[4][1] + 6*D[4][5] - 6*D[4][9] - 6*D[5][2] + 6*D[5][4] + 6*D[9][2] - 6*D[9][4]; // s3^2
    f3coeff[15] = 2*D[1][4] - 2*D[1][2] - 2*D[2][1] + 2*D[2][5] - 2*D[2][9] - 4*D[3][6] - 4*D[3][8] + 2*D[4][1] - 2*D[4][5] + 2*D[4][9] + 2*D[5][2] - 2*D[5][4] - 4*D[6][3] + 4*D[6][7] + 4*D[7][6] + 4*D[7][8] - 4*D[8][3] + 4*D[8][7] - 2*D[9][2] + 2*D[9][4]; // s2^2
    f3coeff[16] = 4*D[1][1] + 4*D[1][5] - 4*D[1][9] + 4*D[5][1] + 4*D[5][5] - 4*D[5][9] - 4*D[9][1] - 4*D[9][5] + 4*D[9][9]; // s3^3
    f3coeff[17] = 4*D[2][9] - 4*D[1][4] - 4*D[2][1] - 4*D[2][5] - 4*D[1][2] + 8*D[3][6] + 8*D[3][8] - 4*D[4][1] - 4*D[4][5] + 4*D[4][9] - 4*D[5][2] - 4*D[5][4] + 8*D[6][3] + 8*D[6][7] + 8*D[7][6] + 8*D[7][8] + 8*D[8][3] + 8*D[8][7] + 4*D[9][2] + 4*D[9][4]; // s1 * s2 * s3
    f3coeff[18] = 4*D[2][6] - 2*D[1][7] - 2*D[1][3] + 4*D[2][8] - 2*D[3][1] + 2*D[3][5] - 2*D[3][9] + 4*D[4][6] + 4*D[4][8] + 2*D[5][3] + 2*D[5][7] + 4*D[6][2] + 4*D[6][4] - 2*D[7][1] + 2*D[7][5] - 2*D[7][9] + 4*D[8][2] + 4*D[8][4] - 2*D[9][3] - 2*D[9][7]; // s1 * s2^2
    f3coeff[19] = 4*D[1][9] - 4*D[1][1] + 8*D[3][3] + 8*D[3][7] + 4*D[5][5] + 8*D[7][3] + 8*D[7][7] + 4*D[9][1] - 4*D[9][9]; // s1^2 * s3
    f3coeff[20] = 2*D[1][3] + 2*D[1][7] + 2*D[3][1] - 2*D[3][5] - 2*D[3][9] - 2*D[5][3] - 2*D[5][7] + 2*D[7][1] - 2*D[7][5] - 2*D[7][9] - 2*D[9][3] - 2*D[9][7]; // s1^3
    
    #include 'common.hpp'
#include 'warp_reduce.hpp'
    
    CV_EXPORTS_W void subtract(InputArray src1, Scalar src2, OutputArray dst, InputArray mask=noArray(), int dtype=-1);
    
    #if defined(_WIN32)
#include <windows.h>
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
          typename T6>
void PrintTo(const ::std::tr1::tuple<T1, T2, T3, T4, T5, T6>& t,
             ::std::ostream* os) {
  PrintTupleTo(t, os);
}
    
    // A set of macros for testing Google Test assertions or code that's expected
// to generate Google Test fatal failures.  It verifies that the given
// statement will cause exactly one fatal Google Test failure with 'substr'
// being part of the failure message.
//
// There are two different versions of this macro. EXPECT_FATAL_FAILURE only
// affects and considers failures generated in the current thread and
// EXPECT_FATAL_FAILURE_ON_ALL_THREADS does the same but for all threads.
//
// The verification of the assertion is done correctly even when the statement
// throws an exception or aborts the current function.
//
// Known restrictions:
//   - 'statement' cannot reference local non-static variables or
//     non-static members of the current object.
//   - 'statement' cannot return a value.
//   - You cannot stream a failure message to this macro.
//
// Note that even though the implementations of the following two
// macros are much alike, we cannot refactor them to use a common
// helper macro, due to some peculiarity in how the preprocessor
// works.  The AcceptsMacroThatExpandsToUnprotectedComma test in
// gtest_unittest.cc will fail to compile if we do that.
#define EXPECT_FATAL_FAILURE(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ONLY_CURRENT_THREAD, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    # define TYPED_TEST(CaseName, TestName) \
  template <typename gtest_TypeParam_> \
  class GTEST_TEST_CLASS_NAME_(CaseName, TestName) \
      : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  bool gtest_##CaseName##_##TestName##_registered_ GTEST_ATTRIBUTE_UNUSED_ = \
      ::testing::internal::TypeParameterizedTest< \
          CaseName, \
          ::testing::internal::TemplateSel< \
              GTEST_TEST_CLASS_NAME_(CaseName, TestName)>, \
          GTEST_TYPE_PARAMS_(CaseName)>::Register(\
              '', #CaseName, #TestName, 0); \
  template <typename gtest_TypeParam_> \
  void GTEST_TEST_CLASS_NAME_(CaseName, TestName)<gtest_TypeParam_>::TestBody()
    
     private:
  // Replaces multiple consecutive separators with a single separator.
  // For example, 'bar///foo' becomes 'bar/foo'. Does not eliminate other
  // redundancies that might be in a pathname involving '.' or '..'.
  //
  // A pathname with multiple consecutive separators may occur either through
  // user error or as a result of some scripts or APIs that generate a pathname
  // with a trailing separator. On other platforms the same API or script
  // may NOT generate a pathname with a trailing '/'. Then elsewhere that
  // pathname may have another '/' and pathname components added to it,
  // without checking for the separator already being there.
  // The script language and operating system may allow paths like 'foo//bar'
  // but some of the functions in FilePath will not handle that correctly. In
  // particular, RemoveTrailingPathSeparator() only removes one separator, and
  // it is called in CreateDirectoriesRecursively() assuming that it will change
  // a pathname from directory syntax (trailing separator) to filename syntax.
  //
  // On Windows this method also replaces the alternate path separator '/' with
  // the primary path separator '\\', so that for example 'bar\\/\\foo' becomes
  // 'bar\\foo'.
    
    
$for m [[
  T$m f$(m)_;
    
      const char* const name = typeid(T).name();
#  if GTEST_HAS_CXXABI_H_ || defined(__HP_aCC)
  int status = 0;
  // gcc's implementation of typeid(T).name() mangles the type name,
  // so we have to demangle it.
#   if GTEST_HAS_CXXABI_H_
  using abi::__cxa_demangle;
#   endif  // GTEST_HAS_CXXABI_H_
  char* const readable_name = __cxa_demangle(name, 0, 0, &status);
  const std::string name_str(status == 0 ? readable_name : name);
  free(readable_name);
  return name_str;
#  else
  return name;
#  endif  // GTEST_HAS_CXXABI_H_ || __HP_aCC
    
    #include 'sample1.h'
    
    
// Tests IsPrime()
    
    
    {} // namespace aria2
    
      virtual bool getChangeOptionForReserved() const CXX11_OVERRIDE;
    
    
    {} // namespace aria2