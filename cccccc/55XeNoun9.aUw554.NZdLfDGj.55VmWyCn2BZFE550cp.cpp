
        
        #endif // BITCOIN_QT_NETWORKSTYLE_H

    
    namespace Ui {
    class OpenURIDialog;
}
    
    private:
    Ui::SignVerifyMessageDialog *ui;
    WalletModel *model;
    const PlatformStyle *platformStyle;
    
    
    {    CRIPEMD160();
    CRIPEMD160& Write(const unsigned char* data, size_t len);
    void Finalize(unsigned char hash[OUTPUT_SIZE]);
    CRIPEMD160& Reset();
};
    
    Status DumpDescriptor(Env* env, const std::string& fname, WritableFile* dst) {
  return PrintLogContents(env, fname, VersionEditPrinter, dst);
}
    
    
    {}  // namespace leveldb
    
    
    {  // Changes *key to a short string >= *key.
  // Simple comparator implementations may return with *key unchanged,
  // i.e., an implementation of this method that does nothing is correct.
  virtual void FindShortSuccessor(std::string* key) const = 0;
};
    
      // Create a slice that refers to the contents of 's'
  Slice(const std::string& s) : data_(s.data()), size_(s.size()) {}
    
    Status Footer::DecodeFrom(Slice* input) {
  const char* magic_ptr = input->data() + kEncodedLength - 8;
  const uint32_t magic_lo = DecodeFixed32(magic_ptr);
  const uint32_t magic_hi = DecodeFixed32(magic_ptr + 4);
  const uint64_t magic = ((static_cast<uint64_t>(magic_hi) << 32) |
                          (static_cast<uint64_t>(magic_lo)));
  if (magic != kTableMagicNumber) {
    return Status::Corruption('not an sstable (bad magic number)');
  }
    }
    
      if (s.ok()) {
    // We've successfully read the footer and the index block: we're
    // ready to serve requests.
    Block* index_block = new Block(index_block_contents);
    Rep* rep = new Table::Rep;
    rep->options = options;
    rep->file = file;
    rep->metaindex_handle = footer.metaindex_handle();
    rep->index_block = index_block;
    rep->cache_id = (options.block_cache ? options.block_cache->NewId() : 0);
    rep->filter_data = nullptr;
    rep->filter = nullptr;
    *table = new Table(rep);
    (*table)->ReadMeta(footer);
  }
    
      rv_ = gnutls_init(&sslSession_, flags);
#else  // GNUTLS_VERSION_NUMBER >= 0x030000
  rv_ = gnutls_init(&sslSession_, tlsContext_->getSide() == TLS_CLIENT
                                      ? GNUTLS_CLIENT
                                      : GNUTLS_SERVER);
#endif // GNUTLS_VERSION_NUMBER >= 0x030000
  if (rv_ != GNUTLS_E_SUCCESS) {
    return TLS_ERR_ERROR;
  }
#ifdef A2_DISABLE_OCSP
  if (tlsContext_->getSide() == TLS_CLIENT) {
    // Enable session ticket extension manually because of
    // GNUTLS_NO_EXTENSIONS.
    rv_ = gnutls_session_ticket_enable_client(sslSession_);
    if (rv_ != GNUTLS_E_SUCCESS) {
      return TLS_ERR_ERROR;
    }
  }
#endif // A2_DISABLE_OCSP
    
    bool WinTLSContext::addTrustedCACertFile(const std::string& certfile)
{
  A2_LOG_WARN('TLS CA bundle files are not supported. '
              'The system trust store will be used.');
  return false;
}
    
    void DHTReplaceNodeTask::onReceived(const DHTPingReplyMessage* message)
{
  A2_LOG_INFO(fmt('ReplaceNode: Ping reply received from %s.',
                  message->getRemoteNode()->toString().c_str()));
  setFinished(true);
}
    
    namespace aria2 {
    }
    
    
    // ============
    // string types
    // ============