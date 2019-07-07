
        
        #endif // BITCOIN_REVERSELOCK_H

    
    // Returns the user key portion of an internal key.
inline Slice ExtractUserKey(const Slice& internal_key) {
  assert(internal_key.size() >= 8);
  return Slice(internal_key.data(), internal_key.size() - 8);
}
    
    #include <map>
#include <set>
#include 'db/db_impl.h'
#include 'db/filename.h'
#include 'db/log_format.h'
#include 'db/version_set.h'
#include 'leveldb/cache.h'
#include 'leveldb/env.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
#include 'util/mutexlock.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
    Status SetCurrentFile(Env* env, const std::string& dbname,
                      uint64_t descriptor_number) {
  // Remove leading 'dbname/' and add newline to manifest file name
  std::string manifest = DescriptorFileName(dbname, descriptor_number);
  Slice contents = manifest;
  assert(contents.starts_with(dbname + '/'));
  contents.remove_prefix(dbname.size() + 1);
  std::string tmp = TempFileName(dbname, descriptor_number);
  Status s = WriteStringToFileSync(env, contents.ToString() + '\n', tmp);
  if (s.ok()) {
    s = env->RenameFile(tmp, CurrentFileName(dbname));
  }
  if (!s.ok()) {
    env->DeleteFile(tmp);
  }
  return s;
}
    
    // Return the name of the descriptor file for the db named by
// 'dbname' and the specified incarnation number.  The result will be
// prefixed with 'dbname'.
extern std::string DescriptorFileName(const std::string& dbname,
                                      uint64_t number);
    
        void absDiff(const Size2D &size,
                 const s32 * src0Base, ptrdiff_t src0Stride,
                 const s32 * src1Base, ptrdiff_t src1Stride,
                 s32 * dstBase, ptrdiff_t dstStride);
    
    
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
    void absDiff(const Size2D &size,
             const s16 *src0Base, ptrdiff_t src0Stride,
             const s16 *src1Base, ptrdiff_t src1Stride,
             s16 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiffSigned<s16>());
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
    
    
    {
    {} // namespace internal
} // namespace CAROTENE_NS

    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s32, u16, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d0-d1}, [%[src1]]                              \n\t'
             'vld1.32 {d2-d3}, [%[src2]]                              \n\t'
             'vqmovun.s32 d4, q0                                      \n\t'
             'vqmovun.s32 d5, q1                                      \n\t'
             'vst1.16 {d4-d5}, [%[dst]]                               \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i + 0),
               [src2] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i)
             : 'd0','d1','d2','d3','d4','d5'
         );
     }
})
#else
CVT_FUNC(s32, u16, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int32x4_t vline1_s32 = vld1q_s32(_src + i);
         int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
    }
    }
    
        rshiftConstFunc funcs[16] =
    {
        rshiftConst<0>,
        rshiftConst<1>,
        rshiftConst<2>,
        rshiftConst<3>,
        rshiftConst<4>,
        rshiftConst<5>,
        rshiftConst<6>,
        rshiftConst<7>,
        rshiftConst<8>,
        rshiftConst<9>,
        rshiftConst<10>,
        rshiftConst<11>,
        rshiftConst<12>,
        rshiftConst<13>,
        rshiftConst<14>,
        rshiftConst<15>
    }, func = funcs[shift];
    
    #if !defined(__aarch64__) && defined(__GNUC__) && defined(__arm__)
CVTS_FUNC(u8, u16, 16,
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
            'vqmovun.s32 d22, q7                                   \n\t'
            'vqmovun.s32 d23, q8                                   \n\t'
            'vqmovun.s32 d24, q9                                   \n\t'
            'vqmovun.s32 d25, q10                                  \n\t'
            'vst1.16 {d22-d23}, [%[dst1]]                          \n\t'
            'vst1.16 {d24-d25}, [%[dst2]]                          \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 8),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28','d29','d30','d31'
        );
    }
})
#else
CVTS_FUNC(u8, u16, 16,
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
        vst1q_u16(_dst + i + 0, vcombine_u16(vqmovun_s32(vline1_s32), vqmovun_s32(vline2_s32)));
        vst1q_u16(_dst + i + 8, vcombine_u16(vqmovun_s32(vline3_s32), vqmovun_s32(vline4_s32)));
    }
})
#endif
    
        //k == 0
    int16x8_t v0k0 = vextq_s16(d0_7, d8_15, 1);
    int16x8_t v1k0 = vextq_s16(d0_7, d8_15, 2);
    int16x8_t ak0 = vminq_s16(v0k0, v1k0);
    int16x8_t bk0 = vmaxq_s16(v0k0, v1k0);
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const T * src = getRowPtr((const T *)srcBase, srcStride, i);
        T * dst = getRowPtr((T *)dstBase, dstStride, (flipMode & FLIP_VERTICAL_MODE) != 0 ? size.height - i - 1 : i);
        size_t js = 0, jd = size.width;
    }
    
                    u16* lidx0 = lane + x - 2*2;
                u16* lidx1 = lane + x - 1*2;
                u16* lidx3 = lane + x + 1*2;
                u16* lidx4 = lane + x + 2*2;
#if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
                __asm__ __volatile__ (
                    'vld2.16 {d0, d2}, [%[in0]]!                              \n\t'
                    'vld2.16 {d1, d3}, [%[in0]]                               \n\t'
                    'vld2.16 {d8, d10}, [%[in4]]!                             \n\t'
                    'vld2.16 {d9, d11}, [%[in4]]                              \n\t'
                    'vadd.i16 q0, q4                                          \n\t'
                    'vadd.i16 q1, q5                                          \n\t'
                    'vld2.16 {d16, d18}, [%[in1]]!                            \n\t'
                    'vld2.16 {d17, d19}, [%[in1]]                             \n\t'
                    'vld2.16 {d8, d10}, [%[in3]]!                             \n\t'
                    'vld2.16 {d9, d11}, [%[in3]]                              \n\t'
                    'vadd.i16 q4, q8                                          \n\t'
                    'vadd.i16 q5, q9                                          \n\t'
                    'vld2.16 {d16, d18}, [%[in2]]                             \n\t'
                    'vld2.16 {d17, d19}, [%[in22]]                            \n\t'
                    'vmla.i16 q0, q4, %q[c4]                                  \n\t'
                    'vmla.i16 q1, q5, %q[c4]                                  \n\t'
                    'vmla.i16 q0, q8, %q[c6]                                  \n\t'
                    'vmla.i16 q1, q9, %q[c6]                                  \n\t'
                    'vrshrn.u16 d8, q0, #8                                    \n\t'
                    'vrshrn.u16 d9, q1, #8                                    \n\t'
                    'vst2.8 {d8-d9}, [%[out]]                                 \n\t'
                    : [in0] '=r' (lidx0),
                      [in1] '=r' (lidx1),
                      [in3] '=r' (lidx3),
                      [in4] '=r' (lidx4)
                    : [out] 'r' (dst + x),
                      '0' (lidx0),
                      '1' (lidx1),
                      '2' (lidx3),
                      '3' (lidx4),
                      [in2] 'r' (lane + x),
                      [in22] 'r' (lane + x + 4*2),
                      [c4] 'w' (vc4u16), [c6] 'w' (vc6u16)
                    : 'd0','d1','d2','d3','d4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23'
                );
#else
                uint16x8x2_t vLane0 = vld2q_u16(lidx0);
                uint16x8x2_t vLane1 = vld2q_u16(lidx1);
                uint16x8x2_t vLane2 = vld2q_u16(lane + x);
                uint16x8x2_t vLane3 = vld2q_u16(lidx3);
                uint16x8x2_t vLane4 = vld2q_u16(lidx4);
    
    TEST(ObjCHelper, TextFormatDecodeData_RawStrings) {
  TextFormatDecodeData decode_data;
    }
    
    void MapLiteTestUtil::ExpectMapFieldsModified(
    const unittest::TestMapLite& message) {
  MapTestUtilImpl::ExpectMapFieldsModified<unittest::MapEnumLite,
                                           unittest::MAP_ENUM_BAR_LITE,
                                           unittest::MAP_ENUM_FOO_LITE>(
      message);
}
    
    class ExtensionStripper {
 public:
  static void StripFile(FileDescriptorProto *file) {
    for (int i = 0; i < file->mutable_message_type()->size(); i++) {
      StripMessage(file->mutable_message_type(i));
    }
    file->mutable_extension()->Clear();
  }
 private:
  static void StripMessage(DescriptorProto *message_type) {
    message_type->mutable_extension()->Clear();
    message_type->clear_extension_range();
    for (int i = 0; i < message_type->mutable_nested_type()->size(); i++) {
      StripMessage(message_type->mutable_nested_type(i));
    }
  }
};
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_ENUM_H__
#define GOOGLE_PROTOBUF_COMPILER_OBJECTIVEC_ENUM_H__
    
    /* Boolean */
#define GLU_FALSE                          0
#define GLU_TRUE                           1
    
    GBool PSTokenizer::getToken(char *buf, int size, int *length) {
  GBool comment, backslash;
  int c;
  int i;
    }
    
    
    {  int (*getCharFunc)(void *);
  void *data;
  int charBuf;
};
    
      if (dict->lookup('Di', &obj)->isName()) {
    if (strcmp('None', obj.getName()) == 0)
      angle = 0;
  }
  obj.free();
    
    class PopplerCacheKey
{
  public:
    virtual ~PopplerCacheKey();
    virtual bool operator==(const PopplerCacheKey &key) const = 0;
};
    
      // Constructor.
  PreScanOutputDev();
    
      if (new_media->embeddedStream)
    new_media->embeddedStream->incRef();
    
    GBool StandardSecurityHandler::authorize(void *authData) {
  GooString *ownerPassword, *userPassword;
    }
    
    #include 'poppler-config.h'
    
      xref = NULL;
    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
        int m_fd;               // file descriptor
    std::string m_fileName; // lock file name
    struct flock m_lock;    // fnctl lock structure
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
            // Now we have three kinds of nodes:
        //  - unmodified nodes that will be shared with the old network
        //  - modified nodes (user edits and their parents)
        //  - original nodes that are no longer referenced
        // The new network will be constructed to have the same roots as the original.
    
        // request matrices needed to do node function value evaluation
    virtual void RequestMatricesBeforeForwardProp(MatrixPool& matrixPool)
    {
        Base::RequestMatricesBeforeForwardProp(matrixPool);
        RequestMatrixFromPool(m_urlGain0, matrixPool);
        RequestMatrixFromPool(m_urlGain1, matrixPool);
        RequestMatrixFromPool(m_urlDiscount0, matrixPool);
        RequestMatrixFromPool(m_urlDiscount1, matrixPool);
    }
    
    
    {        if (aliasInfo.releaseCount == aliasInfo.totalCount)
        {
            RequestRelease((shared_ptr<Matrix<ElemType>>*)aliasInfo.pMatrixPtr);
            aliasInfo.pMatrixPtr = nullptr;
        }
    }
    
    void DHTRoutingTable::setTaskFactory(DHTTaskFactory* taskFactory)
{
  taskFactory_ = taskFactory;
}
    
      void showBuckets() const;
    
    
    {} // namespace aria2
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
    public:
  // _remoteNode is always null
  DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                    const unsigned char* data, size_t length,
                    const std::string& ipaddr, uint16_t port);
    
    #endif // D_DNS_CACHE_H

    
    TEST(SocketCanClientRawTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::SOCKET_CAN_RAW);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    TEST(ProtocolDataTest, CheckSum) {
  const uint8_t INPUT[] = {0x00, 0x12, 0x00, 0x13, 0x00, 0xF3, 0x00, 0x00};
  const uint8_t result =
      ProtocolData<apollo::canbus::ChassisDetail>::CalculateCheckSum(INPUT, 8);
  EXPECT_EQ(0xE7, result);
}
    
    double ClusterGeneralInfo701::lateral_vel(const std::uint8_t* bytes,
                                          int32_t length) const {
  Byte t0(bytes + 5);
  uint32_t x = t0.get_byte(0, 6);
    }
    
    #include 'modules/drivers/radar/conti_radar/protocol/cluster_quality_info_702.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
      Byte t1(bytes + 6);
  int32_t t = t1.get_byte(5, 3);
    
    #include 'modules/localization/msf/local_map/base_map/base_map_matrix.h'
    
    #include 'modules/planning/common/speed_limit.h'
    
    #include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_2_71.h'
    
    #include 'glog/logging.h'
    
    // config detail: {'name': 'pacmod_status', 'enum': {0:
// 'PACMOD_STATUS_CONTROL_DISABLED', 1: 'PACMOD_STATUS_CONTROL_ENABLED'},
// 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0,
// 'physical_range': '[0|1]', 'bit': 0, 'type': 'enum', 'order': 'motorola',
// 'physical_unit': ''}
Global_rpt_6a::Pacmod_statusType Globalrpt6a::pacmod_status(
    const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 1);
    }