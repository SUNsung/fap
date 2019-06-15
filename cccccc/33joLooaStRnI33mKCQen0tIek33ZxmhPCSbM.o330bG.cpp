
        
        void add(const Size2D &size,
         const u32 * src0Base, ptrdiff_t src0Stride,
         const u32 * src1Base, ptrdiff_t src1Stride,
         u32 * dstBase, ptrdiff_t dstStride,
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
                             AddSaturate<u32, u64>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<u32, u64>());
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
    
    #define ALPHA_QUAD(sgn, bits) { \
                                  internal::prefetch(src + sj); \
                                  __asm__ ( \
                                      'vld4.' #bits ' {d0, d2, d4, d6}, [%[in0]]    \n\t' \
                                      'vld4.' #bits ' {d1, d3, d5, d7}, [%[in1]]    \n\t' \
                                      'vst3.' #bits ' {d0, d2, d4}, [%[out3_1]]     \n\t' \
                                      'vst3.' #bits ' {d1, d3, d5}, [%[out3_2]]     \n\t' \
                                      'vst1.' #bits ' {d6-d7}, [%[out1]]            \n\t' \
                                      : \
                                      : [out3_1] 'r' (dst3 + d3j), [out3_2] 'r' (dst3 + d3j + 24/sizeof(sgn##bits)), [out1] 'r' (dst1 + d1j), \
                                        [in0]  'r' (src + sj), [in1]  'r' (src + sj + 32/sizeof(sgn##bits)) \
                                      : 'd0','d1','d2','d3','d4','d5','d6','d7' \
                                  ); \
                              }
    
    #else
    
    inline void vnst(u8* dst, uint8x16_t v1, uint8x16_t v2) { vst1q_u8(dst, v1); vst1q_u8(dst+16, v2); }
inline void vnst(u8* dst, uint16x8_t v1, uint16x8_t v2) { vst1q_u8(dst, vcombine_u8(vmovn_u16(v1), vmovn_u16(v2))); }
inline void vnst(u8* dst, uint32x4_t v1, uint32x4_t v2) { vst1_u8(dst, vmovn_u16(vcombine_u16(vmovn_u32(v1), vmovn_u32(v2)))); }
    
    
    {    return 0;
#endif
}
    
    #define INRANGEFUNC(T)                                       \
void inRange(const Size2D &_size,                            \
             const T * srcBase, ptrdiff_t srcStride,         \
             const T * rng1Base, ptrdiff_t rng1Stride,       \
             const T * rng2Base, ptrdiff_t rng2Stride,       \
             u8 * dstBase, ptrdiff_t dstStride)              \
{                                                            \
    internal::assertSupportedConfiguration();                \
    inRangeCheck(_size, srcBase, srcStride,                  \
                 rng1Base, rng1Stride, rng2Base, rng2Stride, \
                 dstBase, dstStride);                        \
}
#else
#define INRANGEFUNC(T)                                       \
void inRange(const Size2D &,                                 \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             const T *, ptrdiff_t,                           \
             u8 *, ptrdiff_t)                                \
{                                                            \
    internal::assertSupportedConfiguration();                \
}
#endif
    
    
    {        u32 buf[8];
        vst1_u32(buf, vget_low_u32(el8shr01l));
        vst1_u32(buf+2, el2l);
        vst1_u32(buf+4, el2hl);
        vst1_u32(buf+6, el2hh);
        for(u32 k=0; k < 8; k++)
            sqsum[j+k] = prev + buf[k];
        prev += buf[7];
    }
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    
namespace nwapi {
    }
    
    bool NwMenuModel::HasIcons() const {
  // Always return false, see the comment about |NwMenuModel|.
  return false;
}
    
    

    
      class ClipboardReader {
  public:
    ClipboardReader() {
      clipboard_ = ui::Clipboard::GetForCurrentThread();
    }
    }
    
    
    {
} // namespace extensions
#endif

    
    namespace extensions {
    }
    
     protected:
  ~NwObjCallObjectMethodFunction() override;
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CHANNEL_FILTER_H
    
      CensusClientCallData()
      : recv_trailing_metadata_(nullptr),
        initial_on_done_recv_trailing_metadata_(nullptr),
        initial_on_done_recv_message_(nullptr),
        elapsed_time_(0),
        recv_message_(nullptr),
        recv_message_count_(0),
        sent_message_count_(0) {
    memset(&stats_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&tracing_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&path_, 0, sizeof(grpc_slice));
    memset(&on_done_recv_trailing_metadata_, 0, sizeof(grpc_closure));
    memset(&on_done_recv_message_, 0, sizeof(grpc_closure));
  }
    
    // These measure definitions should be kept in sync across opencensus
// implementations--see
// https://github.com/census-instrumentation/opencensus-java/blob/master/contrib/grpc_metrics/src/main/java/io/opencensus/contrib/grpc/metrics/RpcMeasureConstants.java.
    
      // Fixed size offsets for field ID start positions during encoding.  Field
  // data immediately follows.
  enum FieldIdOffset {
    kTraceIdOffset = kVersionIdSize,
    kSpanIdOffset = kTraceIdOffset + kFieldIdSize + kTraceIdSize,
    kTraceOptionsOffset = kSpanIdOffset + kFieldIdSize + kSpanIdSize,
  };
    
      Status GetFileByName(ServerContext* context, const grpc::string& file_name,
                       reflection::v1alpha::ServerReflectionResponse* response);
    
    namespace grpc {
namespace {
    }
    }
    
    #include <grpc/support/port_platform.h>
    
    #endif  // GPR_WINDOWS

    
      int NumFiles(int level) const { return files_[level].size(); }
    
      // Returns true iff the status indicates a NotFound error.
  bool IsNotFound() const { return code() == kNotFound; }
    
      // Copies the operations in 'source' to this batch.
  //
  // This runs in O(source size) time. However, the constant factor is better
  // than calling Iterate() over the source batch with a Handler that replicates
  // the operations into this batch.
  void Append(const WriteBatch& source);
    
    namespace leveldb {
    }
    
    
    {}  // namespace leveldb

    
    class BloomTest {
 public:
  BloomTest() : policy_(NewBloomFilterPolicy(10)) {}
    }
    
        void ProgressWriter::WriteTestSummary(const ValuePtr& accumulatedMetric)
    {
        m_test->WriteSummary(
            nullptr, accumulatedMetric,
            [this](size_t samples, size_t updates, size_t summaries, double /*aggregateLoss*/, double aggregateMetric,
                uint64_t elapsedMs)
            {
                OnWriteTestSummary(samples, updates, summaries, aggregateMetric, elapsedMs);
            });
    }
    
    class RandomOrdering // note: NOT thread-safe at all
{
    // constants for randomization
    const static size_t randomizeDisable = 0;
    }
    
            // add to set
        let wasAdded = AddNodeToNetIfNotYet(node, /*makeUniqueName=*/ true);
        if (!wasAdded) // node already there (above will fail if there is a different node with the same name)
            continue;
    
    
    {        bool isImage = configp->Get(L'isImage');
        if (!isImage)
            Init(configp->Get(L'shape'), isSparse, axisName);
        else
            Init(ImageDimensions::AsTensorShape(configp->Get(L'imageWidth'), configp->Get(L'imageHeight'), configp->Get(L'imageChannels'), ImageLayoutKindFrom(configp->Get(L'imageLayout'))), isSparse, axisName);
    }
    
    Status WriteBatchBase::Delete(ColumnFamilyHandle* column_family,
                              const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return Delete(column_family, key_slice);
}
    
    #include 'rocksdb/status.h'
    
    #pragma once
    
    namespace rocksdb {
    }
    
      // close DB
  delete cf;
  delete db;
    
    // This is an example interface of external-compaction algorithm.
// Compaction algorithm can be implemented outside the core-RocksDB
// code by using the pluggable compaction APIs that RocksDb provides.
class Compactor : public EventListener {
 public:
  // Picks and returns a compaction task given the specified DB
  // and column family.  It is the caller's responsibility to
  // destroy the returned CompactionTask.  Returns 'nullptr'
  // if it cannot find a proper compaction task.
  virtual CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) = 0;
    }
    
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
    
    int main() {
  DBOptions db_opt;
  db_opt.create_if_missing = true;
    }
    
    
    {class DbUndumpTool {
 public:
  bool Run(const UndumpOptions& undump_options,
           rocksdb::Options options = rocksdb::Options());
};
}  // namespace rocksdb
#endif  // ROCKSDB_LITE

    
     private:
  void Init(
      const std::string& lua_script,
      const std::vector<std::shared_ptr<RocksLuaCustomLibrary>>& libraries) {
    if (lua_state_) {
      luaL_openlibs(lua_state_);
      for (const auto& library : libraries) {
        luaL_openlib(lua_state_, library->Name(), library->Lib(), 0);
        library->CustomSetup(lua_state_);
      }
      luaL_dostring(lua_state_, lua_script.c_str());
    }
  }
    
      // Starts a new Transaction.
  //
  // Caller is responsible for deleting the returned transaction when no
  // longer needed.
  //
  // If old_txn is not null, BeginTransaction will reuse this Transaction
  // handle instead of allocating a new one.  This is an optimization to avoid
  // extra allocations when repeatedly creating transactions.
  virtual Transaction* BeginTransaction(
      const WriteOptions& write_options,
      const OptimisticTransactionOptions& txn_options =
          OptimisticTransactionOptions(),
      Transaction* old_txn = nullptr) = 0;
    
    /*
 * Class:     org_rocksdb_BackupableDBOptions
 * Method:    setBackupLogFiles
 * Signature: (JZ)V
 */
void Java_org_rocksdb_BackupableDBOptions_setBackupLogFiles(JNIEnv* /*env*/,
                                                            jobject /*jobj*/,
                                                            jlong jhandle,
                                                            jboolean flag) {
  auto* bopt = reinterpret_cast<rocksdb::BackupableDBOptions*>(jhandle);
  bopt->backup_log_files = flag;
}
    
    NS_CC_BEGIN
    
    ActionTween *ActionTween::clone() const
{
    return ActionTween::create(_duration, _key, _from, _to);
}
    
    
    {    //real rect is the size that is in scale with the texture file
    Rect getRealRect(const Rect& rect);
    
    Image* _image;
    unsigned char * _data;
    std::string _filename;
    unsigned int _width;
    unsigned int _height;
    float _scaleFactor;
    unsigned int _threshold;
};
    
    static bool sendComponentEventToJS(Component* node, int action)
{
    auto scriptEngine = ScriptEngineManager::getInstance()->getScriptEngine();
    
    if (scriptEngine->isCalledFromScript())
    {
        scriptEngine->setCalledFromScript(false);
    }
    else
    {
        BasicScriptData data(node,(void*)&action);
        ScriptEvent scriptEvent(kComponentEvent,(void*)&data);
        if (scriptEngine->sendEvent(&scriptEvent))
            return true;
    }
    
    return false;
}
    
    #include '2d/CCFont.h'
    
    TEST(StaticTracepoint, TestSemaphoreExtern) {
  unsigned v = folly::Random::rand32();
  CHECK_EQ(v * v, folly::test::staticTracepointTestFunc(v));
  EXPECT_FALSE(FOLLY_SDT_IS_ENABLED(folly, test_semaphore_extern));
}

    
    namespace {
std::exception const* get_std_exception_(std::exception_ptr eptr) noexcept {
  try {
    std::rethrow_exception(eptr);
  } catch (const std::exception& ex) {
    return &ex;
  } catch (...) {
    return nullptr;
  }
}
} // namespace
    
    
    {} // namespace std

    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
    /**
 * Get a codec with the given options and compression level.
 *
 * If the windowSize is 15 and the format is Format::ZLIB or Format::GZIP, then
 * the type of the codec will be CodecType::ZLIB or CodecType::GZIP
 * respectively. Otherwise, the type will be CodecType::USER_DEFINED.
 *
 * Automatic uncompression is not supported with USER_DEFINED codecs.
 *
 * Levels supported: 0 = no compression, 1 = fast, ..., 9 = best; default = 6
 */
std::unique_ptr<Codec> getCodec(
    Options options = Options(),
    int level = COMPRESSION_LEVEL_DEFAULT);
std::unique_ptr<StreamCodec> getStreamCodec(
    Options options = Options(),
    int level = COMPRESSION_LEVEL_DEFAULT);
    
    
    {
    {inline void fastIpv6AppendToString(const in6_addr& in6Addr, std::string& out) {
  char str[sizeof('2001:0db8:0000:0000:0000:ff00:0042:8329')];
  out.append(str, fastIpv6ToBufferUnsafe(in6Addr, str));
}
} // namespace detail
} // namespace folly
