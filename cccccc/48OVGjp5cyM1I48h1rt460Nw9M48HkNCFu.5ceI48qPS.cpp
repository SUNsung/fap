
        
        #include          <string.h>
#include          <ctype.h>
#include          'params.h'
#include          'float2int.h'
#include          'tesseractclass.h'
    
      // Return whether a given text line could be a first paragraph line according
  // to this paragraph model.
  bool ValidFirstLine(int lmargin, int lindent, int rindent, int rmargin) const;
    
    TEST(InlinedVectorTest, ClearAndRepopulate) {
  const int kNumElements = 10;
  InlinedVector<int, 5> v;
  EXPECT_EQ(0UL, v.size());
  for (int i = 0; i < kNumElements; ++i) {
    v.push_back(i);
    EXPECT_EQ(i + 1UL, v.size());
  }
  for (int i = 0; i < kNumElements; ++i) {
    EXPECT_EQ(i, v[i]);
  }
  v.clear();
  EXPECT_EQ(0UL, v.size());
  for (int i = 0; i < kNumElements; ++i) {
    v.push_back(kNumElements + i);
    EXPECT_EQ(i + 1UL, v.size());
  }
  for (int i = 0; i < kNumElements; ++i) {
    EXPECT_EQ(kNumElements + i, v[i]);
  }
}
    
    std::shared_ptr<Channel> CreateTestChannel(const grpc::string& server,
                                           bool enable_ssl);
    
      // Set up security params
  SecurityParams security;
  security.set_use_test_ca(true);
  security.set_server_host_override('foo.test.google.fr');
  client_config.mutable_security_params()->CopyFrom(security);
  server_config.mutable_security_params()->CopyFrom(security);
    
      signal(SIGINT, sigint_handler);
    
    
    
    
    {  ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << 'Server listening on ' << server_address << std::endl;
  server->Wait();
}
    
    std::vector<grpc::string_ref> SecureAuthContext::FindPropertyValues(
    const grpc::string& name) const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter =
      grpc_auth_context_find_properties_by_name(ctx_, name.c_str());
  const grpc_auth_property* property = nullptr;
  std::vector<grpc::string_ref> values;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    values.push_back(grpc::string_ref(property->value, property->value_length));
  }
  return values;
}
    
    static int populate_ifaddrs(struct ifaddrs* ifaddr, ifaddrmsg* msg, void* bytes,
		     size_t len) {
	if (set_ifname(ifaddr, msg->ifa_index) != 0) {
		return -1;
	}
	if (set_flags(ifaddr) != 0) {
		return -1;
	}
	if (set_addresses(ifaddr, msg, bytes, len) != 0) {
		return -1;
	}
	if (make_prefixes(ifaddr, msg->ifa_family, msg->ifa_prefixlen) != 0) {
		return -1;
	}
	return 0;
}
    
    namespace jpgd
{
  typedef unsigned char  uint8;
  typedef   signed short int16;
  typedef unsigned short uint16;
  typedef unsigned int   uint;
  typedef   signed int   int32;
    }
    
    
    
    static const static_codebook*const *const _floor_books[11]={
  _floor_128x4_books,
  _floor_256x4_books,
  _floor_128x7_books,
  _floor_256x7_books,
  _floor_128x11_books,
  _floor_128x17_books,
  _floor_256x4low_books,
  _floor_1024x27_books,
  _floor_2048x27_books,
  _floor_512x17_books,
  _floor_Xx0_books,
};
    
    #ifndef max
#  define max(x,y)  ((x)<(y)?(y):(x))
#endif
    
       THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
   OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
    
    #include <exception>
#include 'comm/xlogger/xlogger.h'
    
    
    {
    {        break;
    }
}
    
    #endif

    
    #endif

    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    #include <array>
    
      Weight takeCredit() noexcept {
    Weight credit;
    if (SingleConsumer) {
      credit = credit_.load(std::memory_order_relaxed);
      credit_.store(0, std::memory_order_relaxed);
    } else {
      credit = credit_.exchange(0, std::memory_order_acq_rel);
    }
    return credit;
  }
    
    
    {    folly::asymmetricLightBarrier(); // C
    if (waiting_.load(std::memory_order_acquire)) {
      waiting_.store(0, std::memory_order_release);
      waiting_.futexWake();
    }
  }
    
    
/// MockClock is a bit tricky because we are mocking a static function
/// (now()), so we need to find the corresponding mock instance without
/// extending its scope beyond that of the test.  I generally avoid
/// shared_ptr, but a weak_ptr is just the ticket here
struct MockClock {
  using duration = std::chrono::steady_clock::duration;
  using time_point = std::chrono::time_point<MockClock, duration>;
    }
    
    #ifdef FOLLY_TLS
#define DECLARE_SPREADER_TAG(tag, locality, func)      \
  namespace {                                          \
  template <typename dummy>                            \
  struct tag {};                                       \
  }                                                    \
  namespace folly {                                    \
  template <>                                          \
  const CacheLocality& CacheLocality::system<tag>() {  \
    static auto* inst = new CacheLocality(locality);   \
    return *inst;                                      \
  }                                                    \
  template <>                                          \
  Getcpu::Func AccessSpreader<tag>::pickGetcpuFunc() { \
    return func;                                       \
  }                                                    \
  }
    
    #include <bitset>
    
    #include <folly/Likely.h>
    
      explicit ScopeGuardImpl(FunctionType&& fn) noexcept(
      std::is_nothrow_move_constructible<FunctionType>::value)
      : ScopeGuardImpl(
            std::move_if_noexcept(fn),
            makeFailsafe(std::is_nothrow_move_constructible<FunctionType>{},
                         &fn)) {}
    
    namespace folly {
    }
    
    TEST(TestDynamicParser, TestThrowOnReleaseWhileParsing) {
  auto d = dynamic::array(1);
  DynamicParser p(DynamicParser::OnError::RECORD, &d);
  EXPECT_THROW(
    p.arrayItems([&]() { p.releaseErrors(); }),
    DynamicParserLogicError
  );
}
    
    auto NestedCommandLineApp::findCommand(const std::string& name) const
  -> const std::pair<const std::string, CommandInfo>& {
  auto pos = commands_.find(resolveAlias(name));
  if (pos == commands_.end()) {
    throw ProgramExit(
        1,
        folly::sformat('Command `{}' not found. Run `{} help' for help.',
                       name, programName_));
  }
  return *pos;
}
    
    bool DBWrapper::HasFamilyNamed(std::string& name, DBWrapper* db) {
  return db->columnFamilies_.find(name) != db->columnFamilies_.end();
}
    
      AlignedBuffer& operator=(AlignedBuffer&& o) ROCKSDB_NOEXCEPT {
    alignment_ = std::move(o.alignment_);
    buf_ = std::move(o.buf_);
    capacity_ = std::move(o.capacity_);
    cursize_ = std::move(o.cursize_);
    bufstart_ = std::move(o.bufstart_);
    return *this;
  }
    
      using DB::ResetStats;
  virtual Status ResetStats() override { return db_->ResetStats(); }
    
    
    {  // No copying allowed
  Reader(const Reader&);
  void operator=(const Reader&);
};
    
    
    {   private:
     const std::set<uint32_t> m_ignore_histograms;
 };
    
    /**
 * @brief get match IoCtx from _prefix_pool_map
 * @details [long description]
 *
 * @param prefix [description]
 * @return [description]
 *
 */
librados::IoCtx* EnvLibrados::_GetIoctx(const std::string& fpath) {
  auto is_prefix = [](const std::string & s1, const std::string & s2) {
    auto it1 = s1.begin(), it2 = s2.begin();
    while (it1 != s1.end() && it2 != s2.end() && *it1 == *it2) ++it1, ++it2;
    return it1 == s1.end();
  };
    }
    
    MergeIteratorBuilder::~MergeIteratorBuilder() {
  if (first_iter != nullptr) {
    first_iter->~InternalIterator();
  }
  if (merge_iter != nullptr) {
    merge_iter->~MergingIterator();
  }
}
    
    
    {  m_jcreate_compaction_filter_methodid =
      AbstractCompactionFilterFactoryJni::getCreateCompactionFilterMethodId(env);
  if(m_jcreate_compaction_filter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
}
    
    
    {
    {        // Start the ASIO io_service run loop
        echo_server.run();
    } catch (websocketpp::exception const & e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << 'other exception' << std::endl;
    }
}

    
        // this is a shared upgrade, no need to make it unique
    const char *buf = 'GET /socket.io/?EIO=4&transport=websocket HTTP/1.1\r\n'
                      'Host: server.example.com\r\n'
                      'Upgrade: websocket\r\n'
                      'Connection: Upgrade\r\n'
                      'Sec-WebSocket-Key: x3JJHMbDL1EzLkh9GBhXDw==\r\n'
                      'Sec-WebSocket-Version: 13\r\n\r\n';
    
        static uS::Socket *onData(uS::Socket *s, char *data, size_t length);
    static void onEnd(uS::Socket *s);
    using uS::Socket::closeSocket;
    
    #endif // EXTENSIONS_UWS_H

    
        // duplicated code for now!
    template <class F>
    void forEachHttpSocket(const F &cb) {
        uS::Poll *iterator = httpSocketHead;
        iterators.push(iterator);
        while (iterator) {
            uS::Poll *lastIterator = iterator;
            cb((HttpSocket<isServer> *) iterator);
            iterator = iterators.top();
            if (lastIterator == iterator) {
                iterator = ((uS::Socket *) iterator)->next;
                iterators.top() = iterator;
            }
        }
        iterators.pop();
    }
    
      BtRequestFactory* requestFactory_;
    
    bool AbstractHttpServerResponseCommand::execute()
{
  if (e_->getRequestGroupMan()->downloadFinished() || e_->isHaltRequested()) {
    return true;
  }
  try {
    ssize_t len = httpServer_->sendResponse();
    if (len > 0) {
      timeoutTimer_ = global::wallclock();
    }
  }
  catch (RecoverableException& e) {
    A2_LOG_INFO_EX(fmt('CUID#%' PRId64
                       ' - Error occurred while transmitting response body.',
                       getCuid()),
                   e);
    return true;
  }
  if (httpServer_->sendBufferIsEmpty()) {
    A2_LOG_INFO(fmt('CUID#%' PRId64 ' - HttpServer: all response transmitted.',
                    getCuid()));
    afterSend(httpServer_, e_);
    return true;
  }
  else {
    if (timeoutTimer_.difference(global::wallclock()) >= 30_s) {
      A2_LOG_INFO(fmt('CUID#%' PRId64
                      ' - HttpServer: Timeout while trasmitting response.',
                      getCuid()));
      return true;
    }
    else {
      updateReadWriteCheck();
      e_->addCommand(std::unique_ptr<Command>(this));
      return false;
    }
  }
}
    
    class AbstractProxyRequestCommand : public AbstractCommand {
private:
  std::shared_ptr<Request> proxyRequest_;
    }
    
      bool currentTierAcceptsStoppedEvent() const;
    
      virtual void setVerifyPeer(bool verify) CXX11_OVERRIDE
  {
    verifyPeer_ = verify;
  }