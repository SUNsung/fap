
        
        // Asserts that a given statement causes the program to exit, either by
// explicitly exiting with a nonzero exit code or being killed by a
// signal, and emitting error output that matches regex.
# define ASSERT_DEATH(statement, regex) \
    ASSERT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
      // Note: we deliberately don't call this PrintTo(), as that name
  // conflicts with ::testing::internal::PrintTo in the body of the
  // function.
  static void Print(const T& value, ::std::ostream* os) {
    // By default, ::testing::internal::PrintTo() is used for printing
    // the value.
    //
    // Thanks to Koenig look-up, if T is a class and has its own
    // PrintTo() function defined in its namespace, that function will
    // be visible here.  Since it is more specific than the generic ones
    // in ::testing::internal, it will be picked by the compiler in the
    // following statement - exactly what we want.
    PrintTo(value, os);
  }
    
    // Binary predicate assertion macros.
#define EXPECT_PRED_FORMAT2(pred_format, v1, v2) \
  GTEST_PRED_FORMAT2_(pred_format, v1, v2, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED2(pred, v1, v2) \
  GTEST_PRED2_(pred, v1, v2, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT2(pred_format, v1, v2) \
  GTEST_PRED_FORMAT2_(pred_format, v1, v2, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED2(pred, v1, v2) \
  GTEST_PRED2_(pred, v1, v2, GTEST_FATAL_FAILURE_)
    
    namespace testing {
namespace internal {
    }
    }
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
  const T31 v31_;
  const T32 v32_;
  const T33 v33_;
  const T34 v34_;
  const T35 v35_;
  const T36 v36_;
  const T37 v37_;
  const T38 v38_;
  const T39 v39_;
};
    
    #include <string.h>
    
    
// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.
    
    #ifndef GTEST_SAMPLES_SAMPLE3_INL_H_
#define GTEST_SAMPLES_SAMPLE3_INL_H_
    
    const int SHUTDOWN_TIMEOUT = 2000; // 2s
    
    
    {    auto extendSize = (TIndex)maxElem - oldSize;
    if (extendSize > 0) {
      new_tensor->Extend(extendSize, growthPct_, &context_);
      if (!new_tensor->meta().ctor()) {
        auto oldSizeBytes = oldSize * new_tensor->meta().itemsize();
        auto* dst = (char*)new_tensor->raw_mutable_data() + oldSizeBytes;
        math::Set<char, Context>(
            new_tensor->nbytes() - oldSizeBytes, 0, dst, &context_);
      }
    }
    return true;
  }
    
    REGISTER_CPU_OPERATOR(
    MergeMultiMapFeatureTensorsGradient,
    MergeMultiListOrMapFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeMultiMapFeatureTensorsGradient)
    .SetDoc(
        'Explode given multi-feature tensors with map features '
        'into many.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 2 == 1; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_values_lengths', '.values.lengths')
    .Input(2, 'out_values_values_grad', '.values.values_grad')
    .Output(0, 'in1_values_values_grad', '.values.values_grad');
REGISTER_GRADIENT(
    MergeMultiMapFeatureTensors,
    GetMergeMultiMapFeatureTensorsGradient);
    
    template <class Context>
class FindDuplicateElementsOp final : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  USE_SIMPLE_CTOR_DTOR(FindDuplicateElementsOp);
  USE_DISPATCH_HELPER;
    }
    
    std::shared_ptr<Channel> CreateInsecureChannelFromFd(const grpc::string& target,
                                                     int fd) {
  internal::GrpcLibrary init_lib;
  init_lib.init();
  return CreateChannelInternal(
      '', grpc_insecure_channel_create_from_fd(target.c_str(), fd, nullptr));
}
    
    std::shared_ptr<ChannelCredentials> CronetChannelCredentials(void* engine) {
  return std::shared_ptr<ChannelCredentials>(
      new CronetChannelCredentialsImpl(engine));
}
    
    void CoreCodegen::assert_fail(const char* failed_assertion, const char* file,
                              int line) {
  gpr_log(file, line, GPR_LOG_SEVERITY_ERROR, 'assertion failed: %s',
          failed_assertion);
  abort();
}
    
    class SecureAuthContext final : public AuthContext {
 public:
  SecureAuthContext(grpc_auth_context* ctx, bool take_ownership);
    }
    
    void GenerateServerContext(absl::string_view tracing, absl::string_view stats,
                           absl::string_view primary_role,
                           absl::string_view method, CensusContext* context) {
  GrpcTraceContext trace_ctxt;
  TraceContextEncoding::Decode(tracing, &trace_ctxt);
  SpanContext parent_ctx = trace_ctxt.ToSpanContext();
  new (context) CensusContext(method, parent_ctx);
}
    
      void EmitXFXForm(const uint8_t op,
                   const RegNumber rs,
                   const SpecialReg spr,
                   const uint16_t xo,
                   const uint8_t rsv = 0) {
    }
    
    void Config::ReplaceIncludesWithIni(const std::string& original_ini_filename,
                                    const std::string& iniStr,
                                    std::string& with_includes) {
  std::istringstream iss(iniStr);
  std::string line;
  while (std::getline(iss, line)) {
    // Handle cases like
    //   #include           ''
    //   ##includefoo barbaz'myconfig.ini' how weird is that
    // Anything that is not a syntactically correct #include 'file' after
    // this pre-processing, will be treated as an ini comment and processed
    // as such in the ini parser
    auto pos = line.find_first_not_of(' ');
    if (pos == std::string::npos ||
        line.compare(pos, strlen('#include'), '#include') != 0) {
      // treat as normal ini line, including comment that doesn't start with
      // #include
      with_includes += line + '\n';
      continue;
    }
    pos += strlen('#include');
    auto start = line.find_first_not_of(' ', pos);
    auto end = line.find_last_not_of(' ');
    if ((start == std::string::npos || line[start] != ''') ||
        (end == start || line[end] != ''')) {
      with_includes += line + '\n'; // treat as normal comment
      continue;
    }
    std::string file = line.substr(start + 1, end - start - 1);
    const std::string logger_file = file;
    boost::filesystem::path p(file);
    if (!p.is_absolute()) {
      boost::filesystem::path opath(original_ini_filename);
      p = opath.parent_path()/p;
    }
    if (boost::filesystem::exists(p)) {
      std::ifstream ifs(p.string());
      const std::string contents((std::istreambuf_iterator<char>(ifs)),
                                 std::istreambuf_iterator<char>());
      Config::ReplaceIncludesWithIni(p.string(), contents, with_includes);
    } else {
      Logger::Warning('ini include file %s not found', logger_file.c_str());
    }
  }
}
    
    
    {  closedir(dsrc);
  closedir(ddest);
}
    
    	if (cmderOptions.registerApp == true) {
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_BACKGROUND);
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_LISTITEM);
	}
	else if (cmderOptions.unRegisterApp == true)
	{
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_BACKGROUND);
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_LISTITEM);
	}
	else if (cmderOptions.error == true)
	{
		return 1;
	}
	else
	{
		StartCmder(cmderOptions.cmderStart, cmderOptions.cmderSingle, cmderOptions.cmderTask, cmderOptions.cmderCfgRoot);
	}
    
    class Env;
class Iterator;
class TableCache;
class VersionEdit;
    
    class DBImpl : public DB {
 public:
  DBImpl(const Options& options, const std::string& dbname);
  virtual ~DBImpl();
    }
    
      Options last_options_;
    
    // Print contents of a log file. (*func)() is called on every record.
Status PrintLogContents(Env* env, const std::string& fname,
                        void (*func)(uint64_t, Slice, WritableFile*),
                        WritableFile* dst) {
  SequentialFile* file;
  Status s = env->NewSequentialFile(fname, &file);
  if (!s.ok()) {
    return s;
  }
  CorruptionReporter reporter;
  reporter.dst_ = dst;
  log::Reader reader(file, &reporter, true, 0);
  Slice record;
  std::string scratch;
  while (reader.ReadRecord(&record, &scratch)) {
    (*func)(reader.LastRecordOffset(), record, dst);
  }
  delete file;
  return Status::OK();
}
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
      // SkipList is not protected by mu_.  We just use a single writer
  // thread to modify it.
  SkipList<Key, Comparator> list_;
    
    
    {    state.SetBytesProcessed(state.iterations() * j.dump(indent).size());
}
BENCHMARK_CAPTURE(Dump, jeopardy / -,      'data/jeopardy/jeopardy.json',                 -1);
BENCHMARK_CAPTURE(Dump, jeopardy / 4,      'data/jeopardy/jeopardy.json',                 4);
BENCHMARK_CAPTURE(Dump, canada / -,        'data/nativejson-benchmark/canada.json',       -1);
BENCHMARK_CAPTURE(Dump, canada / 4,        'data/nativejson-benchmark/canada.json',       4);
BENCHMARK_CAPTURE(Dump, citm_catalog / -,  'data/nativejson-benchmark/citm_catalog.json', -1);
BENCHMARK_CAPTURE(Dump, citm_catalog / 4,  'data/nativejson-benchmark/citm_catalog.json', 4);
BENCHMARK_CAPTURE(Dump, twitter / -,       'data/nativejson-benchmark/twitter.json',      -1);
BENCHMARK_CAPTURE(Dump, twitter / 4,       'data/nativejson-benchmark/twitter.json',      4);
BENCHMARK_CAPTURE(Dump, floats / -,        'data/numbers/floats.json',                    -1);
BENCHMARK_CAPTURE(Dump, floats / 4,        'data/numbers/floats.json',                    4);
BENCHMARK_CAPTURE(Dump, signed_ints / -,   'data/numbers/signed_ints.json',               -1);
BENCHMARK_CAPTURE(Dump, signed_ints / 4,   'data/numbers/signed_ints.json',               4);
BENCHMARK_CAPTURE(Dump, unsigned_ints / -, 'data/numbers/unsigned_ints.json',             -1);
BENCHMARK_CAPTURE(Dump, unsigned_ints / 4, 'data/numbers/unsigned_ints.json',             4);
    
    #define arraysize(array) (sizeof(::benchmark::internal::ArraySizeHelper(array)))
    
    void BenchmarkFamilies::ClearBenchmarks() {
  MutexLock l(mutex_);
  families_.clear();
  families_.shrink_to_fit();
}
    
    #include <cstdarg>
#include <iostream>
#include <string>
    
    // Parses a string for an Int32 flag, in the form of
// '--flag=value'.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseInt32Flag(const char* str, const char* flag, int32_t* value);
    
    #include 'benchmark/benchmark.h'
    
      if (run.bytes_per_second > 0.0) {
    Out << run.bytes_per_second;
  }
  Out << ',';
  if (run.items_per_second > 0.0) {
    Out << run.items_per_second;
  }
  Out << ',';
  if (!run.report_label.empty()) {
    // Field with embedded double-quote characters must be doubled and the field
    // delimited with double-quotes.
    std::string label = run.report_label;
    ReplaceAll(&label, '\'', '\'\'');
    Out << '\'' << label << '\'';
  }
  Out << ',,';  // for error_occurred and error_message
    
    namespace benchmark {
// NOTE: only i386 and x86_64 have been well tested.
// PPC, sparc, alpha, and ia64 are based on
//    http://peter.kuscsik.com/wordpress/?p=14
// with modifications by m3b.  See also
//    https://setisvn.ssl.berkeley.edu/svn/lib/fftw-3.0.1/kernel/cycle.h
namespace cycleclock {
// This should return the number of cycles since power-on.  Thread-safe.
inline BENCHMARK_ALWAYS_INLINE int64_t Now() {
#if defined(BENCHMARK_OS_MACOSX)
  // this goes at the top because we need ALL Macs, regardless of
  // architecture, to return the number of 'mach time units' that
  // have passed since startup.  See sysinfo.cc where
  // InitializeSystemInfo() sets the supposed cpu clock frequency of
  // macs to the number of mach time units per second, not actual
  // CPU clock frequency (which can change in the face of CPU
  // frequency scaling).  Also note that when the Mac sleeps, this
  // counter pauses; it does not continue counting, nor does it
  // reset to zero.
  return mach_absolute_time();
#elif defined(BENCHMARK_OS_EMSCRIPTEN)
  // this goes above x86-specific code because old versions of Emscripten
  // define __x86_64__, although they have nothing to do with it.
  return static_cast<int64_t>(emscripten_get_now() * 1e+6);
#elif defined(__i386__)
  int64_t ret;
  __asm__ volatile('rdtsc' : '=A'(ret));
  return ret;
#elif defined(__x86_64__) || defined(__amd64__)
  uint64_t low, high;
  __asm__ volatile('rdtsc' : '=a'(low), '=d'(high));
  return (high << 32) | low;
#elif defined(__powerpc__) || defined(__ppc__)
  // This returns a time-base, which is not always precisely a cycle-count.
  int64_t tbl, tbu0, tbu1;
  asm('mftbu %0' : '=r'(tbu0));
  asm('mftb  %0' : '=r'(tbl));
  asm('mftbu %0' : '=r'(tbu1));
  tbl &= -static_cast<int64_t>(tbu0 == tbu1);
  // high 32 bits in tbu1; low 32 bits in tbl  (tbu0 is garbage)
  return (tbu1 << 32) | tbl;
#elif defined(__sparc__)
  int64_t tick;
  asm('.byte 0x83, 0x41, 0x00, 0x00');
  asm('mov   %%g1, %0' : '=r'(tick));
  return tick;
#elif defined(__ia64__)
  int64_t itc;
  asm('mov %0 = ar.itc' : '=r'(itc));
  return itc;
#elif defined(COMPILER_MSVC) && defined(_M_IX86)
  // Older MSVC compilers (like 7.x) don't seem to support the
  // __rdtsc intrinsic properly, so I prefer to use _asm instead
  // when I know it will work.  Otherwise, I'll use __rdtsc and hope
  // the code is being compiled with a non-ancient compiler.
  _asm rdtsc
#elif defined(COMPILER_MSVC)
  return __rdtsc();
#elif defined(BENCHMARK_OS_NACL)
  // Native Client validator on x86/x86-64 allows RDTSC instructions,
  // and this case is handled above. Native Client validator on ARM
  // rejects MRC instructions (used in the ARM-specific sequence below),
  // so we handle it here. Portable Native Client compiles to
  // architecture-agnostic bytecode, which doesn't provide any
  // cycle counter access mnemonics.
    }
    }
    }
    
    class LogType {
  friend LogType& GetNullLogInstance();
  friend LogType& GetErrorLogInstance();
    }
    
    // Enable thread safety attributes only with clang.
// The attributes can be safely erased when compiling with other compilers.
#if defined(HAVE_THREAD_SAFETY_ATTRIBUTES)
#define THREAD_ANNOTATION_ATTRIBUTE__(x) __attribute__((x))
#else
#define THREAD_ANNOTATION_ATTRIBUTE__(x)  // no-op
#endif
    
      const CPUInfo &info = context.cpu_info;
  Out << 'Run on (' << info.num_cpus << ' X '
      << (info.cycles_per_second / 1000000.0) << ' MHz CPU '
      << ((info.num_cpus > 1) ? 's' : '') << ')\n';
  if (info.caches.size() != 0) {
    Out << 'CPU Caches:\n';
    for (auto &CInfo : info.caches) {
      Out << '  L' << CInfo.level << ' ' << CInfo.type << ' '
          << (CInfo.size / 1000) << 'K';
      if (CInfo.num_sharing != 0)
        Out << ' (x' << (info.num_cpus / CInfo.num_sharing) << ')';
      Out << '\n';
    }
  }
    
    #include <cerrno>
#include <cstdlib>
#include <ctime>