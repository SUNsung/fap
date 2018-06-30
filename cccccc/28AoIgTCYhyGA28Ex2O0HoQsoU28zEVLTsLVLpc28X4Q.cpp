
        
        namespace atom {
    }
    
    #include 'base/macros.h'
#include 'ui/events/event_rewriter.h'
    
    class UnresponsiveSuppressor {
 public:
  UnresponsiveSuppressor();
  ~UnresponsiveSuppressor();
    }
    
    #include 'chrome/common/chrome_constants.h'
    
    #if defined(OS_MACOSX)
// NOTE: if you change the value of kFrameworkName, please don't forget to
// update components/test/run_all_unittests.cc as well.
// TODO(tfarina): Remove the comment above, when you fix components to use plist
// on Mac.
extern const base::FilePath::CharType kFrameworkName[];
#endif  // OS_MACOSX
    
    namespace content {
class RenderProcessHost;
class Shell;
}
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    #endif  // CONTENT_NW_SRC_API_BASE_BASE_H_

    
    namespace {
RenderView* GetRenderView(v8::Handle<v8::Context> ctx) {
  WebLocalFrame* frame = WebLocalFrame::frameForContext(ctx);
  if (!frame || !frame->isNodeJS())
    return NULL;
    }
    }
    
    namespace remote {
    }
    
     private:
  ObjectManager* object_manager_;
    
    void Menu::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    for(auto* item : menu_items_) {
      item->UpdateKeys(focus_manager);
    }
  }
}
    
    void MenuItem::CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result) {
  if (method == 'GetChecked') {
    result->AppendBoolean(GetChecked());
  } else {
    NOTREACHED() << 'Invalid call to MenuItem method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {#endif
}  // namespace nwapi
    
        bool Read(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return ReadText(data);
        break;
        case TYPE_HTML:
        return ReadHTML(data);
        break;
        case TYPE_RTF:
        return ReadRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return ReadImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;      
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
    
    class NwObjDestroyFunction : public NWSyncExtensionFunction {
 public:
  NwObjDestroyFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
      bool NwScreenStartMonitorFunction::RunNWSync(base::ListValue* response, std::string* error) {
    bool screens, windows;
    EXTENSION_FUNCTION_VALIDATE(args_->GetBoolean(0, &screens));
    EXTENSION_FUNCTION_VALIDATE(args_->GetBoolean(1, &windows));
    NwDesktopCaptureMonitor::GetInstance()->Start(screens, windows);
    return true;
  }
    
    
    {  private:
    DISALLOW_COPY_AND_ASSIGN(NwScreenIsMonitorStartedFunction);
  };