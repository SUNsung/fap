
        
        #include 'bullet_types_converter.h'
    
    class RigidBodyBullet;
class SpaceBullet;
class btTypedConstraint;
    
    		if (depth >= -RAY_STABILITY_MARGIN)
			depth = 0;
    
    class RigidBodyBullet;
class btTypedConstraint;
    
    void unregister_csg_types() {
}

    
    #include 'register_types.h'
    
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
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_dot_repeat_slow()
{
   unsigned count = 0;
   const re_repeat* rep = static_cast<const re_repeat*>(pstate);
   re_syntax_base* psingle = rep->next.p;
   // match compulsary repeats first:
   while(count < rep->min)
   {
      pstate = psingle;
      if(!match_wild())
         return false;
      ++count;
   }
   bool greedy = (rep->greedy) && (!(m_match_flags & regex_constants::match_any) || m_independent);   
   if(greedy)
   {
      // repeat for as long as we can:
      while(count < rep->max)
      {
         pstate = psingle;
         if(!match_wild())
            break;
         ++count;
      }
      // remember where we got to if this is a leading repeat:
      if((rep->leading) && (count < rep->max))
         restart = position;
      // push backtrack info if available:
      if(count - rep->min)
         push_single_repeat(count, rep, position, saved_state_greedy_single_repeat);
      // jump to next state:
      pstate = rep->alt.p;
      return true;
   }
   else
   {
      // non-greedy, push state and return true if we can skip:
      if(count < rep->max)
         push_single_repeat(count, rep, position, saved_state_rep_slow_dot);
      pstate = rep->alt.p;
      return (position == last) ? (rep->can_be_null & mask_skip) : can_start(*position, rep->_map, mask_skip);
   }
}
    
       if(greedy)
      return backtrack_till_match(count - rep->min);
    
    
    {   enum restart_info
   {
      restart_any = 0,
      restart_word = 1,
      restart_line = 2,
      restart_buf = 3,
      restart_continue = 4,
      restart_lit = 5,
      restart_fixed_lit = 6, 
      restart_count = 7
   };
};
    
    template <class OutputIterator, class Results, class traits, class ForwardIter>
void basic_regex_formatter<OutputIterator, Results, traits, ForwardIter>::put(char_type c)
{
   // write a single character to output
   // according to which case translation mode we are in:
   switch(this->m_state)
   {
   case output_none:
      return;
   case output_next_lower:
      c = m_traits.tolower(c);
      this->m_state = m_restore_state;
      break;
   case output_next_upper:
      c = m_traits.toupper(c);
      this->m_state = m_restore_state;
      break;
   case output_lower:
      c = m_traits.tolower(c);
      break;
   case output_upper:
      c = m_traits.toupper(c);
      break;
   default:
      break;
   }
   *m_out = c;
   ++m_out;
}
    
    template <class BidirectionalIterator, 
          class charT = BOOST_DEDUCED_TYPENAME BOOST_REGEX_DETAIL_NS::regex_iterator_traits<BidirectionalIterator>::value_type,
          class traits = regex_traits<charT> >
class regex_iterator 
#ifndef BOOST_NO_STD_ITERATOR
   : public std::iterator<
         std::forward_iterator_tag, 
         match_results<BidirectionalIterator>,
         typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<BidirectionalIterator>::difference_type,
         const match_results<BidirectionalIterator>*,
         const match_results<BidirectionalIterator>& >         
#endif
{
private:
   typedef regex_iterator_implementation<BidirectionalIterator, charT, traits> impl;
   typedef shared_ptr<impl> pimpl;
public:
   typedef          basic_regex<charT, traits>                   regex_type;
   typedef          match_results<BidirectionalIterator>                    value_type;
   typedef typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<BidirectionalIterator>::difference_type 
                                                                            difference_type;
   typedef          const value_type*                                       pointer;
   typedef          const value_type&                                       reference; 
   typedef          std::forward_iterator_tag                               iterator_category;
   
   regex_iterator(){}
   regex_iterator(BidirectionalIterator a, BidirectionalIterator b, 
                  const regex_type& re, 
                  match_flag_type m = match_default)
                  : pdata(new impl(&re, b, m))
   {
      if(!pdata->init(a))
      {
         pdata.reset();
      }
   }
   regex_iterator(const regex_iterator& that)
      : pdata(that.pdata) {}
   regex_iterator& operator=(const regex_iterator& that)
   {
      pdata = that.pdata;
      return *this;
   }
   bool operator==(const regex_iterator& that)const
   { 
      if((pdata.get() == 0) || (that.pdata.get() == 0))
         return pdata.get() == that.pdata.get();
      return pdata->compare(*(that.pdata.get())); 
   }
   bool operator!=(const regex_iterator& that)const
   { return !(*this == that); }
   const value_type& operator*()const
   { return pdata->get(); }
   const value_type* operator->()const
   { return &(pdata->get()); }
   regex_iterator& operator++()
   {
      cow();
      if(0 == pdata->next())
      {
         pdata.reset();
      }
      return *this;
   }
   regex_iterator operator++(int)
   {
      regex_iterator result(*this);
      ++(*this);
      return result;
   }
private:
    }
    
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
    
    typedef regex_token_iterator<const char*> cregex_token_iterator;
typedef regex_token_iterator<std::string::const_iterator> sregex_token_iterator;
#ifndef BOOST_NO_WREGEX
typedef regex_token_iterator<const wchar_t*> wcregex_token_iterator;
typedef regex_token_iterator<std::wstring::const_iterator> wsregex_token_iterator;
#endif
    
    /// Root key to retrieve Kafka topic configurations.
extern const std::string kKafkaTopicParserRootKey;
    
    const std::string LoggerConfigParserPlugin::kLoggerKey{'logger'};
    
    #include <osquery/config.h>
    
    #include <gtest/gtest.h>
    
    namespace osquery {
    }
    
      /**
   * @brief Compute the final hash and return it's result
   *
   * @return The final hash value
   */
  std::string digest();
    
    std::shared_ptr<PlatformProcess> PlatformProcess::launchExtension(
    const std::string& exec_path,
    const std::string& extensions_socket,
    const std::string& extensions_timeout,
    const std::string& extensions_interval,
    bool verbose) {
  auto ext_pid = ::fork();
  if (ext_pid < 0) {
    return std::shared_ptr<PlatformProcess>();
  } else if (ext_pid == 0) {
    setEnvVar('OSQUERY_EXTENSION', std::to_string(::getpid()).c_str());
    }
    }
    
    void Initializer::platformSetup() {
  // Initialize the COM libraries utilized by Windows WMI calls.
  auto ret = ::CoInitializeEx(0, COINIT_MULTITHREADED);
  if (ret != S_OK) {
    ::CoUninitialize();
  }
}
    
    ColumnFamilyData* ColumnFamilySet::GetColumnFamily(const std::string& name)
    const {
  auto cfd_iter = column_families_.find(name);
  if (cfd_iter != column_families_.end()) {
    auto cfd = GetColumnFamily(cfd_iter->second);
    assert(cfd != nullptr);
    return cfd;
  } else {
    return nullptr;
  }
}
    
      using DBImpl::Put;
  virtual Status Put(const WriteOptions& /*options*/,
                     ColumnFamilyHandle* /*column_family*/,
                     const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Merge;
  virtual Status Merge(const WriteOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/,
                       const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Delete;
  virtual Status Delete(const WriteOptions& /*options*/,
                        ColumnFamilyHandle* /*column_family*/,
                        const Slice& /*key*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  virtual Status Write(const WriteOptions& /*options*/,
                       WriteBatch* /*updates*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::CompactRange;
  virtual Status CompactRange(const CompactRangeOptions& /*options*/,
                              ColumnFamilyHandle* /*column_family*/,
                              const Slice* /*begin*/,
                              const Slice* /*end*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
    
      // Getters
  const Slice& key() const { return key_; }
  const Slice& value() const { return value_; }
  const Status& status() const { return status_; }
  const ParsedInternalKey& ikey() const { return ikey_; }
  bool Valid() const { return valid_; }
  const Slice& user_key() const { return current_user_key_; }
  const CompactionIterationStats& iter_stats() const { return iter_stats_; }
    
    TEST_P(DBTestCompactionFilterWithCompactParam,
       CompactionFilterWithValueChange) {
  Options options = CurrentOptions();
  options.num_levels = 3;
  options.compaction_filter_factory = std::make_shared<ChangeFilterFactory>();
  CreateAndReopenWithCF({'pikachu'}, options);
    }
    
      ret.push_back(CurrentFileName(''));
  ret.push_back(DescriptorFileName('', versions_->manifest_file_number()));
  ret.push_back(OptionsFileName('', versions_->options_file_number()));
    
      uint64_t single_refill_amount =
      delayed_write_rate_ * kRefillInterval / kMicrosPerSecond;
  if (bytes_left_ + single_refill_amount >= num_bytes) {
    // Wait until a refill interval
    // Never trigger expire for less than one refill interval to avoid to get
    // time.
    bytes_left_ = bytes_left_ + single_refill_amount - num_bytes;
    last_refill_time_ = time_now + kRefillInterval;
    return kRefillInterval + sleep_debt;
  }
    
    #endif  // !defined(ROCKSDB_LITE) && !defined(OS_WIN)

    
      // Read a key OUTSIDE this transaction. Does not affect txn.
  s = db->Get(read_options, 'abc', &value);
    
      void operator()(FunctionRef<void(ValueType)> f) const {
    func_(f);
  }
    
        arguments = getStr(note, pos, remaining);
    align4Bytes(pos);
    
    #pragma once
    
    /*
 * Decode a single unicode code point from UTF-8 byte sequence.
 */
char32_t utf8ToCodePoint(
    const unsigned char*& p,
    const unsigned char* const e,
    bool skipOnError);
    
      // Test a non-canonical value with tv_nsec larger than 1 second
  ts.tv_sec = 5;
  ts.tv_nsec = 3219876543;
  // Beware about using std::chrono_literals suffixes with very literals:
  // older versions of GCC are buggy and would truncate these to 32-bits.
  EXPECT_EQ(8219876543LL, to<nanoseconds>(ts).count());
  EXPECT_EQ(8219876us, to<microseconds>(ts));
  EXPECT_EQ(8219ms, to<milliseconds>(ts));
  EXPECT_EQ(8s, to<seconds>(ts));
  EXPECT_EQ(
      createTimePoint<system_clock>(nanoseconds(8219876543LL)),
      to<system_clock::time_point>(ts));
  EXPECT_EQ(
      createTimePoint<steady_clock>(nanoseconds(8219876543LL)),
      to<steady_clock::time_point>(ts));
    
    /**
 * Interface for Zlib-specific codec initialization.
 */
namespace folly {
namespace io {
namespace zlib {
    }
    }
    }
    
        oldptr = takeOwnedBase(success);
    if (!owners_eq(oldptr, CountedDetail::get_counted_base(expected))) {
      expected = get_shared_ptr(oldptr, false);
      release_external(newptr);
      return false;
    }
    expectedptr = oldptr; // Need oldptr to release if failed
    if (ptr_.compare_exchange_weak(expectedptr, newptr, success, failure)) {
      if (oldptr.get()) {
        release_external(oldptr, -1);
      }
      return true;
    } else {
      if (oldptr.get()) {
        expected = get_shared_ptr(oldptr, false);
      } else {
        expected = SharedPtr(nullptr);
      }
      release_external(newptr);
      return false;
    }
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, desired, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    return compare_exchange_weak(expected, desired, success, failure);
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_strong(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto local_expected = expected;
    do {
      if (compare_exchange_weak(expected, n, success, failure)) {
        return true;
      }
    } while (local_expected == expected);