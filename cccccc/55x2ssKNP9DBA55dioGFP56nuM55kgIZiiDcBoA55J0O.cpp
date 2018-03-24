
        
        
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
    
    #include 'db/dbformat.h'
#include 'leveldb/write_batch.h'
    
      void Run() {
    PrintHeader();
    Open(false);
    }
    
      iter->Seek('5');
  ASSERT_EQ(iter->key().ToString(), '5');
  iter->Prev();
  ASSERT_EQ(iter->key().ToString(), '4');
  iter->Prev();
  ASSERT_EQ(iter->key().ToString(), '3');
  iter->Next();
  ASSERT_EQ(iter->key().ToString(), '4');
  iter->Next();
  ASSERT_EQ(iter->key().ToString(), '5');
    
      // Return the offset in data_ just past the end of the current entry.
  inline uint32_t NextEntryOffset() const {
    return (value_.data() + value_.size()) - data_;
  }
    
      // Takes ownership of 'iter' and will delete it when destroyed, or
  // when Set() is invoked again.
  void Set(Iterator* iter) {
    delete iter_;
    iter_ = iter;
    if (iter_ == NULL) {
      valid_ = false;
    } else {
      Update();
    }
  }
    
    SequentialFile::~SequentialFile() {
}
    
    std::ostream& operator<<(std::ostream& os, const AsyncIOOp& op) {
  os << '{' << op.state_ << ', ';
    }
    }
    
      /**
   * Create an AsyncIO context capable of holding at most 'capacity' pending
   * requests at the same time.  As requests complete, others can be scheduled,
   * as long as this limit is not exceeded.
   *
   * Note: the maximum number of allowed concurrent requests is controlled
   * by the fs.aio-max-nr sysctl, the default value is usually 64K.
   *
   * If pollMode is POLLABLE, pollFd() will return a file descriptor that
   * can be passed to poll / epoll / select and will become readable when
   * any IOs on this AsyncIO have completed.  If you do this, you must use
   * pollCompleted() instead of wait() -- do not read from the pollFd()
   * file descriptor directly.
   *
   * You may use the same AsyncIO object from multiple threads, as long as
   * there is only one concurrent caller of wait() / pollCompleted() / cancel()
   * (perhaps by always calling it from the same thread, or by providing
   * appropriate mutual exclusion).  In this case, pending() returns a snapshot
   * of the current number of pending requests.
   */
  explicit AsyncIO(size_t capacity, PollMode pollMode = NOT_POLLABLE);
  ~AsyncIO();
    
    inline bool operator==(const HugePageSize& a, const HugePageSize& b) {
  return a.size == b.size;
}
    
    
    {std::string AsyncFileWriter::getNumDiscardedMsg(size_t numDiscarded) {
  // We may want to make this customizable in the future (e.g., to allow it to
  // conform to the LogFormatter style being used).
  // For now just return a simple fixed message.
  return folly::to<std::string>(
      numDiscarded,
      ' log messages discarded: logging faster than we can write\n');
}
} // namespace folly

    
      /**
   * Get the output file.
   */
  const folly::File& getFile() const {
    return file_;
  }
    
    using std::make_shared;
using std::string;
    
    #include <folly/Optional.h>
#include <folly/Range.h>
#include <memory>
    
    
    {
    {      if (end == msgData.size()) {
        break;
      }
      idx = end + 1;
    }
  } else {
    buffer.reserve(headerLengthGuess + msgData.size());
    headerFormatter.appendTo(buffer);
    buffer.append(msgData.data(), msgData.size());
    buffer.push_back('\n');
  }
    
    namespace folly {
    }
    
    
    {} // namespace folly

    
      /**
   * Update this LogConfig object by merging in settings from another
   * LogConfig.
   *
   * All LogHandler settings from the other LogConfig will be inserted into
   * this LogConfig.  If a log handler with the same name was already defined
   * in this LogConfig it will be replaced with the new settings.
   *
   * All LogCategory settings from the other LogConfig will be inserted into
   * this LogConfig.  If a log category with the same name was already defined
   * in this LogConfig, its settings will be updated with settings from the
   * other LogConfig.  However, if the other LogConfig does not define handler
   * settings for the category it will retain its current handler settings.
   *
   * This method allows LogConfig objects to be combined before applying them.
   * Using LogConfig::update() will produce the same results as if
   * LoggerDB::updateConfig() had been called with both configs sequentially.
   * In other words, this operation:
   *
   *   configA.update(configB);
   *   loggerDB.updateConfig(configA);
   *
   * will produce the same results as:
   *
   *   loggerDB.updateConfig(configA);
   *   loggerDB.updateConfig(configA);
   */
  void update(const LogConfig& other);