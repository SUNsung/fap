
        
        template <class charT, class traits>
bool basic_regex_parser<charT, traits>::unwind_alts(std::ptrdiff_t last_paren_start)
{
   //
   // If we didn't actually add any states after the last 
   // alternative then that's an error:
   //
   if((this->m_alt_insert_point == static_cast<std::ptrdiff_t>(this->m_pdata->m_data.size()))
      && m_alt_jumps.size() && (m_alt_jumps.back() > last_paren_start)
      &&
      !(
         ((this->flags() & regbase::main_option_type) == regbase::perl_syntax_group)
           &&
         ((this->flags() & regbase::no_empty_expressions) == 0)
        )
      )
   {
      fail(regex_constants::error_empty, this->m_position - this->m_base, 'Can't terminate a sub-expression with an alternation operator |.');
      return false;
   }
   // 
   // Fix up our alternatives:
   //
   while(m_alt_jumps.size() && (m_alt_jumps.back() > last_paren_start))
   {
      //
      // fix up the jump to point to the end of the states
      // that we've just added:
      //
      std::ptrdiff_t jump_offset = m_alt_jumps.back();
      m_alt_jumps.pop_back();
      this->m_pdata->m_data.align();
      re_jump* jmp = static_cast<re_jump*>(this->getaddress(jump_offset));
      BOOST_ASSERT(jmp->type == syntax_element_jump);
      jmp->alt.i = this->m_pdata->m_data.size() - jump_offset;
   }
   return true;
}
    
    namespace boost{
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
    
    
    {} // namespace boost
    
    #endif  // BOOST_REGEX_V4_REGEX_GREP_HPP
    
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
    
    #endif
    
    #include <string>
#include <vector>
    
    class ViewsConfigParserPluginTests : public testing::Test {};
    
      /// Keep a list of resolved extension paths and their managed pids.
  ExtensionMap extensions_;