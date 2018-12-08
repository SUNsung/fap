
        
            void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vqadd(v_src0, v_src1);
    }
    
    void bitwiseAnd(const Size2D &size,
                const u8 *src0Base, ptrdiff_t src0Stride,
                const u8 *src1Base, ptrdiff_t src1Stride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseAnd());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    #include <cstdlib>
#include <iostream>
    
        q0 = vmaxq_s16(q0, vminq_s16(ak8, d8_15));
    q1 = vminq_s16(q1, vmaxq_s16(bk8, d8_15));
    
    
    {} // namespace CAROTENE_NS

    
            for (; j < roiw_tail; j += step_tail, js += step_tail3, jd -= step_tail3)
        {
            vec64 v_src = vld3(src + js), v_dst;
            v_dst.val[0] = vrev64(v_src.val[0]);
            v_dst.val[1] = vrev64(v_src.val[1]);
            v_dst.val[2] = vrev64(v_src.val[2]);
    }
    
                    uint16x8_t vSum_4_8  = vaddq_u16(vLane4.val[0], vLane6.val[0]);
                uint16x8_t vSum_5_9  = vaddq_u16(vLane4.val[1], vLane6.val[1]);
                uint16x8_t vSum_6_10 = vaddq_u16(vLane4.val[2], vLane6.val[2]);
                uint16x8_t vSum_7_11 = vaddq_u16(vLane4.val[3], vLane6.val[3]);
    
        for(size_t j = 0; j < size.height; ++j)
    {
        const T *  src = internal::getRowPtr( srcBase,  srcStride, j);
        const T * rng1 = internal::getRowPtr(rng1Base, rng1Stride, j);
        const T * rng2 = internal::getRowPtr(rng2Base, rng2Stride, j);
             u8 *  dst = internal::getRowPtr( dstBase,  dstStride, j);
        size_t i = 0;
        for( ; i < width; i += 32/sizeof(T) )
        {
            internal::prefetch(src + i);
            internal::prefetch(rng1 + i);
            internal::prefetch(rng2 + i);
    }
    }
    
    void Laplacian3x3(const Size2D &size,
                  const u8 * srcBase, ptrdiff_t srcStride,
                  u8 * dstBase, ptrdiff_t dstStride,
                  BORDER_MODE border, u8 borderValue)
{
    internal::assertSupportedConfiguration(isLaplacian3x3Supported(size, border));
#ifdef CAROTENE_NEON
    const uint16x8_t v_border_x3 = vdupq_n_u16(borderValue * 3);
    const uint16x8_t v_zero = vdupq_n_u16(0);
    const uint8x8_t v_border = vdup_n_u8(borderValue);
    }
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n) {
  int max_offset = n - 2;
  int offset = 0;
  // Accumulate a set of 2 sums in sum, by loading pairs of 2 values from u and
  // v, and multiplying them together in parallel.
  __m128d sum = _mm_setzero_pd();
  if (offset <= max_offset) {
    offset = 2;
    // Aligned load is reputedly faster but requires 16 byte aligned input.
    if ((reinterpret_cast<uintptr_t>(u) & 15) == 0 &&
        (reinterpret_cast<uintptr_t>(v) & 15) == 0) {
      // Use aligned load.
      sum = _mm_load_pd(u);
      __m128d floats2 = _mm_load_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_load_pd(u + offset);
        floats2 = _mm_load_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    } else {
      // Use unaligned load.
      sum = _mm_loadu_pd(u);
      __m128d floats2 = _mm_loadu_pd(v);
      // Multiply.
      sum = _mm_mul_pd(sum, floats2);
      while (offset <= max_offset) {
        __m128d floats1 = _mm_loadu_pd(u + offset);
        floats2 = _mm_loadu_pd(v + offset);
        offset += 2;
        floats1 = _mm_mul_pd(floats1, floats2);
        sum = _mm_add_pd(sum, floats1);
      }
    }
  }
  // Add the 2 sums in sum horizontally.
  sum = _mm_hadd_pd(sum, sum);
  // Extract the low result.
  double result = _mm_cvtsd_f64(sum);
  // Add on any left-over products.
  while (offset < n) {
    result += u[offset] * v[offset];
    ++offset;
  }
  return result;
}
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n);
    
      // Computes a reshaped copy of the weight matrix w. If there are no
  // partial_funcs_, it does nothing.
  void Init(const GENERIC_2D_ARRAY<int8_t>& w);
    
    // Max number of scripts in ICU + 'NULL' + Japanese and Korean + Fraktur
const int kMaxNumberOfScripts = 116 + 1 + 2 + 1;
    
    /**
 * Class to iterate over tesseract page structure, providing access to all
 * levels of the page hierarchy, without including any tesseract headers or
 * having to handle any tesseract structures.
 * WARNING! This class points to data held within the TessBaseAPI class, and
 * therefore can only be used while the TessBaseAPI class still exists and
 * has not been subjected to a call of Init, SetImage, Recognize, Clear, End
 * DetectOS, or anything else that changes the internal PAGE_RES.
 * See apitypes.h for the definition of PageIteratorLevel.
 * See also ResultIterator, derived from PageIterator, which adds in the
 * ability to access OCR output with text-specific methods.
 */
    
      SVMenuNode* other = mr->AddChild('OTHER');
    
    
    {  for (int b = 0; b < boxword->length_; ++b) {
    TBLOB* tblob = tessword->blobs[b];
    TBOX blob_box;
    for (TESSLINE* outline = tblob->outlines; outline != nullptr;
         outline = outline->next) {
      EDGEPT* edgept = outline->loop;
      // Iterate over the edges.
      do {
        if (!edgept->IsHidden() || !edgept->prev->IsHidden()) {
          ICOORD pos(edgept->pos.x, edgept->pos.y);
          TPOINT denormed;
          tblob->denorm().DenormTransform(nullptr, edgept->pos, &denormed);
          pos.set_x(denormed.x);
          pos.set_y(denormed.y);
          TBOX pt_box(pos, pos);
          blob_box += pt_box;
        }
        edgept = edgept->next;
      } while (edgept != outline->loop);
    }
    boxword->boxes_.push_back(blob_box);
  }
  boxword->ComputeBoundingBox();
  return boxword;
}
    
    namespace tesseract {
    }
    
    
    {} // namespace aria2

    
    DHTRoutingTable::DHTRoutingTable(const std::shared_ptr<DHTNode>& localNode)
    : localNode_(localNode),
      root_(make_unique<DHTBucketTreeNode>(
          std::make_shared<DHTBucket>(localNode_))),
      numBucket_(1),
      taskQueue_{nullptr},
      taskFactory_{nullptr}
{
}
    
      ~DHTRoutingTable();
    
    namespace aria2 {
    }
    
      ~DHTSetup();
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                                   int numRetry)
{
  auto task = std::make_shared<DHTPingTask>(remoteNode, numRetry);
  task->setTimeout(timeout_);
  setCommonProperty(task);
  return task;
}
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
    #include <memory>
    
    void DNSCache::CacheEntry::markBad(const std::string& addr)
{
  auto i = find(addr);
  if (i != addrEntries_.end()) {
    i->good_ = false;
  }
}
    
    #include 'benchmark/benchmark.h'
    
      CheckHandler& operator=(const CheckHandler&) = delete;
  CheckHandler(const CheckHandler&) = delete;
  CheckHandler() = delete;
    
    // Macros for defining flags.
#define DEFINE_bool(name, default_val, doc) bool FLAG(name) = (default_val)
#define DEFINE_int32(name, default_val, doc) int32_t FLAG(name) = (default_val)
#define DEFINE_int64(name, default_val, doc) int64_t FLAG(name) = (default_val)
#define DEFINE_double(name, default_val, doc) double FLAG(name) = (default_val)
#define DEFINE_string(name, default_val, doc) \
  std::string FLAG(name) = (default_val)
    
    // Source project : https://github.com/ismaelJimenez/cpp.leastsq
// Adapted to be used with google benchmark
    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
    // Prefer C regex libraries when compiling w/o exceptions so that we can
// correctly report errors.
#if defined(BENCHMARK_HAS_NO_EXCEPTIONS) && defined(HAVE_STD_REGEX) && \
    (defined(HAVE_GNU_POSIX_REGEX) || defined(HAVE_POSIX_REGEX))
#undef HAVE_STD_REGEX
#endif
    
    
    {#ifndef NDEBUG
  Out << '***WARNING*** Library was built as DEBUG. Timings may be '
         'affected.\n';
#endif
}
    
    struct TestCanParam {
  CANCardParameter conf;
  bool is_first_agent = false;
  int32_t recv_cnt = 0;
  int32_t recv_err_cnt = 0;
  int32_t send_cnt = 0;
  int32_t send_err_cnt = 0;
  int32_t send_lost_cnt = 0;
  int32_t send_time = 0;
  int32_t recv_time = 0;
  CanClient *can_client = nullptr;
    }
    
      if (!_is_init) {
    AERROR << 'Hermes can client is not init! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  //    if (*frame_num > MAX_CAN_SEND_FRAME_LEN || *frame_num < 0) {
  //       AERROR << 'send can frame num not in range[0, '
  //         << MAX_CAN_SEND_FRAME_LEN << '], frame_num:' << *frame_num;
  //       return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  //    }
  for (int i = 0; i < *frame_num; ++i) {
    _send_frames[i].bcan_msg_id = frames[i].id;
    _send_frames[i].bcan_msg_datalen = frames[i].len;
    memcpy(_send_frames[i].bcan_msg_data, frames[i].data, frames[i].len);
  }
    
    /*
TEST(HermesCanClient, send) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
    }
    
      std::unordered_map<uint32_t, ProtocolData<SensorType> *> protocol_data_map_;
  std::unordered_map<uint32_t, CheckIdArg> check_ids_;
  std::set<uint32_t> received_ids_;
    
    TEST(ByteTest, SetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  value.set_value(0x06, 3, 3);
  EXPECT_EQ(0x32, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 8);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 10);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 1, 7);
  EXPECT_EQ(0x0C, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, 1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, -1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
}