
        
          grpc::testing::RunSynchronousUnaryPingPong();
    
      Result Mark() const;
    
      grpc::Status GetGauge(ServerContext* context, const GaugeRequest* request,
                        GaugeResponse* response) override;
    
    /**
 * Install the terminate / unexpected handlers to dump exceptions.
 */
void installHandlers();
    
    template <typename T>
std::weak_ptr<T> SingletonHolder<T>::get_weak() {
  if (UNLIKELY(state_.load(std::memory_order_acquire) !=
               SingletonHolderState::Living)) {
    createInstance();
  }
    }
    
    
    {  SingletonHolder(const SingletonHolder&) = delete;
  SingletonHolder& operator=(const SingletonHolder&) = delete;
  SingletonHolder& operator=(SingletonHolder&&) = delete;
  SingletonHolder(SingletonHolder&&) = delete;
};
    
    #include <atomic>
#include <new>
    
    // Generic wrapper for the p* family of functions.
template <class F, class... Args>
static int wrapPositional(F f, int fd, off_t offset, Args... args) {
  off_t origLoc = lseek(fd, 0, SEEK_CUR);
  if (origLoc == (off_t)-1) {
    return -1;
  }
  if (lseek(fd, offset, SEEK_SET) == (off_t)-1) {
    return -1;
  }
    }
    
    
    {  EXPECT_EQ(1, estimates.quantiles[0].second);
  EXPECT_EQ(2.0 - 0.5, estimates.quantiles[1].second);
  EXPECT_EQ(50.375, estimates.quantiles[2].second);
  EXPECT_EQ(100.0 - 0.5, estimates.quantiles[3].second);
  EXPECT_EQ(100, estimates.quantiles[4].second);
}
    
    
    {  friend bool operator==(Self const&, Self const&) noexcept {
    return true;
  }
  friend bool operator!=(Self const&, Self const&) noexcept {
    return false;
  }
};
    
    #include <folly/container/detail/F14Table.h>