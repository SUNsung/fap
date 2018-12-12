
        
        
    {  for (auto Entry : DCache.Entries) {
    DCache.CBs.keyDestroyCB(Entry.first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry.second, nullptr);
  }
  DCache.Entries.clear();
}
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
    // We'd like the dump routine to be present in all builds, but it's
// a pretty large amount of code, most of which is not sensitive to the
// actual key and value data.  If we try to have a common implementation,
// we're left with the problem of describing the layout of a node when
// that's technically instantiation-specific.  Redefining the struct here
// is technically an aliasing violation, but we can just tell the compilers
// that actually use TBAA that this is okay.
typedef struct _Node Node LLVM_MAY_ALIAS;
struct _Node {
  // If you change the layout in the header, you'll need to change it here.
  // (This comment is repeated there.)
  Node *Left, *Right, *Further;
};
    
    %{
    }
    
    
    
    #include 'swift/Demangling/Punycode.h'
#include 'swift/Demangling/ManglingUtils.h'
#include <vector>
#include <cstdint>
    
      double value;
  Flags  flags;
    
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
    
    // The CHECK macro returns a std::ostream object that can have extra information
// written to it.
#ifndef NDEBUG
#define CHECK(b)                                                             \
  (b ? ::benchmark::internal::GetNullLogInstance()                           \
     : ::benchmark::internal::CheckHandler(#b, __FILE__, __func__, __LINE__) \
           .GetLog())
#else
#define CHECK(b) ::benchmark::internal::GetNullLogInstance()
#endif
    
      // Only add label to mean/stddev if it is same for all runs
  Run rms;
  big_o.report_label = reports[0].report_label;
  rms.benchmark_name = benchmark_name + '_RMS';
  rms.report_label = big_o.report_label;
  rms.iterations = 0;
  rms.real_accumulated_time = result_real.rms / multiplier;
  rms.cpu_accumulated_time = result_cpu.rms / multiplier;
  rms.report_rms = true;
  rms.complexity = result_cpu.complexity;
  // don't forget to keep the time unit, or we won't be able to
  // recover the correct value.
  rms.time_unit = reports[0].time_unit;
    
    double Finish(Counter const& c, double cpu_time, double num_threads) {
  double v = c.value;
  if (c.flags & Counter::kIsRate) {
    v /= cpu_time;
  }
  if (c.flags & Counter::kAvgThreads) {
    v /= num_threads;
  }
  return v;
}
    
      // Field with embedded double-quote characters must be doubled and the field
  // delimited with double-quotes.
  std::string name = run.benchmark_name;
  ReplaceAll(&name, '\'', '\'\'');
  Out << ''' << name << '\',';
  if (run.error_occurred) {
    Out << std::string(elements.size() - 3, ',');
    Out << 'true,';
    std::string msg = run.error_message;
    ReplaceAll(&msg, '\'', '\'\'');
    Out << ''' << msg << '\'\n';
    return;
  }
    
    // NOTE: Wrappers for std::mutex and std::unique_lock are provided so that
// we can annotate them with thread safety attributes and use the
// -Wthread-safety warning with clang. The standard library types cannot be
// used directly because they do not provided the required annotations.
class CAPABILITY('mutex') Mutex {
 public:
  Mutex() {}
    }