
        
        void HHVM_FUNCTION(fb_setprofile,
  const Variant& callback,
  int64_t flags = EventHook::ProfileDefault
) {
  if (ThreadInfo::s_threadInfo->m_profiler != nullptr) {
    // phpprof is enabled, don't let PHP code override it
    return;
  }
  g_context->m_setprofileCallback = callback;
  g_context->m_setprofileFlags = flags;
  if (callback.isNull()) {
    HPHP::EventHook::Disable();
  } else {
    HPHP::EventHook::Enable();
  }
}
    
    __thread int64_t s_extra_request_nanoseconds;
    
    #ifdef USE_GCC_FAST_TLS
    
    #endif

    
    
    {  return ret;
}
    
    static_assert(
  kSizeIndex2PackedArrayCapacity[PackedArray::SmallSizeIndex]
    == PackedArray::SmallSize,
  'SmallSizeIndex must be MM size class index for array of SmallSize'
);
    
    ///////////////////////////////////////////////////////////////////////////////
    
    
    {private:
  int m_timeout;
};
    
    void initNuma();
    
      String softStr(soft, CopyString);
  String hardStr(hard, CopyString);
    
      Offset defaultOff = bcOff(env) + iv.vec32()[iv.size() - 1];
  Offset zeroOff = 0;
  if (base <= 0 && (base + nTargets) > 0) {
    zeroOff = bcOff(env) + iv.vec32()[0 - base];
  } else {
    zeroOff = defaultOff;
  }
    
    FilterBlockBuilder::FilterBlockBuilder(const FilterPolicy* policy)
    : policy_(policy) {
}
    
    Iterator* TableCache::NewIterator(const ReadOptions& options,
                                  uint64_t file_number,
                                  uint64_t file_size,
                                  Table** tableptr) {
  if (tableptr != NULL) {
    *tableptr = NULL;
  }
    }
    
      // Delete the specified 'file' from the specified 'level'.
  void DeleteFile(int level, uint64_t file) {
    deleted_files_.insert(std::make_pair(level, file));
  }
    
    namespace {
class EmptyIterator : public Iterator {
 public:
  EmptyIterator(const Status& s) : status_(s) { }
  virtual bool Valid() const { return false; }
  virtual void Seek(const Slice& target) { }
  virtual void SeekToFirst() { }
  virtual void SeekToLast() { }
  virtual void Next() { assert(false); }
  virtual void Prev() { assert(false); }
  Slice key() const { assert(false); return Slice(); }
  Slice value() const { assert(false); return Slice(); }
  virtual Status status() const { return status_; }
 private:
  Status status_;
};
}  // namespace
    
    namespace folly {
namespace fs {
    }
    }
    
    DEFINE_bool(cp, false, 'Copy file');
    
          buffer.append(header);
      auto line = msgData.subpiece(idx, end - idx);
      buffer.append(line.data(), line.size());
      buffer.push_back('\n');
    
    /**
 * A LogWriter implementation that immediately writes to a file descriptor when
 * it is invoked.
 *
 * The downside of this class is that logging I/O occurs directly in your
 * normal program threads, so that logging I/O may block or slow down normal
 * processing.
 *
 * However, one benefit of this class is that log messages are written out
 * immediately, so if your program crashes, all log messages generated before
 * the crash will have already been written, and no messages will be lost.
 */
class ImmediateFileWriter : public LogWriter {
 public:
  /**
   * Construct an ImmediateFileWriter that appends to the file at the specified
   * path.
   */
  explicit ImmediateFileWriter(folly::StringPiece path);
    }
    
    
    {  // If this is a fatal message, flush the handlers to make sure the log
  // message was written out, then crash.
  if (isLogLevelFatal(message.getLevel())) {
    auto numHandlers = db_->flushAllHandlers();
    if (numHandlers == 0) {
      // No log handlers were configured.
      // Print the message to stderr, to make sure we always print the reason
      // we are crashing somewhere.
      auto msg = folly::to<std::string>(
          'FATAL:',
          message.getFileName(),
          ':',
          message.getLineNumber(),
          ': ',
          message.getMessage(),
          '\n');
      folly::writeFull(STDERR_FILENO, msg.data(), msg.size());
    }
    std::abort();
  }
}
    
    namespace folly {
    }
    
      // Parse the handler options
  auto* options = value.get_ptr('options');
  if (options) {
    if (!options->isObject()) {
      throw LogConfigParseError{to<string>(
          'unexpected data type for \'options\' field of handler \'',
          handlerName,
          '\': got ',
          dynamicTypename(*options),
          ', expected an object')};
    }
    }
    
    /**
 * Parse a JSON configuration string.
 *
 * See the documentation in logging/docs/Config.md for a description of the
 * JSON configuration object format.
 *
 * This function uses relaxed JSON parsing, allowing C and C++ style
 * comments, as well as trailing commas.
 */
LogConfig parseLogConfigJson(StringPiece value);