
        
        void ELIST::assign_to_sublist(                           //to this list
                              ELIST_ITERATOR *start_it,  //from list start
                              ELIST_ITERATOR *end_it) {  //from list end
  const ERRCODE LIST_NOT_EMPTY =
    'Destination list must be empty before extracting a sublist';
    }
    
      /** Sets Dict::letter_is_okay_ function to point to the given function. */
  void SetDictFunc(DictFunc f);
    
    
    {
    {    if (tessedit_enable_doc_dict && !word->IsAmbiguous())
      tess_add_doc_word(word->best_choice);
  }
}
    
        // Helper methods
    static bool HasFamilyNamed(std::string& name, DBWrapper* db);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array);
    static bool AddToBatch(rocksdb::WriteBatch& batch, bool del,
        Handle<Array> array, DBWrapper* db_wrapper, std::string cf);
    static Handle<Value> CompactRangeDefault(const v8::Arguments& args);
    static Handle<Value> CompactColumnFamily(const Arguments& args);
    static Handle<Value> CompactOptions(const Arguments& args);
    static Handle<Value> CompactAll(const Arguments& args);
    
    Name            Speed       Q.Score   Author
xxHash          5.4 GB/s     10
CrapWow         3.2 GB/s      2       Andrew
MumurHash 3a    2.7 GB/s     10       Austin Appleby
SpookyHash      2.0 GB/s     10       Bob Jenkins
SBox            1.4 GB/s      9       Bret Mulvey
Lookup3         1.2 GB/s      9       Bob Jenkins
SuperFastHash   1.2 GB/s      1       Paul Hsieh
CityHash64      1.05 GB/s    10       Pike & Alakuijala
FNV             0.55 GB/s     5       Fowler, Noll, Vo
CRC32           0.43 GB/s     9
MD5-32          0.33 GB/s    10       Ronald L. Rivest
SHA1-32         0.28 GB/s    10
    
    #include 'rocksdb/merge_operator.h'
#include 'rocksdb/slice.h'
    
    namespace rocksdb {
    }
    
    
    {  // No copying allowed
  Reader(const Reader&);
  void operator=(const Reader&);
};
    
    
    {    // TODO: the lock will never expire. It may cause problem if the process crash or abnormally exit.
    while (!_io_ctx->lock_exclusive(
             _obj_name,
             _lock_name,
             _cookie,
             'description', nullptr, 0));
  }
    
    Status DateTieredDBImpl::Delete(const WriteOptions& options, const Slice& key) {
  int64_t timestamp = 0;
  Status s;
  s = GetTimestamp(key, &timestamp);
  if (!s.ok()) {
    return s;
  }
  DropObsoleteColumnFamilies();
  // Prune request to obsolete data
  if (IsStale(timestamp, ttl_, db_->GetEnv())) {
    return Status::NotFound();
  }
    }