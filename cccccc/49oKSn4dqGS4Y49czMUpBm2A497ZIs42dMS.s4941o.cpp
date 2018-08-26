
        
        void ProtoFromShapeHandle(tensorflow::shape_inference::ShapeHandle s,
                          tensorflow::shape_inference::InferenceContext* c,
                          TensorShapeProto* out) {
  if (c->RankKnown(s)) {
    const int32 rank = c->Rank(s);
    for (int i = 0; i < rank; ++i) {
      shape_inference::DimensionHandle d = c->Dim(s, i);
      auto* out_dim = out->add_dim();
      if (c->ValueKnown(d)) {
        out_dim->set_size(c->Value(d));
      } else {
        out_dim->set_size(-1);
      }
    }
  } else {
    out->set_unknown_rank(true);
  }
}
    
    #include 'tensorflow/core/platform/env.h'
#include 'tensorflow/core/platform/null_file_system.h'
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    void CostAnalyzer::PreprocessCosts() {
  for (int i = 0; i < op_perf_.op_performance_size(); i++) {
    OpPerformance* perf = op_perf_.mutable_op_performance(i);
    const OpPerformance& analytical = op_perf_analytical_.op_performance(i);
    perf->set_compute_time(analytical.compute_time());
    perf->set_memory_time(analytical.memory_time());
    double measured_cost = perf->compute_cost();
    }
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Returns the id number of the bfloat16 numpy type.
int Bfloat16NumpyType();
    
    // Creates a tensor in 'ret' from the input Ndarray.
Status NdarrayToTensor(PyObject* obj, Tensor* ret);
    
    Status ArrayFromMemory(int dim_size, npy_intp* dims, void* data, DataType dtype,
                       std::function<void()> destructor, PyObject** result) {
  int size = 1;
  for (int i = 0; i < dim_size; ++i) {
    size *= dims[i];
  }
  if (dtype == DT_STRING || dtype == DT_RESOURCE || size == 0) {
    return errors::FailedPrecondition(
        'Cannot convert strings, resources, or empty Tensors.');
  }
    }
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_PY_FUNC_H_
#define TENSORFLOW_PYTHON_LIB_CORE_PY_FUNC_H_
    
    namespace tensorflow {
    }
    
    void PyRecordReader::Close() {
  delete reader_;
  delete file_;
  file_ = nullptr;
  reader_ = nullptr;
}
    
    
    {}  // namespace atom
    
    bool UvTaskRunner::PostNonNestableDelayedTask(const base::Location& from_here,
                                              base::OnceClosure task,
                                              base::TimeDelta delay) {
  return PostDelayedTask(from_here, std::move(task), delay);
}
    
    // static
void AutoUpdater::BuildPrototype(v8::Isolate* isolate,
                                 v8::Local<v8::FunctionTemplate> prototype) {
  prototype->SetClassName(mate::StringToV8(isolate, 'AutoUpdater'));
  mate::ObjectTemplateBuilder(isolate, prototype->PrototypeTemplate())
      .SetMethod('checkForUpdates', &auto_updater::AutoUpdater::CheckForUpdates)
      .SetMethod('getFeedURL', &auto_updater::AutoUpdater::GetFeedURL)
      .SetMethod('setFeedURL', &AutoUpdater::SetFeedURL)
      .SetMethod('quitAndInstall', &AutoUpdater::QuitAndInstall);
}
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_browser_browser_view, Initialize)

    
      v8::Local<v8::Value> GetWebContents();
    
    #include 'atom/browser/api/atom_api_browser_window.h'
    
    namespace api {
    }
    
    #include 'atom/browser/atom_browser_main_parts.h'
#include 'atom/common/native_mate_converters/callback.h'
#include 'atom/common/native_mate_converters/value_converter.h'
#include 'base/json/json_reader.h'
#include 'base/json/json_writer.h'
#include 'base/memory/ptr_util.h'
#include 'content/public/browser/devtools_agent_host.h'
#include 'content/public/browser/web_contents.h'
#include 'native_mate/dictionary.h'
#include 'native_mate/object_template_builder.h'
    
    #include <string>
#include <utility>
#include <vector>
    
    std::string MessageGenerator::full_class_name() {
  return GetClassName(descriptor_);
}
    
    #endif  // GOOGLE_PROTOBUF_COMPILER_CSHARP_PRIMITIVE_FIELD_H__
    
    #ifndef UINT32_MAX
    #define UINT32_MAX (4294967295U)
#endif
    
    void absDiff(const Size2D &size,
             const f32 * src0Base, ptrdiff_t src0Stride,
             const f32 * src1Base, ptrdiff_t src1Stride,
             f32 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, AbsDiff<f32>());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    void bitwiseXor(const Size2D &size,
                const u8 *src0Base, ptrdiff_t src0Stride,
                const u8 *src1Base, ptrdiff_t src1Stride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseXor());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    #include <cstddef>
#include <cstdlib>
#include <algorithm>
    
    
    {} // namespace CAROTENE_NS

    
            size_t i = 0;
        while(i + 4 <= size.width)
        {
            size_t lim = std::min(i + DOT_FLOAT_BLOCKSIZE, size.width) - 4;
            float32x4_t v_sum = vdupq_n_f32(0.0f);
    }
    
    
    {            u32 buf[8];
            vst1_u32(buf, vget_low_u32(el8shr01l));
            vst1_u32(buf+2, el2l);
            vst1_u32(buf+4, el2hl);
            vst1_u32(buf+6, el2hh);
            for(u32 k=0; k < 8; k++)
                sqsum[j+k] = prev + prevSqSum[j+k] + buf[k];
            prev += buf[7];
        }
    
    TEST(Dynamic, FormattedIO) {
  std::ostringstream out;
  dynamic doubl = 123.33;
  dynamic dint = 12;
  out << '0x' << std::hex << ++dint << ' ' << std::setprecision(1)
      << doubl << '\n';
  EXPECT_EQ(out.str(), '0xd 1e+02\n');
    }
    
    void BENCHFUN(pushBack)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.push_back(obj); }
  });
}
    
      EXPECT_TRUE(bool(temp));
    
      template <size_t K, class Callback>
  void doFormatArg(FormatArg& arg, Callback& cb) const {
    std::string result;
    auto appender = [&result](StringPiece s) {
      result.append(s.data(), s.size());
    };
    this->template getFormatValue<K>().format(arg, appender);
    result = sformat('{{{}}}', result);
    cb(StringPiece(result));
  }
    
      void sendMessage();
    
    std::shared_ptr<DHTBucket>
DHTRoutingTable::getBucketFor(const unsigned char* nodeID) const
{
  return dht::findBucketFor(root_.get(), nodeID);
}
    
    
    {} // namespace aria2
    
    DHTRoutingTableDeserializer::~DHTRoutingTableDeserializer() = default;
    
        taskFactory->setLocalNode(localNode);
    taskFactory->setRoutingTable(routingTable.get());
    taskFactory->setMessageDispatcher(dispatcher.get());
    taskFactory->setMessageFactory(factory.get());
    taskFactory->setTaskQueue(taskQueue.get());
    taskFactory->setTimeout(std::chrono::seconds(messageTimeout));
    
    #include 'common.h'
    
      size_t getExecutingTaskSize() const { return execTasks_.size(); }