
        
            void minMaxLoc(const Size2D &size,
                   const s32 * srcBase, ptrdiff_t srcStride,
                   s32 &minVal, size_t &minCol, size_t &minRow,
                   s32 &maxVal, size_t &maxCol, size_t &maxRow);
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            internal::prefetch(dst + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vld1q_s16(dst + j), v_dst1 = vld1q_s16(dst + j + 8);
            int16x8_t v_src0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_src1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
                // do vertical convolution
            size_t x = 0;
            const size_t bcols = y + 2 < size.height ? colsn : (colsn - 8);
            for( ; x <= bcols; x += 8 )
            {
                internal::prefetch(srow0 + x);
                internal::prefetch(srow1 + x);
                internal::prefetch(srow2 + x);
    }
    
    
    {
    {        for (; sj < size.width; ++sj, syj += 2, dj += 4)
        {
            dst[dj] = srcy[syj];
            dst[dj + 1] = srcu[sj];
            dst[dj + 2] = srcy[syj + 1];
            dst[dj + 3] = srcv[sj];
        }
    }
#else
    (void)size;
    (void)srcyBase;
    (void)srcyStride;
    (void)srcuBase;
    (void)srcuStride;
    (void)srcvBase;
    (void)srcvStride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0, const typename internal::VecTraits<T>::vec128 & v_src1,
              typename internal::VecTraits<T>::unsign::vec128 & v_dst) const
    {
        v_dst = internal::vceqq(v_src0, v_src1);
    }
    
    
    {
    {}}
    
            if (i < roiw4)
        {
            internal::prefetch(src + i + 2);
            uint64x2_t vln1 = vld1q_u64((const u64*)(src + i));
            uint64x2_t vln2 = vld1q_u64((const u64*)(src + i + 2));
    }
    
            size_t x = 0;
        for (; x <= colsn - 8; x += 8)
        {
            internal::prefetch(internal::getRowPtr(ln2 + x, srcStride, x % 5 - 2));
            uint8x8_t v0 = vld1_u8(ln0+x);
            uint8x8_t v1 = vld1_u8(ln1+x);
            uint8x8_t v2 = vld1_u8(ln2+x);
            uint8x8_t v3 = vld1_u8(ln3+x);
            uint8x8_t v4 = vld1_u8(ln4+x);
    }
    
    // table lookup with the table in a 128-bit register
    
    void read_image(std::ifstream* image_file, std::ifstream* label_file,
        uint32_t index, uint32_t rows, uint32_t cols,
        char* pixels, char* label) {
  image_file->seekg(index * rows * cols + 16);
  image_file->read(pixels, rows * cols);
  label_file->seekg(index + 8);
  label_file->read(label, 1);
}
    
    /// @brief Fills a Blob with constant or randomly-generated data.
template <typename Dtype>
class Filler {
 public:
  explicit Filler(const FillerParameter& param) : filler_param_(param) {}
  virtual ~Filler() {}
  virtual void Fill(Blob<Dtype>* blob) = 0;
 protected:
  FillerParameter filler_param_;
};  // class Filler
    
    
    {  shared_ptr<boost::thread> thread_;
};
    
      /**
   * @brief Returns the exact number of bottom blobs required by the layer,
   *        or -1 if no exact number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some exact number of bottom blobs.
   */
  virtual inline int ExactNumBottomBlobs() const { return -1; }
  /**
   * @brief Returns the minimum number of bottom blobs required by the layer,
   *        or -1 if no minimum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some minimum number of bottom blobs.
   */
  virtual inline int MinBottomBlobs() const { return -1; }
  /**
   * @brief Returns the maximum number of bottom blobs required by the layer,
   *        or -1 if no maximum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some maximum number of bottom blobs.
   */
  virtual inline int MaxBottomBlobs() const { return -1; }
  /**
   * @brief Returns the exact number of top blobs required by the layer,
   *        or -1 if no exact number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some exact number of top blobs.
   */
  virtual inline int ExactNumTopBlobs() const { return -1; }
  /**
   * @brief Returns the minimum number of top blobs required by the layer,
   *        or -1 if no minimum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some minimum number of top blobs.
   */
  virtual inline int MinTopBlobs() const { return -1; }
  /**
   * @brief Returns the maximum number of top blobs required by the layer,
   *        or -1 if no maximum number is required.
   *
   * This method should be overridden to return a non-negative value if your
   * layer expects some maximum number of top blobs.
   */
  virtual inline int MaxTopBlobs() const { return -1; }
  /**
   * @brief Returns true if the layer requires an equal number of bottom and
   *        top blobs.
   *
   * This method should be overridden to return true if your layer expects an
   * equal number of bottom and top blobs.
   */
  virtual inline bool EqualNumBottomTopBlobs() const { return false; }
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/power_layer.hpp'
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    #include <vector>
    
    namespace reg {
  constexpr Reg64 r0(0);    // volatile, used in function prologue / linkage
  constexpr Reg64 r1(1);    // nonvolatile, stack pointer
  constexpr Reg64 r2(2);    // nonvolatile, TOC
  /* volatile, argument passing registers */
  constexpr Reg64 r3(3);
  constexpr Reg64 r4(4);
  constexpr Reg64 r5(5);
  constexpr Reg64 r6(6);
  constexpr Reg64 r7(7);
  constexpr Reg64 r8(8);
  constexpr Reg64 r9(9);
  constexpr Reg64 r10(10);
    }
    
    APCCollection::~APCCollection() {
  // Zero for size is correct, because when this APCCollection was unreferenced
  // it already included the size of the inner handle.
  m_arrayHandle->unreferenceRoot(0);
}
    
    inline size_t APCLocalArray::heapSize() const {
  return sizeof(*this) + m_size * sizeof(TypedValue);
}
    
    #endif // HPHP_DATA_STREAM_WRAPPER_H

    
    inline const String& ExecutionContext::getSandboxId() const {
  return m_sandboxId;
}
    
    
    { private:
  int mkdir_recursive(const String& path, int mode);
};
    
        if ((se.st_mode & S_IFMT) == S_IFDIR) {
      find(root, spath + ename, php, callback);
      continue;
    }
    
    OrbitCamera::OrbitCamera()
: _radius(0.0)
, _deltaRadius(0.0)
, _angleZ(0.0)
, _deltaAngleZ(0.0)
, _angleX(0.0)
, _deltaAngleX(0.0)
, _radZ(0.0)
, _radDeltaZ(0.0)
, _radX(0.0)
, _radDeltaX(0.0)
{
}
OrbitCamera::~OrbitCamera()
{
}
    
    /**
 *@brief Base class for Camera actions.
 *@ingroup Actions
 */
class CC_DLL ActionCamera : public ActionInterval
{
public:
    /**
     * @js ctor
     * @lua new
     */
    ActionCamera();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ActionCamera(){};
    }
    
    
    {    delete action;
    return nullptr;
}
    
    // implementation of FlipY3D
    
        /**
    @brief Set the center position of lens effect.
    @param position The center position will be set.
    */
    void setPosition(const Vec2& position);
    
        /**
     * @brief Initializes the action with a duration, a 'from' percentage and a 'to' percentage.
     * @param duration Specify the duration of the ProgressFromTo action. It's a value in seconds.
     * @param fromPercentage Specify the source percentage.
     * @param toPercentage Specify the destination percentage.
     * @return If the creation success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, float fromPercentage, float toPercentage);
    
    
    {    return animation;
} 
    
    void AnimationCache::addAnimationsWithDictionary(const ValueMap& dictionary,const std::string& plist)
{
    auto anisItr = dictionary.find('animations');
    if (anisItr == dictionary.end() )
    {
        CCLOG('cocos2d: AnimationCache: No animations were found in provided dictionary.');
        return;
    }
    
    const Value& animations = anisItr->second;
    unsigned int version = 1;
    }
    
    private:
    void parseVersion1(const ValueMap& animations);
    void parseVersion2(const ValueMap& animations);
    
    

    
    #ifndef GUETZLI_BUTTERAUGLI_COMPARATOR_H_
#define GUETZLI_BUTTERAUGLI_COMPARATOR_H_
    
    void DCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * x + u] * in[u * stride];
    }
  }
}
    
    void PrintDebug(ProcessStats* stats, std::string s);
    
    void ComputeBlockDCT(coeff_t* coeffs) {
  ColumnDct(coeffs);
  RowDct(coeffs + 0 * 8, kTable04);
  RowDct(coeffs + 1 * 8, kTable17);
  RowDct(coeffs + 2 * 8, kTable26);
  RowDct(coeffs + 3 * 8, kTable35);
  RowDct(coeffs + 4 * 8, kTable04);
  RowDct(coeffs + 5 * 8, kTable35);
  RowDct(coeffs + 6 * 8, kTable26);
  RowDct(coeffs + 7 * 8, kTable17);
}
    
    
    {}  // namespace guetzli
    
    const double* NewSrgb8ToLinearTable() {
  double* table = new double[256];
  int i = 0;
  for (; i < 11; ++i) {
    table[i] = i / 12.92;
  }
  for (; i < 256; ++i) {
    table[i] = 255.0 * std::pow(((i / 255.0) + 0.055) / 1.055, 2.4);
  }
  return table;
}
    
      int iquant[3 * kDCTBlockSize];
  int idx = 0;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < kDCTBlockSize; ++j) {
      int v = quant[idx];
      jpg->quant[i].values[j] = v;
      iquant[idx++] = ((1 << kIQuantBits) + 1) / v;
    }
  }
    
    #endif  // GUETZLI_JPEG_DATA_READER_H_

    
      /**
   * @brief Send a single message.
   * @param frames A single-element vector containing only one message.
   * @return The status of the sending single message action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode SendSingleFrame(
      const std::vector<CanFrame> &frames) {
    CHECK_EQ(frames.size(), 1)
        << 'frames size not equal to 1, actual frame size :' << frames.size();
    int32_t n = 1;
    return Send(frames, &n);
  }
    
      // init config and state
  // After a CAN handle is created with canOpen() the CAN-ID filter is
  // cleared
  // (no CAN messages
  // will pass the filter). To receive a CAN message with a certain CAN-ID
  // or an
  // NTCAN-Event with
  // a certain Event-ID it is required to enable this ID in the handle
  // filter as
  // otherwise a
  // received  message or event is discarded by the driver for this handle.
  // 1. set receive message_id filter, ie white list
  int32_t id_count = 0x800;
  ret = canIdRegionAdd(dev_handler_, 0, &id_count);
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'add receive msg id filter error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    void HermesCanClient::SetInited(bool init) { _is_init = init; }
    
    
    {
    {
    {
    {
    {  std::vector<CanFrame> frames;
  int32_t num = 0;
  CanFrame frame;
  // frame.id = 0x60;
  // frame.len = 8;
  // frame.data[0] = 0;
  // frames.push_back(frame);
  // num = 1;
  EXPECT_EQ(hermes_can.Start(), ErrorCode::OK);
  EXPECT_EQ(hermes_can.Receive(&frames, &num), ErrorCode::OK);
}
*/
}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
      // open device
  // guss net is the device minor number, if one card is 0,1
  // if more than one card, when install driver u can specify the minior id
  // int32_t ret = canOpen(net, pCtx->mode, txbufsize, rxbufsize, 0, 0,
  // &dev_handler_);
  if (port_ > MAX_CAN_PORT || port_ < 0) {
    AERROR << 'can port number [' << port_ << '] is out of the range [0,'
           << MAX_CAN_PORT << ']';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    #include 'modules/drivers/canbus/sensor_gflags.h'
    
    template< bool Signed >
struct operations< 1u, Signed > :
    public msvc_x86_operations< typename make_storage_type< 1u, Signed >::type, operations< 1u, Signed > >
{
    typedef msvc_x86_operations< typename make_storage_type< 1u, Signed >::type, operations< 1u, Signed > > base_type;
    typedef typename base_type::storage_type storage_type;
    typedef typename make_storage_type< 1u, Signed >::aligned aligned_storage_type;
    }
    
    
    {} // namespace mars_boost