
        
          void SetRecvMessage(void* message, bool* got_message) {
    recv_message_ = message;
    got_message_ = got_message;
  }
    
      Status RequestStream(ServerContext* context,
                       ServerReader<EchoRequest>* reader,
                       EchoResponse* response) override;
    
      // Sets the value of `name` variable.
  void SetValue(const char* value);
    
    #include <grpcpp/support/channel_arguments_impl.h>
    
      request.set_message('You should be dead');
  // This may succeed or fail depending on the state of the TCP connection
  stream->Write(request);
  // But the read will definitely fail
  EXPECT_FALSE(stream->Read(&response));
    
    namespace op
{
    // This worker will do 3-D rendering
    class OP_API GuiAdam : public Gui
    {
    public:
        GuiAdam(const Point<int>& outputSize, const bool fullScreen,
                const std::shared_ptr<std::atomic<bool>>& isRunningSharedPtr,
                const std::shared_ptr<std::pair<std::atomic<bool>, std::atomic<int>>>& videoSeekSharedPtr = nullptr,
                const std::vector<std::shared_ptr<PoseExtractorNet>>& poseExtractorNets = {},
                const std::vector<std::shared_ptr<FaceExtractorNet>>& faceExtractorNets = {},
                const std::vector<std::shared_ptr<HandExtractorNet>>& handExtractorNets = {},
                const std::vector<std::shared_ptr<Renderer>>& renderers = {},
                const DisplayMode displayMode = DisplayMode::DisplayAll,
                const std::shared_ptr<const TotalModel>& totalModel = nullptr,
                const std::string& adamRenderedVideoPath = '');
    }
    }
    
            Array<long long> extractIdsLockThread(const Array<float>& poseKeypoints, const cv::Mat& cvMatInput,
                                              const unsigned long long imageViewIndex,
                                              const long long frameId);
    
        public:
        PersonTracker(const bool mergeResults, const int levels = 3, const int patchSize = 31,
                      const float confidenceThreshold = 0.05f, const bool trackVelocity = false,
                      const bool scaleVarying = false, const float rescale = 640);