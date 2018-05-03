
        
        class FooTest : public ::testing::TestWithParam<const char*> {
  // You can implement all the usual class fixture members here.
};
    
    INSTANTIATE_TEST_CASE_P(InstantiationName,
                        FooTest,
                        Values('meeny', 'miny', 'moe'));
    
    template <typename T>
class TypeWithoutFormatter<T, kProtobuf> {
 public:
  static void PrintValue(const T& value, ::std::ostream* os) {
    const ::testing::internal::string short_str = value.ShortDebugString();
    const ::testing::internal::string pretty_str =
        short_str.length() <= kProtobufOneLinerMaxLength ?
        short_str : ('\n' + value.DebugString());
    *os << ('<' + pretty_str + '>');
  }
};
    
    namespace internal {
    }
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ', '
                            << e4 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3
                            << '\n' << e4 << ' evaluates to ' << v4;
}
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_DEATH_TEST_INTERNAL_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_DEATH_TEST_INTERNAL_H_
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17>
class ValueArray17 {
 public:
  ValueArray17(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16,
      T17 v17) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
      v15_(v15), v16_(v16), v17_(v17) {}
    }
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Stores a parameter value and later creates tests parameterized with that
// value.
template <class TestClass>
class ParameterizedTestFactory : public TestFactoryBase {
 public:
  typedef typename TestClass::ParamType ParamType;
  explicit ParameterizedTestFactory(ParamType parameter) :
      parameter_(parameter) {}
  virtual Test* CreateTest() {
    TestClass::SetParam(&parameter_);
    return new TestClass();
  }
    }
    
      tuple& operator=(const tuple& t) { return CopyFrom(t); }
    
      void operator delete(void* block, size_t /* allocation_size */) {
    allocated_--;
    free(block);
  }
    
    
    {  new_tensor->tensor_id = THDState::s_nextId++;
  return new_tensor;
}
    
    
    {  delete tensor;
  delete tensor2;
  cout << 'OK' << endl;
  return 0;
}

    
    #include 'torch/csrc/Exceptions.h'
#include 'torch/csrc/utils/auto_gil.h'
#include 'torch/csrc/utils/python_scalars.h'
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHCudaByteTensor(THCudaByteTensor *tensor) {
  return at::getType(at::Backend::CUDA, at::ScalarType::Byte).unsafeTensorFromTH((void*)tensor, true);
}
#endif

    
      /**
   * @brief Optionally handle each published event via the logger.
   *
   * It is possible to skip the database representation of event subscribers
   * and instead forward each added event to the active logger plugin.
   */
  virtual Status logEvent(const std::string& /*s*/) {
    return Status(1, 'Not enabled');
  }
    
    
    {// Remove registry-helper macros from the SDK.
#undef REGISTER
#define REGISTER 'Do not REGISTER in the osquery SDK'
#undef REGISTER_INTERNAL
#define REGISTER_INTERNAL 'Do not REGISTER_INTERNAL in the osquery SDK'
#undef CREATE_REGISTRY
#define CREATE_REGISTRY 'Do not CREATE_REGISTRY in the osquery SDK'
#undef CREATE_LAZY_REGISTRY
#define CREATE_LAZY_REGISTRY 'Do not CREATE_LAZY_REGISTRY in the osquery SDK'
}

    
    
    {  /// IOCTL API handling mutex.
  lck_mtx_t *mtx;
} osquery = {.open_count = 0,
             .buffer = NULL,
             .buf_size = 0,
             .md = NULL,
             .mm = NULL,
             .devfs = NULL,
             .major_number = OSQUERY_MAJOR};
    
    #include <osquery/config.h>
#include <osquery/database.h>
    
    FLAG(int32, test_int32, 1, 'none');
FLAG_ALIAS(google::int32, test_int32_alias, test_int32);
    
    TEST_F(StatusTests, test_constructor) {
  auto s = Status(5, 'message');
  EXPECT_EQ(s.getCode(), 5);
  EXPECT_EQ(s.getMessage(), 'message');
}