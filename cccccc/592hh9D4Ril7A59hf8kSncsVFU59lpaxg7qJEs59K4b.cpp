
        
        
    {  DefaultCacheKey CKey(const_cast<void*>(Key), &DCache.CBs);
  auto Entry = DCache.Entries.find(CKey);
  if (Entry != DCache.Entries.end()) {
    // FIXME: Not thread-safe! It should avoid deleting the value until
    // 'releaseValue is called on it.
    *Value_out = Entry->second;
    return true;
  }
  return false;
}
    
    
    {}%
    
    char Mangle::getStandardTypeSubst(StringRef TypeName) {
#define STANDARD_TYPE(KIND, MANGLING, TYPENAME)      \
  if (TypeName == #TYPENAME) {                       \
    return #MANGLING[0];                             \
  }
    }
    
    const char *Demangle::getNodeKindString(swift::Demangle::Node::Kind k) {
  switch (k) {
#define NODE(ID)                                                               \
  case Node::Kind::ID:                                                         \
    return #ID;
#include 'swift/Demangling/DemangleNodes.def'
  }
  return 'Demangle::Node::Kind::???';
}
    
      if (!convertUTF8toUTF32(InputUTF8, InputCodePoints, mapNonSymbolChars))
    return false;
    
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
    
        secp256k1_context_set_error_callback(tctx, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(tctx, counting_illegal_callback_fn, &ecount);
    CHECK(secp256k1_ec_pubkey_create(tctx, &point, s_one) == 1);
    
    static bool CaseInsensitiveEqual(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        char c1 = s1[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 -= ('A' - 'a');
        char c2 = s2[i];
        if (c2 >= 'A' && c2 <= 'Z') c2 -= ('A' - 'a');
        if (c1 != c2) return false;
    }
    return true;
}
    
    
    {    input[4] = ReadLE32(k + 0);
    input[5] = ReadLE32(k + 4);
    input[6] = ReadLE32(k + 8);
    input[7] = ReadLE32(k + 12);
    if (keylen == 32) { /* recommended */
        k += 16;
        constants = sigma;
    } else { /* keylen == 16 */
        constants = tau;
    }
    input[8] = ReadLE32(k + 0);
    input[9] = ReadLE32(k + 4);
    input[10] = ReadLE32(k + 8);
    input[11] = ReadLE32(k + 12);
    input[0] = ReadLE32(constants + 0);
    input[1] = ReadLE32(constants + 4);
    input[2] = ReadLE32(constants + 8);
    input[3] = ReadLE32(constants + 12);
    input[12] = 0;
    input[13] = 0;
    input[14] = 0;
    input[15] = 0;
}
    
    namespace CAROTENE_NS {
    }
    
    
    {
    {        for (; sj < size.width; ++sj, syj += 2, dj += 4)
        {
            dst[dj] = srcu[sj];
            dst[dj + 1] = srcy[syj];
            dst[dj + 2] = srcv[sj];
            dst[dj + 3] = srcy[syj + 1];
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
    
    CVT_FUNC(s8, u8, 16,
     int8x16_t vZero = vdupq_n_s8(0);,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         int8x16_t vu8 = vld1q_s8(_src + i);
         uint8x16_t vu1 = vreinterpretq_u8_s8(vmaxq_s8(vu8, vZero));
         vst1q_u8(_dst + i, vu1);
     }
})
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(s16, u8, 16,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.8 {d4-d5}, [%[src1]]                             \n\t'
            'vmovl.s16 q3, d4                                      \n\t'
            'vmovl.s16 q4, d5                                      \n\t'
            'vcvt.f32.s32 q5, q3                                   \n\t'
            'vcvt.f32.s32 q6, q4                                   \n\t'
            'vmul.f32 q7, q5, q0                                   \n\t'
            'vmul.f32 q8, q6, q0                                   \n\t'
            'vadd.f32 q9, q7, q1                                   \n\t'
            'vadd.f32 q10, q8, q1                                  \n\t'
            'vcvt.s32.f32 q11, q9                                  \n\t'
            'vcvt.s32.f32 q12, q10                                 \n\t'
            'vqmovn.s32 d26, q11                                   \n\t'
            'vqmovn.s32 d27, q12                                   \n\t'
            'vqmovun.s16 d28, q13                                  \n\t'
            'vst1.8 {d28}, [%[dst]]                                \n\t'
            : /*no output*/
            : [src1] 'r' (_src + i),
              [dst] 'r' (_dst + i + 0),
               'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21','d22','d23','d24','d25','d26','d27','d28'
        );
    }
})
#else
CVTS_FUNC(s16, u8, 16,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta + 0.5f);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        int16x8_t vline = vld1q_s16(_src + i);
        int32x4_t vline1_s32 = vmovl_s16(vget_low_s16 (vline));
        int32x4_t vline2_s32 = vmovl_s16(vget_high_s16(vline));
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
        uint8x8_t vRes = vqmovun_s16(vcombine_s16(vRes1, vRes2));
        vst1_u8(_dst + i, vRes);
    }
})
#endif
    
                    int16x8_t t0_16s = vreinterpretq_s16_u16(vmovl_u8(t0));
                int16x8_t t1_16s = vreinterpretq_s16_u16(vmovl_u8(t1));
                int16x8_t t2_16s = vreinterpretq_s16_u16(vmovl_u8(t2));
    
    // It is possible to accumulate up to 66051 uchar multiplication results in uint32 without overflow
// We process 16 elements and accumulate two new elements per step. So we could handle 66051/2*16 elements
#define DOT_UINT_BLOCKSIZE 66050*8
    f64 result = 0.0;
    for (size_t row = 0; row < size.height; ++row)
    {
        const u8 * src0 = internal::getRowPtr(src0Base, src0Stride, row);
        const u8 * src1 = internal::getRowPtr(src1Base, src1Stride, row);
    }
    
    
    {} // namespace
    
    #include 'vtransform.hpp'
    
                uint32x2_t el2l = vadd_u32(vget_low_u32(el8shr01l), vget_high_u32(el8shr01l));
            uint32x2_t el2hl = vadd_u32(vget_low_u32(el4h), vget_high_u32(el8shr01l));
            uint32x2_t el2hh = vadd_u32(vget_low_u32(el4h), vget_high_u32(el4h));
    
    #pragma once
    
    					if (imageformat == Image::Format::RG11 ||
						imageformat == Image::Format::SIGNED_RG11)
					{
						m_afrgbaSource[uiPixel].fA = 1.0f;
						m_afrgbaSource[uiPixel].fB = 0.0f;
					}
    
    			float fDRed = a_frgbaDecodedColor.fR - a_frgbaSourcePixel.fR;
			float fDGreen = a_frgbaDecodedColor.fG - a_frgbaSourcePixel.fG;
			float fDBlue = a_frgbaDecodedColor.fB - a_frgbaSourcePixel.fB;
			float fDAlpha = a_fDecodedAlpha - a_frgbaSourcePixel.fA;
    
    
  FT_LOCAL_ARRAY( AF_Blue_StringRec )
  af_blue_stringsets[];
    
        cInt e1Wc2, e2Wc2;
    switch (e1FillType2)
    {
      case pftPositive: e1Wc2 = e1->WindCnt2; break;
      case pftNegative : e1Wc2 = -e1->WindCnt2; break;
      default: e1Wc2 = Abs(e1->WindCnt2);
    }
    switch (e2FillType2)
    {
      case pftPositive: e2Wc2 = e2->WindCnt2; break;
      case pftNegative: e2Wc2 = -e2->WindCnt2; break;
      default: e2Wc2 = Abs(e2->WindCnt2);
    }
    
    #if !defined(OPUS_HAVE_RTCD)
#define OVERRIDE_OPUS_FFT (1)
    
    
        case URX_STAT_SETREF_N:
            {
                // Test input character for NOT being a member of  one of
                //    the predefined sets (Word Characters, for example)
                if (fp->fInputIdx >= fActiveLimit) {
                    fHitEnd = TRUE;
                    fp = (REStackFrame *)fStack->popFrame(fFrameSize);
                    break;
                }
    }
    
    #endif  // !UCONFIG_NO_COLLATION

    
    #if !UCONFIG_NO_FORMATTING
    
    U_NAMESPACE_END
    
    U_NAMESPACE_END
    
    
    {    /**
     * Formats positiveValue using the given range of digit counts.
     * Always uses standard digits '0' through '9'. Formatted value is
     * left padded with '0' as necessary to achieve minimum digit count.
     * Does not produce any grouping separators or trailing decimal point.
     * Calling format to format a value with a particular digit count range
     * when canFormat indicates that the same value and digit count range
     * cannot be formatted results in undefined behavior.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UnicodeString &format(
            int32_t positiveValue,
            const IntDigitCountRange &range,
            UnicodeString &appendTo);
    
};
    
    U_NAMESPACE_BEGIN
    
        /**
     * UnicodeFunctor API.  Cast 'this' to a UnicodeReplacer* pointer
     * and return the pointer.
     * @return the UnicodeReplacer pointer.
     */
    virtual UnicodeReplacer* toReplacer() const;
    
        int32_t cursor = cursorPos;
    
    CatmullRomTo* CatmullRomTo::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CatmullRomTo();
    a->initWithDuration(this->_duration, this->_points->clone());
    a->autorelease();
    return a;
}
    
    #include '2d/CCGrid.h'
#include '2d/CCNodeGrid.h'
#include 'base/CCDirector.h'
    
        if (action && action->initWithDuration(duration))
    {
        action->autorelease();
        return action;
    }
    
    /** @class MoveBy
 * @brief Moves a Node object x,y pixels by modifying it's position attribute.
 x and y are relative to the position of the object.
 Several MoveBy actions can be concurrently called, and the resulting
 movement will be the sum of individual movements.
 @since v2.1beta2-custom
 */
class CC_DLL MoveBy : public ActionInterval
{
public:
    /** 
     * Creates the action.
     *
     * @param duration Duration time, in seconds.
     * @param deltaPosition The delta distance in 2d, it's a Vec2 type.
     * @return An autoreleased MoveBy object.
     */
    static MoveBy* create(float duration, const Vec2& deltaPosition);
    /**
     * Creates the action.
     *
     * @param duration Duration time, in seconds.
     * @param deltaPosition The delta distance in 3d, it's a Vec3 type.
     * @return An autoreleased MoveBy object.
     */
    static MoveBy* create(float duration, const Vec3& deltaPosition);
    }
    
    /**
 @brief This action simulates a page turn from the bottom right hand corner of the screen.
 
 @details It's not much use by itself but is used by the PageTurnTransition.
         Based on an original paper by L Hong et al.
         http://www.parc.com/publication/1638/turning-pages-of-3d-electronic-books.html
  
 @since v0.8.2
 */
class CC_DLL PageTurn3D : public Grid3DAction
{
public:
    /**
     * @js NA 
     */
    virtual GridBase* getGrid() override;
    }
    
    TurnOffTiles* TurnOffTiles::create(float duration, const Size& gridSize, unsigned int seed)
{
    TurnOffTiles *action = new (std::nothrow) TurnOffTiles();
    }
    
        std::vector<cocos2d::Vec2> rdp(const std::vector<cocos2d::Vec2>& v, float optimization);
    float perpendicularDistance(const cocos2d::Vec2& i, const cocos2d::Vec2& start, const cocos2d::Vec2& end);
    
    #include <string>
    
    int ObjectListStatus60A::interface_version(const std::uint8_t* bytes,
                                           int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(4, 4);
    }
    
    
    {  for (int i = 0; i < conti_radar->contiobs_size(); ++i) {
    if (conti_radar->contiobs(i).obstacle_id() == obj_id) {
      auto obs = conti_radar->mutable_contiobs(i);
      obs->set_longitude_dist_rms(
          LINEAR_RMS[longitude_dist_rms(bytes, length)]);
      obs->set_lateral_dist_rms(LINEAR_RMS[lateral_dist_rms(bytes, length)]);
      obs->set_longitude_vel_rms(LINEAR_RMS[longitude_vel_rms(bytes, length)]);
      obs->set_lateral_vel_rms(LINEAR_RMS[lateral_vel_rms(bytes, length)]);
      obs->set_longitude_accel_rms(
          LINEAR_RMS[longitude_accel_rms(bytes, length)]);
      obs->set_lateral_accel_rms(LINEAR_RMS[lateral_accel_rms(bytes, length)]);
      obs->set_oritation_angle_rms(
          ANGLE_RMS[oritation_angle_rms(bytes, length)]);
      obs->set_probexist(PROBOFEXIST[probexist(bytes, length)]);
      obs->set_meas_state(meas_state(bytes, length));
      break;
    }
  }
}
    
    TEST_F(SpeedLimitTest, SimpleSpeedLimitCreation) {
  SpeedLimit simple_speed_limit;
  EXPECT_TRUE(simple_speed_limit.speed_limit_points().empty());
  EXPECT_EQ(speed_limit_.speed_limit_points().size(), 100);
}
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
    Eigen::MatrixXd SplineSegKernel::NthDerivativeKernel(
    const uint32_t n, const uint32_t num_params, const double accumulated_x) {
  if (n == 1) {
    return DerivativeKernel(num_params, accumulated_x);
  } else if (n == 2) {
    return SecondOrderDerivativeKernel(num_params, accumulated_x);
  } else if (n == 3) {
    return ThirdOrderDerivativeKernel(num_params, accumulated_x);
  } else {
    return Eigen::MatrixXd::Zero(num_params, num_params);
  }
}
    
    
    {  double length_2 = 50.0;
  const LaneGraph &lane_graph_2 =
      ObstacleClusters::GetLaneGraph(start_s, length_2, lane);
  EXPECT_EQ(1, lane_graph_2.lane_sequence_size());
  EXPECT_EQ(3, lane_graph_2.lane_sequence(0).lane_segment_size());
  EXPECT_EQ('l9', lane_graph_2.lane_sequence(0).lane_segment(0).lane_id());
  EXPECT_EQ('l18', lane_graph_2.lane_sequence(0).lane_segment(1).lane_id());
  EXPECT_EQ('l21', lane_graph_2.lane_sequence(0).lane_segment(2).lane_id());
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'gtest/gtest.h'