
        
          scoped_ptr<base::Value> value_option(
      converter->FromV8Value(options, isolate->GetCurrentContext()));
  if (!value_option.get() ||
      !value_option->IsType(base::Value::TYPE_DICTIONARY))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'option' passed to AllocateObject')));
    
    // Get RenderView from current js context (only works under window context).
content::RenderView* GetCurrentRenderView();
content::RenderView* GetEnteredRenderView();
    
    namespace nw {
    }
    
    void MenuItem::SetEnabled(bool enabled) {
  gtk_widget_set_sensitive(menu_item_, enabled);
}
    
     protected:
  ~NwObjAllocateIdFunction() override;
    
    #include 'extensions/browser/extension_function.h'