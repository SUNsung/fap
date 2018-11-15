
        
        #else  // !defined(__AVX__)
// Implementation for avx capable archs.
#include <immintrin.h>
#include <cstdint>
#include 'dotproductavx.h'
    
      // Check if part is an inline equation zone. This should be called after we
  // identified the seed regions.
  bool IsInline(const bool search_bottom,
                const int textPartsLineSpacing,
                ColPartition* part);
    
    /**
 * Returns the bounding rectangle of the current object at the given level in
 * coordinates of the original image.
 * See comment on coordinate system above.
 * Returns false if there is no such object at the current position.
 */
bool PageIterator::BoundingBox(PageIteratorLevel level,
                               int* left, int* top,
                               int* right, int* bottom) const {
  return BoundingBox(level, 0, left, top, right, bottom);
}
    
    struct BlobData {
  BlobData() : blob(nullptr), choices(nullptr) {}
  BlobData(int index, Tesseract* tess, const WERD_RES& word)
    : blob(word.chopped_word->blobs[index]),
      tesseract(tess),
      choices(&(*word.ratings)(index, index)) {}
    }
    
    
    {  svMenuRoot->BuildMenu(sv, false);
}
    
     private:
  // Gets the up to the first 3 prefixes from s (split by _).
  // For example, tesseract_foo_bar will be split into tesseract,foo and bar.
  void GetPrefixes(const char* s, STRING* level_one,
                   STRING* level_two, STRING* level_three);
    
    namespace boost{
    }
    
    #ifdef __cplusplus
#  include <boost/cstdint.hpp>
#endif
    
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
bool perl_matcher<BidiIterator, Allocator, traits>::match_word_end()
{
   if((position == backstop) && ((m_match_flags & match_prev_avail) == 0))
      return false;  // start of buffer can't be end of word
   BidiIterator t(position);
   --t;
   if(traits_inst.isctype(*t, m_word_mask) == false)
      return false;  // previous character wasn't a word character
    }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_endmark()
{
   int index = static_cast<const re_brace*>(pstate)->index;
   icase = static_cast<const re_brace*>(pstate)->icase;
   if(index > 0)
   {
      if((m_match_flags & match_nosubs) == 0)
      {
         m_presult->set_second(position, index);
      }
      if(!recursion_stack.empty())
      {
         if(index == recursion_stack.back().idx)
         {
            recursion_info<results_type> saved = recursion_stack.back();
            recursion_stack.pop_back();
            pstate = saved.preturn_address;
            repeater_count<BidiIterator>* saved_count = next_count;
            next_count = saved.repeater_stack;
            *m_presult = saved.results;
            if(!match_all_states())
            {
               recursion_stack.push_back(saved);
               next_count = saved_count;
               return false;
            }
         }
      }
   }
   else if((index < 0) && (index != -4))
   {
      // matched forward lookahead:
      pstate = 0;
      return true;
   }
   pstate = pstate ? pstate->next.p : 0;
   return true;
}
    
    typedef match_results<const char*> cmatch;
typedef match_results<std::string::const_iterator> smatch;
#ifndef BOOST_NO_WREGEX
typedef match_results<const wchar_t*> wcmatch;
typedef match_results<std::wstring::const_iterator> wsmatch;
#endif
    
    template <class OutputIterator, class Iterator, class Allocator, class Functor>
inline OutputIterator regex_format(OutputIterator out,
                          const match_results<Iterator, Allocator>& m,
                          Functor fmt,
                          match_flag_type flags = format_all
                         )
{
   return m.format(out, fmt, flags);
}
    
    
    
    #ifndef BOOST_REGEX_V4_REGEX_MERGE_HPP
#define BOOST_REGEX_V4_REGEX_MERGE_HPP
    
    
    {
    {        BOOST_DEFAULTED_FUNCTION(aligned(), {})
        BOOST_FORCEINLINE BOOST_CONSTEXPR explicit aligned(type v) BOOST_NOEXCEPT : value(v) {}
    };
};