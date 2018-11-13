
        
        namespace grpc {
    }
    
    #include <grpc/status.h>
#include 'absl/memory/memory.h'
#include 'absl/strings/string_view.h'
#include 'absl/strings/strip.h'
#include 'opencensus/trace/span.h'
#include 'opencensus/trace/span_context.h'
#include 'opencensus/trace/trace_params.h'
#include 'src/core/lib/slice/slice_internal.h'
#include 'src/cpp/common/channel_filter.h'
#include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    constexpr size_t RpcServerStatsEncoding::kRpcServerStatsSize;
constexpr size_t RpcServerStatsEncoding::kEncodeDecodeFailure;
constexpr size_t RpcServerStatsEncoding::kVersionIdSize;
constexpr size_t RpcServerStatsEncoding::kFieldIdSize;
constexpr size_t RpcServerStatsEncoding::kVersionIdOffset;
constexpr size_t RpcServerStatsEncoding::kVersionId;
    
    #include <string.h>
    
    void ProtoServerReflectionPlugin::Finish(grpc::ServerInitializer* si) {
  reflection_service_->SetServiceList(si->GetServiceList());
}
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    namespace benchmark {
namespace internal {
    }
    }
    
    std::string FormatString(const char* msg, va_list args) {
  // we might need a second shot at this, so pre-emptivly make a copy
  va_list args_cp;
  va_copy(args_cp, args);
    }
    
    
    {
    {
    {  // Native Client does not provide any API to access cycle counter.
  // Use clock_gettime(CLOCK_MONOTONIC, ...) instead of gettimeofday
  // because is provides nanosecond resolution (which is noticable at
  // least for PNaCl modules running on x86 Mac & Linux).
  // Initialize to always return 0 if clock_gettime fails.
  struct timespec ts = { 0, 0 };
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return static_cast<int64_t>(ts.tv_sec) * 1000000000 + ts.tv_nsec;
#elif defined(__aarch64__)
  // System timer of ARMv8 runs at a different frequency than the CPU's.
  // The frequency is fixed, typically in the range 1-50MHz.  It can be
  // read at CNTFRQ special register.  We assume the OS has set up
  // the virtual timer properly.
  int64_t virtual_timer_value;
  asm volatile('mrs %0, cntvct_el0' : '=r'(virtual_timer_value));
  return virtual_timer_value;
#elif defined(__ARM_ARCH)
  // V6 is the earliest arch that has a standard cyclecount
  // Native Client validator doesn't allow MRC instructions.
#if (__ARM_ARCH >= 6)
  uint32_t pmccntr;
  uint32_t pmuseren;
  uint32_t pmcntenset;
  // Read the user mode perf monitor counter access permissions.
  asm volatile('mrc p15, 0, %0, c9, c14, 0' : '=r'(pmuseren));
  if (pmuseren & 1) {  // Allows reading perfmon counters for user mode code.
    asm volatile('mrc p15, 0, %0, c9, c12, 1' : '=r'(pmcntenset));
    if (pmcntenset & 0x80000000ul) {  // Is it counting?
      asm volatile('mrc p15, 0, %0, c9, c13, 0' : '=r'(pmccntr));
      // The counter is set up to count every 64th cycle
      return static_cast<int64_t>(pmccntr) * 64;  // Should optimize to << 6
    }
  }
#endif
  struct timeval tv;
  gettimeofday(&tv, nullptr);
  return static_cast<int64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
#elif defined(__mips__)
  // mips apparently only allows rdtsc for superusers, so we fall
  // back to gettimeofday.  It's possible clock_gettime would be better.
  struct timeval tv;
  gettimeofday(&tv, nullptr);
  return static_cast<int64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
#else
// The soft failover to a generic implementation is automatic only for ARM.
// For other platforms the developer is expected to make an attempt to create
// a fast implementation and use generic version if nothing better is available.
#error You need to define CycleTimer for your OS and CPU
#endif
}
}  // end namespace cycleclock
}  // end namespace benchmark
    
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