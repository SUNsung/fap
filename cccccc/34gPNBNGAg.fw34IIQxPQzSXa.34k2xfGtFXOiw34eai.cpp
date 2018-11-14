
        
        #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    bool ParseAnyTypeUrl(const string& type_url, string* url_prefix,
                     string* full_type_name) {
  size_t pos = type_url.find_last_of('/');
  if (pos == string::npos || pos + 1 == type_url.size()) {
    return false;
  }
  if (url_prefix) {
    *url_prefix = type_url.substr(0, pos + 1);
  }
  *full_type_name = type_url.substr(pos + 1);
  return true;
}
    
    #include <sstream>
    
    int ImmutableExtensionLiteGenerator::GenerateRegistrationCode(
    io::Printer* printer) {
  printer->Print(
    'registry.add($scope$.$name$);\n',
    'scope', scope_,
    'name', UnderscoresToCamelCase(descriptor_));
  return 7;
}
    
    void ImmutableMapFieldGenerator::
GenerateEqualsCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'result = result && internalGet$capitalized_name$().equals(\n'
      '    other.internalGet$capitalized_name$());\n');
}
    
    
    {  printer->Print(
      variables_,
      'int32_t $owning_message_class$_$capitalized_name$_RawValue($owning_message_class$ *message) {\n'
      '  GPBDescriptor *descriptor = [$owning_message_class$ descriptor];\n'
      '  GPBFieldDescriptor *field = [descriptor fieldWithNumber:$field_number_name$];\n'
      '  return GPBGetMessageInt32Field(message, field);\n'
      '}\n'
      '\n'
      'void Set$owning_message_class$_$capitalized_name$_RawValue($owning_message_class$ *message, int32_t value) {\n'
      '  GPBDescriptor *descriptor = [$owning_message_class$ descriptor];\n'
      '  GPBFieldDescriptor *field = [descriptor fieldWithNumber:$field_number_name$];\n'
      '  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);\n'
      '}\n'
      '\n');
}
    
    class EnumFieldGenerator : public SingleFieldGenerator {
  friend FieldGenerator* FieldGenerator::Make(const FieldDescriptor* field,
                                              const Options& options);
    }
    
    
    {  printer->Print(vars,
                 '{\n'
                 '  .defaultValue.$default_name$ = $default$,\n'
                 '  .singletonName = GPBStringifySymbol($root_class_and_method_name$),\n'
                 '  .extendedClass = GPBStringifySymbol($extended_type$),\n'
                 '  .messageOrGroupClassName = $type$,\n'
                 '  .enumDescriptorFunc = $enum_desc_func_name$,\n'
                 '  .fieldNumber = $number$,\n'
                 '  .dataType = $extension_type$,\n'
                 '  .options = $options$,\n'
                 '},\n');
}
    
    // Bool() allows generating tests with parameters in a set of (false, true).
//
// Synopsis:
// Bool()
//   - returns a generator producing sequences with elements {false, true}.
//
// It is useful when testing code that depends on Boolean flags. Combinations
// of multiple flags can be tested when several Bool()'s are combined using
// Combine() function.
//
// In the following example all tests in the test case FlagDependentTest
// will be instantiated twice with parameters false and true.
//
// class FlagDependentTest : public testing::TestWithParam<bool> {
//   virtual void SetUp() {
//     external_flag = GetParam();
//   }
// }
// INSTANTIATE_TEST_CASE_P(BoolSequence, FlagDependentTest, Bool());
//
inline internal::ParamGenerator<bool> Bool() {
  return Values(false, true);
}
    
    // UniversalPrintArray(begin, len, os) prints an array of 'len'
// elements, starting at address 'begin'.
template <typename T>
void UniversalPrintArray(const T* begin, size_t len, ::std::ostream* os) {
  if (len == 0) {
    *os << '{}';
  } else {
    *os << '{ ';
    const size_t kThreshold = 18;
    const size_t kChunkSize = 8;
    // If the array has more than kThreshold elements, we'll have to
    // omit some details by printing only the first and the last
    // kChunkSize elements.
    // TODO(wan@google.com): let the user control the threshold using a flag.
    if (len <= kThreshold) {
      PrintRawArrayTo(begin, len, os);
    } else {
      PrintRawArrayTo(begin, kChunkSize, os);
      *os << ', ..., ';
      PrintRawArrayTo(begin + len - kChunkSize, kChunkSize, os);
    }
    *os << ' }';
  }
}
// This overload prints a (const) char array compactly.
GTEST_API_ void UniversalPrintArray(
    const char* begin, size_t len, ::std::ostream* os);
    
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
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(HasNewFatalFailureHelper);
};
    
      // An enumeration of the three reasons that a test might be aborted.
  enum AbortReason {
    TEST_ENCOUNTERED_RETURN_STATEMENT,
    TEST_THREW_EXCEPTION,
    TEST_DID_NOT_DIE
  };
    
    typedef char IsNotContainer;
template <class C>
IsNotContainer IsContainerTest(long /* dummy */) { return '\0'; }
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
    #if GTEST_HAS_TYPED_TEST || GTEST_HAS_TYPED_TEST_P
    
    #include <string.h>