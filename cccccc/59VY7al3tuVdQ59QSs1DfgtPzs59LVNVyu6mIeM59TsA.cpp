
        
        namespace Ui {
    class TransactionDescDialog;
}
    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
    
    {
    {        /* Work out way backwards, using the z-ratios to scale the x/y values. */
        while (i > 0) {
            secp256k1_fe_mul(&zi, &zi, &zr[i]);
            i--;
            secp256k1_ge_set_gej_zinv(&r[i], &a[i], &zi);
        }
    }
}
    
    #define Round(a,b,c,d,e,f,g,h,k,w) do { \
    uint32_t t1 = (h) + Sigma1(e) + Ch((e), (f), (g)) + (k) + (w); \
    uint32_t t2 = Sigma0(a) + Maj((a), (b), (c)); \
    (d) += t1; \
    (h) = t1 + t2; \
} while(0)
    
    /* Tests several edge cases. */
void test_ecdsa_recovery_edge_cases(void) {
    const unsigned char msg32[32] = {
        'T', 'h', 'i', 's', ' ', 'i', 's', ' ',
        'a', ' ', 'v', 'e', 'r', 'y', ' ', 's',
        'e', 'c', 'r', 'e', 't', ' ', 'm', 'e',
        's', 's', 'a', 'g', 'e', '.', '.', '.'
    };
    const unsigned char sig64[64] = {
        /* Generated by signing the above message with nonce 'This is the nonce we will use...'
         * and secret key 0 (which is not valid), resulting in recid 0. */
        0x67, 0xCB, 0x28, 0x5F, 0x9C, 0xD1, 0x94, 0xE8,
        0x40, 0xD6, 0x29, 0x39, 0x7A, 0xF5, 0x56, 0x96,
        0x62, 0xFD, 0xE4, 0x46, 0x49, 0x99, 0x59, 0x63,
        0x17, 0x9A, 0x7D, 0xD1, 0x7B, 0xD2, 0x35, 0x32,
        0x4B, 0x1B, 0x7D, 0xF3, 0x4C, 0xE1, 0xF6, 0x8E,
        0x69, 0x4F, 0xF6, 0xF1, 0x1A, 0xC7, 0x51, 0xDD,
        0x7D, 0xD7, 0x3E, 0x38, 0x7E, 0xE4, 0xFC, 0x86,
        0x6E, 0x1B, 0xE8, 0xEC, 0xC7, 0xDD, 0x95, 0x57
    };
    secp256k1_pubkey pubkey;
    /* signature (r,s) = (4,4), which can be recovered with all 4 recids. */
    const unsigned char sigb64[64] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    };
    secp256k1_pubkey pubkeyb;
    secp256k1_ecdsa_recoverable_signature rsig;
    secp256k1_ecdsa_signature sig;
    int recid;
    }
    
        UniValue numTest;
    BOOST_CHECK(numTest.setNumStr('82'));
    BOOST_CHECK(numTest.isNum());
    BOOST_CHECK_EQUAL(numTest.getValStr(), '82');
    
    
    {}
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    namespace deprecated{
//
// class char_regex_traits_i
// provides case insensitive traits classes (deprecated):
template <class charT>
class char_regex_traits_i : public regex_traits<charT> {};
    }
    
    template class BOOST_REGEX_TEMPLATE_DECL match_results< const BOOST_REGEX_CHAR_T* >;
#ifndef BOOST_NO_STD_ALLOCATOR
template class BOOST_REGEX_TEMPLATE_DECL ::boost::BOOST_REGEX_DETAIL_NS::perl_matcher<BOOST_REGEX_CHAR_T const *, match_results< const BOOST_REGEX_CHAR_T* >::allocator_type BOOST_REGEX_TRAITS_T >;
#endif
#if !(defined(BOOST_DINKUMWARE_STDLIB) && (BOOST_DINKUMWARE_STDLIB <= 1))\
   && !(defined(BOOST_INTEL_CXX_VERSION) && (BOOST_INTEL_CXX_VERSION <= 800))\
   && !(defined(__SGI_STL_PORT) || defined(_STLPORT_VERSION))\
   && !defined(BOOST_REGEX_ICU_INSTANCES)
template class BOOST_REGEX_TEMPLATE_DECL match_results< std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator >;
#ifndef BOOST_NO_STD_ALLOCATOR
template class BOOST_REGEX_TEMPLATE_DECL ::boost::BOOST_REGEX_DETAIL_NS::perl_matcher< std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator, match_results< std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator >::allocator_type, boost::regex_traits<BOOST_REGEX_CHAR_T > >;
#endif
#endif
    
    template <class I>
struct is_random_imp
{
#ifndef BOOST_NO_STD_ITERATOR_TRAITS
private:
   typedef typename std::iterator_traits<I>::iterator_category cat;
public:
   BOOST_STATIC_CONSTANT(bool, value = (::boost::is_convertible<cat*, std::random_access_iterator_tag*>::value));
#else
   BOOST_STATIC_CONSTANT(bool, value = false);
#endif
};
    
       // Suppress incorrect warning for MSVC
   (void)pt;
    
    #ifndef BOOST_REGEX_V4_REGBASE_HPP
#define BOOST_REGEX_V4_REGBASE_HPP
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_format.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides formatting output routines for search and replace
  *                operations.  Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_match.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Regular expression matching algorithms.
  *                Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable:4700)
#endif
    
    
    {
    {
    {                // Register glyph
                dst_font->AddGlyph((ImWchar)codepoint, 
                    glyph_info.OffsetX + char_off_x, 
                    glyph_info.OffsetY + font_off_y, 
                    glyph_info.OffsetX + char_off_x + glyph_info.Width, 
                    glyph_info.OffsetY + font_off_y + glyph_info.Height,
                    rect.x / (float)atlas->TexWidth, 
                    rect.y / (float)atlas->TexHeight, 
                    (rect.x + glyph_info.Width) / (float)atlas->TexWidth, 
                    (rect.y + glyph_info.Height) / (float)atlas->TexHeight,
                    char_advance_x_mod);
            }
        }
    }
    
        // Check for WSI support
    VkBool32 res;
    vkGetPhysicalDeviceSurfaceSupportKHR(g_PhysicalDevice, g_QueueFamily, wd->Surface, &res);
    if (res != VK_TRUE)
    {
        fprintf(stderr, 'Error no WSI support on physical device 0\n');
        exit(-1);
    }
    
        // Create the D3DDevice
    if (pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hwnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &g_d3dpp, &g_pd3dDevice) < 0)
    {
        pD3D->Release();
        UnregisterClass(_T('ImGui Example'), wc.hInstance);
        return 0;
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // That gcc wants both of these prototypes seems mysterious. VC, for
// its part, can't decide which to use (another mystery). Matching of
// template overloads: the final frontier.
#ifndef COMPILER_MSVC
template <typename T, size_t N>
char (&ArraySizeHelper(const T (&array)[N]))[N];
#endif
    
    // Information kept per benchmark we may want to run
struct Benchmark::Instance {
  std::string name;
  Benchmark* benchmark;
  ReportMode report_mode;
  std::vector<int> arg;
  TimeUnit time_unit;
  int range_multiplier;
  bool use_real_time;
  bool use_manual_time;
  BigO complexity;
  BigOFunc* complexity_lambda;
  UserCounters counters;
  const std::vector<Statistics>* statistics;
  bool last_benchmark_instance;
  int repetitions;
  double min_time;
  size_t iterations;
  int threads;  // Number of concurrent threads to us
};
    
    #define CHECK_EQ(a, b) CHECK((a) == (b))
#define CHECK_NE(a, b) CHECK((a) != (b))
#define CHECK_GE(a, b) CHECK((a) >= (b))
#define CHECK_LE(a, b) CHECK((a) <= (b))
#define CHECK_GT(a, b) CHECK((a) > (b))
#define CHECK_LT(a, b) CHECK((a) < (b))
    
      va_end(args_cp);
    
    #endif  // BENCHMARK_COLORPRINT_H_

    
    #define GUARDED_BY(x) THREAD_ANNOTATION_ATTRIBUTE__(guarded_by(x))
    
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
    
    void BENCHFUN(sizeCtor)(int iters, int size) {
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(size);
    doNotOptimizeAway(&v);
  }
}
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 16)
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 128)
BENCHMARK_PARAM(BENCHFUN(sizeCtor), 1024)
    
        // Read tracepoint provider, probe and argument layout description.
    int providerEnd = getNextZero(note, pos, pos + remaining - 1);
    CHECK_GE(providerEnd, 0);
    size_t providerLen = providerEnd - pos + 1;
    std::string provider = getStr(note, pos, providerLen);
    remaining -= providerLen;
    
      /**
   * Returns a secure double in [min, max), if min == max, returns 0.
   */
  static double secureRandDouble(double min, double max) {
    SecureRNG<uint64_t> srng;
    return randDouble(min, max, srng);
  }
    
    namespace std {
    }
    
        // Check for overflow converting from int64_t hours to time_t
    using hours_i64 = duration<int64_t, std::ratio<3600>>;
    ts = to<struct timespec>(hours_i64(2562047788015215LL));
    EXPECT_EQ(ts.tv_sec, 9223372036854774000LL);
    EXPECT_EQ(ts.tv_nsec, 0);
    EXPECT_THROW(
        to<struct timespec>(hours_i64(2562047788015216LL)), std::range_error);