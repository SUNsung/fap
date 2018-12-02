
        
        namespace caffe2 {
    }
    
    template <class charT, class traits>
bool basic_regex_parser<charT, traits>::parse_inner_set(basic_char_set<charT, traits>& char_set)
{
   static const char* incomplete_message = 'Character class declaration starting with [ terminated prematurely - either no ] was found or the set had no content.';
   //
   // we have either a character class [:name:]
   // a collating element [.name.]
   // or an equivalence class [=name=]
   //
   if(m_end == ++m_position)
   {
      fail(regex_constants::error_brack, m_position - m_base, incomplete_message);
      return false;
   }
   switch(this->m_traits.syntax_type(*m_position))
   {
   case regex_constants::syntax_dot:
      //
      // a collating element is treated as a literal:
      //
      --m_position;
      parse_set_literal(char_set);
      return true;
   case regex_constants::syntax_colon:
      {
      // check that character classes are actually enabled:
      if((this->flags() & (regbase::main_option_type | regbase::no_char_classes)) 
         == (regbase::basic_syntax_group  | regbase::no_char_classes))
      {
         --m_position;
         parse_set_literal(char_set);
         return true;
      }
      // skip the ':'
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_brack, m_position - m_base, incomplete_message);
         return false;
      }
      const charT* name_first = m_position;
      // skip at least one character, then find the matching ':]'
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_brack, m_position - m_base, incomplete_message);
         return false;
      }
      while((m_position != m_end) 
         && (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_colon)) 
         ++m_position;
      const charT* name_last = m_position;
      if(m_end == m_position)
      {
         fail(regex_constants::error_brack, m_position - m_base, incomplete_message);
         return false;
      }
      if((m_end == ++m_position) 
         || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_set))
      {
         fail(regex_constants::error_brack, m_position - m_base, incomplete_message);
         return false;
      }
      //
      // check for negated class:
      //
      bool negated = false;
      if(this->m_traits.syntax_type(*name_first) == regex_constants::syntax_caret)
      {
         ++name_first;
         negated = true;
      }
      typedef typename traits::char_class_type m_type;
      m_type m = this->m_traits.lookup_classname(name_first, name_last);
      if(m == 0)
      {
         if(char_set.empty() && (name_last - name_first == 1))
         {
            // maybe a special case:
            ++m_position;
            if( (m_position != m_end) 
               && (this->m_traits.syntax_type(*m_position) 
                  == regex_constants::syntax_close_set))
            {
               if(this->m_traits.escape_syntax_type(*name_first) 
                  == regex_constants::escape_type_left_word)
               {
                  ++m_position;
                  this->append_state(syntax_element_word_start);
                  return false;
               }
               if(this->m_traits.escape_syntax_type(*name_first) 
                  == regex_constants::escape_type_right_word)
               {
                  ++m_position;
                  this->append_state(syntax_element_word_end);
                  return false;
               }
            }
         }
         fail(regex_constants::error_ctype, name_first - m_base);
         return false;
      }
      if(negated == false)
         char_set.add_class(m);
      else
         char_set.add_negated_class(m);
      ++m_position;
      break;
   }
   case regex_constants::syntax_equal:
      {
      // skip the '='
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_brack, m_position - m_base, incomplete_message);
         return false;
      }
      const charT* name_first = m_position;
      // skip at least one character, then find the matching '=]'
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_brack, m_position - m_base, incomplete_message);
         return false;
      }
      while((m_position != m_end) 
         && (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_equal)) 
         ++m_position;
      const charT* name_last = m_position;
      if(m_end == m_position)
      {
         fail(regex_constants::error_brack, m_position - m_base, incomplete_message);
         return false;
      }
      if((m_end == ++m_position) 
         || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_set))
      {
         fail(regex_constants::error_brack, m_position - m_base, incomplete_message);
         return false;
      }
      string_type m = this->m_traits.lookup_collatename(name_first, name_last);
      if((0 == m.size()) || (m.size() > 2))
      {
         fail(regex_constants::error_collate, name_first - m_base);
         return false;
      }
      digraph<charT> d;
      d.first = m[0];
      if(m.size() > 1)
         d.second = m[1];
      else
         d.second = 0;
      char_set.add_equivalent(d);
      ++m_position;
      break;
   }
   default:
      --m_position;
      parse_set_literal(char_set);
      break;
   }
   return true;
}
    
    
    {private:
   // this type is not copyable:
   c_regex_traits(const c_regex_traits&);
   c_regex_traits& operator=(const c_regex_traits&);
};
    
    namespace BOOST_REGEX_DETAIL_NS{
template BOOST_REGEX_DECL void perl_matcher<std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator, match_results< std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator >::allocator_type, boost::regex_traits<BOOST_REGEX_CHAR_T > >::construct_init(
      const basic_regex<BOOST_REGEX_CHAR_T>& e, match_flag_type f);
template BOOST_REGEX_DECL bool perl_matcher<std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator, match_results< std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator >::allocator_type, boost::regex_traits<BOOST_REGEX_CHAR_T > >::match();
template BOOST_REGEX_DECL bool perl_matcher<std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator, match_results< std::basic_string<BOOST_REGEX_CHAR_T>::const_iterator >::allocator_type, boost::regex_traits<BOOST_REGEX_CHAR_T > >::find();
} // namespace
#endif
    
       format_perl = 0,                                  /* perl style replacement */
   format_default = 0,                               /* ditto. */
   format_sed = match_max << 1,                      /* sed style replacement. */
   format_all = format_sed << 1,                     /* enable all extentions to sytax. */
   format_no_copy = format_all << 1,                 /* don't copy non-matching segments. */
   format_first_only = format_no_copy << 1,          /* Only replace first occurance. */
   format_is_if = format_first_only << 1,            /* internal use only. */
   format_literal = format_is_if << 1                /* treat string as a literal */
    
          typedef typename BOOST_REGEX_DETAIL_NS::compute_functor_type<Functor, match_results<BidiIterator, Allocator>, BOOST_REGEX_DETAIL_NS::string_out_iterator<std::basic_string<char_type> > >::type F;
      F func(fmt);
    
    
    {
    {#if defined(BOOST_REGEX_NON_RECURSIVE) && !defined(BOOST_NO_EXCEPTIONS)
   }
   catch(...)
   {
      // unwind all pushed states, apart from anything else this
      // ensures that all the states are correctly destructed
      // not just the memory freed.
      while(unwind(true)){}
      throw;
   }
#endif
}
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_commit()
{
   // Ideally we would just junk all the states that are on the stack,
   // however we might not unwind correctly in that case, so for now,
   // just mark that we don't backtrack into whatever is left (or rather
   // we'll unwind it unconditionally without pausing to try other matches).
    }
    
    #endif
    
    
    {public:
   regex_iterator_implementation(const regex_type* p, BidirectionalIterator last, match_flag_type f)
      : base(), end(last), re(*p), flags(f){}
   bool init(BidirectionalIterator first)
   {
      base = first;
      return regex_search(first, end, what, re, flags);
   }
   bool compare(const regex_iterator_implementation& that)
   {
      if(this == &that) return true;
      return (&re.get_data() == &that.re.get_data()) && (end == that.end) && (flags == that.flags) && (what[0].first == that.what[0].first) && (what[0].second == that.what[0].second);
   }
   const match_results<BidirectionalIterator>& get()
   { return what; }
   bool next()
   {
      //if(what.prefix().first != what[0].second)
      //   flags |= match_prev_avail;
      BidirectionalIterator next_start = what[0].second;
      match_flag_type f(flags);
      if(!what.length() || (f & regex_constants::match_posix))
         f |= regex_constants::match_not_initial_null;
      //if(base != next_start)
      //   f |= regex_constants::match_not_bob;
      bool result = regex_search(next_start, end, what, re, f, base);
      if(result)
         what.set_base(base);
      return result;
   }
private:
   regex_iterator_implementation& operator=(const regex_iterator_implementation&);
};
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_raw_buffer.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Raw character buffer for regex code.
  *                Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    template <class BidiIterator, class Allocator, class charT, class traits>
bool regex_search(BidiIterator first, BidiIterator last, 
                  match_results<BidiIterator, Allocator>& m, 
                  const basic_regex<charT, traits>& e, 
                  match_flag_type flags,
                  BidiIterator base)
{
   if(e.flags() & regex_constants::failbit)
      return false;
    }