
        
        // The helper function for {ASSERT|EXPECT}_STREQ.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult CmpHelperSTREQ(const char* expected_expression,
                                          const char* actual_expression,
                                          const char* expected,
                                          const char* actual);
    
    // 5-ary predicate assertion macros.
#define EXPECT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)
    
    // Names of the flags (needed for parsing Google Test flags).
const char kDeathTestStyleFlag[] = 'death_test_style';
const char kDeathTestUseFork[] = 'death_test_use_fork';
const char kInternalRunDeathTestFlag[] = 'internal_run_death_test';
    
    // The base case for the compile time recursion.
template <GTEST_TEMPLATE_ Fixture, typename Types>
class TypeParameterizedTestCase<Fixture, Templates0, Types> {
 public:
  static bool Register(const char* /*prefix*/, const char* /*case_name*/,
                       const char* /*test_names*/) {
    return true;
  }
};
    
      linked_ptr& operator=(linked_ptr const& ptr) {
    if (&ptr != this) {
      depart();
      copy(&ptr);
    }
    return *this;
  }
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}
