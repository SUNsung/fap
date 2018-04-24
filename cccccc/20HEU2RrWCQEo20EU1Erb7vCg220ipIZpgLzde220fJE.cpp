
        
          ServerConfig server_config;
  server_config.set_server_type(SYNC_SERVER);
    
    #endif  // GRPC_INTERNAL_COMPILER_NODE_GENERATOR_HELPERS_H

    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
    #endif  // GRPC_TEST_CPP_UTIL_SUBPROCESS_H

    
      /// Read some data from the stream. Returns the number of bytes read. Throws
  /// an exception on failure.
  template <typename MutableBufferSequence>
  std::size_t read_some(const MutableBufferSequence& buffers);
    
    // Standard library components can't be forward declared, so we'll have to
// include the array header. Fortunately, it's fairly lightweight and doesn't
// add significantly to the compile time.
#if defined(BOOST_ASIO_HAS_STD_ARRAY)
# include <array>
#endif // defined(BOOST_ASIO_HAS_STD_ARRAY)
    
    namespace boost {
namespace date_time {
    }
    }
    
    #endif // BOOST_ASIO_DETAIL_FENCED_BLOCK_HPP

    
      explicit winrt_buffer_impl(const boost::asio::mutable_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = 0;
    capacity_ = boost::asio::buffer_size(b);
  }
    
      if (shutdown_)
  {
    io_service_.post_immediate_completion(op, false);
    return;
  }
    
    Status FilesystemConfigPlugin::genPack(const std::string& name,
                                       const std::string& value,
                                       std::string& pack) {
  if (name == '*') {
    // The config requested a multi-pack.
    std::vector<std::string> paths;
    resolveFilePattern(value, paths);
    }
    }
    
    
    {    // Check if overflowed
    if (value > 0) {
      return boost::lexical_cast<std::string>(std::llround(value));
    }
  }
    
    #include 'osquery/core/utils.h'
    
    struct ExceptionInfo {
  const std::type_info* type{nullptr};
  // The values in frames are IP (instruction pointer) addresses.
  // They are only filled if the low-level exception tracer library is
  // linked in or LD_PRELOADed.
  std::vector<uintptr_t> frames; // front() is top of stack
};
    
    template <typename T>
constexpr T constexpr_log2(T t) {
  return detail::constexpr_log2_(T(0), t);
}
    
    class memory_resource {
 public:
  virtual ~memory_resource() = default;
  virtual void* allocate(
      const size_t bytes,
      const size_t alignment = max_align_v) = 0;
  virtual void deallocate(
      void* p,
      const size_t bytes,
      const size_t alignment = max_align_v) = 0;
};
    
    AsyncIO::AsyncIO(size_t capacity, PollMode pollMode) : capacity_(capacity) {
  CHECK_GT(capacity_, 0);
  completed_.reserve(capacity_);
  if (pollMode == POLLABLE) {
    pollFd_ = eventfd(0, EFD_NONBLOCK);
    checkUnixError(pollFd_, 'AsyncIO: eventfd creation failed');
  }
}
    
    /**
 * Canonicalize the parent path, leaving the filename (last component)
 * unchanged.  You may use this before creating a file instead of
 * boost::filesystem::canonical, which requires that the entire path exists.
 */
path canonical_parent(const path& p, const path& basePath = current_path());
    
    void AsyncFileWriter::writeMessage(std::string&& buffer, uint32_t flags) {
  auto data = data_.lock();
  if ((data->currentBufferSize >= data->maxBufferBytes) &&
      !(flags & NEVER_DISCARD)) {
    ++data->numDiscarded;
    return;
  }
    }
    
      /**
   * Get the output file.
   */
  const folly::File& getFile() const {
    return file_;
  }
    
    std::shared_ptr<LogHandler> FileHandlerFactory::createHandler(
    const Options& options) {
  WriterFactory writerFactory;
  return StandardLogHandlerFactory::createHandler(
      getType(), &writerFactory, options);
}
    
      std::shared_ptr<LogHandler> createHandler(const Options& options) override;
    
    namespace folly {
    }
    
      if (Att == INVALID_FILE_ATTRIBUTES) {
    Printf('GetFileAttributesA() failed for \'%s\' (Error code: %lu).\n',
        Path.c_str(), GetLastError());
    return false;
  }
    
    void Fuzzer::PrintStats(const char *Where, const char *End, size_t Units) {
  size_t ExecPerSec = execPerSec();
  if (Options.OutputCSV) {
    static bool csvHeaderPrinted = false;
    if (!csvHeaderPrinted) {
      csvHeaderPrinted = true;
      Printf('runs,block_cov,bits,cc_cov,corpus,execs_per_sec,tbms,reason\n');
    }
    Printf('%zd,%zd,%zd,%zd,%zd,%zd,%s\n', TotalNumberOfRuns,
           MaxCoverage.BlockCoverage, MaxCoverage.CounterBitmapBits,
           MaxCoverage.CallerCalleeCoverage, Corpus.size(), ExecPerSec, Where);
  }
    }
    
    size_t MutationDispatcher::ApplyDictionaryEntry(uint8_t *Data, size_t Size,
                                                size_t MaxSize,
                                                DictionaryEntry &DE) {
  const Word &W = DE.GetW();
  bool UsePositionHint = DE.HasPositionHint() &&
                         DE.GetPositionHint() + W.size() < Size &&
                         Rand.RandBool();
  if (Rand.RandBool()) {  // Insert W.
    if (Size + W.size() > MaxSize) return 0;
    size_t Idx = UsePositionHint ? DE.GetPositionHint() : Rand(Size + 1);
    memmove(Data + Idx + W.size(), Data + Idx, Size - Idx);
    memcpy(Data + Idx, W.data(), W.size());
    Size += W.size();
  } else {  // Overwrite some bytes with W.
    if (W.size() > Size) return 0;
    size_t Idx = UsePositionHint ? DE.GetPositionHint() : Rand(Size - W.size());
    memcpy(Data + Idx, W.data(), W.size());
  }
  return Size;
}
    
    
    {}  // namespace fuzzer