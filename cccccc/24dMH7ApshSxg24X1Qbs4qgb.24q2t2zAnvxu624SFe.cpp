
        
        
    {  Corrupt(kTableFile, -2000, 500);
  Reopen();
  Check(5000, 9999);
}
    
    Status DBImpl::RecoverLogFile(uint64_t log_number, bool last_log,
                              bool* save_manifest, VersionEdit* edit,
                              SequenceNumber* max_sequence) {
  struct LogReporter : public log::Reader::Reporter {
    Env* env;
    Logger* info_log;
    const char* fname;
    Status* status;  // null if options_.paranoid_checks==false
    virtual void Corruption(size_t bytes, const Status& s) {
      Log(info_log, '%s%s: dropping %d bytes; %s',
          (this->status == nullptr ? '(ignoring error) ' : ''),
          fname, static_cast<int>(bytes), s.ToString().c_str());
      if (this->status != nullptr && this->status->ok()) *this->status = s;
    }
  };
    }
    
      // Compact the in-memory write buffer to disk.  Switches to a new
  // log-file/memtable and writes a new descriptor iff successful.
  // Errors are recorded in bg_error_.
  void CompactMemTable() EXCLUSIVE_LOCKS_REQUIRED(mutex_);
    
      const Comparator* user_comparator() const { return user_comparator_; }
    
      ASSERT_TRUE(ParseInternalKey(in, &decoded));
  ASSERT_EQ(key, decoded.user_key.ToString());
  ASSERT_EQ(seq, decoded.sequence);
  ASSERT_EQ(vt, decoded.type);
    
    
    {  ASSERT_EQ('correct', Read());
  ASSERT_EQ('EOF', Read());
  const size_t dropped = DroppedBytes();
  ASSERT_LE(dropped, 2*kBlockSize + 100);
  ASSERT_GE(dropped, 2*kBlockSize);
}
    
        // Copy data.
    Iterator* iter = NewTableIterator(t.meta);
    int counter = 0;
    for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
      builder->Add(iter->key(), iter->value());
      counter++;
    }
    delete iter;
    
    template BOOST_REGEX_DECL basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >& 
   basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >::do_assign(
      const BOOST_REGEX_CHAR_T* p1, 
      const BOOST_REGEX_CHAR_T* p2, 
      flag_type f);
template BOOST_REGEX_DECL basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >::locale_type BOOST_REGEX_CALL 
   basic_regex<BOOST_REGEX_CHAR_T BOOST_REGEX_TRAITS_T >::imbue(locale_type l);
    
    #ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::unwind_assertion(bool r)
{
   saved_assertion<BidiIterator>* pmp = static_cast<saved_assertion<BidiIterator>*>(m_backup_state);
   pstate = pmp->pstate;
   position = pmp->position;
   bool result = (r == pmp->positive);
   m_recursive_result = pmp->positive ? r : !r;
   boost::BOOST_REGEX_DETAIL_NS::inplace_destroy(pmp++);
   m_backup_state = pmp;
   m_unwound_lookahead = true;
   return !result; // return false if the assertion was matched to stop search.
}
    
    template <class T>
bool concrete_protected_call<T>::call()const
{
   return (obj->*proc)();
}
    
    
    
    namespace detail {
/*! \brief Implementation of gradient statistics pair. Template specialisation
 * may be used to overload different gradients types e.g. low precision, high
 * precision, integer, floating point. */
template <typename T>
class GradientPairInternal {
  /*! \brief gradient statistics */
  T grad_;
  /*! \brief second order gradient statistics */
  T hess_;
    }
    }
    
    // implementing configure.
template<typename PairIter>
inline void Learner::Configure(PairIter begin, PairIter end) {
  std::vector<std::pair<std::string, std::string> > vec(begin, end);
  this->Configure(vec);
}
    
    namespace xgboost {
/*!
 * \brief interface of linear updater
 */
class LinearUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~LinearUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(
      const std::vector<std::pair<std::string, std::string> >& args) = 0;
    }
    }
    
      /**
   * \brief Generate batch predictions for a given feature matrix. May use
   * cached predictions if available instead of calculating from scratch.
   *
   * \param [in,out]  dmat        Feature matrix.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       The model to predict from.
   * \param           tree_begin  The tree begin index.
   * \param           ntree_limit (Optional) The ntree limit. 0 means do not
   * limit trees.
   */
    
     protected:
  char GetChar() override {
    return fin_.get();
  }
  /*! \brief to be implemented by child, check if end of stream */
  bool IsEnd() override {
    return fin_.eof();
  }
    
    /*!
 * \brief Macro to register sparse page format.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(raw)
 * .describe('Raw binary data format.')
 * .set_body([]() {
 *     return new RawFormat();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(Name)                       \
  DMLC_REGISTRY_REGISTER(::xgboost::data::SparsePageFormatReg, SparsePageFormat, Name)
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    bool __CCCallFuncND::initWithTarget(Ref* selectorTarget, SEL_CallFuncND selector, void* d)
{
    if (CallFunc::initWithTarget(selectorTarget))
    {
        _data = d;
        _callFuncND = selector;
        return true;
    }
    
    return false;
}
    
    
    {    delete action;
    return nullptr;
}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        /** 
     * @brief Initializes with a duration and destination percentage. 
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, float percent);
    
    // implementation of ShatteredTiles3D
    
     Another example: ScaleTo action could be rewritten using PropertyAction:
    
    // implementation of Animation
    
    bool AnimationCache::init()
{
    return true;
}