
        
        private:
   void construct_init(const basic_regex<char_type, traits>& e, match_flag_type f);
    
    
    
    #ifdef BOOST_REGEX_USE_WIN32_LOCALE
template <class charT, class implementationT = w32_regex_traits<charT> >
struct regex_traits;
#elif defined(BOOST_REGEX_USE_CPP_LOCALE)
template <class charT, class implementationT = cpp_regex_traits<charT> >
struct regex_traits;
#else
template <class charT, class implementationT = c_regex_traits<charT> >
struct regex_traits;
#endif
    
    template <class ST, class SA, class Allocator, class charT, class traits>
inline bool regex_match(const std::basic_string<charT, ST, SA>& s, 
                 match_results<typename std::basic_string<charT, ST, SA>::const_iterator, Allocator>& m, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   return regex_match(s.begin(), s.end(), m, e, flags);
}
template <class charT, class traits>
inline bool regex_match(const charT* str, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   match_results<const charT*> m;
   return regex_match(str, str + traits::length(str), m, e, flags | regex_constants::match_any);
}
    
    template <class BaseT>
struct default_wrapper : public BaseT
{
   typedef typename BaseT::char_type char_type;
   std::string error_string(::boost::regex_constants::error_type e)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::get_default_error_string(e);
   }
   ::boost::regex_constants::syntax_type syntax_type(char_type c)const
   {
      return ((c & 0x7f) == c) ? get_default_syntax_type(static_cast<char>(c)) : ::boost::regex_constants::syntax_char;
   }
   ::boost::regex_constants::escape_syntax_type escape_syntax_type(char_type c)const
   {
      return ((c & 0x7f) == c) ? get_default_escape_syntax_type(static_cast<char>(c)) : ::boost::regex_constants::escape_type_identity;
   }
   int toi(const char_type*& p1, const char_type* p2, int radix)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_toi(p1, p2, radix, *this);
   }
   char_type translate(char_type c, bool icase)const
   {
      return (icase ? this->translate_nocase(c) : this->translate(c));
   }
   char_type translate(char_type c)const
   {
      return BaseT::translate(c);
   }
   char_type tolower(char_type c)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_lower(c);
   }
   char_type toupper(char_type c)const
   {
      return ::boost::BOOST_REGEX_DETAIL_NS::global_upper(c);
   }
};
    
      size_t pack_count = 0U;
  c.packs(([&pack_count, query_attemts](const Pack& p) {
    pack_count++;
    // There is one pack without a discovery query.
    EXPECT_EQ(p.getStats().total, query_attemts + 1);
    EXPECT_EQ(p.getStats().hits, query_attemts);
    EXPECT_EQ(p.getStats().misses, 1U);
  }));
    
    namespace osquery {
    }
    
            switch (cas_common_order(success_order, failure_order))
        {
        case memory_order_relaxed:
            old_val = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_COMPARE_EXCHANGE16_RELAXED(&storage, desired, previous));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            old_val = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_COMPARE_EXCHANGE16_ACQUIRE(&storage, desired, previous));
            break;
        case memory_order_release:
            old_val = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_COMPARE_EXCHANGE16_RELEASE(&storage, desired, previous));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            old_val = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_COMPARE_EXCHANGE16(&storage, desired, previous));
            break;
        }
        expected = old_val;