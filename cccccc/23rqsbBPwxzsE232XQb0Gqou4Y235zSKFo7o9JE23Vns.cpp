
        
          /// Get a reference to the lowest layer.
  lowest_layer_type& lowest_layer()
  {
    return next_layer_.lowest_layer();
  }
    
    // Standard library components can't be forward declared, so we'll have to
// include the array header. Fortunately, it's fairly lightweight and doesn't
// add significantly to the compile time.
#if defined(BOOST_ASIO_HAS_STD_ARRAY)
# include <array>
#endif // defined(BOOST_ASIO_HAS_STD_ARRAY)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {private:
  static void barrier()
  {
#if defined(__ARM_ARCH_4__) \
    || defined(__ARM_ARCH_4T__) \
    || defined(__ARM_ARCH_5__) \
    || defined(__ARM_ARCH_5E__) \
    || defined(__ARM_ARCH_5T__) \
    || defined(__ARM_ARCH_5TE__) \
    || defined(__ARM_ARCH_5TEJ__) \
    || defined(__ARM_ARCH_6__) \
    || defined(__ARM_ARCH_6J__) \
    || defined(__ARM_ARCH_6K__) \
    || defined(__ARM_ARCH_6Z__) \
    || defined(__ARM_ARCH_6ZK__) \
    || defined(__ARM_ARCH_6T2__)
# if defined(__thumb__)
    // This is just a placeholder and almost certainly not sufficient.
    __asm__ __volatile__ ('' : : : 'memory');
# else // defined(__thumb__)
    int a = 0, b = 0;
    __asm__ __volatile__ ('swp %0, %1, [%2]'
        : '=&r'(a) : 'r'(1), 'r'(&b) : 'memory', 'cc');
# endif // defined(__thumb__)
#else
    // ARMv7 and later.
    __asm__ __volatile__ ('dmb' : : : 'memory');
#endif
  }
};
    
    template <typename Time_Traits>
std::size_t dev_poll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}
    
      int timeout = block ? get_timeout() : 0;
  lock.unlock();
    
    template <typename C>
struct compare_greater : detail::cmp_pred<C, ordering::gt, 0> {
  using detail::cmp_pred<C, ordering::gt, 0>::cmp_pred;
};
    
    
    { private:
  std::array<std::weak_ptr<T>, kNumSlots> slots_;
};
    
    FOLLY_ALWAYS_INLINE int __builtin_clzll(unsigned long long x) {
  unsigned long index;
  return int(_BitScanReverse64(&index, x) ? 63 - index : 64);
}
    
    /** TLS life state */
    
    TEST(allocateOverAligned, manualOverCustomAlloc) {
  // allocates 6 byte with alignment 64 using non-standard allocator, which
  // will result in an allocation of 64 + alignof(max_align_t) underneath.
  ExpectingAlloc<short> a(
      alignof(folly::max_align_t), 64 / alignof(folly::max_align_t) + 1);
  auto p = folly::allocateOverAligned<decltype(a), 64>(a, 3);
  EXPECT_EQ((reinterpret_cast<uintptr_t>(p) % 64), 0);
  folly::deallocateOverAligned<decltype(a), 64>(a, p, 3);
  EXPECT_EQ(
      (folly::allocationBytesForOverAligned<decltype(a), 64>(3)),
      64 + alignof(folly::max_align_t));
}
    
    using namespace folly;
    
    void AbstractBtMessage::setBtMessageValidator(
    std::unique_ptr<BtMessageValidator> validator)
{
  validator_ = std::move(validator);
}
    
      const std::shared_ptr<SocketCore>& getSocket() const { return socket_; }
    
      char shortName_;
    
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
    
    #endif // D_ABSTRACT_PROXY_REQUEST_COMMAND_H

    
    class AbstractProxyResponseCommand : public AbstractCommand {
private:
  std::shared_ptr<HttpConnection> httpConnection_;
    }
    
      void setNumNewConnection(int numNewConnection)
  {
    numNewConnection_ = numNewConnection;
  }
    
      virtual ~AppleTLSContext();
    
    namespace aria2 {
    }
    
    
    {  virtual std::unique_ptr<AuthConfig>
  resolveAuthConfig(const std::string& hostname) = 0;
};