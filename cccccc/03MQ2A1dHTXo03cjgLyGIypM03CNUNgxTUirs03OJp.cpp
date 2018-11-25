
        
            const auto* shapes_and_types = c.output_handle_shapes_and_types(i);
    if (shapes_and_types != nullptr) {
      auto* out_handle_data = out.mutable_handle_data();
      out_handle_data->set_is_set(true);
      for (const auto& p : *shapes_and_types) {
        auto* out_shape_and_type = out_handle_data->add_shape_and_type();
        ProtoFromShapeHandle(p.shape, &c, out_shape_and_type->mutable_shape());
        out_shape_and_type->set_dtype(p.dtype);
      }
    }
    
    // Must be included first
#include 'tensorflow/python/lib/core/numpy.h'
    
    void CostAnalyzer::PredictCosts(CostEstimator* cost_estimator,
                                CostGraphDef* cost_graph, int64* total_time) {
  TF_CHECK_OK(cost_estimator->Initialize(*item_));
  Costs costs;
  const Status status =
      cost_estimator->PredictCosts(item_->graph, cost_graph, &costs);
  *total_time = costs.execution_time.count();
  if (!status.ok()) {
    LOG(ERROR) << 'Could not estimate the cost for item ' << item_->id << ': '
               << status.error_message();
    return;
  }
}
    
      void Compute(OpKernelContext* context) override {
    // Output a scalar string.
    Tensor* output_tensor = nullptr;
    OP_REQUIRES_OK(context,
                   context->allocate_output(0, TensorShape(), &output_tensor));
    auto output = output_tensor->scalar<string>();
    }
    
    REGISTER_OP('Add').Doc(R'doc(
An op to test that duplicate registrations don't override previously
registered ops.
)doc');
    
    REGISTER_OP('Invalid')
    .Attr('invalid attr: int32')  // invalid since the name has a space.
    .Doc(R'doc(
An op to test that invalid ops do not successfully generate invalid python code.
)doc');
    
    template <typename Functor>
void CompareUFunc(char** args, npy_intp* dimensions, npy_intp* steps,
                  void* data) {
  BinaryUFunc<bfloat16, npy_bool, Functor>(args, dimensions, steps, data);
}
    
    static void TensorReleaser_dealloc(PyObject* pself) {
  TensorReleaser* self = reinterpret_cast<TensorReleaser*>(pself);
  (*self->destructor)();
  delete self->destructor;
  TensorReleaserType.tp_free(pself);
}
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    struct PyDecrefDeleter {
  void operator()(PyObject* p) const { Py_DECREF(p); }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    ScopedActivateExecutorContext::ScopedActivateExecutorContext(
    ScopedActivateExecutorContext &&other)
    : driver_scoped_activate_context_(other.driver_scoped_activate_context_) {
  other.driver_scoped_activate_context_ = nullptr;
}
    
      ~ScopedActivateExecutorContext();
    
    // Generate param traits write methods.
#include 'ipc/param_traits_write_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    // Multiply-included file, no traditional include guard.
#include <string>
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Base);
};
    
    #endif //CONTENT_NW_SRC_API_EVENT_EVENT_H_

    
       bool GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const override;
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
          if (bitmap.isNull()) {
        return true;
      }
    
     protected:
  ~NwClipboardClearSyncFunction() override;
    
    class NwObjDestroyFunction : public NWSyncExtensionFunction {
 public:
  NwObjDestroyFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
        enum CONVERT_POLICY
    {
        CONVERT_POLICY_WRAP,
        CONVERT_POLICY_SATURATE
    };
    
        void operator() (const uint8x16_t & v_src0, const uint8x16_t & v_src1,
                     uint8x16_t & v_dst) const
    {
        v_dst = vorrq_u8(v_src0, v_src1);
    }
    
    #ifndef __ANDROID__
        for (; dj < roiw32; sj += 128, dj += 32)
        {
            internal::prefetch(src + sj);
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(s32, u16, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d0-d1}, [%[src1]]                              \n\t'
             'vld1.32 {d2-d3}, [%[src2]]                              \n\t'
             'vqmovun.s32 d4, q0                                      \n\t'
             'vqmovun.s32 d5, q1                                      \n\t'
             'vst1.16 {d4-d5}, [%[dst]]                               \n\t'
             : /*no output*/
             : [src1] 'r' (_src + i + 0),
               [src2] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i)
             : 'd0','d1','d2','d3','d4','d5'
         );
     }
})
#else
CVT_FUNC(s32, u16, 8,
,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         int32x4_t vline1_s32 = vld1q_s32(_src + i);
         int32x4_t vline2_s32 = vld1q_s32(_src + i + 4);
    }
    }
    
            if (i < roiw4)
        {
            internal::prefetch(src + i + 2);
            uint64x2_t vln1 = vld1q_u64((const u64*)(src + i));
            uint64x2_t vln2 = vld1q_u64((const u64*)(src + i + 2));
    }
    
                v_dst.val[0] = vcombine(vget_high(v_src.val[0]), vget_low(v_src.val[0]));
            v_dst.val[1] = vcombine(vget_high(v_src.val[1]), vget_low(v_src.val[1]));
            v_dst.val[2] = vcombine(vget_high(v_src.val[2]), vget_low(v_src.val[2]));
    
    #include <carotene/definitions.hpp>
    
    
    {REGISTER_INTERNAL(KafkaTopicsConfigParserPlugin,
                  'config_parser',
                  'kafka_topics');
} // namespace osquery

    
    #pragma once
    
    
    {  // Any views left are views that don't exist in the new configuration file
  // so we tear them down and remove them from the database.
  for (const auto& old_view : erase_views) {
    osquery::query('DROP VIEW ' + old_view, r);
    deleteDatabaseValue(kQueries, kConfigViews + old_view);
  }
  return Status(0, 'OK');
}
    
    void BENCHFUN(fillCtor)(int iters, int size) {
  FOR_EACH_RANGE (i, 0, iters) {
    VECTOR v(size_t(size), randomObject<VECTOR::value_type>());
    doNotOptimizeAway(&v);
  }
}
BENCHMARK_PARAM(BENCHFUN(fillCtor), 16)
BENCHMARK_PARAM(BENCHFUN(fillCtor), 128)
BENCHMARK_PARAM(BENCHFUN(fillCtor), 1024)
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
    FOLLY_ALWAYS_INLINE static uint32_t alwaysInlineTestFunc() {
  uint32_t a = folly::Random::rand32();
  uint32_t b = folly::Random::rand32();
  FOLLY_SDT(folly, test_static_tracepoint_always_inline, a, b);
  return a + b;
}
    
    void Executor::addWithPriority(Func, int8_t /* priority */) {
  throw std::runtime_error(
      'addWithPriority() is not implemented for this Executor');
}
    
        void reset() {
      if (Executor* executor = get()) {
        if (exchange(executorAndDummyFlag_, 0) & kDummyFlag) {
          return;
        }
        executor->keepAliveRelease();
      }
    }
    
    
    {} // namespace folly

    
      /**
   * Returns a secure random uint32_t
   */
  static uint32_t secureRand32() {
    return secureRandom<uint32_t>();
  }
    
    /// Wrapper around the makeCompressionCounterHandler() extension point.
class CompressionCounter {
 public:
  CompressionCounter() {}
  CompressionCounter(
      folly::io::CodecType codecType,
      folly::StringPiece codecName,
      folly::Optional<int> level,
      CompressionCounterKey key,
      CompressionCounterType counterType) {
    initialize_ = [=]() {
      return makeCompressionCounterHandler(
          codecType, codecName, level, key, counterType);
    };
    DCHECK(!initialize_.hasAllocatedMemory());
  }
    }
    
      bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto newptr = get_newptr(n);
    PackedPtr oldptr, expectedptr;
    }