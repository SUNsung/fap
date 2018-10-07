
        
        // Implementation of str() for PyBfloat16.
PyObject* PyBfloat16_Str(PyObject* self) {
  bfloat16 x = reinterpret_cast<PyBfloat16*>(self)->value;
  string v = strings::StrCat(static_cast<float>(x));
  return MakePyString(v);
}
    
    #include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/core/lib/core/status.h'
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    #endif  // TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_ACTIVATION_H_

    
    // Asserts that a given statement causes the program to exit, either by
// explicitly exiting with a nonzero exit code or being killed by a
// signal, and emitting error output that matches regex.
# define ASSERT_DEATH(statement, regex) \
    ASSERT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44, typename T45,
    typename T46, typename T47, typename T48, typename T49>
internal::ValueArray49<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
    T44, T45, T46, T47, T48, T49> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5,
    T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12, T13 v13, T14 v14,
    T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20, T21 v21, T22 v22,
    T23 v23, T24 v24, T25 v25, T26 v26, T27 v27, T28 v28, T29 v29, T30 v30,
    T31 v31, T32 v32, T33 v33, T34 v34, T35 v35, T36 v36, T37 v37, T38 v38,
    T39 v39, T40 v40, T41 v41, T42 v42, T43 v43, T44 v44, T45 v45, T46 v46,
    T47 v47, T48 v48, T49 v49) {
  return internal::ValueArray49<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40, T41, T42, T43, T44, T45, T46, T47, T48, T49>(v1, v2, v3, v4, v5, v6,
      v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21,
      v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35,
      v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49);
}
    
      // Returns true if the death test passed; that is, the test process
  // exited during the test, its exit status matches a user-supplied
  // predicate, and its stderr output matches a user-supplied regular
  // expression.
  // The user-supplied predicate may be a macro expression rather
  // than a function pointer or functor, or else Wait and Passed could
  // be combined.
  virtual bool Passed(bool exit_status_ok) = 0;
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25>
class ValueArray25 {
 public:
  ValueArray25(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24,
      T25 v25) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
      v15_(v15), v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20),
      v21_(v21), v22_(v22), v23_(v23), v24_(v24), v25_(v25) {}
    }
    
    
    {    return -1;
  }
    
      const size_t len = strlen(a_c_string);
  char* const clone = new char[ len + 1 ];
  memcpy(clone, a_c_string, len + 1);
    
    
    {  // Sets the 0-terminated C string this MyString object represents.
  void Set(const char* c_string);
};
    
      // Asserts that s.c_string() returns NULL.
  //
  // <TechnicalDetails>
  //
  // If we write NULL instead of
  //
  //   static_cast<const char *>(NULL)
  //
  // in this assertion, it will generate a warning on gcc 3.4.  The
  // reason is that EXPECT_EQ needs to know the types of its
  // arguments in order to print them when it fails.  Since NULL is
  // #defined as 0, the compiler will use the formatter function for
  // int to print it.  However, gcc thinks that NULL should be used as
  // a pointer, not an int, and therefore complains.
  //
  // The root of the problem is C++'s lack of distinction between the
  // integer number 0 and the null pointer constant.  Unfortunately,
  // we have to live with this fact.
  //
  // </TechnicalDetails>
  EXPECT_STREQ(NULL, s.c_string());
    
    
    {   while(m_position != m_end)
   {
      switch(this->m_traits.syntax_type(*m_position))
      {
      case regex_constants::syntax_caret:
         if(m_position == base)
         {
            char_set.negate();
            ++m_position;
            item_base = m_position;
         }
         else
            parse_set_literal(char_set);
         break;
      case regex_constants::syntax_close_set:
         if(m_position == item_base)
         {
            parse_set_literal(char_set);
            break;
         }
         else
         {
            ++m_position;
            if(0 == this->append_set(char_set))
            {
               fail(regex_constants::error_ctype, m_position - m_base);
               return false;
            }
         }
         return true;
      case regex_constants::syntax_open_set:
         if(parse_inner_set(char_set))
            break;
         return true;
      case regex_constants::syntax_escape:
         {
            // 
            // look ahead and see if this is a character class shortcut
            // \d \w \s etc...
            //
            ++m_position;
            if(this->m_traits.escape_syntax_type(*m_position)
               == regex_constants::escape_type_class)
            {
               char_class_type m = this->m_traits.lookup_classname(m_position, m_position+1);
               if(m != 0)
               {
                  char_set.add_class(m);
                  ++m_position;
                  break;
               }
            }
            else if(this->m_traits.escape_syntax_type(*m_position)
               == regex_constants::escape_type_not_class)
            {
               // negated character class:
               char_class_type m = this->m_traits.lookup_classname(m_position, m_position+1);
               if(m != 0)
               {
                  char_set.add_negated_class(m);
                  ++m_position;
                  break;
               }
            }
            // not a character class, just a regular escape:
            --m_position;
            parse_set_literal(char_set);
            break;
         }
      default:
         parse_set_literal(char_set);
         break;
      }
   }
   return m_position != m_end;
}
    
    #ifdef BOOST_REGEX_HAS_OTHER_WCHAR_T
//
// Provide an unsigned short version as well, so the user can link to this
// no matter whether they build with /Zc:wchar_t or not (MSVC specific).
//
template<>
struct BOOST_REGEX_DECL c_regex_traits<unsigned short>
{
   c_regex_traits(){}
   typedef unsigned short char_type;
   typedef std::size_t size_type;
   typedef std::basic_string<unsigned short> string_type;
   struct locale_type{};
   typedef boost::uint32_t char_class_type;
    }
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         char_regex_traits.cpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Declares deprecated traits classes char_regex_traits<>.
  */
    
    
    {
    {
} // namespace BOOST_REGEX_DETAIL_NS
using boost::BOOST_REGEX_DETAIL_NS::directory_iterator;
using boost::BOOST_REGEX_DETAIL_NS::file_iterator;
using boost::BOOST_REGEX_DETAIL_NS::mapfile;
} // namespace boost
    
    template <class BidiIterator>
struct saved_position : public saved_state
{
   const re_syntax_base* pstate;
   BidiIterator position;
   saved_position(const re_syntax_base* ps, BidiIterator pos, int i) : saved_state(i), pstate(ps), position(pos){};
};
    
    
    {      basic = ::boost::regbase::basic,
      extended = ::boost::regbase::extended,
      normal = ::boost::regbase::normal,
      emacs = ::boost::regbase::emacs,
      awk = ::boost::regbase::awk,
      grep = ::boost::regbase::grep,
      egrep = ::boost::regbase::egrep,
      sed = basic,
      perl = normal,
      ECMAScript = normal,
      JavaScript = normal,
      JScript = normal
   };
   typedef ::boost::regbase::flag_type syntax_option_type;
    
    #endif
    
    template <class OutputIterator, class Iterator, class traits, class charT>
inline OutputIterator regex_merge(OutputIterator out,
                         Iterator first,
                         Iterator last,
                         const basic_regex<charT, traits>& e, 
                         const std::basic_string<charT>& fmt,
                         match_flag_type flags = match_default)
{
   return regex_merge(out, first, last, e, fmt.c_str(), flags);
}
    
    template <class traits, class charT, class Formatter>
std::basic_string<charT> regex_replace(const std::basic_string<charT>& s,
                         const basic_regex<charT, traits>& e, 
                         Formatter fmt,
                         match_flag_type flags = match_default)
{
   std::basic_string<charT> result;
   BOOST_REGEX_DETAIL_NS::string_out_iterator<std::basic_string<charT> > i(result);
   regex_replace(i, s.begin(), s.end(), e, fmt, flags);
   return result;
}
    
      /**
   * \fn  virtual void Predictor::PredictLeaf(DMatrix* dmat,
   * std::vector<bst_float>* out_preds, const gbm::GBTreeModel& model, unsigned
   * ntree_limit = 0) = 0;
   *
   * \brief predict the leaf index of each tree, the output will be nsample *
   * ntree vector this is only valid in gbtree predictor.
   *
   * \param [in,out]  dmat        The input feature matrix.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       Model to make predictions from.
   * \param           ntree_limit (Optional) The ntree limit.
   */
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    
    {
    {}  // namespace data
}  // namespace xgboost
#endif  // XGBOOST_DATA_SPARSE_PAGE_WRITER_H_

    
    TreeUpdater* TreeUpdater::Create(const std::string& name) {
  auto *e = ::dmlc::Registry< ::xgboost::TreeUpdaterReg>::Get()->Find(name);
  if (e == nullptr) {
    LOG(FATAL) << 'Unknown tree updater ' << name;
  }
  return (e->body)();
}
    
      void SetStart() {
    start_ = true;
  }
    
      // Implementations of the DB interface
  using DB::Get;
  virtual Status Get(const ReadOptions& options,
                     ColumnFamilyHandle* column_family, const Slice& key,
                     PinnableSlice* value) override;
  using DB::MultiGet;
  virtual std::vector<Status> MultiGet(
      const ReadOptions& options,
      const std::vector<ColumnFamilyHandle*>&,
      const std::vector<Slice>& keys, std::vector<std::string>* values)
    override;
    
        virtual ~CompactionProxy() = default;
    virtual int level(size_t /*compaction_input_level*/ = 0) const {
      return compaction_->level();
    }
    virtual bool KeyNotExistsBeyondOutputLevel(
        const Slice& user_key, std::vector<size_t>* level_ptrs) const {
      return compaction_->KeyNotExistsBeyondOutputLevel(user_key, level_ptrs);
    }
    virtual bool bottommost_level() const {
      return compaction_->bottommost_level();
    }
    virtual int number_levels() const { return compaction_->number_levels(); }
    virtual Slice GetLargestUserKey() const {
      return compaction_->GetLargestUserKey();
    }
    virtual bool allow_ingest_behind() const {
      return compaction_->immutable_cf_options()->allow_ingest_behind;
    }
    virtual bool preserve_deletes() const {
      return compaction_->immutable_cf_options()->preserve_deletes;
    }
    
    Status WriteBatchBase::Merge(const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
    TEST_F(WriteControllerTest, ChangeDelayRateTest) {
  TimeSetEnv env;
  WriteController controller(40000000u);  // also set max delayed rate
  controller.set_delayed_write_rate(10000000u);
  auto delay_token_0 =
      controller.GetDelayToken(controller.delayed_write_rate());
  ASSERT_EQ(static_cast<uint64_t>(2000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_1 = controller.GetDelayToken(2000000u);
  ASSERT_EQ(static_cast<uint64_t>(10000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_2 = controller.GetDelayToken(1000000u);
  ASSERT_EQ(static_cast<uint64_t>(20000000),
            controller.GetDelay(&env, 20000000u));
  auto delay_token_3 = controller.GetDelayToken(20000000u);
  ASSERT_EQ(static_cast<uint64_t>(1000000),
            controller.GetDelay(&env, 20000000u));
  // This is more than max rate. Max delayed rate will be used.
  auto delay_token_4 =
      controller.GetDelayToken(controller.delayed_write_rate() * 3);
  ASSERT_EQ(static_cast<uint64_t>(500000),
            controller.GetDelay(&env, 20000000u));
}
    
    
    {  // Remove any kind of caching of data from the offset to offset+length
  // of this file. If the length is 0, then it refers to the end of file.
  // If the system is not caching the file contents, then this is a noop.
  virtual Status InvalidateCache(size_t offset, size_t length) override {
    return file_->InvalidateCache(offset + prefixLength_, length);
  }
};
    
      bool isValid() {
    return hfile_ != nullptr;
  }
    
    Status PosixWritableFile::Truncate(uint64_t size) {
  Status s;
  int r = ftruncate(fd_, size);
  if (r < 0) {
    s = IOError('While ftruncate file to size ' + ToString(size), filename_,
                errno);
  } else {
    filesize_ = size;
  }
  return s;
}
    
      int ret = system('rm -rf /tmp/rocksmergetest');
  if (ret != 0) {
    fprintf(stderr, 'Error deleting /tmp/rocksmergetest, code: %d\n', ret);
    return ret;
  }
  rocksdb::Options options;
  options.create_if_missing = true;
  options.merge_operator.reset(new MyMerge);
  options.compaction_filter = &filter;
  status = rocksdb::DB::Open(options, '/tmp/rocksmergetest', &raw_db);
  assert(status.ok());
  std::unique_ptr<rocksdb::DB> db(raw_db);
    
        static BOOST_FORCEINLINE storage_type fetch_and(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        return static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_AND64(&storage, v));
    }
    
        struct aligned
    {
        type value;
    }