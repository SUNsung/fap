
        
        class Issue200 { };
    
    
    {  // No copying allowed
  FilterBlockBuilder(const FilterBlockBuilder&);
  void operator=(const FilterBlockBuilder&);
};
    
    TEST(CRC, Mask) {
  uint32_t crc = Value('foo', 3);
  ASSERT_NE(crc, Mask(crc));
  ASSERT_NE(crc, Mask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Mask(crc)));
  ASSERT_EQ(crc, Unmask(Unmask(Mask(Mask(crc)))));
}
    
    
    {
    {    // Add hash marks based on percentage; 20 marks for 100%.
    int marks = static_cast<int>(20*(buckets_[b] / num_) + 0.5);
    r.append(marks, '#');
    r.push_back('\n');
  }
  return r;
}
    
      AutoCompactTest() {
    dbname_ = test::TmpDir() + '/autocompact_test';
    tiny_cache_ = NewLRUCache(100);
    options_.block_cache = tiny_cache_;
    DestroyDB(dbname_, options_);
    options_.create_if_missing = true;
    options_.compression = kNoCompression;
    ASSERT_OK(DB::Open(options_, dbname_, &db_));
  }
    
    void DBIter::FindNextUserEntry(bool skipping, std::string* skip) {
  // Loop until we hit an acceptable entry to yield
  assert(iter_->Valid());
  assert(direction_ == kForward);
  do {
    ParsedInternalKey ikey;
    if (ParseKey(&ikey) && ikey.sequence <= sequence_) {
      switch (ikey.type) {
        case kTypeDeletion:
          // Arrange to skip all upcoming entries for this key since
          // they are hidden by this deletion.
          SaveKey(ikey.user_key, skip);
          skipping = true;
          break;
        case kTypeValue:
          if (skipping &&
              user_comparator_->Compare(ikey.user_key, *skip) <= 0) {
            // Entry hidden
          } else {
            valid_ = true;
            saved_key_.clear();
            return;
          }
          break;
      }
    }
    iter_->Next();
  } while (iter_->Valid());
  saved_key_.clear();
  valid_ = false;
}
    
    std::string ParsedInternalKey::DebugString() const {
  char buf[50];
  snprintf(buf, sizeof(buf), '' @ %llu : %d',
           (unsigned long long) sequence,
           int(type));
  std::string result = ''';
  result += EscapeString(user_key.ToString());
  result += buf;
  return result;
}
    
    struct BlockContents;
class Comparator;
    
    
    {  // Allow this to be constructed on the stack for easier testing.
  ~TestWriteChainAsyncTransportWrapper() override {}
};
    
    /**
 * Reserve enough space in the ThreadEntry::elements for the item
 * @id to fit in.
 */
void StaticMetaBase::reserve(EntryID* id) {
  auto& meta = *this;
  ThreadEntry* threadEntry = (*threadEntry_)();
  size_t prevCapacity = threadEntry->elementsCapacity;
    }
    
      /**
   * Construct a new string by replacing the characters denoted by the half-open
   *   range [`first`,`last`) within this string with the `that_count`
   *   characters from string `that` starting at position `that_pos`.
   * \note Equivalent to
   *   <tt>creplace(first - data(), last - first, that, that_pos,
   *   that_count)</tt>
   */
  template <std::size_t M>
  constexpr BasicFixedString<Char, N + M> creplace(
      const Char* first,
      const Char* last,
      const BasicFixedString<Char, M>& that,
      std::size_t that_pos,
      std::size_t that_count) const noexcept(false) {
    return creplace(first - data_, last - first, that, that_pos, that_count);
  }
    
    template <typename Key, typename Hasher, typename KeyEqual, typename Alloc>
class F14VectorSet
    : public f14::detail::F14BasicSet<f14::detail::SetPolicyWithDefaults<
          f14::detail::VectorContainerPolicy,
          Key,
          Hasher,
          KeyEqual,
          Alloc>> {
  using Policy = f14::detail::SetPolicyWithDefaults<
      f14::detail::VectorContainerPolicy,
      Key,
      Hasher,
      KeyEqual,
      Alloc>;
  using Super = f14::detail::F14BasicSet<Policy>;
    }
    
    
    {  std::atomic<ssize_t> keepAliveCounter_{1};
};
    
    void AsyncSocket::shutdownWrite() {
  VLOG(5) << 'AsyncSocket::shutdownWrite(): this=' << this << ', fd=' << fd_
          << ', state=' << state_ << ', shutdownFlags='
          << std::hex << (int) shutdownFlags_;
    }
    
      std::string scratch;
  scratch.resize(kGood.size() + kCorrupted.size() + 16);
  Slice result;
  unique_ptr<RandomAccessFile> rand_file;
  ASSERT_OK(env_->NewRandomAccessFile(kFileName, &rand_file, soptions_));
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    #include <assert.h>
#include 'rocksjni/jnicallback.h'
#include 'rocksjni/portal.h'
    
    namespace rocksdb {
    }
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
    #pragma once
#include <atomic>
#include <deque>
#include <functional>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>
#include 'db/dbformat.h'
#include 'db/range_del_aggregator.h'
#include 'db/read_callback.h'
#include 'db/version_edit.h'
#include 'monitoring/instrumented_mutex.h'
#include 'options/cf_options.h'
#include 'rocksdb/db.h'
#include 'rocksdb/env.h'
#include 'rocksdb/memtablerep.h'
#include 'util/allocator.h'
#include 'util/concurrent_arena.h'
#include 'util/dynamic_bloom.h'
#include 'util/hash.h'
    
    TEST_F(InlineSkipTest, InsertWithHint_Sequential) {
  const int N = 100000;
  Arena arena;
  TestComparator cmp;
  TestInlineSkipList list(cmp, &arena);
  void* hint = nullptr;
  for (int i = 0; i < N; i++) {
    Key key = i;
    InsertWithHint(&list, key, &hint);
  }
  Validate(&list);
}
    
      auto marker_iter = markers_.find(point);
  if (marker_iter != markers_.end()) {
    for (auto& marked_point : marker_iter->second) {
      marked_thread_id_.emplace(marked_point, thread_id);
    }
  }
    
      compression_type =
      static_cast<rocksdb::CompressionType>(slice_.data()[block_size_]);
    
    Status DateTieredDBImpl::Delete(const WriteOptions& options, const Slice& key) {
  int64_t timestamp = 0;
  Status s;
  s = GetTimestamp(key, &timestamp);
  if (!s.ok()) {
    return s;
  }
  DropObsoleteColumnFamilies();
  // Prune request to obsolete data
  if (IsStale(timestamp, ttl_, db_->GetEnv())) {
    return Status::NotFound();
  }
    }
    
      virtual void closeFile() CXX11_OVERRIDE;
    
    protected:
  DownloadEngine* getDownloadEngine() { return e_; }
  // Called after content body is completely sent.
  virtual void afterSend(const std::shared_ptr<HttpServer>& httpServer,
                         DownloadEngine* e) = 0;
    
    namespace aria2 {
    }
    
    void AdaptiveFileAllocationIterator::allocateChunk()
{
  if (!allocator_) {
#ifdef HAVE_FALLOCATE
    try {
      A2_LOG_DEBUG('Testing file system supports fallocate.');
      if (offset_ < totalLength_) {
        int64_t len =
            std::min(totalLength_ - offset_, static_cast<int64_t>(4_k));
        stream_->allocate(offset_, len, false);
        offset_ += len;
      }
      A2_LOG_DEBUG('File system supports fallocate.');
      allocator_ = make_unique<FallocFileAllocationIterator>(stream_, offset_,
                                                             totalLength_);
    }
    catch (RecoverableException& e) {
      A2_LOG_DEBUG('File system does not support fallocate.');
      auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                              totalLength_);
      salloc->init();
      allocator_ = std::move(salloc);
    }
#else  // !HAVE_FALLOCATE
    auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                            totalLength_);
    salloc->init();
    allocator_ = std::move(salloc);
#endif // !HAVE_FALLOCATE
    allocator_->allocateChunk();
  }
  else {
    allocator_->allocateChunk();
  }
}
    
    namespace {
class FindStoppedAllowedTier {
public:
  bool operator()(const std::shared_ptr<AnnounceTier>& tier) const
  {
    switch (tier->event) {
    case AnnounceTier::DOWNLOADING:
    case AnnounceTier::STOPPED:
    case AnnounceTier::COMPLETED:
    case AnnounceTier::SEEDING:
      return true;
    default:
      return false;
    }
  }
};
} // namespace
    
    void AnnounceTier::nextEvent()
{
  switch (event) {
  case STARTED:
    event = DOWNLOADING;
    break;
  case STARTED_AFTER_COMPLETION:
    event = SEEDING;
    break;
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
    namespace aria2 {
    }
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
      TLSVersion getMinTLSVersion() const { return minTLSVer_; }