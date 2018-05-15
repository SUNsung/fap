
        
          /**
   * @brief Computes the error gradient w.r.t. the reordered input.
   *
   * @param top output Blob vector (length 1), providing the error gradient
   *        with respect to the outputs
   *   -# @f$ (M \times ...) @f$:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2):
   *   - @f$ \frac{\partial E}{\partial y} @f$ is de-indexed (summing where
   *     required) back to the input x_1
   *   - This layer cannot backprop to x_2, i.e. propagate_down[1] must be
   *     false.
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      virtual inline const char* type() const { return 'Convolution'; }
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t    bias_desc_;
  cudnnFilterDescriptor_t      filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // CAFFE_ELTWISE_LAYER_HPP_

    
    namespace caffe {
    }
    
    #if GTEST_HAS_GLOBAL_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::wstring& wstr);
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
    // Finally, you can use INSTANTIATE_TEST_CASE_P to instantiate the test
// case with any set of parameters you want. Google Test defines a number
// of functions for generating test parameters. They return what we call
// (surprise!) parameter generators. Here is a  summary of them, which
// are all in the testing namespace:
//
//
//  Range(begin, end [, step]) - Yields values {begin, begin+step,
//                               begin+step+step, ...}. The values do not
//                               include end. step defaults to 1.
//  Values(v1, v2, ..., vN)    - Yields values {v1, v2, ..., vN}.
//  ValuesIn(container)        - Yields values from a C-style array, an STL
//  ValuesIn(begin,end)          container, or an iterator range [begin, end).
//  Bool()                     - Yields sequence {false, true}.
//  Combine(g1, g2, ..., gN)   - Yields all combinations (the Cartesian product
//                               for the math savvy) of the values generated
//                               by the N generators.
//
// For more details, see comments at the definitions of these functions below
// in this file.
//
// The following statement will instantiate tests from the FooTest test case
// each with parameter values 'meeny', 'miny', and 'moe'.
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TYPED_TEST_H_
#define GTEST_INCLUDE_GTEST_GTEST_TYPED_TEST_H_
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ', '
                            << e4 << ', '
                            << e5 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3
                            << '\n' << e4 << ' evaluates to ' << v4
                            << '\n' << e5 << ' evaluates to ' << v5;
}
    
    // The relation between an NativeArray object (see below) and the
// native array it represents.
enum RelationToSource {
  kReference,  // The NativeArray references the native array.
  kCopy        // The NativeArray makes a copy of the native array and
               // owns the copy.
};
    
    
    {
    {    return -1;
  }
};
    
    #include 'gtest/gtest.h'
    
      nDimension_ = 0;
  for (std::size_t d = 0; d < nDimension; d++) {
    if (size[d] > 0) {
      nDimension_++;
      if ((self->nDimension > d) && (size[d] != self->size[d]))
        hasRequiredSize = false;
      if ((self->nDimension > d) && stride && (stride[d] >= 0) && (stride[d] != self->stride[d]))
        hasRequiredSize = false;
    } else {
      break;
    }
  }
  nDimension = nDimension_;
    
    std::vector<std::thread> g_all_workers;
std::mutex g_mutex;
std::string g_data_channel_type;
std::unique_ptr<Barrier> g_barrier;
    
    #define THPStorage TH_CONCAT_3(THP,Real,Storage)
#define THPStorageStr TH_CONCAT_STRING_3(torch.,Real,Storage)
#define THPStorageClass TH_CONCAT_3(THP,Real,StorageClass)
#define THPStorage_(NAME) TH_CONCAT_4(THP,Real,Storage_,NAME)
    
    std::string ByteArray::to_string() const {
  return _data;
}
    
    // WorkloadStats is used to track per request timing for different states
// of the VM.  At the entrypoint to a change of vm state a WorkloadStats object
// should be made to guard the state change with appropriate timers and
// counters.
//
// The states tracked are:
//  - In a request (this is a superset of the interpreter state)
//  - In the interpreter through Dispatch, or DispatchBB (interpOne disregarded)
//  - In the JIT (currently tracks time inside the translate routine)
//
// Note the time in the TC is not tracked.  This is roughly:
//   Time in request - Time in interp
//
// This gives us the relative interp time formula of:
//   Relative interp time = Time in interp / Time in request
struct WorkloadStats final {
  enum State {
    InRequest,
    // -> InInterp   Okay (entering Dispatch loop)
    // -> InTrans    Okay (entering translate)
    InInterp,
    // -> InRequest  Okay (leaving the dispatch loop)
    // -> InTrans    Okay (entering translate)
    InTrans,
    // -> InRequest  Okay (leaving translate)
    // -> InInterp   Okay (leaving translate)
  };
    }
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  auto const off = ThreadLocalNoCheck<T>::node_ptr_offset();
  v << load{emitTLSAddr(v, datum) + safe_cast<int32_t>(off), d};
}
    
    ///////////////////////////////////////////////////////////////////////////////
    
    int next_numa_node(std::atomic_int& curr_node) {
  if (!use_numa) return 0;
  int node;
  do {
    node = curr_node.fetch_add(1, std::memory_order_relaxed);
    node &= numa_node_mask;
  } while (!((numa_node_set >> node) & 1));
  return node;
}
    
    
    {
    {
    {}}}

    
    TCA OfflineCode::collectJmpTargets(FILE *file,
                                   TCA fileStartAddr,
                                   TCA codeStartAddr,
                                   uint64_t codeLen,
                                   vector<TCA> *jmpTargets) {
  return 0;
}
    
      typedef std::function<void(pid_t)> LostChildHandler;
  static void SetLostChildHandler(const LostChildHandler& handler);
    
    #ifndef incl_HPHP_JIT_INLINING_H_
#define incl_HPHP_JIT_INLINING_H_
    
    #include 'hphp/util/synchronizable-multi.h'
#include 'hphp/util/compatibility.h'
#include 'hphp/util/lock.h'
#include 'hphp/util/rank.h'
#include 'hphp/util/timer.h'
    
      F14BasicSet(
      std::initializer_list<value_type> init,
      std::size_t initialCapacity,
      hasher const& hash,
      allocator_type const& alloc)
      : table_{initialCapacity, hash, key_equal{}, alloc} {
    initialInsert(init.begin(), init.end(), initialCapacity);
  }
    
    inline int
hazptr_domain::pushRetired(hazptr_obj* head, hazptr_obj* tail, int count) {
  /*** Full fence ***/ hazptr_mb::light();
  tail->next_ = retired_.load(std::memory_order_acquire);
  while (!retired_.compare_exchange_weak(
      tail->next_,
      head,
      std::memory_order_release,
      std::memory_order_acquire)) {
  }
  return rcount_.fetch_add(count) + count;
}
    
      eventBase.loop();
    
    template <class TPE>
static void join() {
  TPE tpe(10);
  std::atomic<int> completed(0);
  auto f = [&]() {
    burnMs(1)();
    completed++;
  };
  for (int i = 0; i < 1000; i++) {
    tpe.add(f);
  }
  tpe.join();
  EXPECT_EQ(1000, completed);
}
    
      XLOGC_IF(DBG1, 0x3 & 0x4 ? true : false, 'More conditional 4');
  EXPECT_EQ(0, messages.size());
  messages.clear();
    
      XLOG(DBG1, 'testing: ', 1, 2, 3);
  ASSERT_EQ(1, messages.size());
  EXPECT_EQ('testing: 123', messages[0].first.getMessage());
  EXPECT_TRUE(messages[0].first.getFileName().endsWith('XlogTest.cpp'))
      << 'unexpected file name: ' << messages[0].first.getFileName();
  EXPECT_EQ(LogLevel::DBG1, messages[0].first.getLevel());
  EXPECT_EQ('xlog_test.main_file', messages[0].first.getCategory()->getName());
  EXPECT_EQ('xlog_test', messages[0].second->getName());
  messages.clear();
    
    #define JNI_OK          (0)         /* no error */
#define JNI_ERR         (-1)        /* generic error */
#define JNI_EDETACHED   (-2)        /* thread detached from the VM */
#define JNI_EVERSION    (-3)        /* JNI version error */
    
        Value(void)
    : unit(YGUnitUndefined)
    , value(0.0)
    {
    }
    
    
    {void captureBacktrace(size_t skip, vector<InstructionPointer>& stackTrace) {
  // Beware of a bug on some platforms, which makes the trace loop until the
  // buffer is full when it reaches a noexcept function. It seems to be fixed in
  // newer versions of gcc. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=56846
  // TODO(t10738439): Investigate workaround for the stack trace bug
  BacktraceState state = {skip, stackTrace};
  _Unwind_Backtrace(unwindCallback, &state);
}
}
    
    /* static */ Config * Config::create(void)
{
    return new Config();
}
    
     private:
    
    #pragma once
    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);
    
    
#define DEFINE_BOXED_PRIMITIVE(LITTLE, BIG)                          \
  struct J ## BIG : detail::JPrimitive<J ## BIG, j ## LITTLE> {      \
    static auto constexpr kJavaDescriptor = 'Ljava/lang/' #BIG ';';  \
    static auto constexpr kValueMethod = #LITTLE 'Value';            \
    j ## LITTLE LITTLE ## Value() const {                            \
      return value();                                                \
    }                                                                \
  };                                                                 \
  inline local_ref<jobject> autobox(j ## LITTLE val) {               \
    return J ## BIG::valueOf(val);                                   \
  }
    
    void CopyFileToErr(const std::string &Path) {
  Printf('%s', FileToString(Path).c_str());
}
    
    void Fuzzer::RssLimitCallback() {
  Printf(
      '==%lu== ERROR: libFuzzer: out-of-memory (used: %zdMb; limit: %zdMb)\n',
      GetPid(), GetPeakRSSMb(), Options.RssLimitMb);
  Printf('   To change the out-of-memory limit use -rss_limit_mb=<N>\n\n');
  if (EF->__sanitizer_print_memory_profile)
    EF->__sanitizer_print_memory_profile(95);
  DumpCurrentUnit('oom-');
  Printf('SUMMARY: libFuzzer: out-of-memory\n');
  PrintFinalStats();
  _Exit(Options.ErrorExitCode); // Stop right now.
}