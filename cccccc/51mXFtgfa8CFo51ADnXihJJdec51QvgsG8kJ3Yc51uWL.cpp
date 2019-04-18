
        
              // colon indicates that the argument starts with a URI scheme
      if (c == ':') {
        // it could also be a Windows filesystem path
        if (p == arg + 1)
          break;
    }
    
    #include 'atom/browser/native_window_views.h'
    
     private:
  void Destroy();
    
    class AtomQuotaPermissionContext : public content::QuotaPermissionContext {
 public:
  typedef content::QuotaPermissionContext::QuotaPermissionResponse response;
    }
    
    
    {}  // namespace atom
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    // The argument separating arguments intended for the relauncher process from
// those intended for the relaunched process. '---' is chosen instead of '--'
// because CommandLine interprets '--' as meaning 'end of switches', but
// for many purposes, the relauncher process' CommandLine ought to interpret
// arguments intended for the relaunched process, to get the correct settings
// for such things as logging and the user-data-dir in case it affects crash
// reporting.
extern const CharType* kRelauncherArgSeparator;
    
    namespace atom {
    }
    
    
    {}  // namespace atom
