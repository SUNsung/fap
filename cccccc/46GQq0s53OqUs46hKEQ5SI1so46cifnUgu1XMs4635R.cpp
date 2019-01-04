
    {    Lock& lock;
    Lock templock;
};
    
    #include <script/script.h>
    
    SECP256K1_INLINE static void secp256k1_fe_mul_inner(uint64_t *r, const uint64_t *a, const uint64_t * SECP256K1_RESTRICT b) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            r15:rcx = d
 *            r10-r14 = a0-a4
 *            rbx     = b
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    }
    
    int secp256k1_ecdh(const secp256k1_context* ctx, unsigned char *result, const secp256k1_pubkey *point, const unsigned char *scalar) {
    int ret = 0;
    int overflow = 0;
    secp256k1_gej res;
    secp256k1_ge pt;
    secp256k1_scalar s;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(result != NULL);
    ARG_CHECK(point != NULL);
    ARG_CHECK(scalar != NULL);
    }
    
    
struct SepFilterCtx
{
    int16_t kernelx_data[3];
    int16_t kernely_data[3];
    CAROTENE_NS::BORDER_MODE border;
};
inline int TEGRA_SEPFILTERINIT(cvhalFilter2D **context, int src_type, int dst_type, int kernel_type,
                               uchar *kernelx_data, int kernelx_length,
                               uchar *kernely_data, int kernely_length,
                               int anchor_x, int anchor_y, double delta, int borderType)
{
    if(!context || !kernelx_data || !kernely_data || src_type != CV_8UC1 || dst_type != CV_16SC1 ||
       kernelx_length != 3 || kernely_length != 3 ||
       delta != 0 || anchor_x != 1 || anchor_y != 1)
        return CV_HAL_ERROR_NOT_IMPLEMENTED;
    }
    
    
    {    internal::vtransform(size,
                     srcBase, srcStride,
                     dstBase, dstStride,
                     dstBase, dstStride,
                     AccumulateWeighted(alpha));
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)alpha;
#endif
}
    
            int16x8_t l02 = vaddq_s16(line0x, line2x);
        int16x8_t l1x2 = vshlq_n_s16(line1x, 1);
        int16x8_t dy = vsubq_s16(line2y, line0y);
        int16x8_t dx = vaddq_s16(l1x2, l02);
    
    #define ALPHA_QUAD(sgn, bits) { \
                                  internal::prefetch(src + sj); \
                                  union { vec128_4 v4; vec128_3 v3; } vals; \
                                  vals.v4 = vld4q_##sgn##bits(src + sj); \
                                  vst3q_##sgn##bits(dst3 + d3j, vals.v3); \
                                  vst1q_##sgn##bits(dst1 + d1j, vals.v4.val[3]); \
                              }
    
            for (; sj < roiw8; sj += 8, syj += 16, dj += 32)
        {
            uint8x8x2_t v_y = vld2_u8(srcy + syj);
            uint8x8x4_t v_dst;
            v_dst.val[0] = vld1_u8(srcu + sj);
            v_dst.val[1] = v_y.val[0];
            v_dst.val[2] = vld1_u8(srcv + sj);
            v_dst.val[3] = v_y.val[1];
            vst4_u8(dst + dj, v_dst);
        }
    
    
    {    if (!parametersSupported) {
        std::cerr << 'internal error: attempted to use a function with unsupported parameters' << std::endl;
        std::abort();
    }
}
    
    #ifndef CAROTENE_SRC_COMMON_HPP
#define CAROTENE_SRC_COMMON_HPP
    
             int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
         int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
         int16x4_t vline1_s16 = vqmovn_s32(vline1_s32);
         int16x4_t vline2_s16 = vqmovn_s32(vline2_s32);
    
            u8 prevx[3] = { 0, 0, 0 },
           currx[3] = { 0, 0, 0 },
           nextx[3] = { 0, 0, 0 };
        ptrdiff_t x = 0;
        const ptrdiff_t bwidth = y + 2 < height ? width : (width - 8);
    
            vst1q_u32(sum + j, vsuml);
        vst1q_u32(sum + j + 4, vsumh);
    
            // perform vertical convolution
        for ( ; x <= bwidth; x += 8)
        {
            internal::prefetch(srow0 + x);
            internal::prefetch(srow1 + x);
            internal::prefetch(srow2 + x);
    }
    
    
    {}  // namespace caffe
    
    
/// @brief Fills a Blob with constant values @f$ x = 0 @f$.
template <typename Dtype>
class ConstantFiller : public Filler<Dtype> {
 public:
  explicit ConstantFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    Dtype* data = blob->mutable_cpu_data();
    const int count = blob->count();
    const Dtype value = this->filler_param_.value();
    CHECK(count);
    for (int i = 0; i < count; ++i) {
      data[i] = value;
    }
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
      /**
   * Called by the parent Layer's SetUp to check that the number of bottom
   * and top Blobs provided as input match the expected numbers specified by
   * the {ExactNum,Min,Max}{Bottom,Top}Blobs() functions.
   */
  virtual void CheckBlobCounts(const vector<Blob<Dtype>*>& bottom,
                               const vector<Blob<Dtype>*>& top) {
    if (ExactNumBottomBlobs() >= 0) {
      CHECK_EQ(ExactNumBottomBlobs(), bottom.size())
          << type() << ' Layer takes ' << ExactNumBottomBlobs()
          << ' bottom blob(s) as input.';
    }
    if (MinBottomBlobs() >= 0) {
      CHECK_LE(MinBottomBlobs(), bottom.size())
          << type() << ' Layer takes at least ' << MinBottomBlobs()
          << ' bottom blob(s) as input.';
    }
    if (MaxBottomBlobs() >= 0) {
      CHECK_GE(MaxBottomBlobs(), bottom.size())
          << type() << ' Layer takes at most ' << MaxBottomBlobs()
          << ' bottom blob(s) as input.';
    }
    if (ExactNumTopBlobs() >= 0) {
      CHECK_EQ(ExactNumTopBlobs(), top.size())
          << type() << ' Layer produces ' << ExactNumTopBlobs()
          << ' top blob(s) as output.';
    }
    if (MinTopBlobs() >= 0) {
      CHECK_LE(MinTopBlobs(), top.size())
          << type() << ' Layer produces at least ' << MinTopBlobs()
          << ' top blob(s) as output.';
    }
    if (MaxTopBlobs() >= 0) {
      CHECK_GE(MaxTopBlobs(), top.size())
          << type() << ' Layer produces at most ' << MaxTopBlobs()
          << ' top blob(s) as output.';
    }
    if (EqualNumBottomTopBlobs()) {
      CHECK_EQ(bottom.size(), top.size())
          << type() << ' Layer produces one top blob as output for each '
          << 'bottom blob input.';
    }
  }
    
    #define REGISTER_LAYER_CLASS(type)                                             \
  template <typename Dtype>                                                    \
  shared_ptr<Layer<Dtype> > Creator_##type##Layer(const LayerParameter& param) \
  {                                                                            \
    return shared_ptr<Layer<Dtype> >(new type##Layer<Dtype>(param));           \
  }                                                                            \
  REGISTER_LAYER_CREATOR(type, Creator_##type##Layer)
    
    
    {}  // namespace caffe
    
      /// @brief The spatial dimensions of a filter kernel.
  Blob<int> kernel_shape_;
  /// @brief The spatial dimensions of the stride.
  Blob<int> stride_;
  /// @brief The spatial dimensions of the padding.
  Blob<int> pad_;
  /// @brief The spatial dimensions of the dilation.
  Blob<int> dilation_;
  /// @brief The spatial dimensions of the convolution input.
  Blob<int> conv_input_shape_;
  /// @brief The spatial dimensions of the col_buffer.
  vector<int> col_buffer_shape_;
  /// @brief The spatial dimensions of the output.
  vector<int> output_shape_;
  const vector<int>* bottom_shape_;
    
    
    {}  // namespace caffe
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      virtual inline const char* type() const { return 'BNLL'; }
    
    template <typename Dtype>
class CropLayer : public Layer<Dtype> {
 public:
  explicit CropLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    #endif  // CAFFE_CUDNN_SOFTMAX_LAYER_HPP_

    
    template<>
void SetDataGradToBlob<mshadow::cpu, double>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<double>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  double *data_ptr = reinterpret_cast<double*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_cpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, double)->set_cpu_diff(data_ptr);
}
    
    
    {
 private:
  mutable CaffeLossParam param_;
  mutable ::caffe::Layer<float> *caffeOp_;
};  // class CaffeLossSymbol
#endif
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file inplace_addto_detect_pass.cc
 * \brief Detect whether inplace addto operation is possible for certain op.
 */
#include <mxnet/base.h>
#include <mxnet/operator.h>
#include <mxnet/op_attr_types.h>
#include <nnvm/graph_attr_types.h>
    
        void ProgressWriter::UpdateTraining(size_t samples, const ValuePtr& accumulatedLoss,
                                        const ValuePtr& accumulatedMetric)
    {
        m_training->Update(samples, accumulatedLoss, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> aggregateLoss, std::pair<double, double> aggregateMetric)
            {
                OnWriteTrainingUpdate(samples, updates, aggregateLoss, aggregateMetric);
            });
        OnTrainingUpdateEnd();
    }
    
    
    {        const auto& type = dict[typeKey].Value<std::wstring>();
        if (type != typeValue) 
        {
            const auto& version = GetVersion(dict);
            LogicError('Unexpected '%ls':'%ls' in place of '%ls':'%ls' (%s).',
                       typeKey.c_str(), type.c_str(), typeKey.c_str(), typeValue.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
        }
    }
    
    
    {    std::string GetCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
};
    
    __CCCallFuncND * __CCCallFuncND::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) __CCCallFuncND();
    
    if( _selectorTarget)
    {
        a->initWithTarget(_selectorTarget, _callFuncND, _data);
    }
    
    a->autorelease();
    return a;
}
    
        /**
     * @js NA
     */
    void setReverseAction(FadeTo* ac);
    
    
    {    // Overrides
    virtual PageTurn3D* clone() const override;
    virtual void update(float time) override;
};
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
    http://www.cocos2d-x.org
    
        /** Quads to draw. */
    ssize_t _quadsToDraw;
    /** Color uniform. */
    GLint    _uniformColor;
    /** This variable is only used for LabelAtlas FPS display. So plz don't modify its value. */
    bool _ignoreContentScaleFactor;
    /** Quad command. */
    QuadCommand _quadCommand;
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    #include 'gtest/gtest.h'
    
    int ClusterQualityInfo702::target_id(const std::uint8_t* bytes,
                                     int32_t length) const {
  Byte t0(bytes);
  int32_t x = t0.get_byte(0, 8);
    }
    
    
    {  double ret = x * OBJECT_VREL_RES + OBJECT_VREL_LAT_MIN;
  return ret;
}
    
    #include 'modules/common/util/file.h'
#include 'modules/map/hdmap/hdmap_util.h'
    
      kernel.AddReferenceLineKernelMatrix(index_list, pos_list, 10.0);