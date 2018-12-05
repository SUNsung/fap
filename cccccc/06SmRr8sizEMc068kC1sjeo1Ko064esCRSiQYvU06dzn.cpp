
        
          // Deletes the current owned object, if any.
  // Then takes ownership of a new object without incrementing the reference
  // count.
  // This function must be called with a reference that you own.
  //   this->reset(this->get()) is wrong!
  //   this->reset(this->release()) is OK.
  PyObjectStruct* reset(PyObjectStruct* p = NULL) {
    Py_XDECREF(ptr_);
    ptr_ = p;
    return ptr_;
  }
    
      template<class T>
  OneofDef* FindOneofByName(const T& str) {
    return FindOneofByName(str.c_str(), str.size());
  }
  template<class T>
  const OneofDef* FindOneofByName(const T& str) const {
    return FindOneofByName(str.c_str(), str.size());
  }
    
    void AnyMetadata::PackFrom(const Message& message) {
  PackFrom(message, kTypeGoogleApisComPrefix);
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
      if (GenerateCode(request, *generator, &response, &error_msg)) {
    if (!response.SerializeToFileDescriptor(STDOUT_FILENO)) {
      std::cerr << argv[0] << ': Error writing to stdout.' << std::endl;
      return 1;
    }
  } else {
    if (!error_msg.empty()) {
      std::cerr << argv[0] << ': ' << error_msg << std::endl;
    }
    return 1;
  }
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
      Status s = OptimisticTransactionDB::Open(options, kDBPath, &txn_db);
  assert(s.ok());
  db = txn_db->GetBaseDB();
    
      // initialize column families options
  std::unique_ptr<CompactionFilter> compaction_filter;
  compaction_filter.reset(new DummyCompactionFilter());
  cf_descs[0].options.table_factory.reset(NewBlockBasedTableFactory(bbt_opts));
  cf_descs[0].options.compaction_filter = compaction_filter.get();
  cf_descs[1].options.table_factory.reset(NewBlockBasedTableFactory(bbt_opts));
    
    // Supported only for Leveled compaction
Status SuggestCompactRange(DB* db, ColumnFamilyHandle* column_family,
                           const Slice* begin, const Slice* end);
Status SuggestCompactRange(DB* db, const Slice* begin, const Slice* end);
    
      std::string ToString(bool exclude_zero_counters = false) const;