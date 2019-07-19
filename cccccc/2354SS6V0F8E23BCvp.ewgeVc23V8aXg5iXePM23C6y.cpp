
        
          // The C++ pool acting as an underlay. Can be NULL.
  // This pointer is not owned and must stay alive.
  const DescriptorPool* underlay;
    
    
    {  // Template specialization will convert the if() condition to a constant,
  // which will cause the compiler to generate code for either the 'if' part
  // or the 'then' part.  In this way we avoid a compiler warning
  // about a potential integer overflow in crosstool v12 (gcc 4.3.1).
  if (MathLimits<T>::kIsInteger) {
    return x == y;
  } else {
    if (!MathLimits<T>::IsFinite(x) || !MathLimits<T>::IsFinite(y)) {
      return false;
    }
    T relative_margin = static_cast<T>(fraction * Max(Abs(x), Abs(y)));
    return AbsDiff(x, y) <= Max(margin, relative_margin);
  }
}
    
      TestUtil::SetAllFields(&msg1);
  TestUtil::SetAllFields(&msg2);
    
    TEST_F(JsonObjectWriterTest, EmptyRootList) {
  ow_ = new JsonObjectWriter('', out_stream_);
  ow_->StartList('')->EndList();
  EXPECT_EQ('[]', CloseStreamAndGetString());
}
    
    TEST(StructurallyValidTest, ValidUTF8String) {
  // On GCC, this string can be written as:
  //   'abcd 1234 - \u2014\u2013\u2212'
  // MSVC seems to interpret \u differently.
  string valid_str('abcd 1234 - \342\200\224\342\200\223\342\210\222 - xyz789');
  EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data(),
                                      valid_str.size()));
  // Additional check for pointer alignment
  for (int i = 1; i < 8; ++i) {
    EXPECT_TRUE(IsStructurallyValidUTF8(valid_str.data() + i,
                                        valid_str.size() - i));
  }
}
    
      // C'tor.  TestPartResult does NOT have a default constructor.
  // Always use this constructor (with parameters) to create a
  // TestPartResult object.
  TestPartResult(Type a_type,
                 const char* a_file_name,
                 int a_line_number,
                 const char* a_message)
      : type_(a_type),
        file_name_(a_file_name == NULL ? '' : a_file_name),
        line_number_(a_line_number),
        summary_(ExtractSummary(a_message)),
        message_(a_message) {
  }
    
     protected:
  // Creates a Test object.
  Test();
    
    # else
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement)
    
     private:
  // No implementation - assignment is unsupported.
  void operator=(const ValueArray6& other);
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11>
struct Templates11 {
  typedef TemplateSel<T1> Head;
  typedef Templates10<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> Tail;
};
    
    
    {	return userOnly;
}