
        
        
    {
    {  uint64_t nElemX = nElemFromDim(X);
  uint64_t nElemW = nElemFromDim(W);
  uint64_t nElemB = nElemFromDim(b);
  c.flops = 2 * K * M * N + M * N;
  c.bytes_read = (nElemX + nElemW + nElemB) * sizeof(X.data_type());
  c.bytes_written = M * N * sizeof(X.data_type());
  c.params_bytes = (K * N + N) * sizeof(X.data_type());
  return c;
}
} // namespace caffe2

    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
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
    
    
    {    // loop over all rows and fill column entries
    // num_nonzeros[fid] = how many nonzeros have this feature accumulated so far?
    std::vector<size_t> num_nonzeros;
    num_nonzeros.resize(nfeature);
    std::fill(num_nonzeros.begin(), num_nonzeros.end(), 0);
    for (size_t rid = 0; rid < nrow; ++rid) {
      const size_t ibegin = gmat.row_ptr[rid];
      const size_t iend = gmat.row_ptr[rid + 1];
      size_t fid = 0;
      for (size_t i = ibegin; i < iend; ++i) {
        const uint32_t bin_id = gmat.index[i];
        while (bin_id >= gmat.cut.row_ptr[fid + 1]) {
          ++fid;
        }
        if (type_[fid] == kDenseColumn) {
          uint32_t* begin = &index_[boundary_[fid].index_begin];
          begin[rid] = bin_id - index_base_[fid];
        } else {
          uint32_t* begin = &index_[boundary_[fid].index_begin];
          begin[num_nonzeros[fid]] = bin_id - index_base_[fid];
          row_ind_[boundary_[fid].row_ind_begin + num_nonzeros[fid]] = rid;
          ++num_nonzeros[fid];
        }
      }
    }
  }
    
    
    {  /*!
   * \brief dump the model in the requested format
   * \param fmap feature map that may help give interpretations of feature
   * \param with_stats extra statistics while dumping model
   * \param format the format to dump the model in
   * \return a vector of dump for boosters.
   */
  virtual std::vector<std::string> DumpModel(const FeatureMap& fmap,
                                             bool with_stats,
                                             std::string format) const = 0;
  /*!
   * \brief create a gradient booster from given name
   * \param name name of gradient booster
   * \param cache_mats The cache data matrix of the Booster.
   * \param base_margin The base margin of prediction.
   * \return The created booster.
   */
  static GradientBooster* Create(
      const std::string& name,
      const std::vector<std::shared_ptr<DMatrix> >& cache_mats,
      bst_float base_margin);
};
    
      std::vector<std::shared_ptr<DHTNode>> nodes_;
    
    
    {} // namespace aria2

    
        routingTable->setTaskQueue(taskQueue.get());
    routingTable->setTaskFactory(taskFactory.get());
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
    std::shared_ptr<DHTTask>
DHTTaskFactoryImpl::createNodeLookupTask(const unsigned char* targetID)
{
  auto task = std::make_shared<DHTNodeLookupTask>(targetID);
  setCommonProperty(task);
  return task;
}
    
      std::chrono::seconds timeout_;
    
    #include <memory>
    
    #include 'DHTNode.h'
#include 'util.h'
#include 'a2functional.h'
    
    #endif // D_DHT_UNKNOWN_MESSAGE_H

    
    
    {
    {      // See how much iterations should be increased by
      // Note: Avoid division by zero with max(seconds, 1ns).
      double multiplier = min_time * 1.4 / std::max(seconds, 1e-9);
      // If our last run was at least 10% of FLAGS_benchmark_min_time then we
      // use the multiplier directly. Otherwise we use at most 10 times
      // expansion.
      // NOTE: When the last run was at least 10% of the min time the max
      // expansion should be 14x.
      bool is_significant = (seconds / min_time) > 0.1;
      multiplier = is_significant ? multiplier : std::min(10.0, multiplier);
      if (multiplier <= 1.0) multiplier = 2.0;
      double next_iters = std::max(multiplier * iters, iters + 1.0);
      if (next_iters > kMaxIterations) {
        next_iters = kMaxIterations;
      }
      VLOG(3) << 'Next iters: ' << next_iters << ', ' << multiplier << '\n';
      iters = static_cast<int>(next_iters + 0.5);
    }
  }
  // Calculate additional statistics
  auto stat_reports = ComputeStats(reports);
  if ((b.complexity != oNone) && b.last_benchmark_instance) {
    auto additional_run_stats = ComputeBigO(*complexity_reports);
    stat_reports.insert(stat_reports.end(), additional_run_stats.begin(),
                        additional_run_stats.end());
    complexity_reports->clear();
  }
    
    // Information kept per benchmark we may want to run
struct Benchmark::Instance {
  std::string name;
  Benchmark* benchmark;
  ReportMode report_mode;
  std::vector<int> arg;
  TimeUnit time_unit;
  int range_multiplier;
  bool use_real_time;
  bool use_manual_time;
  BigO complexity;
  BigOFunc* complexity_lambda;
  UserCounters counters;
  const std::vector<Statistics>* statistics;
  bool last_benchmark_instance;
  int repetitions;
  double min_time;
  size_t iterations;
  int threads;  // Number of concurrent threads to us
};
    
    bool IsFlag(const char* str, const char* flag) {
  return (ParseFlagValue(str, flag, true) != nullptr);
}
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    
    {} // namespace folly

    
      mutable AtomicStruct<PackedPtr, Atom> ptr_;
    
    template <class T, size_t kNumSlots = 64>
class CoreCachedWeakPtr {
 public:
  explicit CoreCachedWeakPtr(const CoreCachedSharedPtr<T, kNumSlots>& p) {
    for (auto slot : folly::enumerate(slots_)) {
      *slot = p.slots_[slot.index];
    }
  }
    }
    
    
    {  T* get() const {
    return p_;
  }
  T* operator->() const {
    return p_;
  }
  explicit operator bool() const {
    return p_ == nullptr ? false : true;
  }
  bool operator==(const counted_ptr<T, Atom>& p) const {
    return get() == p.get();
  }
};