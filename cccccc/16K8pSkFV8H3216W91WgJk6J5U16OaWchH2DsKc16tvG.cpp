
        
        
    {}  // namespace atom
    
    
    {}  // namespace atom
    
    
    {}  // namespace extensions
    
    #endif

    
    #include 'test/cpp/qps/qps_worker.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    static bool check_destroyable(grpc_winsocket* winsocket) {
  return winsocket->destroy_called == true &&
         winsocket->write_info.closure == NULL &&
         winsocket->read_info.closure == NULL;
}
    
    void DoNothing(void* arg, grpc_error* error) {}
    
    #ifdef GPR_LINUX
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
      if (direction_ == kReverse) {  // Switch directions?
    direction_ = kForward;
    // iter_ is pointing just before the entries for this->key(),
    // so advance into the range of entries for this->key() and then
    // use the normal skipping code below.
    if (!iter_->Valid()) {
      iter_->SeekToFirst();
    } else {
      iter_->Next();
    }
    if (!iter_->Valid()) {
      valid_ = false;
      saved_key_.clear();
      return;
    }
    // saved_key_ already contains the key to skip past.
  } else {
    // Store in saved_key_ the current key so we skip it below.
    SaveKey(ExtractUserKey(iter_->key()), &saved_key_);
  }
    
    
    {  template <typename A, typename B>
  constexpr bool operator()(A&& a, B&& b) const {
    return ne ^ (C::operator()(static_cast<A&&>(a), static_cast<B&&>(b)) == o);
  }
};
    
      bool remove(const T& v) {
    auto prev = &head_;
    locate_lower_bound(v, prev);
    auto curr = prev->load(std::memory_order_relaxed);
    if (!curr || curr->elem_ != v) {
      return false;
    }
    Node* curr_next = curr->next_.load();
    // Patch up the actual list...
    prev->store(curr_next, std::memory_order_release);
    // ...and only then null out the removed node.
    curr->next_.store(nullptr, std::memory_order_release);
    curr->retire();
    return true;
  }
    
    namespace folly {
    }
    
    FOLLY_ALWAYS_INLINE void* __builtin_return_address(unsigned int frame) {
  // I really hope frame is zero...
  (void)frame;
  assert(frame == 0);
  return _ReturnAddress();
}
#endif

    
    int chdir(const char* path) {
  return _chdir(path);
}
    
    namespace folly {
    }
    
      // Bump the value and record ourselves as reader.
  // This ensures that block stays allocated, as the reader count is > 0.
  auto prev = block->valueAndReaderCount.fetch_add(kReader + 1,
                                                   std::memory_order_acquire);
    
    TEST(Ensure, basic) {
  size_t count = 0;
  auto cob = [&] { count++; };
  auto f = makeFuture(42)
    .ensure(cob)
    .then([](int) { throw std::runtime_error('ensure'); })
    .ensure(cob);
    }
    
    class ThrowingExecutor : public folly::Executor {
 public:
  void add(folly::Func) override {
    throw ThrowingExecutorError('ThrowingExecutor::add');
  }
};
    
    	if (NULL != _tag) {
		env->ReleaseStringUTFChars(_tag, tag_cstr);
	}
    
    #include 'socket/unix_socket.h'
#include 'ptrbuffer.h'
#include 'adler32.h'
#include 'assert/__assert.h'
    
    
#endif /* SCOP_JENV_H_ */
