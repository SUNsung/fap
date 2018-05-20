
        
        
    { private:
  DISALLOW_COPY_AND_ASSIGN(UnresponsiveSuppressor);
};
    
    namespace atom {
    }
    
    namespace chrome {
class MonitorFinder;
    }
    
    #include <set>
#include <string>
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {} // namespace boost
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
// Nothing to include.
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <atomic>
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <boost/detail/atomic_count.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
    #include <boost/asio/detail/push_options.hpp>
    
    #endif // BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP

    
    #endif // BOOST_ASIO_DETAIL_EVENT_HPP

    
    #ifndef BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP
#define BOOST_ASIO_DETAIL_FD_SET_ADAPTER_HPP
    
    template <typename Handler>
inline void deallocate(void* p, std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  ::operator delete(p);
#else
  using boost::asio::asio_handler_deallocate;
  asio_handler_deallocate(p, s, boost::asio::detail::addressof(h));
#endif
}
    
    #include 'Common.h'
#include 'References.h'
    
    /* static */ void Config::destroy(Config * node)
{
    delete node;
}
    
        bool isExperimentalFeatureEnabled(int feature) const;
    
        void setFlex(double flex);
    void setFlexBasis(double flexBasis);
    void setFlexBasisPercent(double flexBasis);
    void setFlexBasisAuto();
    void setFlexGrow(double flexGrow);
    void setFlexShrink(double flexShrink);
    
    #define ASSERT_BUF_SIZE 4096
static char sAssertBuf[ASSERT_BUF_SIZE];
static AssertHandler gAssertHandler;
    
      const char* functionName() const { return m_functionName; }
  const char* fileName() const { return m_fileName; }
  int lineNumber() const { return m_lineNumber; }
    
      T* release() {
    T* obj = get();
    pthread_setspecific(m_key, NULL);
    return obj;
  }
    
    #pragma once
    
    namespace aria2 {
    }
    
    bool AbstractProxyRequestCommand::executeInternal()
{
  // socket->setBlockingMode();
  if (httpConnection_->sendBufferIsEmpty()) {
    auto httpRequest = make_unique<HttpRequest>();
    httpRequest->setUserAgent(getOption()->get(PREF_USER_AGENT));
    httpRequest->setRequest(getRequest());
    httpRequest->setProxyRequest(proxyRequest_);
    }
    }
    
    namespace aria2 {
    }
    
    
    {} // namespace aria2
    
    #include <algorithm>
    
      // Alrighty, search the fingerprint.
  const size_t nvals = CFArrayGetCount(identities);
  for (size_t i = 0; i < nvals; ++i) {
    SecIdentityRef id = (SecIdentityRef)CFArrayGetValueAtIndex(identities, i);
    if (!id) {
      A2_LOG_ERROR('Failed to get a value!');
      continue;
    }
    if (!checkIdentity(id, fp, ht)) {
      continue;
    }
    A2_LOG_INFO('Found cert with matching fingerprint');
    credentials_ = id;
    CFRetain(id);
    return true;
  }
    
      virtual bool getVerifyPeer() const CXX11_OVERRIDE { return verifyPeer_; }