
        
        	// Ensure EnvironmentVariables are propagated.
    
    // redirect the nath functions.
bool CheckNAN(double v) {
  return ISNAN(v);
}
double LogGamma(double v) {
  return lgammafn(v);
}
    
    
    { private:
  /*! \brief the underlying stream */
  dmlc::Stream *stream_;
  /*! \brief buffer to hold data */
  std::string buffer_;
  /*! \brief length of valid data in buffer */
  size_t read_len_;
  /*! \brief pointer in the buffer */
  size_t read_ptr_;
};
    
    TEST(Metric, PoissionNegLogLik) {
  xgboost::Metric * metric = xgboost::Metric::Create('poisson-nloglik');
  ASSERT_STREQ(metric->Name(), 'poisson-nloglik');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0.5f, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.2f, 0.1f, 0.2f},
                            {  0,   0,   1,   1}),
              1.1280f, 0.001f);
}

    
          // Test write entire array
      std::vector<unsigned char> buffer(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
    
    
    {  /*!
   * \brief Create a linear updater given name
   * \param name Name of the linear updater.
   */
  static LinearUpdater* Create(const std::string& name);
};
    
      /**
   * Finds the last occurrence of any character in the first `count` characters
   *   in the buffer pointed to by `that` in this string, starting at offset
   *  `pos`.
   * \pre `pos <= size()`
   * \pre `that` points to a buffer containing at least `count` contiguous
   *   characters.
   * \return The largest offset `i` such that `i <= pos` and
   *   `i < size()` and `std::find(that, that+count, at(i)) != that+count`; or
   *   `npos` if there is no such offset `i`.
   * \throw std::out_of_range when `pos > size()`
   */
  constexpr std::size_t find_last_of(
      const Char* that,
      std::size_t pos,
      std::size_t count) const noexcept(false) {
    return 0u == size_
        ? npos
        : detail::fixedstring::find_last_of_(
              data_,
              that,
              folly::constexpr_min(
                  detail::fixedstring::checkOverflow(pos, size_), size_ - 1u),
              count);
  }
    
    enum : uint16_t {
  kHeapMagic = 0xa5a5,
  // This memory segment contains an IOBuf that is still in use
  kIOBufInUse = 0x01,
  // This memory segment contains buffer data that is still in use
  kDataInUse = 0x02,
};
    
     public:
  HazptrLockFreeLIFO() : head_(nullptr) {}
    
    
    {} // namespace folly

    
      size_t size() override {
    size_t size = 0;
    for (auto& q : queues_) {
      size += q.size();
    }
    return size;
  }
    
    folly::Future<bool> Barrier::wait() {
  // Load the current control block first. As we know there is at least
  // one thread in the current epoch (us), this means that the value is
  // < size_, so controlBlock_ can't change until we bump the value below.
  auto block = controlBlock_.load(std::memory_order_acquire);
  auto p = promises(block);
    }
    
    void init(int* argc, char*** argv, bool removeFlags) {
#if FOLLY_USE_SYMBOLIZER
  // Install the handler now, to trap errors received during startup.
  // The callbacks, if any, can be installed later
  folly::symbolizer::installFatalSignalHandler();
#elif !defined(_WIN32)
  google::InstallFailureSignalHandler();
#endif
    }
    
    // Configure folly to enable INFO+ messages, and everything else to
// enable WARNING+.
//
// Set the default log handler to log asynchronously by default.
FOLLY_INIT_LOGGING_CONFIG('.=WARNING,folly=INFO; default:async=true');
    
        auto pid = fork();
    folly::checkUnixError(pid, 'failed to fork');
    if (pid == 0) {
      writer.writeMessage(folly::to<std::string>('child pid=', getpid(), '\n'));
      for (size_t n = 0; n < numMessages; ++n) {
        writer.writeMessage(folly::to<std::string>('child', n, '\n'));
        std::this_thread::sleep_for(sleepDuration);
      }
    }
    
    std::string AbstractOptionHandler::toTagString() const
{
  std::string s;
  for (int i = 0; i < MAX_HELP_TAG; ++i) {
    if (tags_ & (1 << i)) {
      s += strHelpTag(i);
      s += ', ';
    }
  }
  if (!s.empty()) {
    s.resize(s.size() - 2);
  }
  return s;
}
    
      enum Flag {
    FLAG_HIDDEN = 1,
    FLAG_ERASE_AFTER_PARSE = 1 << 1,
    FLAG_INITIAL_OPTION = 1 << 2,
    FLAG_CHANGE_OPTION = 1 << 3,
    FLAG_CHANGE_OPTION_FOR_RESERVED = 1 << 4,
    FLAG_CHANGE_GLOBAL_OPTION = 1 << 5,
    FLAG_CUMULATIVE = 1 << 6
  };
    
    
    {} // namespace aria2

    
      void nextEvent();
    
    namespace aria2 {
    }
    
    #endif  // BENCHMARK_API_INTERNAL_H

    
    namespace benchmark {
namespace internal {
    }
    }
    
    
    {}  // end namespace benchmark
    
    void ConsoleReporter::PrintRunData(const Run& result) {
  typedef void(PrinterFn)(std::ostream&, LogColor, const char*, ...);
  auto& Out = GetOutputStream();
  PrinterFn* printer = (output_options_ & OO_Color) ?
                         (PrinterFn*)ColorPrintf : IgnoreColorPrint;
  auto name_color =
      (result.report_big_o || result.report_rms) ? COLOR_BLUE : COLOR_GREEN;
  printer(Out, name_color, '%-*s ', name_field_width_,
          result.benchmark_name.c_str());
    }
    
    void Increment(UserCounters *l, UserCounters const& r) {
  // add counters present in both or just in *l
  for (auto &c : *l) {
    auto it = r.find(c.first);
    if (it != r.end()) {
      c.second.value = c.second + it->second;
    }
  }
  // add counters present in r, but not in *l
  for (auto const &tc : r) {
    auto it = l->find(tc.first);
    if (it == l->end()) {
      (*l)[tc.first] = tc.second;
    }
  }
}
    
      if (!printed_header_) {
    // save the names of all the user counters
    for (const auto& run : reports) {
      for (const auto& cnt : run.counters) {
        user_counter_names_.insert(cnt.first);
      }
    }
    }
    
    
    {      delete[] errbuf;
    }