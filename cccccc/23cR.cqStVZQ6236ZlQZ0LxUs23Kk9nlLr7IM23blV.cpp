
        
        void leveldb_options_set_max_open_files(leveldb_options_t* opt, int n) {
  opt->rep.max_open_files = n;
}
    
    #include 'db/filename.h'
#include 'db/db_impl.h'
#include 'db/dbformat.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/mutexlock.h'
#include 'util/random.h'
    
    // Return a new iterator that converts internal keys (yielded by
// '*internal_iter') that were live at the specified 'sequence' number
// into appropriate user keys.
extern Iterator* NewDBIterator(
    DBImpl* db,
    const Comparator* user_key_comparator,
    Iterator* internal_iter,
    SequenceNumber sequence,
    uint32_t seed);
    
    // Attempt to parse an internal key from 'internal_key'.  On success,
// stores the parsed data in '*result', and returns true.
//
// On error, returns false, leaves '*result' in an undefined state.
extern bool ParseInternalKey(const Slice& internal_key,
                             ParsedInternalKey* result);
    
    
    {  delete iter;
  delete table;
  delete file;
  return Status::OK();
}
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
extern std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
      // If a seek to internal key 'k' in specified file finds an entry,
  // call (*handle_result)(arg, found_key, found_value).
  Status Get(const ReadOptions& options,
             uint64_t file_number,
             uint64_t file_size,
             const Slice& k,
             void* arg,
             void (*handle_result)(void*, const Slice&, const Slice&));
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
    #ifndef STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
#define STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_
    
    DEFINE_FIND_STATIC_METHOD(KXlog_logWrite, KXlog, 'logWrite', '(Lcom/tencent/mars/xlog/Xlog$XLoggerInfo;Ljava/lang/String;)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_logWrite
  (JNIEnv *env, jclass, jobject _log_info, jstring _log) {
    }
    
    #include 'assert/__assert.h'
    
    
    {  private:
    void* object_;
};
    
    
size_t  SimpleShortPackLength(size_t _datalen) {
    return SimplePackLength<uint16_t>(_datalen);
}
    
    #ifndef COMM_HAS_MEMBER_H_
#define COMM_HAS_MEMBER_H_
    
    #include <jni.h>