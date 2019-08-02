
        
        
    {  for (auto &BB : *F)
    for (auto &I : BB)
      emitter.visit(&I);
}
    
      auto getGenericArgsTypeListForContext =
    [&](const ContextDescriptor *context) -> NodePointer {
      if (demangledGenerics.empty())
        return nullptr;
    }
    
      /// Get the execution count corresponding to \p Node from a profile, if one
  /// is available.
  ProfileCounter getExecutionCount(ASTNode Node);
    
    KNOWN_STDLIB_TYPE_DECL(Bool, NominalTypeDecl, 0)
    
    static llvm::Function *
getAccessorForComputedComponent(IRGenModule &IGM,
                                const KeyPathPatternComponent &component,
                                KeyPathAccessor whichAccessor,
                                GenericEnvironment *genericEnv,
                                ArrayRef<GenericRequirement> requirements,
                                bool hasSubscriptIndices) {
  SILFunction *accessor;
  switch (whichAccessor) {
  case Getter:
    accessor = component.getComputedPropertyGetter();
    break;
  case Setter:
    accessor = component.getComputedPropertySetter();
    break;
  case Equals:
    accessor = component.getSubscriptIndexEquals();
    break;
  case Hash:
    accessor = component.getSubscriptIndexHash();
    break;
  }
  
  // If the accessor is not generic, and locally available, we can use it as is.
  // If it's only externally available, we need a local thunk to relative-
  // reference.
  if (requirements.empty() &&
      !isAvailableExternally(accessor->getLinkage()) &&
      &IGM == IGM.IRGen.getGenModule(accessor)) {
    return IGM.getAddrOfSILFunction(accessor, NotForDefinition);
  }
  auto accessorFn = IGM.getAddrOfSILFunction(accessor, NotForDefinition);
  
  auto accessorFnTy = cast<llvm::FunctionType>(
    accessorFn->getType()->getPointerElementType());;
  
  // Otherwise, we need a thunk to unmarshal the generic environment from the
  // argument area. It'd be nice to have a good way to represent this
  // directly in SIL, of course...
  const char *thunkName;
  unsigned numArgsToForward;
    }
    
    
    {    // Forbid the parameter to be an autoclosure.
    if (param->isAutoClosure()) {
      ctx.Diags.diagnose(attr->getLocation(),
                         diag::function_builder_parameter_autoclosure,
                         nominal->getFullName());
      mutableAttr->setInvalid();
      return Type();
    }
  }
    
    
    {  ReadBytesResult readBytes(RemoteAddress Addr, uint64_t Size) {
    if (!isAddressValid(Addr, Size))
      return ReadBytesResult(nullptr, [](const void *) {});
    return ReadBytesResult((const void *)(Addr.getAddressData()),
                           [](const void *) {});
  }
};
    
    	EditorFileDialog *emission_file_dialog;
	SceneTreeDialog *emission_tree_dialog;
    
    	void invert();
	void contrast();
	Color inverted() const;
	Color contrasted() const;
    
    #define ERR_BREAK(m_cond)                                                                                              \
	{                                                                                                                  \
		if (unlikely(m_cond)) {                                                                                        \
			_err_print_error(FUNCTION_STR, __FILE__, __LINE__, 'Condition ' ' _STR(m_cond) ' ' is true. Breaking..:'); \
			break;                                                                                                     \
		}                                                                                                              \
		_err_error_exists = false;                                                                                     \
	}
    
    
    {		int face_index;
	};
    
    			if (path[i] == ':' || path[i] == 0) {
    }
    
    				case ShaderLanguage::TYPE_SAMPLER2D: {
    }
    
      // check if form is already defined
  for (i = 0; i < formIDLen; ++i) {
    if (formIDs[i].num == id.num && formIDs[i].gen == id.gen) {
      return;
    }
  }
    
      for (i = 0; i < intervals.getLength(); i++) {
    interval = (Interval *) intervals.get(i);
    const int base = interval->base;
    prefixLength = interval->prefix->getLength();
    if (label->cmpN(interval->prefix, prefixLength) != 0)
      continue;
    }
    
    private:
    
    
    {  Object encryptDict;
  XpdfSecurityHandler *xsh;
  void *docData;
  int permFlags;
  Guchar fileKey[16];
  int fileKeyLength;
  int encVersion;
  CryptAlgorithm encAlgorithm;
  GBool ok;
};
#endif // ENABLE_PLUGINS
    
      newsound->kind = kind;
  if (fileName) {
    newsound->fileName = fileName->copy();
  }
  newsound->samplingRate = samplingRate;
  newsound->channels = channels;
  newsound->bitsPerSample = bitsPerSample;
  newsound->encoding = encoding;
    
      SoundKind getSoundKind() { return kind; }
  GooString *getFileName() { return fileName; }
  double getSamplingRate() { return samplingRate; }
  int getChannels() { return channels; }
  int getBitsPerSample() { return bitsPerSample; }
  SoundEncoding getEncoding() { return encoding; }
    
      /*
   * Create a FixedStringMap from the builder.
   */
  void create(FSMap& map);
    
    #include <boost/ptr_container/ptr_vector.hpp>
    
    template<class T>
Variant nativePropHandlerSet(const Object& obj,
                             const String& name,
                             const Variant& value) {
  CHECK_NATIVE_PROP_SUPPORTED(name, 'set')
  return T::setProp(obj, name, value);
}
    
      // If the RDS entry isn't initialized, mark it as initialized and store a null
  // pointer in it. The setter will allocate the cache and update the pointer.
  auto const sf = checkRDSHandleInitialized(v, handle);
  ifThen(
    v, CC_NE, sf,
    [&](Vout& v) {
      v << storeqi{0, getHandleAddr(handle)};
      markRDSHandleInitialized(v, handle);
    }
  );
    
    TEST_F(ProxygenTransportBasicTest, unsupported_method) {
  auto req = getRequest(HTTPMethod::UNSUB);
  EXPECT_CALL(m_server, onRequestError(_));
  EXPECT_CALL(m_txn, sendHeaders(IsResponseStatusCode(400)));
  EXPECT_CALL(m_txn, sendEOM());
  m_transport->onHeadersComplete(std::move(req));
  m_transport->onEOM();
}
    
      const Class* getClass() const { return m_cls; }
  void setClass(const Class* cls) {
    assertx(cls != nullptr);
    assertx(m_cls == nullptr);
    m_cls = cls;
  }
    
    
    {  for (auto numProcessed = 0; numProcessed < numPaths; ++numProcessed) {
    size_t i;
    result_q.blockingRead(i);
    HackCFactsExtractor::merge_result(
      workerResults[i],
      outResArr,
      StrNR(pathList.at(i)));
  }
  dispatcher.waitEmpty();
}
    
    
    {}
    
    TEST_F(DBTestXactLogIterator, TransactionLogIteratorCheckAfterRestart) {
  do {
    Options options = OptionsForLogIterTest();
    DestroyAndReopen(options);
    Put('key1', DummyString(1024));
    Put('key2', DummyString(1023));
    dbfull()->Flush(FlushOptions());
    Reopen(options);
    auto iter = OpenTransactionLogIter(0);
    ExpectRecords(2, iter);
  } while (ChangeCompactOptions());
}
    
      ~BlobIndexCompactionFilter() override {
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EXPIRED_COUNT, expired_count_);
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EXPIRED_SIZE, expired_size_);
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EVICTED_COUNT, evicted_count_);
    RecordTick(statistics_, BLOB_DB_BLOB_INDEX_EVICTED_SIZE, evicted_size_);
  }
    
    uint64_t WriteController::NowMicrosMonotonic(Env* env) {
  return env->NowNanos() / std::milli::den;
}
    
      // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
      bool FilterMergeOperand(int level, const rocksdb::Slice& key,
                          const rocksdb::Slice& existing_value) const override {
    fprintf(stderr, 'FilterMerge(%s)\n', key.ToString().c_str());
    ++merge_count_;
    return existing_value == 'bad';
  }
    
    #ifndef ROCKSDB_LITE
    
    
    {}  // namespace
    
    #pragma once
    
    
    {
    {
    {  lua_State* lua_state_;
};
}  // namespace lua
}  // namespace rocksdb
#endif  // LUA

    
    
    {  uint64_t fp_[detail::poly_size(BITS)];
};
    
    
    {  char* mapStart = static_cast<char*>(mapStart_) + offset;
  PLOG_IF(WARNING, ::madvise(mapStart, length, advice)) << 'madvise';
}
    
    template <
    typename Key,
    typename Hasher = f14::DefaultHasher<Key>,
    typename KeyEqual = f14::DefaultKeyEqual<Key>,
    typename Alloc = f14::DefaultAlloc<Key>>
class F14VectorSet;
    
    #if __linux__
    if (noTransparentTls_) {
      // Ignore return value, errors are ok
      netops::setsockopt(fd, SOL_SOCKET, SO_NO_TRANSPARENT_TLS, nullptr, 0);
    }
#endif
    
    /**
 * Arena that uses the system allocator (malloc / free)
 */
class SysArena : public Arena<SysAllocator<void>> {
 public:
  explicit SysArena(
      size_t minBlockSize = kDefaultMinBlockSize,
      size_t sizeLimit = kNoSizeLimit,
      size_t maxAlign = kDefaultMaxAlign)
      : Arena<SysAllocator<void>>({}, minBlockSize, sizeLimit, maxAlign) {}
};
    
    struct UniformSubset {
  UniformSubset(uint64_t seed, size_t subsetSize, size_t stepsBetweenSelect)
      : uniform_(DeterministicSchedule::uniform(seed)),
        subsetSize_(subsetSize),
        stepsBetweenSelect_(stepsBetweenSelect),
        stepsLeft_(0) {}
    }