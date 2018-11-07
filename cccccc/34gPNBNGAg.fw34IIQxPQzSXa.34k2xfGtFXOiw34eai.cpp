
        
          // If the requirement itself is non-generic, the synthetic signature
  // is that of the conformance context.
  if (!covariantSelf &&
      reqSig->getGenericParams().size() == 1 &&
      reqSig->getRequirements().size() == 1) {
    syntheticSignature = conformanceDC->getGenericSignatureOfContext();
    if (syntheticSignature) {
      syntheticSignature = syntheticSignature->getCanonicalSignature();
      syntheticEnvironment =
        syntheticSignature->createGenericEnvironment();
    }
    }
    
      /// Retrieve the array of protocol conformances, which line up with the
  /// requirements of the generic signature.
  ArrayRef<ProtocolConformanceRef> getConformances() const {
    return llvm::makeArrayRef(getTrailingObjects<ProtocolConformanceRef>(),
                              numConformanceRequirements);
  }
  MutableArrayRef<ProtocolConformanceRef> getConformances() {
    return MutableArrayRef<ProtocolConformanceRef>(
                              getTrailingObjects<ProtocolConformanceRef>(),
                              numConformanceRequirements);
  }
    
            // Don't prune redundant type information from the base name if
        // there is a corresponding property (either singular or plural).
        StringRef removedText =
          name.substr(nameWordRevIter.base().getPosition(),
                      firstMatchingNameWordRevIter.base().getPosition());
        if (textMatchesPropertyName(removedText, allPropertyNames))
          return name;
    
    
    {  char* signedStr = reinterpret_cast<char*>(str);
  memcpy(out.data(), signedStr, StringBufferSize);
#else
  uuid_unparse_upper(Value, out.data());
#endif
  // Pop off the null terminator.
  assert(out.back() == '\0' && 'did not null-terminate?!');
  out.pop_back();
}
    
        if (TargetStart == C + 1) {
      // End of source string or the source string contains an ill-formed
      // subsequence at the end.
      return S.slice(0, C1Offset);
    }
    
    #include 'swift/AST/Identifier.h'
    
    #undef cv_hal_mul8u
#define cv_hal_mul8u(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::u8, mul, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_mul8s
#define cv_hal_mul8s(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::s8, mul, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_mul16u
#define cv_hal_mul16u(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::u16, mul, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_mul16s
#define cv_hal_mul16s(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::s16, mul, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_mul32s
#define cv_hal_mul32s(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::s32, mul, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_mul32f
#define cv_hal_mul32f(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::f32, mulf, src1, sz1, src2, sz2, dst, sz, w, h, scales)
//#undef cv_hal_mul64f
//#define cv_hal_mul64f(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::f64, mulf, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_div8u
#define cv_hal_div8u(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::u8, div, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_div8s
#define cv_hal_div8s(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::s8, div, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_div16u
#define cv_hal_div16u(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::u16, div, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_div16s
#define cv_hal_div16s(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::s16, div, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_div32s
#define cv_hal_div32s(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::s32, div, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_div32f
#define cv_hal_div32f(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::f32, divf, src1, sz1, src2, sz2, dst, sz, w, h, scales)
//#undef cv_hal_div64f
//#define cv_hal_div64f(src1, sz1, src2, sz2, dst, sz, w, h, scales) TEGRA_BINARYOPSCALE(CAROTENE_NS::f64, divf, src1, sz1, src2, sz2, dst, sz, w, h, scales)
#undef cv_hal_recip8u
#define cv_hal_recip8u(src1, sz1, dst, sz, w, h, scales) TEGRA_UNARYOPSCALE(CAROTENE_NS::u8, recip, src1, sz1, dst, sz, w, h, scales)
#undef cv_hal_recip8s
#define cv_hal_recip8s(src1, sz1, dst, sz, w, h, scales) TEGRA_UNARYOPSCALE(CAROTENE_NS::s8, recip, src1, sz1, dst, sz, w, h, scales)
#undef cv_hal_recip16u
#define cv_hal_recip16u(src1, sz1, dst, sz, w, h, scales) TEGRA_UNARYOPSCALE(CAROTENE_NS::u16, recip, src1, sz1, dst, sz, w, h, scales)
#undef cv_hal_recip16s
#define cv_hal_recip16s(src1, sz1, dst, sz, w, h, scales) TEGRA_UNARYOPSCALE(CAROTENE_NS::s16, recip, src1, sz1, dst, sz, w, h, scales)
#undef cv_hal_recip32s
#define cv_hal_recip32s(src1, sz1, dst, sz, w, h, scales) TEGRA_UNARYOPSCALE(CAROTENE_NS::s32, recip, src1, sz1, dst, sz, w, h, scales)
#undef cv_hal_recip32f
#define cv_hal_recip32f(src1, sz1, dst, sz, w, h, scales) TEGRA_UNARYOPSCALE(CAROTENE_NS::f32, recipf, src1, sz1, dst, sz, w, h, scales)
//#undef cv_hal_recip64f
//#define cv_hal_recip64f(src1, sz1, dst, sz, w, h, scales) TEGRA_UNARYOPSCALE(CAROTENE_NS::f64, recipf, src1, sz1, dst, sz, w, h, scales)
    
    void add(const Size2D &size,
         const f32 * src0Base, ptrdiff_t src0Stride,
         const f32 * src1Base, ptrdiff_t src1Stride,
         f32 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride,
                         AddWrap<f32, f32>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    
    {    void operator() (const u8 * src0, const u8 * src1, u8 * dst) const
    {
        dst[0] = src0[0] ^ src1[0];
    }
};
    
    namespace internal {
    }
    
    
    {                for( k = 0; k < 16; ++k )
                    if(m[k])
                    {
                        cornerpos[ncorners++] = j+k;
                        if(nonmax_suppression)
                            curr[j+k] = cornerScore(ptr+k, pixel);
                    }
            }
    
    # else
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45>
internal::ValueArray45<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
    T44, T45> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8,
    T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16,
    T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24,
    T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32,
    T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40,
    T41 v41, T42 v42, T43 v43, T44 v44, T45 v45) {
  return internal::ValueArray45<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40, T41, T42, T43, T44, T45>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10,
      v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24,
      v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38,
      v39, v40, v41, v42, v43, v44, v45);
}
    
    // ValuesIn() function allows generation of tests with parameters coming from
// a container.
//
// Synopsis:
// ValuesIn(const T (&array)[N])
//   - returns a generator producing sequences with elements from
//     a C-style array.
// ValuesIn(const Container& container)
//   - returns a generator producing sequences with elements from
//     an STL-style container.
// ValuesIn(Iterator begin, Iterator end)
//   - returns a generator producing sequences with elements from
//     a range [begin, end) defined by a pair of STL-style iterators. These
//     iterators can also be plain C pointers.
//
// Please note that ValuesIn copies the values from the containers
// passed in and keeps them to generate tests in RUN_ALL_TESTS().
//
// Examples:
//
// This instantiates tests from test case StringTest
// each with C-string values of 'foo', 'bar', and 'baz':
//
// const char* strings[] = {'foo', 'bar', 'baz'};
// INSTANTIATE_TEST_CASE_P(StringSequence, SrtingTest, ValuesIn(strings));
//
// This instantiates tests from test case StlStringTest
// each with STL strings with values 'a' and 'b':
//
// ::std::vector< ::std::string> GetParameterStrings() {
//   ::std::vector< ::std::string> v;
//   v.push_back('a');
//   v.push_back('b');
//   return v;
// }
//
// INSTANTIATE_TEST_CASE_P(CharSequence,
//                         StlStringTest,
//                         ValuesIn(GetParameterStrings()));
//
//
// This will also instantiate tests from CharTest
// each with parameter values 'a' and 'b':
//
// ::std::list<char> GetParameterChars() {
//   ::std::list<char> list;
//   list.push_back('a');
//   list.push_back('b');
//   return list;
// }
// ::std::list<char> l = GetParameterChars();
// INSTANTIATE_TEST_CASE_P(CharSequence2,
//                         CharTest,
//                         ValuesIn(l.begin(), l.end()));
//
template <typename ForwardIterator>
internal::ParamGenerator<
  typename ::testing::internal::IteratorTraits<ForwardIterator>::value_type>
ValuesIn(ForwardIterator begin, ForwardIterator end) {
  typedef typename ::testing::internal::IteratorTraits<ForwardIterator>
      ::value_type ParamType;
  return internal::ParamGenerator<ParamType>(
      new internal::ValuesInIteratorRangeGenerator<ParamType>(begin, end));
}
    
    // A helper class for implementing EXPECT_FATAL_FAILURE() and
// EXPECT_NONFATAL_FAILURE().  Its destructor verifies that the given
// TestPartResultArray contains exactly one failure that has the given
// type and contains the given substring.  If that's not the case, a
// non-fatal failure will be generated.
class GTEST_API_ SingleFailureChecker {
 public:
  // The constructor remembers the arguments.
  SingleFailureChecker(const TestPartResultArray* results,
                       TestPartResult::Type type,
                       const string& substr);
  ~SingleFailureChecker();
 private:
  const TestPartResultArray* const results_;
  const TestPartResult::Type type_;
  const string substr_;
    }
    
    // Prints a TestPartResult object.
std::ostream& operator<<(std::ostream& os, const TestPartResult& result);
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
      tuple(const tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_) {}
    
    #if GTEST_HAS_TYPED_TEST || GTEST_HAS_TYPED_TEST_P
    
      // Gets the number of elements.
  size_t Size() const { return size_; }
    
    _fi_find_handle _fi_FindFirstFile(const char* lpFileName, _fi_find_data* lpFindFileData);
bool _fi_FindNextFile(_fi_find_handle hFindFile,   _fi_find_data* lpFindFileData);
bool _fi_FindClose(_fi_find_handle hFindFile);
    
    template <bool is_pointer_type>
struct is_random_imp_selector
{
   template <class I>
   struct rebind
   {
      typedef is_random_imp<I> type;
   };
};
    
    template <class BidiIterator>
struct saved_repeater : public saved_state
{
   repeater_count<BidiIterator> count;
   saved_repeater(int i, repeater_count<BidiIterator>** s, BidiIterator start, int current_recursion_id)
      : saved_state(saved_state_repeater_count), count(i, s, start, current_recursion_id){}
};
    
    
    {   // non-greedy, keep trying till we get a match:
   BidiIterator save_pos;
   do
   {
      while((position != last) && (count < rep->max) && !can_start(*position, rep->_map, mask_skip))
      {
         if((traits_inst.translate(*position, icase) == what))
         {
            ++position;
            ++count;
         }
         else
            return false;  // counldn't repeat even though it was the only option
      }
      if((rep->leading) && (rep->max == UINT_MAX))
         restart = position;
      pstate = rep->alt.p;
      save_pos = position;
      ++state_count;
      if(match_all_states())
         return true;
      if((count >= rep->max) || !m_can_backtrack)
         return false;
      position = save_pos;
      if(position == last)
         return false;
      if(traits_inst.translate(*position, icase) == what)
      {
         ++position;
         ++count;
      }
      else
      {
         return false;
      }
   }while(true);
#ifdef __BORLANDC__
#pragma option pop
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    class BOOST_REGEX_DECL abstract_protected_call
{
public:
   bool BOOST_REGEX_CALL execute()const;
   // this stops gcc-4 from complaining:
   virtual ~abstract_protected_call(){}
private:
   virtual bool call()const = 0;
};
    
    
    {   enum restart_info
   {
      restart_any = 0,
      restart_word = 1,
      restart_line = 2,
      restart_buf = 3,
      restart_continue = 4,
      restart_lit = 5,
      restart_fixed_lit = 6, 
      restart_count = 7
   };
};
    
    
    
    
    {   match_results<BidiIterator> m;
   BOOST_REGEX_DETAIL_NS::perl_matcher<BidiIterator, match_allocator_type, traits> matcher(first, last, m, e, flags, first);
   unsigned int count = 0;
   while(matcher.find())
   {
      ++count;
      if(0 == foo(m))
         return count; // caller doesn't want to go on
      if(m[0].second == last)
         return count; // we've reached the end, don't try and find an extra null match.
      if(m.length() == 0)
      {
         if(m[0].second == last)
            return count;
         // we found a NULL-match, now try to find
         // a non-NULL one at the same position:
         match_results<BidiIterator, match_allocator_type> m2(m);
         matcher.setf(match_not_null | match_continuous);
         if(matcher.find())
         {
            ++count;
            if(0 == foo(m))
               return count;
         }
         else
         {
            // reset match back to where it was:
            m = m2;
         }
         matcher.unsetf((match_not_null | match_continuous) & ~flags);
      }
   }
   return count;
}
    
    //
// proc regex_match
// returns true if the specified regular expression matches
// the whole of the input.  Fills in what matched in m.
//
template <class BidiIterator, class Allocator, class charT, class traits>
bool regex_match(BidiIterator first, BidiIterator last, 
                 match_results<BidiIterator, Allocator>& m, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   BOOST_REGEX_DETAIL_NS::perl_matcher<BidiIterator, Allocator, traits> matcher(first, last, m, e, flags, first);
   return matcher.match();
}
template <class iterator, class charT, class traits>
bool regex_match(iterator first, iterator last, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   match_results<iterator> m;
   return regex_match(first, last, m, e, flags | regex_constants::match_any);
}
//
// query_match convenience interfaces:
#ifndef BOOST_NO_FUNCTION_TEMPLATE_ORDERING
//
// this isn't really a partial specialisation, but template function
// overloading - if the compiler doesn't support partial specialisation
// then it really won't support this either:
template <class charT, class Allocator, class traits>
inline bool regex_match(const charT* str, 
                        match_results<const charT*, Allocator>& m, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   return regex_match(str, str + traits::length(str), m, e, flags);
}
    
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
    
    ConsoleReporter::OutputOptions GetOutputOptions(bool force_no_color = false);
    
    
    {  return result;
}
    
      const auto max_digits10 = std::numeric_limits<decltype (value)>::max_digits10;
  const auto max_fractional_digits10 = max_digits10 - 1;
    
    #define VLOG(x)                                                               \
  (::benchmark::internal::GetLogInstanceForLevel(x) << '-- LOG(' << x << '):' \
                                                                         ' ')
    
    #include 'internal_macros.h'
    
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
    
    #ifdef BENCHMARK_OS_WINDOWS
#include <Windows.h>
#endif