
        
        
    {  return Status();
}
    
    
    {REGISTER_INTERNAL(ViewsConfigParserPlugin, 'config_parser', 'views');
}

    
    void INotifyEventPublisher::buildExcludePathsSet() {
  auto parser = Config::getParser('file_paths');
    }
    
    
    {  status = EventFactory::deregisterEventPublisher(basic_publisher_type);
  EXPECT_TRUE(status.ok());
}
    
    namespace internal {
    }
    
    namespace benchmark {
namespace internal {
    }
    }
    
    #include 'counter.h'
    
    
    {
    {#if defined(NDEBUG)
  const char build_type[] = 'release';
#else
  const char build_type[] = 'debug';
#endif
  out << indent << FormatKV('library_build_type', build_type) << '\n';
  // Close context block and open the list of benchmarks.
  out << inner_indent << '},\n';
  out << inner_indent << '\'benchmarks\': [\n';
  return true;
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