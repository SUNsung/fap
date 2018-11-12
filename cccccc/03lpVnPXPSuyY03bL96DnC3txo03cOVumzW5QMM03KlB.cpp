
        
        
    {  LineNumber line;
  ColNumber col;
};
    
      static void ParseHdfFile(const std::string &filename, Hdf &hdf);
    
        if (!semi) {
      // only media type (type/subtype,data)
      ssize_t media_len = comma - data;
      meta_len -= media_len;
      data += media_len;
    } else if (slash && slash < semi) {
      // media type + param (type/subtype;param,data)
      ssize_t media_len = semi - data;
      meta_len -= media_len;
      data += media_len;
    } else {
      // no media type (;base64,data)
      if (semi != data // ex. foo;base64,data
          || meta_len != sizeof(';base64') - 1 // ex. ;something,data
          || memcmp(data, ';base64',
                    sizeof(';base64') - 1)) { // ex. ;base65,data
          raise_warning('rfc2397: invalid meta data');
          return nullptr;
        }
    }
    
    #endif // HPHP_FILE_STREAM_WRAPPER_H

    
    #ifndef HPHP_GLOB_STREAM_WRAPPER_H
#define HPHP_GLOB_STREAM_WRAPPER_H
    
    bool OrbitCamera::initWithDuration(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX)
{
    if ( ActionInterval::initWithDuration(t) )
    {
        _radius = radius;
        _deltaRadius = deltaRadius;
        _angleZ = angleZ;
        _deltaAngleZ = deltaAngleZ;
        _angleX = angleX;
        _deltaAngleX = deltaAngleX;
    }
    }
    
    CatmullRomTo* CatmullRomTo::create(float dt, PointArray *points)
{
    CatmullRomTo *ret = new (std::nothrow) CatmullRomTo();
    if (ret)
    {
        if (ret->initWithDuration(dt, points))
        {
            ret->autorelease();
        }
        else 
        {
            CC_SAFE_RELEASE_NULL(ret);
        }
    }
    }
    
        // Overrides
    virtual void startWithTarget(Node *target) override;
    virtual void updatePosition(const Vec2 &newPos) override;
    virtual CardinalSplineBy *clone() const override;
    virtual CardinalSplineBy* reverse() const override;
    
    bool ActionEase::initWithAction(ActionInterval *action)
{
    CCASSERT(action != nullptr, 'action couldn't be nullptr!');
    if (action == nullptr)
    {
        return false;
    }
    }
    
    void CallFunc::update(float time)
{
    ActionInstant::update(time);
    this->execute();
}
    
        /** 
     * initializes the action with a duration and a bezier configuration
     * @param t in seconds
     */
    bool initWithDuration(float t, const ccBezierConfig& c);
    
    NS_CC_END

    
    ActionTween* ActionTween::reverse() const
{
    return ActionTween::create(_duration, _key, _to, _from);
}
    
    AnimationFrame* AnimationFrame::create(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo)
{
    auto ret = new (std::nothrow) AnimationFrame();
    if (ret && ret->initWithSpriteFrame(spriteFrame, delayUnits, userInfo))
    {
        ret->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(ret);
    }
    return ret;
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
    
      static Data data_;
  static Data data6_;
    
    void DHTReplaceNodeTask::startup() { sendMessage(); }
    
    class DHTReplaceNodeTask : public DHTAbstractTask {
private:
  std::shared_ptr<DHTBucket> bucket_;
    }
    
    void DHTResponseMessage::fillMessage(Dict* msgDict)
{
  msgDict->put(R, getResponse());
}
    
    DHTRoutingTableDeserializer::~DHTRoutingTableDeserializer() = default;
    
      std::shared_ptr<DHTNode> localNode_;
    
    DHTTaskQueueImpl::~DHTTaskQueueImpl() = default;
    
    #include 'DHTTaskQueue.h'
#include 'DHTTaskExecutor.h'
    
    #endif // D_DHT_TOKEN_UPDATE_COMMAND_H
