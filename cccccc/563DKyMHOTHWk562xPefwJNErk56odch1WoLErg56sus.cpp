
        
        double median(const Mat& row);
    
            if(quantile_sum - low_sum > out_of_bells_fraction*total_sum)
        {
            if(max_segment_length < x - start_x)
            {
                max_segment_length = x - start_x;
                max_start_x = start_x;
                max_end_x = x;
            }
    }
    
    /* End of file. */

    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_

    
    // This helper class can be used to mock out Google Test failure reporting
// so that we can test Google Test or code that builds on Google Test.
//
// An object of this class appends a TestPartResult object to the
// TestPartResultArray object given in the constructor whenever a Google Test
// failure is reported. It can either intercept only failures that are
// generated in the same thread that created this object or it can intercept
// all generated failures. The scope of this mock object can be controlled with
// the second argument to the two arguments constructor.
class GTEST_API_ ScopedFakeTestPartResultReporter
    : public TestPartResultReporterInterface {
 public:
  // The two possible mocking modes of this object.
  enum InterceptMode {
    INTERCEPT_ONLY_CURRENT_THREAD,  // Intercepts only thread local failures.
    INTERCEPT_ALL_THREADS           // Intercepts all failures.
  };
    }
    
      // Returns a pathname for a file that does not currently exist. The pathname
  // will be directory/base_name.extension or
  // directory/base_name_<number>.extension if directory/base_name.extension
  // already exists. The number will be incremented until a pathname is found
  // that does not already exist.
  // Examples: 'dir/foo_test.xml' or 'dir/foo_test_1.xml'.
  // There could be a race condition if two or more processes are calling this
  // function at the same time -- they could both pick the same filename.
  static FilePath GenerateUniqueFileName(const FilePath& directory,
                                         const FilePath& base_name,
                                         const char* extension);
    
    // Predicate-formatters for implementing the HRESULT checking macros
// {ASSERT|EXPECT}_HRESULT_{SUCCEEDED|FAILED}
// We pass a long instead of HRESULT to avoid causing an
// include dependency for the HRESULT type.
GTEST_API_ AssertionResult IsHRESULTSuccess(const char* expr,
                                            long hr);  // NOLINT
GTEST_API_ AssertionResult IsHRESULTFailure(const char* expr,
                                            long hr);  // NOLINT
    
    // 6.1.4 Pairs.
// Unimplemented.
    
    
    {
    {    return -1;
  }
};
    
    #define BENCHMARK_TEMPLATE2_F(BaseClass, Method, a, b)           \
  BENCHMARK_TEMPLATE2_PRIVATE_DECLARE_F(BaseClass, Method, a, b) \
  BENCHMARK_REGISTER_F(BaseClass, Method);                       \
  void BaseClass##_##Method##_Benchmark::BenchmarkCase
    
      int32_t result = default_value;
  if (!ParseInt32(std::string('Environment variable ') + env_var, string_value,
                  &result)) {
    std::cout << 'The default value ' << default_value << ' is used.\n';
    return default_value;
  }
    
    #define ACQUIRE(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(acquire_capability(__VA_ARGS__))
    
      if (info.scaling_enabled) {
    Out << '***WARNING*** CPU scaling is enabled, the benchmark '
           'real time measurements may be noisy and will incur extra '
           'overhead.\n';
  }
    
    #include <cerrno>
#include <cstdlib>
#include <ctime>