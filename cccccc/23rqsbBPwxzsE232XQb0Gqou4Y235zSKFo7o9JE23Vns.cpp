
        
                // returns current per-minibatch momentum value from the provided schedule.
        double MomentumValueForMB(const MomentumSchedule& schedule, size_t minibatchSize) const;
    
        private:
        static Microsoft::MSR::CNTK::InputStreamDescription GetInputStreamDescription(const StreamInformation& s, const DeviceDescriptor& device)
        {
            assert(s.m_storageFormat == StorageFormat::Dense || s.m_storageFormat == StorageFormat::SparseCSC);
            auto CNTKdeviceId = AsCNTKImplDeviceId(device);
            auto CNTKMatrixType = s.m_storageFormat == StorageFormat::Dense ? Microsoft::MSR::CNTK::MatrixType::DENSE : Microsoft::MSR::CNTK::MatrixType::SPARSE;
            auto CNTKMatrixFormat = AsCNTKImplMatrixFormat(s.m_storageFormat);
            return Microsoft::MSR::CNTK::InputStreamDescription(s.m_name, CNTKdeviceId, CNTKMatrixType, CNTKMatrixFormat);
        }
    
        NDMask::NDMask(const NDShape& shape, const DeviceDescriptor& device)
        : NDMask(shape, AllocateMatrix(shape, device))
    {
        if (shape.Rank() > 2)
            LogicError('NDMask instance shaped '%S' with more than 2 axes is currently unsupported.', shape.AsString().c_str());
    }
    
            // (start, end) values in the current window to be reported.
        std::pair<double, double> m_loss;
        std::pair<double, double> m_metric;
        std::pair<size_t, size_t> m_samples;
        std::pair<size_t, size_t> m_updates;
    
    // Exception wrapper to include native call stack string
template <class E>
class ExceptionWithCallStack : public E, public IExceptionWithCallStackBase
{
public:
    ExceptionWithCallStack(const std::string& msg, const std::string& callstack) :
        E(msg), m_callStack(callstack)
    { }
    }
    
    
    {}
    
    #ifdef BOOST_REGEX_MATCH_EXTRA
   typedef typename sub_match<BidiIterator>::capture_sequence_type capture_sequence_type;
    
    #ifdef __BORLANDC__
#  pragma option pop
#endif
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
    
    template <class BidirectionalIterator,
          class charT,
          class traits>
class regex_token_iterator_implementation 
{
   typedef basic_regex<charT, traits> regex_type;
   typedef sub_match<BidirectionalIterator>      value_type;
    }
    
    extern const std::string kFeatureVectorsRootKey;
    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
    namespace osquery {
    }
    
      update['awesome'] = R'raw({
    'options': {
      'custom_nested_json': 
        {'foo':1,'bar':'baz'}
    }
  })raw';
  auto s = c.update(update);
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    
    
    {  if (isPlatform(PlatformType::TYPE_WINDOWS)) {
    EXPECT_FALSE(fpack.checkPlatform());
  }
}
    
      constraint = Constraint(EQUALS);
  constraint.expr = 'some_other';
  cl.add(constraint);
    
    namespace osquery {
    }
    
    void INotifyEventPublisher::handleOverflow() {
  if (inotify_events_ < kINotifyMaxEvents) {
    VLOG(1) << 'inotify was overflown: increasing scratch buffer';
    // Exponential increment.
    inotify_events_ = inotify_events_ * 2;
  } else if (last_overflow_ != -1 && getUnixTime() - last_overflow_ < 60) {
    return;
  } else {
    VLOG(1) << 'inotify was overflown';
    last_overflow_ = getUnixTime();
  }
}
    
    /**
 * @brief Event details for INotifyEventPublisher events.
 */
struct INotifyEventContext : public EventContext {
  /// The inotify_event structure if the EventSubscriber want to interact.
  std::unique_ptr<struct inotify_event> event{nullptr};
    }
    
    //
// Follow
//
Follow::~Follow()
{
    CC_SAFE_RELEASE(_followedNode);
}
    
        /** If screen size is bigger than the boundary - update not needed. */
    bool _boundaryFullyCovered;
    
    #include '2d/CCActionInterval.h'
#include 'math/CCMath.h'
    
    void StopGrid::startWithTarget(Node *target)
{
    ActionInstant::startWithTarget(target);
    cacheTargetAsGridNode();
    GridBase *grid = _gridNodeTarget->getGrid();
    if (grid && grid->isActive())
    {
        grid->setActive(false);
    }
}
    
    void FlipY3D::update(float time)
{
    float angle = (float)M_PI * time; // 180 degrees
    float mz = sinf( angle );
    angle = angle / 2.0f;     // x calculates degrees from 0 to 90
    float my = cosf(angle);
    
    Vec3    v0, v1, v, diff;
    
    v0 = getOriginalVertex(Vec2(1.0f, 1.0f));
    v1 = getOriginalVertex(Vec2());
    
    float    y0 = v0.y;
    float    y1 = v1.y;
    float y;
    Vec2    a, b, c, d;
    
    if (y0 > y1)
    {
        // Normal Grid
        a.setZero();
        b.set(0.0f, 1.0f);
        c.set(1.0f, 0.0f);
        d.set(1.0f, 1.0f);
        y = y0;
    }
    else
    {
        // Reversed Grid
        b.setZero();
        a.set(0.0f, 1.0f);
        d.set(1.0f, 0.0f);
        c.set(1.0f, 1.0f);
        y = y1;
    }
    
    diff.y = y - y * my;
    diff.z = fabsf(floorf((y * mz) / 4.0f));
    
    // bottom-left
    v = getOriginalVertex(a);
    v.y = diff.y;
    v.z += diff.z;
    setVertex(a, v);
    
    // upper-left
    v = getOriginalVertex(b);
    v.y -= diff.y;
    v.z -= diff.z;
    setVertex(b, v);
    
    // bottom-right
    v = getOriginalVertex(c);
    v.y = diff.y;
    v.z += diff.z;
    setVertex(c, v);
    
    // upper-right
    v = getOriginalVertex(d);
    v.y -= diff.y;
    v.z -= diff.z;
    setVertex(d, v);
}
    
    /** @class __CCCallFuncND
 * @deprecated Please use CallFuncN instead.
 * @brief Calls a 'callback' with the node as the first argument and the 2nd argument is data.
 * ND means: Node and Data. Data is void *, so it could be anything.
 * @js NA
 */
class CC_DLL  __CCCallFuncND : public CallFunc
{
public:
    /** Creates the action with the callback and the data to pass as an argument.
     *
     * @param target    A certain target.
     * @param selector  The callback need to be executed.
     * @param d Data, is void* type.
     * @return An autoreleased __CCCallFuncND object.
     */
    CC_DEPRECATED_ATTRIBUTE static __CCCallFuncND * create(Ref* target, SEL_CallFuncND selector, void* d);
    
    //
    // Overrides
    //
    virtual __CCCallFuncND* clone() const override;
    virtual void execute() override;
    
CC_CONSTRUCTOR_ACCESS:
    __CCCallFuncND() {}
    virtual ~__CCCallFuncND() {}
    
    /** initializes the action with the callback and the data to pass as an argument */
    bool initWithTarget(Ref* target, SEL_CallFuncND selector, void* d);
    }
    
    NS_CC_BEGIN
    
      // Returns the combined score of the output image in the last Compare() call
  // (or the baseline image, if Compare() was not called yet), based on output
  // size and the similarity metric.
  virtual double ScoreOutputSize(int size) const = 0;
    
    
    {}  // namespace
    
    // Performs in-place floating point 8x8 DCT on block[0..63].
// Note that the DCT used here is the DCT-2 with the first term multiplied by
// 1/sqrt(2) and the result scaled by 1/2.
void ComputeBlockDCTDouble(double block[64]);
    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    
    {}  // namespace
    
    
    {}  // namespace guetzli
    
    // Handles the packing of bits into output bytes.
struct BitWriter {
  explicit BitWriter(size_t length) : len(length),
                                      data(new uint8_t[len]),
                                      pos(0),
                                      put_buffer(0),
                                      put_bits(64),
                                      overflow(false) {}
    }
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    // Saves the APP marker segment as a string to *jpg.
bool ProcessAPP(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  VERIFY_INPUT(marker_len, 2, 65535, MARKER_LEN);
  VERIFY_LEN(marker_len - 2);
  // Save the marker type together with the app data.
  std::string app_str(reinterpret_cast<const char*>(
      &data[*pos - 3]), marker_len + 1);
  *pos += marker_len - 2;
  jpg->app_data.push_back(app_str);
  return true;
}