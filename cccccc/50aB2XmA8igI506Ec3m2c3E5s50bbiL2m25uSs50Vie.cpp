
        
        void AnyMetadata::PackFrom(const Message& message,
                           const string& type_url_prefix) {
  type_url_->SetNoArena(&::google::protobuf::internal::GetEmptyString(),
                        GetTypeUrl(message.GetDescriptor(), type_url_prefix));
  message.SerializeToString(value_->MutableNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited()));
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    // Groups are hacky:  The name of the field is just the lower-cased name
// of the group type.  In C#, though, we would like to retain the original
// capitalization of the type name.
std::string GetFieldName(const FieldDescriptor* descriptor) {
  if (descriptor->type() == FieldDescriptor::TYPE_GROUP) {
    return descriptor->message_type()->name();
  } else {
    return descriptor->name();
  }
}
    
    
    {
}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__

    
    void PrimitiveFieldGenerator::GenerateMergingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    'if ($other_has_property_check$) {\n'
    '  $property_name$ = other.$property_name$;\n'
    '}\n');
}
    
        void inRange(const Size2D &_size,
                 const u8 * srcBase, ptrdiff_t srcStride,
                 const u8 * rng1Base, ptrdiff_t rng1Stride,
                 const u8 * rng2Base, ptrdiff_t rng2Stride,
                 u8 * dstBase, ptrdiff_t dstStride);
    
    
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
    template <int shift>
void accumulateSquareConst(const Size2D &size,
                           const u8 *srcBase, ptrdiff_t srcStride,
                           s16 *dstBase, ptrdiff_t dstStride)
{
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    
    {} // namespace
    
    
    {            v_y = vld2q_u8(srcy + syj + 32);
            v_dst.val[0] = v_y.val[0];
            v_dst.val[1] = vld1q_u8(srcu + sj + 16);
            v_dst.val[2] = v_y.val[1];
            v_dst.val[3] = vld1q_u8(srcv + sj + 16);
            vst4q_u8(dst + dj + 64, v_dst);
        }
#endif
    
    void rgb2ycrcb(const Size2D &size,
               const u8 * srcBase, ptrdiff_t srcStride,
               u8 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    YCRCB_CONSTS
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #ifdef CAROTENE_NEON
    if (shift >= 16u)
    {
        for (size_t i = 0; i < size.height; ++i)
        {
            s16 * dst = internal::getRowPtr(dstBase, dstStride, i);
            std::memset(dst, 0, sizeof(s16) * size.width);
        }
        return;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s32, s16, 8,
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
            'vqmovn.s32 d24, q10                                    \n\t'
            'vqmovn.s32 d25, q11                                    \n\t'
            'vst1.8 {d24-d25}, [%[dst]]                             \n\t'
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
CVTS_FUNC(s32, s16, 8,
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
        vst1q_s16(_dst + i, vcombine_s16(vRes1, vRes2));
    }
})
#endif
    
    
    {                    for( k = 0; k < N; k++ )
                    {
                        s32 x = ptr[pixel[k]];
                        if(x < vt)
                        {
                            if( ++count > K )
                            {
                                cornerpos[ncorners++] = j;
                                if(nonmax_suppression)
                                    curr[j] = cornerScore(ptr, pixel);
                                break;
                            }
                        }
                        else
                            count = 0;
                    }
                }
    
    
    {            if (mask[0])
                process(src, j, j + 8, i,
                        minVal, minLocPtr, minLocCount, minLocCapacity,
                        maxVal, maxLocPtr, maxLocCount, maxLocCapacity);
        }
    
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
    
    namespace parallel {
    }
    
      std::vector<std::thread> workers;
  for (auto worker = size_t{0}; worker < num_threads; ++worker) {
    workers.push_back(std::thread([&] {
      try {
        hphp_thread_init();
        hphp_session_init(Treadmill::SessionKind::HHBBC);
        SCOPE_EXIT {
          hphp_context_exit();
          hphp_session_exit();
          hphp_thread_exit();
        };
    }
    }
    }
    
      /*
   * Ensure the output stream is in a finished state.
   */
  void finalize();
    
    void Assembler::oris(const Reg64& ra, const Reg64& rs, Immed imm) {
  assert(imm.fits(HPHP::sz::word) && 'Immediate is too big');
  EmitDForm(25, rn(rs), rn(ra), imm.w());
}
    
      void branchFar(CodeAddress c,
                 ConditionCode cc,
                 LinkReg lr = LinkReg::DoNotTouch,
                 ImmType immt = ImmType::TocOnly,
                 bool immMayChange = false) {
    branchFar(c, BranchParams::convertCC(cc), lr, immt, immMayChange);
  }
    
    #ifndef HPHP_DATA_STREAM_WRAPPER_H
#define HPHP_DATA_STREAM_WRAPPER_H
    
    Array Directory::getMetaData() {
  return make_map_array(
    s_wrapper_type, s_plainfile, // PHP5 compatibility
    s_stream_type,  s_dir,
    s_mode,         s_r,
    s_unread_bytes, 0,
    s_seekable,     false,
    s_timed_out,    false,
    s_blocked,      true,
    s_eof,          isEof()
  );
}
    
      explicit ExtendedException();
  explicit ExtendedException(const std::string& msg);
  explicit ExtendedException(SkipFrame frame, const std::string& msg);
  explicit ExtendedException(ATTRIBUTE_PRINTF_STRING const char* fmt, ...)
    ATTRIBUTE_PRINTF(2,3);
  ExtendedException(const ExtendedException& other);
  ExtendedException(ExtendedException&& other) noexcept;
    
    #include 'hphp/runtime/base/thread-info.h'
    
    namespace HPHP { namespace FileUtil {
    }
    }
    
    namespace boost{
    }
    
    
    
    
    {   if(!result)
   {
      next_count = recursion_stack.back().repeater_stack;
      *m_presult = recursion_stack.back().results;
      recursion_stack.pop_back();
      return false;
   }
   return true;
}
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
            Vec2 tempPos = _halfScreenSize - _followedNode->getPosition();
    
    
FadeTo* FadeIn::reverse() const
{
    auto action = FadeOut::create(_duration);
    action->setReverseAction(const_cast<FadeIn*>(this));
    return action;
    
}
    
    void ProgressTo::update(float time)
{
    ((kProgressTimerCast)(_target))->setPercentage(_from + (_to - _from) * time);
}
    
    void AtlasNode::setOpacity(GLubyte opacity)
{
    Node::setOpacity(opacity);
    }
    
    
    {
    {        BOOST_DEFAULTED_FUNCTION(aligned(), {})
        BOOST_FORCEINLINE BOOST_CONSTEXPR explicit aligned(type v) BOOST_NOEXCEPT : value(v) {}
    };
};
    
    
    { private:
  NTCAN_HANDLE dev_handler_;
  CANCardParameter::CANChannelId port_;
  CMSG send_frames_[MAX_CAN_SEND_FRAME_LEN];
  CMSG recv_frames_[MAX_CAN_RECV_FRAME_LEN];
};
    
    /**
 * @class HermesCanClient
 * @brief The class which defines a BCAN client which inherits CanClient.
 */
    
    
    {    // Synchronous transmission of CAN messages
    int ret = write(dev_handler_, &send_frames_[i], sizeof(send_frames_[i]));
    if (ret <= 0) {
      AERROR << 'send message failed, error code: ' << ret;
      return ErrorCode::CAN_CLIENT_ERROR_BASE;
    }
  }
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/message_manager.h'
    
    /**
 * @class Byte
 * @brief The class of one byte, which is 8 bits.
 *        It includes some operations on one byte.
 */
class Byte {
 public:
  /**
   * @brief Constructor which takes a pointer to a one-byte unsigned integer.
   * @param value The pointer to a one-byte unsigned integer for construction.
   */
  explicit Byte(const uint8_t *value);
    }
    
    #include 'modules/drivers/canbus/common/byte.h'
    
    #ifndef MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
#define MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
    
    // method implementations
    
    DEFINE_string(adapter_config_filename, 'modules/canbus/conf/adapter.conf',
              'The adapter config file');
    
    #include 'gflags/gflags.h'