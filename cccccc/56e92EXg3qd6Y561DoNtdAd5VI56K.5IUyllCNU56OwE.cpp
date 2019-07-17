
        
            /**
     * Returns namespace of the local oplog collection.
     */
    const NamespaceString& getOplogCollectionName() const;
    
    /**
 * Simple struct for storing an error with an endpoint.
 *
 * Certain types of errors are not stored in WriteOps or must be returned to a caller.
 */
struct ShardError {
    ShardError(const ShardEndpoint& endpoint, const WriteErrorDetail& error) : endpoint(endpoint) {
        error.cloneTo(&this->error);
    }
    }
    
    repl::OplogEntry getInnerNestedOplogEntry(const repl::OplogEntry& entry) {
    uassert(40635,
            str::stream() << 'expected nested oplog entry with ts: '
                          << entry.getTimestamp().toString()
                          << ' to have o2 field: '
                          << redact(entry.toBSON()),
            entry.getObject2());
    return uassertStatusOK(repl::OplogEntry::parse(*entry.getObject2()));
}
    
        const SpecificStats* getSpecificStats() const final;
    
    
    {    ASSERT_BSONOBJ_EQ(countCmd.getQuery(), fromjson('{ a : { '$gte' : 11 } }'));
    ASSERT_EQ(countCmd.getLimit().get(), 100);
    ASSERT_EQ(countCmd.getSkip().get(), 1000);
    ASSERT_EQ(countCmd.getMaxTimeMS().get(), 10000u);
    ASSERT_EQ(countCmd.getComment().get(), 'aComment');
    ASSERT_BSONOBJ_EQ(countCmd.getHint(), fromjson('{ b : 5 }'));
    ASSERT_BSONOBJ_EQ(countCmd.getCollation().get(), fromjson('{ locale : 'en_US' }'));
    ASSERT_BSONOBJ_EQ(countCmd.getReadConcern().get(), fromjson('{ level: 'linearizable' }'));
    ASSERT_BSONOBJ_EQ(countCmd.getQueryOptions().get(),
                      fromjson('{ $readPreference: 'secondary' }'));
}
    
    
    {}  // namespace mongo

    
    #include 'mongo/platform/basic.h'
    
        void _appendStatsEntry(BSONObjBuilder& b, const char* statsName, const UsageData& map) const;
    
    U_NAMESPACE_BEGIN
    
      bool writeWithPriority(
      T&& item,
      size_t priority,
      std::chrono::milliseconds timeout) {
    size_t queue = std::min(getNumPriorities() - 1, priority);
    CHECK_LT(queue, queues_.size());
    return queues_.at(queue).tryWriteUntil(
        std::chrono::steady_clock::now() + timeout, std::move(item));
  }
    
      // Helper functions: shift the fingerprint value left by 8/32/64 bits,
  // return the 'out' value (the bits that were shifted out), and add 'v'
  // in the bits on the right.
  uint8_t shlor8(uint8_t v);
  uint32_t shlor32(uint32_t v);
  uint64_t shlor64(uint64_t v);
    
    /** hazptr_cleanup: Reclaims all reclaimable objects retired to the domain */
template <template <typename> class Atom>
void hazptr_cleanup(hazptr_domain<Atom>& domain) noexcept {
  domain.cleanup();
}
    
    
    {
    {  folly::File file_;
};
} // namespace folly

    
    template <
    typename Key,
    typename Hasher = f14::DefaultHasher<Key>,
    typename KeyEqual = f14::DefaultKeyEqual<Key>>
using F14VectorSet = folly::F14VectorSet<
    Key,
    Hasher,
    KeyEqual,
    folly::detail::std_pmr::polymorphic_allocator<Key>>;
    
      //// PUBLIC - F14 Extensions
    
      template <typename V>
  void visitPolicyAllocationClasses(
      std::size_t chunkAllocSize,
      std::size_t size,
      std::size_t /*capacity*/,
      V&& visitor) const {
    if (chunkAllocSize > 0) {
      visitor(
          allocationBytesForOverAligned<ByteAlloc, kRequiredVectorAlignment>(
              chunkAllocSize),
          1);
    }
    if (size > 0) {
      visitor(sizeof(Value), size);
    }
  }
    
    
    {  // Register the handler.
  for (auto& handler : sockets_) {
    if (!handler.registerHandler(EventHandler::READ | EventHandler::PERSIST)) {
      // We're hosed.  We could just re-schedule backoffTimeout_ to
      // re-try again after a little bit.  However, we don't want to
      // loop retrying forever if we can't re-enable accepts.  Just
      // abort the entire program in this state; things are really bad
      // and restarting the entire server is probably the best remedy.
      LOG(ERROR)
          << 'failed to re-enable AsyncServerSocket accepts after backoff; '
          << 'crashing now';
      abort();
    }
  }
  if (connectionEventCallback_) {
    connectionEventCallback_->onBackoffEnded();
  }
}
    
      size_t allocSize;
  if (!checked_add(&allocSize, std::max(size, minBlockSize()), sizeof(Block))) {
    throw_exception<std::bad_alloc>();
  }
  if (sizeLimit_ != kNoSizeLimit &&
      allocSize > sizeLimit_ - totalAllocatedSize_) {
    throw_exception(std::bad_alloc());
  }
    
        // Allocate a block with at least size bytes of storage.
    // If allowSlack is true, allocate more than size bytes if convenient
    // (via ArenaAllocatorTraits::goodSize()) as we'll try to pack small
    // allocations in this block.
    static std::pair<Block*, size_t>
    allocate(Alloc& alloc, size_t size, bool allowSlack);
    void deallocate(Alloc& alloc);
    
      // if there is a wait queue we are responsible for, try and start wakeups,
  // don't bother with the mutex state
  auto sleepers = proxy.waiters_;
  if (proxy.next_) {
    if (wake(Publish, *proxy.next_, proxy.waker_, sleepers, 0)) {
      return;
    }
    }