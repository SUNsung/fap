
        
        #if defined(X86_BUILD)
#if defined(__GNUC__)
#include <cpuid.h>
#elif defined(_WIN32)
#include <intrin.h>
#endif
#endif
    
    /** Returns the polygon outline of the current block. The returned Pta must
 *  be ptaDestroy-ed after use. */
Pta* PageIterator::BlockPolygon() const {
  if (it_->block() == nullptr || it_->block()->block == nullptr)
    return nullptr;  // Already at the end!
  if (it_->block()->block->pdblk.poly_block() == nullptr)
    return nullptr;  // No layout analysis used - no polygon.
  ICOORDELT_IT it(it_->block()->block->pdblk.poly_block()->points());
  Pta* pta = ptaCreate(it.length());
  int num_pts = 0;
  for (it.mark_cycle_pt(); !it.cycled_list(); it.forward(), ++num_pts) {
    ICOORD* pt = it.data();
    // Convert to top-down coords within the input image.
    float x = static_cast<float>(pt->x()) / scale_ + rect_left_;
    float y = rect_top_ + rect_height_ - static_cast<float>(pt->y()) / scale_;
    ptaAddPt(pta, x, y);
  }
  return pta;
}
    
    #define VARDIR        'configs/' /*parameters files */
#define MAX_ITEMS_IN_SUBMENU 30
    
    
/**********************************************************************
 * split_and_recog_word
 *
 * Split the word into 2 smaller pieces at the largest gap.
 * Recognize the pieces and stick the results back together.
 **********************************************************************/
void Tesseract::split_and_recog_word(WERD_RES *word) {
  // Find the biggest blob gap in the chopped_word.
  int bestgap = -INT32_MAX;
  int split_index = 0;
  for (int b = 1; b < word->chopped_word->NumBlobs(); ++b) {
    TBOX prev_box = word->chopped_word->blobs[b - 1]->bounding_box();
    TBOX blob_box = word->chopped_word->blobs[b]->bounding_box();
    int gap = blob_box.left() - prev_box.right();
    if (gap > bestgap) {
      bestgap = gap;
      split_index = b;
    }
  }
  ASSERT_HOST(split_index > 0);
    }
    
    TEST_P(DerivedTest, DoesBlah) {
  // GetParam works just the same here as if you inherit from TestWithParam.
  EXPECT_TRUE(foo.Blah(GetParam()));
}
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
      // Returns true if FilePath ends with a path separator, which indicates that
  // it is intended to represent a directory. Returns false otherwise.
  // This does NOT check that a directory (or file) actually exists.
  bool IsDirectory() const;
    
    // Forward declarations of ValuesIn(), which is implemented in
// include/gtest/gtest-param-test.h.
template <typename ForwardIterator>
internal::ParamGenerator<
  typename ::testing::internal::IteratorTraits<ForwardIterator>::value_type>
ValuesIn(ForwardIterator begin, ForwardIterator end);
    
     private:
  void CalculatePrimesUpTo(int max) {
    ::std::fill(is_prime_, is_prime_ + is_prime_size_, true);
    is_prime_[0] = is_prime_[1] = false;
    }
    
    #include <string.h>
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    class GetCol2ImGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Im2Col', '', std::vector<string>{GO(0)}, std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Col2Im, GetCol2ImGradient);
    
    #include <grpc/support/port_platform.h>
    
    MeasureInt64 RpcClientReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
      void StartTransportStreamOpBatch(grpc_call_element* elem,
                                   TransportStreamOpBatch* op) override;
    
    // Force InitProtoReflectionServerBuilderPlugin() to be called at static
// initialization time.
struct StaticProtoReflectionPluginInitializer {
  StaticProtoReflectionPluginInitializer() {
    InitProtoReflectionServerBuilderPlugin();
  }
} static_proto_reflection_plugin_initializer;
    
        // SGD optimization with momentum. 
    class LearnerMomentumSGD : public LearnerBase
    {
    public:
        LearnerMomentumSGD(const std::vector<Parameter>& parameters,
                           const LearningRateSchedule& learningRateSchedule,
                           const MomentumSchedule& momentumSchedule,
                           bool unitGain,
                           AdditionalLearningOptions additionalOptions,
                           size_t smoothGradientFactor)
                           : LearnerBase(parameters, learningRateSchedule, additionalOptions),
                           m_momentumSchedule(momentumSchedule), 
                           m_unitGain(unitGain)
        {
            AllocateSmoothedGradients(parameters, smoothGradientFactor, 2);
        }
    }
    
        template <typename T> 
    inline std::string GetVersionsString(size_t currentVersion, size_t dictVersion)
    {
        std::stringstream info;
        info << 'Current ' << Typename<T>() << ' version = ' << currentVersion 
             << ', Dictionary version = ' << dictVersion;
        return info.str();
    }
    
            static bool IsUDF(const Dictionary& dict);
    
    
    {        auto numNonZeroValues = std::get<3>(Data()->SparseCSCDataBuffers<ElementType>());
        auto numOfColsInMatrix = GetMatrixDimensions(Shape()).second + 1;
        return std::tuple<size_t, size_t, size_t>(maxSequenceLen, numOfColsInMatrix, numNonZeroValues);
    }
    
            if (m_valueInitializer->Contains(RandomSeedAttributeName)) {
            auto& seed = m_valueInitializer->operator[](RandomSeedAttributeName);
            if ((unsigned long)seed.Value<size_t>() == SentinelValueForAutoSelectRandomSeed)
                seed.Value<size_t>() = Internal::GenerateRandomSeed();
        }
    
    // ---------------------------------------------------------------------------
// RandomOrdering -- class to help manage randomization of input data
// ---------------------------------------------------------------------------
    
        void Start();
    void Stop();
    void Restart();
    
    void    ImGui_ImplVulkan_InvalidateFontUploadObjects()
{
    if (g_UploadBuffer)
    {
        vkDestroyBuffer(g_Device, g_UploadBuffer, g_Allocator);
        g_UploadBuffer = VK_NULL_HANDLE;
    }
    if (g_UploadBufferMemory)
    {
        vkFreeMemory(g_Device, g_UploadBufferMemory, g_Allocator);
        g_UploadBufferMemory = VK_NULL_HANDLE;
    }
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver. 
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    
    {    std::ifstream file(filename, std::ios::binary | std::ios::ate);
    state.SetBytesProcessed(state.iterations() * file.tellg());
}
BENCHMARK_CAPTURE(ParseFile, jeopardy,      'data/jeopardy/jeopardy.json');
BENCHMARK_CAPTURE(ParseFile, canada,        'data/nativejson-benchmark/canada.json');
BENCHMARK_CAPTURE(ParseFile, citm_catalog,  'data/nativejson-benchmark/citm_catalog.json');
BENCHMARK_CAPTURE(ParseFile, twitter,       'data/nativejson-benchmark/twitter.json');
BENCHMARK_CAPTURE(ParseFile, floats,        'data/numbers/floats.json');
BENCHMARK_CAPTURE(ParseFile, signed_ints,   'data/numbers/signed_ints.json');
BENCHMARK_CAPTURE(ParseFile, unsigned_ints, 'data/numbers/unsigned_ints.json');
    
    #include 'internal_macros.h'
    
    void State::StartKeepRunning() {
  CHECK(!started_ && !finished_);
  started_ = true;
  manager_->StartStopBarrier();
  if (!error_occurred_) ResumeTiming();
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
    
    void BenchmarkFamilies::ClearBenchmarks() {
  MutexLock l(mutex_);
  families_.clear();
  families_.shrink_to_fit();
}
    
    void Finish(UserCounters *l, double cpu_time, double num_threads) {
  for (auto &c : *l) {
    c.second.value = Finish(c.second, cpu_time, num_threads);
  }
}
    
    
    {}  // end namespace benchmark

    
    #include 'check.h'