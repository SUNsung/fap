
        
        // Used to print an STL-style container when the user doesn't define
// a PrintTo() for it.
template <typename C>
void DefaultPrintTo(IsContainer /* dummy */,
                    false_type /* is not a pointer */,
                    const C& container, ::std::ostream* os) {
  const size_t kMaxCount = 32;  // The maximum number of elements to print.
  *os << '{';
  size_t count = 0;
  for (typename C::const_iterator it = container.begin();
       it != container.end(); ++it, ++count) {
    if (count > 0) {
      *os << ',';
      if (count == kMaxCount) {  // Enough has been printed.
        *os << ' ...';
        break;
      }
    }
    *os << ' ';
    // We cannot call PrintTo(*it, os) here as PrintTo() doesn't
    // handle *it being a native array.
    internal::UniversalPrint(*it, os);
  }
    }
    }
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
      // Returns the test name.
  const char* name() const { return name_.c_str(); }
    
    // In describing the results of death tests, these terms are used with
// the corresponding definitions:
//
// exit status:  The integer exit information in the format specified
//               by wait(2)
// exit code:    The integer code passed to exit(3), _exit(2), or
//               returned from main()
class GTEST_API_ DeathTest {
 public:
  // Create returns false if there was an error determining the
  // appropriate action to take for the current death test; for example,
  // if the gtest_death_test_style flag is set to an invalid value.
  // The LastMessage method will return a more detailed message in that
  // case.  Otherwise, the DeathTest pointer pointed to by the 'test'
  // argument is set.  If the death test should be skipped, the pointer
  // is set to NULL; otherwise, it is set to the address of a new concrete
  // DeathTest object that controls the execution of the current test.
  static bool Create(const char* statement, const RE* regex,
                     const char* file, int line, DeathTest** test);
  DeathTest();
  virtual ~DeathTest() { }
    }
    
        // First, registers the first type-parameterized test in the type
    // list.
    MakeAndRegisterTestInfo(
        (std::string(prefix) + (prefix[0] == '\0' ? '' : '/') + case_name + '/'
         + StreamableToString(index)).c_str(),
        GetPrefixUntilComma(test_names).c_str(),
        GetTypeName<Type>().c_str(),
        NULL,  // No value parameter.
        GetTypeId<FixtureClass>(),
        TestClass::SetUpTestCase,
        TestClass::TearDownTestCase,
        new TestFactoryImpl<TestClass>);
    
    // Tests the c'tor that accepts a C string.
TEST(MyString, ConstructorFromCString) {
  const MyString s(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
  EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
            s.Length());
}
    
    struct grpc_auth_context;
    
    #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    #include <grpc/support/port_platform.h>
    
    namespace grpc {
    }
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_MEASURES_H
    
      void Destroy(grpc_call_element* elem, const grpc_call_final_info* final_info,
               grpc_closure* then_call_closure) override;
    
    const ViewDescriptor& ServerCompletedRpcsCumulative() {
  const static ViewDescriptor descriptor =
      ViewDescriptor()
          .set_name('grpc.io/server/completed_rpcs/cumulative')
          .set_measure(kRpcServerServerLatencyMeasureName)
          .set_aggregation(Aggregation::Count())
          .add_column(ServerMethodTagKey())
          .add_column(ServerStatusTagKey());
  return descriptor;
}
    
    #ifndef GRPC_INTERNAL_CPP_EXT_PROTO_SERVER_REFLECTION_H
#define GRPC_INTERNAL_CPP_EXT_PROTO_SERVER_REFLECTION_H
    
      /*
   * @brief a unique ID identifying the 'carve'
   *
   * This unique generated GUID is used to identify the carve session from
   * other carves. It is also used by our backend service to derive a
   * session key for exfiltration.
   */
  std::string carveGuid_;
    
    
    {  return Status();
}
    
    #include <osquery/config.h>
#include <osquery/logger.h>
#include <osquery/registry_factory.h>
    
    DECLARE_bool(disable_decorators);
DECLARE_bool(decorations_top_level);
    
    TEST_F(PacksTests, test_discovery_cache) {
  Config c;
  // This pack and discovery query are valid, expect the SQL to execute.
  c.addPack('valid_discovery_pack', '', getPackWithValidDiscovery().doc());
  size_t query_count = 0U;
  size_t query_attemts = 5U;
  for (size_t i = 0; i < query_attemts; i++) {
    c.scheduledQueries(
        ([&query_count](std::string name, const ScheduledQuery& query) {
          query_count++;
        }));
  }
  EXPECT_EQ(query_count, query_attemts);
    }
    
    TEST_F(QueryTests, test_query_name_not_found_in_db) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('not_a_real_query', query);
  auto status = cf.getPreviousQueryResults(previous_qd);
  EXPECT_FALSE(status.ok());
  EXPECT_TRUE(previous_qd.empty());
}
    
      /// Remove an autoloadable extension path.
  void removeExtensionPath(const std::string& extension);
    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
    class DHTReplaceNodeTask : public DHTAbstractTask {
private:
  std::shared_ptr<DHTBucket> bucket_;
    }
    
      ~DHTRoutingTableSerializer();
    
    
    {} // namespace aria2
    
    #include <vector>
#include <deque>
#include <memory>
    
      void setLocalNode(const std::shared_ptr<DHTNode>& localNode);
    
      DHTTaskExecutor periodicTaskQueue2_;
    
    public:
  DHTTokenTracker();
    
    std::string DHTUnknownMessage::toString() const
{
  size_t sampleLength = 8;
  if (length_ < sampleLength) {
    sampleLength = length_;
  }
  return fmt('dht unknown Remote:%s(%u) length=%lu, first 8 bytes(hex)=%s',
             ipaddr_.c_str(), port_, static_cast<unsigned long>(length_),
             util::toHex(data_, sampleLength).c_str());
}
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);
    
    bool DNSCache::CacheEntry::contains(const std::string& addr) const
{
  return find(addr) != addrEntries_.end();
}
    
    #if BOOST_ATOMIC_THREAD_FENCE > 0
BOOST_FORCEINLINE void atomic_thread_fence(memory_order order) BOOST_NOEXCEPT
{
    detail::thread_fence(order);
}
#else
BOOST_FORCEINLINE void atomic_thread_fence(memory_order) BOOST_NOEXCEPT
{
    detail::lockpool::thread_fence();
}
#endif