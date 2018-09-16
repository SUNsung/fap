
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    REGISTER_OP('Add').Doc(R'doc(
An op to test that duplicate registrations don't override previously
registered ops.
)doc');
    
      // Initializes the NumPy descriptor.
  PyArray_InitArrFuncs(&NPyBfloat16_ArrFuncs);
  NPyBfloat16_ArrFuncs.getitem = NPyBfloat16_GetItem;
  NPyBfloat16_ArrFuncs.setitem = NPyBfloat16_SetItem;
  NPyBfloat16_ArrFuncs.copyswapn = NPyBfloat16_CopySwapN;
  NPyBfloat16_ArrFuncs.copyswap = NPyBfloat16_CopySwap;
  NPyBfloat16_ArrFuncs.nonzero = NPyBfloat16_NonZero;
  NPyBfloat16_ArrFuncs.fill = NPyBfloat16_Fill;
    
    namespace tensorflow {
    }
    
    void PyExceptionRegistry::Init(PyObject* code_to_exc_type_map) {
  DCHECK(singleton_ == nullptr) << 'PyExceptionRegistry::Init() already called';
  singleton_ = new PyExceptionRegistry;
    }
    
    ScopedActivateExecutorContext::ScopedActivateExecutorContext(
    ScopedActivateExecutorContext &&other)
    : driver_scoped_activate_context_(other.driver_scoped_activate_context_) {
  other.driver_scoped_activate_context_ = nullptr;
}
    
      if (!app_window) {
    *error = 'cannot get current window; are you in background page/node context?';
    return false;
  }
  //from app_window_api.cc
  content::RenderFrameHost* created_frame =
      app_window->web_contents()->GetMainFrame();
  int frame_id = created_frame->GetRoutingID();
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
      base::WaitableEvent done(false, false);
  BrowserThread::PostTask(
      BrowserThread::IO, FROM_HERE,
      base::Bind(&SetProxyConfigCallback, &done,
                 make_scoped_refptr(context_getter), config));
  done.Wait();
    
    
    {}  // namespace remote
    
    Menu::Menu(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
           const std::string& extension_id)
  : Base(id, object_manager, option, extension_id), enable_show_event_(false)  {
  Create(option);
}
    
        bool Read(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return ReadText(data);
        break;
        case TYPE_HTML:
        return ReadHTML(data);
        break;
        case TYPE_RTF:
        return ReadRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return ReadImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;      
    }
    
    #include 'extensions/browser/extension_function.h'
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.allocateId', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjAllocateIdFunction);
};
    
    
    {  // Create temporary file
  auto fd = mkstemp(&tmp[0]);
  if (fd == -1) {
    throw std::system_error(errno, std::system_category());
  }
  close(fd);
  return std::string(tmp.data(), tmp.size());
}
    
    namespace {
    }
    
    SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
      // Get initial measurement of the space we will be reading.
  const int64_t initial_size = Size(Key(0), Key(n));
  const int64_t initial_other_size = Size(Key(n), Key(kCount));
    
    // A utility routine: write 'data' to the named file and Sync() it.
Status WriteStringToFileSync(Env* env, const Slice& data,
                             const std::string& fname);
    
      // Create a writer that will append data to '*dest'.
  // '*dest' must have initial length 'dest_length'.
  // '*dest' must remain live while this Writer is in use.
  Writer(WritableFile* dest, uint64_t dest_length);
    
      // Test that previous recovery produced recoverable state.
  Open();
  ASSERT_LE(1, NumTables());
  ASSERT_EQ(1, NumLogs());
  if (CanAppend()) {
    ASSERT_EQ(new_log, FirstLogFile());
  }
  ASSERT_EQ('bar2', Get('foo'));
  ASSERT_EQ('world', Get('hello'));
  ASSERT_EQ('there', Get('hi'));
    
    
    {    // Do not record a version edit for this conversion to a Table
    // since ExtractMetaData() will also generate edits.
    FileMetaData meta;
    meta.number = next_file_number_++;
    Iterator* iter = mem->NewIterator();
    status = BuildTable(dbname_, env_, options_, table_cache_, iter, &meta);
    delete iter;
    mem->Unref();
    mem = nullptr;
    if (status.ok()) {
      if (meta.file_size > 0) {
        table_numbers_.push_back(meta.number);
      }
    }
    Log(options_.info_log, 'Log #%llu: %d ops saved to Table #%llu %s',
        (unsigned long long) log,
        counter,
        (unsigned long long) meta.number,
        status.ToString().c_str());
    return status;
  }
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    #include <new>
#ifdef BOOST_HAS_THREADS
#include <boost/regex/pending/static_mutex.hpp>
#endif
    
       void extend_stack();
   bool unwind(bool);
   bool unwind_end(bool);
   bool unwind_paren(bool);
   bool unwind_recursion_stopper(bool);
   bool unwind_assertion(bool);
   bool unwind_alt(bool);
   bool unwind_repeater_counter(bool);
   bool unwind_extra_block(bool);
   bool unwind_greedy_single_repeat(bool);
   bool unwind_slow_dot_repeat(bool);
   bool unwind_fast_dot_repeat(bool);
   bool unwind_char_repeat(bool);
   bool unwind_short_set_repeat(bool);
   bool unwind_long_set_repeat(bool);
   bool unwind_non_greedy_repeat(bool);
   bool unwind_recursion(bool);
   bool unwind_recursion_pop(bool);
   bool unwind_commit(bool);
   bool unwind_then(bool);
   void destroy_single_repeat();
   void push_matched_paren(int index, const sub_match<BidiIterator>& sub);
   void push_recursion_stopper();
   void push_assertion(const re_syntax_base* ps, bool positive);
   void push_alt(const re_syntax_base* ps);
   void push_repeater_count(int i, repeater_count<BidiIterator>** s);
   void push_single_repeat(std::size_t c, const re_repeat* r, BidiIterator last_position, int state_id);
   void push_non_greedy_repeat(const re_syntax_base* ps);
   void push_recursion(int idx, const re_syntax_base* p, results_type* presults);
   void push_recursion_pop();
    
    
template <class traits, class charT>
unsigned find_sort_syntax(const traits* pt, charT* delim)
{
   //
   // compare 'a' with 'A' to see how similar they are,
   // should really use a-accute but we can't portably do that,
   //
   typedef typename traits::string_type string_type;
   typedef typename traits::char_type char_type;
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
    
    
#ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    
    {} // namespace boost
    
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
    
      virtual bool Filter(int /*level*/, const Slice& /*key*/,
                      const Slice& /*value*/, std::string* new_value,
                      bool* value_changed) const override {
    assert(new_value != nullptr);
    *new_value = NEW_VALUE;
    *value_changed = true;
    return false;
  }
    
    
    {
    {    if (data.ToString().find('foo567') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('v1.fetdq') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('bar123') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('v2.dfgkjdfghsd') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
    if (data.ToString().find('dfgk') != std::string::npos) {
      hits++; 
      //std::cout << 'Hit in ' << filePath << '\n';
    }
  }
  if (encrypted_env_) {
    ASSERT_EQ(hits, 0);
  } else {
    ASSERT_GE(hits, 4);
  }
}
    
    namespace rocksdb {
    }
    
    std::unique_ptr<WriteControllerToken>
WriteController::GetCompactionPressureToken() {
  ++total_compaction_pressure_;
  return std::unique_ptr<WriteControllerToken>(
      new CompactionPressureToken(this));
}
    
      friend class WriteControllerToken;
  friend class StopWriteToken;
  friend class DelayWriteToken;
  friend class CompactionPressureToken;
    
      env.now_micros_ += 3000724u;  // sleep credit 100
  // 6000 used, 4480 left.
  ASSERT_EQ(static_cast<uint64_t>(0), controller.GetDelay(&env, 6000u));
    
    // GetPrefixLength returns the length of the prefix that is added to every file
// and used for storing encryption options.
// For optimal performance, the prefix length should be a multiple of 
// the page size.
size_t CTREncryptionProvider::GetPrefixLength() {
  return defaultPrefixLength;
}
    
    namespace {
    }
    
      virtual Status ReuseWritableFile(const std::string& fname,
                                   const std::string& old_fname,
                                   unique_ptr<WritableFile>* result,
                                   const EnvOptions& options) override;
    
      FunctionRef<int(int)> fref = lambda;
  EXPECT_EQ(1005, fref(5));
  EXPECT_EQ(1011, fref(6));
  EXPECT_EQ(1018, fref(7));
    
    // Check a traditional Unix return code (-1 and sets errno on error), throw
// on error.
template <class... Args>
void checkUnixError(ssize_t ret, Args&&... args) {
  if (UNLIKELY(ret == -1)) {
    throwSystemError(std::forward<Args>(args)...);
  }
}
    
    #include <folly/Demangle.h>
#include <folly/FBString.h>
#include <folly/Portability.h>
    
      ts.tv_sec = 1;
  ts.tv_nsec = 10;
  EXPECT_EQ(1000000010ns, to<nanoseconds>(ts));
  EXPECT_EQ(1000000us, to<microseconds>(ts));
  EXPECT_EQ(1000ms, to<milliseconds>(ts));
  EXPECT_EQ(1s, to<seconds>(ts));
  EXPECT_EQ(
      createTimePoint<system_clock>(1000000010ns),
      to<system_clock::time_point>(ts));
  EXPECT_EQ(
      createTimePoint<steady_clock>(1000000010ns),
      to<steady_clock::time_point>(ts));
    
    
    {  bool initialized_{false};
  folly::Function<folly::Function<void(double)>()> initialize_;
  folly::Function<void(double)> increment_;
};
    
      // Install a pointer to ourselves as the allocator.
  *reinterpret_cast<SimpleAllocator**>(mem_) = this;
  static_assert(max_align_v >= sizeof(SimpleAllocator*), 'alignment too small');
  mem_ += std::min(sz_, max_align_v);
    
    /**
 * @class CanReceiver
 * @brief CAN receiver.
 */
template <typename SensorType>
class CanReceiver {
 public:
  /**
   * @brief Constructor.
   */
  CanReceiver() = default;
    }
    
      /**
   * @brief Get a one-byte unsigned integer representing the lower 4 bits.
   * @return The one-byte unsigned integer representing the lower 4 bits.
   */
  uint8_t get_byte_low_4_bits() const;
    
    
    {  if (data_trigger_running_) {
    data_trigger_running_ = false;
    if (thread_ != nullptr && thread_->joinable()) {
      sensor_message_manager_->GetMutableCVar()->notify_all();
      thread_->join();
    }
    thread_.reset();
  }
  AINFO << 'Data trigger stopped [ok].';
}
    
    // System gflags
DEFINE_string(sensor_node_name, '', 'Sensor node name.');
