
        
        namespace atom {
    }
    
    void AutoUpdater::SetFeedURL(mate::Arguments* args) {
  auto_updater::AutoUpdater::SetFeedURL(args);
}
    
    
    {}  // namespace api
    
    
    {}  // namespace
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary dict(isolate, exports);
  dict.Set('Button',
           mate::CreateConstructor<Button>(isolate, base::Bind(&Button::New)));
}
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  mate::Dictionary dict(context->GetIsolate(), exports);
  dict.SetMethod('showMessageBox', &ShowMessageBox);
  dict.SetMethod('showErrorBox', &atom::ShowErrorBox);
  dict.SetMethod('showOpenDialog', &ShowOpenDialog);
  dict.SetMethod('showSaveDialog', &ShowSaveDialog);
#if defined(OS_MACOSX) || defined(OS_WIN)
  dict.SetMethod('showCertificateTrustDialog',
                 &certificate_trust::ShowCertificateTrust);
#endif
}
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary(isolate, exports)
      .Set('DownloadItem',
           atom::api::DownloadItem::GetConstructor(isolate)->GetFunction());
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
     protected:
  explicit LabelButton(const std::string& text);
  ~LabelButton() override;
    
      static void clearData();
    
    DHTReplaceNodeTask::DHTReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                                       const std::shared_ptr<DHTNode>& newNode)
    : bucket_(bucket),
      newNode_(newNode),
      numRetry_(0),
      timeout_(DHT_MESSAGE_TIMEOUT)
{
}
    
    std::string DHTResponseMessage::toString() const
{
  return fmt('dht response %s TransactionID=%s Remote:%s(%u), id=%s, v=%s, %s',
             getMessageType().c_str(), util::toHex(getTransactionID()).c_str(),
             getRemoteNode()->getIPAddress().c_str(),
             getRemoteNode()->getPort(),
             util::toHex(getRemoteNode()->getID(), DHT_ID_LENGTH).c_str(),
             util::torrentPercentEncode(getVersion()).c_str(),
             toStringOptional().c_str());
}
    
      void getBuckets(std::vector<std::shared_ptr<DHTBucket>>& buckets) const;
    
      const std::shared_ptr<DHTNode>& getLocalNode() const { return localNode_; }
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    DHTTaskExecutor::DHTTaskExecutor(int numConcurrent)
    : numConcurrent_(numConcurrent)
{
}
    
    
    {} // namespace aria2
    
    DHTTokenTracker::DHTTokenTracker(const unsigned char* initialSecret)
{
  memcpy(secret_[0], initialSecret, SECRET_SIZE);
  memcpy(secret_[1], initialSecret, SECRET_SIZE);
}
    
    #include 'common.h'
#include <string>
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        base_type::fence_before_store(order);
        BOOST_ATOMIC_DETAIL_ARM_STORE64(&storage, v);
        base_type::fence_after_store(order);
    }
    
    #endif // BOOST_ATOMIC_DETAIL_PAUSE_HPP_INCLUDED_
