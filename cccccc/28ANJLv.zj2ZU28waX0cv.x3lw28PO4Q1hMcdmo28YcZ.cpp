
        
          vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    namespace caffe {
    }
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    namespace caffe {
    }
    
      EltwiseParameter_EltwiseOp op_;
  vector<Dtype> coeffs_;
  Blob<int> max_idx_;
    
    /**
 * @brief Computes @f$ y = \gamma ^ {\alpha x + \beta} @f$,
 *        as specified by the scale @f$ \alpha @f$, shift @f$ \beta @f$,
 *        and base @f$ \gamma @f$.
 */
template <typename Dtype>
class ExpLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ExpParameter exp_param,
   *     with ExpLayer options:
   *   - scale (\b optional, default 1) the scale @f$ \alpha @f$
   *   - shift (\b optional, default 0) the shift @f$ \beta @f$
   *   - base (\b optional, default -1 for a value of @f$ e \approx 2.718 @f$)
   *         the base @f$ \gamma @f$
   */
  explicit ExpLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    # else
    
    // To write value-parameterized tests, first you should define a fixture
// class. It is usually derived from testing::TestWithParam<T> (see below for
// another inheritance scheme that's sometimes useful in more complicated
// class hierarchies), where the type of your parameter values.
// TestWithParam<T> is itself derived from testing::Test. T can be any
// copyable type. If it's a raw pointer, you are responsible for managing the
// lifespan of the pointed values.
    
    template <typename T>
void UniversalTersePrint(const T& value, ::std::ostream* os) {
  UniversalTersePrinter<T>::Print(value, os);
}
    
    // Then, use TYPED_TEST() instead of TEST_F() to define as many typed
// tests for this test case as you want.
TYPED_TEST(FooTest, DoesBlah) {
  // Inside a test, refer to TypeParam to get the type parameter.
  // Since we are inside a derived class template, C++ requires use to
  // visit the members of FooTest via 'this'.
  TypeParam n = this->value_;
    }
    
    template <$for j, [[class Generator$j]]>
class CartesianProductHolder$i {
 public:
CartesianProductHolder$i($for j, [[const Generator$j& g$j]])
      : $for j, [[g$(j)_(g$j)]] {}
  template <$for j, [[typename T$j]]>
  operator ParamGenerator< ::std::tr1::tuple<$for j, [[T$j]]> >() const {
    return ParamGenerator< ::std::tr1::tuple<$for j, [[T$j]]> >(
        new CartesianProductGenerator$i<$for j, [[T$j]]>(
$for j,[[
    }
    }
    
    #if GTEST_OS_LINUX_ANDROID
// Used to define __ANDROID_API__ matching the target NDK API level.
#  include <android/api-level.h>  // NOLINT
#endif
    
    
    {  return result;
}
    
      explicit WorkloadStats(State guardedState);
  ~WorkloadStats();
    
    int64_t getCPUTimeNanos() {
  return RuntimeOption::EvalJitTimer ? HPHP::Timer::GetThreadCPUTimeNanos() :
         -1;
}
    
    int64_t gettime_ns(clockid_t clock) {
  if (clock != CLOCK_THREAD_CPUTIME_ID) {
    return folly::chrono::clock_gettime_ns(clock);
  }
    }
    
    namespace HPHP { namespace jit {
///////////////////////////////////////////////////////////////////////////////
    }
    }
    
      if (file_reset(ms) == -1)
    goto done;
    
    namespace HPHP { namespace jit {
    }
    }
    
      struct HandlerBundle {
    HandlerBundle() = delete;
    HandlerBundle(const Variant& handler,
                  req::unique_ptr<CufIter>& cufIter) :
      m_handler(handler) {
      m_cufIter = std::move(cufIter);
    }
    Variant m_handler; // used to respond to f_spl_autoload_functions
    req::unique_ptr<CufIter> m_cufIter; // used to invoke handlers
  };
    
    Array createBacktrace(const BacktraceArgs& backtraceArgs);
void addBacktraceToStructLog(const Array& bt, StructuredLogEntry& cols);
int64_t createBacktraceHash();
req::ptr<CompactTrace> createCompactBacktrace();
    
    void collectImpl(HeapImpl& heap, const char* phase, GCBits& mark_version) {
  VMRegAnchor _;
  if (t_eager_gc && RuntimeOption::EvalFilterGCPoints) {
    t_eager_gc = false;
    auto pc = vmpc();
    if (t_surprise_filter.test(pc)) {
      if (RuntimeOption::EvalGCForAPC) {
        if (!APCGCManager::getInstance().excessedGCTriggerBar()) {
          return;
        }
      } else {
        return;
      }
    }
    t_surprise_filter.insert(pc);
    TRACE(2, 'eager gc %s at %p\n', phase, pc);
    phase = 'eager';
  } else {
    TRACE(2, 'normal gc %s at %p\n', phase, vmpc());
  }
  if (t_gc_num == 0) {
    t_enable_samples = StructuredLog::coinflip(RuntimeOption::EvalGCSampleRate);
  }
  t_pre_stats = tl_heap->getStatsCopy(); // don't check or trigger OOM
  mark_version = (mark_version == MaxMark) ? MinMark :
                 GCBits(uint8_t(mark_version) + 1);
  Collector collector(
    heap,
    RuntimeOption::EvalGCForAPC ? &APCGCManager::getInstance() : nullptr,
    mark_version
  );
  if (RuntimeOption::EvalGCForAPC) {
    collector.collect<true>();
  } else {
    collector.collect<false>();
  }
  if (Trace::moduleEnabledRelease(Trace::gc, 1)) {
    traceCollection(collector);
  }
  if (t_enable_samples) {
    logCollection(phase, collector);
  }
  ++t_gc_num;
}
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
      shared_ptr<T> lock() const {
    std::shared_ptr<T> r = Base::lock();
    return shared_ptr<T>(r, sizeof(*r), type_scan::getIndexForScan<T>());
  }
  TYPE_SCAN_IGNORE_BASES(Base);
  TYPE_SCAN_IGNORE_ALL;
    
    namespace HPHP {
    }
    
    
    {
    {
    {}  // namespace utils
}  // namespace op
}  // namespace mxnet
    
    /*! \brief the dispatch mode of the operator */
enum class DispatchMode {
  kUndefined = -1,
  // dispatch on FCompute or FStatefulCompute
  kFCompute,
  // dispatch on FComputeEx or FStatefulComputeEx, if available
  kFComputeEx,
  // dispatch on FCompute or FStatefulCompute, and performs storage fallback
  kFComputeFallback,
  // special dispatch mode for variables
  kVariable,
};
    
      auto write = [&](std::vector<AttrType> *vec, size_t size, const char *name) {
      for (size_t i = 0; i < size; ++i) {
        CHECK(assign(&(*vec)[i], dattr))
          << 'Incompatible attr in node ' << attrs.name << ' at ' << i << '-th '
          << name << ': ' << 'expected ' << attr_string(dattr)
          << ', got ' << attr_string((*vec)[i]);
      }
    };
  write(in_attrs, in_size, 'input');
  write(out_attrs, out_size, 'output');
    
    bool ElementWiseSumForwardInferStorageType(const nnvm::NodeAttrs& attrs,
                                           const int dev_mask,
                                           DispatchMode* dispatch_mode,
                                           std::vector<int> *in_attrs,
                                           std::vector<int> *out_attrs) {
  CHECK(!in_attrs->empty());
  CHECK_EQ(out_attrs->size(), 1U);
  bool ret = ElemwiseStorageAttr<false, true, false>(attrs, dev_mask, dispatch_mode,
                                                     in_attrs, out_attrs);
#if MXNET_USE_MKLDNN == 1
  // We should always use FComputeEx.
  if (dev_mask == mshadow::cpu::kDevMask
      && common::ContainsOnlyStorage(*in_attrs, kDefaultStorage)
      && out_attrs->at(0) == kDefaultStorage) {
    *dispatch_mode = DispatchMode::kFComputeEx;
  }
#endif
  return ret;
}
    
    
namespace mxnet {
namespace op {
    }
    }
    
        // file I/O
    void write(FILE *f, const char *name) const
    {
        fputTag(f, 'BMAT');
        fputstring(f, name);
        fputint(f, (int) this->numrows);
        fputint(f, (int) this->numcols);
        const auto &us = *this;
        foreach_column (j, us)
        {
            auto column = ssematrixbase::col(j);
            fwriteOrDie(column, f);
        }
        fputTag(f, 'EMAT');
    }
    
        while (iter->Next()) {
      page->Push(iter->Value());
      if (page->MemCostBytes() >= kPageSize) {
        bytes_write += page->MemCostBytes();
        writer.PushWrite(std::move(page));
        writer.Alloc(&page);
        page->Clear();
        double tdiff = dmlc::GetTime() - tstart;
        LOG(CONSOLE) << 'Writing to ' << cache_info << ' in '
                     << ((bytes_write >> 20UL) / tdiff) << ' MB/s, '
                     << (bytes_write >> 20UL) << ' written';
      }
    }
    if (page->data.size() != 0) {
      writer.PushWrite(std::move(page));
    }
    
    // tress
#include '../src/tree/split_evaluator.cc'
#include '../src/tree/tree_model.cc'
#include '../src/tree/tree_updater.cc'
#include '../src/tree/updater_colmaker.cc'
#include '../src/tree/updater_fast_hist.cc'
#include '../src/tree/updater_prune.cc'
#include '../src/tree/updater_refresh.cc'
#include '../src/tree/updater_sync.cc'
#include '../src/tree/updater_histmaker.cc'
#include '../src/tree/updater_skmaker.cc'
    
    /*!
 * \brief Macro to register gradient booster.
 *
 * \code
 * // example of registering a objective ndcg@k
 * XGBOOST_REGISTER_GBM(GBTree, 'gbtree')
 * .describe('Boosting tree ensembles.')
 * .set_body([]() {
 *     return new GradientBooster<TStats>();
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_GBM(UniqueId, Name)                            \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::GradientBoosterReg &          \
  __make_ ## GradientBoosterReg ## _ ## UniqueId ## __ =                \
      ::dmlc::Registry< ::xgboost::GradientBoosterReg>::Get()->__REGISTER__(Name)
    
    namespace xgboost {
    }
    
    TEST(Metric, Error) {
  xgboost::Metric * metric = xgboost::Metric::Create('error');
  ASSERT_STREQ(metric->Name(), 'error');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.5f, 0.001f);
    }
    
    #include <dmlc/omp.h>
#include <xgboost/logging.h>
#include <algorithm>
#include '../common/math.h'
    
        // From SDL_ttf: Handy routines for converting from fixed point
    #define FT_CEIL(X)  (((X + 63) & -64) / 64)
    
        // Setup style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(window))
                done = true;
        }
    }
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    
    {    // Update mouse position
    const ImVec2 mouse_pos_backup = io.MousePos;
    io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
#ifdef __EMSCRIPTEN__
    const bool focused = true; // Emscripten
#else
    const bool focused = glfwGetWindowAttrib(g_Window, GLFW_FOCUSED) != 0;
#endif
    if (focused)
    {
        if (io.WantSetMousePos)
        {
            glfwSetCursorPos(g_Window, (double)mouse_pos_backup.x, (double)mouse_pos_backup.y);
        }
        else
        {
            double mouse_x, mouse_y;
            glfwGetCursorPos(g_Window, &mouse_x, &mouse_y);
            io.MousePos = ImVec2((float)mouse_x, (float)mouse_y);
        }
    }
}
    
      if (args[1]->IsUndefined()) {
    db_wrapper->status_ = db_wrapper->db_->Get(
        rocksdb::ReadOptions(), key, &value);
  } else if (db_wrapper->HasFamilyNamed(cf, db_wrapper)) {
    db_wrapper->status_ = db_wrapper->db_->Get(
        rocksdb::ReadOptions(), db_wrapper->columnFamilies_[cf], key, &value);
  } else {
    return scope.Close(Null());
  }
    
    //****************************
// Advanced Hash Functions
//****************************