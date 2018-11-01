
        
        
    {  static string LayerTypeListString() {
    vector<string> layer_types = LayerTypeList();
    string layer_types_str;
    for (vector<string>::iterator iter = layer_types.begin();
         iter != layer_types.end(); ++iter) {
      if (iter != layer_types.begin()) {
        layer_types_str += ', ';
      }
      layer_types_str += *iter;
    }
    return layer_types_str;
  }
};
    
     private:
  // Recursive copy function.
  void crop_copy(const vector<Blob<Dtype>*>& bottom,
               const vector<Blob<Dtype>*>& top,
               const int* offsets,
               vector<int> indices,
               int cur_dim,
               const Dtype* src_data,
               Dtype* dest_data,
               bool is_forward);
    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
    bool IsUserOnly(std::wstring opt)
{
	bool userOnly;
    }
    
            std::unordered_map<Parameter, NDArrayViewPtr> m_smoothedGradientValues;
    
        void NDMask::MarkSectionAs(const std::vector<size_t>& sectionOffset, const NDShape& sectionShape, MaskKind maskKind)
    {
        // TODO: Implement batching of masking operation for masks residing on GPUs to avoid making
        // GPU invocations for each MaskSection call.
    }
    
        void ProgressWriter::UpdateTraining(size_t samples, const ValuePtr& accumulatedLoss,
                                        const ValuePtr& accumulatedMetric)
    {
        m_training->Update(samples, accumulatedLoss, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> aggregateLoss, std::pair<double, double> aggregateMetric)
            {
                OnWriteTrainingUpdate(samples, updates, aggregateLoss, aggregateMetric);
            });
        OnTrainingUpdateEnd();
    }
    
        template <typename T> 
    inline std::string GetVersionsString(size_t currentVersion, size_t dictVersion)
    {
        std::stringstream info;
        info << 'Current ' << Typename<T>() << ' version = ' << currentVersion 
             << ', Dictionary version = ' << dictVersion;
        return info.str();
    }
    
        // now pass that to concurrent reader so we can read ahead
    // m_DataReader = new ConcurrentReader<ElemType>(m_DataReader);
    // NOW we can init
    // TODO: merge with the code above, but we first need to get the nbrUttPerMinibatch initialized inside each reader
    for (const auto& ioName : m_ioNames)
    {
        const ConfigRecordType& thisIO = hasMultipleReaders ? config(ioName) : config /*legacy*/;
        m_dataReaders[ioName]->Init(thisIO);
    }
    
    // -----------------------------------------------------------------------
// DynamicAxisNode (/*no input*/)
// This is a holder for MBLayout objects shared across inputs.
// -----------------------------------------------------------------------
template <class ElemType>
class DynamicAxisNode : public ComputationNode<ElemType>, public NumInputs<0>
{
    typedef ComputationNode<ElemType> Base; UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName() { return L'DynamicAxis'; }
public:
    DynamicAxisNode(DEVICEID_TYPE deviceId, const wstring& name)
        : Base(deviceId, name)
    {
        // BUGBUG: In BS, the node name is not known during node instantiation.
        // This may require to pass the display name as a separate parameter.
    }
    }
    
        Size winSize = Director::getInstance()->getWinSize();
    _fullScreenSize.set(winSize.width, winSize.height);
    _halfScreenSize = _fullScreenSize * 0.5f;
    _offsetX=xOffset;
    _offsetY=yOffset;
    _halfScreenSize.x += _offsetX;
    _halfScreenSize.y += _offsetY;
    
    if (_boundarySet)
    {
        _leftBoundary = -((rect.origin.x+rect.size.width) - _fullScreenSize.x);
        _rightBoundary = -rect.origin.x ;
        _topBoundary = -rect.origin.y;
        _bottomBoundary = -((rect.origin.y+rect.size.height) - _fullScreenSize.y);
    }
    
    /** @class CatmullRomTo
 * An action that moves the target with a CatmullRom curve to a destination point.
 * A Catmull Rom is a Cardinal Spline with a tension of 0.5.
 * http://en.wikipedia.org/wiki/Cubic_Hermite_spline#Catmull.E2.80.93Rom_spline
 * @ingroup Actions
 */
class CC_DLL CatmullRomTo : public CardinalSplineTo
{
public:
    }
    
    
bool TargetedAction::initWithTarget(Node* target, FiniteTimeAction* action)
{
    if(ActionInterval::initWithDuration(action->getDuration()))
    {
        CC_SAFE_RETAIN(target);
        _forcedTarget = target;
        CC_SAFE_RETAIN(action);
        _action = action;
        return true;
    }
    return false;
}
    
    void ActionManager::addAction(Action *action, Node *target, bool paused)
{
    CCASSERT(action != nullptr, 'action can't be nullptr!');
    CCASSERT(target != nullptr, 'target can't be nullptr!');
    if(action == nullptr || target == nullptr)
        return;
    }
    
    /**
@brief FadeOutBLTiles action.
@details Fades out the target node with many tiles from Top-Right to Bottom-Left.
 */
class CC_DLL FadeOutBLTiles : public FadeOutTRTiles
{
public:
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the FadeOutBLTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @return If the creation success, return a pointer of FadeOutBLTiles action; otherwise, return nil.
    */
    static FadeOutBLTiles* create(float duration, const Size& gridSize);
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    
    {    return s_sharedAnimationCache;
}
    
    AtlasNode * AtlasNode::create(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender)
{
    AtlasNode * ret = new (std::nothrow) AtlasNode();
    if (ret->initWithTileFile(tile, tileWidth, tileHeight, itemsToRender))
    {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    
    {  size_t len;
  std::unique_ptr<uint8_t[]> data;
  size_t pos;
  uint64_t put_buffer;
  int put_bits;
  bool overflow;
};
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);