
        
            /** Colorize an image (given filename) with the icon color */
    QImage SingleColorImage(const QString& filename) const;
    
    #ifndef BITCOIN_QT_TRAFFICGRAPHWIDGET_H
#define BITCOIN_QT_TRAFFICGRAPHWIDGET_H
    
    #ifndef BITCOIN_RPC_MINING_H
#define BITCOIN_RPC_MINING_H
    
    int secp256k1_ecdsa_sign_recoverable(const secp256k1_context* ctx, secp256k1_ecdsa_recoverable_signature *signature, const unsigned char *msg32, const unsigned char *seckey, secp256k1_nonce_function noncefp, const void* noncedata) {
    secp256k1_scalar r, s;
    secp256k1_scalar sec, non, msg;
    int recid;
    int ret = 0;
    int overflow = 0;
    VERIFY_CHECK(ctx != NULL);
    ARG_CHECK(secp256k1_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx));
    ARG_CHECK(msg32 != NULL);
    ARG_CHECK(signature != NULL);
    ARG_CHECK(seckey != NULL);
    if (noncefp == NULL) {
        noncefp = secp256k1_nonce_function_default;
    }
    }
    
    #define TINYFORMAT_ARGTYPES(n) TINYFORMAT_ARGTYPES_ ## n
#define TINYFORMAT_VARARGS(n) TINYFORMAT_VARARGS_ ## n
#define TINYFORMAT_PASSARGS(n) TINYFORMAT_PASSARGS_ ## n
#define TINYFORMAT_PASSARGS_TAIL(n) TINYFORMAT_PASSARGS_TAIL_ ## n
    
    bool ParseInt32(const std::string& str, int32_t *out)
{
    if (!ParsePrechecks(str))
        return false;
    char *endp = NULL;
    errno = 0; // strtol will not set errno if valid
    long int n = strtol(str.c_str(), &endp, 10);
    if(out) *out = (int32_t)n;
    // Note that strtol returns a *long int*, so even if strtol doesn't report a over/underflow
    // we still have to check that the returned value is within the range of an *int32_t*. On 64-bit
    // platforms the size of these types may be different.
    return endp && *endp == 0 && !errno &&
        n >= std::numeric_limits<int32_t>::min() &&
        n <= std::numeric_limits<int32_t>::max();
}
    
    TegraCvtColor_Invoker(rgb2bgr565, rgb2bgr565, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                              dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(rgb2rgb565, rgb2rgb565, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                              dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(rgbx2bgr565, rgbx2bgr565, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
TegraCvtColor_Invoker(rgbx2rgb565, rgbx2rgb565, src_data + static_cast<size_t>(range.start) * src_step, src_step, \
                                                dst_data + static_cast<size_t>(range.start) * dst_step, dst_step)
#define TEGRA_CVTBGRTOBGR565(src_data, src_step, dst_data, dst_step, width, height, scn, swapBlue, greenBits) \
( \
    greenBits == 6 && CAROTENE_NS::isSupportedConfiguration() ? \
        scn == 3 ? \
            (swapBlue ? \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgb2bgr565_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) : \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgb2rgb565_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        scn == 4 ? \
            (swapBlue ? \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgbx2bgr565_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) : \
                parallel_for_(Range(0, height), \
                TegraCvtColor_rgbx2rgb565_Invoker(src_data, src_step, dst_data, dst_step, width, height), \
                (width * height) / static_cast<double>(1<<16)) ), \
            CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
    #ifdef CAROTENE_NEON
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        v_dst = internal::vaddq(v_src0, v_src1);
    }
    
    inline void vnst(u8* dst, uint8x16_t v1, uint8x16_t v2) { vst1q_u8(dst, v1); vst1q_u8(dst+16, v2); }
inline void vnst(u8* dst, uint16x8_t v1, uint16x8_t v2) { vst1q_u8(dst, vcombine_u8(vmovn_u16(v1), vmovn_u16(v2))); }
inline void vnst(u8* dst, uint32x4_t v1, uint32x4_t v2) { vst1_u8(dst, vmovn_u16(vcombine_u16(vmovn_u32(v1), vmovn_u32(v2)))); }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && defined(__arm__)
        for (; j < roiw8; sj += 32, dj += 24, j += 8)
        {
            internal::prefetch(src + sj);
            __asm__ (
                'vld4.8 {d0, d1, d2, d3}, [%[in0]]         \n\t'
                'vst3.8 {d0, d1, d2}, [%[out0]]            \n\t'
                : /*no output*/
                : [out0] 'r' (dst + dj),
                  [in0]  'r' (src + sj)
                : 'd0','d1','d2','d3'
            );
        }
#else
        for (; j < roiw16; sj += 64, dj += 48, j += 16)
        {
            internal::prefetch(src + sj);
            v_dst0.v4 = vld4q_u8(src + sj);
            vst3q_u8(dst + dj, v_dst0.v3);
        }
    
    
    {                v_dst1 = vmlal_n_s16(v_dst1, vget_high_s16(t0_16s), kernelBase[5]);
                v_dst1 = vmlal_n_s16(v_dst1, vget_high_s16(t1_16s), kernelBase[4]);
                v_dst1 = vmlal_n_s16(v_dst1, vget_high_s16(t2_16s), kernelBase[3]);
            }
    
    #include 'vtransform.hpp'
    
    #ifndef CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_
#define CAFFE2_OPERATORS_FLEXIBLE_TOP_K_H_
    
    #include 'caffe2/operators/glu_op.h'
    
    class RigidBodyBullet;
class SpaceBullet;
class btTypedConstraint;
    
    /**
	@author AndreaCatania
*/
    
    #endif // GODOT_RAY_WORLD_ALGORITHM_H

    
    	real_t get_hinge_angle();
    
    class RIDBullet : public RID_Data {
	RID self;
	BulletPhysicsServer *physicsServer;
    }
    
    #ifndef _3D_DISABLED
    
    void register_etc_types() {
    }
    
    Speed::~Speed()
{
    CC_SAFE_RELEASE(_innerAction);
}
    
        /** Appends a control point.
     *
     * @js NA
     * @param controlPoint A control point.
     */
    void addControlPoint(const Vec2& controlPoint);
    
    EASEELASTIC_TEMPLATE_IMPL(EaseElasticIn, tweenfunc::elasticEaseIn, EaseElasticOut);
EASEELASTIC_TEMPLATE_IMPL(EaseElasticOut, tweenfunc::elasticEaseOut, EaseElasticIn);
EASEELASTIC_TEMPLATE_IMPL(EaseElasticInOut, tweenfunc::elasticEaseInOut, EaseElasticInOut);
    
        /**
    @brief Set whether lens is concave.
    @param concave Whether lens is concave.
    */
    void setConcave(bool concave) { _concave = concave; }
    
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
    
        //
    // Overrides
    //
    virtual RotateTo* clone() const override;
    virtual RotateTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    RotateTo();
    virtual ~RotateTo() {}
    
        /** Returns the numbers of actions that are running in a certain target. 
     * Composable actions are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @return  The numbers of actions that are running in a certain target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActionsInTarget(const Node *target) const;
    
    /** Returns the numbers of actions that are running in all targets.
     * @return  The numbers of actions that are running in all target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActions() const;
    
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
    
    AnimationFrame* AnimationFrame::clone() const
{
    // no copy constructor
    auto frame = new (std::nothrow) AnimationFrame();
    frame->initWithSpriteFrame(_spriteFrame->clone(),
                               _delayUnits,
                               _userInfo);
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCAnimationCache.h'
#include '2d/CCSpriteFrameCache.h'
#include 'platform/CCFileUtils.h'
    
    NS_CC_END