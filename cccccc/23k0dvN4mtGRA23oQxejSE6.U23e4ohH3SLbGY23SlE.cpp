
        
        STATISTIC(NumRequirementEnvironments, '# of requirement environments');
    
    using namespace swift::sys;
using llvm::StringRef;
    
        // If this is a skippable suffix, skip it and keep looking.
    if (nameWordRevIter == nameWordRevIterBegin) {
      if (auto withoutSuffix = skipTypeSuffix(typeName.Name)) {
        typeName.Name = *withoutSuffix;
        typeWords = camel_case::getWords(typeName.Name);
        typeWordRevIter = typeWords.rbegin();
        typeWordRevIterEnd = typeWords.rend();
        continue;
      }
    }
    
        /// Returns true if \p loc is inside one of Swift's synthetic buffers.
    static bool isInSwiftBuffers(clang::FullSourceLoc loc) {
      StringRef bufName = StringRef(loc.getManager().getBufferName(loc));
      return bufName == ClangImporter::Implementation::moduleImportBufferName ||
             bufName == ClangImporter::Implementation::bridgingHeaderBufferName;
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
    
    // A copyable object representing the result of a test part (i.e. an
// assertion or an explicit FAIL(), ADD_FAILURE(), or SUCCESS()).
//
// Don't inherit from TestPartResult as its destructor is not virtual.
class GTEST_API_ TestPartResult {
 public:
  // The possible outcomes of a test part (i.e. an assertion or an
  // explicit SUCCEED(), FAIL(), or ADD_FAILURE()).
  enum Type {
    kSuccess,          // Succeeded.
    kNonFatalFailure,  // Failed but the test can continue.
    kFatalFailure      // Failed and the test should be terminated.
  };
    }
    
    #define GTEST_TEST_NO_THROW_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (...) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testnothrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testnothrow_, __LINE__): \
      fail('Expected: ' #statement ' doesn't throw an exception.\n' \
           '  Actual: it throws.')
    
    // SameSizeTuplePrefixComparator<k, k>::Eq(t1, t2) returns true if the
// first k fields of t1 equals the first k fields of t2.
// SameSizeTuplePrefixComparator(k1, k2) would be a compiler error if
// k1 != k2.
template <int kSize1, int kSize2>
struct SameSizeTuplePrefixComparator;
    
    
    {    return -1;
  }
    
    
    {Status startDistributed() {
  if (!FLAGS_disable_distributed) {
    Dispatcher::addService(std::make_shared<DistributedRunner>());
    return Status(0, 'OK');
  } else {
    return Status(1, 'Distributed query service not enabled.');
  }
}
} // namespace osquery

    
    #include <atomic>
#include <condition_variable>
#include <cstddef>
#include <memory>
#include <mutex>
#include <queue>
#include <string>
    
     protected:
  /**
   * @brief Reconfigure the publisher to start forwarding events to a new
   * ev2::Subscription.
   *
   * @details If necessary, specializations of ev2::SimplePublisher should
   * override reconfigure() to setup any internal state necessary to start
   * forwarding events to a new ev2::Subscription.
   */
  virtual ExpectedSuccess<Publisher::Error> reconfigure(
      const std::shared_ptr<SubscriptionT>& sub) {
    return Success();
  }
    
    const std::type_index& Subscription::pubType() const {
  return pub_type_;
}
    
    
    {    EXPECT_EQ(sub.avail(), 1);
  };
    
    Status deserializeQueryDataJSON(const std::string& json, QueryDataSet& qd) {
  rj::Document doc;
  if (doc.Parse(json.c_str()).HasParseError()) {
    return Status(1, 'Error serializing JSON');
  }
  return deserializeQueryData(doc, qd);
}
    
      // Notifications
  void error(const QString& msg);
    
    
    {        emit connectionAboutToBeEdited(name);
        m_connections.removeAll(connection);
        m_connectionMapping.remove(connection);
        removeRootItem(serverItem);
        saveConfig();
      });
    
    class HashKeyModel : public KeyModel<QPair<QByteArray, QByteArray>>
{
public:
    HashKeyModel(QSharedPointer<RedisClient::Connection> connection,
                 QByteArray fullPath, int dbIndex, long long ttl);
    }
    
        static void UpdateConfigFromBinary(const BinaryFormat &, uint64_t, Config &/*config*/) {}
    
    bool RecognizeBinary(const char *file, ModelType &recognized) {
  util::scoped_fd fd(util::OpenReadOrThrow(file));
  if (!IsBinaryFormat(fd.get())) {
    return false;
  }
  Parameters params;
  ReadHeader(fd.get(), params);
  recognized = params.fixed.model_type;
  return true;
}
    
    /* Suppose 'foo bar' appears with zero backoff but there is no trigram
 * beginning with these words.  Then, when scoring 'foo bar', the model could
 * return out_state containing 'bar' or even null context if 'bar' also has no
 * backoff and is never followed by another word.  Then the backoff is set to
 * kNoExtensionBackoff.  If the n-gram might be extended, then out_state must
 * contain the full n-gram, in which case kExtensionBackoff is set.  In any
 * case, if an n-gram has non-zero backoff, the full state is returned so
 * backoff can be properly charged.
 * These differ only in sign bit because the backoff is in fact zero in either
 * case.
 */
const float kNoExtensionBackoff = -0.0;
const float kExtensionBackoff = 0.0;
const uint64_t kNoExtensionQuant = 0;
const uint64_t kExtensionQuant = 1;
    
    template <class Range> struct SuffixLexicographicLess : public std::binary_function<const Range, const Range, bool> {
  bool operator()(const Range first, const Range second) const {
    for (const WordIndex *f = first.end() - 1, *s = second.end() - 1; f >= first.begin() && s >= second.begin(); --f, --s) {
      if (*f < *s) return true;
      if (*f > *s) return false;
    }
    return first.size() < second.size();
  }
};
    
        Proxy *operator->() { return &proxy_; }
    const Proxy *operator->() const { return &proxy_; }
    
    
    {  private:
    util::scoped_memory memory_;
    std::vector<const char*> map_;
};
    
    boost::program_options::typed_value<std::string> *SizeOption(std::size_t &to, const char *default_value) {
  return boost::program_options::value<std::string>()->notifier(SizeNotify(to))->default_value(default_value);
}
    
    namespace lm {
namespace interpolate {
    }
    }