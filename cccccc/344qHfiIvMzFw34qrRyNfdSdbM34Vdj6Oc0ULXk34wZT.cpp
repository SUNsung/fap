
        
        #include <google/protobuf/compiler/command_line_interface.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/io/printer.h>
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
      // TODO(jonskeet): Consider a C#-escaping format here instead of just Base64.
  std::string base64 = FileDescriptorToBase64(file_);
  while (base64.size() > 60) {
    printer->Print('\'$base64$\',\n', 'base64', base64.substr(0, 60));
    base64 = base64.substr(60);
  }
  printer->Print('\'$base64$\'));\n', 'base64', base64);
  printer->Outdent();
  printer->Outdent();
  printer->Outdent();
    
    
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/stubs/substitute.h>
    
    #include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_name_resolver.h>
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/strutil.h>
    
    
    {
    {  if (text_format_decode_data.num_entries() == 0) {
    printer->Print(
        '    GPBEnumDescriptor *worker =\n'
        '        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol($name$)\n'
        '                                       valueNames:valueNames\n'
        '                                           values:values\n'
        '                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))\n'
        '                                     enumVerifier:$name$_IsValidValue];\n',
        'name', name_);
    } else {
      printer->Print(
        '    static const char *extraTextFormatInfo = \'$extraTextFormatInfo$\';\n'
        '    GPBEnumDescriptor *worker =\n'
        '        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol($name$)\n'
        '                                       valueNames:valueNames\n'
        '                                           values:values\n'
        '                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))\n'
        '                                     enumVerifier:$name$_IsValidValue\n'
        '                              extraTextFormatInfo:extraTextFormatInfo];\n',
        'name', name_,
        'extraTextFormatInfo', CEscape(text_format_decode_data.Data()));
    }
    printer->Print(
      '    GPBEnumDescriptor *expected = nil;\n'
      '    if (!atomic_compare_exchange_strong(&descriptor, &expected, worker)) {\n'
      '      [worker release];\n'
      '    }\n'
      '  }\n'
      '  return descriptor;\n'
      '}\n\n');
    
     public:
  virtual void FinishInitialization();
    
    /**
	@author AndreaCatania
*/
    
    /**
	@author AndreaCatania
*/
    
    class JointBullet : public ConstraintBullet {
    }
    
    /**
	@author AndreaCatania
*/
    
    
    {	memdelete(resource_loader_dds);
}

    
    #include 'image_etc.h'
#include 'texture_loader_pkm.h'
    
    #include 'networked_multiplayer_peer.h'
    
    template <class charT, class traits>
bool basic_regex_parser<charT, traits>::parse_perl_verb()
{
   if(++m_position == m_end)
   {
      // Rewind to start of (* sequence:
      --m_position;
      while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
      fail(regex_constants::error_perl_extension, m_position - m_base);
      return false;
   }
   switch(*m_position)
   {
   case 'F':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if((this->m_traits.syntax_type(*m_position) == regex_constants::syntax_close_mark) || match_verb('AIL'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         this->append_state(syntax_element_fail);
         return true;
      }
      break;
   case 'A':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('CCEPT'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         this->append_state(syntax_element_accept);
         return true;
      }
      break;
   case 'C':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('OMMIT'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         static_cast<re_commit*>(this->append_state(syntax_element_commit, sizeof(re_commit)))->action = commit_commit;
         this->m_pdata->m_disable_match_any = true;
         return true;
      }
      break;
   case 'P':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('RUNE'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         static_cast<re_commit*>(this->append_state(syntax_element_commit, sizeof(re_commit)))->action = commit_prune;
         this->m_pdata->m_disable_match_any = true;
         return true;
      }
      break;
   case 'S':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('KIP'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         static_cast<re_commit*>(this->append_state(syntax_element_commit, sizeof(re_commit)))->action = commit_skip;
         this->m_pdata->m_disable_match_any = true;
         return true;
      }
      break;
   case 'T':
      if(++m_position == m_end)
      {
         // Rewind to start of (* sequence:
         --m_position;
         while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
         fail(regex_constants::error_perl_extension, m_position - m_base);
         return false;
      }
      if(match_verb('HEN'))
      {
         if((m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_mark))
         {
            // Rewind to start of (* sequence:
            --m_position;
            while(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_open_mark) --m_position;
            fail(regex_constants::error_perl_extension, m_position - m_base);
            return false;
         }
         ++m_position;
         this->append_state(syntax_element_then);
         this->m_pdata->m_disable_match_any = true;
         return true;
      }
      break;
   }
   return false;
}
    
    template <bool is_pointer_type>
struct is_random_imp_selector
{
   template <class I>
   struct rebind
   {
      typedef is_random_imp<I> type;
   };
};
    
    template <class BidiIterator, class Allocator, class traits>
class perl_matcher
{
public:
   typedef typename traits::char_type char_type;
   typedef perl_matcher<BidiIterator, Allocator, traits> self_type;
   typedef bool (self_type::*matcher_proc_type)(void);
   typedef std::size_t traits_size_type;
   typedef typename is_byte<char_type>::width_type width_type;
   typedef typename regex_iterator_traits<BidiIterator>::difference_type difference_type;
   typedef match_results<BidiIterator, Allocator> results_type;
    }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::find_restart_word()
{
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable:4127)
#endif
   // do search optimised for word starts:
   const unsigned char* _map = re.get_map();
   if((m_match_flags & match_prev_avail) || (position != base))
      --position;
   else if(match_prefix())
      return true;
   do
   {
      while((position != last) && traits_inst.isctype(*position, m_word_mask))
         ++position;
      while((position != last) && !traits_inst.isctype(*position, m_word_mask))
         ++position;
      if(position == last)
         break;
    }
    }
    
    
    {   bool greedy = (rep->greedy) && (!(m_match_flags & regex_constants::match_any) || m_independent);   
   if(greedy)
   {
      // try and take the repeat if we can:
      if((next_count->get_count() < rep->max) && take_first)
      {
         if(take_second)
         {
            // store position in case we fail:
            push_alt(rep->alt.p);
         }
         // increase the counter:
         ++(*next_count);
         pstate = rep->next.p;
         return true;
      }
      else if(take_second)
      {
         pstate = rep->alt.p;
         return true;
      }
      return false; // can't take anything, fail...
   }
   else // non-greedy
   {
      // try and skip the repeat if we can:
      if(take_second)
      {
         if((next_count->get_count() < rep->max) && take_first)
         {
            // store position in case we fail:
            push_non_greedy_repeat(rep->next.p);
         }
         pstate = rep->alt.p;
         return true;
      }
      if((next_count->get_count() < rep->max) && take_first)
      {
         // increase the counter:
         ++(*next_count);
         pstate = rep->next.p;
         return true;
      }
   }
   return false;
#ifdef __BORLANDC__
#pragma option pop
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    
    {
    {}
} // namespace boost
    
    
    
    template<>
struct padding3<8>
{
   enum{
      padding_size = 8,
      padding_mask = 7
   };
};
    
    
    {} // namespace boost
    
    #if defined(BOOST_HAS_INT128)