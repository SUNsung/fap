
        
        // Build a Table file from the contents of *iter.  The generated file
// will be named according to meta->number.  On success, the rest of
// *meta will be filled with metadata about the generated table.
// If no data is present in *iter, meta->file_size will be set to
// zero, and no Table file will be produced.
extern Status BuildTable(const std::string& dbname,
                         Env* env,
                         const Options& options,
                         TableCache* table_cache,
                         Iterator* iter,
                         FileMetaData* meta);
    
    #include 'db/filename.h'
#include 'db/db_impl.h'
#include 'db/dbformat.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'port/port.h'
#include 'util/logging.h'
#include 'util/mutexlock.h'
#include 'util/random.h'
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    #include 'db/filename.h'
    
      // Temporary storage for parsing
  int level;
  uint64_t number;
  FileMetaData f;
  Slice str;
  InternalKey key;
    
    static std::string PrintContents(WriteBatch* b) {
  InternalKeyComparator cmp(BytewiseComparator());
  MemTable* mem = new MemTable(cmp);
  mem->Ref();
  std::string state;
  Status s = WriteBatchInternal::InsertInto(b, mem);
  int count = 0;
  Iterator* iter = mem->NewIterator();
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    ParsedInternalKey ikey;
    ASSERT_TRUE(ParseInternalKey(iter->key(), &ikey));
    switch (ikey.type) {
      case kTypeValue:
        state.append('Put(');
        state.append(ikey.user_key.ToString());
        state.append(', ');
        state.append(iter->value().ToString());
        state.append(')');
        count++;
        break;
      case kTypeDeletion:
        state.append('Delete(');
        state.append(ikey.user_key.ToString());
        state.append(')');
        count++;
        break;
    }
    state.append('@');
    state.append(NumberToString(ikey.sequence));
  }
  delete iter;
  if (!s.ok()) {
    state.append('ParseError()');
  } else if (count != WriteBatchInternal::Count(b)) {
    state.append('CountMismatch()');
  }
  mem->Unref();
  return state;
}
    
    #define THPDoubleStorage_CData(obj)  (obj)->cdata
#define THPFloatStorage_CData(obj)   (obj)->cdata
#define THPHalfStorage_CData(obj)    (obj)->cdata
#define THPLongStorage_CData(obj)    (obj)->cdata
#define THPIntStorage_CData(obj)     (obj)->cdata
#define THPShortStorage_CData(obj)   (obj)->cdata
#define THPCharStorage_CData(obj)    (obj)->cdata
#define THPByteStorage_CData(obj)    (obj)->cdata
    
    template<template <typename> class Trait, typename... Types>
struct map_to_ptr<Trait, std::tuple<Types...>> {
  using type = std::tuple<
    typename std::add_pointer<Types>::type...,
    typename std::add_pointer<typename Trait<Types>::type>::type...
  >;
};
    
    void THDTensor_(logNormal)(THDTensor *self, THDGenerator *_generator, double mean,
                           double stdv) {
  masterCommandChannel->sendMessage(
    packMessage(Functions::tensorLogNormal, self, _generator, mean, stdv),
    THDState::s_current_worker
  );
}
    
    #include <gtest/gtest.h>
    
    FLAG(double, test_double, 4.2, 'none');
FLAG_ALIAS(double, test_double_alias, test_double);
    
    
    {  bool testIsCached(size_t interval) {
    QueryContext ctx;
    ctx.useCache(true);
    return isCached(interval, ctx);
  }
};
    
      static CGEventRef eventCallback(CGEventTapProxy proxy,
                                  CGEventType type,
                                  CGEventRef event,
                                  void* refcon);
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitAllreduce
 * Signature: (Ljava/nio/ByteBuffer;III)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitAllreduce
  (JNIEnv *jenv, jclass jcls, jobject jsendrecvbuf, jint jcount, jint jenum_dtype, jint jenum_op) {
  void *ptr_sendrecvbuf = jenv->GetDirectBufferAddress(jsendrecvbuf);
  RabitAllreduce(ptr_sendrecvbuf, (size_t) jcount, jenum_dtype, jenum_op, NULL, NULL);
    }
    
    class BaseLogger {
 public:
  BaseLogger() {
#if XGBOOST_LOG_WITH_TIME
    log_stream_ << '[' << dmlc::DateLogger().HumanDate() << '] ';
#endif
  }
  std::ostream& stream() { return log_stream_; }  // NOLINT
    }