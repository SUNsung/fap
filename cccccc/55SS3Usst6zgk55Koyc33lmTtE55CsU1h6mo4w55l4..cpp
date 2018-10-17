
        
        namespace api {
    }
    
    void ShowOpenDialog(const file_dialog::DialogSettings& settings,
                    mate::Arguments* args) {
  v8::Local<v8::Value> peek = args->PeekNext();
  file_dialog::OpenDialogCallback callback;
  if (mate::Converter<file_dialog::OpenDialogCallback>::FromV8(
          args->isolate(), peek, &callback)) {
    file_dialog::ShowOpenDialog(settings, callback);
  } else {
    std::vector<base::FilePath> paths;
    if (file_dialog::ShowOpenDialog(settings, &paths))
      args->Return(paths);
  }
}
    
      // Override download::DownloadItem::Observer methods
  void OnDownloadUpdated(download::DownloadItem* download) override;
  void OnDownloadDestroyed(download::DownloadItem* download) override;
    
    
    {  accelerator_callback_map_.erase(accelerator);
  GlobalShortcutListener::GetInstance()->UnregisterAccelerator(accelerator,
                                                               this);
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    namespace mate {
template <>
struct Converter<ui::IdleState> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const ui::IdleState& in) {
    switch (in) {
      case ui::IDLE_STATE_ACTIVE:
        return mate::StringToV8(isolate, 'active');
      case ui::IDLE_STATE_IDLE:
        return mate::StringToV8(isolate, 'idle');
      case ui::IDLE_STATE_LOCKED:
        return mate::StringToV8(isolate, 'locked');
      case ui::IDLE_STATE_UNKNOWN:
      default:
        return mate::StringToV8(isolate, 'unknown');
    }
  }
};
}  // namespace mate
    
    
    {}  // namespace api