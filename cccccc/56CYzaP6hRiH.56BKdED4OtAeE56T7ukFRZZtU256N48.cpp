
        
                    int16x4_t v_srclo = vget_low_s16(v_src0), v_srchi = vget_high_s16(v_src0);
            v_dst0 = vcombine_s16(vqmovn_s32(vaddw_s16(vshrq_n_s32(vmull_s16(v_srclo, v_srclo), shift), vget_low_s16(v_dst0))),
                                  vqmovn_s32(vaddw_s16(vshrq_n_s32(vmull_s16(v_srchi, v_srchi), shift), vget_high_s16(v_dst0))));
    
    
    {            vst1q_s16(dstx + i, ldx);
            vst1q_s16(dsty + i, ldy);
        }
    
            for (; sj < roiw8; sj += 8, syj += 16, dj += 32)
        {
            uint8x8x2_t v_y = vld2_u8(srcy + syj);
            uint8x8x4_t v_dst;
            v_dst.val[0] = v_y.val[0];
            v_dst.val[1] = vld1_u8(srcu + sj);
            v_dst.val[2] = v_y.val[1];
            v_dst.val[3] = vld1_u8(srcv + sj);
            vst4_u8(dst + dj, v_dst);
        }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s16, u8, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.8 {d0-d1}, [%[src1]]                             \n\t'
             'vld1.8 {d2-d3}, [%[src2]]                             \n\t'
             'vqmovun.s16 d4, q0                                    \n\t'
             'vqmovun.s16 d5, q1                                    \n\t'
             'vst1.8 {d4-d5}, [%[dst]]                              \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i),
               [src2] 'r' (_src + i + 8),
               [dst] 'r' (_dst + i + 0)
             : 'd0','d1','d2','d3','d4','d5'
         );
     }
})
#else
CVT_FUNC(s16, u8, 16,
,
{
     for (size_t i = 0; i < w; i += 16)
     {
         internal::prefetch(_src + i);
         int16x8_t vline1_s16 = vld1q_s16(_src + i);
         int16x8_t vline2_s16 = vld1q_s16(_src + i + 8);
    }
    }
    
                int32x4_t v = vaddq_s32(v0, v4);
            int32x4_t v13 = vaddq_s32(v1, v3);
    
        // the others
    for (size_t i = 1; i < size.height ; ++i)
    {
        src = internal::getRowPtr(srcBase, srcStride, i);
        u32 * prevSum = internal::getRowPtr(sumBase, sumStride, i - 1);
        sum = internal::getRowPtr(sumBase, sumStride, i);
    }
    
    inline float32x2_t vrecp_f32(float32x2_t val)
{
    float32x2_t reciprocal = vrecpe_f32(val);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    reciprocal = vmul_f32(vrecps_f32(val, reciprocal), reciprocal);
    return reciprocal;
}
    
        /**
	 * Decomposes a non-convex polygon into a number of convex polygons, up
     * to maxPolys (remaining pieces are thrown out, but the total number
	 * is returned, so the return value can be greater than maxPolys).
     *
     * Each resulting polygon will have no more than maxVerticesPerPolygon
     * vertices (set to b2MaxPolyVertices by default, though you can change
	 * this).
     * 
     * Returns -1 if operation fails (usually due to self-intersection of
	 * polygon).
     */
int32 DecomposeConvex(b2Polygon* p, b2Polygon* results, int32 maxPolys) {
        if (p->nVertices < 3) return 0;
    }
    
    
  typedef struct  AF_Blue_StringRec_
  {
    AF_Blue_String  string;
    FT_UShort       properties;
    }
    
    /** Compile-time conversion of float constant to 32-bit value */
#define QCONST32(x,bits) ((opus_val32)(.5+(x)*(((opus_val32)1)<<(bits))))
    
    /********************************************************************/
/*                        SCALAR FUNCTIONS                          */
/********************************************************************/
    
        /** World boundaries. */
    float _leftBoundary;
    float _rightBoundary;
    float _topBoundary;
    float _bottomBoundary;
    
    /** Horizontal (x) and vertical (y) offset values. */
    float _offsetX;
    float _offsetY;
    
    Rect _worldRect;
    
        // Override
    virtual CatmullRomBy *clone() const override;
    virtual CatmullRomBy *reverse() const override;
    
    StopGrid* StopGrid::create()
{
    StopGrid* action = new (std::nothrow) StopGrid();
    if (action)
    {
        action->autorelease();
        return action;
    }
    }
    
    void ActionManager::removeAllActionsByTag(int tag, Node *target)
{
    CCASSERT(tag != Action::INVALID_TAG, 'Invalid tag value!');
    CCASSERT(target != nullptr, 'target can't be nullptr!');
    if (target == nullptr)
    {
        return;
    }
    
    tHashElement *element = nullptr;
    HASH_FIND_PTR(_targets, &target, element);
    
    if (element)
    {
        auto limit = element->actions->num;
        for (int i = 0; i < limit;)
        {
            Action *action = static_cast<Action*>(element->actions->arr[i]);
    }
    }
    }
    
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
    
        
    /** Gets the duration in seconds of the whole animation. It is the result of totalDelayUnits * delayPerUnit.
     *
     * @return Result of totalDelayUnits * delayPerUnit.
     */
    float getDuration() const;
    
    /** Gets the array of AnimationFrames.
     * 
     * @return The array of AnimationFrames.
     */
    const Vector<AnimationFrame*>& getFrames() const { return _frames; };
    
    /** Sets the array of AnimationFrames. 
     *
     * @param frames The array of AnimationFrames.
     */
    void setFrames(const Vector<AnimationFrame*>& frames)
    {
        _frames = frames;
    }
    
    /** Checks whether to restore the original frame when animation finishes. 
     *
     * @return Restore the original frame when animation finishes.
     */
    bool getRestoreOriginalFrame() const { return _restoreOriginalFrame; };
    
    /** Sets whether to restore the original frame when animation finishes. 
     *
     * @param restoreOriginalFrame Whether to restore the original frame when animation finishes.
     */
    void setRestoreOriginalFrame(bool restoreOriginalFrame) { _restoreOriginalFrame = restoreOriginalFrame; };
    
    /** Gets the times the animation is going to loop. 0 means animation is not animated. 1, animation is executed one time, ... 
     *
     * @return The times the animation is going to loop.
     */
    unsigned int getLoops() const { return _loops; };
    
    /** Sets the times the animation is going to loop. 0 means animation is not animated. 1, animation is executed one time, ... 
     *
     * @param loops The times the animation is going to loop.
     */
    void setLoops(unsigned int loops) { _loops = loops; };
    
    // overrides
    virtual Animation *clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    Animation();
    virtual ~Animation(void);
    
    /** Initializes a Animation. */
    bool init();
    
    /** Initializes a Animation with frames and a delay between frames.
     * @since v0.99.5
     */
    bool initWithSpriteFrames(const Vector<SpriteFrame*>& arrayOfSpriteFrameNames, float delay = 0.0f, unsigned int loops = 1);
    
    /** Initializes a Animation with AnimationFrame.
     * @since v2.0
     */
    bool initWithAnimationFrames(const Vector<AnimationFrame*>& arrayOfAnimationFrameNames, float delayPerUnit, unsigned int loops);
    
    unsigned int AutoPolygon::getSquareValue(unsigned int x, unsigned int y, const Rect& rect, float threshold)
{
    /*
     checking the 2x2 pixel grid, assigning these values to each pixel, if not transparent
     +---+---+
     | 1 | 2 |
     +---+---+
     | 4 | 8 | <- current pixel (curx,cury)
     +---+---+
     */
    unsigned int sv = 0;
    //NOTE: due to the way we pick points from texture, rect needs to be smaller, otherwise it goes outside 1 pixel
    auto fixedRect = Rect(rect.origin, rect.size-Size(2,2));
    
    Vec2 tl = Vec2(x-1, y-1);
    sv += (fixedRect.containsPoint(tl) && getAlphaByPos(tl) > threshold)? 1 : 0;
    Vec2 tr = Vec2(x, y-1);
    sv += (fixedRect.containsPoint(tr) && getAlphaByPos(tr) > threshold)? 2 : 0;
    Vec2 bl = Vec2(x-1, y);
    sv += (fixedRect.containsPoint(bl) && getAlphaByPos(bl) > threshold)? 4 : 0;
    Vec2 br = Vec2(x, y);
    sv += (fixedRect.containsPoint(br) && getAlphaByPos(br) > threshold)? 8 : 0;
    CCASSERT(sv != 0 && sv != 15, 'square value should not be 0, or 15');
    return sv;
}