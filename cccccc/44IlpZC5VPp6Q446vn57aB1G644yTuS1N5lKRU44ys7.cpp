
        
          // brightray::MainDelegate:
  std::unique_ptr<brightray::ContentClient> CreateContentClient() override;
#if defined(OS_MACOSX)
  void OverrideChildProcessPath() override;
  void OverrideFrameworkBundlePath() override;
#endif
    
    
    {}  // namespace atom
    
    namespace api {
    }
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(InAppPurchase);
};
    
    #include 'atom/common/node_includes.h'
    
    // static
mate::WrappableBase* LayoutManager::New(mate::Arguments* args) {
  args->ThrowError('LayoutManager can not be created directly');
  return nullptr;
}
    
       unsigned short translate(unsigned short c) const 
   { 
      return c; 
   }
   unsigned short translate_nocase(unsigned short c) const 
   { 
      return (std::towlower)((wchar_t)c); 
   }
    
       // match procs, stored in s_match_vtable:
   bool match_startmark();
   bool match_endmark();
   bool match_literal();
   bool match_start_line();
   bool match_end_line();
   bool match_wild();
   bool match_match();
   bool match_word_boundary();
   bool match_within_word();
   bool match_word_start();
   bool match_word_end();
   bool match_buffer_start();
   bool match_buffer_end();
   bool match_backref();
   bool match_long_set();
   bool match_set();
   bool match_jump();
   bool match_alt();
   bool match_rep();
   bool match_combining();
   bool match_soft_buffer_end();
   bool match_restart_continue();
   bool match_long_set_repeat();
   bool match_set_repeat();
   bool match_char_repeat();
   bool match_dot_repeat_fast();
   bool match_dot_repeat_slow();
   bool match_dot_repeat_dispatch()
   {
      return ::boost::is_random_access_iterator<BidiIterator>::value ? match_dot_repeat_fast() : match_dot_repeat_slow();
   }
   bool match_backstep();
   bool match_assert_backref();
   bool match_toggle_case();
#ifdef BOOST_REGEX_RECURSIVE
   bool backtrack_till_match(std::size_t count);
#endif
   bool match_recursion();
   bool match_fail();
   bool match_accept();
   bool match_commit();
   bool match_then();
   bool skip_until_paren(int index, bool match = true);
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::unwind_char_repeat(bool r)
{
   saved_single_repeat<BidiIterator>* pmp = static_cast<saved_single_repeat<BidiIterator>*>(m_backup_state);
    }
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_format.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides formatting output routines for search and replace
  *                operations.  Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    template <class BidiIterator, class Allocator, class charT, class traits>
bool regex_search(BidiIterator first, BidiIterator last, 
                  match_results<BidiIterator, Allocator>& m, 
                  const basic_regex<charT, traits>& e, 
                  match_flag_type flags = match_default)
{
   return regex_search(first, last, m, e, flags, first);
}
    
        //
    // convert 'absolutes' to 'diffs'
    //
    Vec2 p = copyConfig->getControlPointAtIndex(0);
    for (ssize_t i = 1; i < copyConfig->count(); ++i)
    {
        Vec2 current = copyConfig->getControlPointAtIndex(i);
        Vec2 diff = current - p;
        copyConfig->replaceControlPoint(diff, i);
    }
    
    //
// NOTE: Converting these macros into Templates is desirable, but please see
// issue #16159 [https://github.com/cocos2d/cocos2d-x/pull/16159] for further info
//
#define EASERATE_TEMPLATE_IMPL(CLASSNAME, TWEEN_FUNC) \
CLASSNAME* CLASSNAME::create(cocos2d::ActionInterval *action, float rate) \
{ \
    CLASSNAME *ease = new (std::nothrow) CLASSNAME(); \
    if (ease) \
    { \
        if (ease->initWithAction(action, rate)) \
            ease->autorelease(); \
        else \
            CC_SAFE_RELEASE_NULL(ease); \
    } \
    return ease; \
} \
CLASSNAME* CLASSNAME::clone() const \
{ \
    if(_inner) return CLASSNAME::create(_inner->clone(), _rate); \
    return nullptr; \
} \
void CLASSNAME::update(float time) { \
    _inner->update(TWEEN_FUNC(time, _rate)); \
} \
EaseRateAction* CLASSNAME::reverse() const { \
    return CLASSNAME::create(_inner->reverse(), 1.f / _rate); \
}
    
    FlipX * FlipX::clone() const
{
    // no copy constructor
    return FlipX::create(_flipX);
}
//
// FlipY
//
    
            // fix for issue #1288, incorrect end value of repeat
        if (std::abs(dt - 1.0f) < FLT_EPSILON && _total < _times)
        {
            if (!(sendUpdateEventToScript(1.0f, _innerAction)))
                _innerAction->update(1.0f);
            
            _total++;
        }
    
    
    {        // only delete currentTarget if no actions were scheduled during the cycle (issue #481)
        if (_currentTargetSalvaged && _currentTarget->actions->num == 0)
        {
            deleteHashElement(_currentTarget);
        }
        //if some node reference 'target', it's reference count >= 2 (issues #14050)
        else if (_currentTarget->target->getReferenceCount() == 1)
        {
            deleteHashElement(_currentTarget);
        }
    }
    
        /** Removes all actions matching at least one bit in flags and the target.
     *
     * @param flags     The flag field to match the actions' flags based on bitwise AND.
     * @param target    A certain target.
     * @js NA
     */
    virtual void removeActionsByFlags(unsigned int flags, Node *target);
    
        if (action && action->initWithDuration(duration, gridSize, numberOfJumps, amplitude))
    {
        action->autorelease();
        return action;
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    Animation* Animation::create(const Vector<AnimationFrame*>& arrayOfAnimationFrameNames, float delayPerUnit, unsigned int loops /* = 1 */)
{
    Animation *animation = new (std::nothrow) Animation();
    animation->initWithAnimationFrames(arrayOfAnimationFrameNames, delayPerUnit, loops);
    animation->autorelease();
    return animation;
}
    
        /** Gets the total Delay units of the Animation. 
     *
     * @return The total Delay units of the Animation.
     */
    float getTotalDelayUnits() const { return _totalDelayUnits; };
    
    /** Sets the delay in seconds of the 'delay unit'.
     *
     * @param delayPerUnit The delay in seconds of the 'delay unit'.
     */
    void setDelayPerUnit(float delayPerUnit) { _delayPerUnit = delayPerUnit; };
    
    /** Gets the delay in seconds of the 'delay unit'.
     * 
     * @return The delay in seconds of the 'delay unit'.
     */
    float getDelayPerUnit() const { return _delayPerUnit; };
    
        /** Adds a Animation with a name.
     *
     * @param animation An animation.
     * @param name The name of animation.
     */
    void addAnimation(Animation *animation, const std::string& name);
    
    
    { protected:
  /// The CAN client is started.
  bool is_started_ = false;
};
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    #include <cstring>
    
      dev_handler_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
  if (dev_handler_ < 0) {
    AERROR << 'open device error code [' << dev_handler_ << ']: ';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    template <typename SensorType>
void CanReceiver<SensorType>::RecvThreadFunc() {
  AINFO << 'Can client receiver thread starts.';
  CHECK_NOTNULL(can_client_);
  CHECK_NOTNULL(pt_manager_);
    }
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);