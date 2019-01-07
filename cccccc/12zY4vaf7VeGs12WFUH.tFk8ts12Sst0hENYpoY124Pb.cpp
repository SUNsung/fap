
        
        Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
    #endif  // CONTENT_NW_SRC_API_CLIPBOARD_CLIPBOARD_H_

    
    void MenuItem::SetEnabled(bool enabled) {
  gtk_widget_set_sensitive(menu_item_, enabled);
}
    
    
    {
    {    std::string error_;
    std::unique_ptr<ui::ScopedClipboardWriter> scw_;
  };
}
    
    namespace extensions {
    }
    
    bool NwObjCreateFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::DictionaryValue* options = nullptr;
  int id = 0;
  std::string type;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetDictionary(2, &options));
    }
    
        void DispatchEvent(
        events::HistogramValue histogram_value,
        const std::string& event_name,
        std::unique_ptr<base::ListValue> args) {
      DCHECK_CURRENTLY_ON(BrowserThread::UI);
      ExtensionsBrowserClient::Get()->BroadcastEventToRenderers(
                                                                histogram_value, event_name, std::move(args));
    }