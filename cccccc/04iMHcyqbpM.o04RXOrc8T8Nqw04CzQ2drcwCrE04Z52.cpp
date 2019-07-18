
        
          // Always look through inherited conformances.
  if (auto *inherited = dyn_cast<InheritedProtocolConformance>(conformance))
    conformance = inherited->getInheritedConformance();
    
      /// Add the low N bits from the given value to the vector.
  void add(size_t numBits, uint64_t value) {
    append(fromAPInt(APInt(numBits, value)));
  }
    
      std::string PGOFuncName;
    
      /// Look up the implementation function for the given method.
  Optional<Entry> getEntry(SILModule &M, SILDeclRef method) const;
    
      switch (whichAccessor) {
  case Getter:
    // Original accessor's args should be @in or @out, meaning they won't be
    // captured or aliased.
    accessorThunk->addAttribute(1, llvm::Attribute::NoCapture);
    accessorThunk->addAttribute(1, llvm::Attribute::NoAlias);
    accessorThunk->addAttribute(2, llvm::Attribute::NoCapture);
    accessorThunk->addAttribute(2, llvm::Attribute::NoAlias);
    // Output is sret.
    accessorThunk->addAttribute(1, llvm::Attribute::StructRet);
    break;
  case Setter:
    // Original accessor's args should be @in or @out, meaning they won't be
    // captured or aliased.
    accessorThunk->addAttribute(1, llvm::Attribute::NoCapture);
    accessorThunk->addAttribute(1, llvm::Attribute::NoAlias);
    accessorThunk->addAttribute(2, llvm::Attribute::NoCapture);
    accessorThunk->addAttribute(2, llvm::Attribute::NoAlias);
    break;
  case Equals:
  case Hash:
    break;
  }
    
    
    {#ifndef NDEBUG
  LLVM_ATTRIBUTE_DEPRECATED(void dump(SourceManager &SM, llvm::raw_ostream &OS = llvm::errs(),
                            unsigned Indent = 0) const,
                  'only for use in the debugger');
  LLVM_ATTRIBUTE_DEPRECATED(void dump(SILModule &Mod) const, 'only for use in the debugger');
#endif
};
    
    
    {    // Emit a debug_value[_addr] instruction to record the start of this value's
    // lifetime.
    SILLocation PrologueLoc(vd);
    PrologueLoc.markAsPrologue();
    SILDebugVariable DbgVar(vd->isLet(), /*ArgNo=*/0);
    if (address)
      SGF.B.createDebugValueAddr(PrologueLoc, value, DbgVar);
    else
      SGF.B.createDebugValue(PrologueLoc, value, DbgVar);
  }
  
  void copyOrInitValueInto(SILGenFunction &SGF, SILLocation loc,
                           ManagedValue value, bool isInit) override {
    // If this let value has an address, we can handle it just like a single
    // buffer value.
    if (hasAddress())
      return SingleBufferInitialization::
        copyOrInitValueIntoSingleBuffer(SGF, loc, value, isInit, address);
    
    // Otherwise, we bind the value.
    if (isInit) {
      // Disable the rvalue expression cleanup, since the let value
      // initialization has a cleanup that lives for the entire scope of the
      // let declaration.
      bindValue(value.forward(SGF), SGF);
    } else {
      // Disable the expression cleanup of the copy, since the let value
      // initialization has a cleanup that lives for the entire scope of the
      // let declaration.
      bindValue(value.copyUnmanaged(SGF, loc).forward(SGF), SGF);
    }
  }
    
        // Skip the closure's necessary bindings struct, if it's present.
    auto SizeOfNecessaryBindings = Info.NumBindings * sizeof(StoredPointer);
    Builder.addField(/*size=*/SizeOfNecessaryBindings,
                     /*alignment=*/sizeof(StoredPointer),
                     /*numExtraInhabitants=*/0,
                     /*bitwiseTakable=*/true);
    
    #if defined(__x86_64__) || defined(__amd64__)
    
    Status TestWritableFile::Sync() {
  if (!env_->IsFilesystemActive()) {
    return Status::OK();
  }
  // Ensure new files referred to by the manifest are in the filesystem.
  Status s = target_->Sync();
  if (s.ok()) {
    state_.pos_at_last_sync_ = state_.pos_;
  }
  if (env_->IsFileCreatedSinceLastDirSync(state_.filename_)) {
    Status ps = SyncParent();
    if (s.ok() && !ps.ok()) {
      s = ps;
    }
  }
  return s;
}
    
    std::string InfoLogFileName(const std::string& dbname) {
  return dbname + '/LOG';
}
    
    
    {  bool rword_indicates_list_item;
  bool rword_likely_starts_idea;
  bool rword_likely_ends_idea;
};
    
    #include 'allheaders.h'
    
    // Possible normalization methods. Use NEGATIVE values as these also
// double up as markers for the last sub-classifier.
enum NormalizationMode {
  NM_BASELINE = -3,         // The original BL normalization mode.
  NM_CHAR_ISOTROPIC = -2,   // Character normalization but isotropic.
  NM_CHAR_ANISOTROPIC = -1  // The original CN normalization mode.
};
    
    cmderOptions GetOption()
{
	cmderOptions cmderOptions;
	LPWSTR *szArgList;
	int argCount;
    }
    
    // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
Status BuildTable(const std::string& dbname, Env* env, const Options& options,
                  TableCache* table_cache, Iterator* iter, FileMetaData* meta);
    
    std::string CurrentFileName(const std::string& dbname) {
  return dbname + '/CURRENT';
}
    
    #endif  // STORAGE_LEVELDB_DB_FILENAME_H_

    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
    
    {
    {
    {      if (rnd->Next() % 2) {
        iter.Next();
        pos = MakeKey(key(pos), gen(pos) + 1);
      } else {
        Key new_target = RandomTarget(rnd);
        if (new_target > pos) {
          pos = new_target;
          iter.Seek(new_target);
        }
      }
    }
  }
};
const uint32_t ConcurrentTest::K;
    
    Status TableCache::Get(const ReadOptions& options, uint64_t file_number,
                       uint64_t file_size, const Slice& k, void* arg,
                       void (*handle_result)(void*, const Slice&,
                                             const Slice&)) {
  Cache::Handle* handle = nullptr;
  Status s = FindTable(file_number, file_size, &handle);
  if (s.ok()) {
    Table* t = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
    s = t->InternalGet(options, k, arg, handle_result);
    cache_->Release(handle);
  }
  return s;
}
    
    TEST(WriteBatchTest, Corruption) {
  WriteBatch batch;
  batch.Put(Slice('foo'), Slice('bar'));
  batch.Delete(Slice('box'));
  WriteBatchInternal::SetSequence(&batch, 200);
  Slice contents = WriteBatchInternal::Contents(&batch);
  WriteBatchInternal::SetContents(&batch,
                                  Slice(contents.data(), contents.size() - 1));
  ASSERT_EQ(
      'Put(foo, bar)@200'
      'ParseError()',
      PrintContents(&batch));
}
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
    
    {}  // anonymous namespace
    
    
    {}  // namespace leveldb