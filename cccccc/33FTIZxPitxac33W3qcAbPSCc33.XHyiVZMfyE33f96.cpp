
        
        //-----------------------------------------------------------------------------
//
//	class FloatAttribute
//
//-----------------------------------------------------------------------------
    
    // attributes used in headers are TypedAttributes
class Attribute;
    
    #include 'ImfGenericInputFile.h'
    
    
    {    protected:
        IMF_EXPORT
        GenericOutputFile() {}
        IMF_EXPORT
        void writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os, const Header& header);
        IMF_EXPORT
        void writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os, const Header * headers, int parts);
  
};
    
    
const char *
IStream::fileName () const
{
    return _fileName.c_str();
}
    
    #include 'ImfMultiPartInputFile.h'
    
    #define crash(msg, ...) do {                                        \
        report_fatal_error(__FILE__, __LINE__, msg, ##__VA_ARGS__); \
        BREAKPOINT; /* this used to be abort(), but it didn't cause VALGRIND to print a backtrace */ \
        ::abort();                                                  \
    } while (0)
    
        void operator()(const point_delete_t &d) {
        sampler->new_sample();
        response->response = point_delete_response_t();
        point_delete_response_t *res =
            boost::get<point_delete_response_t>(&response->response);
    }
    
    #include 'arch/io/disk.hpp'
#include 'btree/operations.hpp'
#include 'btree/reql_specific.hpp'
#include 'buffer_cache/alt.hpp'
#include 'buffer_cache/blob.hpp'
#include 'buffer_cache/cache_balancer.hpp'
#include 'containers/uuid.hpp'
#include 'unittest/unittest_utils.hpp'
#include 'rdb_protocol/btree.hpp'
#include 'rdb_protocol/datum.hpp'
#include 'rdb_protocol/store.hpp'
#include 'rdb_protocol/protocol.hpp'
#include 'serializer/log/log_serializer.hpp'
    
    
    {    return sindex_name_t(name);
}
    
    // Functions producing parameter generators.
//
// Google Test uses these generators to produce parameters for value-
// parameterized tests. When a parameterized test case is instantiated
// with a particular generator, Google Test creates and runs tests
// for each element in the sequence produced by the generator.
//
// In the following sample, tests from test case FooTest are instantiated
// each three times with parameter values 3, 5, and 8:
//
// class FooTest : public TestWithParam<int> { ... };
//
// TEST_P(FooTest, TestThis) {
// }
// TEST_P(FooTest, TestThat) {
// }
// INSTANTIATE_TEST_CASE_P(TestSequence, FooTest, Values(3, 5, 8));
//
    
      // Appends the TestPartResult object to the TestPartResultArray
  // received in the constructor.
  //
  // This method is from the TestPartResultReporterInterface
  // interface.
  virtual void ReportTestPartResult(const TestPartResult& result);
 private:
  void Init();
    
    // Implements typed tests.
    
      // These classes and funcions are friends as they need to access private
  // members of UnitTest.
  friend class Test;
  friend class internal::AssertHelper;
  friend class internal::ScopedTrace;
  friend class internal::StreamingListenerTest;
  friend class internal::UnitTestRecordPropertyTestHelper;
  friend Environment* AddGlobalTestEnvironment(Environment* env);
  friend internal::UnitTestImpl* internal::GetUnitTestImpl();
  friend void internal::ReportFailureInUnknownLocation(
      TestPartResult::Type result_type,
      const std::string& message);
    
     private:
  std::string file_;
  int line_;
  int index_;
  int write_fd_;
    
    class GTEST_API_ FilePath {
 public:
  FilePath() : pathname_('') { }
  FilePath(const FilePath& rhs) : pathname_(rhs.pathname_) { }
    }
    
    #define GTEST_TEST_NO_FATAL_FAILURE_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    ::testing::internal::HasNewFatalFailureHelper gtest_fatal_failure_checker; \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    if (gtest_fatal_failure_checker.has_new_fatal_failure()) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testnofatal_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testnofatal_, __LINE__): \
      fail('Expected: ' #statement ' doesn't generate new fatal ' \
           'failures in the current thread.\n' \
           '  Actual: it does.')
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13>
class ValueArray13 {
 public:
  ValueArray13(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13) : v1_(v1), v2_(v2), v3_(v3), v4_(v4),
      v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10), v11_(v11),
      v12_(v12), v13_(v13) {}
    }
    
    #include <utility>  // For ::std::pair.
    
      /**
   * @brief Accessor for parser-manipulated data.
   *
   * Parsers should be used generically, for places within the code base that
   * request a parser (check for its existence), should only use this
   * ConfigParserPlugin::getData accessor.
   *
   * More complex parsers that require dynamic casting are not recommended.
   */
  const JSON& getData() const {
    return data_;
  }
    
    
    {  // Try again, this time requesting scheduled queries.
  query_names.clear();
  bool blacklisted = false;
  get().scheduledQueries(([&blacklisted, &query_names, &query_name](
                              std::string name, const ScheduledQuery& query) {
                           if (name == query_name) {
                             // Only populate the query we've blacklisted.
                             query_names.push_back(std::move(name));
                             blacklisted = query.blacklisted;
                           }
                         }),
                         true);
  ASSERT_EQ(query_names.size(), std::size_t{1});
  EXPECT_EQ(query_names[0], query_name);
  EXPECT_TRUE(blacklisted);
}
    
    
    {  auto val5 = splayValue(1, 10);
  EXPECT_EQ(val5, 1U);
}
    
      /// Capture only error logs from RocksDB and forward them.
  void Logv(const char* format, va_list ap) override {
    va_list params;
    va_copy(params, ap);
    int size = vsnprintf(nullptr, 0, format, params);
    va_end(params);
    }
    
      /// The line of the file emitting the status log.
  size_t line;
    
    void Plugin::setName(const std::string& name) {
  if (!name_.empty() && name != name_) {
    std::string error = 'Cannot rename plugin ' + name_ + ' to ' + name;
    throw std::runtime_error(error);
  }
    }
    
    
    { protected:
  /// Customized name for the plugin, usually set by the registry.
  std::string name_;
};
    
    #include <boost/filesystem.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>