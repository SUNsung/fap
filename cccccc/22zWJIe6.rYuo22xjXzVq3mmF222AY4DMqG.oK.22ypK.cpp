
        
        
    {}  // namespace
    
      void PurchaseProduct(const std::string& product_id, mate::Arguments* args);
    
    v8::Local<v8::Value> Net::URLRequest(v8::Isolate* isolate) {
  return URLRequest::GetConstructor(isolate)->GetFunction();
}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Screen);
};
    
      if (conformanceSig) {
    for (auto &rawReq : conformanceSig->getRequirements()) {
      if (auto req = rawReq.subst(conformanceToSyntheticTypeFn,
                                  conformanceToSyntheticConformanceFn))
        builder.addRequirement(*req, source, nullptr);
    }
  }
    
      // Set the 'runtime' platform condition.
  if (EnableObjCInterop)
    addPlatformConditionValue(PlatformConditionKind::Runtime, '_ObjC');
  else
    addPlatformConditionValue(PlatformConditionKind::Runtime, '_Native');
    
    
    {
    {
    {      if (node->Right) {
        print(node->Right, ChildKind::Right);
      }
    }
  }
};
    
    // WIN32 doesn't natively support <uuid/uuid.h>. Instead, we use Win32 APIs.
#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <objbase.h>
#include <string>
#else
#include <uuid/uuid.h>
#endif
    
    bool ParseBoolFlag(const char* str, const char* flag, bool* value) {
  // Gets the value of the flag as a string.
  const char* const value_str = ParseFlagValue(str, flag, true);
    }
    
      for (auto& c : result.counters) {
    const std::size_t cNameLen = std::max(std::string::size_type(10),
                                          c.first.length());
    auto const& s = HumanReadableNumber(c.second.value, 1000);
    if (output_options_ & OO_Tabular) {
      if (c.second.flags & Counter::kIsRate) {
        printer(Out, COLOR_DEFAULT, ' %*s/s', cNameLen - 2, s.c_str());
      } else {
        printer(Out, COLOR_DEFAULT, ' %*s', cNameLen, s.c_str());
      }
    } else {
      const char* unit = (c.second.flags & Counter::kIsRate) ? '/s' : '';
      printer(Out, COLOR_DEFAULT, ' %s=%s%s', c.first.c_str(), s.c_str(),
              unit);
    }
  }
    
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
    
    
    {void JSONReporter::Finalize() {
  // Close the list of benchmarks and the top level object.
  GetOutputStream() << '\n  ]\n}\n';
}
    
    #endif

    
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
    
        int32_t count = 0;
    int32_t start_id = 0;
    int32_t end_id = 0;
    int32_t id = 0;
    if (param->is_first_agent) {
      start_id = 1;
      end_id = 128;
    } else {
      start_id = 129;
      end_id = start_id + 127;
    }
    id = start_id;
    int32_t send_id = id;
    AINFO << 'port:' << param->conf.ShortDebugString()
          << ', start_id:' << start_id << ', end_id:' << end_id;
    
    class HermesCanClient : public CanClient {
 public:
  /**
   * @brief Initialize the BCAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   */
  // explicit HermesCanClient(const CANCardParameter &parameter);
    }
    
    #include 'modules/drivers/canbus/can_comm/message_manager.h'
    
    /**
 * @namespace apollo::drivers::canbus
 * @brief apollo::drivers::canbus
 */
namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    // System gflags
DECLARE_string(node_name);
DECLARE_string(canbus_driver_name);