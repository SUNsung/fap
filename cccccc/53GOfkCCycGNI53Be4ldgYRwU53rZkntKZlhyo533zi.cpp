
        
        
    {    SANITY_CHECK_NOTHING();
}
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
    //-----------------------------------------------------------------------------
//
//      class Slice
//      class FrameBuffer
//
//-----------------------------------------------------------------------------
    
    
inline
FrameBuffer::ConstIterator::ConstIterator (const FrameBuffer::Iterator &other):
    _i (other._i)
{
    // empty
}
    
        if (parts == 1)
    {
        if (headers[0].type() == TILEDIMAGE)
            version |= TILED_FLAG;
    }
    else
    {
        version |= MULTI_PART_FILE_FLAG;
    }
    
    for (int i = 0; i < parts; i++)
    {
        if (usesLongNames (headers[i]))
            version |= LONG_NAMES_FLAG;
    }
    
    
//-----------------------------------------------------------------------------
//
//	Low-level file input and output for OpenEXR.
//
//-----------------------------------------------------------------------------
    
        for (int j = yStart; j != yEnd; j += yStep)
    {
        Box2i tileRange = ifd->tFile->dataWindowForTile (0, j, 0);
    }
    
        IMF_EXPORT
    void		readPixels (int scanLine1, int scanLine2);
    IMF_EXPORT
    void		readPixels (int scanLine);
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_SOURCE_EXIT 

    
    const int kServerDefaultResponseStreamsToSend = 3;
const char* const kServerResponseStreamsToSend = 'server_responses_to_send';
const char* const kServerTryCancelRequest = 'server_try_cancel';
const char* const kServerUseCancelCallback = 'server_use_cancel_callback';
const char* const kDebugInfoTrailerKey = 'debug-info-bin';
const char* const kServerFinishAfterNReads = 'server_finish_after_n_reads';
const char* const kServerUseCoalescingApi = 'server_use_coalescing_api';
const char* const kCheckClientInitialMetadataKey = 'custom_client_metadata';
const char* const kCheckClientInitialMetadataVal = 'Value for client metadata';
    
      GPR_ASSERT(WSAConnect(cli_sock, (grpc_sockaddr*)&addr, addr_len, NULL, NULL,
                        NULL, NULL) == 0);
  svr_sock = accept(lst_sock, (grpc_sockaddr*)&addr, &addr_len);
  GPR_ASSERT(svr_sock != INVALID_SOCKET);
    
    
    {  gpr_setenv(int32_var_name, '-1AB');
  GPR_GLOBAL_CONFIG_GET(int32_var);
  EXPECT_TRUE(IsConfigErrorCalled());
  ClearConfigErrorCalled();
}
    
    
    {class SecureChannelCredentials;
class ResourceQuota;
}  // namespace grpc_impl
    
    TEST_F(CrashTest, KillAfterWrite) {
  auto stub = CreateServerAndStub();
    }
    
    TEST_F(HealthServiceEnd2endTest, DefaultHealthServiceShutdown) {
  EnableDefaultHealthCheckService(true);
  EXPECT_TRUE(DefaultHealthCheckServiceEnabled());
  SetUpServer(true, false, false, nullptr);
  VerifyHealthCheckServiceShutdown();
}
    
    #if USE_JEMALLOC_EXTENT_HOOKS
    
    template<class Fn> void ExecutionContext::sweepDynPropTable(Fn fn) {
  for (auto i = dynPropTable.begin(); i != dynPropTable.end();) {
    if (fn(i->first)) {
      i = dynPropTable.erase(i);
    } else {
      ++i;
    }
  }
}
    
      // Executes the command. Returns true if the target thread should resume.
  bool execute();
    
      if (requestedObject.empty()) {
    // If no object is requested, we return info about this thread's current
    // stop location.
    auto const frame = g_context->getFrameAtDepthForDebuggerUnsafe(0);
    if (frame == nullptr) {
      throw DebuggerCommandException(
        'No object specified and the target thread is not stopped in a frame'
      );
    }
    }
    
    bool isDebuggerReturnHelper(void* address) {
  auto tca = reinterpret_cast<jit::TCA>(address);
  auto& u = jit::tc::ustubs();
  return tca == u.debuggerRetHelper ||
         tca == u.debuggerGenRetHelper ||
         tca == u.debuggerAsyncGenRetHelper;
}
    
      static bool VecEqualHelper(const ArrayData*, const ArrayData*, bool);
  static int64_t VecCmpHelper(const ArrayData*, const ArrayData*);
    
      static ssize_t NvGetIntPos(const ArrayData*, int64_t k);
  static ssize_t NvGetStrPos(const ArrayData*, const StringData* k);
    
    NameValueTable::Iterator
NameValueTable::Iterator::getLast(const NameValueTable* tab) {
  Iterator it;
  it.m_tab = tab;
  it.m_idx = tab->m_tabMask + 1;
  it.prev();
  return it;
}
    
        /*
     * The following two constructors are primarily for using this with
     * the ArrayData interface (see GlobalsArray), which
     * expects iterators to be represented by a ssize_t.
     *
     * The constructor taking `pos' must be given a value previously
     * returned from toInteger().
     *
     * The constructor taking a const StringData* starts iteration at
     * the key given, or returns an invalid iterator if that key does
     * not exist.
     */
    explicit Iterator(const NameValueTable* tab, ssize_t pos);
    explicit Iterator(const NameValueTable* tab, const StringData* start);
    
    using rocksdb::Slice;
using rocksdb::Logger;
using rocksdb::MergeOperator;
    
    Status WriteBatchBase::Merge(ColumnFamilyHandle* column_family,
                             const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
      uint64_t single_refill_amount =
      delayed_write_rate_ * kRefillInterval / kMicrosPerSecond;
  if (bytes_left_ + single_refill_amount >= num_bytes) {
    // Wait until a refill interval
    // Never trigger expire for less than one refill interval to avoid to get
    // time.
    bytes_left_ = bytes_left_ + single_refill_amount - num_bytes;
    last_refill_time_ = time_now + kRefillInterval;
    return kRefillInterval + sleep_debt;
  }
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
      PinnableSlice pinnable_val;
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key1', &pinnable_val);
  assert(s.IsNotFound());
  // Reset PinnableSlice after each use and before each reuse
  pinnable_val.Reset();
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
  assert(pinnable_val == 'value');
  pinnable_val.Reset();
  // The Slice pointed by pinnable_val is not valid after this point
    
      // Set a new snapshot in the transaction
  txn->SetSnapshot();
  txn->SetSavePoint();
  read_options.snapshot = txn_db->GetSnapshot();
    
    TEST(PriorityMPMCQueue, TestPriorities) {
  PriorityMPMCQueue<size_t> queue(3, 10);
  EXPECT_TRUE(queue.isEmpty());
  EXPECT_EQ(3, queue.getNumPriorities());
    }
    
     protected:
  bool keepAliveAcquire() override;
  void keepAliveRelease() override;
    
     private:
  // XOR the fingerprint with a value from one of the tables.
  void xortab(std::array<uint64_t, detail::poly_size(BITS)> const& tab) {
    for (int i = 0; i < size(); i++) {
      fp_[i] ^= tab[i];
    }
  }
    
    
    {    // stopIoThread() causes the I/O thread to stop as soon as possible,
    // without waiting for all pending messages to be written.  Extract any
    // remaining messages to write them below.
    ioQueue = data->getCurrentQueue();
    numDiscarded = data->numDiscarded;
  }
    
      bool preFork();
  void postForkParent();
  void postForkChild();
  void stopIoThread(
      folly::Synchronized<Data, std::mutex>::LockedPtr& data,
      uint32_t extraFlags);
  void restartThread();
    
      size_t allocSize;
  if (!checked_add(&allocSize, std::max(size, minBlockSize()), sizeof(Block))) {
    throw_exception<std::bad_alloc>();
  }
  if (sizeLimit_ != kNoSizeLimit &&
      allocSize > sizeLimit_ - totalAllocatedSize_) {
    throw_exception(std::bad_alloc());
  }
    
    template <typename T>
using SysArenaAllocator = ArenaAllocator<T, SysAllocator<void>>;
    
    
    {  void* a = arena.allocate(sizeof(size_t));
  EXPECT_TRUE(a != nullptr);
  EXPECT_THROW(arena.allocate(SIZE_MAX - 2), std::bad_alloc);
}
    
      void operator()() const {
    DCHECK(storage_);
    auto value = func_();
    new (storage_) ReturnType{std::move(value)};
  }
    
      const T* address(const T& x) const {
    return std::addressof(x);
  }
    
    #define FOLLY_HAS_MEMORY_RESOURCE 1
#include <experimental/memory_resource> // @manual
namespace folly {
namespace detail {
namespace std_pmr = ::std::experimental::pmr;
} // namespace detail
} // namespace folly
    
    
    {} // namespace folly