
        
          // Import CA certificates.
  // Tries to import all the certificates given.  The root will be trusted
  // according to |trust_bits|.  Any certificates that could not be imported
  // will be listed in |not_imported|.
  // |trust_bits| should be a bit field of TRUST* values from NSSCertDatabase.
  // Returns false if there is an internal error, otherwise true is returned and
  // |not_imported| should be checked for any certificates that were not
  // imported.
  bool ImportCACerts(const net::ScopedCERTCertificateList& certificates,
                     net::NSSCertDatabase::TrustBits trust_bits,
                     net::NSSCertDatabase::ImportCertFailureList* not_imported);
    
      GDBusProxy* registrar_proxy_;
    
    #include 'native_mate/wrappable.h'
    
    v8::Local<v8::Value> Converter<Promise>::ToV8(v8::Isolate* isolate,
                                              Promise val) {
  return val.GetHandle();
}
    
    
    {  static bool FromV8(v8::Isolate* isolate, v8::Local<v8::Value> val, T** out) {
    *out = static_cast<T*>(
        static_cast<WrappableBase*>(internal::FromV8Impl(isolate, val)));
    return *out != nullptr;
  }
};
    
    void InspectableWebContentsImpl::AttachTo(
    scoped_refptr<content::DevToolsAgentHost> host) {
  Detach();
  agent_host_ = std::move(host);
  // We could use ForceAttachClient here if problem arises with
  // devtools multiple session support.
  agent_host_->AttachClient(this);
}
    
    
    {}  // namespace
    
          auto wrapInput = [&](Node::Kind kind) {
        auto parent = Dem.createNode(kind);
        parent->addChild(input, Dem);
        input = parent;
      };
      switch (flags.getValueOwnership()) {
      case ValueOwnership::Default:
        /* nothing */
        break;
      case ValueOwnership::InOut:
        wrapInput(Node::Kind::InOut);
        break;
      case ValueOwnership::Shared:
        wrapInput(Node::Kind::Shared);
        break;
      case ValueOwnership::Owned:
        wrapInput(Node::Kind::Owned);
        break;
      }
    
      llvm::DenseMap<ASTNode, ProfileCounter> RegionLoadedCounterMap;
    
      SourceLoc getLParenLoc() const { return LParenLoc; }
  SourceLoc getRParenLoc() const { return RParenLoc; }
  
  typedef MutableArrayRef<ParamDecl*>::iterator iterator;
  typedef ArrayRef<ParamDecl*>::iterator const_iterator;
  iterator begin() { return getArray().begin(); }
  iterator end() { return getArray().end(); }
  const_iterator begin() const { return getArray().begin(); }
  const_iterator end() const { return getArray().end(); }
  
  MutableArrayRef<ParamDecl*> getArray() {
    return {getTrailingObjects<ParamDecl*>(), numParameters};
  }
  ArrayRef<ParamDecl*> getArray() const {
    return {getTrailingObjects<ParamDecl*>(), numParameters};
  }
    
      /// Sets the serialized flag.
  void setSerialized(IsSerialized_t serialized) {
    assert(serialized != IsSerializable);
    Serialized = (serialized ? 1 : 0);
  }
    
        findAnchorsInTables();
    
    const CaptureDescriptor *
TypeRefBuilder::getCaptureDescriptor(uint64_t RemoteAddress) {
  for (auto Info : ReflectionInfos) {
    for (auto &CD : Info.Capture.Metadata) {
      auto OtherAddr = (reinterpret_cast<uint64_t>(&CD) -
                        Info.LocalStartAddress + Info.RemoteStartAddress);
      if (OtherAddr == RemoteAddress)
        return &CD;
    }
  }
    }
    
      /// Set if the type is an importer-synthesized related entity.
  /// A related entity is an entity synthesized in response to an imported
  /// type which is not the type itself; for example, when the importer
  /// sees an ObjC error domain, it creates an error-wrapper type (a
  /// related entity) and a `Code` enum (not a related entity because it's
  /// exactly the original type).
  ///
  /// The name and import namespace (together with the parent context)
  /// identify the original declaration.
  StringType RelatedEntityName;
    
      // Null char in the string.
    
        std::cerr << 'Generating ' << input_file
        << ' to ' << output_file << std::endl;
    benchmarks::BenchmarkDataset dataset;
    Message* message;
    std::string dataset_payload = ReadFile(input_file);
    GOOGLE_CHECK(dataset.ParseFromString(dataset_payload))
      << 'Can' t parse data file ' << input_file;
    
    // Return the name of the info log file for 'dbname'.
std::string InfoLogFileName(const std::string& dbname);
    
    #include <string>
    
    
    {  Iterator* iter;
  if (block != nullptr) {
    iter = block->NewIterator(table->rep_->options.comparator);
    if (cache_handle == nullptr) {
      iter->RegisterCleanup(&DeleteBlock, block, nullptr);
    } else {
      iter->RegisterCleanup(&ReleaseBlock, block_cache, cache_handle);
    }
  } else {
    iter = NewErrorIterator(s);
  }
  return iter;
}
    
    // Return a new two level iterator.  A two-level iterator contains an
// index iterator whose values point to a sequence of blocks where
// each block is itself a sequence of key,value pairs.  The returned
// two-level iterator yields the concatenation of all key/value pairs
// in the sequence of blocks.  Takes ownership of 'index_iter' and
// will delete it when no longer needed.
//
// Uses a supplied function to convert an index_iter value into
// an iterator over the contents of the corresponding block.
Iterator* NewTwoLevelIterator(
    Iterator* index_iter,
    Iterator* (*block_function)(void* arg, const ReadOptions& options,
                                const Slice& index_value),
    void* arg, const ReadOptions& options);