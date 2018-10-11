
        
        void SILLayout::Profile(llvm::FoldingSetNodeID &id,
                        CanGenericSignature Generics,
                        ArrayRef<SILField> Fields) {
  id.AddPointer(Generics.getPointer());
  for (auto &field : Fields) {
    id.AddPointer(field.getLoweredType().getPointer());
    id.AddBoolean(field.isMutable());
  }
}

    
        llvm::errs() << '\n=====================================================\n';
    SyntaxNode->dump(llvm::errs());
    llvm::errs() << '\n\n---- Maps to semantic node: ----\n\n';
    
    
    {
    {  explicit DefaultCache(CacheImpl::CallBacks CBs) : CBs(std::move(CBs)) { }
};
} // end anonymous namespace
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
          if (node->Further) {
        // Further indent, and include the line to the right child if
        // there is one.
        IndentScope is(this, node->Right ? '|   ' : '    ');
        print(node->Further, ChildKind::Further);
      }
    
      IsFirstLine = true;
  for (auto &Line : Lines) {
    if (!IsFirstLine) {
      Line = Line.drop_front(WhitespaceToTrim);
    }
    IsFirstLine = false;
  }
    
      ConvertUTF8toUTF32(&SourceNext, SourceStart + S.size(), &TargetStart, C + 1,
                     llvm::lenientConversion);
  if (TargetStart == C) {
    // The source string contains an ill-formed subsequence at the end.
    return S;
  }
    
    
    {
    {      len1 = ::boost::BOOST_REGEX_DETAIL_NS::distance((BidiIterator)p1->first, (BidiIterator)p1->second);
      len2 = ::boost::BOOST_REGEX_DETAIL_NS::distance((BidiIterator)p2->first, (BidiIterator)p2->second);
      BOOST_ASSERT(len1 >= 0);
      BOOST_ASSERT(len2 >= 0);
      if((len1 != len2) || ((p1->matched == false) && (p2->matched == true)))
         break;
      if((p1->matched == true) && (p2->matched == false))
         return;
   }
   if(i == size())
      return;
   if(base2 < base1)
      *this = m;
   else if((len2 > len1) || ((p1->matched == false) && (p2->matched == true)) )
      *this = m;
}
    
    struct mem_block_cache
{
   // this member has to be statically initialsed:
   mem_block_node* next;
   unsigned cached_blocks;
#ifdef BOOST_HAS_THREADS
   boost::static_mutex mut;
#endif
    }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::find_imp()
{
   static matcher_proc_type const s_find_vtable[7] = 
   {
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_any,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_word,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_line,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_buf,
      &perl_matcher<BidiIterator, Allocator, traits>::match_prefix,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_lit,
      &perl_matcher<BidiIterator, Allocator, traits>::find_restart_lit,
   };
    }
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_char_repeat()
{
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable:4127)
#endif
#ifdef __BORLANDC__
#pragma option push -w-8008 -w-8066 -w-8004
#endif
   const re_repeat* rep = static_cast<const re_repeat*>(pstate);
   BOOST_ASSERT(1 == static_cast<const re_literal*>(rep->next.p)->length);
   const char_type what = *reinterpret_cast<const char_type*>(static_cast<const re_literal*>(rep->next.p) + 1);
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
      while((position != end) && (traits_inst.translate(*position, icase) == what))
      {
         ++position;
      }
      count = (unsigned)::boost::BOOST_REGEX_DETAIL_NS::distance(origin, position);
   }
   else
   {
      while((count < desired) && (position != last) && (traits_inst.translate(*position, icase) == what))
      {
         ++position;
         ++count;
      }
   }
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
    
    struct unary_binary_ternary
{
    typedef unary_type (*unary_fun)(any_type);
    typedef binary_type (*binary_fun)(any_type, any_type);
    typedef ternary_type (*ternary_fun)(any_type, any_type, any_type);
    operator unary_fun();
    operator binary_fun();
    operator ternary_fun();
};
    
       pimpl pdata;
    
    #endif  // BOOST_REGEX_V4_REGEX_REPLACE_HPP
    
    #include <cstdio>
#include <cstring>
#include <string>
#include <istream>
#include <fstream>
    
    #if DMLC_ENABLE_STD_THREAD
#include <dmlc/concurrency.h>
#include <thread>
#endif
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }