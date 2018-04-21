
        
        #include <stdarg.h>
#include <stdint.h>
    
        int unit;
    double value;
    
    // TODO(t10737622): Improve on-device symbolification
void getStackTraceSymbols(vector<StackTraceElement>& symbols,
                          const vector<InstructionPointer>& trace) {
  symbols.clear();
  symbols.reserve(trace.size());
    }
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(width, height);
    }
};

    
        method(calculateLayout);
    
    void setAssertHandler(AssertHandler assertHandler) {
    gAssertHandler = assertHandler;
}
    
      RefPtr(T* ptr, ConstructionMode mode) :
    m_ptr(ptr)
  {
    FBASSERTMSGF(ptr, 'Got null pointer in %s construction mode', mode == ConstructionMode::Adopted ? 'adopted' : 'external');
    ptr->ref();
    if (mode == ConstructionMode::Adopted) {
      FBASSERT(ptr->hasOnlyOneRef());
    }
  }
    
    
    {} // namespace detail
    
      BENCHMARK_DEPRECATED_MSG('use 'range(1)' instead')
  int range_y() const { return range(1); }
    
    bool BenchmarkFamilies::FindBenchmarks(
    const std::string& spec, std::vector<Benchmark::Instance>* benchmarks,
    std::ostream* ErrStream) {
  CHECK(ErrStream);
  auto& Err = *ErrStream;
  // Make regular expression out of command-line flag
  std::string error_msg;
  Regex re;
  if (!re.Init(spec, &error_msg)) {
    Err << 'Could not compile benchmark re: ' << error_msg << std::endl;
    return false;
  }
    }
    
      out << indent << '\'caches\': [\n';
  indent = std::string(6, ' ');
  std::string cache_indent(8, ' ');
  for (size_t i = 0; i < info.caches.size(); ++i) {
    auto& CI = info.caches[i];
    out << indent << '{\n';
    out << cache_indent << FormatKV('type', CI.type) << ',\n';
    out << cache_indent << FormatKV('level', static_cast<int64_t>(CI.level))
        << ',\n';
    out << cache_indent
        << FormatKV('size', static_cast<int64_t>(CI.size) * 1000u) << ',\n';
    out << cache_indent
        << FormatKV('num_sharing', static_cast<int64_t>(CI.num_sharing))
        << '\n';
    out << indent << '}';
    if (i != info.caches.size() - 1) out << ',';
    out << '\n';
  }
  indent = std::string(4, ' ');
  out << indent << '],\n';
    
    
    {      delete[] errbuf;
    }
    
    double BenchmarkReporter::Run::GetAdjustedCPUTime() const {
  double new_time = cpu_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}
    
    namespace benchmark {
#ifdef BENCHMARK_OS_WINDOWS
// Window's Sleep takes milliseconds argument.
void SleepForMilliseconds(int milliseconds) { Sleep(milliseconds); }
void SleepForSeconds(double seconds) {
  SleepForMilliseconds(static_cast<int>(kNumMillisPerSecond * seconds));
}
#else   // BENCHMARK_OS_WINDOWS
void SleepForMicroseconds(int microseconds) {
  struct timespec sleep_time;
  sleep_time.tv_sec = microseconds / kNumMicrosPerSecond;
  sleep_time.tv_nsec = (microseconds % kNumMicrosPerSecond) * kNumNanosPerMicro;
  while (nanosleep(&sleep_time, &sleep_time) != 0 && errno == EINTR)
    ;  // Ignore signals and wait for the full interval to elapse.
}
    }