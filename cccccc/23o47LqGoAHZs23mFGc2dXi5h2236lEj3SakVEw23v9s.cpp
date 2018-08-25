
        
        bool Speed::initWithAction(ActionInterval *action, float speed)
{
    CCASSERT(action != nullptr, 'action must not be NULL');
    if (action == nullptr)
    {
        log('Speed::initWithAction error: action is nullptr!');
        return false;
    }
    
    action->retain();
    _innerAction = action;
    _speed = speed;
    return true;
}
    
    CC_CONSTRUCTOR_ACCESS:
    Action();
    virtual ~Action();
    
        // Overrides
    OrbitCamera *clone() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    /**
     * @js ctor
     */
    OrbitCamera();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~OrbitCamera();
    
    /** Initializes a OrbitCamera action with radius, delta-radius,  z, deltaZ, x, deltaX. */
    bool initWithDuration(float t, float radius, float deltaRadius, float angleZ, float deltaAngleZ, float angleX, float deltaAngleX);
    
    
    {    delete action;
    return nullptr;
}
    
                if (_horizontal)
            {
                v.y = (v.y + (sinf(time * (float)M_PI * _waves * 2 + v.x * .01f) * _amplitude * _amplitudeRate));
            }
    
    /** @class Spawn
 * @brief Spawn a new action immediately
 */
class CC_DLL Spawn : public ActionInterval
{
public:
    /** Helper constructor to create an array of spawned actions.
     * @code
     * When this function bound to the js or lua, the input params changed.
     * in js  :var   create(var   object1,var   object2, ...)
     * in lua :local create(local object1,local object2, ...)
     * @endcode
     *
     * @return An autoreleased Spawn object.
     */
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    // VS2013 does not support nullptr in variable args lists and variadic templates are also not supported.
    typedef FiniteTimeAction* M;
    static Spawn* create(M m1, std::nullptr_t listEnd) { return variadicCreate(m1, NULL); }
    static Spawn* create(M m1, M m2, std::nullptr_t listEnd) { return variadicCreate(m1, m2, NULL); }
    static Spawn* create(M m1, M m2, M m3, std::nullptr_t listEnd) { return variadicCreate(m1, m2, m3, NULL); }
    static Spawn* create(M m1, M m2, M m3, M m4, std::nullptr_t listEnd) { return variadicCreate(m1, m2, m3, m4, NULL); }
    static Spawn* create(M m1, M m2, M m3, M m4, M m5, std::nullptr_t listEnd) { return variadicCreate(m1, m2, m3, m4, m5, NULL); }
    static Spawn* create(M m1, M m2, M m3, M m4, M m5, M m6, std::nullptr_t listEnd) { return variadicCreate(m1, m2, m3, m4, m5, m6, NULL); }
    static Spawn* create(M m1, M m2, M m3, M m4, M m5, M m6, M m7, std::nullptr_t listEnd) { return variadicCreate(m1, m2, m3, m4, m5, m6, m7, NULL); }
    static Spawn* create(M m1, M m2, M m3, M m4, M m5, M m6, M m7, M m8, std::nullptr_t listEnd) { return variadicCreate(m1, m2, m3, m4, m5, m6, m7, m8, NULL); }
    static Spawn* create(M m1, M m2, M m3, M m4, M m5, M m6, M m7, M m8, M m9, std::nullptr_t listEnd) { return variadicCreate(m1, m2, m3, m4, m5, m6, m7, m8, m9, NULL); }
    static Spawn* create(M m1, M m2, M m3, M m4, M m5, M m6, M m7, M m8, M m9, M m10, std::nullptr_t listEnd) { return variadicCreate(m1, m2, m3, m4, m5, m6, m7, m8, m9, m10,  NULL); }
    }
    
        /** Returns the numbers of actions that are running in a certain target. 
     * Composable actions are counted as 1 action. Example:
     * - If you are running 1 Sequence of 7 actions, it will return 1.
     * - If you are running 7 Sequences of 2 actions, it will return 7.
     *
     * @param target    A certain target.
     * @return  The numbers of actions that are running in a certain target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActionsInTarget(const Node *target) const;
    
    /** Returns the numbers of actions that are running in all targets.
     * @return  The numbers of actions that are running in all target.
     * @js NA
     */
    virtual ssize_t getNumberOfRunningActions() const;
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPAGETURN3D_ACTION_H__
#define __ACTION_CCPAGETURN3D_ACTION_H__
    
    NS_CC_BEGIN
    
        void shuffle(unsigned int *array, unsigned int len);
    Size getDelta(const Size& pos) const;
    void placeTile(const Vec2& pos, Tile *t);
    
    bool Animation::initWithAnimationFrames(const Vector<AnimationFrame*>& arrayOfAnimationFrames, float delayPerUnit, unsigned int loops)
{
    _delayPerUnit = delayPerUnit;
    _loops = loops;
    }
    
    /** Singleton that manages the Animations.
It saves in a cache the animations. You should use this class if you want to save your animations in a cache.
    
    // A node of a Huffman tree.
struct HuffmanTree {
  HuffmanTree() {}
  HuffmanTree(uint32_t count, int16_t left, int16_t right)
      : total_count_(count),
        index_left_(left),
        index_right_or_value_(right) {
  }
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
};
    
    #include 'guetzli/gamma_correct.h'
    
    
    {  FILE* f = write_to_stdout ? stdout : fopen(filename, 'wb');
  if (!f) {
    perror('Can't open output file for writing');
    exit(1);
  }
  if (fwrite(contents.data(), 1, contents.size(), f) != contents.size()) {
    perror('fwrite');
    exit(1);
  }
  if (fclose(f) < 0) {
    perror('fclose');
    exit(1);
  }
}
    
    // Returns non-zero if and only if x has a zero byte, i.e. one of
// x & 0xff, x & 0xff00, ..., x & 0xff00000000000000 is zero.
inline uint64_t HasZeroByte(uint64_t x) {
  return (x - 0x0101010101010101ULL) & ~x & 0x8080808080808080ULL;
}
    
    #include <stdint.h>
    
    
    {  // We have checked above that none of the sampling factors are 0, so the max
  // sampling factors can not be 0.
  jpg->MCU_rows = DivCeil(jpg->height, jpg->max_v_samp_factor * 8);
  jpg->MCU_cols = DivCeil(jpg->width, jpg->max_h_samp_factor * 8);
  // Compute the block dimensions for each component.
  if (mode == JPEG_READ_ALL) {
    for (size_t i = 0; i < jpg->components.size(); ++i) {
      JPEGComponent* c = &jpg->components[i];
      if (jpg->max_h_samp_factor % c->h_samp_factor != 0 ||
          jpg->max_v_samp_factor % c->v_samp_factor != 0) {
        fprintf(stderr, 'Non-integral subsampling ratios.\n');
        jpg->error = JPEG_INVALID_SAMPLING_FACTORS;
        return false;
      }
      c->width_in_blocks = jpg->MCU_cols * c->h_samp_factor;
      c->height_in_blocks = jpg->MCU_rows * c->v_samp_factor;
      const uint64_t num_blocks =
          static_cast<uint64_t>(c->width_in_blocks) * c->height_in_blocks;
      if (num_blocks > (1ull << 21)) {
        // Refuse to allocate more than 1 GB of memory for the coefficients,
        // that is 2M blocks x 64 coeffs x 2 bytes per coeff x max 4 components.
        // TODO(user) Add this limit to a GuetzliParams struct.
        fprintf(stderr, 'Image too large.\n');
        jpg->error = JPEG_IMAGE_TOO_LARGE;
        return false;
      }
      c->num_blocks = static_cast<int>(num_blocks);
      c->coeffs.resize(c->num_blocks * kDCTBlockSize);
    }
  }
  VERIFY_MARKER_END();
  return true;
}
    
    #include 'DHTAbstractMessage.h'
#include 'A2STR.h'
#include 'ValueBase.h'
    
      int numBucket_;
    
      virtual void startup() = 0;
    
    public:
  DHTTaskExecutor(int numConcurrent);
    
    
    {} // namespace aria2

    
      std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port,
                            const unsigned char* secret) const;
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}