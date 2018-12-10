
        
        #undef cv_hal_cvtBGRtoBGR
#define cv_hal_cvtBGRtoBGR TEGRA_CVTBGRTOBGR
#undef cv_hal_cvtBGRtoBGR5x5
#define cv_hal_cvtBGRtoBGR5x5 TEGRA_CVTBGRTOBGR565
#undef cv_hal_cvtBGRtoGray
#define cv_hal_cvtBGRtoGray TEGRA_CVTBGRTOGRAY
#undef cv_hal_cvtGraytoBGR
#define cv_hal_cvtGraytoBGR TEGRA_CVTGRAYTOBGR
#undef cv_hal_cvtBGRtoYUV
#define cv_hal_cvtBGRtoYUV TEGRA_CVTBGRTOYUV
#undef cv_hal_cvtBGRtoHSV
#define cv_hal_cvtBGRtoHSV TEGRA_CVTBGRTOHSV
#undef cv_hal_cvtTwoPlaneYUVtoBGR
#define cv_hal_cvtTwoPlaneYUVtoBGR TEGRA_CVT2PYUVTOBGR
    
    
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j);
            int16x8_t v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
            v_dst0 = vqaddq_s16(v_dst0, v_src0);
            v_dst1 = vqaddq_s16(v_dst1, v_src1);
            vst1q_s16(dst + j, v_dst0);
            vst1q_s16(dst + j + 8, v_dst1);
        }
        for (; j < roiw8; j += 8)
        {
            uint8x8_t v_src = vld1_u8(src + j);
            int16x8_t v_src16 = vreinterpretq_s16_u16(vmovl_u8(v_src));
            int16x8_t v_dst = vld1q_s16(dst + j);
            v_dst = vqaddq_s16(v_dst, v_src16);
            vst1q_s16(dst + j, v_dst);
        }
    
    void assertSupportedConfiguration(bool parametersSupported)
{
    if (!isSupportedConfiguration()) {
        std::cerr << 'internal error: attempted to use an unavailable function' << std::endl;
        std::abort();
    }
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC1(f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vmul.f32 q4, q2, q0                                     \n\t'
            'vmul.f32 q5, q3, q0                                     \n\t'
            'vadd.f32 q6, q4, q1                                     \n\t'
            'vadd.f32 q7, q5, q1                                     \n\t'
            'vst1.32 {d12-d13}, [%[dst1]]                            \n\t'
            'vst1.32 {d14-d15}, [%[dst2]]                            \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w' (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19'
        );
    }
})
#else
CVTS_FUNC1(f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        float32x4_t vline1_f32 = vld1q_f32(_src + i + 0);
        float32x4_t vline2_f32 = vld1q_f32(_src + i + 4);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
        q0 = vmaxq_s16(q0, vminq_s16(ak8, d8_15));
    q1 = vminq_s16(q1, vmaxq_s16(bk8, d8_15));
    
            const u16* ln0 = idx_rm2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm2) : tmp;
        const u16* ln1 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const u16* ln2 = internal::getRowPtr(srcBase, srcStride, i);
        const u16* ln3 = idx_rp1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp1) : tmp;
        const u16* ln4 = idx_rp2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp2) : tmp;
    
    template <typename T, int elsize> struct vtail
{
    static inline void inRange(const T *, const T *, const T *,
                               u8 *, size_t &, size_t)
    {
        //do nothing since there couldn't be enough data
    }
};
template <typename T> struct vtail<T, 2>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        //There no more than 15 elements in the tail, so we could handle 8 element vector only once
        if( x + 8 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1(dst + x, internal::vmovn(vd));
            x+=8;
        }
    }
};
template <typename T> struct vtail<T, 1>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<T>::vec64 vec64;
        typedef typename internal::VecTraits<T>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1q(dst + x, vd);
            x+=16;
        }
        if( x + 8 < width)
        {
             vec64  vs = internal::vld1( src + x);
             vec64 vr1 = internal::vld1(rng1 + x);
             vec64 vr2 = internal::vld1(rng2 + x);
            uvec64  vd = internal::vand(internal::vcge(vs, vr1), internal::vcge(vr2, vs));
            internal::vst1(dst + x, vd);
            x+=8;
        }
    }
};
    
    inline float32x2_t vrecp_f32(float32x2_t val)
{
    float32x2_t reciprocal = vrecpe_f32(val);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    return reciprocal;
}
    
    bool isLaplacian3x3Supported(const Size2D &size, BORDER_MODE border)
{
    return isSupportedConfiguration() && size.width >= 8 &&
        (border == BORDER_MODE_CONSTANT ||
            border == BORDER_MODE_REPLICATE);
}
    
    namespace {
    }
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    class ProtoServerReflection final
    : public reflection::v1alpha::ServerReflection::Service {
 public:
  ProtoServerReflection();
    }
    
    namespace osquery {
    }
    
    #include <osquery/config.h>
    
    namespace osquery {
    }
    
    #include <osquery/config.h>
#include <osquery/database.h>
#include <osquery/registry.h>
    
      if (!::GetExitCodeProcess(process.nativeHandle(), &code)) {
    return false;
  }
    
     private:
  /// Set and access the worker process.
  mutable Mutex worker_mutex_;
    
      std::set<std::string> queries_to_run;
  // Check for and run discovery queries first
  if (doc.doc().HasMember('discovery')) {
    const auto& queries = doc.doc()['discovery'];
    assert(queries.IsObject());
    }
    
    using namespace osquery;
    
    template <>
struct hash<folly::Uri> {
  std::size_t operator()(const folly::Uri& k) const {
    return std::hash<folly::uri_detail::UriTuple>{}(
        folly::uri_detail::as_tuple(k));
  }
};
    
    
    {      if (equiv == cpu) {
        // we only want to count the equiv classes once, so we do it when
        // we first encounter them
        while (numCachesByLevel.size() <= level) {
          numCachesByLevel.push_back(0);
        }
        numCachesByLevel[level]++;
      }
    }
    
    namespace {
using ::butteraugli::ImageF;
using ::butteraugli::CreatePlanes;
using ::butteraugli::PlanesFromPacked;
using ::butteraugli::PackedFromPlanes;
    }
    
    
    {}  // namespace guetzli
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    #include 'guetzli/stats.h'
    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
      tmp0 = in[3 * stride];
  tmp1 = kIDCTMatrix[ 3] * tmp0;
  tmp2 = kIDCTMatrix[11] * tmp0;
  tmp3 = kIDCTMatrix[19] * tmp0;
  tmp4 = kIDCTMatrix[27] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    #include 'guetzli/jpeg_data.h'
    
    size_t ClusterHistograms(JpegHistogram* histo, size_t* num,
                         int* histo_indexes, uint8_t* depth) {
  memset(depth, 0, *num * JpegHistogram::kSize);
  size_t costs[kMaxComponents];
  for (size_t i = 0; i < *num; ++i) {
    histo_indexes[i] = i;
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    CreateHuffmanTree(histo[i].counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0],
                      &depth[i * JpegHistogram::kSize]);
    costs[i] = (HistogramHeaderCost(histo[i]) +
                HistogramEntropyCost(histo[i],
                                     &depth[i * JpegHistogram::kSize]));
  }
  const size_t orig_num = *num;
  while (*num > 1) {
    size_t last = *num - 1;
    size_t second_last = *num - 2;
    JpegHistogram combined(histo[last]);
    combined.AddHistogram(histo[second_last]);
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    uint8_t depth_combined[JpegHistogram::kSize] = { 0 };
    CreateHuffmanTree(combined.counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0], depth_combined);
    size_t cost_combined = (HistogramHeaderCost(combined) +
                            HistogramEntropyCost(combined, depth_combined));
    if (cost_combined < costs[last] + costs[second_last]) {
      histo[second_last] = combined;
      histo[last] = JpegHistogram();
      costs[second_last] = cost_combined;
      memcpy(&depth[second_last * JpegHistogram::kSize], depth_combined,
             sizeof(depth_combined));
      for (size_t i = 0; i < orig_num; ++i) {
        if (histo_indexes[i] == last) {
          histo_indexes[i] = second_last;
        }
      }
      --(*num);
    } else {
      break;
    }
  }
  size_t total_cost = 0;
  for (size_t i = 0; i < *num; ++i) {
    total_cost += costs[i];
  }
  return (total_cost + 7) / 8;
}