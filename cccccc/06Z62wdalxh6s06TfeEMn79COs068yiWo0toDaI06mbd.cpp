
        
        
    {    void operator() (const T * src0, const T * src1, T * dst) const
    {
        dst[0] = src0[0] >= src1[0] ? src0[0] - src1[0] : src1[0] - src0[0];
    }
};
    
    #define COMBINE(sgn,bits,n) void combine##n(const Size2D &size                                              \
                                        FILL_LINES##n(FARG, sgn##bits),                                     \
                                        sgn##bits * dstBase, ptrdiff_t dstStride)                           \
{                                                                                                           \
    internal::assertSupportedConfiguration();                                                               \
    (void)size;                                                                                             \
    FILL_LINES##n(VOID, sgn##bits)                                                                          \
    (void)dstBase;                                                                                          \
    (void)dstStride;                                                                                        \
}
#define COMBINE64(sgn,n) COMBINE(sgn,64,n)
    
    
    {
    {} // namespace internal
} // namespace CAROTENE_NS

    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u8, s32, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.u8 q3, d4                                       \n\t'
            'vmovl.u8 q4, d5                                       \n\t'
            'vmovl.u16 q5, d6                                      \n\t'
            'vmovl.u16 q6, d7                                      \n\t'
            'vmovl.u16 q7, d8                                      \n\t'
            'vmovl.u16 q8, d9                                      \n\t'
            'vcvt.f32.u32 q9, q5                                   \n\t'
            'vcvt.f32.u32 q10, q6                                  \n\t'
            'vcvt.f32.u32 q11, q7                                  \n\t'
            'vcvt.f32.u32 q12, q8                                  \n\t'
            'vmul.f32 q13, q9, q0                                  \n\t'
            'vmul.f32 q14, q10, q0                                 \n\t'
            'vmul.f32 q15, q11, q0                                 \n\t'
            'vmul.f32 q2, q12, q0                                  \n\t'
            'vadd.f32 q3, q13, q1                                  \n\t'
            'vadd.f32 q4, q14, q1                                  \n\t'
            'vadd.f32 q5, q15, q1                                  \n\t'
            'vadd.f32 q6, q2, q1                                   \n\t'
            'vcvt.s32.f32 q7, q3                                   \n\t'
            'vcvt.s32.f32 q8, q4                                   \n\t'
            'vcvt.s32.f32 q9, q5                                   \n\t'
            'vcvt.s32.f32 q10, q6                                  \n\t'
            'vst1.32 {d14-d15}, [%[dst1]]                          \n\t'
            'vst1.32 {d16-d17}, [%[dst2]]                          \n\t'
            'vst1.32 {d18-d19}, [%[dst3]]                          \n\t'
            'vst1.32 {d20-d21}, [%[dst4]]                          \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              [dst3] 'r' (_dst + i + 8),
              [dst4] 'r' (_dst + i + 12),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10',
            'd11','d12','d13','d14','d15','d16','d17',
            'd18','d19','d20','d21','d22','d23','d24',
            'd25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(u8, s32, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 16)
    {
        internal::prefetch(_src + i);
        uint8x16_t vline = vld1q_u8(_src + i);
        uint16x8_t vline1_u16 = vmovl_u8(vget_low_u8 (vline));
        uint16x8_t vline2_u16 = vmovl_u8(vget_high_u8(vline));
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline1_u16));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline1_u16));
        uint32x4_t vline3_u32 = vmovl_u16(vget_low_u16 (vline2_u16));
        uint32x4_t vline4_u32 = vmovl_u16(vget_high_u16(vline2_u16));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        float32x4_t vline3_f32 = vcvtq_f32_u32(vline3_u32);
        float32x4_t vline4_f32 = vcvtq_f32_u32(vline4_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline3_f32 = vmulq_f32(vline3_f32, vscale);
        vline4_f32 = vmulq_f32(vline4_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline3_f32 = vaddq_f32(vline3_f32, vshift);
        vline4_f32 = vaddq_f32(vline4_f32, vshift);
        int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
        int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int32x4_t vline3_s32 = vcvtq_s32_f32(vline3_f32);
        int32x4_t vline4_s32 = vcvtq_s32_f32(vline4_f32);
        vst1q_s32(_dst + i + 0,  vline1_s32);
        vst1q_s32(_dst + i + 4,  vline2_s32);
        vst1q_s32(_dst + i + 8,  vline3_s32);
        vst1q_s32(_dst + i + 12, vline4_s32);
    }
})
#endif
    
                // make shift
            prevx[0] = currx[0];
            currx[0] = nextx[0];
    
            if( i == 3 )
            continue;
    
            if (val == maxVal)
        {
            if (maxLocCount < maxLocCapacity)
            {
                maxLocPtr[maxLocCount] = j;
                maxLocPtr[maxLocCount + 1] = i;
            }
            maxLocCount += 2;
        }
    
        typedef typename VecTraits<T>::vec128 vec128;
    typedef typename VecTraits<T>::vec64 vec64;
    
            uint8x8_t el8shr0 = vld1_u8(src + j);
        uint8x8_t el8shr1 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 8));
        uint8x8_t el8shr2 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 16));
        uint8x8_t el8shr3 = vreinterpret_u8_u64(vshl_n_u64(vreinterpret_u64_u8(el8shr0), 24));
    
    absl::string_view StatusCodeToString(grpc_status_code code) {
  switch (code) {
    case GRPC_STATUS_OK:
      return 'OK';
    case GRPC_STATUS_CANCELLED:
      return 'CANCELLED';
    case GRPC_STATUS_UNKNOWN:
      return 'UNKNOWN';
    case GRPC_STATUS_INVALID_ARGUMENT:
      return 'INVALID_ARGUMENT';
    case GRPC_STATUS_DEADLINE_EXCEEDED:
      return 'DEADLINE_EXCEEDED';
    case GRPC_STATUS_NOT_FOUND:
      return 'NOT_FOUND';
    case GRPC_STATUS_ALREADY_EXISTS:
      return 'ALREADY_EXISTS';
    case GRPC_STATUS_PERMISSION_DENIED:
      return 'PERMISSION_DENIED';
    case GRPC_STATUS_UNAUTHENTICATED:
      return 'UNAUTHENTICATED';
    case GRPC_STATUS_RESOURCE_EXHAUSTED:
      return 'RESOURCE_EXHAUSTED';
    case GRPC_STATUS_FAILED_PRECONDITION:
      return 'FAILED_PRECONDITION';
    case GRPC_STATUS_ABORTED:
      return 'ABORTED';
    case GRPC_STATUS_OUT_OF_RANGE:
      return 'OUT_OF_RANGE';
    case GRPC_STATUS_UNIMPLEMENTED:
      return 'UNIMPLEMENTED';
    case GRPC_STATUS_INTERNAL:
      return 'INTERNAL';
    case GRPC_STATUS_UNAVAILABLE:
      return 'UNAVAILABLE';
    case GRPC_STATUS_DATA_LOSS:
      return 'DATA_LOSS';
    default:
      // gRPC wants users of this enum to include a default branch so that
      // adding values is not a breaking change.
      return 'UNKNOWN_STATUS';
  }
}
    
    #include <grpc/support/port_platform.h>
    
      // implementation of ServerReflectionInfo(stream ServerReflectionRequest) rpc
  // in ServerReflection service
  Status ServerReflectionInfo(
      ServerContext* context,
      ServerReaderWriter<reflection::v1alpha::ServerReflectionResponse,
                         reflection::v1alpha::ServerReflectionRequest>* stream)
      override;
    
    void InitProtoReflectionServerBuilderPlugin() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  ::grpc::ServerBuilder::InternalAddPluginFactory(&CreateProtoReflection);
}
    
    MAKE_TEMPLATE_TYPE_INFO(Vector, uint8_t, Variant::POOL_BYTE_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, int, Variant::POOL_INT_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, float, Variant::POOL_REAL_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, String, Variant::POOL_STRING_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, Vector2, Variant::POOL_VECTOR2_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, Vector3, Variant::POOL_VECTOR3_ARRAY)
MAKE_TEMPLATE_TYPE_INFO(Vector, Color, Variant::POOL_COLOR_ARRAY)
    
    bool GodotCollisionDispatcher::needsResponse(const btCollisionObject *body0, const btCollisionObject *body1) {
	if (body0->getUserIndex() == CASTED_TYPE_AREA || body1->getUserIndex() == CASTED_TYPE_AREA) {
		// Avoide area narrow phase
		return false;
	}
	return btCollisionDispatcher::needsResponse(body0, body1);
}

    
    #ifndef HINGE_JOINT_BULLET_H
#define HINGE_JOINT_BULLET_H
    
    
    {	_FORCE_INLINE_ void _set_physics_server(BulletPhysicsServer *p_physicsServer) { physicsServer = p_physicsServer; }
	_FORCE_INLINE_ BulletPhysicsServer *get_physics_server() const { return physicsServer; }
};
#endif

    
    void unregister_dds_types() {
    }
    
    #include 'dvector.h'
    
    IP_Address::IP_Address(const String &p_string) {
    }
    
    class PCKPacker : public Reference {
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
    
      void ResetRecordCounts();
    
      // Implementations of the DB interface
  using DB::Get;
  virtual Status Get(const ReadOptions& options,
                     ColumnFamilyHandle* column_family, const Slice& key,
                     PinnableSlice* value) override;
    
    
    {}  // namespace rocksdb
    
    Status PosixWritableFile::Truncate(uint64_t size) {
  Status s;
  int r = ftruncate(fd_, size);
  if (r < 0) {
    s = IOError('While ftruncate file to size ' + ToString(size), filename_,
                errno);
  } else {
    filesize_ = size;
  }
  return s;
}
    
    namespace {
// A dummy compaction filter
class DummyCompactionFilter : public CompactionFilter {
 public:
  virtual ~DummyCompactionFilter() {}
  virtual bool Filter(int level, const Slice& key, const Slice& existing_value,
                      std::string* new_value, bool* value_changed) const {
    return false;
  }
  virtual const char* Name() const { return 'DummyCompactionFilter'; }
};
    }
    
    #endif // D_DHT_REGISTRY_H

    
    void DHTReplaceNodeTask::sendMessage()
{
  std::shared_ptr<DHTNode> questionableNode = bucket_->getLRUQuestionableNode();
  if (!questionableNode) {
    setFinished(true);
  }
  else {
    getMessageDispatcher()->addMessageToQueue(
        getMessageFactory()->createPingMessage(questionableNode), timeout_,
        make_unique<DHTPingReplyMessageCallback<DHTReplaceNodeTask>>(this));
  }
}
    
      virtual bool isReply() const CXX11_OVERRIDE;
    
    public:
  DHTRoutingTableDeserializer(int family);
    
    #include 'LogFactory.h'
#include 'Logger.h'
#include 'util.h'
#include 'DHTNode.h'
#include 'DHTConnectionImpl.h'
#include 'DHTRoutingTable.h'
#include 'DHTMessageFactoryImpl.h'
#include 'DHTMessageTracker.h'
#include 'DHTMessageDispatcherImpl.h'
#include 'DHTMessageReceiver.h'
#include 'DHTTaskQueueImpl.h'
#include 'DHTTaskFactoryImpl.h'
#include 'DHTPeerAnnounceStorage.h'
#include 'DHTTokenTracker.h'
#include 'DHTInteractionCommand.h'
#include 'DHTTokenUpdateCommand.h'
#include 'DHTBucketRefreshCommand.h'
#include 'DHTPeerAnnounceCommand.h'
#include 'DHTEntryPointNameResolveCommand.h'
#include 'DHTAutoSaveCommand.h'
#include 'DHTTask.h'
#include 'DHTRoutingTableDeserializer.h'
#include 'DHTRegistry.h'
#include 'DHTBucketRefreshTask.h'
#include 'DHTMessageCallback.h'
#include 'DHTMessageTrackerEntry.h'
#include 'DHTMessageEntry.h'
#include 'UDPTrackerClient.h'
#include 'BtRegistry.h'
#include 'prefs.h'
#include 'Option.h'
#include 'SocketCore.h'
#include 'DlAbortEx.h'
#include 'RecoverableException.h'
#include 'a2functional.h'
#include 'DownloadEngine.h'
#include 'fmt.h'
    
    DHTTaskExecutor::~DHTTaskExecutor() = default;
    
    void DHTTokenUpdateCommand::preProcess()
{
  if (getDownloadEngine()->getRequestGroupMan()->downloadFinished() ||
      getDownloadEngine()->isHaltRequested()) {
    enableExit();
  }
}
    
      static const std::string E;
    
    DNSCache::AddrEntry& DNSCache::AddrEntry::operator=(const AddrEntry& c)
{
  if (this != &c) {
    addr_ = c.addr_;
    good_ = c.good_;
  }
  return *this;
}
    
        std::sort(tree, tree + n, SortHuffmanTree);
    
    #define COLUMN_DCT8(in) do { \
  LOAD(m0, (in)[0 * 8]);     \
  LOAD(m2, (in)[2 * 8]);     \
  LOAD(m7, (in)[7 * 8]);     \
  LOAD(m5, (in)[5 * 8]);     \
                             \
  BUTTERFLY(m0, m7);         \
  BUTTERFLY(m2, m5);         \
                             \
  LOAD(m3, (in)[3 * 8]);     \
  LOAD(m4, (in)[4 * 8]);     \
  BUTTERFLY(m3, m4);         \
                             \
  LOAD(m6, (in)[6 * 8]);     \
  LOAD(m1, (in)[1 * 8]);     \
  BUTTERFLY(m1, m6);         \
  BUTTERFLY(m7, m4);         \
  BUTTERFLY(m6, m5);         \
                             \
  /* RowIdct() needs 15bits fixed-point input, when the output from   */ \
  /* ColumnIdct() would be 12bits. We are better doing the shift by 3 */ \
  /* now instead of in RowIdct(), because we have some multiplies to  */ \
  /* perform, that can take advantage of the extra 3bits precision.   */ \
  LSHIFT(m4, 3);             \
  LSHIFT(m5, 3);             \
  BUTTERFLY(m4, m5);         \
  STORE16((in)[0 * 8], m5);  \
  STORE16((in)[4 * 8], m4);  \
                             \
  LSHIFT(m7, 3);             \
  LSHIFT(m6, 3);             \
  LSHIFT(m3, 3);             \
  LSHIFT(m0, 3);             \
                             \
  LOAD_CST(m4, kTan2);       \
  m5 = m4;                   \
  MULT(m4, m7);              \
  MULT(m5, m6);              \
  SUB(m4, m6);               \
  ADD(m5, m7);               \
  STORE16((in)[2 * 8], m5);  \
  STORE16((in)[6 * 8], m4);  \
                             \
  /* We should be multiplying m6 by C4 = 1/sqrt(2) here, but we only have */ \
  /* the k2Sqrt2 = 1/(2.sqrt(2)) constant that fits into 15bits. So we    */ \
  /* shift by 4 instead of 3 to compensate for the additional 1/2 factor. */ \
  LOAD_CST(m6, k2Sqrt2);     \
  LSHIFT(m2, 3 + 1);         \
  LSHIFT(m1, 3 + 1);         \
  BUTTERFLY(m1, m2);         \
  MULT(m2, m6);              \
  MULT(m1, m6);              \
  BUTTERFLY(m3, m1);         \
  BUTTERFLY(m0, m2);         \
                             \
  LOAD_CST(m4, kTan3m1);     \
  LOAD_CST(m5, kTan1);       \
  m7 = m3;                   \
  m6 = m1;                   \
  MULT(m3, m4);              \
  MULT(m1, m5);              \
                             \
  ADD(m3, m7);               \
  ADD(m1, m2);               \
  CORRECT_LSB(m1);           \
  CORRECT_LSB(m3);           \
  MULT(m4, m0);              \
  MULT(m5, m2);              \
  ADD(m4, m0);               \
  SUB(m0, m3);               \
  ADD(m7, m4);               \
  SUB(m5, m6);               \
                             \
  STORE16((in)[1 * 8], m1);  \
  STORE16((in)[3 * 8], m0);  \
  STORE16((in)[5 * 8], m7);  \
  STORE16((in)[7 * 8], m5);  \
} while (0)
    
    #include 'guetzli/jpeg_data.h'
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    #define VERIFY_LEN(n)                                                   \
  if (*pos + (n) > len) {                                               \
    fprintf(stderr, 'Unexpected end of input: pos=%d need=%d len=%d\n', \
            static_cast<int>(*pos), static_cast<int>(n),                \
            static_cast<int>(len));                                     \
    jpg->error = JPEG_UNEXPECTED_EOF;                                   \
    return false;                                                       \
  }
    
    
    {  int code = 0;
  int si = huffsize[0];
  p = 0;
  while (huffsize[p]) {
    while ((huffsize[p]) == si) {
      huffcode[p++] = code;
      code++;
    }
    code <<= 1;
    si++;
  }
  for (p = 0; p < lastp; p++) {
    int i = values[p];
    table->depth[i] = huffsize[p];
    table->code[i] = huffcode[p];
  }
}
    
    void BuildSequentialHuffmanCodes(
    const JPEGData& jpg, std::vector<HuffmanCodeTable>* dc_huffman_code_tables,
    std::vector<HuffmanCodeTable>* ac_huffman_code_tables);
    
    namespace benchmark {
namespace internal {
// The arraysize(arr) macro returns the # of elements in an array arr.
// The expression is a compile-time constant, and therefore can be
// used in defining new arrays, for example.  If you use arraysize on
// a pointer by mistake, you will get a compile-time error.
//
    }
    }
    
    #define CHECK_EQ(a, b) CHECK((a) == (b))
#define CHECK_NE(a, b) CHECK((a) != (b))
#define CHECK_GE(a, b) CHECK((a) >= (b))
#define CHECK_LE(a, b) CHECK((a) <= (b))
#define CHECK_GT(a, b) CHECK((a) > (b))
#define CHECK_LT(a, b) CHECK((a) < (b))
    
      bool term_supports_color = false;
  for (const char* candidate : SUPPORTED_TERM_VALUES) {
    if (term && 0 == strcmp(term, candidate)) {
      term_supports_color = true;
      break;
    }
  }
    
    #include <cstdarg>
#include <iostream>
#include <string>
    
    namespace benchmark {
    }
    
    #include <iostream>
#include <tuple>
#include <vector>
    
    
    {void SleepForSeconds(double seconds) {
  SleepForMicroseconds(static_cast<int>(seconds * kNumMicrosPerSecond));
}
#endif  // BENCHMARK_OS_WINDOWS
}  // end namespace benchmark
