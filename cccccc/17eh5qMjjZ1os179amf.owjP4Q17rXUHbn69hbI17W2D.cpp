
        
        namespace swig {
namespace {
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
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
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
#define TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
    
    
    {  PyObject* np_array =
      PyArray_SimpleNewFromData(dim_size, dims, type_num, data);
  if (PyType_Ready(&TensorReleaserType) == -1) {
    return errors::Unknown('Python type initialization failed.');
  }
  TensorReleaser* releaser = reinterpret_cast<TensorReleaser*>(
      TensorReleaserType.tp_alloc(&TensorReleaserType, 0));
  releaser->destructor = new std::function<void()>(std::move(destructor));
  if (PyArray_SetBaseObject(reinterpret_cast<PyArrayObject*>(np_array),
                            reinterpret_cast<PyObject*>(releaser)) == -1) {
    Py_DECREF(releaser);
    return errors::Unknown('Python array refused to use memory.');
  }
  *result = PyArray_Return(reinterpret_cast<PyArrayObject*>(np_array));
  return Status::OK();
}
    
    #include 'tensorflow/core/framework/node_def.pb.h'
#include 'tensorflow/core/framework/node_def_util.h'
#include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/util/device_name_utils.h'
    
    ScopedActivateExecutorContext::ScopedActivateExecutorContext(
    StreamExecutor *stream_exec)
    : ScopedActivateExecutorContext(ExtractCudaExecutor(stream_exec)) {}
    
    
    {  DISALLOW_COPY_AND_ASSIGN(UvTaskRunner);
};
    
    void AutoUpdater::OnError(const std::string& message,
                          const int code,
                          const std::string& domain) {
  v8::Locker locker(isolate());
  v8::HandleScope handle_scope(isolate());
  auto error = v8::Exception::Error(mate::StringToV8(isolate(), message));
  auto errorObject =
      error->ToObject(isolate()->GetCurrentContext()).ToLocalChecked();
    }
    
    class AutoUpdater : public mate::EventEmitter<AutoUpdater>,
                    public auto_updater::Delegate,
                    public WindowListObserver {
 public:
  static mate::Handle<AutoUpdater> Create(v8::Isolate* isolate);
    }
    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_browser_content_tracing, Initialize)

    
    #include 'atom/common/node_includes.h'
    
    #if defined(OS_WIN)
    
    namespace gfx {
class Point;
class Rect;
class Screen;
}  // namespace gfx
    
    class Tray : public mate::TrackableObject<Tray>, public TrayIconObserver {
 public:
  static mate::WrappableBase* New(mate::Handle<NativeImage> image,
                                  mate::Arguments* args);
    }
    
    class AtomBrowserContext;
    
    
    {  AtomFrameHostMsg_Message_Sync::WriteReplyParams(message_, result);
  bool success = sender_->Send(message_);
  message_ = nullptr;
  sender_ = nullptr;
  return success;
}
    
    namespace internal {
    }
    
      // this.emit(name, new Event(), args...);
  template <typename... Args>
  bool Emit(const base::StringPiece& name, const Args&... args) {
    return EmitWithSender(name, nullptr, nullptr, args...);
  }
    
    #include <string>
    
    #else  // !defined(__AVX__)
// Implementation for avx capable archs.
#include <immintrin.h>
#include <cstdint>
#include 'dotproductavx.h'
    
    IntSimdMatrixAVX2::IntSimdMatrixAVX2() {
#ifdef __AVX2__
  num_outputs_per_register_ = kNumOutputsPerRegister;
  max_output_registers_ = kMaxOutputRegisters;
  num_inputs_per_register_ = kNumInputsPerRegister;
  num_inputs_per_group_ = kNumInputsPerGroup;
  num_input_groups_ = kNumInputGroups;
  partial_funcs_ = {PartialMatrixDotVector64, PartialMatrixDotVector32,
                    PartialMatrixDotVector16, PartialMatrixDotVector8};
#endif  // __AVX2__
}
    
    enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
      // Starting from the seed position, we search the part_grid_
  // horizontally/vertically, find all parititions that can be
  // merged with seed, remove them from part_grid_, and put them  into
  // parts_to_merge.
  void ExpandSeedHorizontal(const bool search_left,
                            ColPartition* seed,
                            GenericVector<ColPartition*>* parts_to_merge);
  void ExpandSeedVertical(const bool search_bottom,
                          ColPartition* seed,
                          GenericVector<ColPartition*>* parts_to_merge);
    
    struct BlamerBundle;
class C_BLOB_IT;
class PAGE_RES;
class PAGE_RES_IT;
class WERD;
struct Pix;
struct Pta;
    
    namespace caffe2 {
    }
    
    Missing features (represented by empty ranges) filled with default_value.
    
    OPERATOR_SCHEMA(Glu)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc(R'DOC(
Applies gated linear unit to the input Tensor X. The output Y is half the size
of the input X, so if the shape of X is [d1, d2, ..., N] shape of Y will be
[d1, d2, ..., dn/2] and Y(:dn-1, i) = GLU(X(:dn-1, i), X(:dn-1, i+N/2)) =
X(dn-1, i) * sigmoid(X(dn-1, i+N/2))
)DOC')
    .Input(0, 'X', '1D input tensor')
    .Output(0, 'Y', '1D output tensor');
    
    
    {          return out;
        });
OPERATOR_SCHEMA(Float16ConstantFill)
    .NumInputs(0)
    .NumOutputs(1)
    .TensorInferenceFunction(Float16FillerTensorInference)
    .Arg('value', 'The value for the elements of the output tensor.')
    .Arg('shape', 'The shape of the output tensor.')
    .Output(
        0,
        'output',
        'Output tensor of constant values specified by 'value'');
    
            virtual Dictionary GetCheckpointState() const override;
        virtual void RestoreFromCheckpoint(const Dictionary& checkpoint) override;
    
    
    {
    {    private:
        static bool IsNativeUDF(const Dictionary& dict);
    };
}

    
    
    {        auto ownerFunctionPtr = m_ownerFunction.lock();
        if (ownerFunctionPtr != nullptr)
            return ownerFunctionPtr->shared_from_this();
        else
            return nullptr;
    }
    
    // GetHmmData - Get the HMM definition for SE training
// hmm - HMM definition
// returns - true if succeed
bool DataReader::GetHmmData(msra::asr::simplesenonehmm* hmm)
{
    bool bRet = true;
    for (size_t i = 0; i < m_ioNames.size(); i++)
        bRet &= m_dataReaders[m_ioNames[i]]->GetHmmData(hmm);
    return bRet;
}
    
    #pragma once
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS // 'secure' CRT not available on all platforms  --add this at the top of all CPP files that give 'function or variable may be unsafe' warnings
#endif
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX
#pragma comment(lib, 'Dbghelp.lib')
#else
#include <execinfo.h>
#include <cxxabi.h>
#endif
    
        virtual void /*ComputationNode::*/ ForwardProp(const FrameRange& fr) override
    {
        Matrix<ElemType> sliceInput1Value = Input(1)->ValueFor(fr);
        Matrix<ElemType> sliceOutputValue = ValueFor(fr);
    }
    
    #  ifdef BOOST_MSVC
#     pragma warning(push)
#     pragma warning(disable : 4251 4231)
#     if BOOST_MSVC < 1600
#     pragma warning(disable : 4660)
#     endif
#  endif
    
    template <class I>
struct is_random_pointer_imp
{
   BOOST_STATIC_CONSTANT(bool, value = true);
};
    
    #endif
    
    template <class BidiIterator, class Allocator, class traits>
void perl_matcher<BidiIterator, Allocator, traits>::push_parenthesis_pop()
{
   saved_state* pmp = static_cast<saved_state*>(m_backup_state);
   --pmp;
   if(pmp < m_stack_base)
   {
      extend_stack();
      pmp = static_cast<saved_state*>(m_backup_state);
      --pmp;
   }
   (void) new (pmp)saved_state(16);
   m_backup_state = pmp;
}
    
    #ifdef BOOST_MSVC
#  pragma warning(pop)
#endif
    
    namespace boost{
    }
    
        /// A structure that describe a glyph.
    struct GlyphInfo 
    {
        float Width;		// Glyph's width in pixels.
        float Height;		// Glyph's height in pixels.
        float OffsetX;		// The distance from the origin ('pen position') to the left of the glyph.
        float OffsetY;		// The distance from the origin to the top of the glyph. This is usually a value < 0.
        float AdvanceX;		// The distance from the origin to the origin of the next glyph. This is usually a value > 0.
    };
    
    
    {    return true;
}
    
    
    {            // Add vertexes
            for (int i = 0; i < points_count; i++)
            {
                _VtxWritePtr[0].pos = temp_points[i*4+0]; _VtxWritePtr[0].uv = uv; _VtxWritePtr[0].col = col_trans;
                _VtxWritePtr[1].pos = temp_points[i*4+1]; _VtxWritePtr[1].uv = uv; _VtxWritePtr[1].col = col;
                _VtxWritePtr[2].pos = temp_points[i*4+2]; _VtxWritePtr[2].uv = uv; _VtxWritePtr[2].col = col;
                _VtxWritePtr[3].pos = temp_points[i*4+3]; _VtxWritePtr[3].uv = uv; _VtxWritePtr[3].col = col_trans;
                _VtxWritePtr += 4;
            }
        }
        _VtxCurrentIdx += (ImDrawIdx)vtx_count;
    }
    else
    {
        // Non Anti-aliased Stroke
        const int idx_count = count*6;
        const int vtx_count = count*4;      // FIXME-OPT: Not sharing edges
        PrimReserve(idx_count, vtx_count);