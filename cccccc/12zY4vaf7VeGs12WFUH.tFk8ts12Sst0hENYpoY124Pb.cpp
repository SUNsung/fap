
        
        #else  // !defined(__SSE4_1__)
// Non-Android code here
    
    // Computes a reshaped copy of the weight matrix w. If there are no
// partial_funcs_, it does nothing.
void IntSimdMatrix::Init(const GENERIC_2D_ARRAY<int8_t>& w) {
  if (partial_funcs_.empty()) return;
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  // The rounded-up sizes of the reshaped weight matrix, excluding biases.
  int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
  int rounded_num_out = RoundOutputs(num_out);
  // Add the bias and compute the required size.
  shaped_w_.resize((rounded_num_in + 1) * rounded_num_out, 0);
  int shaped_index = 0;
  int output = 0;
  // Each number of registers needs a different format! Iterates over the
  // different numbers of registers (each a power of 2).
  for (int num_registers = max_output_registers_; num_registers >= 1;
       num_registers /= 2) {
    // The number of outputs that we will generate with this many registers.
    int num_outputs_per_register_set =
        num_registers * num_outputs_per_register_;
    // Use the max number of registers until we have to go fewer.
    while (output + num_outputs_per_register_set <= rounded_num_out) {
      // Accumulating outputs in registers saves iterating over the inputs, so
      // we only have to do it once per output register set.
      for (int input = 0; input < num_in; input += num_inputs_per_group_) {
        // Iterate over the number of outputs in a register set.
        for (int j = 0; j < num_outputs_per_register_set; ++j) {
          // Inner-most loop corresponds to the number of inputs in an input
          // group.
          for (int i = 0; i < num_inputs_per_group_; ++i) {
            int8_t weight = 0;
            if (output + j < num_out && input + i < num_in)
              weight = w(output + j, input + i);
            shaped_w_[shaped_index++] = weight;
          }
        }
      }
      // Append the bias weights for the register set.
      for (int j = 0; j < num_outputs_per_register_set; ++j) {
        int8_t weight = 0;
        if (output + j < num_out) weight = w(output + j, num_in);
        shaped_w_[shaped_index++] = weight;
      }
      output += num_outputs_per_register_set;
    }
  }
}
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    ELISTIZE(ParamContent)
    
      // Constructors for the various ParamTypes.
  ParamContent() = default;
  explicit ParamContent(tesseract::StringParam* it);
  explicit ParamContent(tesseract::IntParam* it);
  explicit ParamContent(tesseract::BoolParam* it);
  explicit ParamContent(tesseract::DoubleParam* it);
    
      const UNICHARSET &unicharset = *word->uch_set;
  word->ClearResults();
  word2->ClearResults();
  word->chopped_word = chopped;
  word2->chopped_word = chopped2;
  word->SetupBasicsFromChoppedWord(unicharset);
  word2->SetupBasicsFromChoppedWord(unicharset);
    
    // Deserializing an array could give back a different ArrayKind than we need,
// so we have to go with the slow case of calling a collection constructor.
NEVER_INLINE
Object createFromSerialized(CollectionType colType, APCHandle* handle) {
  auto const col = Object::attach(collections::alloc(colType));
  auto const arr = handle->toLocal();
  switch (colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    static_cast<BaseVector*>(col.get())->init(arr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    static_cast<BaseSet*>(col.get())->init(arr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    static_cast<BaseMap*>(col.get())->init(arr);
    break;
  case CollectionType::Pair:
    not_reached();
    break;
  }
  return col;
}
    
    #ifndef HPHP_DATA_STREAM_WRAPPER_H
#define HPHP_DATA_STREAM_WRAPPER_H
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    {}
    
    
    {  while (1) {
    char buf[8192];
    bool err = false;
    ssize_t rbytes = read(srcFd, buf, sizeof(buf));
    ssize_t wbytes;
    if (rbytes == 0) break;
    if (rbytes == -1) {
      err = true;
      Logger::Error('read failed: %s', folly::errnoStr(errno).c_str());
    } else if ((wbytes = write(dstFd, buf, rbytes)) != rbytes) {
      err = true;
      Logger::Error('write failed: %zd, %s', wbytes,
                    folly::errnoStr(errno).c_str());
    }
    if (err) {
      close(srcFd);
      close(dstFd);
      return -1;
    }
  }
  close(srcFd);
  close(dstFd);
  return 0;
}
    
        private:
        static Microsoft::MSR::CNTK::InputStreamDescription GetInputStreamDescription(const StreamInformation& s, const DeviceDescriptor& device)
        {
            assert(s.m_storageFormat == StorageFormat::Dense || s.m_storageFormat == StorageFormat::SparseCSC);
            auto CNTKdeviceId = AsCNTKImplDeviceId(device);
            auto CNTKMatrixType = s.m_storageFormat == StorageFormat::Dense ? Microsoft::MSR::CNTK::MatrixType::DENSE : Microsoft::MSR::CNTK::MatrixType::SPARSE;
            auto CNTKMatrixFormat = AsCNTKImplMatrixFormat(s.m_storageFormat);
            return Microsoft::MSR::CNTK::InputStreamDescription(s.m_name, CNTKdeviceId, CNTKMatrixType, CNTKMatrixFormat);
        }
    
    
    {
    {    private:
        // Disallow copy and move construction and assignment
        VariableFields(const VariableFields&) = delete; VariableFields& operator=(const VariableFields& other) = delete; VariableFields(VariableFields&&) = delete; VariableFields& operator=(VariableFields&&) = delete;
    };
}

    
    #include 'stdafx.h'
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
    
    class Timer
{
public:
    Timer()
        : m_start(0), m_end(0)
    {
    }
    }
    
    public:
    DeclareConstructorFromConfigWithNumInputs(PerDimMeanVarNormalizationNode);
    PerDimMeanVarNormalizationNode(DEVICEID_TYPE deviceId, const wstring& name)
        : Base(deviceId, name)
    {
    }
    
    
    {    /** Reverse the current control point array inline, without generating a new one.
     * @js NA
     */
    void reverseInline();
    /**
     * @js NA
     * @lua NA
     */
    virtual PointArray* clone() const;
    /**
     * @js NA
     */
    const std::vector<Vec2>& getControlPoints() const;
    /**
     * @js NA
     */
    void setControlPoints(std::vector<Vec2> controlPoints);
private:
    /** Array that contains the control points. */
    std::vector<Vec2> _controlPoints;
};
    
    // implementation of Waves
    
    /**
@brief Progress from a percentage to another percentage.
@since v0.99.1
*/
class CC_DLL ProgressFromTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes the action with a duration, a 'from' percentage and a 'to' percentage.
     * @param duration Specify the duration of the ProgressFromTo action. It's a value in seconds.
     * @param fromPercentage Specify the source percentage.
     * @param toPercentage Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressFromTo action; otherwise, return nil.
     */
    static ProgressFromTo* create(float duration, float fromPercentage, float toPercentage);
    }
    
            if ( frames.empty() )
        {
            CCLOG('cocos2d: AnimationCache: None of the frames for animation '%s' were found in the SpriteFrameCache. Animation is not being added to the Animation Cache.', anim.first.c_str());
            continue;
        }
        else if ( frames.size() != frameNameSize )
        {
            CCLOG('cocos2d: AnimationCache: An animation in your dictionary refers to a frame which is not in the SpriteFrameCache. Some or all of the frames for the animation '%s' may be missing.', anim.first.c_str());
        }
    
    public:
  DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                     const std::shared_ptr<DHTNode>& newNode);
    
      // number of nodes
  READ_CHECK(fp, &temp32, sizeof(temp32));
  uint32_t numNodes = ntohl(temp32);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
      size_t getExecutingTaskSize() const { return execTasks_.size(); }
    
    
    {} // namespace aria2

    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
    class DHTTokenTracker;
    
    
    {  static const std::string UNKNOWN;
};