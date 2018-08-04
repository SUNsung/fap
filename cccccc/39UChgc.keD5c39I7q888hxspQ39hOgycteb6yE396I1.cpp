
        
          /// When evaluating an expression in the context of an existing source file,
  /// we may want to prefer declarations from that source file.
  /// The DebuggerClient can return a private-discriminator to tell lookup to
  /// prefer these certain decls.
  virtual Identifier getPreferredPrivateDiscriminator() = 0;
    
    bool swift::unicode::isSingleUnicodeScalar(StringRef S) {
  unsigned Scalar;
  return extractFirstUnicodeScalarImpl(S, Scalar);
}
    
    #include 'Private.h'
#include 'swift/Runtime/Once.h'
#include 'swift/Runtime/Debug.h'
#include <type_traits>
    
      /// The number of fix-its pushed into the rewrite buffer. Use this to
  /// determine whether to call `printResult`.
  unsigned NumFixitsApplied;
    
    
    {} // end namespace swift
    
    
    {} // namespace SourceKit
    
    void AbstractBtMessage::setBtRequestFactory(BtRequestFactory* factory)
{
  requestFactory_ = factory;
}
    
    public:
  AbstractCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      DownloadEngine* e, const std::shared_ptr<SocketCore>& s = nullptr,
      const std::shared_ptr<SocketRecvBuffer>& socketRecvBuffer = nullptr,
      bool incNumConnection = true);
    
    public:
  AbstractHttpServerResponseCommand(
      cuid_t cuid, const std::shared_ptr<HttpServer>& httpServer,
      DownloadEngine* e, const std::shared_ptr<SocketCore>& socket);
    
      virtual bool getEraseAfterParse() const CXX11_OVERRIDE;
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
      std::shared_ptr<HttpConnection> httpConnection_;
    
    class AnnounceList {
public:
private:
  std::deque<std::shared_ptr<AnnounceTier>> tiers_;
  std::deque<std::shared_ptr<AnnounceTier>>::iterator currentTier_;
  std::deque<std::string>::iterator currentTracker_;
  bool currentTrackerInitialized_;
    }
    
    std::ostream& operator<<(std::ostream& o,
                         const std::shared_ptr<AuthConfig>& authConfig)
{
  o << authConfig->getAuthText();
  return o;
}
    
      const std::string& getPassword() const { return password_; }