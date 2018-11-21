
        
        /* QComboBox that can be used with QDataWidgetMapper to select ordinal values from a model. */
class QValueComboBox : public QComboBox
{
    Q_OBJECT
    }
    
    #endif // BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H

    
    #ifndef BITCOIN_RPC_MINING_H
#define BITCOIN_RPC_MINING_H
    
    
    {    /* Try to multiply it by bad values */
    CHECK(secp256k1_ecdh(ctx, output, &point, s_zero) == 0);
    CHECK(secp256k1_ecdh(ctx, output, &point, s_overflow) == 0);
    /* ...and a good one */
    s_overflow[31] -= 1;
    CHECK(secp256k1_ecdh(ctx, output, &point, s_overflow) == 1);
}
    
    BOOST_AUTO_TEST_CASE(get_difficulty_for_high_target)
{
    TestDifficulty(0x1cf88f6f, 1.029916);
}
    
    #endif
    
    // Parses a set of comma-delimited name/value pairs.
void ParseGeneratorParameter(const string& text,
                             std::vector<std::pair<string, string> >* output) {
  std::vector<string> parts = Split(text, ',', true);
    }
    
    
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/stubs/substitute.h>
    
    
    {  printer->Outdent();
  printer->Print('\n};\n');
    
      printer->Print('$comments$typedef$deprecated_attribute$ GPB_ENUM($name$) {\n',
                 'comments', enum_comments,
                 'deprecated_attribute', GetOptionalDeprecatedAttribute(descriptor_, descriptor_->file()),
                 'name', name_);
  printer->Indent();
    }
    
      vars['default_name'] = GPBGenericValueFieldName(descriptor_);
  if (descriptor_->is_repeated()) {
    vars['default'] = 'nil';
  } else {
    vars['default'] = DefaultValue(descriptor_);
  }
  string type = GetCapitalizedType(descriptor_);
  vars['extension_type'] = string('GPBDataType') + type;
    
      uint8 expected_data[] = {
      0x5,
      // All as is (00 op)
      0x1,  0x0A, 0x0,
      // Underscore, upper + 9 (10 op)
      0x3,  0xCA, 0x0,
      //  Upper + 3 (10 op), underscore, upper + 5 (10 op)
      0x2,  0x44, 0xC6, 0x0,
      // All Upper for 4 (11 op), underscore, underscore, upper + 5 (10 op),
      // underscore, lower + 0 (01 op)
      0x4,  0x64, 0x80, 0xC5, 0xA1, 0x0,
      // 2 byte key: as is + 3 (00 op), underscore, lower + 4 (01 op),
      //   underscore, lower + 3 (01 op), underscore, lower + 1 (01 op),
      //   underscore, lower + 30 (01 op), as is + 30 (00 op), as is + 13 (00
      //   op),
      //   underscore, as is + 3 (00 op)
      0xE8, 0x07, 0x04, 0xA5, 0xA4, 0xA2, 0xBF, 0x1F, 0x0E, 0x84, 0x0,
  };
  string expected((const char*)expected_data, sizeof(expected_data));
    
    
    {
    {
    {}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
            src_x = dst_x * m[0] + dst_y * m[2] + m[4]
        src_y = dst_x * m[1] + dst_y * m[3] + m[5]
    */
    bool isWarpAffineNearestNeighborSupported(const Size2D &ssize);
    void warpAffineNearestNeighbor(const Size2D &ssize, const Size2D &dsize,
                                   const u8 * srcBase, ptrdiff_t srcStride,
                                   const f32 * m,
                                   u8 * dstBase, ptrdiff_t dstStride,
                                   BORDER_MODE borderMode, u8 borderValue);
    
        void operator() (const typename VecTraits<T>::vec64 & v_src0,
                     const typename VecTraits<T>::vec64 & v_src1,
                     typename VecTraits<T>::vec64 & v_dst) const
    {
        typename VecTraits<wtype>::vec128 vr;
        wideAdd(vmovl(v_src0), vmovl(v_src1), vr);
    }
    
            int32x4_t normh = vmovl_s16(vget_high_s16(norm));
        int32x4_t norml = vmovl_s16(vget_low_s16(norm));
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin, size_t endMargin)
{
    ptrdiff_t p = _p + (ptrdiff_t)startMargin;
    size_t len = _len + startMargin + endMargin;
    if( (size_t)p < len )
        return _p;
    else if( borderType == BORDER_MODE_REPLICATE )
        p = p < 0 ? 0 : (ptrdiff_t)len - 1;
    else if( borderType == BORDER_MODE_REFLECT || borderType == BORDER_MODE_REFLECT101 )
    {
        s32 delta = borderType == BORDER_MODE_REFLECT101;
        if( len == 1 )
            return 0;
        do
        {
            if( p < 0 )
                p = -p - 1 + delta;
            else
                p = (ptrdiff_t)len - 1 - (p - (ptrdiff_t)len) - delta;
        }
        while( (size_t)p >= len );
    }
    else if( borderType == BORDER_MODE_WRAP )
    {
        if( p < 0 )
            p -= ((p-(ptrdiff_t)len+1)/(ptrdiff_t)len)*(ptrdiff_t)len;
        if( p >= (ptrdiff_t)len )
            p %= (ptrdiff_t)len;
    }
    else if( borderType == BORDER_MODE_CONSTANT )
        p = -1;
    else
        internal::assertSupportedConfiguration(false);
    return p - (ptrdiff_t)startMargin;
}
    
    /*!
 *  Aligns pointer by the certain number of bytes
 *
 *  This small inline function aligns the pointer by the certain number of bytes by shifting
 *  it forward by 0 or a positive offset.
 */
template<typename T> inline T* alignPtr(T* ptr, size_t n=sizeof(T))
{
    return (T*)(((size_t)ptr + n-1) & -n);
}
    
    void lshift(const Size2D &size,
            const u8 * srcBase, ptrdiff_t srcStride,
            s16 * dstBase, ptrdiff_t dstStride,
            u32 shift)
{
    internal::assertSupportedConfiguration();
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s32, u16, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.32 {d4-d5}, [%[src1]]                             \n\t'
            'vld1.32 {d6-d7}, [%[src2]]                             \n\t'
            'vcvt.f32.s32 q4, q2                                    \n\t'
            'vcvt.f32.s32 q5, q3                                    \n\t'
            'vmul.f32 q6, q4, q0                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vadd.f32 q8, q6, q1                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vcvt.s32.f32 q10, q8                                   \n\t'
            'vcvt.s32.f32 q11, q9                                   \n\t'
            'vqmovun.s32 d24, q10                                   \n\t'
            'vqmovun.s32 d25, q11                                   \n\t'
            'vst1.16 {d24-d25}, [%[dst]]                            \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i + 0),
              [src2] 'r' (_src + i + 4),
              [dst] 'r' (_dst + i),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25'
        );
    }
})
#else
CVTS_FUNC(s32, u16, 8,
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
        uint16x4_t vRes1 = vqmovun_s32(vline1_s32);
        uint16x4_t vRes2 = vqmovun_s32(vline2_s32);
        vst1q_u16(_dst + i, vcombine_u16(vRes1, vRes2));
    }
})
#endif
    
    
    {        for (; i < size.width; ++i)
            result += s32(src0[i]) * s32(src1[i]);
    }
    return result;
#else
    (void)_size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    
    template <typename T>
void flip3(const Size2D & size,
           const void * srcBase, ptrdiff_t srcStride,
           void * dstBase, ptrdiff_t dstStride,
           FLIP_MODE flipMode)
{
    using namespace internal;
    }
    
        //1-line buffer
    std::vector<u32> _buf(cn * (size.width + 4) + 32 / sizeof(u32));
    u32* lane = internal::alignPtr(&_buf[cn << 1], 32);
    
                uint16x8_t el8shr0 = vmull_u8(vsrc, vsrc);
            uint16x8_t el8shr1 = vextq_u16(v_zero8, el8shr0, 7);
    
            x -= 8;
        if (x == width)
            --x;
    
      // Constructs a Message from a C-string.
  explicit Message(const char* str) : ss_(new ::std::stringstream) {
    *ss_ << str;
  }
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED3.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3>
AssertionResult AssertPred3Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  const char* e3,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2,
                                  const T3& v3) {
  if (pred(v1, v2, v3)) return AssertionSuccess();
    }
    
    // Gets the content of the stringstream's buffer as an std::string.  Each '\0'
// character in the buffer is replaced with '\\0'.
GTEST_API_ std::string StringStreamToString(::std::stringstream* stream);
    
    
    {    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }
    
    **Code**
    
    class GetFloatToHalfGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'HalfToFloat', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(FloatToHalf, GetFloatToHalfGradient);
    
    namespace caffe2 {
REGISTER_CPU_OPERATOR(Im2Col, Im2ColOp<float, CPUContext>);
REGISTER_CPU_OPERATOR(Col2Im, Col2ImOp<float, CPUContext>);
    }
    
      static void clear(Data& data);
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
      ~DHTRoutingTable();
    
    #endif // D_DHT_SETUP_H

    
      virtual std::shared_ptr<DHTTask> createBucketRefreshTask() = 0;
    
    namespace aria2 {
    }
    
    #include 'DHTNode.h'
#include 'util.h'
#include 'a2functional.h'
    
    #pragma once
    
    #ifdef FOLLY_TLS
/////////////// SequentialThreadId
template struct SequentialThreadId<std::atomic>;
#endif
    
     private:
  using Holder = std::shared_ptr<T>;
    
      /**
   * @brief Create a pointer to a specified brand of CAN client. The brand is
   *        set in the parameter.
   * @param parameter The parameter to create the CAN client.
   * @return A pointer to the created CAN client.
   */
  std::unique_ptr<CanClient> CreateCANClient(const CANCardParameter &parameter);
    
      void is_receiving(bool val) { is_receiving_ = val; }
    
    
    { private:
  int32_t send_counter_ = 0;
  int32_t recv_counter_ = 0;
  std::stringstream frame_info_;
};
    
    
    { private:
  bool _is_init;
  bcan_hdl_t _dev_handler;
  CANCardParameter::CANChannelId _card_port;
  bcan_msg_t _send_frames[MAX_CAN_SEND_FRAME_LEN];
  bcan_msg_t _recv_frames[MAX_CAN_RECV_FRAME_LEN];
};
    
      if (*frame_num > MAX_CAN_RECV_FRAME_LEN || *frame_num < 0) {
    AERROR << 'recv can frame num not in range[0, ' << MAX_CAN_RECV_FRAME_LEN
           << '], frame_num:' << *frame_num;
    // TODO(Authors): check the difference of returning frame_num/error_code
    return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  }
    
    #ifndef MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_SOCKET_CAN_CLIENT_RAW_H_
#define MODULES_DRIVERS_CANBUS_CAN_CLIENT_CLIENT_SOCKET_CAN_CLIENT_RAW_H_
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    template <typename SensorType>
ErrorCode MessageManager<SensorType>::GetSensorData(
    SensorType *const sensor_data) {
  if (sensor_data == nullptr) {
    AERROR << 'Failed to get sensor_data due to nullptr.';
    return ErrorCode::CANBUS_ERROR;
  }
  std::lock_guard<std::mutex> lock(sensor_data_mutex_);
  sensor_data->CopyFrom(sensor_data_);
  return ErrorCode::OK;
}
    
    // (SUM(input))^0xFF
template <typename SensorType>
uint8_t ProtocolData<SensorType>::CalculateCheckSum(const uint8_t *input,
                                                    const uint32_t length) {
  return std::accumulate(input, input + length, 0) ^ 0xFF;
}
    
    #include 'gtest/gtest.h'