
        
        
    {    fprintf(stderr,
            'expected=%d..%d; got=%d; bad_keys=%d; bad_values=%d; missed=%d\n',
            min_expected, max_expected, correct, bad_keys, bad_values, missed);
    ASSERT_LE(min_expected, correct);
    ASSERT_GE(max_expected, correct);
  }
    
    
    {  void HeapProfile() {
    char fname[100];
    snprintf(fname, sizeof(fname), '%s/heap-%04d', FLAGS_db, ++heap_counter_);
    WritableFile* file;
    Status s = g_env->NewWritableFile(fname, &file);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      return;
    }
    bool ok = port::GetHeapProfile(WriteToFile, file);
    delete file;
    if (!ok) {
      fprintf(stderr, 'heap profiling not supported\n');
      g_env->DeleteFile(fname);
    }
  }
};
    
      void MaybeScheduleCompaction() EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  static void BGWork(void* db);
  void BackgroundCall();
  void BackgroundCompaction() EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  void CleanupCompaction(CompactionState* compact)
      EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  Status DoCompactionWork(CompactionState* compact)
      EXCLUSIVE_LOCKS_REQUIRED(mutex_);
    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
    bool GuessType(const std::string& fname, FileType* type) {
  size_t pos = fname.rfind('/');
  std::string basename;
  if (pos == std::string::npos) {
    basename = fname;
  } else {
    basename = std::string(fname.data() + pos + 1, fname.size() - pos - 1);
  }
  uint64_t ignored;
  return ParseFileName(basename, &ignored, type);
}
    
    bool HandleDumpCommand(Env* env, char** files, int num) {
  StdoutPrinter printer;
  bool ok = true;
  for (int i = 0; i < num; i++) {
    Status s = DumpFile(env, files[i], &printer);
    if (!s.ok()) {
      fprintf(stderr, '%s\n', s.ToString().c_str());
      ok = false;
    }
  }
  return ok;
}
    
      kFullType = 1,
    
        SequenceNumber max_sequence = 0;
    for (size_t i = 0; i < tables_.size(); i++) {
      if (max_sequence < tables_[i].max_sequence) {
        max_sequence = tables_[i].max_sequence;
      }
    }
    
    #ifndef BOOST_NO_WREGEX
template<>
class char_regex_traits_i<wchar_t> : public regex_traits<wchar_t>
{
public:
   typedef wchar_t char_type;
   typedef unsigned short uchar_type;
   typedef unsigned int size_type;
   typedef regex_traits<wchar_t> base_type;
    }
    
    
    {   mapfile(){ hfile = hmap = 0; _first = _last = 0; }
   mapfile(const char* file){ hfile = hmap = 0; _first = _last = 0; open(file); }
   ~mapfile(){ close(); }
   void open(const char* file);
   void close();
   const char* begin(){ return _first; }
   const char* end(){ return _last; }
   size_t size(){ return _last - _first; }
   bool valid(){ return (hfile != 0) && (hfile != INVALID_HANDLE_VALUE); }
};
    
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
    
    struct mem_block_cache
{
   // this member has to be statically initialsed:
   mem_block_node* next;
   unsigned cached_blocks;
#ifdef BOOST_HAS_THREADS
   boost::static_mutex mut;
#endif
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
    
    template <class F, class M, class O>
struct format_traits_imp
{
private:
   //
   // F must be a pointer, a function, or a class with a function call operator:
   //
   BOOST_STATIC_ASSERT((::boost::is_pointer<F>::value || ::boost::is_function<F>::value || ::boost::is_class<F>::value));
   static formatter_wrapper<typename unwrap_reference<F>::type> f;
   static M m;
   static O out;
   static boost::regex_constants::match_flag_type flags;
public:
   BOOST_STATIC_CONSTANT(int, value = sizeof(check_is_formatter(f(m), f(m, out), f(m, out, flags))));
};
    
    
    
    //
// regex_grep convenience interfaces:
#ifndef BOOST_NO_FUNCTION_TEMPLATE_ORDERING
//
// this isn't really a partial specialisation, but template function
// overloading - if the compiler doesn't support partial specialisation
// then it really won't support this either:
template <class Predicate, class charT, class traits>
inline unsigned int regex_grep(Predicate foo, const charT* str, 
                        const basic_regex<charT, traits>& e, 
                        match_flag_type flags = match_default)
{
   return regex_grep(foo, str, str + traits::length(str), e, flags);
}
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1, class Traits2>
inline std::size_t regex_split(OutputIterator out,
                   std::basic_string<charT, Traits1, Alloc1>& s, 
                   const basic_regex<charT, Traits2>& e,
                   match_flag_type flags = match_default)
{
   return regex_split(out, s, e, flags, UINT_MAX);
}
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
     protected:
  char GetChar() override {
    return fin_.get();
  }
  /*! \brief to be implemented by child, check if end of stream */
  bool IsEnd() override {
    return fin_.eof();
  }
    
      /*! \brief return corresponding element set given the node_id */
  inline const Elem& operator[](unsigned node_id) const {
    const Elem& e = elem_of_each_node_[node_id];
    CHECK(e.begin != nullptr)
        << 'access element that is not in the set';
    return e;
  }
  // clear up things
  inline void Clear() {
    row_indices_.clear();
    elem_of_each_node_.clear();
  }
  // initialize node id 0->everything
  inline void Init() {
    CHECK_EQ(elem_of_each_node_.size(), 0U);
    }
    
    #include <xgboost/data.h>
#include <dmlc/io.h>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <memory>
#include <functional>
    
    /** Macro for inline definition of auxiliary actions */
#define AUX_ACT(act)                          \
  do {                                        \
    AUX_THR(func_) = __func__;                \
    AUX_THR(line_) = __LINE__;                \
    AuxAct auxfn(                             \
      [&](bool success) {                     \
        if (success) {}                       \
        if (true) {act}                       \
      }                                       \
    );                                        \
    DeterministicSchedule::setAuxAct(auxfn);  \
  } while (0)
    
    TEST(DiscriminatedPtr, Apply) {
  struct Foo { };
  struct Visitor {
    std::string operator()(int* /* ptr */) { return 'int'; }
    std::string operator()(const int* /* ptr */) { return 'const int'; }
    std::string operator()(Foo* /* ptr */) { return 'Foo'; }
    std::string operator()(const Foo* /* ptr */) { return 'const Foo'; }
  };
    }
    
    using namespace folly;
    
    TEST(Expected, CoroutineException) {
  EXPECT_THROW(
      ([]() -> Expected<int, Err> {
        auto x = co_await throws();
        ADD_FAILURE();
        co_return x;
      }()),
      Exn);
}
    
    #ifndef SKIP_RESERVE
void BENCHFUN(reserve)(int iters, int size) {
  auto const obj = randomObject<VECTOR::value_type>();
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(random(0U, 1U), obj);
    v.reserve(size);
  }
}
BENCHMARK_PARAM(BENCHFUN(reserve), 16)
BENCHMARK_PARAM(BENCHFUN(reserve), 128)
BENCHMARK_PARAM(BENCHFUN(reserve), 1024)
#endif
    
    using namespace folly;
    
    
    {  {
    // Test that rvalues are moved.
    auto fmt = format('{}', NoncopyableInt(1));
    EXPECT_EQ(fmt.str(), '1');
  }
}

    
      EXPECT_TRUE(LOG_VALUE((has_test<Bar, int()>::value)));
  EXPECT_FALSE(LOG_VALUE((has_test<Bar, int() const>::value)));
  EXPECT_TRUE(LOG_VALUE((has_test<Bar, double(int, long)>::value)));
  EXPECT_FALSE(LOG_VALUE((has_test<Bar, string(const string&) const>::value)));
  EXPECT_TRUE(LOG_VALUE((has_test<Bar, long(int) const>::value)));
  EXPECT_FALSE(LOG_VALUE((has_test<Bar, string(string) const>::value)));
    
    class DHTNode;
class DHTRoutingTable;
class DHTTaskQueue;
class DHTTaskFactory;
class DHTPeerAnnounceStorage;
class DHTTokenTracker;
class DHTMessageDispatcher;
class DHTMessageReceiver;
class DHTMessageFactory;
    
      std::shared_ptr<DHTNode> localNode_;
    
      ~DHTSetup();
    
    #endif // D_DHT_TASK_EXECUTOR_H

    
    
    {  virtual std::shared_ptr<DHTTask>
  createReplaceNodeTask(const std::shared_ptr<DHTBucket>& bucket,
                        const std::shared_ptr<DHTNode>& newNode) = 0;
};
    
      void setTaskQueue(DHTTaskQueue* taskQueue);
    
    public:
  DHTTokenUpdateCommand(cuid_t cuid, DownloadEngine* e,
                        std::chrono::seconds interval);
    
      // show some sample bytes
  virtual std::string toString() const CXX11_OVERRIDE;
    
    class DNSCache {
private:
  struct AddrEntry {
    std::string addr_;
    bool good_;
    }
    }