
        
        namespace {
    }
    
    int64_t DownloadItem::GetReceivedBytes() const {
  return download_item_->GetReceivedBytes();
}
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(InAppPurchase);
};
    
    v8::Local<v8::Value> Net::URLRequest(v8::Isolate* isolate) {
  return URLRequest::GetConstructor(isolate)->GetFunction();
}
    
    // static
v8::Local<v8::Value> PowerMonitor::Create(v8::Isolate* isolate) {
  if (!Browser::Get()->is_ready()) {
    isolate->ThrowException(v8::Exception::Error(mate::StringToV8(
        isolate,
        'Cannot require \'powerMonitor\' module before app is ready')));
    return v8::Null(isolate);
  }
    }
    
    
    {    return SingleGradientDef(
        'MergeMultiScalarFeatureTensorsGradient',
        '',
        input_blob_names,
        output_blob_names);
  }
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
    
    {REGISTER_CPU_OPERATOR(Glu, GluOp<float, CPUContext>);
} // namespace caffe2

    
        std::unique_ptr<DHTPeerAnnounceStorage> peerAnnounceStorage;
    
      std::shared_ptr<DHTNode> newNode_;
    
    
    {  void setTaskFactory(DHTTaskFactory* taskFactory);
};
    
    
    {  void deserialize(const std::string& filename);
};
    
    void DHTRoutingTableSerializer::setLocalNode(
    const std::shared_ptr<DHTNode>& localNode)
{
  localNode_ = localNode;
}
    
      virtual std::shared_ptr<DHTTask>
  createPingTask(const std::shared_ptr<DHTNode>& remoteNode,
                 int numRetry = 0) = 0;
    
    namespace aria2 {
    }
    
      DHTTokenTracker(const unsigned char* initialSecret);
    
    bool DHTUnknownMessage::isReply() const { return false; }
    
      // do nothing
  virtual void doReceivedAction() CXX11_OVERRIDE;
    
    DNSCache::CacheEntry::CacheEntry(const CacheEntry& c) = default;