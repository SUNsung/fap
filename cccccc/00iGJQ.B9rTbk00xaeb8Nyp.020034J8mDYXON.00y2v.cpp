
        
        GlobalMenuBarRegistrarX11::~GlobalMenuBarRegistrarX11() {
  if (registrar_proxy_) {
    g_signal_handlers_disconnect_by_func(
        registrar_proxy_, reinterpret_cast<void*>(OnNameOwnerChangedThunk),
        this);
    g_object_unref(registrar_proxy_);
  }
}
    
    
    {}  // namespace electron
    
    
    {  DISALLOW_COPY_AND_ASSIGN(GlobalShortcut);
};
    
    
    {}  // namespace api
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  View::SetConstructor(isolate, base::BindRepeating(&View::New));
    }
    
    #if defined(OS_MACOSX)
#include 'shell/browser/ui/cocoa/delayed_native_view_host.h'
#endif