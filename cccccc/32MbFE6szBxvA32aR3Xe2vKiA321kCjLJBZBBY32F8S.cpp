
        
        // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    #include 'content/nw/src/api/menu/menu_delegate.h'
    
       bool HasIcon(int command_id) override;
    
    bool NwMenuModel::HasIcons() const {
  // Always return false, see the comment about |NwMenuModel|.
  return false;
}
    
      if (type == 'separator') {
    menu_item_ = gtk_separator_menu_item_new();
  } else {
    if (type == 'checkbox') {
      menu_item_ = gtk_check_menu_item_new();
      bool checked;
      if (option.GetBoolean('checked', &checked))
        SetChecked(checked);
    } else {
      menu_item_ = gtk_image_menu_item_new();
      std::string icon;
      if (option.GetString('icon', &icon))
        SetIcon(icon);
    }
    }
    
    class NwAppGetDataPathFunction : public NWSyncExtensionFunction {
 public:
  NwAppGetDataPathFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwAppGetDataPathFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.App.getDataPath', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppGetDataPathFunction);
};
    
    
    {    ui::Clipboard* clipboard_;
    std::string error_;
  };
    
    #include 'extensions/browser/extension_function.h'
    
    	// Now that we have `commandStr`, it's OK to change `exePath`...
	PathRemoveFileSpec(exePath);
    
    #include <cstdint>
#include <tuple>
    
          DQ_form_t dq_formater {{
                             0x0, //Reserved
                             static_cast<uint32_t>(rtp),
                             static_cast<uint32_t>(ra),
                             static_cast<uint32_t>(imm) >> 4,
                             op
                            }};
    
    
    {}
    
    #include 'hphp/runtime/ext/std/ext_std_file.h'
#include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/server/static-content-cache.h'
    
    inline void ExecutionContext::setTransport(Transport* transport) {
  m_transport = transport;
}
    
    #endif //__CCCAMERA_ACTION_H__

    
        /** Creates an action with a Cardinal Spline array of points and tension.
     * @param dt In seconds.
     * @param points An PointArray.
     * @code
     * When this function bound to js or lua,the input params are changed.
     * In js: var create(var dt,var table).
     * In lua: local create(local dt, local table).
     * @endcode
     */
    static CatmullRomTo* create(float dt, PointArray* points);
    
    void ActionEase::startWithTarget(Node *target)
{
    if (target && _inner)
    {
        ActionInterval::startWithTarget(target);
        _inner->startWithTarget(_target);
    }
    else
    {
        log('ActionEase::startWithTarget error: target or _inner is nullptr!');
    }
}
    
    ReuseGrid* ReuseGrid::reverse() const
{
    // no reverse, just clone it
    return this->clone();
}
    
    Waves* Waves::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) Waves();
    a->initWithDuration(_duration, _gridSize, _waves, _amplitude, _horizontal, _vertical);
    a->autorelease();
    return a;
}
    
        /**
    @brief Get the center position of ripple effect.
    @return The center position of ripple effect.
    */
    const Vec2& getPosition() const { return _position; }
    /**
    @brief Set the center position of ripple effect.
    @param position The center position of ripple effect will be set.
    */
    void setPosition(const Vec2& position);
    
        /** Resumes the target. All queued actions will be resumed.
     *
     * @param target    A certain target.
     */
    virtual void resumeTarget(Node *target);
    
    /** Pauses all running actions, returning a list of targets whose actions were paused.
     *
     * @return  A list of targets whose actions were paused.
     */
    virtual Vector<Node*> pauseAllRunningActions();
    
    /** Resume a set of targets (convenience function to reverse a pauseAllRunningActions call).
     *
     * @param targetsToResume   A set of targets need to be resumed.
     */
    virtual void resumeTargets(const Vector<Node*>& targetsToResume);
    
    /** Main loop of ActionManager.
     * @param dt    In seconds.
     */
    virtual void update(float dt);
    
protected:
    // declared in ActionManager.m
    
    void SplitRows::startWithTarget(Node *target)
{
    TiledGrid3DAction::startWithTarget(target);
    _winSize = Director::getInstance()->getWinSizeInPixels();
}
    
    
    {    return false;
}
    
     @since v0.99.2
 */
class CC_DLL ActionTween : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes the action with the property name (key), and the from and to parameters.
     * @param duration The duration of the ActionTween. It's a value in seconds.
     * @param key The key of property which should be updated.
     * @param from The value of the specified property when the action begin.
     * @param to The value of the specified property when the action end.
     * @return If the creation success, return a pointer of ActionTween; otherwise, return nil.
     */
    static ActionTween* create(float duration, const std::string& key, float from, float to);
    }
    
    
    {}
    
    protected:
    void calculateMaxItems();
    void updateBlendFunc();
    void updateOpacityModifyRGB();
    
    const std::string DHTResponseMessage::R('r');
    
    bool DHTRoutingTable::addNode(const std::shared_ptr<DHTNode>& node)
{
  return addNode(node, false);
}
    
      // header
  readBytes(fp, buf, buf.size(), 8);
  if (memcmp(header, buf, 8) == 0) {
    version = 3;
  }
  else if (memcmp(headerCompat, buf, 8) == 0) {
    version = 2;
  }
  else {
    throw DL_ABORT_EX(fmt('Failed to load DHT routing table from %s. cause:%s',
                          filename.c_str(), 'bad header'));
  }
    
      Time serializedTime_;
    
    namespace aria2 {
    }
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    DHTTaskExecutor::~DHTTaskExecutor() = default;
    
      ~DHTTaskExecutor();
    
      bool validateToken(const std::string& token, const unsigned char* infoHash,
                     const std::string& ipaddr, uint16_t port) const;
    
      virtual void process() CXX11_OVERRIDE;
    
    const std::string DHTUnknownMessage::E('e');
    
        void markBad(const std::string& addr);