
        
            ~reverse_lock() {
        templock.lock();
        templock.swap(lock);
    }
    
    /**
 * Changelog:
 * - March 2013, Diederik Huys:    original version
 * - November 2014, Pieter Wuille: updated to use Peter Dettman's parallel multiplication algorithm
 * - December 2014, Pieter Wuille: converted from YASM to GCC inline assembly
 */
    
            secp256k1_ecmult_const(&res, &pt, &s);
        secp256k1_ge_set_gej(&pt, &res);
        /* Compute a hash of the point in compressed form
         * Note we cannot use secp256k1_eckey_pubkey_serialize here since it does not
         * expect its output to be secret and has a timing sidechannel. */
        secp256k1_fe_normalize(&pt.x);
        secp256k1_fe_normalize(&pt.y);
        secp256k1_fe_get_b32(x, &pt.x);
        y[0] = 0x02 | secp256k1_fe_is_odd(&pt.y);
    
    /** A hasher class for RIPEMD-160. */
class CRIPEMD160
{
private:
    uint32_t s[5];
    unsigned char buf[64];
    uint64_t bytes;
    }
    
    
    {
    {}}
    
    void Config::Bind(HackStrictOption& loc, const IniSettingMap& ini,
                  const Hdf& config, const std::string& name /* = '' */,
                  HackStrictOption def) {
  // Currently this doens't bind to ini_get since it is hard to thread through
  // an enum
  loc = GetHackStrictOption(ini, config, name, def);
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    Variant PlainDirectory::read() {
  struct dirent entry;
  struct dirent *result;
  int ret = readdir_r(m_dir, &entry, &result);
  if (ret != 0 || !result) {
    return false;
  }
  return String(entry.d_name, CopyString);
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
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
    
      if (!strcasecmp(req, 'stdin')) {
    return make_from(BuiltinFiles::GetSTDIN());
  }
  if (!strcasecmp(req, 'stdout')) {
    return make_from(BuiltinFiles::GetSTDOUT());
  }
  if (!strcasecmp(req, 'stderr')) {
    return make_from(BuiltinFiles::GetSTDERR());
  }
  if (!strncasecmp(req, 'fd/', sizeof('fd/') - 1)) {
    return openFD(req + sizeof('fd/') - 1);
  }
  if (!strncasecmp(req, 'filter/', sizeof('filter/') - 1)) {
    return phpStreamOpenFilter(req + sizeof('filter') - 1, mode,
                               options, context);
  }
    
    
    {
    {        _target->setPosition(clampf(tempPos.x, _leftBoundary, _rightBoundary),
                                   clampf(tempPos.y, _bottomBoundary, _topBoundary));
    }
    else
    {
        _target->setPosition(_halfScreenSize - _followedNode->getPosition());
    }
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    NS_CC_END
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
        /** Gets the units of time the frame takes.
     *
     * @return The units of time the frame takes.
     */
    float getDelayUnits() const { return _delayUnits; };
    
    /** Sets the units of time the frame takes.
     *
     * @param delayUnits The units of time the frame takes.
     */
    void setDelayUnits(float delayUnits) { _delayUnits = delayUnits; };
    
    /** @brief Gets user information
     * A AnimationFrameDisplayedNotification notification will be broadcast when the frame is displayed with this dictionary as UserInfo. 
     * If UserInfo is nil, then no notification will be broadcast.
     *
     * @return A dictionary as UserInfo
     */
    const ValueMap& getUserInfo() const { return _userInfo; };
    ValueMap& getUserInfo() { return _userInfo; };
    
    /** Sets user information.
     * @param userInfo A dictionary as UserInfo.
     */
    void setUserInfo(const ValueMap& userInfo)
    {
        _userInfo = userInfo;
    }
    
    // Overrides
    virtual AnimationFrame *clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    /**
     * @js ctor
     */
    AnimationFrame();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~AnimationFrame();
    
    /** initializes the animation frame with a spriteframe, number of delay units and a notification user info */
    bool initWithSpriteFrame(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo);
    
    http://www.cocos2d-x.org