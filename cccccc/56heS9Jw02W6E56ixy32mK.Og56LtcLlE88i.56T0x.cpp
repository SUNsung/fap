
        
        CallCredentials::CallCredentials() { g_gli_initializer.summon(); }
    
    namespace grpc {
    }
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
      void Destroy(grpc_call_element* elem, const grpc_call_final_info* final_info,
               grpc_closure* then_call_closure) override;
    
    namespace grpc {
    }
    
    
    {
    {                // Reset the window.
                m_loss.first = m_loss.second;
                m_metric.first = m_metric.second;
                m_samples.first = m_samples.second;
                m_updates.first = m_updates.second;
            }
        }
    
    namespace CNTK
{
    class UDFUtils
    {
    public:
    }
    }
    
    
    {        return MakeSharedObject<Value>(deviceValueData, deviceValueMask);
    }
    
            bool IsPacked() const { return m_isPacked; }
    
        typedef unsigned int INDEXTYPE; // don't use size_t, as this saves HUGE amounts of RAM
    std::vector<INDEXTYPE> map;     // [t] -> t' indices in randomized order
    size_t currentseed;             // seed for current sequence
    size_t randomizationrange;      // t - randomizationrange/2 <= t' < t + randomizationrange/2 (we support this to enable swapping)
                                    // special values (randomizeDisable)
    void Invalidate()
    {
        currentseed = (size_t) -1;
    }
    
            FrameRange frameRange(Input(0)->GetMBLayout());
        Input(0)->ValueFor(frameRange).VectorMax(*m_maxIndexes0, *m_maxValues, true);
        Input(1)->ValueFor(frameRange).VectorMax(*m_maxIndexes1, *m_maxValues, true);
    
    
    {    return Vec2(x,y);
}
    
    
    {    return false;
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    @since v0.99.5
@js cc.animationCache
*/
class CC_DLL AnimationCache : public Ref
{
public:
    /**
     * @js ctor
     */
    AnimationCache();
    /**
     * @js NA
     * @lua NA
     */
    ~AnimationCache();
    /** Returns the shared instance of the Animation cache 
	 @js NA
	*/
    static AnimationCache* getInstance();
    }
    
        /** Width of each char. */
    int    _itemWidth;
    /** Height of each char. */
    int    _itemHeight;
    
    Color3B    _colorUnmodified;
    
    TextureAtlas* _textureAtlas;
    /** Protocol variables. */
    bool _isOpacityModifyRGB;
    BlendFunc _blendFunc;
    
    PolygonInfo AutoPolygon::generatePolygon(const std::string& filename, const Rect& rect, float epsilon, float threshold)
{
    AutoPolygon ap(filename);
    return ap.generateTriangles(rect, epsilon, threshold);
}
