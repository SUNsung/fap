
        
          CancellationManager* cancellation_manager;
  partial_run_mgr_.FindOrCreate(step_id, &cancellation_manager);
    
    // ResourceOpKernel<T> is a virtual base class for resource op implementing
// interface type T. The inherited op looks up the resource name (determined by
// ContainerInfo), and creates a new resource if necessary.
//
// Requirements:
//  - Op must be marked as stateful.
//  - Op must have `container` and `shared_name` attributes. Empty `container`
//  means using the default container. Empty `shared_name` means private
//  resource.
//  - Subclass must override CreateResource().
//  - Subclass is encouraged to override VerifyResource().
template <typename T>
class ResourceOpKernel : public OpKernel {
 public:
  explicit ResourceOpKernel(OpKernelConstruction* context) : OpKernel(context) {
    OP_REQUIRES_OK(context,
                   context->allocate_persistent(DT_STRING, TensorShape({2}),
                                                &handle_, nullptr));
  }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace internal {
template <typename Scalar>
struct functor_traits<scalar_clip_op<Scalar> > {
  enum {
    Cost = NumTraits<Scalar>::AddCost * 3,
    PacketAccess = packet_traits<Scalar>::HasMax &&
                   packet_traits<Scalar>::HasMin &&
                   packet_traits<Scalar>::HasNegate
  };
};
}  // namespace internal
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/record_reader.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
    
    {}  // namespace tensorflow

    
    TEST(AccuracyUtilsTest, ReadGroundTruthFile) {
  string file_name = tensorflow::io::JoinPath(tensorflow::testing::TmpDir(),
                                              'ground_truth.txt');
  string file_data = 'a,10\nb,12\n';
  TF_ASSERT_OK(WriteStringToFile(Env::Default(), file_name, file_data));
    }
    
    #import <Foundation/Foundation.h>
    
      if (unitWriter.write(error)) {
    diags.diagnose(SourceLoc(), diag::error_write_index_unit, error);
    return true;
  }
    
      /// Returns the identifier string for the buffer containing the given source
  /// location.
  ///
  /// This respects #line directives.
  StringRef getBufferIdentifierForLoc(SourceLoc Loc) const {
    if (auto VFile = getVirtualFile(Loc))
      return VFile->Name;
    else
      return getIdentifierForBuffer(findBufferContainingLoc(Loc));
  }
    
    #endif
    
    /// Runs the given function with the given context argument exactly once.
/// The predicate argument must point to a global or static variable of static
/// extent of type swift_once_t.
void swift::swift_once(swift_once_t *predicate, void (*fn)(void *),
                       void *context) {
#if defined(__APPLE__)
  dispatch_once_f(predicate, context, fn);
#elif defined(__CYGWIN__)
  _swift_once_f(predicate, context, fn);
#else
  std::call_once(*predicate, [fn, context]() { fn(context); });
#endif
}

    
    /* Writes request data from |buffer| of |buffer_length| length. If auto flush is
 * disabled, data will be sent only after bidirectional_stream_flush() is
 * called.
 * Each call will result in an invocation the callback's on_write_completed()
 * method if data is sent, or its on_failed() method if there's an error.
 * The callback's on_succeeded() method is also invoked if |end_of_stream| is
 * set and all response data has been read.
 */
GRPC_SUPPORT_EXPORT
int bidirectional_stream_write(bidirectional_stream* stream,
                               const char* buffer,
                               int buffer_length,
                               bool end_of_stream);
    
    
    {  GetReporter()->ReportQPS(*result);
  GetReporter()->ReportLatency(*result);
}
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list);
    
    AuthPropertyIterator SecureAuthContext::end() const {
  return AuthPropertyIterator();
}
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    double UsageTimer::Now() {
  auto ts = gpr_now(GPR_CLOCK_REALTIME);
  return ts.tv_sec + 1e-9 * ts.tv_nsec;
}
    
      struct Result {
    double wall;
    double user;
    double system;
    unsigned long long total_cpu_time;
    unsigned long long idle_cpu_time;
  };
    
    #if USE_TASKBAR_API
	wcscpy_s(appId, exeDir);
#endif
    
    
/*
 * DumpCrashStack.h
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    
/*
 * WakeUpLock.h
 *
 *  Created on: 2012-9-28
 *      Author: yerungui
 */
    
    int Packer_Unpack(const void* _rawbuf, size_t _rawlen, std::string& _url, unsigned int& _sequence, size_t& _packlen, PtrBuffer& _data) {
    if (_rawlen < sizeof(LongLinkPack)) return LONGLINKPACK_CONTINUE;
    }
    
    
    {        return NULL;
    }
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-14.
//
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    #endif  // BENCHMARK_COLORPRINT_H_

    
    // Parses a bool/Int32/string from the environment variable
// corresponding to the given Google Test flag.
bool BoolFromEnv(const char* flag, bool default_val);
int32_t Int32FromEnv(const char* flag, int32_t default_val);
double DoubleFromEnv(const char* flag, double default_val);
const char* StringFromEnv(const char* flag, const char* default_val);
    
    
    {  double coef;
  double rms;
  BigO complexity;
};
    
    
    {  printer(Out, COLOR_DEFAULT, '\n');
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