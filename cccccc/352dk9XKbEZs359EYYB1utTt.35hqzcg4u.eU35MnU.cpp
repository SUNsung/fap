
        
        #ifdef BOOST_REGEX_HAS_OTHER_WCHAR_T
template<>
struct regex_iterator_traits<unsigned short*> : pointer_iterator_traits<unsigned short>{};
template<>
struct regex_iterator_traits<const unsigned short*> : const_pointer_iterator_traits<unsigned short>{};
#endif
    
    typedef enum _match_flags
{
   match_default = 0,
   match_not_bol = 1,                                /* first is not start of line */
   match_not_eol = match_not_bol << 1,               /* last is not end of line */
   match_not_bob = match_not_eol << 1,               /* first is not start of buffer */
   match_not_eob = match_not_bob << 1,               /* last is not end of buffer */
   match_not_bow = match_not_eob << 1,               /* first is not start of word */
   match_not_eow = match_not_bow << 1,               /* last is not end of word */
   match_not_dot_newline = match_not_eow << 1,       /* \n is not matched by '.' */
   match_not_dot_null = match_not_dot_newline << 1,  /* '\0' is not matched by '.' */
   match_prev_avail = match_not_dot_null << 1,       /* *--first is a valid expression */
   match_init = match_prev_avail << 1,               /* internal use */
   match_any = match_init << 1,                      /* don't care what we match */
   match_not_null = match_any << 1,                  /* string can't be null */
   match_continuous = match_not_null << 1,           /* each grep match must continue from */
                                                     /* uninterupted from the previous one */
   match_partial = match_continuous << 1,            /* find partial matches */
   
   match_stop = match_partial << 1,                  /* stop after first match (grep) V3 only */
   match_not_initial_null = match_stop,              /* don't match initial null, V4 only */
   match_all = match_stop << 1,                      /* must find the whole of input even if match_any is set */
   match_perl = match_all << 1,                      /* Use perl matching rules */
   match_posix = match_perl << 1,                    /* Use POSIX matching rules */
   match_nosubs = match_posix << 1,                  /* don't trap marked subs */
   match_extra = match_nosubs << 1,                  /* include full capture information for repeated captures */
   match_single_line = match_extra << 1,             /* treat text as single line and ignor any \n's when matching ^ and $. */
   match_unused1 = match_single_line << 1,           /* unused */
   match_unused2 = match_unused1 << 1,               /* unused */
   match_unused3 = match_unused2 << 1,               /* unused */
   match_max = match_unused3,
    }
    
    
    {
    {}
} // namespace boost
    
    
    {} // namespace boost
    
    #endif  // include
    
       typedef typename match_results<BidiIterator>::allocator_type match_allocator_type;
    
    
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
    
    