
        
        struct Bfloat16EqFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a == b; }
};
struct Bfloat16NeFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a != b; }
};
struct Bfloat16LtFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a < b; }
};
struct Bfloat16GtFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a > b; }
};
struct Bfloat16LeFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a <= b; }
};
struct Bfloat16GeFunctor {
  npy_bool operator()(bfloat16 a, bfloat16 b) { return a >= b; }
};
    
      int type_num = -1;
  Status s =
      TF_DataType_to_PyArray_TYPE(static_cast<TF_DataType>(dtype), &type_num);
  if (!s.ok()) {
    return s;
  }
    
    #include 'tensorflow/python/lib/core/numpy.h'
    
    PyExceptionRegistry* PyExceptionRegistry::singleton_ = nullptr;
    
    #include 'tensorflow/python/lib/core/safe_ptr.h'
    
    #include 'tensorflow/core/framework/node_def.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/util/device_name_utils.h'
    
    
    {    // Vector of cached {config, executor} pairs.
    std::vector<
        std::pair<StreamExecutorConfig, std::unique_ptr<StreamExecutor>>>
        configurations GUARDED_BY(configurations_mutex);
  };
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #ifndef BITCOIN_QT_OPENURIDIALOG_H
#define BITCOIN_QT_OPENURIDIALOG_H
    
        Round(a, b, c, d, e, f, g, h, 0x27b70a85, w0 += sigma1(w14) + w9 + sigma0(w1));
    Round(h, a, b, c, d, e, f, g, 0x2e1b2138, w1 += sigma1(w15) + w10 + sigma0(w2));
    Round(g, h, a, b, c, d, e, f, 0x4d2c6dfc, w2 += sigma1(w0) + w11 + sigma0(w3));
    Round(f, g, h, a, b, c, d, e, 0x53380d13, w3 += sigma1(w1) + w12 + sigma0(w4));
    Round(e, f, g, h, a, b, c, d, 0x650a7354, w4 += sigma1(w2) + w13 + sigma0(w5));
    Round(d, e, f, g, h, a, b, c, 0x766a0abb, w5 += sigma1(w3) + w14 + sigma0(w6));
    Round(c, d, e, f, g, h, a, b, 0x81c2c92e, w6 += sigma1(w4) + w15 + sigma0(w7));
    Round(b, c, d, e, f, g, h, a, 0x92722c85, w7 += sigma1(w5) + w0 + sigma0(w8));
    Round(a, b, c, d, e, f, g, h, 0xa2bfe8a1, w8 += sigma1(w6) + w1 + sigma0(w9));
    Round(h, a, b, c, d, e, f, g, 0xa81a664b, w9 += sigma1(w7) + w2 + sigma0(w10));
    Round(g, h, a, b, c, d, e, f, 0xc24b8b70, w10 += sigma1(w8) + w3 + sigma0(w11));
    Round(f, g, h, a, b, c, d, e, 0xc76c51a3, w11 += sigma1(w9) + w4 + sigma0(w12));
    Round(e, f, g, h, a, b, c, d, 0xd192e819, w12 += sigma1(w10) + w5 + sigma0(w13));
    Round(d, e, f, g, h, a, b, c, 0xd6990624, w13 += sigma1(w11) + w6 + sigma0(w14));
    Round(c, d, e, f, g, h, a, b, 0xf40e3585, w14 += sigma1(w12) + w7 + sigma0(w15));
    Round(b, c, d, e, f, g, h, a, 0x106aa070, w15 += sigma1(w13) + w8 + sigma0(w0));
    
        secp256k1_pubkey_load(ctx, &pt, point);
    secp256k1_scalar_set_b32(&s, scalar, &overflow);
    if (overflow || secp256k1_scalar_is_zero(&s)) {
        ret = 0;
    } else {
        unsigned char x[32];
        unsigned char y[1];
        secp256k1_sha256_t sha;
    }
    
    #include 'include/secp256k1_recovery.h'
    
    req::ptr<File>
DataStreamWrapper::open(const String& filename, const String& /*mode*/,
                        int /*options*/,
                        const req::ptr<StreamContext>& /*context*/) {
    }
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////n
    }
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    namespace HPHP {
    }
    
    /*
 * Attempt to log an entry to the perf warning service.
 *
 * If StructuredLog::enabled() returns false or this event is discarded by the
 * effective sample rate, nothing will be logged. If both of those checks pass,
 * fillCols will be passed a StructuredLogEntry& to populate, which will then
 * be logged. The column names 'event_name' and 'priority' are reserved and
 * will be overwritten is fillCols() sets them.
 *
 * The effective sample rate is determined by Eval.PerfWarningSampleRate * rate
 * (or kDefaultPerfWarningRate for the overloads that don't take a rate). If
 * the effective sample rate is 0, all events will be discarded.
 */
template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols);
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols);
    
    
    {  bool closeImpl();
};
    
      virtual const std::string& getType() const CXX11_OVERRIDE;
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    namespace aria2 {
    }
    
      DHTMessageDispatcher* dispatcher_;
    
    void DHTTaskQueueImpl::addPeriodicTask1(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue1_.addTask(task);
}
    
    DHTTokenUpdateCommand::DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                                             std::chrono::seconds interval)
    : TimeBasedCommand{cuid, e, std::move(interval)}, tokenTracker_{nullptr}
{
}
    
      // do nothing
  virtual void doReceivedAction() CXX11_OVERRIDE;
    
    DNSCache::DNSCache(const DNSCache& c) = default;
    
    void EaseBezierAction::update(float time)
{
    _inner->update(tweenfunc::bezieratFunction(_p0,_p1,_p2,_p3,time));
}
    
        /**
    @brief Get the amplitude rate of the effect.
    @return Return the amplitude rate of the effect.
    */
    float getAmplitudeRate() const { return _amplitudeRate; }
    /**
    @brief Set the amplitude rate of the effect.
    @param amplitudeRate The value of amplitude rate will be set.
    */
    void setAmplitudeRate(float amplitudeRate) { _amplitudeRate = amplitudeRate; }
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual Place* reverse() const override;
    virtual Place* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    Place(){}
    virtual ~Place(){}
    
    @code
auto action = MoveBy::create(1.0f, Vec2::ONE);
auto pingPongAction = Sequence::create(action, action->reverse(), nullptr);
@endcode
*/
class CC_DLL ActionInterval : public FiniteTimeAction
{
public:
    /** How many seconds had elapsed since the actions started to run.
     *
     * @return The seconds had elapsed since the actions started to run.
     */
    float getElapsed() { return _elapsed; }
    }
    
    void ActionManager::removeAction(Action *action)
{
    // explicit null handling
    if (action == nullptr)
    {
        return;
    }
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
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCAnimation.h'
#include 'renderer/CCTextureCache.h'
#include 'renderer/CCTexture2D.h'
#include 'base/CCDirector.h'
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    unsigned int AutoPolygon::getSquareValue(unsigned int x, unsigned int y, const Rect& rect, float threshold)
{
    /*
     checking the 2x2 pixel grid, assigning these values to each pixel, if not transparent
     +---+---+
     | 1 | 2 |
     +---+---+
     | 4 | 8 | <- current pixel (curx,cury)
     +---+---+
     */
    unsigned int sv = 0;
    //NOTE: due to the way we pick points from texture, rect needs to be smaller, otherwise it goes outside 1 pixel
    auto fixedRect = Rect(rect.origin, rect.size-Size(2,2));
    
    Vec2 tl = Vec2(x-1, y-1);
    sv += (fixedRect.containsPoint(tl) && getAlphaByPos(tl) > threshold)? 1 : 0;
    Vec2 tr = Vec2(x, y-1);
    sv += (fixedRect.containsPoint(tr) && getAlphaByPos(tr) > threshold)? 2 : 0;
    Vec2 bl = Vec2(x-1, y);
    sv += (fixedRect.containsPoint(bl) && getAlphaByPos(bl) > threshold)? 4 : 0;
    Vec2 br = Vec2(x, y);
    sv += (fixedRect.containsPoint(br) && getAlphaByPos(br) > threshold)? 8 : 0;
    CCASSERT(sv != 0 && sv != 15, 'square value should not be 0, or 15');
    return sv;
}
    
    http://www.cocos2d-x.org