
        
        #ifndef CONTENT_NW_SRC_API_APP_APP_H_
#define CONTENT_NW_SRC_API_APP_APP_H_
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    v8::Handle<v8::Value> AllocateId(int routing_id);
    
    void Menu::Append(MenuItem* menu_item) {
  menu_items.push_back(menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_append(GTK_MENU_SHELL(menu_), menu_item->menu_item_);
}
    
    void Menu::Create(const base::DictionaryValue& option) {
  is_menu_modified_ = true;
  menu_delegate_.reset(new MenuDelegate(object_manager()));
  menu_model_.reset(new ui::NwMenuModel(menu_delegate_.get()));
    }
    
    void MenuItem::Destroy() {
  gtk_widget_destroy(menu_item_);
  g_object_unref(G_OBJECT(menu_item_));
}
    
    class NwClipboardClearSyncFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardClearSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    // For desktop capture APIs
#include 'base/base64.h'
#include 'base/strings/string16.h'
#include 'base/strings/utf_string_conversions.h'
#include 'chrome/browser/media/webrtc/desktop_media_list_observer.h'
#include 'chrome/browser/media/webrtc/desktop_streams_registry.h'
#include 'chrome/browser/media/webrtc/media_capture_devices_dispatcher.h'
#include 'chrome/browser/media/webrtc/native_desktop_media_list.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_process_host.h'
#include 'content/public/browser/web_contents.h'
#include 'third_party/webrtc/modules/desktop_capture/desktop_capture_options.h'
#include 'third_party/webrtc/modules/desktop_capture/desktop_capturer.h'
#include 'ui/gfx/codec/png_codec.h'
#include 'ui/gfx/image/image.h'
#include 'ui/gfx/image/image_skia.h'
    
        if (LIKELY(!(flags() & kFlagMaybeShared))) {
      return false;
    }
    
    //  GCC 4.9 with ASAN has a problem: a function with no_sanitize_address calling
//  a function with always_inline fails to build. The _mm_* functions are marked
//  always_inline.
//  https://gcc.gnu.org/bugzilla/show_bug.cgi?id=67368
#if defined FOLLY_SANITIZE_ADDRESS && FOLLY_SANITIZE_ADDRESS == 1 && \
    __GNUC_PREREQ(4, 9)
#define _mm_load_si128(p) (*(p))
#define _mm_loadu_si128(p) ((__m128i)__builtin_ia32_loaddqu((const char*)(p)))
#ifdef _mm_cmpestri
#undef _mm_cmpestri
#endif
#define _mm_cmpestri(a, b, c, d, e) \
  __builtin_ia32_pcmpestri128((__v16qi)(a), b, (__v16qi)(c), d, e)
#endif
    
    template <typename Fn>
using ArgumentTypes =
  typename ArgumentTypesByKind<IdentifyCallable::getKind<Fn>(), Fn>::type;