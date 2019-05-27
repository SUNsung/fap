
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
#define TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_
    
    namespace tensorflow {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/core/framework/types.pb.h'
#include 'tensorflow/core/lib/core/status.h'
    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/core/platform/logging.h'
    
      // Factory for the default set of device options.
  static DeviceOptions Default() { return DeviceOptions(0); }
    
          // colon indicates that the argument starts with a URI scheme
      if (c == ':') {
        // it could also be a Windows filesystem path
        if (p == arg + 1)
          break;
    }
    
    class AutoUpdater : public mate::EventEmitter<AutoUpdater>,
                    public auto_updater::Delegate,
                    public WindowListObserver {
 public:
  static mate::Handle<AutoUpdater> Create(v8::Isolate* isolate);
    }
    
    
    {}  // namespace api
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    #include 'atom/browser/api/event_emitter.h'
#include 'native_mate/handle.h'
#include 'ui/display/display_observer.h'
#include 'ui/display/screen.h'
    
      // Gets/Sets the delegate.
  static Delegate* GetDelegate();
  static void SetDelegate(Delegate* delegate);
    
    #include 'atom/browser/net/about_protocol_handler.h'
    
    void OffscreenViewProxy::SetBitmap(const SkBitmap& bitmap) {
  if (view_bounds_.width() == bitmap.width() &&
      view_bounds_.height() == bitmap.height() && observer_) {
    view_bitmap_.reset(new SkBitmap(bitmap));
    observer_->OnProxyViewPaint(view_bounds_);
  }
}
    
    namespace internal {
    }
    
    class BaseEvent {
  friend class EventListener;
  DISALLOW_COPY_AND_ASSIGN(BaseEvent);
    }
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    typedef std::map<std::string,std::string> KeyMap;
    
    bool NwClipboardClearSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  clipboard->Clear(ui::CLIPBOARD_TYPE_COPY_PASTE);
  return true;
}
    
    NwObjDestroyFunction::NwObjDestroyFunction() {
}