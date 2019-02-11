
        
          static const Data& getData6() { return data6_; }
    
    
    {  // Returns two vector of Commands.  First one contains regular
  // commands.  Secod one contains so called routine commands, which
  // executed once per event poll returns.
  std::pair<std::vector<std::unique_ptr<Command>>,
            std::vector<std::unique_ptr<Command>>>
  setup(DownloadEngine* e, int family);
};
    
    
    {  virtual bool finished() = 0;
};
    
      ~DHTTokenTracker();
    
    DHTUnknownMessage::DHTUnknownMessage(const std::shared_ptr<DHTNode>& localNode,
                                     const unsigned char* data, size_t length,
                                     const std::string& ipaddr, uint16_t port)
    : DHTMessage(localNode, std::shared_ptr<DHTNode>()),
      length_(length),
      ipaddr_(ipaddr),
      port_(port)
{
  if (length_ == 0) {
    data_ = nullptr;
  }
  else {
    data_ = new unsigned char[length];
    memcpy(data_, data, length);
  }
}
    
      // always return false
  virtual bool isReply() const CXX11_OVERRIDE;
    
      double ScoreOutputSize(int size) const override;
    
    
    {}  // namespace guetzli
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    // Entropy encoding (Huffman) utilities.
    
    #endif  // GUETZLI_FAST_LOG_H_

    
      template <typename T>
  void set_allocated() noexcept {
    using type = std::decay_t<T>;
    vtable_ = invoke_table_t::template get_invocation_table_of<type, false>();
    cmd_ = &trait<type>::template process_cmd<false>;
  }
    
    struct alignas(16) LoopData {
    friend struct Loop;
private:
    std::mutex deferMutex;
    int currentDeferQueue = 0;
    std::vector<fu2::unique_function<void()>> deferQueues[2];
    }
    
                    /* First of all we need to check if this socket was deleted due to upgrade */
                if (httpContextData->upgradedWebSocket) {
                    /* Reset upgradedWebSocket before we return */
                    void *tmp = httpContextData->upgradedWebSocket;
                    httpContextData->upgradedWebSocket = nullptr;
                    return tmp;
                }
    
    
    {            return s;
        });