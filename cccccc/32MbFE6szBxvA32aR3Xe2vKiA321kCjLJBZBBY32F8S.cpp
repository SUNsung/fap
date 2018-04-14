 private:
  scoped_refptr<AtomBrowserContext> browser_context_;
    
    #include <string>
    
    // Handles the HTTP basic auth, must be created on IO thread.
class LoginHandler : public content::ResourceDispatcherHostLoginDelegate {
 public:
  LoginHandler(net::AuthChallengeInfo* auth_info, net::URLRequest* request);
    }
    
    namespace asar {
    }
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    net::URLRequestJob* HttpProtocolHandler::MaybeCreateJob(
    net::URLRequest* request,
    net::NetworkDelegate* network_delegate) const {
  return net::URLRequestHttpJob::Factory(request,
                                         network_delegate,
                                         scheme_);
}
    
      // URLRequestJob:
  void GetResponseInfo(net::HttpResponseInfo* info) override;
    
    class TrayIconGtk : public TrayIcon,
                    public views::StatusIconLinux::Delegate {
 public:
  TrayIconGtk();
  virtual ~TrayIconGtk();
    }
    
    const char kViewClassName[] = 'AtomNativeFrameView';