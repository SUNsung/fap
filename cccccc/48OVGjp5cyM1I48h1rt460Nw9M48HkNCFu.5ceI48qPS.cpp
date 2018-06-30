
        
        #include 'hphp/util/compatibility.h'
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
    bool Vunit::needsRegAlloc() const {
  if (next_vr > Vreg::V0) return true;
    }
    
      LowPtr<const Func> func;
  int parent;
    
      case KindOfDouble:
    if (data.toDouble() > DBL_MAX || data.toDouble() < DBL_MIN) {
      raise_warning(cs_GMP_INVALID_TYPE, fnCaller);
      return false;
    }
    mpz_init_set_d(gmpData, data.toDouble());
    return true;
    
    void numa_local(void* start, size_t size) {
  if (!use_numa) return;
  numa_setlocal_memory(start, size);
}
    
    #endif
#endif

    
    //////////////////////////////////////////////////////////////////////
    
    
inline int Instruction::ImmBranch() const {
  switch (BranchType()) {
    case CondBranchType: return ImmCondBranch();
    case UncondBranchType: return ImmUncondBranch();
    case CompareBranchType: return ImmCmpBranch();
    case TestBranchType: return ImmTestBranch();
    default: not_reached();
  }
  return 0;
}
    
    struct embedded_data {
  std::string m_filename;
  uint64_t m_start;
  uint64_t m_len;
#ifdef _MSC_VER
  void* m_handle;
#endif
};
    
      bool initShadow(int afdt_listen,
                  const std::string& afdt_filename, int id,
                  const std::vector<int> &inherited_fds);
  static void runShadow(int afdt_fd);
  void closeShadow();
    
    void annotate(NormalizedInstruction* i) {
  switch (i->op()) {
  case Op::FCall:
  case Op::FCallM:
    annotate(i, nullptr, nullptr);
    break;
  case Op::FCallD:
    annotate(i,
             i->m_unit->lookupLitstrId(i->imm[1].u_SA),
             i->m_unit->lookupLitstrId(i->imm[2].u_SA));
    break;
  case Op::FCallDM:
    annotate(i,
             i->m_unit->lookupLitstrId(i->imm[2].u_SA),
             i->m_unit->lookupLitstrId(i->imm[3].u_SA));
    break;
  default:
    break;
  }
}
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
    #include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/noncopyable.hpp>
    
      struct tm result;
  gmtime_r((time_t*)&epoch, &result);
    
    Status WmiResultItem::GetBool(const std::string& name, bool& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
    }
    
    
    {  // Make sure no log file is created.
  // RocksDB logs are intercepted and forwarded to the GLog sink.
  auto details = SQL::selectAllFrom('file', 'path', EQUALS, path_ + '/LOG');
  ASSERT_EQ(details.size(), 0U);
}
    
    #pragma once
    
      void configure() override;
    
     public:
  void configure() override;
    
    template <typename EventType>
KernelEventContextRef KernelEventPublisher::createEventContextFrom(
    osquery_event_t event_type, CQueue::event *event) const {
  TypedKernelEventContextRef<EventType> ec = nullptr;
    }
    
    bool js_cocos2dx_studio_ProcessBase_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ProcessBase_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ProcessBase(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ProcessBase_play(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_pause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_getRawDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_resume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_setIsComplete(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_stop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_update(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_getCurrentFrameIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_isComplete(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_getCurrentPercent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_setIsPause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_getProcessScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_isPause(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_isPlaying(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_setProcessScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_setIsPlaying(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ProcessBase_ProcessBase(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    {        ok &= luaval_to_number(tolua_S, 2,&arg0, 'cc.SimpleAudioEngine:setEffectsVolume');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setEffectsVolume'', nullptr);
            return 0;
        }
        cobj->setEffectsVolume(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:setEffectsVolume',argc, 1);
    return 0;
    
    
    
    
    
    bool Test::MouseDown(const b2Vec2& p)
{
	m_mouseWorld = p;
	
	if (m_mouseJoint != nullptr)
	{
		return false;
	}
    }
    
    		for (int32 i = 0; i < 2; ++i)
		{
			b2Vec2 vertices[3];
			vertices[0].Set(-0.5f, 0.0f);
			vertices[1].Set(0.5f, 0.0f);
			vertices[2].Set(0.0f, 1.5f);
    }
    
    /*
 * C++ version.
 */
struct _JavaVM {
    const struct JNIInvokeInterface* functions;
    }
    
      /**
   * The offset within the current function
   */
  int functionOffset() const noexcept {
    auto absoluteSymbol = static_cast<const char*>(functionAddress_);
    auto absoluteabsoluteProgramCounter =
        static_cast<const char*>(absoluteProgramCounter_);
    return absoluteabsoluteProgramCounter - absoluteSymbol;
  }
    
    #include <yoga/Yoga.h>
    
     public: // Tree hierarchy inspectors
    
    #include <cstdarg>
#include <stdio.h>
    
    
    {private:
  const char* m_functionName;
  const char* m_fileName;
  int m_lineNumber;
};
    
    
    {  uint8_t* getDirectBytes() const;
  size_t getDirectSize() const;
};