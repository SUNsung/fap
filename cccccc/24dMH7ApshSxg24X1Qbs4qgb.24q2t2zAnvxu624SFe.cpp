
        
        #include 'base/command_line.h'
    
    void Event::RenderFrameDeleted(content::RenderFrameHost* rfh) {
  if (sender_ != rfh)
    return;
  sender_ = nullptr;
  message_ = nullptr;
}
    
      // Finds out the TrackableObject from the class it wraps.
  static T* FromWrappedClass(v8::Isolate* isolate,
                             base::SupportsUserData* wrapped) {
    int32_t id = GetIDFromWrappedClass(wrapped);
    if (!id)
      return nullptr;
    return FromWeakMapID(isolate, id);
  }
    
    void AutoUpdater::CheckForUpdates() {}
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    void URLRequestAboutJob::Kill() {
  weak_ptr_factory_.InvalidateWeakPtrs();
  URLRequestJob::Kill();
}