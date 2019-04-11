
        
        
    {  // Computes the SHA256 hash of each |block_size| chunk in |contents|, placing
  // the results into |hashes|.
  static void ComputeHashesForContent(const std::string& contents,
                                      size_t block_size,
                                      std::vector<std::string>* hashes);
};
    
    decltype(__pfnDliNotifyHook2) __pfnDliNotifyHook2 = load_exe_hook;
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    IPC_MESSAGE_ROUTED3(ShellViewMsg_Object_On_Event,
                    int /* object id */,
                    std::string /* event name */,
                    base::ListValue /* arguments */)
    
      static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    #include 'content/nw/src/api/base/base.h'
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    public:
  EventListener(int id,
                const base::WeakPtr<DispatcherHost>& dispatcher_host,
                const base::DictionaryValue& option);
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
      std::string type;
    
     protected:
  ~NwAppCrashBrowserFunction() override {}
    
    #include 'base/base64.h'
#include 'base/logging.h'
#include 'base/strings/stringprintf.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/nw_clipboard.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
#include 'ui/base/clipboard/clipboard.h'
#include 'ui/base/clipboard/clipboard_constants.h'
#include 'ui/base/clipboard/scoped_clipboard_writer.h'
#include 'ui/gfx/codec/jpeg_codec.h'
#include 'ui/gfx/codec/png_codec.h'
#include 'third_party/skia/include/core/SkBitmap.h'