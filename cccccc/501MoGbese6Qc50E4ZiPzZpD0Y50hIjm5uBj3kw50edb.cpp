
        
        // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    // Level-0 compaction is started when we hit this many files.
static const int kL0_CompactionTrigger = 4;
    
    TableCache::TableCache(const std::string& dbname,
                       const Options* options,
                       int entries)
    : env_(options->env),
      dbname_(dbname),
      options_(options),
      cache_(NewLRUCache(entries)) {
}
    
    
    {  for (size_t i = 0; i < new_files_.size(); i++) {
    const FileMetaData& f = new_files_[i].second;
    PutVarint32(dst, kNewFile);
    PutVarint32(dst, new_files_[i].first);  // level
    PutVarint64(dst, f.number);
    PutVarint64(dst, f.file_size);
    PutLengthPrefixedSlice(dst, f.smallest.Encode());
    PutLengthPrefixedSlice(dst, f.largest.Encode());
  }
}
    
    #endif  // STORAGE_LEVELDB_DB_VERSION_EDIT_H_

    
    
    {}  // namespace leveldb
    
    // Return a new filter policy that uses a bloom filter with approximately
// the specified number of bits per key.  A good value for bits_per_key
// is 10, which yields a filter with ~ 1% false positive rate.
//
// Callers must delete the result after any database that is using the
// result has been closed.
//
// Note: if you are using a custom comparator that ignores some parts
// of the keys being compared, you must not use NewBloomFilterPolicy()
// and must provide your own FilterPolicy that also ignores the
// corresponding parts of the keys.  For example, if the comparator
// ignores trailing spaces, it would be incorrect to use a
// FilterPolicy (like NewBloomFilterPolicy) that does not ignore
// trailing spaces in keys.
extern const FilterPolicy* NewBloomFilterPolicy(int bits_per_key);
    
    #include 'osquery/tests/test_util.h'
    
    
    {  if (code != STILL_ACTIVE) {
    exitCode = code;
    return true;
  }
#else
  int status = 0;
  if (::waitpid(process.nativeHandle(), &status, 0) == -1) {
    return false;
  }
  if (WIFEXITED(status)) {
    exitCode = WEXITSTATUS(status);
    return true;
  }
#endif
  return false;
}
    
      static void DiskAppearedCallback(DADiskRef disk, void* context);
    
      static CGEventRef eventCallback(CGEventTapProxy proxy,
                                  CGEventType type,
                                  CGEventRef event,
                                  void* refcon);
    
    #include <folly/Executor.h>
#include <folly/MPMCQueue.h>
#include <folly/Range.h>
#include <folly/executors/task_queue/BlockingQueue.h>
#include <folly/synchronization/LifoSem.h>
#include <glog/logging.h>
    
        Node* next() {
      return next_;
    }
    
      void clear()                  { return m_.cont_.clear();    }
  size_type size() const        { return m_.cont_.size();     }
  size_type max_size() const    { return m_.cont_.max_size(); }
  bool empty() const            { return m_.cont_.empty();    }
  void reserve(size_type s)     { return m_.cont_.reserve(s); }
  void shrink_to_fit()          { m_.cont_.shrink_to_fit();   }
  size_type capacity() const    { return m_.cont_.capacity(); }
    
    std::shared_ptr<ThreadPoolExecutor::Thread> IOThreadPoolExecutor::makeThread() {
  return std::make_shared<IOThread>(this);
}
    
      typedef std::function<void(void*)> TeardownFunc;
  typedef std::function<void*(void)> CreateFunc;