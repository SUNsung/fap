
        
            TableBuilder* builder = new TableBuilder(options, file);
    meta->smallest.DecodeFrom(iter->key());
    for (; iter->Valid(); iter->Next()) {
      Slice key = iter->key();
      meta->largest.DecodeFrom(key);
      builder->Add(key, iter->value());
    }
    
    #endif  // STORAGE_LEVELDB_DB_BUILDER_H_

    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    #include 'db/dbformat.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/testharness.h'
    
    //****************************
// Deprecated function names
//****************************
// The following translations are provided to ease code transition
// You are encouraged to no longer this function names
#define XXH32_feed   XXH32_update
#define XXH32_result XXH32_digest
#define XXH32_getIntermediateResult XXH32_intermediateDigest
    
     private:
  char delim_;         // The delimiter is inserted between elements
    
      virtual void Next() override;
    
    
    {
    {  releaseJniEnv(attached_thread);
}
// @lint-ignore TXT4 T25377293 Grandfathered in
}  // namespace rocksdb
    
    
    {protected:
  using WritableFile::Allocate;
  /**
   * @brief noop
   * @details [long description]
   *
   * @param offset [description]
   * @param len [description]
   *
   * @return [description]
   */
  Status Allocate(off_t offset, off_t len) {
    return Status::OK();
  }
};
    
    void SyncPoint::LoadDependency(const std::vector<SyncPointPair>& dependencies) {
  impl_->LoadDependency(dependencies);
}
    
    #ifdef NDEBUG
#define TEST_SYNC_POINT(x)
#define TEST_IDX_SYNC_POINT(x, index)
#define TEST_SYNC_POINT_CALLBACK(x, y)
#else