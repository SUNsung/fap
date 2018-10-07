
        
          const char* argv[] = {'protoc', proto_path.c_str(),
                        plugin_specific_args.c_str(), capture_out.c_str(),
                        filename.c_str()};
    
    // Author: kenton@google.com (Kenton Varda)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
    
    TEST(MovableMessageTest, Noexcept) {
  EXPECT_TRUE(
      std::is_nothrow_move_constructible<protobuf_unittest::TestAllTypes>());
  EXPECT_TRUE(std::is_nothrow_move_assignable<protobuf_unittest::TestAllTypes>());
}
    
    // Functions to create C# XML documentation comments.
// Currently this only includes documentation comments containing text specified as comments
// in the .proto file; documentation comments generated just from field/message/enum/proto names
// is inlined in the relevant code. If more control is required, that code can be moved here.
    
    #include <google/protobuf/compiler/csharp/csharp_doc_comment.h>
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    void ReflectionClassGenerator::Generate(io::Printer* printer) {
  WriteIntroduction(printer);
    }
    
    // Get the name of an enum's Java class without package name prefix.
string ClassNameWithoutPackage(const EnumDescriptor* descriptor,
                               bool immutable) {
  // Doesn't append 'Mutable' for enum type's name.
  const Descriptor* message_descriptor = descriptor->containing_type();
  if (message_descriptor == NULL) {
    return descriptor->name();
  } else {
    return ClassNameWithoutPackage(message_descriptor, immutable) +
           '.' + descriptor->name();
  }
}
    
    #include <string>
#include <set>
#include <vector>
#include <google/protobuf/descriptor.h>
    
    #include <sstream>
    
    #include <memory>
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusClientCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusClientCallData : public CallData {
 public:
  // Maximum size of trace context is sent on the wire.
  static constexpr uint32_t kMaxTraceContextLen = 64;
  // Maximum size of tags that are sent on the wire.
  static constexpr uint32_t kMaxTagsLen = 2048;
    }
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusServerCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusServerCallData : public CallData {
 public:
  // Maximum size of server stats that are sent on the wire.
  static constexpr uint32_t kMaxServerStatsLen = 16;
    }
    
    const ViewDescriptor& ServerSentMessagesPerRpcMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/server/sent_messages_per_rpc/minute')
          .set_measure(kRpcServerSentMessagesPerRpcMeasureName)
          .set_aggregation(CountDistributionAggregation())
          .add_column(ServerMethodTagKey());
  return descriptor;
}
    
    #endif  // GRPC_INTERNAL_CPP_EXT_PROTO_SERVER_REFLECTION_H

    
    
    {}  // namespace grpc
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    #ifndef HPHP_DATA_STREAM_WRAPPER_H
#define HPHP_DATA_STREAM_WRAPPER_H
    
    struct ExecutionProfiler {
  ExecutionProfiler(ThreadInfo *info, bool builtin) : m_info(info) {
    m_executing = m_info->m_executing;
    m_info->m_executing =
      builtin ? ThreadInfo::ExtensionFunctions : ThreadInfo::UserFunctions;
  }
  explicit ExecutionProfiler(ThreadInfo::Executing executing) {
    m_info = ThreadInfo::s_threadInfo.getNoCheck();
    m_executing = m_info->m_executing;
    m_info->m_executing = executing;
  }
  ~ExecutionProfiler() {
    m_info->m_executing = m_executing;
  }
private:
  ThreadInfo *m_info;
  ThreadInfo::Executing m_executing;
};
    
      // delete the ones to delete
  if (!todelete.empty()) {
    for (std::set<string>::const_iterator iter = todelete.begin();
         iter != todelete.end(); ++iter) {
      Logger::Info('sync: deleting %s', iter->c_str());
      fs::remove_all(*iter);
    }
  }
    
                // TODO: make this a runtime parameter.
#if DUMPOUTPUT
            LOGPRINTF(stderr, 'Update_%ls\n', parameter.Uid().c_str());
#endif
    
                trainingLoss = MakeSharedObject<NDArrayView>(0, (m_aggregatedLossFunction ? m_aggregatedLossFunction->Output().GetDataType() : DataType::Float), NDShape{}, computeDevice);
            evalCriterion = MakeSharedObject<NDArrayView>(0, (m_aggregatedEvaluationFunction ? m_aggregatedEvaluationFunction->Output().GetDataType() : DataType::Float), NDShape{}, computeDevice);
        }
        else
        {
            // Get gradients after forward/backward pass.
            std::unordered_map<Variable, ValuePtr> parameterGradients;
    
    
    {
    {                m_dataFields->m_valueInitializer = nullptr;
                m_dataFields->m_valueInitializationDevice = nullptr;
            });
        }
    
            std::wstring AsString() const;
        std::shared_ptr<VariableFields> Clone() const;
        FunctionPtr Owner() const;
    
    CatmullRomTo* CatmullRomTo::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CatmullRomTo();
    a->initWithDuration(this->_duration, this->_points->clone());
    a->autorelease();
    return a;
}
    
    /** @class CatmullRomBy
 * An action that moves the target with a CatmullRom curve by a certain distance.
 * A Catmull Rom is a Cardinal Spline with a tension of 0.5.
 * http://en.wikipedia.org/wiki/Cubic_Hermite_spline#Catmull.E2.80.93Rom_spline
 * @ingroup Actions
 */
class CC_DLL CatmullRomBy : public CardinalSplineBy
{
public:
    /** Creates an action with a Cardinal Spline array of points and tension.
     * @param dt In seconds.
     * @param points An PointArray.
     * @code
     * When this function bound to js or lua,the input params are changed.
     * In js: var create(var dt,var table).
     * In lua: local create(local dt, local table).
     * @endcode
     */
    static CatmullRomBy* create(float dt, PointArray* points);
    }
    
    
    {    return false;
}
    
    /** @class SkewBy
* @brief Skews a Node object by skewX and skewY degrees.
@since v1.0
*/
class CC_DLL SkewBy : public SkewTo
{
public:
    /** 
     * Creates the action.
     * @param t Duration time, in seconds.
     * @param deltaSkewX Skew x delta angle.
     * @param deltaSkewY Skew y delta angle.
     * @return An autoreleased SkewBy object.
     */
    static SkewBy* create(float t, float deltaSkewX, float deltaSkewY);
    }
    
    
    {
    {        ccArrayRemoveAllObjects(element->actions);
        if (_currentTarget == element)
        {
            _currentTargetSalvaged = true;
        }
        else
        {
            deleteHashElement(element);
        }
    }
}
    
    
    {    delete action;
    return nullptr;
}
    
        //
    // Overrides
    //
    virtual ProgressFromTo* clone() const override;
    virtual ProgressFromTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressFromTo() {}
    virtual ~ProgressFromTo() {}
    
    void SplitRows::startWithTarget(Node *target)
{
    TiledGrid3DAction::startWithTarget(target);
    _winSize = Director::getInstance()->getWinSizeInPixels();
}
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
            Then once you running ActionTween on the node, the method updateTweenAction will be invoked.
*/
class CC_DLL ActionTweenDelegate
{
public:
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ActionTweenDelegate() {}
    }
    
    void AtlasNode::setTexture(Texture2D *texture)
{
    _textureAtlas->setTexture(texture);
    this->updateBlendFunc();
    this->updateOpacityModifyRGB();
}
    
    #include <folly/Executor.h>
#include <folly/portability/GTest.h>
    
      FunctionRef<int(int, std::vector<int> const&)> variant6 = of;
  EXPECT_EQ(100 + 6 * 20, variant6(20, {}));
  EXPECT_EQ(100 + 6 * 20, variant6(20, {1, 2, 3}));
  FunctionRef<int(int, std::vector<int> const&)> const cvariant6 = of;
  EXPECT_EQ(100 + 6 * 20, cvariant6(20, {}));
  EXPECT_EQ(100 + 6 * 20, cvariant6(20, {1, 2, 3}));
    
    // Main probe Macro.
#define FOLLY_SDT_PROBE(provider, name, has_semaphore, n, arglist)             \
    __asm__ __volatile__ (                                                     \
      FOLLY_SDT_NOTE_CONTENT(                                                  \
        provider, name, has_semaphore, FOLLY_SDT_ARG_TEMPLATE_##n)             \
      :: FOLLY_SDT_OPERANDS_##n arglist                                        \
    )                                                                          \
    
    TEST(StaticTracepoint, TestAlwaysInline) {
  alwaysInlineTestFunc();
    }
    
    void Executor::addWithPriority(Func, int8_t /* priority */) {
  throw std::runtime_error(
      'addWithPriority() is not implemented for this Executor');
}
    
    // Return the state size needed by RNG, expressed as a number of uint32_t
// integers. Specialized for all templates specified in the C++11 standard.
// For some (mersenne_twister_engine), this is exported as a state_size static
// data member; for others, the standard shows formulas.
    
    // Some utility routines relating to unicode.
    
    using UriTuple = std::tuple<
    const std::string&,
    const std::string&,
    const std::string&,
    const std::string&,
    uint16_t,
    const std::string&,
    const std::string&,
    const std::string&>;