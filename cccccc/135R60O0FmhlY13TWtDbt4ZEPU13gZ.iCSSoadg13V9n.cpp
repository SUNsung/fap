
        
        #endif  // 0
    
    #if GTEST_HAS_STD_WSTRING
template <>
class UniversalTersePrinter<const wchar_t*> {
 public:
  static void Print(const wchar_t* str, ::std::ostream* os) {
    if (str == NULL) {
      *os << 'NULL';
    } else {
      UniversalPrint(::std::wstring(str), os);
    }
  }
};
#endif
    
      // Gets the (mutable) vector of TestInfos in this TestCase.
  std::vector<TestInfo*>& test_info_list() { return test_info_list_; }
    
      explicit tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3, GTEST_BY_REF_(T4) f4,
      GTEST_BY_REF_(T5) f5) : f0_(f0), f1_(f1), f2_(f2), f3_(f3), f4_(f4),
      f5_(f5) {}
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
    
    {  return clone;
}
    
    // Tests the Set method.
TEST(MyString, Set) {
  MyString s;
    }
    
      /// equals operator
  bool operator==(const QueryLogItem& comp) const {
    return (comp.results == results) && (comp.name == name);
  }
    
    #endif

    
      JSON doc = JSON::newArray();
  auto arr1 = doc.getArray();
  doc.copyFrom(r.first.doc(), arr1);
  doc.push(arr1);
    
    const std::string kTestQuery{'SELECT * FROM test_table'};
    
      // Get address of ProcessParameters struct
  unsigned long long procParamsAddr = 0;
  if (data->ReadPointersVirtual(
          1, pebAddr + procParamsOffset, &procParamsAddr) != S_OK) {
    return Status(1);
  }