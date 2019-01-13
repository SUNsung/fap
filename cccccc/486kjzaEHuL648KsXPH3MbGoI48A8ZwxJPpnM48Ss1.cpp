
        
        #endif // BITCOIN_QT_SIGNVERIFYMESSAGEDIALOG_H

    
    static void secp256k1_gej_add_zinv_var(secp256k1_gej *r, const secp256k1_gej *a, const secp256k1_ge *b, const secp256k1_fe *bzinv) {
    /* 9 mul, 3 sqr, 4 normalize, 12 mul_int/add/negate */
    secp256k1_fe az, z12, u1, u2, s1, s2, h, i, i2, h2, h3, t;
    }
    
        Round(a, b, c, d, e, f, g, h, 0x428a2f98, w0 = BE32(chunk[0]));
    Round(h, a, b, c, d, e, f, g, 0x71374491, w1 = BE32(chunk[1]));
    Round(g, h, a, b, c, d, e, f, 0xb5c0fbcf, w2 = BE32(chunk[2]));
    Round(f, g, h, a, b, c, d, e, 0xe9b5dba5, w3 = BE32(chunk[3]));
    Round(e, f, g, h, a, b, c, d, 0x3956c25b, w4 = BE32(chunk[4]));
    Round(d, e, f, g, h, a, b, c, 0x59f111f1, w5 = BE32(chunk[5]));
    Round(c, d, e, f, g, h, a, b, 0x923f82a4, w6 = BE32(chunk[6]));
    Round(b, c, d, e, f, g, h, a, 0xab1c5ed5, w7 = BE32(chunk[7]));
    Round(a, b, c, d, e, f, g, h, 0xd807aa98, w8 = BE32(chunk[8]));
    Round(h, a, b, c, d, e, f, g, 0x12835b01, w9 = BE32(chunk[9]));
    Round(g, h, a, b, c, d, e, f, 0x243185be, w10 = BE32(chunk[10]));
    Round(f, g, h, a, b, c, d, e, 0x550c7dc3, w11 = BE32(chunk[11]));
    Round(e, f, g, h, a, b, c, d, 0x72be5d74, w12 = BE32(chunk[12]));
    Round(d, e, f, g, h, a, b, c, 0x80deb1fe, w13 = BE32(chunk[13]));
    Round(c, d, e, f, g, h, a, b, 0x9bdc06a7, w14 = BE32(chunk[14]));
    Round(b, c, d, e, f, g, h, a, 0xc19bf174, w15 = BE32(chunk[15]));
    
            secp256k1_ecmult_const(&res, &pt, &s);
        secp256k1_ge_set_gej(&pt, &res);
        /* Compute a hash of the point in compressed form
         * Note we cannot use secp256k1_eckey_pubkey_serialize here since it does not
         * expect its output to be secret and has a timing sidechannel. */
        secp256k1_fe_normalize(&pt.x);
        secp256k1_fe_normalize(&pt.y);
        secp256k1_fe_get_b32(x, &pt.x);
        y[0] = 0x02 | secp256k1_fe_is_odd(&pt.y);
    
    
    {    secp256k1_scalar_get_b32(brx, sigr);
    r = secp256k1_fe_set_b32(&fx, brx);
    (void)r;
    VERIFY_CHECK(r); /* brx comes from a scalar, so is less than the order; certainly less than p */
    if (recid & 2) {
        if (secp256k1_fe_cmp_var(&fx, &secp256k1_ecdsa_const_p_minus_order) >= 0) {
            return 0;
        }
        secp256k1_fe_add(&fx, &secp256k1_ecdsa_const_order_as_fe);
    }
    if (!secp256k1_ge_set_xo_var(&x, &fx, recid & 1)) {
        return 0;
    }
    secp256k1_gej_set_ge(&xj, &x);
    secp256k1_scalar_inverse_var(&rn, sigr);
    secp256k1_scalar_mul(&u1, &rn, message);
    secp256k1_scalar_negate(&u1, &u1);
    secp256k1_scalar_mul(&u2, &rn, sigs);
    secp256k1_ecmult(ctx, &qj, &xj, &u2, &u1);
    secp256k1_ge_set_gej_var(pubkey, &qj);
    return !secp256k1_gej_is_infinity(&qj);
}
    
        secp256k1_context_set_error_callback(none, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_error_callback(sign, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_error_callback(vrfy, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_error_callback(both, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(none, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(sign, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(vrfy, counting_illegal_callback_fn, &ecount);
    secp256k1_context_set_illegal_callback(both, counting_illegal_callback_fn, &ecount);
    
    EventListener::~EventListener() {
  for (std::map<int, BaseEvent*>::iterator i = listerners_.begin(); i != listerners_.end(); i++) {
    delete i->second;
  }
}
    
    
    {  template<typename T> bool RemoveListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i!=listerners_.end()) {
      delete i->second;
      listerners_.erase(i);
      return true;
    }
    return false;
  }
private:
  DISALLOW_COPY_AND_ASSIGN(EventListener);
};
    
      class ClipboardWriter {
  public:
    ClipboardWriter() {
      scw_.reset(new ui::ScopedClipboardWriter(ui::CLIPBOARD_TYPE_COPY_PASTE));
    }
    }
    
    namespace extensions {
    }
    
    
    {  nw::ObjectManager* manager = nw::ObjectManager::Get(browser_context());
  manager->OnCallObjectMethod(render_frame_host(), id, type, method, *arguments);
  return RespondNow(NoArguments());
}
    
    
    {		for (unsigned int uiPixel = 0; uiPixel < PIXELS; uiPixel++)
		{
			m_fError += CalcPixelError(m_afrgbaDecodedColors[uiPixel], m_afDecodedAlphas[uiPixel],
										m_pafrgbaSource[uiPixel]);
		}
		
	}
    
    
#define AF_LATIN_BLUE_ACTIVE      ( 1U << 0 ) /* zone height is <= 3/4px   */
#define AF_LATIN_BLUE_TOP         ( 1U << 1 ) /* we have a top blue zone   */
#define AF_LATIN_BLUE_SUB_TOP     ( 1U << 2 ) /* we have a subscript top   */
                                              /* blue zone                 */
#define AF_LATIN_BLUE_NEUTRAL     ( 1U << 3 ) /* we have neutral blue zone */
#define AF_LATIN_BLUE_ADJUSTMENT  ( 1U << 4 ) /* used for scale adjustment */
                                              /* optimization              */
    
    
    {
    {    if (Reverse1)
    {
      op1b = DupOutPt(op1, false);
      op2b = DupOutPt(op2, true);
      op1->Prev = op2;
      op2->Next = op1;
      op1b->Next = op2b;
      op2b->Prev = op1b;
      j->OutPt1 = op1;
      j->OutPt2 = op1b;
      return true;
    } else
    {
      op1b = DupOutPt(op1, true);
      op2b = DupOutPt(op2, false);
      op1->Next = op2;
      op2->Prev = op1;
      op1b->Prev = op2b;
      op2b->Next = op1b;
      j->OutPt1 = op1;
      j->OutPt2 = op1b;
      return true;
    }
  }
}
//----------------------------------------------------------------------
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    
    {        auto maskMatrix = GetMatrix();
        size_t rowOffset = offset[0];
        size_t colOffset = offset[1];
        size_t sliceRowLength = (shape[0] != NDShape::InferredDimension) ? shape[0] : (maskMatrix->GetNumRows() - rowOffset);
        size_t sliceColLength = (shape[1] != NDShape::InferredDimension) ? shape[1] : (maskMatrix->GetNumCols() - colOffset);
        if ((rowOffset == 0) && (sliceRowLength == maskMatrix->GetNumRows()))
            maskMatrix->ColumnSlice(colOffset, sliceColLength).SetValue((char)maskKind);
        else
        {
            // Since Matrix does not support strides in the row dimension, we will need to create separate slices for each column
            for (size_t i = colOffset; i < (colOffset + sliceColLength); ++i)
            {
                auto column = maskMatrix->ColumnSlice(i, 1);
                column.Reshape(1, maskMatrix->GetNumRows());
                column.ColumnSlice(rowOffset, sliceRowLength).SetValue((char)maskKind);
            }
        }
    }
    
    #pragma once
    
    
    {
    {    private:
        static bool IsNativeUDF(const Dictionary& dict);
    };
}

    
    
    {    return false;
}
    
    // implementation AccelDeccelAmplitude
    
    Place * Place::reverse() const
{
    // no reverse, just clone
    return this->clone();
}
    
    CC_CONSTRUCTOR_ACCESS:
    /** initializes the action */
    bool initWithDuration(float d);
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
                p.y = ( R + ay - ( r * (1 - cosBeta) * sinTheta));
    
    #endif // __ACTION_CCPAGETURN3D_ACTION_H__

    
    /**
@brief SplitCols action.
@details Split the target node in many columns.
        Then move out some columns from top, move out the other columns from bottom.
*/
class CC_DLL SplitCols : public TiledGrid3DAction
{
public:
    
    /** 
     * @brief Create the action with the number of columns and the duration.
     * @param duration Specify the duration of the SplitCols action. It's a value in seconds.
     * @param cols Specify the columns count should be split.
     * @return If the creation success, return a pointer of SplitCols action; otherwise, return nil.
     */
    static SplitCols* create(float duration, unsigned int cols);
    }
    
    void ActionTween::update(float dt)
{
    dynamic_cast<ActionTweenDelegate*>(_target)->updateTweenAction(_to  - _delta * (1 - dt), _key);
}
    
     @since v0.99.2
 */
class CC_DLL ActionTween : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes the action with the property name (key), and the from and to parameters.
     * @param duration The duration of the ActionTween. It's a value in seconds.
     * @param key The key of property which should be updated.
     * @param from The value of the specified property when the action begin.
     * @param to The value of the specified property when the action end.
     * @return If the creation success, return a pointer of ActionTween; otherwise, return nil.
     */
    static ActionTween* create(float duration, const std::string& key, float from, float to);
    }
    
    bool Animation::init()
{
    _loops = 1;
    _delayPerUnit = 0.0f;
    
    return true;
}
    
        /** Gets the units of time the frame takes.
     *
     * @return The units of time the frame takes.
     */
    float getDelayUnits() const { return _delayUnits; };
    
    /** Sets the units of time the frame takes.
     *
     * @param delayUnits The units of time the frame takes.
     */
    void setDelayUnits(float delayUnits) { _delayUnits = delayUnits; };
    
    /** @brief Gets user information
     * A AnimationFrameDisplayedNotification notification will be broadcast when the frame is displayed with this dictionary as UserInfo. 
     * If UserInfo is nil, then no notification will be broadcast.
     *
     * @return A dictionary as UserInfo
     */
    const ValueMap& getUserInfo() const { return _userInfo; };
    ValueMap& getUserInfo() { return _userInfo; };
    
    /** Sets user information.
     * @param userInfo A dictionary as UserInfo.
     */
    void setUserInfo(const ValueMap& userInfo)
    {
        _userInfo = userInfo;
    }
    
    // Overrides
    virtual AnimationFrame *clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    /**
     * @js ctor
     */
    AnimationFrame();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~AnimationFrame();
    
    /** initializes the animation frame with a spriteframe, number of delay units and a notification user info */
    bool initWithSpriteFrame(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo);
    
    void AnimationCache::removeAnimation(const std::string& name)
{
    if (name.empty())
        return;
    }
    
    // implementation AtlasNode
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/