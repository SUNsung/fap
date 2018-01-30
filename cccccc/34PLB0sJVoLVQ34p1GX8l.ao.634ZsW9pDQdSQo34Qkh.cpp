
        
          brightray::ContentClient content_client_;
  std::unique_ptr<content::ContentBrowserClient> browser_client_;
  std::unique_ptr<content::ContentRendererClient> renderer_client_;
  std::unique_ptr<content::ContentUtilityClient> utility_client_;
    
    
    {  DISALLOW_COPY_AND_ASSIGN(WebRequest);
};
    
    void Event::SetSenderAndMessage(content::WebContents* sender,
                                IPC::Message* message) {
  DCHECK(!sender_);
  DCHECK(!message_);
  sender_ = sender;
  message_ = message;
    }
    
    
    {  return v8::Local<v8::ObjectTemplate>::New(
      isolate, event_template)->NewInstance();
}
    
    #include 'storage/common/quota/quota_types.h'
    
     private:
  std::string mime_type_;
  std::string charset_;
  std::string data_;
    
    int LaunchProgram(const StringVector& relauncher_args,
                  const StringVector& argv) {
  // Redirect the stdout of child process to /dev/null, otherwise after
  // relaunch the child process will raise exception when writing to stdout.
  base::ScopedFD devnull(HANDLE_EINTR(open('/dev/null', O_WRONLY)));
  base::FileHandleMappingVector no_stdout;
  no_stdout.push_back(std::make_pair(devnull.get(), STDERR_FILENO));
  no_stdout.push_back(std::make_pair(devnull.get(), STDOUT_FILENO));
    }