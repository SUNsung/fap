
        
        #include 'matrix.h'
#include 'include_gunit.h'
#include 'genericvector.h'
#include 'tprintf.h'
    
    
    {  TessResultRenderer* remainder = next_;
  next_ = next;
  if (remainder) {
    while (next->next_ != nullptr) {
      next = next->next_;
    }
    next->next_ = remainder;
  }
}
    
      // Draws the data in a new window.
  void Display() const;
    
    
    {  // Now maximize sig_sq_B over t.
  // http://www.ctie.monash.edu.au/hargreave/Cornall_Terry_328.pdf
  int best_t = -1;
  int omega_0, omega_1;
  int best_omega_0 = 0;
  double best_sig_sq_B = 0.0;
  double mu_0, mu_1, mu_t;
  omega_0 = 0;
  mu_t = 0.0;
  for (int t = 0; t < kHistogramSize - 1; ++t) {
    omega_0 += histogram[t];
    mu_t += t * static_cast<double>(histogram[t]);
    if (omega_0 == 0)
      continue;
    omega_1 = H - omega_0;
    if (omega_1 == 0)
      break;
    mu_0 = mu_t / omega_0;
    mu_1 = (mu_T - mu_t) / omega_1;
    double sig_sq_B = mu_1 - mu_0;
    sig_sq_B *= sig_sq_B * omega_0 * omega_1;
    if (best_t < 0 || sig_sq_B > best_sig_sq_B) {
      best_sig_sq_B = sig_sq_B;
      best_t = t;
      best_omega_0 = omega_0;
    }
  }
  if (H_out != nullptr) *H_out = H;
  if (omega0_out != nullptr) *omega0_out = best_omega_0;
  return best_t;
}
    
    /**
 * Possible modes for page layout analysis. These *must* be kept in order
 * of decreasing amount of layout analysis to be done, except for OSD_ONLY,
 * so that the inequality test macros below work.
*/
enum PageSegMode {
  PSM_OSD_ONLY,       ///< Orientation and script detection only.
  PSM_AUTO_OSD,       ///< Automatic page segmentation with orientation and
                      ///< script detection. (OSD)
  PSM_AUTO_ONLY,      ///< Automatic page segmentation, but no OSD, or OCR.
  PSM_AUTO,           ///< Fully automatic page segmentation, but no OSD.
  PSM_SINGLE_COLUMN,  ///< Assume a single column of text of variable sizes.
  PSM_SINGLE_BLOCK_VERT_TEXT,  ///< Assume a single uniform block of vertically
                               ///< aligned text.
  PSM_SINGLE_BLOCK,   ///< Assume a single uniform block of text. (Default.)
  PSM_SINGLE_LINE,    ///< Treat the image as a single text line.
  PSM_SINGLE_WORD,    ///< Treat the image as a single word.
  PSM_CIRCLE_WORD,    ///< Treat the image as a single word in a circle.
  PSM_SINGLE_CHAR,    ///< Treat the image as a single character.
  PSM_SPARSE_TEXT,    ///< Find as much text as possible in no particular order.
  PSM_SPARSE_TEXT_OSD,  ///< Sparse text with orientation and script det.
  PSM_RAW_LINE,       ///< Treat the image as a single text line, bypassing
                      ///< hacks that are Tesseract-specific.
    }
    
      // Create a reader that will return log records from '*file'.
  // '*file' must remain live while this Reader is in use.
  //
  // If 'reporter' is non-nullptr, it is notified whenever some data is
  // dropped due to a detected corruption.  '*reporter' must remain
  // live while this Reader is in use.
  //
  // If 'checksum' is true, verify checksums if available.
  //
  // The Reader will start reading at the first record located at physical
  // position >= initial_offset within the file.
  Reader(std::shared_ptr<Logger> info_log,
  // @lint-ignore TXT2 T25377293 Grandfathered in
	 unique_ptr<SequentialFileReader>&& file,
         Reporter* reporter, bool checksum, uint64_t initial_offset,
         uint64_t log_num);
    
      // Return true if the current MemTableRep supports snapshot
  // Default: true
  virtual bool IsSnapshotSupported() const { return true; }
    
    namespace rocksdb {
CompactionFilterFactoryJniCallback::CompactionFilterFactoryJniCallback(
    JNIEnv* env, jobject jcompaction_filter_factory)
    : JniCallback(env, jcompaction_filter_factory) {
  
  // Note: The name of a CompactionFilterFactory will not change during
  // it's lifetime, so we cache it in a global var
  jmethodID jname_method_id =
      AbstractCompactionFilterFactoryJni::getNameMethodId(env);
  if(jname_method_id == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    }
    }
    
    #endif  // JAVA_ROCKSJNI_LOGGERJNICALLBACK_H_

    
      static void AddRange(std::vector<int>* dst, int lo, int hi, int mult);
    
    bool IsZero(double n);
    
    // Reads and returns the string environment variable corresponding to
// the given flag; if it's not set, returns default_value.
const char* StringFromEnv(const char* flag, const char* default_value) {
  const std::string env_var = FlagToEnvVar(flag);
  const char* const value = getenv(env_var.c_str());
  return value == nullptr ? default_value : value;
}
    
    // Returns true if the string matches the flag.
bool IsFlag(const char* str, const char* flag);
    
    namespace benchmark {
namespace internal {
    }
    }
    
    // File format reference: http://edoceo.com/utilitas/csv-file-format.
    
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
    
    
    {}  // end namespace benchmark
