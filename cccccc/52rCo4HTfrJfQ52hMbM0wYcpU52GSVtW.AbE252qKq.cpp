
        
        # define TEST_P(test_case_name, test_name) \
  class GTEST_TEST_CLASS_NAME_(test_case_name, test_name) \
      : public test_case_name { \
   public: \
    GTEST_TEST_CLASS_NAME_(test_case_name, test_name)() {} \
    virtual void TestBody(); \
   private: \
    static int AddToRegistry() { \
      ::testing::UnitTest::GetInstance()->parameterized_test_registry(). \
          GetTestCasePatternHolder<test_case_name>(\
              #test_case_name, __FILE__, __LINE__)->AddTestPattern(\
                  #test_case_name, \
                  #test_name, \
                  new ::testing::internal::TestMetaFactory< \
                      GTEST_TEST_CLASS_NAME_(test_case_name, test_name)>()); \
      return 0; \
    } \
    static int gtest_registering_dummy_; \
    GTEST_DISALLOW_COPY_AND_ASSIGN_(\
        GTEST_TEST_CLASS_NAME_(test_case_name, test_name)); \
  }; \
  int GTEST_TEST_CLASS_NAME_(test_case_name, \
                             test_name)::gtest_registering_dummy_ = \
      GTEST_TEST_CLASS_NAME_(test_case_name, test_name)::AddToRegistry(); \
  void GTEST_TEST_CLASS_NAME_(test_case_name, test_name)::TestBody()
    
    // Prints the given number of bytes in the given object to the given
// ostream.
GTEST_API_ void PrintBytesInObjectTo(const unsigned char* obj_bytes,
                                     size_t count,
                                     ::std::ostream* os);
    
    // A concrete DeathTestFactory implementation for normal use.
class DefaultDeathTestFactory : public DeathTestFactory {
 public:
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test);
};
    
      // Copy an existing linked_ptr<>, adding ourselves to the list of references.
  template <typename U> linked_ptr(linked_ptr<U> const& ptr) { copy(&ptr); }
  linked_ptr(linked_ptr const& ptr) {  // NOLINT
    assert(&ptr != this);
    copy(&ptr);
  }
    
    
    {
    {    return -1;
  }
};
    
    
        case URX_LOOP_SR_I:
            // Loop Initialization for the optimized implementation of
            //     [some character set]*
            //   This op scans through all matching input.
            //   The following LOOP_C op emulates stack unwinding if the following pattern fails.
            {
                U_ASSERT(opValue > 0 && opValue < sets->size());
                Regex8BitSet *s8 = &fPattern->fSets8[opValue];
                UnicodeSet   *s  = (UnicodeSet *)sets->elementAt(opValue);
    }
    
    
//
//   compile with default flags, UText mode
//
RegexPattern * U_EXPORT2
RegexPattern::compile(UText               *regex,
                      UParseError         &pe,
                      UErrorCode          &err)
{
    return compile(regex, 0, pe, err);
}
    
    UBool
SelectFormat::operator==(const Format& other) const {
    if (this == &other) {
        return TRUE;
    }
    if (!Format::operator==(other)) {
        return FALSE;
    }
    const SelectFormat& o = (const SelectFormat&)other;
    return msgPattern == o.msgPattern;
}
    
    U_NAMESPACE_END
    
    #endif

    
    // -------------------------------------
    
    
    {
    {        // Set the number formatter in the table
        SharedObject::copyPtr(
                newFormat, fSharedNumberFormatters[patternCharIndex]);
    }
    newFormat->deleteIfZeroRefCount();
}
    
    // Bitwise comparison for the collation keys.
UCollationResult
CollationKey::compareTo(const CollationKey& target, UErrorCode &status) const
{
  if(U_SUCCESS(status)) {
    const uint8_t *src = getBytes();
    const uint8_t *tgt = target.getBytes();
    }
    }
    
    /**
 * UnicodeReplacer API
 */
UnicodeString& StringMatcher::toReplacerPattern(UnicodeString& rule,
                                                UBool /*escapeUnprintable*/) const {
    // assert(segmentNumber > 0);
    rule.truncate(0);
    rule.append((UChar)0x0024 /*$*/);
    ICU_Utility::appendNumber(rule, segmentNumber, 10, 1);
    return rule;
}
    
    
    {        UnicodeReplacer* r = data->lookupReplacer(c);
        if (r == NULL) {
            ICU_Utility::appendToRule(rule, c, FALSE, escapeUnprintable, quoteBuf);
        } else {
            UnicodeString buf;
            r->toReplacerPattern(buf, escapeUnprintable);
            buf.insert(0, (UChar)0x20);
            buf.append((UChar)0x20);
            ICU_Utility::appendToRule(rule, buf,
                                      TRUE, escapeUnprintable, quoteBuf);
        }
    }