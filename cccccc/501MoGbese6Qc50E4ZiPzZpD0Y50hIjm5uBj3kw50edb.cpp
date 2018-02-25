
        
        int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
        // C++ mappings of API methods
    static Persistent<v8::Function> constructor;
    static Handle<Value> Open(const Arguments& args);
    static Handle<Value> New(const Arguments& args);
    static Handle<Value> Get(const Arguments& args);
    static Handle<Value> Put(const Arguments& args);
    static Handle<Value> Delete(const Arguments& args);
    static Handle<Value> Dump(const Arguments& args);
    static Handle<Value> WriteBatch(const Arguments& args);
    static Handle<Value> CreateColumnFamily(const Arguments& args);
    static Handle<Value> CompactRange(const Arguments& args);
    static Handle<Value> Close(const Arguments& args);
    
      std::string res;
  std::unique_ptr<rocksdb::Iterator> it(db_->NewIterator(ReadOptions()));
  std::string k1('k1');
  std::string k2('k2');
  bool first = true;
  for (it->Seek(k1); it->Valid(); it->Next()) {
    res = it->value().ToString();
    if (first) {
      ASSERT_EQ(res, 'v1,v2,v3');
      first = false;
    } else {
      ASSERT_EQ(res, 'a1,a2,a3');
    }
  }
  slists.Append('k2', 'a4');
  slists.Append('k1', 'v4');
    
     private: // Private Functions
  /// Calls InsertBefore or InsertAfter
  int Insert(const std::string& key, const std::string& pivot,
             const std::string& value, bool insert_after);
 private:
  std::string db_name_;       // The actual database name/path
  WriteOptions put_option_;
  ReadOptions get_option_;
    
      using DB::GetPropertiesOfAllTables;
  virtual Status GetPropertiesOfAllTables(
      ColumnFamilyHandle* column_family,
      TablePropertiesCollection* props) override {
    return db_->GetPropertiesOfAllTables(column_family, props);
  }