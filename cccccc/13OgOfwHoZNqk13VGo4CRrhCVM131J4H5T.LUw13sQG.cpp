
        
        #include <grpc/support/port_platform.h>
    
    namespace grpc {
    }
    
      Status GetFileContainingExtension(
      ServerContext* context,
      const reflection::v1alpha::ExtensionRequest* request,
      reflection::v1alpha::ServerReflectionResponse* response);
    
    
    {}  // namespace grpc
    
    #include <grpc/impl/codegen/port_platform.h>
    
    
    {
    {}  // namespace load_reporter
}  // namespace grpc
    
    #include <grpc/impl/codegen/port_platform.h>
    
      PinnableSlice pinnable_val;
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key1', &pinnable_val);
  assert(s.IsNotFound());
  // Reset PinnableSlice after each use and before each reuse
  pinnable_val.Reset();
  db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
  assert(pinnable_val == 'value');
  pinnable_val.Reset();
  // The Slice pointed by pinnable_val is not valid after this point
    
    #include 'rocksdb/db.h'
#include 'rocksdb/status.h'
    
    namespace rocksdb {
namespace lua {
class LuaStateWrapper {
 public:
  explicit LuaStateWrapper(const std::string& lua_script) {
    lua_state_ = luaL_newstate();
    Init(lua_script, {});
  }
  LuaStateWrapper(
      const std::string& lua_script,
      const std::vector<std::shared_ptr<RocksLuaCustomLibrary>>& libraries) {
    lua_state_ = luaL_newstate();
    Init(lua_script, libraries);
  }
  lua_State* GetLuaState() const { return lua_state_; }
  ~LuaStateWrapper() { lua_close(lua_state_); }
    }
    }
    }
    
    
    { protected:
  // To Create an OptimisticTransactionDB, call Open()
  explicit OptimisticTransactionDB(DB* db) : StackableDB(db) {}
};
    
    #include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    bool RadarState201::send_quality(const std::uint8_t* bytes,
                                 int32_t length) const {
  Byte t0(bytes + 5);
  uint32_t x = t0.get_byte(4, 1);
    }
    
    unsigned int BaseMapMatrix::LoadBinary(unsigned char* buf) { return 0; }
    
      std::vector<uint32_t> index_list;
  std::vector<double> pos_list;
  for (int i = 0; i < 8; i += 2) {
    index_list.push_back(i);
    pos_list.push_back(i * 2);
  }
    
      std::vector<double> x_pow(2 * num_params + 1, 1.0);
  for (uint32_t i = 1; i < 2 * num_params + 1; ++i) {
    x_pow[i] = x_pow[i - 1] * x;
  }
    
      Byte t1(bytes + 3);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    Brakemotorrpt372::Brakemotorrpt372() {}
const int32_t Brakemotorrpt372::ID = 0x72;
    
    // config detail: {'name': 'str_can_timeout', 'offset': 0.0, 'precision': 1.0,
// 'len': 1, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 3,
// 'type': 'bool', 'order': 'motorola', 'physical_unit': ''}
bool Globalrpt6a::str_can_timeout(const std::uint8_t* bytes,
                                  int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(3, 1);
    }
    
    
    {
    {
    {
    {  Headlight_rpt_77::Commanded_valueType ret =
      static_cast<Headlight_rpt_77::Commanded_valueType>(x);
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    
    {
    {
    {
    {  Horn_rpt_79::Manual_inputType ret =
      static_cast<Horn_rpt_79::Manual_inputType>(x);
  return ret;
}
}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    ActionCamera* ActionCamera::clone() const
{
    auto action = new (std::nothrow) ActionCamera();
    if (action)
    {
        action->autorelease();
        return action;
    }
    
    delete action;
    return nullptr;
}
    
    /** @class OrbitCamera
 *
 * @brief OrbitCamera action.
 * Orbits the camera around the center of the screen using spherical coordinates.
 * @ingroup Actions
 */
class CC_DLL OrbitCamera : public ActionCamera
{
public:
    /** Creates a OrbitCamera action with radius, delta-radius,  z, deltaZ, x, deltaX. 
     *
     * @param t Duration in seconds.
     * @param radius The start radius.
     * @param deltaRadius The delta radius.
     * @param angleZ The start angle in Z.
     * @param deltaAngleZ The delta angle in Z.
     * @param angleX The start angle in X.
     * @param deltaAngleX The delta angle in X.
     * @return An OrbitCamera.
     */
    static OrbitCamera* create(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX);
    
    /** Positions the camera according to spherical coordinates. 
     *
     * @param r The spherical radius.
     * @param zenith The spherical zenith.
     * @param azimuth The spherical azimuth.
     */
    void sphericalRadius(float *r, float *zenith, float *azimuth);
    }
    
    
    {    // bottom-left
    v = getOriginalVertex(a);
    v.x = diff.x;
    v.z += diff.z;
    setVertex(a, v);
    
    // upper-left
    v = getOriginalVertex(b);
    v.x = diff.x;
    v.z += diff.z;
    setVertex(b, v);
    
    // bottom-right
    v = getOriginalVertex(c);
    v.x -= diff.x;
    v.z -= diff.z;
    setVertex(c, v);
    
    // upper-right
    v = getOriginalVertex(d);
    v.x -= diff.x;
    v.z -= diff.z;
    setVertex(d, v);
}
    
    void FlipY::update(float time)
{
    ActionInstant::update(time);
    static_cast<Sprite*>(_target)->setFlippedY(_flipY);
}
    
        /** init the action */
    bool initWithFlipX(bool x);
    
    void ActionManager::removeAllActionsByTag(int tag, Node *target)
{
    CCASSERT(tag != Action::INVALID_TAG, 'Invalid tag value!');
    CCASSERT(target != nullptr, 'target can't be nullptr!');
    if (target == nullptr)
    {
        return;
    }
    
    tHashElement *element = nullptr;
    HASH_FIND_PTR(_targets, &target, element);
    
    if (element)
    {
        auto limit = element->actions->num;
        for (int i = 0; i < limit;)
        {
            Action *action = static_cast<Action*>(element->actions->arr[i]);
    }
    }
    }
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPROGRESS_TIMER_H__
#define __ACTION_CCPROGRESS_TIMER_H__
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    Animation* AnimationCache::getAnimation(const std::string& name)
{
    return _animations.at(name);
}
    
    /// @endcond
#endif  // __CC_FRAMEWORK_COMPONENT_H__

    
    #include '2d/CCNode.h'
#include '2d/CCTMXObjectGroup.h'
    
        /** Unload all texture atlas texture create by special file name.
     CAUTION : All component use this font texture should be reset font name, though the file name is same!
               otherwise, it will cause program crash!
    */
    static void unloadFontAtlasTTF(const std::string& fontFileName);
    
    /// @cond DO_NOT_SHOW