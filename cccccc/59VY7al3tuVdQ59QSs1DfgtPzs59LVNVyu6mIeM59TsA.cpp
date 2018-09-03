
        
        // Asserts that a given statement causes the program to exit, either by
// explicitly exiting with a nonzero exit code or being killed by a
// signal, and emitting error output that matches regex.
# define ASSERT_DEATH(statement, regex) \
    ASSERT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
      // We'll hold the text streamed to this object here.
  const internal::scoped_ptr< ::std::stringstream> ss_;
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8>
class ValueArray8 {
 public:
  ValueArray8(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7,
      T8 v8) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8) {}
    }
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41>
struct Templates41 {
  typedef TemplateSel<T1> Head;
  typedef Templates40<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41> Tail;
};
    
    // Tests the Set method.
TEST(MyString, Set) {
  MyString s;
    }
    
    // Computes part of matrix.vector v = Wu. Computes N=8 results.
// For details see PartialMatrixDotVector64 with N=8.
static void PartialMatrixDotVector8(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, num_out, v);
}
#else
namespace tesseract {
#endif  // __AVX2__
    }
    
    namespace tesseract {
    }
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    
    {  GenericVector<ColPartition*> new_seeds;
  for (int i = 0; i < cp_seeds_.size(); ++i) {
    ColPartition* part = cp_seeds_[i];
    // If we sort cp_seeds_ from top to bottom, then for each cp_seeds_, we look
    // for its top neighbors, so that if two/more inline regions are connected
    // to each other, then we will identify the top one, and then use it to
    // identify the bottom one.
    if (IsInline(!top_to_bottom, textparts_linespacing, part)) {
      part->set_type(PT_INLINE_EQUATION);
    } else {
      new_seeds.push_back(part);
    }
  }
  cp_seeds_ = new_seeds;
}
    
    // Find all editable parameters used within tesseract and create a
// SVMenuNode tree from it.
// TODO (wanke): This is actually sort of hackish.
SVMenuNode* ParamsEditor::BuildListOfAllLeaves(tesseract::Tesseract *tess) {
  SVMenuNode* mr = new SVMenuNode();
  ParamContent_LIST vclist;
  ParamContent_IT vc_it(&vclist);
  // Amount counts the number of entries for a specific char*.
  // TODO(rays) get rid of the use of std::map.
  std::map<const char*, int> amount;
    }
    
     private:
  // The unique ID of this VC object.
  int my_id_;
  // Whether the parameter was changed_ and thus needs to be rewritten.
  bool changed_;
  // The actual ParamType of this VC object.
  ParamType param_type_;
    
    // A small event handler class to process incoming events to
// this window.
class PGEventHandler : public SVEventHandler {
  public:
   PGEventHandler(tesseract::Tesseract* tess) : tess_(tess) {
   }
   void Notify(const SVEvent* sve);
  private:
    tesseract::Tesseract* tess_;
};
    
    
    {}  // namespace mxnet
    
    // DO_BIND_DISPATCH comes from static_operator_common.h
Operator *CaffeOpProp::CreateOperatorEx(Context ctx, std::vector<TShape> *in_shape,
                                     std::vector<int> *in_type) const {
  std::vector<int> out_type, aux_type;
  std::vector<TShape> out_shape, aux_shape;
  out_type.resize(this->ListOutputs().size());
  out_shape.resize(this->ListOutputs().size());
  aux_type.resize(this->ListAuxiliaryStates().size());
  aux_shape.resize(this->ListAuxiliaryStates().size());
  CHECK(InferType(in_type, &out_type, &aux_type));
  CHECK(InferShape(in_shape, &out_shape, &aux_shape));
  DO_BIND_DISPATCH(CreateOp, param_, (*in_type)[0]);
}
    
    /*!
 * Copyright (c) 2015 by Contributors
 * \file threaded_engine_pooled.cc
 * \brief Pooled threaded engine
 * \author Yutian Li
 */
#include <dmlc/base.h>
#include <dmlc/logging.h>
#include <dmlc/concurrency.h>
#include <cassert>
#include <utility>
#include './threaded_engine.h'
#include './thread_pool.h'
#include './stream_manager.h'
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    template <class charT, class traits>
digraph<charT> basic_regex_parser<charT, traits>::get_next_set_literal(basic_char_set<charT, traits>& char_set)
{
   digraph<charT> result;
   switch(this->m_traits.syntax_type(*m_position))
   {
   case regex_constants::syntax_dash:
      if(!char_set.empty())
      {
         // see if we are at the end of the set:
         if((++m_position == m_end) || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_set))
         {
            fail(regex_constants::error_range, m_position - m_base);
            return result;
         }
         --m_position;
      }
      result.first = *m_position++;
      return result;
   case regex_constants::syntax_escape:
      // check to see if escapes are supported first:
      if(this->flags() & regex_constants::no_escape_in_lists)
      {
         result = *m_position++;
         break;
      }
      ++m_position;
      result = unescape_character();
      break;
   case regex_constants::syntax_open_set:
   {
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_collate, m_position - m_base);
         return result;
      }
      if(this->m_traits.syntax_type(*m_position) != regex_constants::syntax_dot)
      {
         --m_position;
         result.first = *m_position;
         ++m_position;
         return result;
      }
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_collate, m_position - m_base);
         return result;
      }
      const charT* name_first = m_position;
      // skip at least one character, then find the matching ':]'
      if(m_end == ++m_position)
      {
         fail(regex_constants::error_collate, name_first - m_base);
         return result;
      }
      while((m_position != m_end) 
         && (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_dot)) 
         ++m_position;
      const charT* name_last = m_position;
      if(m_end == m_position)
      {
         fail(regex_constants::error_collate, name_first - m_base);
         return result;
      }
      if((m_end == ++m_position) 
         || (this->m_traits.syntax_type(*m_position) != regex_constants::syntax_close_set))
      {
         fail(regex_constants::error_collate, name_first - m_base);
         return result;
      }
      ++m_position;
      string_type s = this->m_traits.lookup_collatename(name_first, name_last);
      if(s.empty() || (s.size() > 2))
      {
         fail(regex_constants::error_collate, name_first - m_base);
         return result;
      }
      result.first = s[0];
      if(s.size() > 1)
         result.second = s[1];
      else
         result.second = 0;
      return result;
   }
   default:
      result = *m_position++;
   }
   return result;
}
    
    #endif
    
    template <class BidiIterator, class Allocator>
void BOOST_REGEX_CALL match_results<BidiIterator, Allocator>::maybe_assign(const match_results<BidiIterator, Allocator>& m)
{
   if(m_is_singular)
   {
      *this = m;
      return;
   }
   const_iterator p1, p2;
   p1 = begin();
   p2 = m.begin();
   //
   // Distances are measured from the start of *this* match, unless this isn't
   // a valid match in which case we use the start of the whole sequence.  Note that
   // no subsequent match-candidate can ever be to the left of the first match found.
   // This ensures that when we are using bidirectional iterators, that distances 
   // measured are as short as possible, and therefore as efficient as possible
   // to compute.  Finally note that we don't use the 'matched' data member to test
   // whether a sub-expression is a valid match, because partial matches set this
   // to false for sub-expression 0.
   //
   BidiIterator l_end = this->suffix().second;
   BidiIterator l_base = (p1->first == l_end) ? this->prefix().first : (*this)[0].first;
   difference_type len1 = 0;
   difference_type len2 = 0;
   difference_type base1 = 0;
   difference_type base2 = 0;
   std::size_t i;
   for(i = 0; i < size(); ++i, ++p1, ++p2)
   {
      //
      // Leftmost takes priority over longest; handle special cases
      // where distances need not be computed first (an optimisation
      // for bidirectional iterators: ensure that we don't accidently
      // compute the length of the whole sequence, as this can be really
      // expensive).
      //
      if(p1->first == l_end)
      {
         if(p2->first != l_end)
         {
            // p2 must be better than p1, and no need to calculate
            // actual distances:
            base1 = 1;
            base2 = 0;
            break;
         }
         else
         {
            // *p1 and *p2 are either unmatched or match end-of sequence,
            // either way no need to calculate distances:
            if((p1->matched == false) && (p2->matched == true))
               break;
            if((p1->matched == true) && (p2->matched == false))
               return;
            continue;
         }
      }
      else if(p2->first == l_end)
      {
         // p1 better than p2, and no need to calculate distances:
         return;
      }
      base1 = ::boost::BOOST_REGEX_DETAIL_NS::distance(l_base, p1->first);
      base2 = ::boost::BOOST_REGEX_DETAIL_NS::distance(l_base, p2->first);
      BOOST_ASSERT(base1 >= 0);
      BOOST_ASSERT(base2 >= 0);
      if(base1 < base2) return;
      if(base2 < base1) break;
    }
    }
    
    
    {   ~mem_block_cache()
   {
      while(next)
      {
         mem_block_node* old = next;
         next = next->next;
         ::operator delete(old);
      }
   }
   void* get()
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
     if(next)
      {
         mem_block_node* result = next;
         next = next->next;
         --cached_blocks;
         return result;
      }
      return ::operator new(BOOST_REGEX_BLOCKSIZE);
   }
   void put(void* p)
   {
#ifdef BOOST_HAS_THREADS
      boost::static_mutex::scoped_lock g(mut);
#endif
      if(cached_blocks >= BOOST_REGEX_MAX_CACHE_BLOCKS)
      {
         ::operator delete(p);
      }
      else
      {
         mem_block_node* old = static_cast<mem_block_node*>(p);
         old->next = next;
         next = old;
         ++cached_blocks;
      }
   }
};
    
          //
      // options specific to basic group:
      //
      no_char_classes = 1 << 8,                   // [[:CLASS:]] not allowed
      no_intervals = 1 << 9,                      // {x,y} not allowed
      bk_plus_qm = 1 << 10,                       // uses \+ and \?
      bk_vbar = 1 << 11,                          // use \| for alternatives
      emacs_ex = 1 << 12,                         // enables emacs extensions
    
    #endif
    
    template <class Predicate, class ST, class SA, class charT, class traits>
inline unsigned int regex_grep(Predicate foo, const std::basic_string<charT, ST, SA>& s, 
                 const basic_regex<charT, traits>& e, 
                 match_flag_type flags = match_default)
{
   return regex_grep(foo, s.begin(), s.end(), e, flags);
}
#else  // partial specialisation
inline unsigned int regex_grep(bool (*foo)(const cmatch&), const char* str, 
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, str, str + regex::traits_type::length(str), e, flags);
}
#ifndef BOOST_NO_WREGEX
inline unsigned int regex_grep(bool (*foo)(const wcmatch&), const wchar_t* str, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, str, str + wregex::traits_type::length(str), e, flags);
}
#endif
inline unsigned int regex_grep(bool (*foo)(const match_results<std::string::const_iterator>&), const std::string& s,
                        const regex& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, s.begin(), s.end(), e, flags);
}
#if !defined(BOOST_NO_WREGEX)
inline unsigned int regex_grep(bool (*foo)(const match_results<std::basic_string<wchar_t>::const_iterator>&), 
                     const std::basic_string<wchar_t>& s, 
                        const wregex& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, s.begin(), s.end(), e, flags);
}
#endif
#endif
    
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
    
    #endif   // BOOST_REGEX_MATCH_HPP
    
    

    
    template <class BidirectionalIterator, 
          class charT = BOOST_DEDUCED_TYPENAME BOOST_REGEX_DETAIL_NS::regex_iterator_traits<BidirectionalIterator>::value_type,
          class traits = regex_traits<charT> >
class regex_token_iterator 
#ifndef BOOST_NO_STD_ITERATOR
   : public std::iterator<
         std::forward_iterator_tag, 
         sub_match<BidirectionalIterator>,
         typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<BidirectionalIterator>::difference_type,
         const sub_match<BidirectionalIterator>*,
         const sub_match<BidirectionalIterator>& >         
#endif
{
private:
   typedef regex_token_iterator_implementation<BidirectionalIterator, charT, traits> impl;
   typedef shared_ptr<impl> pimpl;
public:
   typedef          basic_regex<charT, traits>                   regex_type;
   typedef          sub_match<BidirectionalIterator>                        value_type;
   typedef typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<BidirectionalIterator>::difference_type 
                                                                            difference_type;
   typedef          const value_type*                                       pointer;
   typedef          const value_type&                                       reference; 
   typedef          std::forward_iterator_tag                               iterator_category;
   
   regex_token_iterator(){}
   regex_token_iterator(BidirectionalIterator a, BidirectionalIterator b, const regex_type& re, 
                        int submatch = 0, match_flag_type m = match_default)
                        : pdata(new impl(&re, b, submatch, m))
   {
      if(!pdata->init(a))
         pdata.reset();
   }
   regex_token_iterator(BidirectionalIterator a, BidirectionalIterator b, const regex_type& re, 
                        const std::vector<int>& submatches, match_flag_type m = match_default)
                        : pdata(new impl(&re, b, submatches, m))
   {
      if(!pdata->init(a))
         pdata.reset();
   }
#if !BOOST_WORKAROUND(__HP_aCC, < 60700)
#if (BOOST_WORKAROUND(__BORLANDC__, >= 0x560) && BOOST_WORKAROUND(__BORLANDC__, BOOST_TESTED_AT(0x570)))\
      || BOOST_WORKAROUND(__MWERKS__, BOOST_TESTED_AT(0x3003)) \
      || BOOST_WORKAROUND(__HP_aCC, < 60700)
   template <class T>
   regex_token_iterator(BidirectionalIterator a, BidirectionalIterator b, const regex_type& re,
                        const T& submatches, match_flag_type m = match_default)
                        : pdata(new impl(&re, b, submatches, m))
   {
      if(!pdata->init(a))
         pdata.reset();
   }
#else
   template <std::size_t N>
   regex_token_iterator(BidirectionalIterator a, BidirectionalIterator b, const regex_type& re,
                        const int (&submatches)[N], match_flag_type m = match_default)
                        : pdata(new impl(&re, b, submatches, m))
   {
      if(!pdata->init(a))
         pdata.reset();
   }
#endif
#endif
   regex_token_iterator(const regex_token_iterator& that)
      : pdata(that.pdata) {}
   regex_token_iterator& operator=(const regex_token_iterator& that)
   {
      pdata = that.pdata;
      return *this;
   }
   bool operator==(const regex_token_iterator& that)const
   { 
      if((pdata.get() == 0) || (that.pdata.get() == 0))
         return pdata.get() == that.pdata.get();
      return pdata->compare(*(that.pdata.get())); 
   }
   bool operator!=(const regex_token_iterator& that)const
   { return !(*this == that); }
   const value_type& operator*()const
   { return pdata->get(); }
   const value_type* operator->()const
   { return &(pdata->get()); }
   regex_token_iterator& operator++()
   {
      cow();
      if(0 == pdata->next())
      {
         pdata.reset();
      }
      return *this;
   }
   regex_token_iterator operator++(int)
   {
      regex_token_iterator result(*this);
      ++(*this);
      return result;
   }
private:
    }
    
    #ifndef BOOST_REGEX_CONFIG_HPP
#include <boost/regex/config.hpp>
#endif
#ifndef BOOST_REGEX_WORKAROUND_HPP
#include <boost/regex/v4/regex_workaround.hpp>
#endif
#ifndef BOOST_REGEX_SYNTAX_TYPE_HPP
#include <boost/regex/v4/syntax_type.hpp>
#endif
#ifndef BOOST_REGEX_ERROR_TYPE_HPP
#include <boost/regex/v4/error_type.hpp>
#endif
#ifndef BOOST_REGEX_TRAITS_DEFAULTS_HPP_INCLUDED
#include <boost/regex/v4/regex_traits_defaults.hpp>
#endif
#ifndef BOOST_NO_STD_LOCALE
#  ifndef BOOST_CPP_REGEX_TRAITS_HPP_INCLUDED
#     include <boost/regex/v4/cpp_regex_traits.hpp>
#  endif
#endif
#if !BOOST_WORKAROUND(__BORLANDC__, < 0x560)
#  ifndef BOOST_C_REGEX_TRAITS_HPP_INCLUDED
#     include <boost/regex/v4/c_regex_traits.hpp>
#  endif
#endif
#if defined(_WIN32) && !defined(BOOST_REGEX_NO_W32)
#  ifndef BOOST_W32_REGEX_TRAITS_HPP_INCLUDED
#     include <boost/regex/v4/w32_regex_traits.hpp>
#  endif
#endif
#ifndef BOOST_REGEX_FWD_HPP_INCLUDED
#include <boost/regex_fwd.hpp>
#endif
    
    namespace rocksdb {
    }
    
      virtual Status DisableFileDeletions() override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  virtual Status EnableFileDeletions(bool /*force*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  virtual Status GetLiveFiles(std::vector<std::string>&,
                              uint64_t* /*manifest_file_size*/,
                              bool /*flush_memtable*/ = true) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Flush;
  virtual Status Flush(const FlushOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DB::IngestExternalFile;
  virtual Status IngestExternalFile(
      ColumnFamilyHandle* /*column_family*/,
      const std::vector<std::string>& /*external_files*/,
      const IngestExternalFileOptions& /*ingestion_options*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
    
      InternalIterator* input_;
  const Comparator* cmp_;
  MergeHelper* merge_helper_;
  const std::vector<SequenceNumber>* snapshots_;
  const SequenceNumber earliest_write_conflict_snapshot_;
  const SnapshotChecker* const snapshot_checker_;
  Env* env_;
  bool report_detailed_time_;
  bool expect_valid_internal_key_;
  RangeDelAggregator* range_del_agg_;
  std::unique_ptr<CompactionProxy> compaction_;
  const CompactionFilter* compaction_filter_;
  const std::atomic<bool>* shutting_down_;
  const SequenceNumber preserve_deletes_seqnum_;
  bool bottommost_level_;
  bool valid_ = false;
  bool visible_at_tip_;
  SequenceNumber earliest_snapshot_;
  SequenceNumber latest_snapshot_;
  bool ignore_snapshots_;
    
    #include 'rocksdb/env.h'
#include 'util/filename.h'
    
    
    {  // return true if writes with this callback can be batched with other writes
  virtual bool AllowWriteBatching() = 0;
};
    
    #include <atomic>
#include <memory>
#include 'rocksdb/rate_limiter.h'
    
    
    {  // the current size of the file
  tOffset fileSize() {
    ROCKS_LOG_DEBUG(mylog, '[hdfs] HdfsReadableFile fileSize %s\n',
                    filename_.c_str());
    hdfsFileInfo* pFileInfo = hdfsGetPathInfo(fileSys_, filename_.c_str());
    tOffset size = 0L;
    if (pFileInfo != nullptr) {
      size = pFileInfo->mSize;
      hdfsFreeFileInfo(pFileInfo, 1);
    } else {
      throw HdfsFatalException('fileSize on unknown file ' + filename_);
    }
    return size;
  }
};
    
          // If this write would cross a boundary of kDebugLogChunkSize
      // space, pre-allocate more space to avoid overly large
      // allocations from filesystem allocsize options.
      const size_t log_size = log_size_;
      const size_t last_allocation_chunk =
        ((kDebugLogChunkSize - 1 + log_size) / kDebugLogChunkSize);
      const size_t desired_allocation_chunk =
        ((kDebugLogChunkSize - 1 + log_size + write_size) /
           kDebugLogChunkSize);
      if (last_allocation_chunk != desired_allocation_chunk) {
        fallocate(
            fd_, FALLOC_FL_KEEP_SIZE, 0,
            static_cast<off_t>(desired_allocation_chunk * kDebugLogChunkSize));
      }
#endif
    
    class DHTMessageCallback;
    
    namespace aria2 {
    }
    
    namespace aria2 {
    }
    
    class DHTTaskFactory {
public:
  virtual ~DHTTaskFactory() = default;
    }
    
    bool DHTUnknownMessage::isReply() const { return false; }