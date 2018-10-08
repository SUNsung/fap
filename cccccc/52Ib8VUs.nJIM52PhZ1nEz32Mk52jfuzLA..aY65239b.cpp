
        
          /// Profile the substitution map storage, for use with LLVM's FoldingSet.
  void Profile(llvm::FoldingSetNodeID &id) const {
    Profile(id, getGenericSignature(), getReplacementTypes(),
            getConformances());
  }
    
    
    {  SyntaxMap[FromNode] = ToNode;
}
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
      bool UnsupportedOS = false;
    
    
    {  memcpy(Value, &uuid, Size);
#else
  uuid_generate_random(Value);
#endif
}
    
    // HACK: Allow support for many newer emoji by overriding behavior of ZWJ and
// emoji modifiers. This does not make the breaks correct for any version of
// Unicode, but shifts the ways in which it is incorrect to be less harmful.
//
// TODO: Remove this hack and reevaluate whether we should have any static
// notion of what a grapheme is.
//
// Returns true if lhs and rhs shouldn't be considered as having a grapheme
// break between them. That is, whether we're overriding the behavior of the
// hard coded Unicode 8 rules surrounding ZWJ and emoji modifiers.
static inline bool graphemeBreakOverride(llvm::UTF32 lhs, llvm::UTF32 rhs) {
  return lhs == 0x200D || (rhs >= 0x1F3FB && rhs <= 0x1F3FF);
}
    
    #define CLASS_INFO(m_type)                                    \
	(GetTypeInfo<m_type *>::VARIANT_TYPE != Variant::NIL ?    \
					GetTypeInfo<m_type *>::get_class_info() : \
					GetTypeInfo<m_type>::get_class_info())
    
    /**
	@author AndreaCatania
*/
    
    	{
		MethodInfo mi;
		mi.name = 'call_func';
		Vector<Variant> defargs;
		ClassDB::bind_vararg_method(METHOD_FLAGS_DEFAULT, 'call_func', &FuncRef::call_func, mi, defargs);
	}
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    
    {  if (sc_time != file_dir_stat.st_ctime) {
    if ((rc = addMonitor(path, isc, isc->mask, isc->recursive, add_watch))) {
      isc->path_sc_time_[path] = file_dir_stat.st_ctime;
    }
  }
  return rc;
}
    
      /// Create an `inotify` handle descriptor.
  Status setUp() override;
    
      // Make sure set up incremented the test value.
  EXPECT_EQ(pub->getTestValue(), 1);
    
    int main(int argc, char* argv[]) {
  osquery::Initializer runner(argc, argv, ToolType::EXTENSION);
    }
    
    /** @class Follow
 * @brief Follow is an action that 'follows' a node.
 * Eg:
 * @code
 * layer->runAction(Follow::create(hero));
 * @endcode
 * Instead of using Camera as a 'follower', use this action instead.
 * @since v0.99.2
 */
class CC_DLL Follow : public Action
{
public:
    /**
     * Creates the action with a set boundary or with no boundary.
     *
     * @param followedNode  The node to be followed.
     * @param rect  The boundary. If \p rect is equal to Rect::ZERO, it'll work
     *              with no boundary.
    */
    
    static Follow* create(Node *followedNode, const Rect& rect = Rect::ZERO);
    
    /**
     * Creates the action with a set boundary or with no boundary with offsets.
     *
     * @param followedNode  The node to be followed.
     * @param rect  The boundary. If \p rect is equal to Rect::ZERO, it'll work
     *              with no boundary.
     * @param xOffset The horizontal offset from the center of the screen from which the
     *               node  is to be followed.It can be positive,negative or zero.If
     *               set to zero the node will be horizontally centered followed.
     *  @param yOffset The vertical offset from the center of the screen from which the
     *                 node is to be followed.It can be positive,negative or zero.
     *                 If set to zero the node will be vertically centered followed.
     *   If both xOffset and yOffset are set to zero,then the node will be horizontally and vertically centered followed.
     */
    }
    
    void ActionEase::stop(void)
{
    if (_inner)
        _inner->stop();
    
    ActionInterval::stop();
}
    
    void GridAction::startWithTarget(Node *target)
{
    ActionInterval::startWithTarget(target);
    cacheTargetAsGridNode();
    }
    
    bool RotateTo::initWithDuration(float duration, float dstAngleX, float dstAngleY)
{
    if (ActionInterval::initWithDuration(duration))
    {
        _dstAngle.x = dstAngleX;
        _dstAngle.y = dstAngleY;
        
        return true;
    }
    
    return false;
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    /**
@brief ShatteredTiles3D action.
@details This action make the target node shattered with many tiles.
        You can create the action by these parameters:
        duration, grid size, range, whether shatter on the z axis.
*/
class CC_DLL ShatteredTiles3D : public TiledGrid3DAction
{
public:
    /** 
     * @brief Create the action with a range, whether of not to shatter Z vertices, grid size and duration.
     * @param duration Specify the duration of the ShatteredTiles3D action. It's a value in seconds.
     * @param gridSize Specify the size of the grid.
     * @param range Specify the range of the shatter effect.
     * @param shatterZ Specify whether shatter on the z axis.
     * @return If the creation success, return a pointer of ShatteredTiles3D action; otherwise, return nil.
     */
    static ShatteredTiles3D* create(float duration, const Size& gridSize, int range, bool shatterZ);
    }
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
            if ( frameNames.empty() )
        {
            CCLOG('cocos2d: AnimationCache: Animation '%s' found in dictionary without any frames - cannot add to animation cache.', anim.first.c_str());
            continue;
        }
    
    
class Animation;
    
    TEST(EsdCanClientTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::ESD_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    // buf size must be 8 bytes, every time, we receive only one frame
ErrorCode SocketCanClientRaw::Receive(std::vector<CanFrame> *const frames,
                                      int32_t *const frame_num) {
  if (!is_started_) {
    AERROR << 'Nvidia can client is not init! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
  }
    }
    
      /**
   * @brief Stop the ESD CAN client.
   */
  void Stop() override;
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    uint8_t Byte::get_byte_low_4_bits() const { return get_byte(0, 4); }
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    /**
 * @file
 */
    
    // System gflags
DEFINE_string(node_name, 'chassis', 'The chassis module name in proto');
DEFINE_string(canbus_driver_name, 'canbus', 'Driver name.');
    
    #include 'gflags/gflags.h'