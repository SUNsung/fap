
        
        
    {}
    
    namespace HPHP {
    }
    
    #include <sys/types.h>
    
    #include <iostream>
    
            while(!q.empty()){
    }
    
    #include <iostream>
#include <vector>
    
            stack<TreeNode*> stack;
        TreeNode* cur = root;
        while(cur != NULL || !stack.empty()){
            while(cur != NULL){
                res.push_back(cur->val);
                stack.push(cur);
                cur = cur->left;
            }
    }
    
    
    {
    {        return res;
    }
};
    
    #ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS
#endif
#ifndef GFLAGS
#include <cstdio>
int main() {
  fprintf(stderr, 'Please install gflags to run rocksdb tools\n');
  return 1;
}
#else
    
    
    {  // Single-Delete diagnostics for exceptional situations
  uint64_t num_single_del_fallthru = 0;
  uint64_t num_single_del_mismatch = 0;
};

    
      // create column family
  ColumnFamilyHandle* cf;
  s = db->CreateColumnFamily(ColumnFamilyOptions(), 'new_cf', &cf);
  assert(s.ok());
    
    // This is an example interface of external-compaction algorithm.
// Compaction algorithm can be implemented outside the core-RocksDB
// code by using the pluggable compaction APIs that RocksDb provides.
class Compactor : public EventListener {
 public:
  // Picks and returns a compaction task given the specified DB
  // and column family.  It is the caller's responsibility to
  // destroy the returned CompactionTask.  Returns 'nullptr'
  // if it cannot find a proper compaction task.
  virtual CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) = 0;
    }
    
      int ret = system('rm -rf /tmp/rocksmergetest');
  if (ret != 0) {
    fprintf(stderr, 'Error deleting /tmp/rocksmergetest, code: %d\n', ret);
    return ret;
  }
  rocksdb::Options options;
  options.create_if_missing = true;
  options.merge_operator.reset(new MyMerge);
  options.compaction_filter = &filter;
  status = rocksdb::DB::Open(options, '/tmp/rocksmergetest', &raw_db);
  assert(status.ok());
  std::unique_ptr<rocksdb::DB> db(raw_db);
    
      // Commit.  Since the snapshot was advanced, the write done outside of the
  // transaction does not prevent this transaction from Committing.
  s = txn->Commit();
  assert(s.ok());
  delete txn;
  // Clear snapshot from read options since it is no longer valid
  read_options.snapshot = nullptr;
    
      {
    std::string string_val;
    // If it cannot pin the value, it copies the value to its internal buffer.
    // The intenral buffer could be set during construction.
    PinnableSlice pinnable_val(&string_val);
    db->Get(ReadOptions(), db->DefaultColumnFamily(), 'key2', &pinnable_val);
    assert(pinnable_val == 'value');
    // If the value is not pinned, the internal buffer must have the value.
    assert(pinnable_val.IsPinned() || string_val == 'value');
  }
    
    
    {  virtual ~FlushBlockPolicy() { }
};
    
      // Translate the 'i'th property of the specified operation given
  // a property value.
  static std::map<std::string, uint64_t>
      InterpretOperationProperties(
          OperationType op_type, const uint64_t* op_properties);
    
    struct RestoreOptions {
  // If true, restore won't overwrite the existing log files in wal_dir. It will
  // also move all log files from archive directory to wal_dir. Use this option
  // in combination with BackupableDBOptions::backup_log_files = false for
  // persisting in-memory databases.
  // Default: false
  bool keep_log_files;
    }
    
    namespace rocksdb {
    }
    
      // If non-NULL, use the specified cache for blocks.
  // If NULL, leveldb will automatically create and use an 8MB internal cache.
  // Default: NULL
  Cache* block_cache;