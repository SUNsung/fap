
        
          // The d'tor restores the previous test part result reporter.
  virtual ~ScopedFakeTestPartResultReporter();
    
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
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Expands to the name of the variable used to remember the names of
// the defined tests in the given test case.
# define GTEST_TYPED_TEST_CASE_P_STATE_(TestCaseName) \
  gtest_typed_test_case_p_state_##TestCaseName##_
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED3.  Don't use
// this in your code.
#define GTEST_PRED3_(pred, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred3Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             #v3, \
                                             pred, \
                                             v1, \
                                             v2, \
                                             v3), on_failure)
    
    // Skips to the first non-space char after the first comma in 'str';
// returns NULL if no comma is found in 'str'.
inline const char* SkipComma(const char* str) {
  const char* comma = strchr(str, ',');
  if (comma == NULL) {
    return NULL;
  }
  while (IsSpace(*(++comma))) {}
  return comma;
}
    
    #endif  // GTEST_SAMPLES_PRIME_TABLES_H_

    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
      static int allocated() { return allocated_; }
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
            int length = 0;
        for(ListNode* cur = dummyHead->next ; cur != NULL ; cur = cur->next)
            length ++;
    
    
    {
    {        return true;
    }
};
    
            prev1->next = dummyHead2->next;
        ListNode* ret = dummyHead1->next;
    
    
    {    return 0;
}

    
    int main()
{
    // create a JSON value
    json j =
    {
        {'number', 1}, {'string', 'foo'}, {'array', {1, 2}}
    };
    }
    
        // out_of_range.402
    try
    {
        // try to use the array index '-'
        json::const_reference ref = j.at('/array/-'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }