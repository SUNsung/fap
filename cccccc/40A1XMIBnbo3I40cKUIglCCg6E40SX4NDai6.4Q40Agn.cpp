
        
        
    {}  // namespace api
    
     private:
  atom::RenderProcessPreferences preferences_;
    
      gfx::Point GetCursorScreenPoint();
  display::Display GetPrimaryDisplay();
  std::vector<display::Display> GetAllDisplays();
  display::Display GetDisplayNearestPoint(const gfx::Point& point);
  display::Display GetDisplayMatching(const gfx::Rect& match_rect);
    
    #include 'atom/browser/net/about_protocol_handler.h'
    
    class AboutProtocolHandler : public net::URLRequestJobFactory::ProtocolHandler {
 public:
  AboutProtocolHandler();
  ~AboutProtocolHandler() override;
    }
    
    #include 'ui/gfx/image/image.h'
    
        Rational result{ prat };
    destroyrat(prat);
    
    void CCalcEngine::LoadEngineStrings(CalculationManager::IResourceProvider& resourceProvider)
{
    for (const auto& sid : g_sids)
    {
        auto locKey = wstring{ sid };
        auto locString = resourceProvider.GetCEngineString(locKey);
        if (!locString.empty())
        {
            s_engineStrings[locKey] = locString;
        }
    }
}
    
    shared_ptr<HISTORYITEM> const& CalculatorHistory::GetHistoryItem(_In_ unsigned int uIdx)
{
    assert(uIdx >= 0 && uIdx < m_historyItems.size());
    return m_historyItems.at(uIdx);
}
    
    using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;
    
    void ExtensionStatus::__set_message(const std::string& val) {
  this->message = val;
}
    
    
    {
    {} // namespace tables
} // namespace osquery

    
      // Get an integral value, 0 or 1, for whether a syscall table pointer is modified.
  auto f1 = osquery::readFile(kKernelSyscallAddrModifiedPath, content);
  if (f1.ok()) {
    boost::trim(content);
    syscall_addr_modified = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelSyscallAddrModifiedPath;
    return results;
  }
    
          resp = smartctl.getDevInfo(devname, full_type);
      if (resp.err != NOERR) {
        LOG(WARNING) << 'There was an error retrieving drive information with '
                        'hardware driver: '
                     << libsmartctl::errStr(resp.err);
        return;
      }
      // Only consider found if no error was returned.
      found = true;
    
    #include <string>
    
    namespace osquery {
namespace tables {
    }
    }
    
    class iptables : public testing::Test {
  protected:
    void SetUp() override {
      setUpEnvironment();
    }
};
    
    #include <osquery/tests/integration/tables/helper.h>
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    #include 'gtest/gtest.h'
    
    BaseMapMatrix::BaseMapMatrix() {}
    
    // config detail: {'name': 'output_value', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 39,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Accelrpt68::output_value(const std::uint8_t* bytes,
                                int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 8);
    }
    
      Byte t1(bytes + 1);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    void Brakerpt6c::Parse(const std::uint8_t* bytes, int32_t length,
                       ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_brake_rpt_6c()->set_manual_input(
      manual_input(bytes, length));
  chassis->mutable_gem()->mutable_brake_rpt_6c()->set_commanded_value(
      commanded_value(bytes, length));
  chassis->mutable_gem()->mutable_brake_rpt_6c()->set_output_value(
      output_value(bytes, length));
  chassis->mutable_gem()->mutable_brake_rpt_6c()->set_brake_on_off(
      brake_on_off(bytes, length));
}
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    // config detail: {'name': 'veh_can_timeout', 'offset': 0.0, 'precision': 1.0,
// 'len': 1, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 2,
// 'type': 'bool', 'order': 'motorola', 'physical_unit': ''}
bool Globalrpt6a::veh_can_timeout(const std::uint8_t* bytes,
                                  int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(2, 1);
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

    
    // config detail: {'name': 'latitude_degrees', 'offset': 0.0, 'precision': 1.0,
// 'len': 8, 'is_signed_var': True, 'physical_range': '[-128|127]', 'bit': 7,
// 'type': 'int', 'order': 'motorola', 'physical_unit': 'deg'}
int Latlonheadingrpt82::latitude_degrees(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 8);
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
    
    void CallFunc::update(float time)
{
    ActionInstant::update(time);
    this->execute();
}
    
    NS_CC_END

    
    protected:
    float _to;
    float _from;
    
    
    {
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(ClippingNode);
};
/** @} */
NS_CC_END
    
    
    {protected:
    ClippingRectangleNode()
    : _clippingEnabled(true)
    {
    }
    
    void onBeforeVisitScissor();
    void onAfterVisitScissor();
    
    Rect _clippingRegion;
    bool _clippingEnabled;
    
    CustomCommand _beforeVisitCmdScissor;
    CustomCommand _afterVisitCmdScissor;
};
    
    static bool sendComponentEventToJS(Component* node, int action)
{
    auto scriptEngine = ScriptEngineManager::getInstance()->getScriptEngine();
    
    if (scriptEngine->isCalledFromScript())
    {
        scriptEngine->setCalledFromScript(false);
    }
    else
    {
        BasicScriptData data(node,(void*)&action);
        ScriptEvent scriptEvent(kComponentEvent,(void*)&data);
        if (scriptEngine->sendEvent(&scriptEvent))
            return true;
    }
    
    return false;
}
    
    class CC_DLL ComponentContainer
{
protected:
    /**
     * @js ctor
     */
    ComponentContainer(Node* node);
    
public:
    /**
     * @js NA
     * @lua NA
     */
    ~ComponentContainer();
    
	/**
     * @js getComponent
     */
	Component* get(const std::string& name) const;
    }
    
        //
    // Override
    //
    virtual std::string getDescription() const override;
    virtual void draw(Renderer *renderer, const Mat4& transform, uint32_t flags) override;
    void removeChild(Node* child, bool cleanup = true) override;