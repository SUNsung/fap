
        
        bool CacheImpl::remove(const void *Key) {
  int Ret = cache_remove(static_cast<cache_t*>(Impl), const_cast<void*>(Key));
  return Ret == 0;
}
    
        // We can match a prefix so long as everything following the match is
    // a number.
    if (typeWord.startswith_lower(nameWord)) {
      for (unsigned i = nameWord.size(), n = typeWord.size(); i != n; ++i) {
        if (!clang::isDigit(typeWord[i])) return false;
      }
    }
    
    
    {    return name;
  }
    
      bool isGetter() const {
    return accessorKind == IAMAccessorKind::Getter;
  }
    
    static void printNode(DemanglerPrinter &Out, const Node *node, unsigned depth) {
  // Indent two spaces per depth.
  for (unsigned i = 0; i < depth * 2; ++i) {
    Out << ' ';
  }
  if (!node) {
    Out << '<<NULL>>';
    return;
  }
  Out << 'kind=' << getNodeKindString(node->getKind());
  if (node->hasText()) {
    Out << ', text=\'' << node->getText() << '\'';
  }
  if (node->hasIndex()) {
    Out << ', index=' << node->getIndex();
  }
  Out << '\n';
  for (auto &child : *node) {
    printNode(Out, child, depth + 1);
  }
}
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    std::string Clipboard::GetText() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  base::string16 text;
  clipboard->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
  return base::UTF16ToUTF8(text);
}
    
    
    {}
    
    void MenuItem::SetTooltip(const std::string& tooltip) {
  is_modified_ = true;
  tooltip_ = base::UTF8ToUTF16(tooltip);
  if (menu_)
    menu_->UpdateStates();
}
    
      private:
    bool ReadText(ClipboardData& data) {
      DCHECK(data.type == TYPE_TEXT);
      base::string16 text;
      clipboard_->ReadText(ui::CLIPBOARD_TYPE_COPY_PASTE, &text);
      data.data.reset(new std::string(base::UTF16ToUTF8(text)));
      return true;
    }
    
        LearnerAdam::LearnerAdam(const vector<Parameter>& parameters,
        const LearningRateSchedule& learningRateSchedule,
        const MomentumSchedule& momentumSchedule,
        bool unitGain,
        const MomentumSchedule& varianceMomentumSchedule,
        double epsilon,
        bool adamax,
        AdditionalLearningOptions additionalOptions)
        : LearnerMomentumSGD(parameters, learningRateSchedule, momentumSchedule,
            unitGain, additionalOptions, 2),
          m_varianceMomentumSchedule(varianceMomentumSchedule), m_epsilon(epsilon),
          m_adamax(adamax)
    {
    }
    
    
    {        memcpy(colStarts.data(), rawColStarts, numOfColsInMatrix * sizeof(SparseIndexType));
        memcpy(nonZeroValues.data(), rawNonZeroValues, numNonZeroValues * sizeof(ElementType));
        memcpy(rowIndices.data(), rawRowIndices, numNonZeroValues * sizeof(SparseIndexType));
    }
    
            NDMaskPtr Mask() const override
        {
            Unpack();
            return Value::Mask();
        }
    
                if (m_varKind == VariableKind::Input)
            {
                for (auto dim : m_shape.Dimensions())
                {
                    if (dim == 0)
                        InvalidArgument('Variable '%S' has invalid shape '%S'.', AsString().c_str(), m_shape.AsString().c_str());
                }
            }
    
    public:
    CrossProcessMutex(const std::string& name)
        : m_handle(NULL),
          m_name('Global\\' + name)
    {
    }
    
            // replacements may point to nodes that are replacements themselves
        // This really can only happen if a replacement itself is an old node.
        for (auto& iter : replacements)
            while (replacements.find(iter.second) != replacements.end())
                iter.second = replacements.find(iter.second)->second;
    
        virtual void /*ComputationNode::*/ BackpropTo(const size_t inputIndex, const FrameRange& fr) override
    {
        if (inputIndex == 0) // left derivative
        {
            Matrix<ElemType> sliceOutputGrad = MaskedGradientFor(fr); // use Masked- version since this is reducing over frames
            Matrix<ElemType> sliceInput1Value = Input(1)->MaskedValueFor(fr);
            m_innerproduct->AssignInnerProductOf(sliceOutputGrad, sliceInput1Value, false);
            InputRef(0).GradientAsMatrix() += *m_innerproduct;
        }
        else // right derivative
        {
            Matrix<ElemType> sliceOutputGrad = GradientFor(fr);
            Matrix<ElemType> sliceInput1Grad = Input(1)->GradientFor(fr);
            m_rightGradient->SetValue(sliceOutputGrad);
            m_rightGradient->ColumnElementMultiplyWith(InputRef(0).ValueAsMatrix());
            sliceInput1Grad += *m_rightGradient;
        }
    }
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    namespace osquery {
    }
    
    #include <iostream>
    
      const auto& views = data_.doc()['views'];
    
    /**
 * @brief Compute a hash digest from the file content at a path.
 *
 * @param hash_type The osquery-supported hash algorithm.
 * @param path Filesystem path (the hash target).
 * @return A string (hex) representation of the hash digest.
 */
std::string hashFromFile(HashType hash_type, const std::string& path);
    
      if (WIFEXITED(process_status)) {
    status = WEXITSTATUS(process_status);
    return PROCESS_EXITED;
  }
    
      if (!::GetExitCodeProcess(process.nativeHandle(), &code)) {
    return false;
  }
    
    FLAG(bool,
     disable_distributed,
     true,
     'Disable distributed queries (default true)');
    
      void RemoveAll(std::shared_ptr<INotifyEventPublisher>& pub) {
    pub->subscriptions_.clear();
    // Reset monitors.
    std::vector<int> wds;
    for (const auto& path : pub->descriptor_inosubctx_) {
      wds.push_back(path.first);
    }
    for (const auto& wd : wds) {
      pub->removeMonitor(wd, true);
    }
  }
    
      // This class is different but also uses different types!
  auto fake_pub = std::make_shared<FakeEventPublisher>();
  status = EventFactory::registerEventPublisher(fake_pub);
  EXPECT_TRUE(status.ok());
    
    #ifdef BENCHMARK_HAS_CXX11
template <class Lambda>
internal::Benchmark* RegisterBenchmark(const char* name, Lambda&& fn) {
  using BenchType =
      internal::LambdaBenchmark<typename std::decay<Lambda>::type>;
  return internal::RegisterBenchmarkInternal(
      ::new BenchType(name, std::forward<Lambda>(fn)));
}
#endif
    
    // Find the coefficient for the high-order term in the running time, by
// minimizing the sum of squares of relative error, for the fitting curve
// given by the lambda expresion.
//   - n             : Vector containing the size of the benchmark tests.
//   - time          : Vector containing the times for the benchmark tests.
//   - fitting_curve : lambda expresion (e.g. [](int n) {return n; };).
    
      // Format items per second
  std::string items;
  if (result.items_per_second > 0) {
    items =
        StrCat(' ', HumanReadableNumber(result.items_per_second), ' items/s');
  }
    
    void Increment(UserCounters *l, UserCounters const& r) {
  // add counters present in both or just in *l
  for (auto &c : *l) {
    auto it = r.find(c.first);
    if (it != r.end()) {
      c.second.value = c.second + it->second;
    }
  }
  // add counters present in r, but not in *l
  for (auto const &tc : r) {
    auto it = l->find(tc.first);
    if (it == l->end()) {
      (*l)[tc.first] = tc.second;
    }
  }
}
    
    
    {
    {
    {  // Native Client does not provide any API to access cycle counter.
  // Use clock_gettime(CLOCK_MONOTONIC, ...) instead of gettimeofday
  // because is provides nanosecond resolution (which is noticable at
  // least for PNaCl modules running on x86 Mac & Linux).
  // Initialize to always return 0 if clock_gettime fails.
  struct timespec ts = { 0, 0 };
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return static_cast<int64_t>(ts.tv_sec) * 1000000000 + ts.tv_nsec;
#elif defined(__aarch64__)
  // System timer of ARMv8 runs at a different frequency than the CPU's.
  // The frequency is fixed, typically in the range 1-50MHz.  It can be
  // read at CNTFRQ special register.  We assume the OS has set up
  // the virtual timer properly.
  int64_t virtual_timer_value;
  asm volatile('mrs %0, cntvct_el0' : '=r'(virtual_timer_value));
  return virtual_timer_value;
#elif defined(__ARM_ARCH)
  // V6 is the earliest arch that has a standard cyclecount
  // Native Client validator doesn't allow MRC instructions.
#if (__ARM_ARCH >= 6)
  uint32_t pmccntr;
  uint32_t pmuseren;
  uint32_t pmcntenset;
  // Read the user mode perf monitor counter access permissions.
  asm volatile('mrc p15, 0, %0, c9, c14, 0' : '=r'(pmuseren));
  if (pmuseren & 1) {  // Allows reading perfmon counters for user mode code.
    asm volatile('mrc p15, 0, %0, c9, c12, 1' : '=r'(pmcntenset));
    if (pmcntenset & 0x80000000ul) {  // Is it counting?
      asm volatile('mrc p15, 0, %0, c9, c13, 0' : '=r'(pmccntr));
      // The counter is set up to count every 64th cycle
      return static_cast<int64_t>(pmccntr) * 64;  // Should optimize to << 6
    }
  }
#endif
  struct timeval tv;
  gettimeofday(&tv, nullptr);
  return static_cast<int64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
#elif defined(__mips__)
  // mips apparently only allows rdtsc for superusers, so we fall
  // back to gettimeofday.  It's possible clock_gettime would be better.
  struct timeval tv;
  gettimeofday(&tv, nullptr);
  return static_cast<int64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
#else
// The soft failover to a generic implementation is automatic only for ARM.
// For other platforms the developer is expected to make an attempt to create
// a fast implementation and use generic version if nothing better is available.
#error You need to define CycleTimer for your OS and CPU
#endif
}
}  // end namespace cycleclock
}  // end namespace benchmark
    
    template <class Tp>
LogType& operator<<(LogType& log, Tp const& value) {
  if (log.out_) {
    *log.out_ << value;
  }
  return log;
}
    
    #define REQUIRES(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(requires_capability(__VA_ARGS__))
    
    #include 'internal_macros.h'
    
    BenchmarkReporter::~BenchmarkReporter() {}
    
    #include <atomic>
    
    BENCHMARK_RELATIVE(sformat_long_string_unsafe, iters) {
  BenchmarkSuspender suspender;
  auto const& longString = getLongString();
  while (iters--) {
    std::string out;
    suspender.dismissing([&] { out = sformat(longString); });
  }
}
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    static void branchTestFunc() {
  uint32_t a = folly::Random::rand32();
  uint32_t b = std::max(1u, folly::Random::rand32());
  if (a > b) {
    FOLLY_SDT(folly, test_static_tracepoint_branch_1, a / b);
  } else {
    FOLLY_SDT(folly, test_static_tracepoint_branch_2, double(a) / double(b));
  }
}
    
        template <
        typename OtherExecutor,
        typename = typename std::enable_if<
            std::is_convertible<OtherExecutor*, ExecutorT*>::value>::type>
    KeepAlive& operator=(KeepAlive<OtherExecutor>&& other) {
      return *this = KeepAlive(std::move(other));
    }
    
    
    {} // namespace folly

    
    #include <string>