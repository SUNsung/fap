
        
        #endif  // GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_

    
      // Waits for the death test to finish and returns its status.
  virtual int Wait() = 0;
    
    // A handy wrapper for AddRef.
#define GTEST_ADD_REF_(T) typename ::std::tr1::gtest_internal::AddRef<T>::type
    
    $range i 1..n-1
$for i [[
$range j 1..i
$range k i+1..n
template <$for j, [[typename T$j]]>
struct Types<$for j, [[T$j]]$for k[[, internal::None]]> {
  typedef internal::Types$i<$for j, [[T$j]]> type;
};
    
    #include <boost/algorithm/string/join.hpp>
#include <boost/algorithm/string/predicate.hpp>
    
      /**
   * @brief A convenience method to check if the return code is 0
   *
   * @code{.cpp}
   *   auto s = doSomething();
   *   if (s.ok()) {
   *     LOG(INFO) << 'doing work';
   *   } else {
   *     LOG(ERROR) << s.toString();
   *   }
   * @endcode
   *
   * @return a boolean which is true if the status code is 0, false otherwise.
   */
  bool ok() const { return getCode() == 0; }
    
      // All control should be from a single daemon.
  // Wrap all IOCTL API handling in locks to guarantee proper use.
  lck_mtx_lock(osquery.mtx);
  switch (cmd) {
  // Daemon is requesting a new subscription (e.g., monitored path).
  case OSQUERY_IOCTL_SUBSCRIPTION:
    sub = (osquery_subscription_args_t *)data;
    if ((err = subscribe_to_event(sub->event, sub->subscribe))) {
      goto error_exit;
    }
    break;
    }
    
    #include <osquery/config.h>
#include <osquery/database.h>
    
    /**
 * @brief Split a given string based on an delimiter.
 *
 * @param s the string that you'd like to split.
 * @param delim the delimiter which you'd like to split the string by.
 * @param occurrences the number of times to split by delim.
 *
 * @return a vector of strings split by delim for occurrences.
 */
std::vector<std::string> split(const std::string& s,
                               const std::string& delim,
                               size_t occurences);
    
      virtual bool isHidden() const CXX11_OVERRIDE;
    
    
    {} // namespace aria2
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
      virtual TLSSessionSide getSide() const CXX11_OVERRIDE { return side_; }
    
    #endif // D_ASYNC_NAME_RESOLVER_MAN_H
