
        
        #define MAKE_TYPE_INFO(m_type, m_var_type)                    \
	template <>                                               \
	struct GetTypeInfo<m_type> {                              \
		static const Variant::Type VARIANT_TYPE = m_var_type; \
		static inline PropertyInfo get_class_info() {         \
			return PropertyInfo(VARIANT_TYPE, String());      \
		}                                                     \
	};                                                        \
	template <>                                               \
	struct GetTypeInfo<const m_type &> {                      \
		static const Variant::Type VARIANT_TYPE = m_var_type; \
		static inline PropertyInfo get_class_info() {         \
			return PropertyInfo(VARIANT_TYPE, String());      \
		}                                                     \
	};
    
    #include 'constraint_bullet.h'
#include 'servers/physics_server.h'
    
    #ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
    
    namespace BOOST_REGEX_DETAIL_NS{
template BOOST_REGEX_DECL void perl_matcher<BOOST_REGEX_CHAR_T const *, match_results< const BOOST_REGEX_CHAR_T* >::allocator_type BOOST_REGEX_TRAITS_T >::construct_init(
      const basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >& e, match_flag_type f);
template BOOST_REGEX_DECL bool perl_matcher<BOOST_REGEX_CHAR_T const *, match_results< const BOOST_REGEX_CHAR_T* >::allocator_type BOOST_REGEX_TRAITS_T >::match();
template BOOST_REGEX_DECL bool perl_matcher<BOOST_REGEX_CHAR_T const *, match_results< const BOOST_REGEX_CHAR_T* >::allocator_type BOOST_REGEX_TRAITS_T >::find();
} // namespace
    
    template <bool is_pointer_type>
struct is_random_imp_selector
{
   template <class I>
   struct rebind
   {
      typedef is_random_imp<I> type;
   };
};
    
          func(*this, i, flags);
      return result;
   }
   // format with locale:
   template <class OutputIterator, class Functor, class RegexT>
   OutputIterator format(OutputIterator out,
                         Functor fmt,
                         match_flag_type flags,
                         const RegexT& re) const
   {
      if(m_is_singular)
         raise_logic_error();
      typedef ::boost::regex_traits_wrapper<typename RegexT::traits_type> traits_type;
      typedef typename BOOST_REGEX_DETAIL_NS::compute_functor_type<Functor, match_results<BidiIterator, Allocator>, OutputIterator, traits_type>::type F;
      F func(fmt);
      return func(*this, out, flags, re.get_traits());
   }
   template <class RegexT, class Functor>
   string_type format(Functor fmt,
                      match_flag_type flags,
                      const RegexT& re) const
   {
      if(m_is_singular)
         raise_logic_error();
      typedef ::boost::regex_traits_wrapper<typename RegexT::traits_type> traits_type;
      std::basic_string<char_type> result;
      BOOST_REGEX_DETAIL_NS::string_out_iterator<std::basic_string<char_type> > i(result);
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_long_set_repeat()
{
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable:4127)
#endif
#ifdef __BORLANDC__
#pragma option push -w-8008 -w-8066 -w-8004
#endif
   typedef typename traits::char_class_type m_type;
   const re_repeat* rep = static_cast<const re_repeat*>(pstate);
   const re_set_long<m_type>* set = static_cast<const re_set_long<m_type>*>(pstate->next.p);
   std::size_t count = 0;
   //
   // start by working out how much we can skip:
   //
   bool greedy = (rep->greedy) && (!(m_match_flags & regex_constants::match_any) || m_independent);   
   std::size_t desired = greedy ? rep->max : rep->min;
   if(::boost::is_random_access_iterator<BidiIterator>::value)
   {
      BidiIterator end = position;
      // Move end forward by 'desired', preferably without using distance or advance if we can
      // as these can be slow for some iterator types.
      std::size_t len = (desired == (std::numeric_limits<std::size_t>::max)()) ? 0u : ::boost::BOOST_REGEX_DETAIL_NS::distance(position, last);
      if(desired >= len)
         end = last;
      else
         std::advance(end, desired);
      BidiIterator origin(position);
      while((position != end) && (position != re_is_set_member(position, last, set, re.get_data(), icase)))
      {
         ++position;
      }
      count = (unsigned)::boost::BOOST_REGEX_DETAIL_NS::distance(origin, position);
   }
   else
   {
      while((count < desired) && (position != last) && (position != re_is_set_member(position, last, set, re.get_data(), icase)))
      {
         ++position;
         ++count;
      }
   }
    }
    
    
template <class traits, class charT>
unsigned find_sort_syntax(const traits* pt, charT* delim)
{
   //
   // compare 'a' with 'A' to see how similar they are,
   // should really use a-accute but we can't portably do that,
   //
   typedef typename traits::string_type string_type;
   typedef typename traits::char_type char_type;
    }
    
    namespace boost{
//
// class regbase
// handles error codes and flags
//
class BOOST_REGEX_DECL regbase
{
public:
   enum flag_type_
   {
      //
      // Divide the flags up into logical groups:
      // bits 0-7 indicate main synatx type.
      // bits 8-15 indicate syntax subtype.
      // bits 16-31 indicate options that are common to all
      // regex syntaxes.
      // In all cases the default is 0.
      //
      // Main synatx group:
      //
      perl_syntax_group = 0,                      // default
      basic_syntax_group = 1,                     // POSIX basic
      literal = 2,                                // all characters are literals
      main_option_type = literal | basic_syntax_group | perl_syntax_group, // everything!
      //
      // options specific to perl group:
      //
      no_bk_refs = 1 << 8,                        // \d not allowed
      no_perl_ex = 1 << 9,                        // disable perl extensions
      no_mod_m = 1 << 10,                         // disable Perl m modifier
      mod_x = 1 << 11,                            // Perl x modifier
      mod_s = 1 << 12,                            // force s modifier on (overrides match_not_dot_newline)
      no_mod_s = 1 << 13,                         // force s modifier off (overrides match_not_dot_newline)
    }
    }
    }
    
    template <class F, class M, class O>
struct format_traits
{
public:
   // 
   // Type is mpl::int_<N> where N is one of:
   //
   // 0 : F is a pointer to a presumably null-terminated string.
   // 1 : F is a character-container such as a std::string.
   //
   // Other options such as F being a Functor are not supported without
   // SFINAE support.
   //
   typedef typename boost::mpl::if_<
      boost::is_pointer<F>,
      boost::mpl::int_<0>,
      boost::mpl::int_<1>
   >::type type;
};
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_grep.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_grep implementation.
  */
    
    
    
    static const uint8_t* kRangeLimit = kRangeLimitLut + 384;
    
    typedef void (*Transform1d)(const double* in, int stride, double* out);
    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
    inline void ColumnDct(coeff_t* in) {
  for (int i = 0; i < 8; ++i) {
    int m0, m1, m2, m3, m4, m5, m6, m7;
    COLUMN_DCT8(in + i);
  }
}
    
    
    {  FILE* f = write_to_stdout ? stdout : fopen(filename, 'wb');
  if (!f) {
    perror('Can't open output file for writing');
    exit(1);
  }
  if (fwrite(contents.data(), 1, contents.size(), f) != contents.size()) {
    perror('fwrite');
    exit(1);
  }
  if (fclose(f) < 0) {
    perror('fclose');
    exit(1);
  }
}
    
      tmp0 = in[3 * stride];
  tmp1 = kIDCTMatrix[ 3] * tmp0;
  tmp2 = kIDCTMatrix[11] * tmp0;
  tmp3 = kIDCTMatrix[19] * tmp0;
  tmp4 = kIDCTMatrix[27] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    #endif  // GUETZLI_IDCT_H_

    
    namespace guetzli {
    }
    
    // Writes len bytes from buf, using the out callback.
inline bool JPEGWrite(JPEGOutput out, const uint8_t* buf, size_t len) {
  static const size_t kBlockSize = 1u << 30;
  size_t pos = 0;
  while (len - pos > kBlockSize) {
    if (!out.Write(buf + pos, kBlockSize)) {
      return false;
    }
    pos += kBlockSize;
  }
  return out.Write(buf + pos, len - pos);
}
    
    #include <stdint.h>
#include <string.h>
#include <vector>