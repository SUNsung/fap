
        
        std::string AtomContentClient::GetUserAgent() const {
  return content::BuildUserAgentFromProduct('Chrome/' CHROME_VERSION_STRING
                                            ' ' ATOM_PRODUCT_NAME
                                            '/' ATOM_VERSION_STRING);
}
    
    namespace atom {
    }
    
        mate::Dictionary process(gin_env.isolate(), env->process_object());
#if defined(OS_WIN)
    process.SetMethod('log', &AtomBindings::Log);
#endif
    process.SetMethod('crash', &AtomBindings::Crash);
    
     private:
  std::string GetFeedURL();
  void SetFeedURL(mate::Arguments* args);
  void QuitAndInstall();
    
    
    {}  // namespace api
    
    
    {  accelerator_callback_map_[accelerator] = callback;
  return true;
}
    
    
    {}  // namespace atom
    
    
    {}  // namespace
    
    namespace swift {
    }
    
    #include 'swift/AST/TypeWalker.h'
#include 'swift/AST/TypeVisitor.h'
    
        if (node->Further || node->Right) {
      IndentScope ms(this, (childKind == ChildKind::Right ||
                            childKind == ChildKind::Further ||
                            childKind == ChildKind::Root) ? '  ' : '| ');
    }
    
    
    {    RawText = RawText.drop_front(Pos);
    unsigned NewlineBytes = measureNewline(RawText);
    RawText = RawText.drop_front(NewlineBytes);
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
    
    // EXPECT_DEBUG_DEATH asserts that the given statements die in debug mode.
// The death testing framework causes this to have interesting semantics,
// since the sideeffects of the call are only visible in opt mode, and not
// in debug mode.
//
// In practice, this can be used to test functions that utilize the
// LOG(DFATAL) macro using the following style:
//
// int DieInDebugOr12(int* sideeffect) {
//   if (sideeffect) {
//     *sideeffect = 12;
//   }
//   LOG(DFATAL) << 'death';
//   return 12;
// }
//
// TEST(TestCase, TestDieOr12WorksInDgbAndOpt) {
//   int sideeffect = 0;
//   // Only asserts in dbg.
//   EXPECT_DEBUG_DEATH(DieInDebugOr12(&sideeffect), 'death');
//
// #ifdef NDEBUG
//   // opt-mode has sideeffect visible.
//   EXPECT_EQ(12, sideeffect);
// #else
//   // dbg-mode no visible sideeffect.
//   EXPECT_EQ(0, sideeffect);
// #endif
// }
//
// This will assert that DieInDebugReturn12InOpt() crashes in debug
// mode, usually due to a DCHECK or LOG(DFATAL), but returns the
// appropriate fallback value (12 in this case) in opt mode. If you
// need to test that a function has appropriate side-effects in opt
// mode, include assertions against the side-effects.  A general
// pattern for this is:
//
// EXPECT_DEBUG_DEATH({
//   // Side-effects here will have an effect after this statement in
//   // opt mode, but none in debug mode.
//   EXPECT_EQ(12, DieInDebugOr12(&sideeffect));
// }, 'death');
//
# ifdef NDEBUG
    
    template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5>
internal::CartesianProductHolder5<Generator1, Generator2, Generator3,
    Generator4, Generator5> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5) {
  return internal::CartesianProductHolder5<Generator1, Generator2, Generator3,
      Generator4, Generator5>(
      g1, g2, g3, g4, g5);
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
    
    template <class Generator1, class Generator2, class Generator3,
    class Generator4, class Generator5, class Generator6>
class CartesianProductHolder6 {
 public:
CartesianProductHolder6(const Generator1& g1, const Generator2& g2,
    const Generator3& g3, const Generator4& g4, const Generator5& g5,
    const Generator6& g6)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6) {}
  template <typename T1, typename T2, typename T3, typename T4, typename T5,
      typename T6>
  operator ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6> >() const {
    return ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6> >(
        new CartesianProductGenerator6<T1, T2, T3, T4, T5, T6>(
        static_cast<ParamGenerator<T1> >(g1_),
        static_cast<ParamGenerator<T2> >(g2_),
        static_cast<ParamGenerator<T3> >(g3_),
        static_cast<ParamGenerator<T4> >(g4_),
        static_cast<ParamGenerator<T5> >(g5_),
        static_cast<ParamGenerator<T6> >(g6_)));
  }
    }
    
      // Creates a UTF-16 wide string from the given ANSI string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the wide string, or NULL if the
  // input is NULL.
  //
  // The wide string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static LPCWSTR AnsiToUtf16(const char* c_str);
    
      template <GTEST_1_TYPENAMES_(U)>
  tuple& operator=(const GTEST_1_TUPLE_(U)& t) {
    return CopyFrom(t);
  }
    
    // Type utilities needed for implementing typed and type-parameterized
// tests.  This file is generated by a SCRIPT.  DO NOT EDIT BY HAND!
//
// Currently we support at most $n types in a list, and at most $n
// type-parameterized tests in one type-parameterized test case.
// Please contact googletestframework@googlegroups.com if you need
// more.
    
    
    {  // We disallow copying a queue.
  Queue(const Queue&);
  const Queue& operator = (const Queue&);
};
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/operator.h'
    
    	void add_translation(const Ref<Translation> &p_translation);
	void remove_translation(const Ref<Translation> &p_translation);
    
    #else
    
    			String type = token.value;
    
    	void _dump_function_deps(ShaderLanguage::ShaderNode *p_node, const StringName &p_for_func, const Map<StringName, String> &p_func_code, StringBuilder &r_to_add, Set<StringName> &r_added);
	String _dump_node_code(ShaderLanguage::Node *p_node, int p_level, GeneratedCode &r_gen_code, IdentifierActions &p_actions, const DefaultIdentifierActions &p_default_actions, bool p_assigning);
    
    	char drives[MAX_DRIVES]; // a-z:
	int drive_count;
    
    void MutexWindows::lock() {
    }
    
    
    {	MutexWindows();
	~MutexWindows();
};
    
    	IP_Address peer_addr;
	int peer_port;
    
    void RWLockWindows::read_unlock() {
    }
    
    	int ret = select(listen_sockfd + 1, &pfd, NULL, NULL, &timeout);
	ERR_FAIL_COND_V(ret < 0, 0);
    
    template BOOST_REGEX_DECL basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >& 
   basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >::do_assign(
      const BOOST_REGEX_CHAR_T* p1, 
      const BOOST_REGEX_CHAR_T* p2, 
      flag_type f);
template BOOST_REGEX_DECL basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >::locale_type BOOST_REGEX_CALL 
   basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >::imbue(locale_type l);
    
    
    {   BOOST_ASSERT(rep->type == syntax_element_short_set_rep);
   BOOST_ASSERT(rep->next.p != 0);
   BOOST_ASSERT(rep->alt.p != 0);
   BOOST_ASSERT(rep->next.p->type == syntax_element_set);
   BOOST_ASSERT(count < rep->max);
   
   if(position != last)
   {
      // wind forward until we can skip out of the repeat:
      do
      {
         if(!map[static_cast<unsigned char>(traits_inst.translate(*position, icase))])
         {
            // failed repeat match, discard this state and look for another:
            destroy_single_repeat();
            return true;
         }
         ++count;
         ++ position;
         ++state_count;
         pstate = rep->next.p;
      }while((count < rep->max) && (position != last) && !can_start(*position, rep->_map, mask_skip));
   }   
   // remember where we got to if this is a leading repeat:
   if((rep->leading) && (count < rep->max))
      restart = position;
   if(position == last)
   {
      // can't repeat any more, remove the pushed state: 
      destroy_single_repeat();
      if((m_match_flags & match_partial) && (position == last) && (position != search_base))
         m_has_partial_match = true;
      if(0 == (rep->can_be_null & mask_skip))
         return true;
   }
   else if(count == rep->max)
   {
      // can't repeat any more, remove the pushed state: 
      destroy_single_repeat();
      if(!can_start(*position, rep->_map, mask_skip))
         return true;
   }
   else
   {
      pmp->count = count;
      pmp->last_position = position;
   }
   pstate = rep->alt.p;
   return false;
}
    
    template <class T>
class concrete_protected_call
   : public abstract_protected_call
{
public:
   typedef bool (T::*proc_type)();
   concrete_protected_call(T* o, proc_type p)
      : obj(o), proc(p) {}
private:
   virtual bool call()const;
   T* obj;
   proc_type proc;
};
    
    
    {      basic = ::boost::regbase::basic,
      extended = ::boost::regbase::extended,
      normal = ::boost::regbase::normal,
      emacs = ::boost::regbase::emacs,
      awk = ::boost::regbase::awk,
      grep = ::boost::regbase::grep,
      egrep = ::boost::regbase::egrep,
      sed = basic,
      perl = normal,
      ECMAScript = normal,
      JavaScript = normal,
      JScript = normal
   };
   typedef ::boost::regbase::flag_type syntax_option_type;
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1, class Traits2>
std::size_t regex_split(OutputIterator out,
                   std::basic_string<charT, Traits1, Alloc1>& s, 
                   const basic_regex<charT, Traits2>& e,
                   match_flag_type flags,
                   std::size_t max_split)
{
   typedef typename std::basic_string<charT, Traits1, Alloc1>::const_iterator  ci_t;
   //typedef typename match_results<ci_t>::allocator_type                        match_allocator;
   ci_t last = s.begin();
   std::size_t init_size = max_split;
   BOOST_REGEX_DETAIL_NS::split_pred<OutputIterator, charT, Traits1, Alloc1> pred(&last, &out, &max_split);
   ci_t i, j;
   i = s.begin();
   j = s.end();
   regex_grep(pred, i, j, e, flags);
   //
   // if there is still input left, do a final push as long as max_split
   // is not exhausted, and we're not splitting sub-expressions rather 
   // than whitespace:
   if(max_split && (last != s.end()) && (e.mark_count() == 0))
   {
      *out = std::basic_string<charT, Traits1, Alloc1>((ci_t)last, (ci_t)s.end());
      ++out;
      last = s.end();
      --max_split;
   }
   //
   // delete from the string everything that has been processed so far:
   s.erase(0, last - s.begin());
   //
   // return the number of new records pushed:
   return init_size - max_split;
}
    
    #include <boost/shared_ptr.hpp>
#include <boost/detail/workaround.hpp>
#if (BOOST_WORKAROUND(__BORLANDC__, >= 0x560) && BOOST_WORKAROUND(__BORLANDC__, BOOST_TESTED_AT(0x570)))\
      || BOOST_WORKAROUND(__MWERKS__, BOOST_TESTED_AT(0x3003))
//
// Borland C++ Builder 6, and Visual C++ 6,
// can't cope with the array template constructor
// so we have a template member that will accept any type as 
// argument, and then assert that is really is an array:
//
#include <boost/static_assert.hpp>
#include <boost/type_traits/is_array.hpp>
#endif
    
    template <class charT, class implementationT >
struct regex_traits : public implementationT
{
   regex_traits() : implementationT() {}
};