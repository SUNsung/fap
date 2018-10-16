
        
        bool swift::isPlatformActive(PlatformKind Platform, LangOptions &LangOpts) {
  if (Platform == PlatformKind::none)
    return true;
  
  if (Platform == PlatformKind::OSXApplicationExtension ||
      Platform == PlatformKind::iOSApplicationExtension)
    if (!LangOpts.EnableAppExtensionRestrictions)
      return false;
  
  // FIXME: This is an awful way to get the current OS.
  switch (Platform) {
    case PlatformKind::OSX:
    case PlatformKind::OSXApplicationExtension:
      return LangOpts.Target.isMacOSX();
    case PlatformKind::iOS:
    case PlatformKind::iOSApplicationExtension:
      return LangOpts.Target.isiOS() && !LangOpts.Target.isTvOS();
    case PlatformKind::tvOS:
    case PlatformKind::tvOSApplicationExtension:
      return LangOpts.Target.isTvOS();
    case PlatformKind::watchOS:
    case PlatformKind::watchOSApplicationExtension:
      return LangOpts.Target.isWatchOS();
    case PlatformKind::none:
      llvm_unreachable('handled above');
  }
  llvm_unreachable('bad PlatformKind');
}
    
    
    {    if (Finished) {
      std::string Output = 'Output placeholder\n';
      std::string Errors =
          P.second->SeparateErrors ? 'Error placeholder\n' : '';
      if (Finished(P.first, 0, Output, Errors, TaskProcessInformation(Pid),
                   P.second->Context) == TaskFinishedResponse::StopExecution)
        SubtaskFailed = true;
    }
  }
    
    #endif
    
             vline_f32 = vaddq_f32(vline_f32, vhalf);
         vline_s32 = vcvtq_s32_f32(vline_f32);
         vline_s16 = vqmovn_s32(vline_s32);
    
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
    
    
    {            vs1 = vqadd_s32(vs1, vnz1);
            vs2 = vqadd_s32(vs2, vnz2);
            vs3 = vqadd_s32(vs3, vnz3);
            vs4 = vqadd_s32(vs4, vnz4);
        }
    
      /**
   * @brief Create a pointer to a specified brand of CAN client. The brand is
   *        set in the parameter.
   * @param parameter The parameter to create the CAN client.
   * @return A pointer to the created CAN client.
   */
  std::unique_ptr<CanClient> CreateCANClient(const CANCardParameter &parameter);
    
    #include 'modules/drivers/canbus/can_client/esd/esd_can_client.h'
    
    void HermesCanClient::SetInited(bool init) { _is_init = init; }
    
    /*
TEST(HermesCanClient, send) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
    }
    
    using apollo::common::ErrorCode;
using apollo::common::time::Clock;
using micros = std::chrono::microseconds;
    
    #include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    #include <cstdint>