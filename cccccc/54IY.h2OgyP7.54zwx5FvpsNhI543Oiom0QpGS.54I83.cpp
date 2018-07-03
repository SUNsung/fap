
        
            // pass address (value interface)
    iterator find(const K& key)                     { return m.find(&key); }
    const_iterator find(const K& key) const         { return m.find(&key); }
    iterator lower_bound(const K& key)              { return m.lower_bound(&key); }
    const_iterator lower_bound(const K& key) const  { return m.lower_bound(&key); }
    size_type erase(const K& key)                   { return m.erase(&key); }
    size_type count(const K& key) const             { return m.count(&key); }
    
      fname = LockFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kDBLockFile, type);
    
    static void DeleteEntry(const Slice& key, void* value) {
  TableAndFile* tf = reinterpret_cast<TableAndFile*>(value);
  delete tf->table;
  delete tf->file;
  delete tf;
}
    
    
    {  ASSERT_TRUE(! Overlaps(NULL, 'j'));
  ASSERT_TRUE(! Overlaps('r', NULL));
  ASSERT_TRUE(Overlaps(NULL, 'p'));
  ASSERT_TRUE(Overlaps(NULL, 'p1'));
  ASSERT_TRUE(Overlaps('q', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
}
    
    class WriteBatchTest { };
    
    // Print histogram of operation timings
static bool FLAGS_histogram = false;
    
      // Advanced functions: these are used to reduce the space requirements
  // for internal data structures like index blocks.
    
    
    {
    {}}

    
    //////////////////////////////////////////////////////////////////////
    
    
    {  bool ret;
  if (isLongOption(option)) {
    ret = setLongOption(option, value.toInt64());
  } else {
    raise_warning('curl_share_setopt():'
                  'Invalid curl share configuration option');
    ret = false;
  }
  return ret;
}
    
      // Pop the return values. Since they will be teleported to their places in
  // memory, we don't care about their types.
  for (int i = 0; i < nvals - 1; i++) {
    gen(env, StOutValue, IndexData(i), fp(env), pop(env, DataTypeGeneric));
  }
    
    /**
 * This is wrapper for fds that cannot be closed.
 */
struct BuiltinFile : PlainFile {
  explicit BuiltinFile(FILE *stream);
  explicit BuiltinFile(int fd);
  ~BuiltinFile() override;
  bool close() override;
  void sweep() override;
};
static_assert(sizeof(BuiltinFile) == sizeof(PlainFile),
              'BuiltinFile inherits PlainFile::heapSize()');
    
                if (rv == 0)
                rv = numCols;
            else if (rv != numCols)
                LogicError('DecimateMinibatch: Inconsistent number of columns among inputs (found %d and %d).', (int) rv, (int) numCols);
    
    template<> inline
dnnError_t dnnInnerProductCreateBackwardBias<float>(
    dnnPrimitive_t* pInnerProduct,
    dnnPrimitiveAttributes_t attributes,
    size_t dimensions,
    const size_t srcSize[])
{
    return dnnInnerProductCreateBackwardBias_F32(
        pInnerProduct, attributes, dimensions, srcSize);
}
    
        template <typename ElementType>
    void Value::CopyVariableValueToCSCSparse(size_t sequenceLength, std::vector<SparseIndexType>& colStarts, std::vector<SparseIndexType>& rowIndices, std::vector<ElementType>& nonZeroValues, size_t& numNonZeroValues)
    {
        // All sanity check has been done in ValidateSparseCSCAndGetIndexSizes().
        NDArrayViewPtr cpuView;
        if (Device().Type() == DeviceKind::GPU)
        {
            // Todo: GPUSparseMatrix to CPUSparseMatrix is not implemented in matrix, as a workaround the dense matrix is used as intermediate presentation.
            // However, it is possible that data value very close to 0 could treated as 0 after transformation between dense and sparse.
            auto cpuDenseView = MakeSharedObject<NDArrayView>(GetDataType(), StorageFormat::Dense, Shape(), DeviceDescriptor::CPUDevice());
            cpuDenseView->CopyFrom(*Data());
            cpuView = MakeSharedObject<NDArrayView>(GetDataType(), GetStorageFormat(), Shape(), DeviceDescriptor::CPUDevice());
            cpuView->CopyFrom(*cpuDenseView);
        }
        else
            cpuView = Data();
    }
    
    // allows to write cudaFunction() || 'error'   (CUDA runtime)
static
#ifdef WIN32
    __declspec(noinline)
#endif
        void
        operator||(cudaError_t rc, const char* msg)
{
    if (rc != cudaSuccess)
    {
        char buf[1000];
        sprintf_s(buf, 1000, '%s: %s (cuda error %d)', msg, cudaGetErrorString(rc), rc);
        cudafail(buf);
    }
}
    
        // remove all the added BN nodes from evaluation group
    for (auto& bnNode : bnNodes)
    {
        m_net->RemoveFromNodeGroup(L'evaluation', bnNode);
    }
    
    namespace Microsoft { namespace MSR { namespace BS {
    }
    }
    }
    
    
    {    FileParse(configString);
}
    
    #include <vector>
#include <memory>
#include 'latticearchive.h'
    
    TEST(Metric, PoissionNegLogLik) {
  xgboost::Metric * metric = xgboost::Metric::Create('poisson-nloglik');
  ASSERT_STREQ(metric->Name(), 'poisson-nloglik');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0.5f, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.2f, 0.1f, 0.2f},
                            {  0,   0,   1,   1}),
              1.1280f, 0.001f);
}

    
    #include '../common/host_device_vector.h'
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    #include <dmlc/omp.h>
#include <xgboost/logging.h>
#include <algorithm>
#include '../common/math.h'
    
    namespace xgboost {
    }
    
    namespace xgboost {
/*!
 * \brief interface of tree update module, that performs update of a tree.
 */
class TreeUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~TreeUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief perform update to the tree models
   * \param gpair the gradient pair statistics of the data
   * \param data The data matrix passed to the updater.
   * \param trees references the trees to be updated, updater will change the content of trees
   *   note: all the trees in the vector are updated, with the same statistics,
   *         but maybe different random seeds, usually one tree is passed in at a time,
   *         there can be multiple trees when we train random forest style model
   */
  virtual void Update(HostDeviceVector<GradientPair>* gpair,
                      DMatrix* data,
                      const std::vector<RegTree*>& trees) = 0;
    }
    }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
        ~ScopedJstring();
    
        Size(void)
    : width(0.0)
    , height(0.0)
    {
    }
    
    #pragma once
#include <atomic>
#include <fb/assert.h>
#include <fb/noncopyable.h>
#include <fb/nonmovable.h>
#include <fb/RefPtr.h>
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
    void ParseCommandLineFlags(int* argc, char** argv) {
  using namespace benchmark;
  for (int i = 1; i < *argc; ++i) {
    if (ParseBoolFlag(argv[i], 'benchmark_list_tests',
                      &FLAGS_benchmark_list_tests) ||
        ParseStringFlag(argv[i], 'benchmark_filter', &FLAGS_benchmark_filter) ||
        ParseDoubleFlag(argv[i], 'benchmark_min_time',
                        &FLAGS_benchmark_min_time) ||
        ParseInt32Flag(argv[i], 'benchmark_repetitions',
                       &FLAGS_benchmark_repetitions) ||
        ParseBoolFlag(argv[i], 'benchmark_report_aggregates_only',
                      &FLAGS_benchmark_report_aggregates_only) ||
        ParseStringFlag(argv[i], 'benchmark_format', &FLAGS_benchmark_format) ||
        ParseStringFlag(argv[i], 'benchmark_out', &FLAGS_benchmark_out) ||
        ParseStringFlag(argv[i], 'benchmark_out_format',
                        &FLAGS_benchmark_out_format) ||
        ParseStringFlag(argv[i], 'benchmark_color', &FLAGS_benchmark_color) ||
        // 'color_print' is the deprecated name for 'benchmark_color'.
        // TODO: Remove this.
        ParseStringFlag(argv[i], 'color_print', &FLAGS_benchmark_color) ||
        ParseBoolFlag(argv[i], 'benchmark_counters_tabular',
                        &FLAGS_benchmark_counters_tabular) ||
        ParseInt32Flag(argv[i], 'v', &FLAGS_v)) {
      for (int j = i; j != *argc - 1; ++j) argv[j] = argv[j + 1];
    }
    }
    }
    
      int32_t result = default_value;
  if (!ParseInt32(std::string('Environment variable ') + env_var, string_value,
                  &result)) {
    std::cout << 'The default value ' << default_value << ' is used.\n';
    return default_value;
  }
    
    namespace benchmark {
    }
    
    
    {  // Enter the barrier and wait until all other threads have also
  // entered the barrier.  Returns iff this is the last thread to
  // enter the barrier.
  bool createBarrier(MutexLock& ml) REQUIRES(lock_) {
    CHECK_LT(entered_, running_threads_);
    entered_++;
    if (entered_ < running_threads_) {
      // Wait for all threads to enter
      int phase_number_cp = phase_number_;
      auto cb = [this, phase_number_cp]() {
        return this->phase_number_ > phase_number_cp ||
               entered_ == running_threads_;  // A thread has aborted in error
      };
      phase_condition_.wait(ml.native_handle(), cb);
      if (phase_number_ > phase_number_cp) return false;
      // else (running_threads_ == entered_) and we are the last thread.
    }
    // Last thread has reached the barrier
    phase_number_++;
    entered_ = 0;
    return true;
  }
};
    
    
    {    return false;
  }
    
    auto Sqr = [](const double dat) { return dat * dat; };
auto Sqrt = [](const double dat) {
  // Avoid NaN due to imprecision in the calculations
  if (dat < 0.0) return 0.0;
  return std::sqrt(dat);
};