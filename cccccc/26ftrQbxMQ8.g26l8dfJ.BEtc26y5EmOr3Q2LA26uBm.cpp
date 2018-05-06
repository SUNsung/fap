
        
          // JsAsker:
  void StartAsync(std::unique_ptr<base::Value> options) override;
    
    namespace atom {
    }
    
    #ifndef ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_
#define ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_
    
    
    {}  // namespace mate
    
      // Sent by history when the favicon of a URL changes.  The source is the
  // profile, and the details is FaviconChangedDetails (see
  // chrome/browser/favicon/favicon_changed_details.h).
  NOTIFICATION_FAVICON_CHANGED,
    
      // Register an observer for when a certain |accelerator| is struck. Returns
  // true if register successfully, or false if 1) the specificied |accelerator|
  // has been registered by another caller or other native applications, or
  // 2) shortcut handling is suspended.
  //
  // Note that we do not support recognizing that an accelerator has been
  // registered by another application on all platforms. This is a per-platform
  // consideration.
  bool RegisterAccelerator(const ui::Accelerator& accelerator,
                           Observer* observer);
    
    /**
 * @brief Helper logging macro for table-generated verbose log lines.
 *
 * Since logging in tables does not always mean a critical warning or error
 * but more likely a parsing or expected edge-case, we provide a TLOG.
 *
 * The tool user can set within config or via the CLI what level of logging
 * to tolerate. It's the table developer's job to assume consistency in logging.
 */
#define TLOG VLOG(1)
    
    /// Helper replacement for REGISTER, used within extension modules.
#define REGISTER_MODULE(t, r, n)                                               \
  auto t##Module = Registry::get().registry(r)->add(n, std::make_shared<t>());
    
     public:
  /**
   * @brief A getter for the status code property
   *
   * @return an integer representing the status code of the operation.
   */
  int getCode() const { return code_; }
    
    
    {
    {  c.reset();
}
}

    
    
    {} // namespace aria2
    
    void AbstractAuthResolver::setDefaultCred(std::string user,
                                          std::string password)
{
  defaultUser_ = std::move(user);
  defaultPassword_ = std::move(password);
}
    
    
    {
    {    httpConnection_->sendProxyRequest(std::move(httpRequest));
  }
  else {
    httpConnection_->sendPendingData();
  }
  if (httpConnection_->sendBufferIsEmpty()) {
    getDownloadEngine()->addCommand(getNextCommand());
    return true;
  }
  else {
    setWriteCheckSocket(getSocket());
    addCommandSelf();
    return false;
  }
}
    
      virtual bool finished() CXX11_OVERRIDE;
    
    void AnnounceList::moveToStoppedAllowedTier()
{
  auto itr = find_wrap_if(std::begin(tiers_), std::end(tiers_), currentTier_,
                          FindStoppedAllowedTier());
  setCurrentTier(std::move(itr));
}
    
      /**
   * Counts the number of tiers to which the 'completed' event can be sent.
   */
  size_t countCompletedAllowedTier() const;
    
    
    {  virtual std::unique_ptr<DiskWriter>
  newDiskWriter(const std::string& filename) CXX11_OVERRIDE
  {
    return make_unique<DiskWriterType>();
  }
};
    
    class AsyncNameResolverMan {
public:
  AsyncNameResolverMan();
  // Destructor does not call disableNameResolverCheck(). Application
  // must call it before the destruction of this object.
  ~AsyncNameResolverMan();
  // Enable IPv4 address lookup. default: true
  void setIPv4(bool ipv4) { ipv4_ = ipv4; }
  // Enable IPv6 address lookup. default: true
  void setIPv6(bool ipv6) { ipv6_ = ipv6; }
  // Returns true if asynchronous name resolution has been started.
  bool started() const;
  // Starts asynchronous name resolution.
  void startAsync(const std::string& hostname, DownloadEngine* e,
                  Command* command);
  // Appends resolved addresses to |res|.
  void getResolvedAddress(std::vector<std::string>& res) const;
  // Adds resolvers to DownloadEngine to check event notification.
  void setNameResolverCheck(DownloadEngine* e, Command* command);
  // Removes resolvers from DownloadEngine.
  void disableNameResolverCheck(DownloadEngine* e, Command* command);
  // Returns true if any of resolvers are added in DownloadEngine.
  bool resolverChecked() const { return resolverCheck_; }
  // Returns status value: 0 for inprogress, 1 for success and -1 for
  // failure.
  int getStatus() const;
  // Returns last error string
  const std::string& getLastError() const;
  // Resets state. Also removes resolvers from DownloadEngine.
  void reset(DownloadEngine* e, Command* command);
    }