
        
          Allocated = new char[capacity];
  End = Allocated + capacity;
  Begin = End - oldSize;
  std::memcpy(Begin, oldBegin, oldSize);
    
      // If the result type matches the context, remove the context type from the
  // prefix of the name.
  bool resultTypeMatchesContext = returnsSelf || (resultType == contextType);
  if (resultTypeMatchesContext) {
    StringRef newBaseName = omitNeedlessWordsFromPrefix(baseName, contextType,
                                                        scratch);
    if (newBaseName != baseName) {
      baseName = newBaseName;
      anyChanges = true;
    }
  }
    
    namespace swift {
namespace sys {
void TaskProcessInformation::ResourceUsage::provideMapping(json::Output &out) {
  out.mapRequired('utime', Utime);
  out.mapRequired('stime', Stime);
  out.mapRequired('maxrss', Maxrss);
}
    }
    }
    
    // WIN32 doesn't natively support <uuid/uuid.h>. Instead, we use Win32 APIs.
#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <objbase.h>
#include <string>
#else
#include <uuid/uuid.h>
#endif
    
    /// Translate the given operator character into its mangled form.
///
/// Current operator characters:   @/=-+*%<>!&|^~ and the special operator '..'
char Mangle::translateOperatorChar(char op) {
  switch (op) {
    case '&': return 'a'; // 'and'
    case '@': return 'c'; // 'commercial at sign'
    case '/': return 'd'; // 'divide'
    case '=': return 'e'; // 'equal'
    case '>': return 'g'; // 'greater'
    case '<': return 'l'; // 'less'
    case '*': return 'm'; // 'multiply'
    case '!': return 'n'; // 'negate'
    case '|': return 'o'; // 'or'
    case '+': return 'p'; // 'plus'
    case '?': return 'q'; // 'question'
    case '%': return 'r'; // 'remainder'
    case '-': return 's'; // 'subtract'
    case '~': return 't'; // 'tilde'
    case '^': return 'x'; // 'xor'
    case '.': return 'z'; // 'zperiod' (the z is silent)
    default:
      return op;
  }
}
    
    OPERATOR_SCHEMA(EnforceFinite)
    .NumInputs(1)
    .NumOutputs(0)
    .SetDoc(R'DOC(
Raise if there is NaN or Inf values in the input tensor.
)DOC')
    .Input(0, 'input', 'Input tensor');
    
    
    {class GetHalfToFloatGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'FloatToHalf', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(HalfToFloat, GetHalfToFloatGradient);
NO_GRADIENT(Float16ConstantFill);
} // namespace caffe2

    
              const TensorShape& X = in[0];
          int N = 0, C = 0, H = 0, W = 0;
          switch (order) {
            case StorageOrder::NCHW:
              N = X.dims(0);
              C = X.dims(1);
              H = X.dims(2);
              W = X.dims(3);
              break;
            case StorageOrder::NHWC:
              N = X.dims(0);
              H = X.dims(1);
              W = X.dims(2);
              C = X.dims(3);
              break;
            default:
              CAFFE_THROW('Unknown storage order: ', order);
          }
    
      const bool has_explicit_iteration_count = b.iterations != 0;
  size_t iters = has_explicit_iteration_count ? b.iterations : 1;
  std::unique_ptr<internal::ThreadManager> manager;
  std::vector<std::thread> pool(b.threads - 1);
  const int repeats =
      b.repetitions != 0 ? b.repetitions : FLAGS_benchmark_repetitions;
  const bool report_aggregates_only =
      repeats != 1 &&
      (b.report_mode == internal::RM_Unspecified
           ? FLAGS_benchmark_report_aggregates_only
           : b.report_mode == internal::RM_ReportAggregatesOnly);
  for (int repetition_num = 0; repetition_num < repeats; repetition_num++) {
    for (;;) {
      // Try benchmark
      VLOG(2) << 'Running ' << b.name << ' for ' << iters << '\n';
    }
    }
    
    #include <cstdarg>
#include <iostream>
#include <string>
    
      // If def_optional is true and there are more characters after the
  // flag name, or if def_optional is false, there must be a '=' after
  // the flag name.
  if (flag_end[0] != '=') return nullptr;
    
    // Macros for defining flags.
#define DEFINE_bool(name, default_val, doc) bool FLAG(name) = (default_val)
#define DEFINE_int32(name, default_val, doc) int32_t FLAG(name) = (default_val)
#define DEFINE_int64(name, default_val, doc) int64_t FLAG(name) = (default_val)
#define DEFINE_double(name, default_val, doc) double FLAG(name) = (default_val)
#define DEFINE_string(name, default_val, doc) \
  std::string FLAG(name) = (default_val)
    
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
    
    namespace {
std::vector<std::string> elements = {
    'name',           'iterations',       'real_time',        'cpu_time',
    'time_unit',      'bytes_per_second', 'items_per_second', 'label',
    'error_occurred', 'error_message'};
}  // namespace
    
    
    {  ss << std::scientific << std::setprecision(max_fractional_digits10) << value;
  return ss.str();
}
    
    typedef std::basic_ostream<char>&(EndLType)(std::basic_ostream<char>&);
    
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