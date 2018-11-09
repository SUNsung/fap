
        
        void add(const Size2D &size,
         const s32 * src0Base, ptrdiff_t src0Stride,
         const s32 * src1Base, ptrdiff_t src1Stride,
         s32 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
        if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<s32, s64>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<s32, s64>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
    using namespace internal;
    
    template <>
void lshiftConst<0>(const Size2D &size,
                    const u8 * srcBase, ptrdiff_t srcStride,
                    s16 * dstBase, ptrdiff_t dstStride)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        minLocCapacity <<= 1;
    maxLocCapacity <<= 1;
    
    
    {}
    
    inline float32x4_t vrsqrtq_f32(float32x4_t val)
{
    float32x4_t e = vrsqrteq_f32(val);
    e = vmulq_f32(vrsqrtsq_f32(vmulq_f32(e, e), val), e);
    e = vmulq_f32(vrsqrtsq_f32(vmulq_f32(e, e), val), e);
    return e;
}
    
    - https://github.com/caffe2/caffe2/blob/master/caffe2/operators/find_duplicate_elements_op.h
- https://github.com/caffe2/caffe2/blob/master/caffe2/operators/find_duplicate_elements_op.cc
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
    
    {class GetHalfToFloatGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'FloatToHalf', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(HalfToFloat, GetHalfToFloatGradient);
NO_GRADIENT(Float16ConstantFill);
} // namespace caffe2

    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
    void CensusClientCallData::OnDoneRecvTrailingMetadataCb(void* user_data,
                                                        grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->recv_trailing_metadata_ != nullptr);
    FilterTrailingMetadata(calld->recv_trailing_metadata_,
                           &calld->elapsed_time_);
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_trailing_metadata_,
                   GRPC_ERROR_REF(error));
}
    
      static void OnDoneRecvTrailingMetadataCb(void* user_data, grpc_error* error);
    
    // Deserialize the incoming SpanContext and generate a new server context based
// on that. This new span will never be a root span. This should only be called
// with a blank CensusContext as it overwrites it.
void GenerateServerContext(absl::string_view tracing, absl::string_view stats,
                           absl::string_view primary_role,
                           absl::string_view method, CensusContext* context);
    
    namespace grpc {
    }
    
    class ProtoServerReflection final
    : public reflection::v1alpha::ServerReflection::Service {
 public:
  ProtoServerReflection();
    }
    
    
    {   private:
    DynamicThreadPool* pool_;
    grpc_core::Thread thd_;
    void ThreadFunc();
  };
  std::mutex mu_;
  std::condition_variable cv_;
  std::condition_variable shutdown_cv_;
  bool shutdown_;
  std::queue<std::function<void()>> callbacks_;
  int reserve_threads_;
  int nthreads_;
  int threads_waiting_;
  std::list<DynamicThread*> dead_threads_;
    
    TEST(CorruptionTest, CorruptedDescriptor) {
  ASSERT_OK(db_->Put(WriteOptions(), 'foo', 'hello'));
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
  dbi->TEST_CompactMemTable();
  dbi->TEST_CompactRange(0, nullptr, nullptr);
    }
    
      // Record a sample of bytes read at the specified internal key.
  // Samples are taken approximately once every config::kReadBytesPeriod
  // bytes.
  void RecordReadSample(Slice key);
    
    std::string InternalKey::DebugString() const {
  std::string result;
  ParsedInternalKey parsed;
  if (ParseInternalKey(rep_, &parsed)) {
    result = parsed.DebugString();
  } else {
    result = '(bad)';
    result.append(EscapeString(rep_));
  }
  return result;
}
    
    class FormatTest { };
    
    std::string TempFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'dbtmp');
}
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
      // crc32c values for all supported record types.  These are
  // pre-computed to reduce the overhead of computing the crc of the
  // record type stored in the header.
  uint32_t type_crc_[kMaxRecordType + 1];
    
    #include 'db/memtable.h'
#include 'db/dbformat.h'
#include 'leveldb/comparator.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'util/coding.h'
    
    extern const std::string kFeatureVectorsRootKey;
    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
      const auto& doc = c.getParser('options')->getData().doc()['options'];
    
    namespace osquery {
    }
    
    bool INotifyEventPublisher::monitorSubscription(
    INotifySubscriptionContextRef& sc, bool add_watch) {
  std::string discovered = sc->path;
  if (sc->path.find('**') != std::string::npos) {
    sc->recursive = true;
    discovered = sc->path.substr(0, sc->path.find('**'));
    sc->path = discovered;
  }
    }
    
      // Now update the config to contain sets of scheduled queries.
  Config::get().update(
      {{'data',
        '{\'schedule\': {\'1\': {\'query\': \'select * from fake_events\', '
        '\'interval\': 10}, \'2\':{\'query\': \'select * from time, '
        'fake_events\', \'interval\': 19}, \'3\':{\'query\': \'select * '
        'from fake_events, fake_events\', \'interval\': 5}}}'}});
  // This will become 19 * 3, rounded up 60.
  EXPECT_EQ(sub->min_expiration_, 60U);
  EXPECT_EQ(sub->query_count_, 3U);
    
      using DBImpl::Put;
  virtual Status Put(const WriteOptions& /*options*/,
                     ColumnFamilyHandle* /*column_family*/,
                     const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  using DBImpl::Merge;
  virtual Status Merge(const WriteOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/,
                       const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  using DBImpl::Delete;
  virtual Status Delete(const WriteOptions& /*options*/,
                        ColumnFamilyHandle* /*column_family*/,
                        const Slice& /*key*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  using DBImpl::SingleDelete;
  virtual Status SingleDelete(const WriteOptions& /*options*/,
                              ColumnFamilyHandle* /*column_family*/,
                              const Slice& /*key*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  virtual Status Write(const WriteOptions& /*options*/,
                       WriteBatch* /*updates*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
  using DBImpl::CompactRange;
  virtual Status CompactRange(const CompactRangeOptions& /*options*/,
                              ColumnFamilyHandle* /*column_family*/,
                              const Slice* /*begin*/,
                              const Slice* /*end*/) override {
    return Status::NotSupported('Not supported operation in read only mode.');
  }
    
    
    {}  //  namespace rocksdb

    
    // WriteController is controlling write stalls in our write code-path. Write
// stalls happen when compaction can't keep up with write rate.
// All of the methods here (including WriteControllerToken's destructors) need
// to be called while holding DB mutex
class WriteController {
 public:
  explicit WriteController(uint64_t _delayed_write_rate = 1024u * 1024u * 32u,
                           int64_t low_pri_rate_bytes_per_sec = 1024 * 1024)
      : total_stopped_(0),
        total_delayed_(0),
        total_compaction_pressure_(0),
        bytes_left_(0),
        last_refill_time_(0),
        low_pri_rate_limiter_(
            NewGenericRateLimiter(low_pri_rate_bytes_per_sec)) {
    set_max_delayed_write_rate(_delayed_write_rate);
  }
  ~WriteController() = default;
    }
    
    Status PosixRandomRWFile::Write(uint64_t offset, const Slice& data) {
  const char* src = data.data();
  size_t left = data.size();
  while (left != 0) {
    ssize_t done = pwrite(fd_, src, left, offset);
    if (done < 0) {
      // error while writing to file
      if (errno == EINTR) {
        // write was interrupted, try again.
        continue;
      }
      return IOError(
          'While write random read/write file at offset ' + ToString(offset),
          filename_, errno);
    }
    }
    }
    
    // Example structure that describes a compaction task.
struct CompactionTask {
  CompactionTask(
      DB* _db, Compactor* _compactor,
      const std::string& _column_family_name,
      const std::vector<std::string>& _input_file_names,
      const int _output_level,
      const CompactionOptions& _compact_options,
      bool _retry_on_fail)
          : db(_db),
            compactor(_compactor),
            column_family_name(_column_family_name),
            input_file_names(_input_file_names),
            output_level(_output_level),
            compact_options(_compact_options),
            retry_on_fail(_retry_on_fail) {}
  DB* db;
  Compactor* compactor;
  const std::string& column_family_name;
  std::vector<std::string> input_file_names;
  int output_level;
  CompactionOptions compact_options;
  bool retry_on_fail;
};
    
      // Do a write outside of the transaction to key 'y'
  s = db->Put(write_options, 'y', 'y');
    
    
    {  // close DB
  for (auto* handle : handles) {
    delete handle;
  }
  delete db;
}

    
      ////////////////////////////////////////////////////////
  //
  // 'Read Committed' (Monotonic Atomic Views) Example
  //   --Using multiple Snapshots
  //
  ////////////////////////////////////////////////////////
    
    Status GetStringFromColumnFamilyOptions(std::string* opts_str,
                                        const ColumnFamilyOptions& cf_options,
                                        const std::string& delimiter = ';  ');