
        
        namespace atom {
    }
    
    
    {}  // namespace atom
    
    #include 'atom/app/uv_task_runner.h'
    
    #include 'atom/browser/api/atom_api_web_contents.h'
#include 'atom/browser/browser.h'
#include 'atom/browser/native_browser_view.h'
#include 'atom/common/color_util.h'
#include 'atom/common/native_mate_converters/gfx_converter.h'
#include 'atom/common/native_mate_converters/value_converter.h'
#include 'atom/common/node_includes.h'
#include 'atom/common/options_switches.h'
#include 'native_mate/constructor.h'
#include 'native_mate/dictionary.h'
#include 'ui/gfx/geometry/rect.h'
    
    bool Debugger::IsAttached() {
  return agent_host_.get() ? agent_host_->IsAttached() : false;
}
    
    
    {  accelerator_callback_map_[accelerator] = callback;
  return true;
}
    
    #include 'atom/browser/api/atom_api_in_app_purchase.h'
    
    namespace atom {
    }
    
    /*! \brief a single data instance */
struct DataInst {
  /*! \brief unique id for instance */
  unsigned index;
  /*! \brief content of data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
};  // struct DataInst
    
     public:
  /*! \brief cuda kernel argument descriptor */
  struct ArgType {
    /*! \brief whether argument is NDArray */
    bool is_ndarray;
    /*! \brief whether argument is constant (input) */
    bool is_const;
    /*! \brief data type of argument */
    mshadow::TypeFlag dtype;
  };
  /*! \brief Cuda kernel */
  class Kernel {
   public:
    /*! \brief Launch the kernel */
    void Launch(const Context& ctx, const std::vector<dmlc::any>& args,
                uint32_t grid_dim_x, uint32_t grid_dim_y, uint32_t grid_dim_z,
                uint32_t block_dim_x, uint32_t block_dim_y, uint32_t block_dim_z,
                uint32_t shared_mem);
    /*! \brief kernel interface signature */
    const std::vector<ArgType>& signature() { return signature_; }
    }
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_op-inl.h
 * \brief Caffe Operator
 * \author Haoran Wang
*/
#ifndef PLUGIN_CAFFE_CAFFE_OP_INL_H_
#define PLUGIN_CAFFE_CAFFE_OP_INL_H_
    
      /*!
   * \brief Constructor takes function to run.
   * \param size size of the thread pool.
   * \param func the function to run on the thread pool.
   */
  explicit ThreadPool(size_t size, std::function<void()> func)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      i = std::thread(func);
    }
  }
  explicit ThreadPool(size_t size,
                      std::function<void(std::shared_ptr<dmlc::ManualEvent> ready)> func,
                      const bool wait)
      : worker_threads_(size) {
    CHECK_GT(size, 0);
    for (auto& i : worker_threads_) {
      std::shared_ptr<dmlc::ManualEvent> ptr = std::make_shared<dmlc::ManualEvent>();
      ready_events_.emplace_back(ptr);
      i = std::thread(func, ptr);
    }
    if (wait) {
      WaitForReady();
    }
  }
  ~ThreadPool() noexcept(false) {
    for (auto&& i : worker_threads_) {
      i.join();
    }
  }
    
      ~ThreadedEnginePooled() noexcept(false) {
    StopNoWait();
  }
    
       file_iterator();
   file_iterator(const char* wild);
   ~file_iterator();
   file_iterator(const file_iterator&);
   file_iterator& operator=(const file_iterator&);
   const char* root()const { return _root; }
   const char* path()const { return _path; }
   const char* name()const { return ptr; }
   _fi_find_data* data() { return &(ref->_data); }
   void next();
   file_iterator& operator++() { next(); return *this; }
   file_iterator operator++(int);
   const char* operator*() { return path(); }
    
    template <class I>
struct is_random_imp
{
#ifndef BOOST_NO_STD_ITERATOR_TRAITS
private:
   typedef typename std::iterator_traits<I>::iterator_category cat;
public:
   BOOST_STATIC_CONSTANT(bool, value = (::boost::is_convertible<cat*, std::random_access_iterator_tag*>::value));
#else
   BOOST_STATIC_CONSTANT(bool, value = false);
#endif
};
    
    template <class BidiIterator, class Allocator, class traits>
bool perl_matcher<BidiIterator, Allocator, traits>::match_imp()
{
   // initialise our stack if we are non-recursive:
#ifdef BOOST_REGEX_NON_RECURSIVE
   save_state_init init(&m_stack_base, &m_backup_state);
   used_block_count = BOOST_REGEX_MAX_BLOCKS;
#if !defined(BOOST_NO_EXCEPTIONS)
   try{
#endif
#endif
    }
    }
    
    #endif  // BOOST_REGEX_V4_REGEX_MERGE_HPP
    
       raw_storage();
   raw_storage(size_type n);
    
    template <class BidiIterator, class Allocator, class charT, class traits>
bool regex_search(BidiIterator first, BidiIterator last, 
                  match_results<BidiIterator, Allocator>& m, 
                  const basic_regex<charT, traits>& e, 
                  match_flag_type flags = match_default)
{
   return regex_search(first, last, m, e, flags, first);
}
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1>
class split_pred
{
   typedef std::basic_string<charT, Traits1, Alloc1> string_type;
   typedef typename string_type::const_iterator iterator_type;
   iterator_type* p_last;
   OutputIterator* p_out;
   std::size_t* p_max;
   std::size_t initial_max;
public:
   split_pred(iterator_type* a, OutputIterator* b, std::size_t* c)
      : p_last(a), p_out(b), p_max(c), initial_max(*c) {}
    }
    
    /**
 * @brief A simple ConfigParserPlugin for feature vector dictionary keys.
 */
class FeatureVectorsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
    }
    
    namespace osquery {
    }
    
    Status ViewsConfigParserPlugin::update(const std::string& source,
                                       const ParserConfig& config) {
  auto cv = config.find('views');
  if (cv == config.end()) {
    return Status(1);
  }
    }
    
    
    {  int status = ::kill(nativeHandle(), SIGTERM);
  return (status == 0);
}
    
    TEST_F(QueryTests, test_get_stored_query_names) {
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('foobar', query);
  auto encoded_qd = getSerializedQueryDataJSON();
  auto status = setDatabaseValue(kQueries, 'foobar', encoded_qd.first);
  EXPECT_TRUE(status.ok());
    }
    
      // Create ./inotify-triggers/2/1/.
  fs::create_directories(real_test_dir + '/2/1');
    
    CatmullRomBy* CatmullRomBy::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CatmullRomBy();
    a->initWithDuration(this->_duration, this->_points->clone());
    a->autorelease();
    return a;
}
    
    void ProgressTo::startWithTarget(Node *target)
{
    ActionInterval::startWithTarget(target);
    _from = ((kProgressTimerCast)(target))->getPercentage();
}
    
    NS_CC_END
    
    protected:
    int _randrange;
    bool _once;
    bool _shatterZ;
    
    // AtlasNode - RGBA protocol
    
    TEST(DynamicConverter, construct) {
  using std::vector;
  using std::map;
  using std::pair;
  using std::string;
  {
    vector<int> c { 1, 2, 3 };
    dynamic d = dynamic::array(1, 2, 3);
    EXPECT_EQ(d, toDynamic(c));
  }
    }
    
    TEST(Endian, Basic) {
  uint8_t v8 = 0x12;
  uint8_t v8s = 0x12;
  uint16_t v16 = 0x1234;
  uint16_t v16s = 0x3412;
  uint32_t v32 = 0x12345678;
  uint32_t v32s = 0x78563412;
  uint64_t v64 = 0x123456789abcdef0ULL;
  uint64_t v64s = 0xf0debc9a78563412ULL;
    }
    
    BENCHMARK(exception_ptr_create_and_throw_concurrent, iters) {
  std::atomic<bool> go(false);
  std::vector<std::thread> threads;
  BENCHMARK_SUSPEND {
    for (int t = 0; t < FLAGS_num_threads; ++t) {
      threads.emplace_back([&go, iters] {
        while (!go) { }
        std::runtime_error e('payload');
        for (size_t i = 0; i < iters; ++i) {
          auto ep = std::make_exception_ptr(e);
          try {
            std::rethrow_exception(ep);
          } catch (std::runtime_error&) {
          }
        }
      });
    }
  }
  go.store(true);
  for (auto& t : threads) {
    t.join();
  }
}
    
    int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  auto ret = RUN_ALL_TESTS();
  if (!ret) {
    folly::runBenchmarksOnFlag();
  }
  return ret;
}

    
    TEST(FixedStringCtorTest, FromInitializerList) {
  constexpr folly::FixedString<11> s{
      'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
  static_assert(s == 'hello world', '');
  // Out of bounds count, does not compile:
  // constexpr folly::FixedString<10> s{
  //     {'h','e','l','l','o',' ','w','o','r','l','d'}};
}
    
    
    {  FLAGS_minloglevel = prev;
}
    
    
    {  bool atLeastOneIsGood = false;
  for (size_t i = 0; i < hist.size() - 1; ++i) {
    auto delta = hist[i + 1] - hist[i];
    if (delta > std::chrono::milliseconds(5) &&
        delta < std::chrono::milliseconds(15)) {
      atLeastOneIsGood = true;
    }
  }
  EXPECT_TRUE(atLeastOneIsGood);
}
    
    BOOST_FORCEINLINE void pause() BOOST_NOEXCEPT
{
#if defined(_MSC_VER) && (defined(_M_AMD64) || defined(_M_IX86))
    _mm_pause();
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
    __asm__ __volatile__('pause;');
#endif
}