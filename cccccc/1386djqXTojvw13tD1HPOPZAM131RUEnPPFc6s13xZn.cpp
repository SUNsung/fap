
        
          // Return to the UI thread to handle opening a new browser tab.
  ui_task_runner_->PostTask(
      FROM_HERE, base::BindOnce(&ProcessSingleton::LinuxWatcher::HandleMessage,
                                parent_, current_dir, tokens, this));
  fd_watch_controller_.reset();
    
      // If we don't have any window then quitAndInstall immediately.
  if (WindowList::IsEmpty()) {
    auto_updater::AutoUpdater::QuitAndInstall();
    return;
  }
    
    v8::Local<v8::Promise> StartTracing(
    v8::Isolate* isolate,
    const base::trace_event::TraceConfig& trace_config) {
  electron::util::Promise promise(isolate);
  v8::Local<v8::Promise> handle = promise.GetHandle();
    }
    
    v8::Local<v8::Promise> Debugger::SendCommand(mate::Arguments* args) {
  electron::util::Promise promise(isolate());
  v8::Local<v8::Promise> handle = promise.GetHandle();
    }
    
    
    {}  // namespace electron
    
    #include <map>
#include <string>
#include <vector>
    
      v8::Local<v8::Promise> PurchaseProduct(const std::string& product_id,
                                         mate::Arguments* args);
    
     protected:
  void PopupAt(TopLevelWindow* window,
               int x,
               int y,
               int positioning_item,
               const base::Closure& callback) override;
  void ClosePopupAt(int32_t window_id) override;
    
    
    {}  // namespace api
    
        base::win::ShortcutProperties props;
    base::string16 appID;
    if (content::Shell::GetPackage()->root()->GetString('app-id', &appID) == false)
      content::Shell::GetPackage()->root()->GetString(switches::kmName, &appID);
    const std::wstring appName = base::UTF8ToWide(content::Shell::GetPackage()->GetName());
    props.set_app_id(appID);
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/api_messages.h'
#include 'content/public/renderer/render_view.h'
#include 'content/public/renderer/render_thread.h'
#include 'content/public/renderer/v8_value_converter.h'
#include 'third_party/WebKit/public/web/WebView.h'
#include 'third_party/WebKit/public/web/WebLocalFrame.h'
#include 'ui/base/resource/resource_bundle.h'
    
    namespace nwapi {
    }
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
      std::string type;
    
    void MenuItem::SetIcon(const std::string& icon) {
  if (icon.empty()) {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_), NULL); 
  } else {
    gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                  gtk_image_new_from_file(icon.c_str()));
    gtk_image_menu_item_set_always_show_image(GTK_IMAGE_MENU_ITEM(menu_item_),
                                              TRUE);
  }
}
    
    void NwAppCloseAllWindowsFunction::DoJob(AppWindowRegistry* registry, std::string id) {
  if (base::FeatureList::IsEnabled(::features::kNWNewWin)) {
    chrome::CloseAllBrowsers();
  }
  AppWindowRegistry::AppWindowList windows =
    registry->GetAppWindowsForApp(id);
    }
    
    NwClipboardSetListSyncFunction::NwClipboardSetListSyncFunction() {
}
    
      // Ensure nomnigraph can handle this change
  auto nn = caffe2::convertToNNModule(net);
  auto new_net = caffe2::convertToCaffe2Proto(nn);
    
      Fork() {
    pid = fork();
    if (pid < 0) {
      throw std::system_error(errno, std::system_category(), 'fork');
    }
  }
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    namespace xgboost {
namespace common {
/*! \brief thread local entry for random. */
struct RandomThreadLocalEntry {
  /*! \brief the random engine instance. */
  GlobalRandomEngine engine;
};
    }
    }
    
    template <typename T>
struct TestTransformRange {
  void XGBOOST_DEVICE operator()(size_t _idx,
                                 Span<bst_float> _out, Span<const bst_float> _in) {
    _out[_idx] = _in[_idx];
  }
};
    
      devices = GPUSet{0, 1};
  ASSERT_TRUE(devices != GPUSet::Empty());
  EXPECT_EQ(devices.Size(), 1);
    
    namespace xgboost {
namespace common {
/*!
 * \brief Define mt19937 as default type Random Engine.
 */
using RandomEngine = std::mt19937;
    }
    }
    
    template <typename T>
void HostDeviceVector<T>::Shard(const GPUDistribution& distribution) const { }
    
    
    {
    {
    {  inline void PutChar(char ch) {
    out_buf += ch;
    if (out_buf.length() >= kBufferSize) Flush();
  }
  inline void Flush(void) {
    if (out_buf.length() != 0) {
      fp->Write(&out_buf[0], out_buf.length());
      out_buf.clear();
    }
  }
};
}  // namespace common
}  // namespace xgboost
#endif  // XGBOOST_COMMON_BASE64_H_

    
      case errSSLClosedGraceful:
  case errSSLClosedNoNotify:
    closeConnection();
    return TLS_ERR_ERROR;
    
    TLSContext* TLSContext::make(TLSSessionSide side, TLSVersion minVer)
{
  return new OpenSSLTLSContext(side, minVer);
}
    
    
    {  int r = select(sockfd_ + 1, nullptr, &fds, nullptr, &tv);
  int errNum = SOCKET_ERRNO;
  if (r == 1) {
    return true;
  }
  if (r == 0) {
    // time out
    return false;
  }
  if (errNum == A2_EINPROGRESS || errNum == A2_EINTR) {
    return false;
  }
  throw DL_RETRY_EX(fmt(EX_SOCKET_CHECK_WRITABLE, errorMsg(errNum).c_str()));
#endif   // !HAVE_POLL
}
    
    bool WinTLSContext::addCredentialFile(const std::string& certfile,
                                      const std::string& keyfile)
{
  std::stringstream ss;
  BufferedFile(certfile.c_str(), 'rb').transfer(ss);
  auto data = ss.str();
  CRYPT_DATA_BLOB blob = {(DWORD)data.length(), (BYTE*)data.c_str()};
  if (!::PFXIsPFXBlob(&blob)) {
    A2_LOG_ERROR('Not a valid PKCS12 file');
    return false;
  }
  HCERTSTORE store =
      ::PFXImportCertStore(&blob, L'', CRYPT_EXPORTABLE | CRYPT_USER_KEYSET);
  if (!store_) {
    store = ::PFXImportCertStore(&blob, nullptr,
                                 CRYPT_EXPORTABLE | CRYPT_USER_KEYSET);
  }
  if (!store) {
    A2_LOG_ERROR('Failed to import PKCS12 store');
    return false;
  }
  auto ctx = ::CertEnumCertificatesInStore(store, nullptr);
  if (!ctx) {
    A2_LOG_ERROR('PKCS12 file does not contain certificates');
    ::CertCloseStore(store, 0);
    return false;
  }
  ::CertFreeCertificateContext(ctx);
    }
    
      std::chrono::seconds timeout_;
    
    namespace aria2 {
    }
    
      virtual std::unique_ptr<Dict> getResponse() = 0;
    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
      void setLocalNode(const std::shared_ptr<DHTNode>& localNode);
    
    DHTTaskExecutor::~DHTTaskExecutor() = default;
    
    namespace aria2 {
    }