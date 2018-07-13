#endif  // ATOM_COMMON_DRAGGABLE_REGION_H_

    
    #include 'content/public/browser/web_contents_observer.h'
#include 'ui/gfx/native_widget_types.h'
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get())));
  return v8::Undefined(isolate);
}
    
    #include 'base/strings/string_piece.h'
#include 'v8/include/v8.h'
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Clipboard);
};
    
    
#include 'content/nw/src/api/event/event.h'
#include 'base/values.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/gfx/screen.h'
    
    
    {  template<typename T> bool RemoveListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i!=listerners_.end()) {
      delete i->second;
      listerners_.erase(i);
      return true;
    }
    return false;
  }
private:
  DISALLOW_COPY_AND_ASSIGN(EventListener);
};
    
       bool HasIcon(int command_id) override;
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/nw_shell.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'ui/gfx/point.h'
#include 'vector'
#include 'gtk/gtk.h'
    
    NwMenuModel::NwMenuModel(Delegate* delegate) : SimpleMenuModel(delegate) {
}
    
    void MenuItem::Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh) {
  if (method == 'SetLabel') {
    std::string label;
    arguments.GetString(0, &label);
    SetLabel(label);
  } else if (method == 'SetIcon') {
    std::string icon;
    arguments.GetString(0, &icon);
    SetIcon(icon);
  } else if (method == 'SetIconIsTemplate') {
    bool isTemplate;
    arguments.GetBoolean(0, &isTemplate);
    SetIconIsTemplate(isTemplate);
  } else if (method == 'SetTooltip') {
    std::string tooltip;
    arguments.GetString(0, &tooltip);
    SetTooltip(tooltip);
  } else if (method == 'SetEnabled') {
    bool enabled = true;
    arguments.GetBoolean(0, &enabled);
    SetEnabled(enabled);
  } else if (method == 'SetChecked') {
    bool checked = false;
    arguments.GetBoolean(0, &checked);
    SetChecked(checked);
  } else if (method == 'SetSubmenu') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    SetSubmenu(object_manager()->GetApiObject<Menu>(object_id));
#if defined(OS_MACOSX)
  } else if (method == 'SetKey') {
    std::string key;
    arguments.GetString(0, &key);
    SetKey(key);
  } else if (method == 'SetModifiers') {
    std::string mod;
    arguments.GetString(0, &mod);
    SetModifiers(mod);
#endif
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    namespace extensions {
    }
    
    void NwDesktopCaptureMonitor::OnSourceThumbnailChanged(DesktopMediaList* list, int index) {
    std::string base64;
    }
    
    static HRESULT InitDevice()
{
    HRESULT hr = S_OK;
    }
    
    
    {    if(start_x == -1)
    {
        return 0;
    }
    else
    {
        low_thresh = cvRound(max_start_x + 0.25*(max_end_x - max_start_x));
        high_thresh = cvRound(max_start_x + 0.75*(max_end_x - max_start_x));
        return 1;
    }
}
    
    
    {
    {                return count;
#else
                return ::atomicMin(address, val);
#endif
            }
        }; // struct cmem
    
    #include 'runtime_common.hpp'
    
      EventTappingEventPublisher() : EventPublisher() {}
    
     private:
  /**
   * @brief The existing configure-time discovered path.
   *
   * The FSEvents publisher expects paths from a configuration to contain
   * filesystem globbing wildcards, as opposed to SQL wildcards. It also expects
   * paths to be canonicalized up to the first wildcard. To FSEvents a double
   * wildcard, meaning recursive, is a watch on the base path string. A single
   * wildcard means the same watch but a preserved globbing pattern, which is
   * applied at event-fire time to limit subscriber results.
   *
   * This backup will allow post-fire subscriptions to match. It will also allow
   * faster reconfigures by not performing string manipulation twice.
   */
  std::string discovered_;
    
    #pragma once
    
    
    
    
    
    
    
    
    
    // This class implements debug drawing callbacks that are invoked
// inside b2World::Step.
class GLESDebugDraw : public b2Draw
{
    float32 mRatio;
    cocos2d::GLProgram* mShaderProgram;
    GLint        mColorLocation;
    }
    
        void DrawTitle(const char *string);
	virtual void Step(Settings* settings);
	virtual void Keyboard(unsigned char key) { B2_NOT_USED(key); }
	virtual void KeyboardUp(unsigned char key) { B2_NOT_USED(key); }
	void ShiftMouseDown(const b2Vec2& p);
	virtual bool MouseDown(const b2Vec2& p);
	virtual void MouseUp(const b2Vec2& p);
	void MouseMove(const b2Vec2& p);
	void LaunchBomb();
	void LaunchBomb(const b2Vec2& position, const b2Vec2& velocity);
	
	void SpawnBomb(const b2Vec2& worldPt);
	void CompleteBombSpawn(const b2Vec2& p);
    
    			b2FixtureDef sd;
			sd.shape = &shape;
			sd.density = 0.0f;
			sd.restitution = k_restitution;
    
    #endif
