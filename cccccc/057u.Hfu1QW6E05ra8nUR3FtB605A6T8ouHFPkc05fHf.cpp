
        
        The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
      if (m_eof_flag)
    return;
    
    
    {}

    
    const uint8_t Javelin::Data::BITSCALE_8_TO_5_FLOOR[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
 1, 1, 1, 1, 1, 1, 1, 2, 2, 2,
 2, 2, 2, 2, 2, 3, 3, 3, 3, 3,
 3, 3, 3, 4, 4, 4, 4, 4, 4, 4,
 4, 4, 5, 5, 5, 5, 5, 5, 5, 5,
 6, 6, 6, 6, 6, 6, 6, 6, 7, 7,
 7, 7, 7, 7, 7, 7, 8, 8, 8, 8,
 8, 8, 8, 8, 8, 9, 9, 9, 9, 9,
 9, 9, 9, 10, 10, 10, 10, 10, 10, 10,
 10, 11, 11, 11, 11, 11, 11, 11, 11, 12,
 12, 12, 12, 12, 12, 12, 12, 13, 13, 13,
 13, 13, 13, 13, 13, 13, 14, 14, 14, 14,
 14, 14, 14, 14, 15, 15, 15, 15, 15, 15,
 15, 15, 16, 16, 16, 16, 16, 16, 16, 16,
 17, 17, 17, 17, 17, 17, 17, 17, 17, 18,
 18, 18, 18, 18, 18, 18, 18, 19, 19, 19,
 19, 19, 19, 19, 19, 20, 20, 20, 20, 20,
 20, 20, 20, 21, 21, 21, 21, 21, 21, 21,
 21, 22, 22, 22, 22, 22, 22, 22, 22, 22,
 23, 23, 23, 23, 23, 23, 23, 23, 24, 24,
 24, 24, 24, 24, 24, 24, 25, 25, 25, 25,
 25, 25, 25, 25, 26, 26, 26, 26, 26, 26,
 26, 26, 26, 27, 27, 27, 27, 27, 27, 27,
 27, 28, 28, 28, 28, 28, 28, 28, 28, 29,
 29, 29, 29, 29, 29, 29, 29, 30, 30, 30,
 30, 30, 30, 30, 30, 31};
    
    #endif

    
    /// The Redis functionality (see http://redis.io/commands#list)
/// All functions may THROW a RedisListException
class RedisLists {
 public: // Constructors / Destructors
  /// Construct a new RedisLists database, with name/path of db.
  /// Will clear the database on open iff destructive is true (default false).
  /// Otherwise, it will restore saved changes.
  /// May throw RedisListException
  RedisLists(const std::string& db_path,
             Options options, bool destructive = false);
    }
    
      // Returns the next active logfile number when this memtable is about to
  // be flushed to storage
  // REQUIRES: external synchronization to prevent simultaneous
  // operations on the same MemTable.
  uint64_t GetNextLogNumber() { return mem_next_logfile_number_; }
    
    #include 'db/dbformat.h'
#include 'rocksdb/types.h'
    
    #ifndef JAVA_ROCKSJNI_COMPACTION_FILTER_FACTORY_JNICALLBACK_H_
#define JAVA_ROCKSJNI_COMPACTION_FILTER_FACTORY_JNICALLBACK_H_
    
    
    {  m_jFindShortSuccessorMethodId =
    AbstractComparatorJni::getFindShortSuccessorMethodId(env);
  if(m_jFindShortSuccessorMethodId == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
}
    
    // Assume that for everywhere
#undef PLATFORM_IS_LITTLE_ENDIAN
#define PLATFORM_IS_LITTLE_ENDIAN true
    
    struct HistogramData {
  double median;
  double percentile95;
  double percentile99;
  double average;
  double standard_deviation;
  // zero-initialize new members since old Statistics::histogramData()
  // implementations won't write them.
  double max = 0.0;
  uint64_t count = 0;
  uint64_t sum = 0;
};
    
    void AbstractOptionHandler::updateFlags(int flag, bool val)
{
  if (val) {
    flags_ |= flag;
  }
  else {
    flags_ &= ~flag;
  }
}
    
    
    {
    {    httpConnection_->sendProxyRequest(std::move(httpRequest));
  }
  else {
    httpConnection_->sendPendingData();
  }
  if (httpConnection_->sendBufferIsEmpty()) {
    getDownloadEngine()->addCommand(getNextCommand());
    return true;
  }
  else {
    setWriteCheckSocket(getSocket());
    addCommandSelf();
    return false;
  }
}
    
    
    {} // namespace aria2
    
      virtual int64_t getCurrentLength() CXX11_OVERRIDE;
    
    #include 'common.h'