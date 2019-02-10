
        
        struct TemporaryFile {
  std::string path;
    }
    
    **Code**
    
    <summary> <b>Example</b> </summary>
    
    Github Links:
- https://github.com/caffe2/caffe2/blob/master/caffe2/operators/given_tensor_fill_op.h
- https://github.com/caffe2/caffe2/blob/master/caffe2/operators/given_tensor_fill_op.cc
    
              vector<TensorShape> out(1);
          switch (order) {
            case StorageOrder::NCHW:
              out[0] = CreateTensorShape(
                  vector<int>{N, C * kernel_h * kernel_w, out_h, out_w},
                  TensorProto::FLOAT);
              break;
            case StorageOrder::NHWC:
              out[0] = CreateTensorShape(
                  vector<int>{N, out_h, out_w, kernel_h * kernel_w * C},
                  TensorProto::FLOAT);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
    // Streams a Message to an ostream.
inline std::ostream& operator <<(std::ostream& os, const Message& sb) {
  return os << sb.GetString();
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
    
      // Gets the vector of TestProperties.
  const std::vector<TestProperty>& test_properties() const {
    return test_properties_;
  }
    
      // Returns a human-readable outcome message regarding the outcome of
  // the last death test.
  static const char* LastMessage();
    
    // Tests negative input.
TEST(IsPrimeTest, Negative) {
  // This test belongs to the IsPrimeTest test case.
    }
    
    
    {    /**
     * append support double float int32 int64
     * */
    void str_append_number(std::string& str, double  num);
    void str_append_number(std::string& str, float  num);
    void str_append_number(std::string& str, int32_t  num);
    void str_append_number(std::string& str, int64_t  num);
}