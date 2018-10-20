
        
        StringRef swift::platformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return #X;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
      // Finally, add the generic parameters from the requirement.
  for (auto genericParam : reqSig->getGenericParams().slice(1)) {
    // The only depth that makes sense is depth == 1, the generic parameters
    // of the requirement itself. Anything else is from invalid code.
    if (genericParam->getDepth() != 1) {
      return;
    }
    }
    
    
    {  for (auto Entry : DCache.Entries) {
    DCache.CBs.keyDestroyCB(Entry.first.Key, nullptr);
    DCache.CBs.valueReleaseCB(Entry.second, nullptr);
  }
  DCache.Entries.clear();
}
    
    
    {  // The length of the transcoded string in UTF-16 code points.
  Length = toPtr - &buffer[0];
  return Length;
}

    
    const uint16_t swift::unicode::ExtendedGraphemeClusterNoBoundaryRulesMatrix[] = {
% for row in get_extended_grapheme_cluster_rules_matrix(break_table):
  ${row},
% end
};
    
      public:
    ClangDiagRenderer(const clang::LangOptions &langOpts,
                      clang::DiagnosticOptions *diagOpts,
                      decltype(callback) fn)
       : DiagnosticNoteRenderer(langOpts, diagOpts),
         callback(fn) {}
    
    
    {                unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumSequences() });
            }
            else if (!sampleDynamicAxes.empty())
                LogicError('A PackedValue object that does not have a layout cannot have any dynamic axes.');
    
        ParameterInitializer GlorotNormalInitializer(double scale, int outputRank, int filterRank, unsigned long seed)
    {
        return CreateInitializer(Microsoft::MSR::CNTK::GlorotNormalInitializerTypeName, scale, outputRank, filterRank, seed);
    }
    
        SetTraceLevel(config[L'traceLevel']);
    DEVICEID_TYPE deviceId = (DEVICEID_TYPE)(int)config[L'deviceId'];
    
    template<>
class char_regex_traits_i<char> : public regex_traits<char>
{
public:
   typedef char char_type;
   typedef unsigned char uchar_type;
   typedef unsigned int size_type;
   typedef regex_traits<char> base_type;
    }
    
    //
// include the implementation of perl_matcher:
//
#ifdef BOOST_REGEX_RECURSIVE
#include <boost/regex/v4/perl_matcher_recursive.hpp>
#else
#include <boost/regex/v4/perl_matcher_non_recursive.hpp>
#endif
// this one has to be last:
#include <boost/regex/v4/perl_matcher_common.hpp>
    
    
    {   //
   // Now calculate N^2:
   //
   states = dist;
   if((std::numeric_limits<std::ptrdiff_t>::max)() / dist < states)
   {
      max_state_count = (std::min)((std::ptrdiff_t)BOOST_REGEX_MAX_STATE_COUNT, (std::numeric_limits<std::ptrdiff_t>::max)() - 2);
      return;
   }
   states *= dist;
   if((std::numeric_limits<std::ptrdiff_t>::max)() - k < states)
   {
      max_state_count = (std::min)((std::ptrdiff_t)BOOST_REGEX_MAX_STATE_COUNT, (std::numeric_limits<std::ptrdiff_t>::max)() - 2);
      return;
   }
   states += k;
   //
   // N^2 can be a very large number indeed, to prevent things getting out
   // of control, cap the max states:
   //
   if(states > BOOST_REGEX_MAX_STATE_COUNT)
      states = BOOST_REGEX_MAX_STATE_COUNT;
   //
   // If (the possibly capped) N^2 is larger than our first estimate,
   // use this instead:
   //
   if(states > max_state_count)
      max_state_count = states;
}
    
       const re_repeat* rep = static_cast<const re_repeat*>(pstate);
   bool greedy = (rep->greedy) && (!(m_match_flags & regex_constants::match_any) || m_independent);   
   unsigned count = static_cast<unsigned>((std::min)(static_cast<unsigned>(::boost::BOOST_REGEX_DETAIL_NS::distance(position, last)), static_cast<unsigned>(greedy ? rep->max : rep->min)));
   if(rep->min > count)
   {
      position = last;
      return false;  // not enough text left to match
   }
   std::advance(position, count);
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_match()
{
   if(!recursion_stack.empty())
   {
      BOOST_ASSERT(0 == recursion_stack.back().idx);
      const re_syntax_base* saved_state = pstate = recursion_stack.back().preturn_address;
      *m_presult = recursion_stack.back().results;
      recursion_stack.pop_back();
      if(!match_all_states())
      {
         recursion_stack.push_back(recursion_info<results_type>());
         recursion_stack.back().preturn_address = saved_state;
         recursion_stack.back().results = *m_presult;
         return false;
      }
      return true;
   }
   if((m_match_flags & match_not_null) && (position == (*m_presult)[0].first))
      return false;
   if((m_match_flags & match_all) && (position != last))
      return false;
   if((m_match_flags & regex_constants::match_not_initial_null) && (position == search_base))
      return false;
   m_presult->set_second(position);
   pstate = 0;
   m_has_found_match = true;
   if((m_match_flags & match_posix) == match_posix)
   {
      m_result.maybe_assign(*m_presult);
      if((m_match_flags & match_any) == 0)
         return false;
   }
#ifdef BOOST_REGEX_MATCH_EXTRA
   if(match_extra & m_match_flags)
   {
      for(unsigned i = 0; i < m_presult->size(); ++i)
         if((*m_presult)[i].matched)
            ((*m_presult)[i]).get_captures().push_back((*m_presult)[i]);
   }
#endif
   return true;
}
    
    template <class Predicate, class ST, class SA, class charT, class traits>
inline unsigned int regex_grep(Predicate foo, const std::basic_string<charT, ST, SA>& s, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   return regex_grep(foo, s.begin(), s.end(), e, flags);
}
#else  // partial specialisation
inline unsigned int regex_grep(bool (*foo)(const cmatch&), const char* str, 
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, str, str + regex::traits_type::length(str), e, flags);
}
#ifndef BOOST_NO_WREGEX
inline unsigned int regex_grep(bool (*foo)(const wcmatch&), const wchar_t* str, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, str, str + wregex::traits_type::length(str), e, flags);
}
#endif
inline unsigned int regex_grep(bool (*foo)(const match_results<std::string::const_iterator>&), const std::string& s,
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, s.begin(), s.end(), e, flags);
}
#if !defined(BOOST_NO_WREGEX)
inline unsigned int regex_grep(bool (*foo)(const match_results<std::basic_string<wchar_t>::const_iterator>&), 
                     const std::basic_string<wchar_t>& s, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, s.begin(), s.end(), e, flags);
}
#endif
#endif
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    template <class BaseT>
struct regex_traits_wrapper 
   : public ::boost::BOOST_REGEX_DETAIL_NS::compute_wrapper_base<
               BaseT, 
               ::boost::BOOST_REGEX_DETAIL_NS::has_boost_extensions_tag<BaseT>::value
            >::type
{
   regex_traits_wrapper(){}
private:
   regex_traits_wrapper(const regex_traits_wrapper&);
   regex_traits_wrapper& operator=(const regex_traits_wrapper&);
};
    
    DHTRoutingTableSerializer::~DHTRoutingTableSerializer() = default;
    
    
    {} // namespace aria2

    
      virtual void executeTask() CXX11_OVERRIDE;
    
    std::string DHTTokenTracker::generateToken(const unsigned char* infoHash,
                                           const std::string& ipaddr,
                                           uint16_t port,
                                           const unsigned char* secret) const
{
  unsigned char src[DHT_ID_LENGTH + COMPACT_LEN_IPV6 + SECRET_SIZE];
  memset(src, 0, sizeof(src));
  int compactlen = bittorrent::packcompact(src + DHT_ID_LENGTH, ipaddr, port);
  if (compactlen == 0) {
    throw DL_ABORT_EX(fmt('Token generation failed: ipaddr=%s, port=%u',
                          ipaddr.c_str(), port));
  }
  memcpy(src, infoHash, DHT_ID_LENGTH);
  memcpy(src + DHT_ID_LENGTH + COMPACT_LEN_IPV6, secret, SECRET_SIZE);
  unsigned char md[20];
  message_digest::digest(md, sizeof(md), MessageDigest::sha1().get(), src,
                         sizeof(src));
  return std::string(&md[0], &md[sizeof(md)]);
}
    
    void Benchmark::AddRange(std::vector<int>* dst, int lo, int hi, int mult) {
  CHECK_GE(lo, 0);
  CHECK_GE(hi, lo);
  CHECK_GE(mult, 2);
    }
    
      va_end(args_cp);
    
    // Returns true if stdout appears to be a terminal that supports colored
// output, false otherwise.
bool IsColorTerminal();
    
    // Parses 'str' for a double.  If successful, writes the result to *value and
// returns true; otherwise leaves *value unchanged and returns false.
bool ParseDouble(const std::string& src_text, const char* str, double* value) {
  // Parses the environment variable as a decimal integer.
  char* end = nullptr;
  const double double_value = strtod(str, &end);  // NOLINT
    }
    
    
    {    printed_header_ = true;
  } else {
    // check that all the current counters are saved in the name set
    for (const auto& run : reports) {
      for (const auto& cnt : run.counters) {
        CHECK(user_counter_names_.find(cnt.first) != user_counter_names_.end())
              << 'All counters must be present in each run. '
              << 'Counter named \'' << cnt.first
              << '\' was not in a run after being added to the header';
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
    
    
    {}  // end namespace benchmark

    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}
    
    BOOST_FORCEINLINE bool operator== (storage128_t const& left, storage128_t const& right) BOOST_NOEXCEPT
{
    return left.data[0] == right.data[0] && left.data[1] == right.data[1];
}
BOOST_FORCEINLINE bool operator!= (storage128_t const& left, storage128_t const& right) BOOST_NOEXCEPT
{
    return !(left == right);
}