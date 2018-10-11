
        
                double m_gamma;
        double m_inc;
        double m_dec;
        double m_max;
        double m_min;
        bool m_needAveMultiplier;
        double m_smoothedCount;
    
        std::wstring NDArrayView::AsString() const
    {
        wstringstream wss;
        std::wstring device = DeviceKindName(m_device.Type());
        wss << L'NDArrayView(' << m_viewShape.AsString() << L', ' << device << L')';
        return wss.str();
    }
    
    namespace CNTK
{
    class UDFUtils
    {
    public:
    }
    }
    
                if ((oldFilterRank != SentinelValueForInferParamInitRank) && (oldFilterRank != filterRank))
                InvalidArgument('Filer rank of a non-uniform random initialier cannot be overridden if it has been already specified!');
    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
    size_t DataReader::GetNumParallelSequencesForFixingBPTTMode()
{
    size_t nNbr = 0;
    for (size_t i = 0; i < m_ioNames.size(); i++)
    {
        IDataReader* ptr = m_dataReaders[m_ioNames[i]];
        if (nNbr == 0)
            nNbr = ptr->GetNumParallelSequencesForFixingBPTTMode();
        else if (nNbr != ptr->GetNumParallelSequencesForFixingBPTTMode())
            LogicError('GetNumParallelSequences: number of slices in each minibatch not consistent for these streams');
    }
    return nNbr;
}
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    
    {
    {        wstring pathName = config[L'pathName'];
        if (TraceLevel() > 0)
            fprintf(stderr, 'Load: Loading model file: %ls', pathName.c_str());
        Load<ElemType>(pathName); // note that for CNTK_MODEL_VERSION_7 and above, 'ElemType' is ignored
    }
};
    
    template <class charT, class traits>
bool basic_regex_parser<charT, traits>::parse_perl_extension()
{
   if(++m_position == m_end)
   {
      // Rewind to start of (? sequence:
      --m_position;
      while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
      fail(regex_constants::error_perl_extension, m_position - m_base);
      return false;
   }
   //
   // treat comments as a special case, as these
   // are the only ones that don't start with a leading
   // startmark state:
   //
   if(this->m_traits.syntax_type(*m_position) == regex_constants::syntax_hash)
   {
      while((m_position != m_end) 
         && (this->m_traits.syntax_type(*m_position++) != regex_constants::syntax_close_mark))
      {}      
      return true;
   }
   //
   // backup some state, and prepare the way:
   //
   int markid = 0;
   std::ptrdiff_t jump_offset = 0;
   re_brace* pb = static_cast<re_brace*>(this->append_state(syntax_element_startmark, sizeof(re_brace)));
   pb->icase = this->flags() & regbase::icase;
   std::ptrdiff_t last_paren_start = this->getoffset(pb);
   // back up insertion point for alternations, and set new point:
   std::ptrdiff_t last_alt_point = m_alt_insert_point;
   this->m_pdata->m_data.align();
   m_alt_insert_point = this->m_pdata->m_data.size();
   std::ptrdiff_t expected_alt_point = m_alt_insert_point;
   bool restore_flags = true;
   regex_constants::syntax_option_type old_flags = this->flags();
   bool old_case_change = m_has_case_change;
   m_has_case_change = false;
   charT name_delim;
   int mark_reset = m_mark_reset;
   int max_mark = m_max_mark;
   m_mark_reset = -1;
   m_max_mark = m_mark_count;
   int v;
   //
   // select the actual extension used:
   //
   switch(this->m_traits.syntax_type(*m_position))
   {
   case regex_constants::syntax_or:
      m_mark_reset = m_mark_count;
      BOOST_FALLTHROUGH;
   case regex_constants::syntax_colon:
      //
      // a non-capturing mark:
      //
      pb->index = markid = 0;
      ++m_position;
      break;
   case regex_constants::syntax_digit:
      {
      //
      // a recursive subexpression:
      //
      v = this->m_traits.toi(m_position, m_end, 10);
      if((v < 0) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base, 'The recursive sub-expression refers to an invalid marking group, or is unterminated.');
         return false;
      }
insert_recursion:
      pb->index = markid = 0;
      re_recurse* pr = static_cast<re_recurse*>(this->append_state(syntax_element_recurse, sizeof(re_recurse)));
      pr->alt.i = v;
      pr->state_id = 0;
      static_cast<re_case*>(
            this->append_state(syntax_element_toggle_case, sizeof(re_case))
            )->icase = this->flags() & regbase::icase;
      break;
      }
   case regex_constants::syntax_plus:
      //
      // A forward-relative recursive subexpression:
      //
      ++m_position;
      v = this->m_traits.toi(m_position, m_end, 10);
      if((v <= 0) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base, 'An invalid or unterminated recursive sub-expression.');
         return false;
      }
      v += m_mark_count;
      goto insert_recursion;
   case regex_constants::syntax_dash:
      //
      // Possibly a backward-relative recursive subexpression:
      //
      ++m_position;
      v = this->m_traits.toi(m_position, m_end, 10);
      if(v <= 0)
      {
         --m_position;
         // Oops not a relative recursion at all, but a (?-imsx) group:
         goto option_group_jump;
      }
      v = m_mark_count + 1 - v;
      if(v <= 0)
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base, 'An invalid or unterminated recursive sub-expression.');
         return false;
      }
      goto insert_recursion;
   case regex_constants::syntax_equal:
      pb->index = markid = -1;
      ++m_position;
      jump_offset = this->getoffset(this->append_state(syntax_element_jump, sizeof(re_jump)));
      this->m_pdata->m_data.align();
      m_alt_insert_point = this->m_pdata->m_data.size();
      break;
   case regex_constants::syntax_not:
      pb->index = markid = -2;
      ++m_position;
      jump_offset = this->getoffset(this->append_state(syntax_element_jump, sizeof(re_jump)));
      this->m_pdata->m_data.align();
      m_alt_insert_point = this->m_pdata->m_data.size();
      break;
   case regex_constants::escape_type_left_word:
      {
         // a lookbehind assertion:
         if(++m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         regex_constants::syntax_type t = this->m_traits.syntax_type(*m_position);
         if(t == regex_constants::syntax_not)
            pb->index = markid = -2;
         else if(t == regex_constants::syntax_equal)
            pb->index = markid = -1;
         else
         {
            // Probably a named capture which also starts (?< :
            name_delim = '>';
            --m_position;
            goto named_capture_jump;
         }
         ++m_position;
         jump_offset = this->getoffset(this->append_state(syntax_element_jump, sizeof(re_jump)));
         this->append_state(syntax_element_backstep, sizeof(re_brace));
         this->m_pdata->m_data.align();
         m_alt_insert_point = this->m_pdata->m_data.size();
         break;
      }
   case regex_constants::escape_type_right_word:
      //
      // an independent sub-expression:
      //
      pb->index = markid = -3;
      ++m_position;
      jump_offset = this->getoffset(this->append_state(syntax_element_jump, sizeof(re_jump)));
      this->m_pdata->m_data.align();
      m_alt_insert_point = this->m_pdata->m_data.size();
      break;
   case regex_constants::syntax_open_mark:
      {
      // a conditional expression:
      pb->index = markid = -4;
      if(++m_position == m_end)
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      v = this->m_traits.toi(m_position, m_end, 10);
      if(m_position == m_end)
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(*m_position == charT('R'))
      {
         if(++m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         if(*m_position == charT('&'))
         {
            const charT* base = ++m_position;
            while((m_position != m_end) && (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
               ++m_position;
            if(m_position == m_end)
            {
               // Rewind to start of (? sequence:
               --m_position;
               while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
               fail(regex_constants::error_perl_extension, m_position - m_base);
               return false;
            }
            v = -static_cast<int>(hash_value_from_capture_name(base, m_position));
         }
         else
         {
            v = -this->m_traits.toi(m_position, m_end, 10);
         }
         re_brace* br = static_cast<re_brace*>(this->append_state(syntax_element_assert_backref, sizeof(re_brace)));
         br->index = v < 0 ? (v - 1) : 0;
         if(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         if(++m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
      }
      else if((*m_position == charT('\'')) || (*m_position == charT('<')))
      {
         const charT* base = ++m_position;
         while((m_position != m_end) && (*m_position != charT('>')) && (*m_position != charT('\'')))
            ++m_position;
         if(m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         v = static_cast<int>(hash_value_from_capture_name(base, m_position));
         re_brace* br = static_cast<re_brace*>(this->append_state(syntax_element_assert_backref, sizeof(re_brace)));
         br->index = v;
         if(((*m_position != charT('>')) && (*m_position != charT('\''))) || (++m_position == m_end))
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base, 'Unterminated named capture.');
            return false;
         }
         if(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         if(++m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
      }
      else if(*m_position == charT('D'))
      {
         const char* def = 'DEFINE';
         while(*def && (m_position != m_end) && (*m_position == charT(*def)))
            ++m_position, ++def;
         if((m_position == m_end) || *def)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         re_brace* br = static_cast<re_brace*>(this->append_state(syntax_element_assert_backref, sizeof(re_brace)));
         br->index = 9999; // special magic value!
         if(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         if(++m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
      }
      else if(v > 0)
      {
         re_brace* br = static_cast<re_brace*>(this->append_state(syntax_element_assert_backref, sizeof(re_brace)));
         br->index = v;
         if(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         if(++m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
      }
      else
      {
         // verify that we have a lookahead or lookbehind assert:
         if(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_question)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         if(++m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         if(this->m_traits.syntax_type(*m_position) == regex_constants::escape_type_left_word)
         {
            if(++m_position == m_end)
            {
               // Rewind to start of (? sequence:
               --m_position;
               while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
               fail(regex_constants::error_perl_extension, m_position - m_base);
               return false;
            }
            if((this->m_traits.syntax_type(*m_position) != regex_constants::syntax_equal)
               && (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_not))
            {
               // Rewind to start of (? sequence:
               --m_position;
               while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
               fail(regex_constants::error_perl_extension, m_position - m_base);
               return false;
            }
            m_position -= 3;
         }
         else
         {
            if((this->m_traits.syntax_type(*m_position) != regex_constants::syntax_equal)
               && (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_not))
            {
               // Rewind to start of (? sequence:
               --m_position;
               while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
               fail(regex_constants::error_perl_extension, m_position - m_base);
               return false;
            }
            m_position -= 2;
         }
      }
      break;
      }
   case regex_constants::syntax_close_mark:
      // Rewind to start of (? sequence:
      --m_position;
      while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
      fail(regex_constants::error_perl_extension, m_position - m_base);
      return false;
   case regex_constants::escape_type_end_buffer:
      {
      name_delim = *m_position;
named_capture_jump:
      markid = 0;
      if(0 == (this->flags() & regbase::nosubs))
      {
         markid = ++m_mark_count;
   #ifndef BOOST_NO_STD_DISTANCE
         if(this->flags() & regbase::save_subexpression_location)
            this->m_pdata->m_subs.push_back(std::pair<std::size_t, std::size_t>(std::distance(m_base, m_position) - 2, 0));
   #else
         if(this->flags() & regbase::save_subexpression_location)
            this->m_pdata->m_subs.push_back(std::pair<std::size_t, std::size_t>((m_position - m_base) - 2, 0));
   #endif
      }
      pb->index = markid;
      const charT* base = ++m_position;
      if(m_position == m_end)
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      while((m_position != m_end) && (*m_position != name_delim))
         ++m_position;
      if(m_position == m_end)
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      this->m_pdata->set_name(base, m_position, markid);
      ++m_position;
      break;
      }
   default:
      if(*m_position == charT('R'))
      {
         ++m_position;
         v = 0;
         if(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         goto insert_recursion;
      }
      if(*m_position == charT('&'))
      {
         ++m_position;
         const charT* base = m_position;
         while((m_position != m_end) && (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
            ++m_position;
         if(m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         v = static_cast<int>(hash_value_from_capture_name(base, m_position));
         goto insert_recursion;
      }
      if(*m_position == charT('P'))
      {
         ++m_position;
         if(m_position == m_end)
         {
            // Rewind to start of (? sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         if(*m_position == charT('>'))
         {
            ++m_position;
            const charT* base = m_position;
            while((m_position != m_end) && (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
               ++m_position;
            if(m_position == m_end)
            {
               // Rewind to start of (? sequence:
               --m_position;
               while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
               fail(regex_constants::error_perl_extension, m_position - m_base);
               return false;
            }
            v = static_cast<int>(hash_value_from_capture_name(base, m_position));
            goto insert_recursion;
         }
      }
      //
      // lets assume that we have a (?imsx) group and try and parse it:
      //
option_group_jump:
      regex_constants::syntax_option_type opts = parse_options();
      if(m_position == m_end)
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      // make a note of whether we have a case change:
      m_has_case_change = ((opts & regbase::icase) != (this->flags() & regbase::icase));
      pb->index = markid = 0;
      if(this->m_traits.syntax_type(*m_position) == regex_constants::syntax_close_mark)
      {
         // update flags and carry on as normal:
         this->flags(opts);
         restore_flags = false;
         old_case_change |= m_has_case_change; // defer end of scope by one ')'
      }
      else if(this->m_traits.syntax_type(*m_position) == regex_constants::syntax_colon)
      {
         // update flags and carry on until the matching ')' is found:
         this->flags(opts);
         ++m_position;
      }
      else
      {
         // Rewind to start of (? sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
    }
    }
    
    template BOOST_REGEX_DECL basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >& 
   basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >::do_assign(
      const BOOST_REGEX_CHAR_T* p1, 
      const BOOST_REGEX_CHAR_T* p2, 
      flag_type f);
template BOOST_REGEX_DECL basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >::locale_type BOOST_REGEX_CALL 
   basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >::imbue(locale_type l);
    
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
    
    
    {      func(*this, i, flags, re.get_traits());
      return result;
   }
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         mem_block_cache.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: memory block cache used by the non-recursive matcher.
  */
    
       bool find_imp();
   bool match_imp();
#ifdef BOOST_REGEX_HAS_MS_STACK_GUARD
   typedef bool (perl_matcher::*protected_proc_type)();
   bool protected_call(protected_proc_type);
#endif
   void estimate_max_state_count(std::random_access_iterator_tag*);
   void estimate_max_state_count(void*);
   bool match_prefix();
   bool match_all_states();
    
    template <class BidiIterator, class Allocator, class traits>
inline bool perl_matcher<BidiIterator, Allocator, traits>::find()
{
#ifdef BOOST_REGEX_HAS_MS_STACK_GUARD
   return protected_call(&perl_matcher<BidiIterator, Allocator, traits>::find_imp);
#else
   return find_imp();
#endif
}
    
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
    
          no_except = ::boost::regbase::no_except,
      failbit = ::boost::regbase::failbit,
      literal = ::boost::regbase::literal,
      icase = ::boost::regbase::icase,
      nocollate = ::boost::regbase::nocollate,
      collate = ::boost::regbase::collate,
      nosubs = ::boost::regbase::nosubs,
      optimize = ::boost::regbase::optimize,
      bk_plus_qm = ::boost::regbase::bk_plus_qm,
      bk_vbar = ::boost::regbase::bk_vbar,
      no_intervals = ::boost::regbase::no_intervals,
      no_char_classes = ::boost::regbase::no_char_classes,
      no_escape_in_lists = ::boost::regbase::no_escape_in_lists,
      no_mod_m = ::boost::regbase::no_mod_m,
      mod_x = ::boost::regbase::mod_x,
      mod_s = ::boost::regbase::mod_s,
      no_mod_s = ::boost::regbase::no_mod_s,
      save_subexpression_location = ::boost::regbase::save_subexpression_location,
      no_empty_expressions = ::boost::regbase::no_empty_expressions,
    
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
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_token_iterator.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Provides regex_token_iterator implementation.
  */
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().
    
    
    {        // Rendering
        ImGui::Render();
        al_clear_to_color(al_map_rgba_f(clear_color.x, clear_color.y, clear_color.z, clear_color.w));
        ImGui_ImplAllegro5_RenderDrawData(ImGui::GetDrawData());
        al_flip_display();
    }
    
    static void ImGui_ImplDX10_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);
    }
    
        // Render command lists
    ImVec2 pos = draw_data->DisplayPos;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawVert* vtx_buffer = cmd_list->VtxBuffer.Data;
        const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;
        glVertexPointer(2, GL_FLOAT, sizeof(ImDrawVert), (const GLvoid*)((const char*)vtx_buffer + IM_OFFSETOF(ImDrawVert, pos)));
        glTexCoordPointer(2, GL_FLOAT, sizeof(ImDrawVert), (const GLvoid*)((const char*)vtx_buffer + IM_OFFSETOF(ImDrawVert, uv)));
        glColorPointer(4, GL_UNSIGNED_BYTE, sizeof(ImDrawVert), (const GLvoid*)((const char*)vtx_buffer + IM_OFFSETOF(ImDrawVert, col)));
    }
    
    static void CreateOrResizeBuffer(VkBuffer& buffer, VkDeviceMemory& buffer_memory, VkDeviceSize& p_buffer_size, size_t new_size, VkBufferUsageFlagBits usage)
{
    VkResult err;
    if (buffer != VK_NULL_HANDLE)
        vkDestroyBuffer(g_Device, buffer, g_Allocator);
    if (buffer_memory)
        vkFreeMemory(g_Device, buffer_memory, g_Allocator);
    }
    
    
    {    // wait for other agent receiving is ok.
    while (!other_agent()->is_receiving()) {
      std::this_thread::yield();
    }
    int64_t start = AsInt64<micros>(Clock::Now());
    while (true) {
      // param->print();
      if (count >= FLAGS_agent_mutual_send_frames) {
        break;
      }
      for (int32_t i = 0; i < MAX_CAN_SEND_FRAME_LEN; ++i) {
        // frames[i].id = id_count & 0x3FF;
        send_id = id;
        frames[i].id = id;
        frames[i].len = 8;
        frames[i].data[7] = count % 256;
        for (int32_t j = 0; j < 7; ++j) {
          frames[i].data[j] = j;
        }
        ++count;
        ++id;
        if (id > end_id) {
          id = start_id;
        }
      }
      int32_t frame_num = MAX_CAN_SEND_FRAME_LEN;
      if (client->Send(frames, &frame_num) != ErrorCode::OK) {
        param->send_err_cnt += MAX_CAN_SEND_FRAME_LEN;
        AERROR << 'send_thread send msg failed!, id:' << send_id
               << ', conf:' << param->conf.ShortDebugString();
      } else {
        param->send_cnt += frame_num;
        param->send_lost_cnt += MAX_CAN_SEND_FRAME_LEN - frame_num;
        AINFO << 'send_frames: ' << frame_num << 'send_frame#'
              << frames[0].CanFrameString()
              << ' send lost:' << MAX_CAN_SEND_FRAME_LEN - frame_num
              << ', conf:' << param->conf.ShortDebugString();
      }
    }
    int64_t end = AsInt64<micros>(Clock::Now());
    param->send_time = end - start;
    // In case for finish too quick to receiver miss some msg
    sleep(2);
    AINFO << 'Send thread stopping...' << param->conf.ShortDebugString();
    is_sending_finish(true);
    return;
  }
    
      if (*frame_num > MAX_CAN_RECV_FRAME_LEN || *frame_num < 0) {
    AERROR << 'recv can frame num not in range[0, ' << MAX_CAN_RECV_FRAME_LEN
           << '], frame_num:' << *frame_num;
    // TODO(Authors): check the difference of returning frame_num/error_code
    return ErrorCode::CAN_CLIENT_ERROR_FRAME_NUM;
  }
    
    #include <string>
#include <vector>
#include 'esd_can/include/ntcan.h'
#include 'gflags/gflags.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    using apollo::common::ErrorCode;
    
    ErrorCode FakeCanClient::Send(const std::vector<CanFrame> &frames,
                              int32_t *const frame_num) {
  if (frame_num == nullptr) {
    AERROR << 'frame_num pointer is null';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    }
    
    
    {  is_started_ = true;
  return ErrorCode::OK;
}
    
    using apollo::common::ErrorCode;
    
    
    {  receiver.Init(&can_client, &pm, false);
  EXPECT_EQ(receiver.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(receiver.IsRunning());
  receiver.Stop();
  EXPECT_FALSE(receiver.IsRunning());
}
    
      /**
   * @brief Get a one-byte unsigned integer representing the consecutive bits
   *        from a specified position (from lowest) by a certain length.
   * @param start_pos The starting position (from lowest) of bits.
   * @param length The length of the selected consecutive bits.
   * @return The one-byte unsigned integer representing the selected bits.
   */
  uint8_t get_byte(const int32_t start_pos, const int32_t length) const;
    
    TEST(ByteTest, SetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  value.set_value(0x06, 3, 3);
  EXPECT_EQ(0x32, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 8);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 10);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 1, 7);
  EXPECT_EQ(0x0C, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, 1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, -1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
}
    
    // System gflags
DEFINE_string(node_name, 'chassis', 'The chassis module name in proto');
DEFINE_string(canbus_driver_name, 'canbus', 'Driver name.');