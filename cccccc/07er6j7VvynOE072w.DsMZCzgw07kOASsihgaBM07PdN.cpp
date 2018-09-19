
        
        #include 'brightray/common/content_client.h'
    
    namespace atom {
    }
    
    #include 'atom/browser/api/atom_api_browser_window.h'
#include 'atom/browser/native_window.h'
#include 'atom/browser/ui/certificate_trust.h'
#include 'atom/browser/ui/file_dialog.h'
#include 'atom/browser/ui/message_box.h'
#include 'atom/common/native_mate_converters/callback.h'
#include 'atom/common/native_mate_converters/file_path_converter.h'
#include 'atom/common/native_mate_converters/image_converter.h'
#include 'atom/common/native_mate_converters/net_converter.h'
#include 'native_mate/dictionary.h'
    
    class DownloadItem : public mate::TrackableObject<DownloadItem>,
                     public download::DownloadItem::Observer {
 public:
  static mate::Handle<DownloadItem> Create(v8::Isolate* isolate,
                                           download::DownloadItem* item);
    }
    
    #include 'atom/common/api/constructor.h'
#include 'base/strings/utf_string_conversions.h'
#include 'native_mate/dictionary.h'
#include 'ui/views/controls/button/label_button.h'
    
    // static
void Net::BuildPrototype(v8::Isolate* isolate,
                         v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'Net'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetProperty('URLRequest', &Net::URLRequest);
}
    
    class NwCurrentWindowInternalCapturePageInternalFunction : public UIThreadExtensionFunction {
 public:
  NwCurrentWindowInternalCapturePageInternalFunction();
    }
    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Allocate_Object(
      routing_id,
      object_id,
      type,
      *static_cast<base::DictionaryValue*>(value_option.get())));
  return v8::Undefined(isolate);
}
    
      template<typename T> T* AddListener() {
    std::map<int, BaseEvent*>::iterator i = listerners_.find(T::id);
    if (i==listerners_.end()) {
      T* listener_object = new T(this);
      listerners_[T::id] = listener_object;
      return listener_object;
    }
    return NULL;
  }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    namespace nw {
    }
    
    ExtensionFunction::ResponseAction
NwAppCloseAllWindowsFunction::Run() {
  AppWindowRegistry* registry = AppWindowRegistry::Get(browser_context());
  if (!registry)
    return RespondNow(Error(''));
  base::MessageLoop::current()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&NwAppCloseAllWindowsFunction::DoJob, registry, extension()->id()));
    }
    
    namespace extensions {
    }
    
    class NwObjCallObjectMethodFunction : public NWSyncExtensionFunction {
 public:
  NwObjCallObjectMethodFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }