
        
        struct TemporaryFile {
  std::string path;
    }
    
    **Result**
    
    #define EXPECT_FATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do { \
    class GTestExpectFatalFailureHelper {\
     public:\
      static void Execute() { statement; }\
    };\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kFatalFailure, (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter:: \
          INTERCEPT_ALL_THREADS, &gtest_failures);\
      GTestExpectFatalFailureHelper::Execute();\
    }\
  } while (::testing::internal::AlwaysFalse())
    
      const std::string& string() const { return pathname_; }
  const char* c_str() const { return pathname_.c_str(); }
    
    // ArrayEq() compares two k-dimensional native arrays using the
// elements' operator==, where k can be any integer >= 0.  When k is
// 0, ArrayEq() degenerates into comparing a single pair of values.
    
    template <GTEST_3_TYPENAMES_(T)>
class GTEST_3_TUPLE_(T) {
 public:
  template <int k> friend class gtest_internal::Get;
    }
    
    
    {  return result;
}
    
    TEST(ListenersTest, DoesNotLeak) {
  Water* water = new Water;
  delete water;
}
    
      ////////////////////////////////////////////////////////////
  //
  // D'tor.  MyString is intended to be a final class, so the d'tor
  // doesn't need to be virtual.
  ~MyString() { delete[] c_string_; }
    
    #include 'Number.h'
    
    namespace
{
    void IFT(ResultCode hr)
    {
        if (FAILED(hr))
        {
            throw hr;
        }
    }
}
void CHistoryCollector::ReinitHistory()
{
    m_lastOpStartIndex = -1;
    m_lastBinOpStartIndex = -1;
    m_curOperandIndex = 0;
    m_bLastOpndBrace = false;
    if (m_spTokens != nullptr)
    {
        m_spTokens->Clear();
    }
    if (m_spCommands != nullptr)
    {
        m_spCommands->Clear();
    }
}
    
    
    {    return StandardPeers::AutomationNotificationProcessing::ImportantMostRecent;
}
