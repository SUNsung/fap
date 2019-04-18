
        
        grpc::string ChannelArguments::GetSslTargetNameOverride() const {
  for (unsigned int i = 0; i < args_.size(); i++) {
    if (grpc::string(GRPC_SSL_TARGET_NAME_OVERRIDE_ARG) == args_[i].key) {
      return args_[i].value.string;
    }
  }
  return '';
}
    
    void CensusClientCallData::Destroy(grpc_call_element* elem,
                                   const grpc_call_final_info* final_info,
                                   grpc_closure* then_call_closure) {
  const uint64_t request_size = GetOutgoingDataSize(final_info);
  const uint64_t response_size = GetIncomingDataSize(final_info);
  double latency_ms = absl::ToDoubleMilliseconds(absl::Now() - start_time_);
  ::opencensus::stats::Record(
      {{RpcClientSentBytesPerRpc(), static_cast<double>(request_size)},
       {RpcClientReceivedBytesPerRpc(), static_cast<double>(response_size)},
       {RpcClientRoundtripLatency(), latency_ms},
       {RpcClientServerLatency(),
        ToDoubleMilliseconds(absl::Nanoseconds(elapsed_time_))},
       {RpcClientSentMessagesPerRpc(), sent_message_count_},
       {RpcClientReceivedMessagesPerRpc(), recv_message_count_}},
      {{ClientMethodTagKey(), method_},
       {ClientStatusTagKey(), StatusCodeToString(final_info->final_status)}});
  grpc_slice_unref_internal(path_);
  context_.EndSpan();
}
    
    #include <grpc/support/port_platform.h>
    
    MeasureInt64 RpcClientSentMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientSentMessagesPerRpcMeasureName,
                             'Number of messages sent per RPC', kCount);
  return measure;
}
    
    Status ProtoServerReflection::GetFileContainingSymbol(
    ServerContext* context, const grpc::string& symbol,
    ServerReflectionResponse* response) {
  if (descriptor_pool_ == nullptr) {
    return Status::CANCELLED;
  }
    }
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, const grpc::string& value) {
  class StringOption final : public ServerBuilderOption {
   public:
    StringOption(const grpc::string& name, const grpc::string& value)
        : name_(name), value_(value) {}
    }
    }
    
    #endif  // !GRPC_CUSTOM_DEFAULT_THREAD_POOL

    
    
    {}  // namespace
    
    ThreadPoolInterface* CreateDefaultThreadPool();
    
    bool __CCCallFuncO::initWithTarget(Ref* selectorTarget, SEL_CallFuncO selector, Ref* object)
{
    if (CallFunc::initWithTarget(selectorTarget))
    {
        _object = object;
        CC_SAFE_RETAIN(_object);
        
        _callFuncO = selector;
        return true;
    }
    
    return false;
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