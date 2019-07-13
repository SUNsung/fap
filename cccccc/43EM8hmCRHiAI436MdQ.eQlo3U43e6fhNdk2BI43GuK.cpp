
        
        #define TEGRA_ABSDIFF(src1, sz1, src2, sz2, dst, sz, w, h) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::absDiff(CAROTENE_NS::Size2D(w, h), \
                     src1, sz1, \
                     src2, sz2, \
                     dst, sz), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
    
    {} // namespace
    
    void bitwiseNot(const Size2D &size,
                const u8 *srcBase, ptrdiff_t srcStride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
            int16x8_t l02 = vaddq_s16(line0x, line2x);
        int16x8_t l1x2 = vshlq_n_s16(line1x, 1);
        int16x8_t dy = vsubq_s16(line2y, line0y);
        int16x8_t dx = vaddq_s16(l1x2, l02);
    
    #define COMBINE64(sgn,n) void combine##n(const Size2D &_size                                                \
                                               FILL_LINES##n(FARG, sgn##64),                                \
                                               sgn##64 * dstBase, ptrdiff_t dstStride)                      \
{                                                                                                           \
    internal::assertSupportedConfiguration();                                                               \
    Size2D size(_size);                                                                                     \
    if (CONTSRC##n                                                                                          \
        dstStride == (ptrdiff_t)(size.width))                                                               \
    {                                                                                                       \
        size.width *= size.height;                                                                          \
        size.height = 1;                                                                                    \
    }                                                                                                       \
    typedef internal::VecTraits<sgn##64, n>::vec64 vec64;                                                   \
                                                                                                            \
    for (size_t i = 0u; i < size.height; ++i)                                                               \
    {                                                                                                       \
        FILL_LINES##n(VROW, sgn##64)                                                                        \
        sgn##64 * dst = internal::getRowPtr(dstBase, dstStride, i);                                         \
        size_t sj = 0u, dj = 0u;                                                                            \
                                                                                                            \
        for (; sj < size.width; ++sj, dj += n)                                                              \
        {                                                                                                   \
            vec64 v_dst;                                                                                    \
            FILL_LINES##n(VLD1, sgn##64)                                                                    \
            vst##n##_##sgn##64(dst + dj, v_dst);                                                            \
            /*FILL_LINES##n(SLD, sgn##64)*/                                                                 \
        }                                                                                                   \
    }                                                                                                       \
}
    
    
    {    if (!parametersSupported) {
        std::cerr << 'internal error: attempted to use a function with unsupported parameters' << std::endl;
        std::abort();
    }
}
    
    
    {
    {         vline_s32 = vld1q_s32(_src + i + 4);
         vline_f32 = vcvtq_f32_s32(vline_s32);
         vst1q_f32(_dst + i + 4, vline_f32);
     }
})
#endif
    
    template <int shift>
void rshiftConst(const Size2D &size,
                 const s16 * srcBase, ptrdiff_t srcStride,
                 u8 * dstBase, ptrdiff_t dstStride,
                 CONVERT_POLICY cpolicy)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s32, s8, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                              \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                              \n\t'
            'vcvt.f32.s32 q4, q2                                     \n\t'
            'vcvt.f32.s32 q5, q3                                     \n\t'
            'vmul.f32 q6, q4, q0                                     \n\t'
            'vmul.f32 q7, q5, q0                                     \n\t'
            'vadd.f32 q8, q6, q1                                     \n\t'
            'vadd.f32 q9, q7, q1                                     \n\t'
            'vcvt.s32.f32 q10, q8                                    \n\t'
            'vcvt.s32.f32 q11, q9                                    \n\t'
            'vqmovn.s32 d24, q10                                     \n\t'
            'vqmovn.s32 d25, q11                                     \n\t'
            'vqmovn.s16  d26, q12                                    \n\t'
            'vst1.8 {d26}, [%[dst]]                                  \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26'
        );
    }
})
#else
CVTS_FUNC(s32, s8, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int32x4_t vline1_s32 = vld1q_s32(_src + i + 0);
        int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
        float32x4_t vline1_f32 = vcvtq_f32_s32(vline1_s32);
        float32x4_t vline2_f32 = vcvtq_f32_s32(vline2_s32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vline1_s32 = vcvtq_s32_f32(vline1_f32);
        vline2_s32 = vcvtq_s32_f32(vline2_f32);
        int16x4_t vRes1 = vqmovn_s32(vline1_s32);
        int16x4_t vRes2 = vqmovn_s32(vline2_s32);
        int8x8_t vRes = vqmovn_s16(vcombine_s16(vRes1, vRes2));
        vst1_s8(_dst + i, vRes);
    }
})
#endif
    
                    uint16x8_t vSum_4_8  = vaddq_u16(vLane4.val[0], vLane6.val[0]);
                uint16x8_t vSum_5_9  = vaddq_u16(vLane4.val[1], vLane6.val[1]);
                uint16x8_t vSum_6_10 = vaddq_u16(vLane4.val[2], vLane6.val[2]);
                uint16x8_t vSum_7_11 = vaddq_u16(vLane4.val[3], vLane6.val[3]);
    
    OPERATOR_SCHEMA(EnforceFinite)
    .NumInputs(1)
    .NumOutputs(0)
    .SetDoc(R'DOC(
Raise if there is NaN or Inf values in the input tensor.
)DOC')
    .Input(0, 'input', 'Input tensor');
    
    // gflags 2.1 issue: namespace google was changed to gflags without warning.
// Luckily we will be able to use GFLAGS_GFLAGS_H_ to detect if it is version
// 2.1. If yes, we will add a temporary solution to redirect the namespace.
// TODO(Yangqing): Once gflags solves the problem in a more elegant way, let's
// remove the following hack.
#ifndef GFLAGS_GFLAGS_H_
namespace gflags = google;
#endif  // GFLAGS_GFLAGS_H_
    
    #endif  // CAFFE_FILLER_HPP_

    
      /**
   * Called by SetUp to initialize the weights associated with any top blobs in
   * the loss function. Store non-zero loss weights in the diff blob.
   */
  inline void SetLossWeights(const vector<Blob<Dtype>*>& top) {
    const int num_loss_weights = layer_param_.loss_weight_size();
    if (num_loss_weights) {
      CHECK_EQ(top.size(), num_loss_weights) << 'loss_weight must be '
          'unspecified or specified once per top blob.';
      for (int top_id = 0; top_id < top.size(); ++top_id) {
        const Dtype loss_weight = layer_param_.loss_weight(top_id);
        if (loss_weight == Dtype(0)) { continue; }
        this->set_loss(top_id, loss_weight);
        const int count = top[top_id]->count();
        Dtype* loss_multiplier = top[top_id]->mutable_cpu_diff();
        caffe_set(count, loss_weight, loss_multiplier);
      }
    }
  }
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_DATA_LAYERS_HPP_

    
    /**
 * @brief Computes @f$ y = x + \log(1 + \exp(-x)) @f$ if @f$ x > 0 @f$;
 *        @f$ y = \log(1 + \exp(x)) @f$ otherwise.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$
 *      y = \left\{
 *         \begin{array}{ll}
 *            x + \log(1 + \exp(-x)) & \mbox{if } x > 0 \\
 *            \log(1 + \exp(x)) & \mbox{otherwise}
 *         \end{array} \right.
 *      @f$
 */
template <typename Dtype>
class BNLLLayer : public NeuronLayer<Dtype> {
 public:
  explicit BNLLLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
    
    {}  // namespace caffe
    
    #include 'caffe/layers/base_conv_layer.hpp'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #ifdef _WIN32
#define _SCL_SECURE_NO_WARNINGS
#endif
    
            ValuePtr DeepClone(bool readOnly) const override
        {
            if (m_isPacked)
            {
                std::shared_ptr<Microsoft::MSR::CNTK::MBLayout> packedLayoutCopy;
                if (m_packedDataLayout)
                {
                    packedLayoutCopy = std::make_shared<Microsoft::MSR::CNTK::MBLayout>();
                    packedLayoutCopy->CopyFrom(m_packedDataLayout);
                }
                return MakeSharedObject<PackedValue>(m_sampleShape, m_sampleDynamicAxes, m_packedData->DeepClone(readOnly), packedLayoutCopy, readOnly);
            }
            else
                return Value::DeepClone(readOnly);
        }
    
    #ifndef incl_HPHP_PERF_EVENT_H_
#define incl_HPHP_PERF_EVENT_H_
    
    #include <folly/String.h>
    
    #include 'hphp/runtime/base/perf-warning-inl.h'
    
    #ifndef incl_HPHP_PIPE_H_
#define incl_HPHP_PIPE_H_
    
    
    {  std::string m_proxyHost;
  int         m_proxyPort;
  std::string m_proxyUsername;
  std::string m_proxyPassword;
};
    
    const char *getServerObject(const char* url) {
  assertx(url);
  int strip = 0;
  if (strncmp(url, 'http://', 7) == 0) {
    strip = 7;
  } else if (strncmp(url, 'https://', 8) == 0) {
    strip = 8;
  }
  const char *p = strchr(url + strip, '/');
  if (p) {
    while (*(p + 1) == '/') p++;
    return p;
  }
  if (strip == 0) return url;
  return '';
}
    
      static void setInitialized(bool f) { data_.initialized = f; }
    
    std::shared_ptr<DHTBucket>
DHTRoutingTable::getBucketFor(const std::shared_ptr<DHTNode>& node) const
{
  return getBucketFor(node->getID());
}
    
      std::vector<std::shared_ptr<DHTNode>> nodes;
  // nodes
  const int compactlen = bittorrent::getCompactLength(family_);
  for (size_t i = 0; i < numNodes; ++i) {
    // 1byte compact peer info length
    uint8_t peerInfoLen;
    READ_CHECK(fp, &peerInfoLen, sizeof(peerInfoLen));
    if (peerInfoLen != compactlen) {
      // skip this entry
      readBytes(fp, buf, buf.size(), 7 + 48);
      continue;
    }
    // 7bytes reserved
    readBytes(fp, buf, buf.size(), 7);
    // compactlen bytes compact peer info
    readBytes(fp, buf, buf.size(), compactlen);
    if (memcmp(zero, buf, compactlen) == 0) {
      // skip this entry
      readBytes(fp, buf, buf.size(), 48 - compactlen);
      continue;
    }
    std::pair<std::string, uint16_t> peer =
        bittorrent::unpackcompact(buf, family_);
    if (peer.first.empty()) {
      // skip this entry
      readBytes(fp, buf, buf.size(), 48 - compactlen);
      continue;
    }
    // 24-compactlen bytes reserved
    readBytes(fp, buf, buf.size(), 24 - compactlen);
    // node ID
    readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
    }
    
    #include 'TimeA2.h'
    
      ~DHTRoutingTableSerializer();
    
    
    {} // namespace aria2
    
      void update();
    
    bool DHTTokenTracker::validateToken(const std::string& token,
                                    const unsigned char* infoHash,
                                    const std::string& ipaddr,
                                    uint16_t port) const
{
  for (auto& elem : secret_) {
    if (generateToken(infoHash, ipaddr, port, elem) == token) {
      return true;
    }
  }
  return false;
}
    
    namespace aria2 {
    }
    
    DNSCache::AddrEntry::~AddrEntry() = default;