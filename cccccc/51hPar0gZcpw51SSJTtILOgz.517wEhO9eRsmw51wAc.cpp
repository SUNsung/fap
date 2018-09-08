
        
        class NwCurrentWindowInternalClearMenuFunction : public UIThreadExtensionFunction {
 public:
  NwCurrentWindowInternalClearMenuFunction();
    }
    
    #include 'base/memory/weak_ptr.h'
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
     protected:
  ResponseAction Run() override;
  ~NwObjCallObjectMethodAsyncFunction() override;
    
      // Notify new head of write queue
  if (!writers_.empty()) {
    writers_.front()->cv.Signal();
  }
    
    // Called on every item found in a WriteBatch.
class WriteBatchItemPrinter : public WriteBatch::Handler {
 public:
  WritableFile* dst_;
  virtual void Put(const Slice& key, const Slice& value) {
    std::string r = '  put '';
    AppendEscapedStringTo(&r, key);
    r += '' '';
    AppendEscapedStringTo(&r, value);
    r += ''\n';
    dst_->Append(r);
  }
  virtual void Delete(const Slice& key) {
    std::string r = '  del '';
    AppendEscapedStringTo(&r, key);
    r += ''\n';
    dst_->Append(r);
  }
};
    
    namespace leveldb {
namespace {
    }
    }
    
    Reader::Reader(SequentialFile* file, Reporter* reporter, bool checksum,
               uint64_t initial_offset)
    : file_(file),
      reporter_(reporter),
      checksum_(checksum),
      backing_store_(new char[kBlockSize]),
      buffer_(),
      eof_(false),
      last_record_offset_(0),
      end_of_buffer_offset_(0),
      initial_offset_(initial_offset),
      resyncing_(initial_offset > 0) {
}
    
    
    {    // Some corruption was detected.  'size' is the approximate number
    // of bytes dropped due to the corruption.
    virtual void Corruption(size_t bytes, const Status& status) = 0;
  };
    
      Status EmitPhysicalRecord(RecordType type, const char* ptr, size_t length);
    
      // Test that previous recovery produced recoverable state.
  Open();
  ASSERT_LE(1, NumTables());
  ASSERT_EQ(1, NumLogs());
  if (CanAppend()) {
    ASSERT_EQ(new_log, FirstLogFile());
  }
  ASSERT_EQ('bar2', Get('foo'));
  ASSERT_EQ('world', Get('hello'));
  ASSERT_EQ('there', Get('hi'));
    
    // We want to make sure that with a single writer and multiple
// concurrent readers (with no synchronization other than when a
// reader's iterator is created), the reader always observes all the
// data that was present in the skip list when the iterator was
// constructor.  Because insertions are happening concurrently, we may
// also observe new values that were inserted since the iterator was
// constructed, but we should never miss any values that were present
// at iterator construction time.
//
// We generate multi-part keys:
//     <key,gen,hash>
// where:
//     key is in range [0..K-1]
//     gen is a generation number for key
//     hash is hash(key,gen)
//
// The insertion code picks a random key, sets gen to be 1 + the last
// generation number inserted for that key, and sets hash to Hash(key,gen).
//
// At the beginning of a read, we snapshot the last inserted
// generation number for each key.  We then iterate, including random
// calls to Next() and Seek().  For every key we encounter, we
// check that it is either expected given the initial snapshot or has
// been concurrently added since the iterator started.
class ConcurrentTest {
 private:
  static const uint32_t K = 4;
    }
    
      // Removes a SnapshotImpl from this list.
  //
  // The snapshot must have been created by calling New() on this list.
  //
  // The snapshot pointer should not be const, because its memory is
  // deallocated. However, that would force us to change DB::ReleaseSnapshot(),
  // which is in the API, and currently takes a const Snapshot.
  void Delete(const SnapshotImpl* snapshot) {
#if !defined(NDEBUG)
    assert(snapshot->list_ == this);
#endif  // !defined(NDEBUG)
    snapshot->prev_->next_ = snapshot->next_;
    snapshot->next_->prev_ = snapshot->prev_;
    delete snapshot;
  }
    
      // Implementations of the DB interface
  using DB::Get;
  virtual Status Get(const ReadOptions& options,
                     ColumnFamilyHandle* column_family, const Slice& key,
                     PinnableSlice* value) override;
  using DB::MultiGet;
  virtual std::vector<Status> MultiGet(
      const ReadOptions& options,
      const std::vector<ColumnFamilyHandle*>&,
      const std::vector<Slice>& keys, std::vector<std::string>* values)
    override;
    
    
    {}  // namespace rocksdb

    
    class CompactionPressureToken : public WriteControllerToken {
 public:
  explicit CompactionPressureToken(WriteController* controller)
      : WriteControllerToken(controller) {}
  virtual ~CompactionPressureToken();
};
    
    TEST_F(WriteControllerTest, ChangeDelayRateTest) {
  TimeSetEnv env;
  WriteController controller(40000000u);  // also set max delayed rate
  controller.set_delayed_write_rate(10000000u);
  auto delay_token_0 =
      controller.GetDelayToken(controller.delayed_write_rate());
  ASSERT_EQ(static_cast<uint64_t>(2000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_1 = controller.GetDelayToken(2000000u);
  ASSERT_EQ(static_cast<uint64_t>(10000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_2 = controller.GetDelayToken(1000000u);
  ASSERT_EQ(static_cast<uint64_t>(20000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_3 = controller.GetDelayToken(20000000u);
  ASSERT_EQ(static_cast<uint64_t>(1000000),
            controller.GetDelay(&env, 20000000u));
  // This is more than max rate. Max delayed rate will be used.
  auto delay_token_4 =
      controller.GetDelayToken(controller.delayed_write_rate() * 3);
  ASSERT_EQ(static_cast<uint64_t>(500000),
            controller.GetDelay(&env, 20000000u));
}
    
    Status HdfsEnv::CreateDirIfMissing(const std::string& name) {
  const int value = hdfsExists(fileSys_, name.c_str());
  //  Not atomic. state might change b/w hdfsExists and CreateDir.
  switch (value) {
    case HDFS_EXISTS:
    return Status::OK();
    case HDFS_DOESNT_EXIST:
    return CreateDir(name);
    default:  // anything else should be an error
      ROCKS_LOG_FATAL(mylog, 'CreateDirIfMissing hdfsExists call failed');
      throw HdfsFatalException('hdfsExists call failed with error ' +
                               ToString(value) + '.\n');
  }
};
    
    
    {  // Need to implement this so the file is truncated correctly
  // with direct I/O
  virtual Status Truncate(uint64_t size) override;
  virtual Status Close() override;
  virtual Status Append(const Slice& data) override;
  virtual Status PositionedAppend(const Slice& data, uint64_t offset) override;
  virtual Status Flush() override;
  virtual Status Sync() override;
  virtual Status Fsync() override;
  virtual bool IsSyncThreadSafe() const override;
  virtual bool use_direct_io() const override { return use_direct_io_; }
  virtual void SetWriteLifeTimeHint(Env::WriteLifeTimeHint hint) override;
  virtual uint64_t GetFileSize() override;
  virtual Status InvalidateCache(size_t offset, size_t length) override;
  virtual size_t GetRequiredBufferAlignment() const override {
    return logical_sector_size_;
  }
#ifdef ROCKSDB_FALLOCATE_PRESENT
  virtual Status Allocate(uint64_t offset, uint64_t len) override;
#endif
#ifdef ROCKSDB_RANGESYNC_PRESENT
  virtual Status RangeSync(uint64_t offset, uint64_t nbytes) override;
#endif
#ifdef OS_LINUX
  virtual size_t GetUniqueId(char* id, size_t max_size) const override;
#endif
};
    
    TEST_F(MockEnvTest, FakeSleeping) {
  int64_t now = 0;
  auto s = env_->GetCurrentTime(&now);
  ASSERT_OK(s);
  env_->FakeSleepForMicroseconds(3 * 1000 * 1000);
  int64_t after_sleep = 0;
  s = env_->GetCurrentTime(&after_sleep);
  ASSERT_OK(s);
  auto delta = after_sleep - now;
  // this will be true unless test runs for 2 seconds
  ASSERT_TRUE(delta == 3 || delta == 4);
}
    
      // create column family
  ColumnFamilyHandle* cf;
  s = db->CreateColumnFamily(ColumnFamilyOptions(), 'new_cf', &cf);
  assert(s.ok());
    
    class MyMerge : public rocksdb::MergeOperator {
 public:
  virtual bool FullMergeV2(const MergeOperationInput& merge_in,
                           MergeOperationOutput* merge_out) const override {
    merge_out->new_value.clear();
    if (merge_in.existing_value != nullptr) {
      merge_out->new_value.assign(merge_in.existing_value->data(),
                                  merge_in.existing_value->size());
    }
    for (const rocksdb::Slice& m : merge_in.operand_list) {
      fprintf(stderr, 'Merge(%s)\n', m.ToString().c_str());
      // the compaction filter filters out bad values
      assert(m.ToString() != 'bad');
      merge_out->new_value.assign(m.data(), m.size());
    }
    return true;
  }
    }
    
    BENCHMARK_DRAW_LINE();
    
    
    {  FLAGS_minloglevel = prev;
}
    
    #include <folly/Benchmark.h>
#include <folly/FileUtil.h>
#include <folly/init/Init.h>
#include <folly/json.h>
    
    #define FOLLY_SDT_SEMAPHORE(provider, name)                                    \
  folly_sdt_semaphore_##provider##_##name
    
    // Check a traditional Unix return code (-1 and sets errno on error), throw
// on error.
template <class... Args>
void checkUnixError(ssize_t ret, Args&&... args) {
  if (UNLIKELY(ret == -1)) {
    throwSystemError(std::forward<Args>(args)...);
  }
}
    
    // Some utility routines relating to unicode.
    
    
    {} // namespace std

    
      VirtualExecutor(const VirtualExecutor&) = delete;
  VirtualExecutor& operator=(const VirtualExecutor&) = delete;