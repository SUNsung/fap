
        
        namespace nwapi {
    }
    
    #ifndef CONTENT_NW_SRC_API_BASE_BASE_H_
#define CONTENT_NW_SRC_API_BASE_BASE_H_
    
    // Gets the path to the content shell's pak file.
bool GetResourcesPakFilePath(base::FilePath& output);
    
    void Clipboard::SetText(std::string& text) {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  ui::Clipboard::ObjectMap map;
  map[ui::Clipboard::CBF_TEXT].push_back(
      std::vector<char>(text.begin(), text.end()));
  clipboard->WriteObjects(ui::CLIPBOARD_TYPE_COPY_PASTE, map);
}
    
    namespace base {
class ListValue;
}
    
     private:
  // Helper functions for bindings.
  static void RequireNwGui(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetAbsolutePath(const v8::FunctionCallbackInfo<v8::Value>& args);
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
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
    
     private:
  ObjectManager* object_manager_;