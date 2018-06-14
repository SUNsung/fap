
        
        
    {  taskbar->SetProgressState(hWnd, tbpFlag);
#elif defined(OS_LINUX)
  views::LinuxUI* linuxUI = views::LinuxUI::instance();
  if (linuxUI == NULL) {
    error_ = 'LinuxUI::instance() is NULL';
    return RespondNow(Error(error_));
  }
  SetDeskopEnvironment();
  linuxUI->SetProgressFraction(progress);
#else
  error_ = 'NwCurrentWindowInternalSetProgressBarFunction NOT Implemented'
  NOTIMPLEMENTED() << error_;
  return RespondNow(Error(error_));
#endif
  return RespondNow(NoArguments());
}
#endif
    
    
    
    #endif  // CONTENT_NW_SRC_API_MENU_MENU_DELEGATE_H_

    
    namespace nwapi {
    }
    
    NwClipboardSetListSyncFunction::NwClipboardSetListSyncFunction() {
}
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    extern JSClass  *jsb_cocos2d_Physics3D6DofConstraint_class;
extern JSObject *jsb_cocos2d_Physics3D6DofConstraint_prototype;
    
    
    
    #endif // __cocos2dx_cocosdenshion_h__

    
    
    
    
    
    	if (settings->pause)
	{
		if (settings->singleStep)
		{
			settings->singleStep = 0;
		}
		else
		{
			timeStep = 0.0f;
		}
    }
    
    		if (b2_toiCalls > 0)
		{
			m_debugDraw.DrawString(5, m_textLine, 'toi calls = %d, ave toi iters = %3.1f, max toi iters = %d',
				b2_toiCalls, b2_toiIters / float32(b2_toiCalls), b2_toiMaxRootIters);
			m_textLine += DRAW_STRING_NEW_LINE;
    }
    
    		{
			b2PolygonShape shape;
			shape.SetAsBox(1.0f, 0.125f);
    }