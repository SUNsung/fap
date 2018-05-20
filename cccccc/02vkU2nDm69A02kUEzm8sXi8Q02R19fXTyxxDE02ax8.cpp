
        
        #include 'mbedtls/config.h'
#include 'mbedtls/ctr_drbg.h'
#include 'mbedtls/debug.h'
#include 'mbedtls/entropy.h'
#include 'mbedtls/net.h'
#include 'mbedtls/ssl.h'
    
    			if (delta == 0)
				return;
    
    	inline static GDNativeCallRegistry *get_singleton() {
		return singleton;
	}
    
        const int z1 = MULTIPLY(z2 + z3, FIX_0_541196100);
    const int tmp2 = z1 + MULTIPLY(z3, - FIX_1_847759065);
    const int tmp3 = z1 + MULTIPLY(z2, FIX_0_765366865);
    
    
    
      /// Place the acceptor into the state where it will listen for new
  /// connections.
  /**
   * This function puts the socket acceptor into the state where it may accept
   * new connections.
   *
   * @param backlog The maximum length of the queue of pending connections.
   *
   * @throws boost::system::system_error Thrown on failure.
   */
  void listen(int backlog = socket_base::max_connections)
  {
    boost::system::error_code ec;
    this->get_service().listen(this->get_implementation(), backlog, ec);
    boost::asio::detail::throw_error(ec, 'listen');
  }
    
    template <typename Stream>
class buffered_stream;
    
    // Helper class to determine whether or not the current thread is inside an
// invocation of io_service::run() for a specified io_service object.
template <typename Key, typename Value = unsigned char>
class call_stack
{
public:
  // Context class automatically pushes the key/value pair on to the stack.
  class context
    : private noncopyable
  {
  public:
    // Push the key on to the stack.
    explicit context(Key* k)
      : key_(k),
        next_(call_stack<Key, Value>::top_)
    {
      value_ = reinterpret_cast<unsigned char*>(this);
      call_stack<Key, Value>::top_ = this;
    }
    }
    }
    
    } // namespace date_time
namespace posix_time {
    
    #endif // BOOST_ASIO_DETAIL_EVENT_HPP

    
    #include <boost/asio/detail/push_options.hpp>
    
    void buffer_sequence_adapter_base::init_native_buffer(
    buffer_sequence_adapter_base::native_buffer_type& buf,
    const boost::asio::const_buffer& buffer)
{
  std::memset(&buf, 0, sizeof(native_buffer_type));
  Microsoft::WRL::ComPtr<IInspectable> insp
    = Microsoft::WRL::Make<winrt_buffer_impl>(buffer);
  Platform::Object^ buf_obj = reinterpret_cast<Platform::Object^>(insp.Get());
  buf = reinterpret_cast<Windows::Storage::Streams::IBuffer^>(insp.Get());
}
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    CHECK(page.offset.size() != 0 && page.offset[0] == 0);
    CHECK_EQ(page.offset.back(), page.data.size());
    fo->Write(page.offset);
    min_index_ = page.min_index;
    fo->Write(&min_index_, sizeof(min_index_));
    index_.data.resize(page.data.size());
    value_.data.resize(page.data.size());
    }
    
    TEST(Metric, LogLoss) {
  xgboost::Metric * metric = xgboost::Metric::Create('logloss');
  ASSERT_STREQ(metric->Name(), 'logloss');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              1.2039f, 0.001f);
}
    
    #include <algorithm>
#include <cstdlib>
#include <initializer_list>
#include <vector>
    
      void Configure(const std::vector<std::pair<std::string, std::string> >& cfg) override {
    this->cfg_ = cfg;
    model_.Configure(cfg);
    // initialize the updaters only when needed.
    std::string updater_seq = tparam_.updater_seq;
    tparam_.InitAllowUnknown(cfg);
    if (updater_seq != tparam_.updater_seq) updaters_.clear();
    for (const auto& up : updaters_) {
      up->Init(cfg);
    }
    // for the 'update' process_type, move trees into trees_to_update
    if (tparam_.process_type == kUpdate) {
      model_.InitTreesToUpdate();
    }
    }
    
    // objectives
#include '../src/objective/objective.cc'
#include '../src/objective/regression_obj.cc'
#include '../src/objective/multiclass_obj.cc'
#include '../src/objective/rank_obj.cc'
    
    DMLC_REGISTRY_FILE_TAG(updater_shotgun);
    
    TEST(WriteChainAsyncTransportWrapperTest, TestSimpleBuf) {
  TestWriteChainAsyncTransportWrapper transport;
  auto buf = folly::IOBuf::copyBuffer('foobar');
    }
    
    struct ExceptionInfo {
  const std::type_info* type{nullptr};
  // The values in frames are IP (instruction pointer) addresses.
  // They are only filled if the low-level exception tracer library is
  // linked in or LD_PRELOADed.
  std::vector<uintptr_t> frames; // front() is top of stack
};
    
      /**
   * Finds the first occurrence of the character sequence `that` in this string.
   * \note Equivalent to `find(that.data(), 0, strlen(that))`
   */
  constexpr std::size_t find(const Char* that) const noexcept {
    return find(that, 0u, folly::constexpr_strlen(that));
  }
    
      {
    auto copy = *buf;
    EXPECT_TRUE(buf->isShared());
    EXPECT_TRUE(copy.isShared());
    EXPECT_EQ((void*)buf->data(), (void*)copy.data());
    EXPECT_NE(buf->next(), copy.next());  // actually different buffers
    }
    
    template <typename C>
struct compare_less : detail::cmp_pred<C, ordering::lt, 0> {
  using detail::cmp_pred<C, ordering::lt, 0>::cmp_pred;
};
    
      template <class... Args>
  iterator emplace_hint(const_iterator /*hint*/, Args&&... args) {
    return emplace(std::forward<Args>(args)...).first;
  }
    
      for (size_t i = 0; i < ps.size(); i++) {
    ts[i].join();
  }
    
      // Loop until:
  // - a read attempt would block
  // - readCallback_ is uninstalled
  // - the number of loop iterations exceeds the optional maximum
  // - this AsyncSocket is moved to another EventBase
  //
  // When we invoke readDataAvailable() it may uninstall the readCallback_,
  // which is why need to check for it here.
  //
  // The last bullet point is slightly subtle.  readDataAvailable() may also
  // detach this socket from this EventBase.  However, before
  // readDataAvailable() returns another thread may pick it up, attach it to
  // a different EventBase, and install another readCallback_.  We need to
  // exit immediately after readDataAvailable() returns if the eventBase_ has
  // changed.  (The caller must perform some sort of locking to transfer the
  // AsyncSocket between threads properly.  This will be sufficient to ensure
  // that this thread sees the updated eventBase_ variable after
  // readDataAvailable() returns.)
  uint16_t numReads = 0;
  EventBase* originalEventBase = eventBase_;
  while (readCallback_ && eventBase_ == originalEventBase) {
    // Get the buffer to read into.
    void* buf = nullptr;
    size_t buflen = 0, offset = 0;
    try {
      prepareReadBuffer(&buf, &buflen);
      VLOG(5) << 'prepareReadBuffer() buf=' << buf << ', buflen=' << buflen;
    } catch (const AsyncSocketException& ex) {
      return failRead(__func__, ex);
    } catch (const std::exception& ex) {
      AsyncSocketException tex(AsyncSocketException::BAD_ARGS,
                              string('ReadCallback::getReadBuffer() '
                                     'threw exception: ') +
                              ex.what());
      return failRead(__func__, tex);
    } catch (...) {
      AsyncSocketException ex(AsyncSocketException::BAD_ARGS,
                             'ReadCallback::getReadBuffer() threw '
                             'non-exception type');
      return failRead(__func__, ex);
    }
    if (!isBufferMovable_ && (buf == nullptr || buflen == 0)) {
      AsyncSocketException ex(AsyncSocketException::BAD_ARGS,
                             'ReadCallback::getReadBuffer() returned '
                             'empty buffer');
      return failRead(__func__, ex);
    }
    }