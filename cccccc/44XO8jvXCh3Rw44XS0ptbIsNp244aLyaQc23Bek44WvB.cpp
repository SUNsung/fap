
        
        template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6>
internal::ValueArray6<T1, T2, T3, T4, T5, T6> Values(T1 v1, T2 v2, T3 v3,
    T4 v4, T5 v5, T6 v6) {
  return internal::ValueArray6<T1, T2, T3, T4, T5, T6>(v1, v2, v3, v4, v5, v6);
}
    
    namespace testing {
    }
    
    // A helper class for implementing EXPECT_FATAL_FAILURE() and
// EXPECT_NONFATAL_FAILURE().  Its destructor verifies that the given
// TestPartResultArray contains exactly one failure that has the given
// type and contains the given substring.  If that's not the case, a
// non-fatal failure will be generated.
class GTEST_API_ SingleFailureChecker {
 public:
  // The constructor remembers the arguments.
  SingleFailureChecker(const TestPartResultArray* results,
                       TestPartResult::Type type,
                       const string& substr);
  ~SingleFailureChecker();
 private:
  const TestPartResultArray* const results_;
  const TestPartResult::Type type_;
  const string substr_;
    }
    
    #include <iosfwd>
#include <vector>
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-string.h'
    
    // Then, use TYPED_TEST_P() to define as many type-parameterized tests
// for this type-parameterized test case as you want.
TYPED_TEST_P(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  TypeParam n = 0;
  ...
}
    
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
        static_cast<T>(v30_)};
    return ValuesIn(array);
  }
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    // Tests positive input.
TEST(IsPrimeTest, Positive) {
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_TRUE(IsPrime(23));
}