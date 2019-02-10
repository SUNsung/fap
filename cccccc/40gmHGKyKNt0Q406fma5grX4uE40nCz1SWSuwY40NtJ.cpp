  // atomic write
  WriteBatch batch;
  batch.Put(handles[0], Slice('key2'), Slice('value2'));
  batch.Put(handles[1], Slice('key3'), Slice('value3'));
  batch.Delete(handles[0], Slice('key'));
  s = db->Write(WriteOptions(), &batch);
  assert(s.ok());
    
      // Always pick a compaction which includes all files whenever possible.
  CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) override {
    ColumnFamilyMetaData cf_meta;
    db->GetColumnFamilyMetaData(&cf_meta);
    }
    
    class FlushBlockBySizePolicyFactory : public FlushBlockPolicyFactory {
 public:
  FlushBlockBySizePolicyFactory() {}
    }
    
    
    {}  // namespace rocksdb

    
    namespace rocksdb {
    }