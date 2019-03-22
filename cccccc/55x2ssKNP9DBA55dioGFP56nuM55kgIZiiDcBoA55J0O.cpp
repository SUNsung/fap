
        
        namespace atom {
    }
    
    void Event::SetSenderAndMessage(content::RenderFrameHost* sender,
                                IPC::Message* message) {
  DCHECK(!sender_);
  DCHECK(!message_);
  sender_ = sender;
  message_ = message;
    }
    
      // content::WebContentsObserver implementations:
  void RenderFrameDeleted(content::RenderFrameHost* rfh) override;
  void RenderFrameHostChanged(content::RenderFrameHost* old_rfh,
                              content::RenderFrameHost* new_rfh) override;
  void FrameDeleted(content::RenderFrameHost* rfh) override;
    
    #if defined(OS_LINUX)
typedef PowerObserverLinux PowerObserver;
#else
typedef base::PowerObserver PowerObserver;
#endif  // defined(OS_LINUX)
    
    OffscreenViewProxy::~OffscreenViewProxy() {
  if (observer_) {
    observer_->ProxyViewDestroyed(this);
  }
}