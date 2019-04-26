
        
                /**
         * Move assignment.
         * Similar to Rectangle<T>(Rectangle<T>&& rectangle).
         * @param rectangle Rectangle to be moved.
         * @return The resulting Rectangle.
         */
        Rectangle<T>& operator=(Rectangle<T>&& rectangle);
    
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
    
    
    // Constant parameters
    const auto HAND_CCN_DECREASE_FACTOR = 8.f;
    const std::string HAND_PROTOTXT{'hand/pose_deploy.prototxt'};
    const std::string HAND_TRAINED_MODEL{'hand/pose_iter_102000.caffemodel'};