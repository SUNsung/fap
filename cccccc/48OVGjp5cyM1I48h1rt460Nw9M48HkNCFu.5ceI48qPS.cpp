
        
        bool SavePageHandler::Handle(const base::FilePath& full_path,
                             const content::SavePageType& save_type) {
  auto download_manager = content::BrowserContext::GetDownloadManager(
      web_contents_->GetBrowserContext());
  download_manager->AddObserver(this);
  // Chromium will create a 'foo_files' directory under the directory of saving
  // page 'foo.html' for holding other resource files of 'foo.html'.
  base::FilePath saved_main_directory_path = full_path.DirName().Append(
      full_path.RemoveExtension().BaseName().value() +
      FILE_PATH_LITERAL('_files'));
  bool result = web_contents_->SavePage(full_path,
                                        saved_main_directory_path,
                                        save_type);
  download_manager->RemoveObserver(this);
  // If initialization fails which means fail to create |DownloadItem|, we need
  // to delete the |SavePageHandler| instance to avoid memory-leak.
  if (!result)
    delete this;
  return result;
}
    
    void AtomQuotaPermissionContext::RequestQuotaPermission(
    const content::StorageQuotaParams& params,
    int render_process_id,
    const PermissionCallback& callback) {
  callback.Run(response::QUOTA_PERMISSION_RESPONSE_ALLOW);
}
    
    #include 'atom/browser/net/asar/asar_protocol_handler.h'
    
    HttpProtocolHandler::HttpProtocolHandler(const std::string& scheme)
    : scheme_(scheme) {
}
    
    #include 'atom/browser/net/js_asker.h'
#include 'base/memory/ref_counted_memory.h'
#include 'net/http/http_status_code.h'
#include 'net/url_request/url_request_simple_job.h'
    
    // The 'type' argument identifying a relauncher process ('--type=relauncher').
extern const CharType* kRelauncherTypeArg;
    
        auto startPoint = high_resolution_clock::now();
    vector<thread *> threads;
    for (int i = 0; i < THREADS; i++) {
        threads.push_back(new thread([i] {
            while(nextConnection(i));
        }));
    }
    
    int connections, remainingBytes;
vector<uv_stream_t *> sockets;
sockaddr_in addr;
    
    int connections, remainingBytes;
vector<uv_stream_t *> sockets;
sockaddr_in addr;
    
        unsigned int maxPayload;
    Hub *hub;
    int extensionOptions;
    uS::Timer *timer = nullptr, *httpTimer = nullptr;
    std::string userPingMessage;
    std::stack<uS::Poll *> iterators;