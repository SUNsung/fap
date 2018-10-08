
        
        OPERATOR_SCHEMA(EnforceFinite)
    .NumInputs(1)
    .NumOutputs(0)
    .SetDoc(R'DOC(
Raise if there is NaN or Inf values in the input tensor.
)DOC')
    .Input(0, 'input', 'Input tensor');
    
    Github Links:
    
    namespace caffe2 {
    }
    
    void ChannelArguments::Swap(ChannelArguments& other) {
  args_.swap(other.args_);
  strings_.swap(other.strings_);
}
    
    namespace grpc {
    }
    
    class CensusChannelData : public ChannelData {
 public:
  grpc_error* Init(grpc_channel_element* elem,
                   grpc_channel_element_args* args) override;
};
    
    MeasureDouble RpcClientServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error (propagated from the server)',
      kUnitMilliseconds);
  return measure;
}
    
    const ViewDescriptor& ServerCompletedRpcsMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/server/completed_rpcs/minute')
          .set_measure(kRpcServerServerLatencyMeasureName)
          .set_aggregation(Aggregation::Count())
          .add_column(ServerMethodTagKey())
          .add_column(ServerStatusTagKey());
  return descriptor;
}
    
    Status ProtoServerReflection::GetFileByName(
    ServerContext* context, const grpc::string& filename,
    ServerReflectionResponse* response) {
  if (descriptor_pool_ == nullptr) {
    return Status::CANCELLED;
  }
    }
    
      // Add the full names of registered services
  void SetServiceList(const std::vector<grpc::string>* services);
    
    template <class T>
struct pointer_iterator_traits
{
   typedef std::ptrdiff_t difference_type;
   typedef T value_type;
   typedef T* pointer;
   typedef T& reference;
   typedef std::random_access_iterator_tag iterator_category;
};
template <class T>
struct const_pointer_iterator_traits
{
   typedef std::ptrdiff_t difference_type;
   typedef T value_type;
   typedef const T* pointer;
   typedef const T& reference;
   typedef std::random_access_iterator_tag iterator_category;
};
    
       //
   // private access functions:
   void BOOST_REGEX_CALL set_second(BidiIterator i)
   {
      BOOST_ASSERT(m_subs.size() > 2);
      m_subs[2].second = i;
      m_subs[2].matched = true;
      m_subs[0].first = i;
      m_subs[0].matched = (m_subs[0].first != m_subs[0].second);
      m_null.first = i;
      m_null.second = i;
      m_null.matched = false;
      m_is_singular = false;
   }
    
       // try and match a single character, could be a multi-character
   // collating element...
   for(i = 0; i < set_->csingles; ++i)
   {
      ptr = next;
      if(*p == static_cast<charT>(0))
      {
         // treat null string as special case:
         if(traits_inst.translate(*ptr, icase) != *p)
         {
            while(*p == static_cast<charT>(0))++p;
            continue;
         }
         return set_->isnot ? next : (ptr == next) ? ++next : ptr;
      }
      else
      {
         while(*p && (ptr != last))
         {
            if(traits_inst.translate(*ptr, icase) != *p)
               break;
            ++p;
            ++ptr;
         }
    }
    }
    
    
    
    #ifndef BOOST_NO_FUNCTION_TEMPLATE_ORDERING
    
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
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct TreeUpdaterReg
    : public dmlc::FunctionRegEntryBase<TreeUpdaterReg,
                                        std::function<TreeUpdater* ()> > {
};
    
      size_t Read(void* dptr, size_t size) override {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer == 0) return strm_->Read(dptr, size);
    if (nbuffer < size) {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, nbuffer);
      buffer_ptr_ += nbuffer;
      return nbuffer + strm_->Read(reinterpret_cast<char*>(dptr) + nbuffer,
                                   size - nbuffer);
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      buffer_ptr_ += size;
      return size;
    }
  }
    
        if (left_node_id >= elem_of_each_node_.size()) {
      elem_of_each_node_.resize(left_node_id + 1, Elem(nullptr, nullptr, -1));
    }
    if (right_node_id >= elem_of_each_node_.size()) {
      elem_of_each_node_.resize(right_node_id + 1, Elem(nullptr, nullptr, -1));
    }
    
    
    {
    {
    {  // base margin
  bst_float base_margin;
  // model parameter
  GBTreeModelParam param;
  /*! \brief vector of trees stored in the model */
  std::vector<std::unique_ptr<RegTree> > trees;
  /*! \brief for the update process, a place to keep the initial trees */
  std::vector<std::unique_ptr<RegTree> > trees_to_update;
  /*! \brief some information indicator of the tree, reserved */
  std::vector<int> tree_info;
};
}  // namespace gbm
}  // namespace xgboost

    
    namespace xgboost {
namespace tree {
    }
    }
    
      int64_t num_record_drop_hidden = 0;
  int64_t num_record_drop_obsolete = 0;
  int64_t num_record_drop_range_del = 0;
  int64_t num_range_del_drop_obsolete = 0;
  // Deletions obsoleted before bottom level due to file gap optimization.
  int64_t num_optimized_del_drop_obsolete = 0;
  uint64_t total_filter_time = 0;
    
      Options options = CurrentOptions();
  options.table_factory.reset(NewBlockBasedTableFactory(table_options));
  options.prefix_extractor.reset(NewCappedPrefixTransform(9));
  options.compaction_filter_factory = std::make_shared<SkipEvenFilterFactory>();
  options.disable_auto_compactions = true;
  options.create_if_missing = true;
  DestroyAndReopen(options);
    
      std::atomic_bool compaction_finished;
  compaction_finished = false;
  // Issue manual compaction in one thread and still verify DB state
  // in main thread.
  rocksdb::port::Thread t([&]() {
    CompactRangeOptions compact_options;
    compact_options.change_level = true;
    compact_options.target_level = options.num_levels - 1;
    dbfull()->CompactRange(compact_options, nullptr, nullptr);
    compaction_finished.store(true);
  });
  do {
    verify_func(total_keys, true);
  } while (!compaction_finished.load());
  t.join();
    
    #include <string>
    
    namespace internal {
class Benchmark;
class BenchmarkImp;
class BenchmarkFamilies;
    }
    
    Benchmark* Benchmark::Arg(int x) {
  CHECK(ArgsCnt() == -1 || ArgsCnt() == 1);
  args_.push_back({x});
  return this;
}
    
      CheckHandler& operator=(const CheckHandler&) = delete;
  CheckHandler(const CheckHandler&) = delete;
  CheckHandler() = delete;
    
    
    {  fflush(stdout);
  // Restores the text color.
  SetConsoleTextAttribute(stdout_handle, old_color_attrs);
#else
  const char* color_code = GetPlatformColorCode(color);
  if (color_code) out << FormatString('\033[0;3%sm', color_code);
  out << FormatString(fmt, args) << '\033[m';
#endif
}
    
    
    {}  // end namespace benchmark
    
      std::string env_var;
  for (size_t i = 0; i != flag_str.length(); ++i)
    env_var += static_cast<char>(::toupper(flag_str.c_str()[i]));
    
    // Source project : https://github.com/ismaelJimenez/cpp.leastsq
// Adapted to be used with google benchmark
    
    #ifdef BENCHMARK_OS_WINDOWS
  if ((output_options_ & OO_Color) && &std::cout != &GetOutputStream()) {
    GetErrorStream()
        << 'Color printing is only supported for stdout on windows.'
           ' Disabling color printing\n';
    output_options_ = static_cast< OutputOptions >(output_options_ & ~OO_Color);
  }
#endif
    
    namespace benchmark {
// NOTE: only i386 and x86_64 have been well tested.
// PPC, sparc, alpha, and ia64 are based on
//    http://peter.kuscsik.com/wordpress/?p=14
// with modifications by m3b.  See also
//    https://setisvn.ssl.berkeley.edu/svn/lib/fftw-3.0.1/kernel/cycle.h
namespace cycleclock {
// This should return the number of cycles since power-on.  Thread-safe.
inline BENCHMARK_ALWAYS_INLINE int64_t Now() {
#if defined(BENCHMARK_OS_MACOSX)
  // this goes at the top because we need ALL Macs, regardless of
  // architecture, to return the number of 'mach time units' that
  // have passed since startup.  See sysinfo.cc where
  // InitializeSystemInfo() sets the supposed cpu clock frequency of
  // macs to the number of mach time units per second, not actual
  // CPU clock frequency (which can change in the face of CPU
  // frequency scaling).  Also note that when the Mac sleeps, this
  // counter pauses; it does not continue counting, nor does it
  // reset to zero.
  return mach_absolute_time();
#elif defined(BENCHMARK_OS_EMSCRIPTEN)
  // this goes above x86-specific code because old versions of Emscripten
  // define __x86_64__, although they have nothing to do with it.
  return static_cast<int64_t>(emscripten_get_now() * 1e+6);
#elif defined(__i386__)
  int64_t ret;
  __asm__ volatile('rdtsc' : '=A'(ret));
  return ret;
#elif defined(__x86_64__) || defined(__amd64__)
  uint64_t low, high;
  __asm__ volatile('rdtsc' : '=a'(low), '=d'(high));
  return (high << 32) | low;
#elif defined(__powerpc__) || defined(__ppc__)
  // This returns a time-base, which is not always precisely a cycle-count.
  int64_t tbl, tbu0, tbu1;
  asm('mftbu %0' : '=r'(tbu0));
  asm('mftb  %0' : '=r'(tbl));
  asm('mftbu %0' : '=r'(tbu1));
  tbl &= -static_cast<int64_t>(tbu0 == tbu1);
  // high 32 bits in tbu1; low 32 bits in tbl  (tbu0 is garbage)
  return (tbu1 << 32) | tbl;
#elif defined(__sparc__)
  int64_t tick;
  asm('.byte 0x83, 0x41, 0x00, 0x00');
  asm('mov   %%g1, %0' : '=r'(tick));
  return tick;
#elif defined(__ia64__)
  int64_t itc;
  asm('mov %0 = ar.itc' : '=r'(itc));
  return itc;
#elif defined(COMPILER_MSVC) && defined(_M_IX86)
  // Older MSVC compilers (like 7.x) don't seem to support the
  // __rdtsc intrinsic properly, so I prefer to use _asm instead
  // when I know it will work.  Otherwise, I'll use __rdtsc and hope
  // the code is being compiled with a non-ancient compiler.
  _asm rdtsc
#elif defined(COMPILER_MSVC)
  return __rdtsc();
#elif defined(BENCHMARK_OS_NACL)
  // Native Client validator on x86/x86-64 allows RDTSC instructions,
  // and this case is handled above. Native Client validator on ARM
  // rejects MRC instructions (used in the ARM-specific sequence below),
  // so we handle it here. Portable Native Client compiles to
  // architecture-agnostic bytecode, which doesn't provide any
  // cycle counter access mnemonics.
    }
    }
    }
    
      std::string walltime_value = LocalDateTimeString();
  out << indent << FormatKV('date', walltime_value) << ',\n';
    
    #define ACQUIRED_BEFORE(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(acquired_before(__VA_ARGS__))
    
    namespace benchmark {
#ifdef BENCHMARK_OS_WINDOWS
// Window's Sleep takes milliseconds argument.
void SleepForMilliseconds(int milliseconds) { Sleep(milliseconds); }
void SleepForSeconds(double seconds) {
  SleepForMilliseconds(static_cast<int>(kNumMillisPerSecond * seconds));
}
#else   // BENCHMARK_OS_WINDOWS
void SleepForMicroseconds(int microseconds) {
  struct timespec sleep_time;
  sleep_time.tv_sec = microseconds / kNumMicrosPerSecond;
  sleep_time.tv_nsec = (microseconds % kNumMicrosPerSecond) * kNumNanosPerMicro;
  while (nanosleep(&sleep_time, &sleep_time) != 0 && errno == EINTR)
    ;  // Ignore signals and wait for the full interval to elapse.
}
    }