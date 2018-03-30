
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/core/status.h'
#include 'tensorflow/core/lib/gtl/array_slice.h'
#include 'tensorflow/core/platform/types.h'
    
    #ifndef TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_
#define TENSORFLOW_KERNELS_SMOOTH_HINGE_LOSS_H_
    
    
    {
    {
    {}  // namespace cuda
}  // namespace gputools
}  // namespace perftools
    
    void SYCLDeviceContext::CopyCPUTensorToDevice(const Tensor *cpu_tensor,
                                              Device *device,
                                              Tensor *device_tensor,
                                              StatusCallback done) const {
  const int64 total_bytes = cpu_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(cpu_tensor);
    void *dst_ptr = DMAHelper::base(device_tensor);
    switch (cpu_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/inputbuffer.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
    void HloReachabilityMap::SetReachable(const HloInstruction* a,
                                      const HloInstruction* b) {
  GetBitVector(b).Set(GetIndex(a));
}
    
    The input audio has one row of the tensor for each channel in the audio file.
Each channel contains audio samples starting at the beginning of the audio and
having `1/samples_per_second` time between them. The output file will contain
all of the audio channels contained in the tensor.
    
        int32 max_index = -1;
    if (data_elements_size) {
      *data_elements_size = 0;
    }
    for (const Tensor& indices : *indices_inputs) {
      if (indices.NumElements() > 0) {
        Eigen::Tensor<int32, 0, Eigen::RowMajor> m =
            indices.flat<int32>().maximum();
        max_index = std::max(m(), max_index);
      }
      if (data_elements_size) {
        *data_elements_size += indices.NumElements();
      }
    }
    
    #if GOOGLE_CUDA
    
    // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
      if (val.IsEmpty())
    return;
  if (val->IsNull() || val->IsUndefined())
    return;
    
      void documentCallback(const char* ev, blink::WebLocalFrame* frame);
    
    
    {  return handled;
}
    
      base::RunLoop* run_loop_;
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
    void MenuItem::SetEnabled(bool enabled) {
  gtk_widget_set_sensitive(menu_item_, enabled);
}
    
      // Fits a line to the points, returning the fitted line as a pair of
  // points, and the upper quartile error.
  double Fit(ICOORD* pt1, ICOORD* pt2) {
    return Fit(0, 0, pt1, pt2);
  }
  // Fits a line to the points, ignoring the skip_first initial points and the
  // skip_last final points, returning the fitted line as a pair of points,
  // and the upper quartile error.
  double Fit(int skip_first, int skip_last, ICOORD* pt1, ICOORD* pt2);
    
    // Returns the sqrt of the mean squared error measured perpendicular from the
// line through mean_point() in the direction dir.
//
// Derivation:
//   Lemma:  Let v and x_i (i=1..N) be a k-dimensional vectors (1xk matrices).
//     Let % be dot product and ' be transpose.  Note that:
//      Sum[i=1..N] (v % x_i)^2
//         = v * [x_1' x_2' ... x_N'] * [x_1' x_2' .. x_N']' * v'
//     If x_i have average 0 we have:
//       = v * (N * COVARIANCE_MATRIX(X)) * v'
//     Expanded for the case that k = 2, where we treat the dimensions
//     as x_i and y_i, this is:
//       = v * (N * [VAR(X), COV(X,Y); COV(X,Y) VAR(Y)]) * v'
//  Now, we are trying to calculate the mean squared error, where v is
//  perpendicular to our line of interest:
//    Mean squared error
//      = E [ (v % (x_i - x_avg))) ^2 ]
//      = Sum (v % (x_i - x_avg))^2 / N
//      = v * N * [VAR(X) COV(X,Y); COV(X,Y) VAR(Y)] / N * v'
//      = v * [VAR(X) COV(X,Y); COV(X,Y) VAR(Y)] * v'
//      = code below
double LLSQ::rms_orth(const FCOORD &dir) const {
  FCOORD v = !dir;
  v.normalise();
  return sqrt(v.x() * v.x() * x_variance() +
              2 * v.x() * v.y() * covariance() +
              v.y() * v.y() * y_variance());
}
    
      // Transforms the given coords one step forward to normalized space, without
  // using any block rotation or predecessor.
  void LocalNormTransform(const TPOINT& pt, TPOINT* transformed) const;
  void LocalNormTransform(const FCOORD& pt, FCOORD* transformed) const;
  // Transforms the given coords forward to normalized space using the
  // full transformation sequence defined by the block rotation, the
  // predecessors, deepest first, and finally this. If first_norm is not NULL,
  // then the first and deepest transformation used is first_norm, ending
  // with this, and the block rotation will not be applied.
  void NormTransform(const DENORM* first_norm, const TPOINT& pt,
                     TPOINT* transformed) const;
  void NormTransform(const DENORM* first_norm, const FCOORD& pt,
                     FCOORD* transformed) const;
  // Transforms the given coords one step back to source space, without
  // using to any block rotation or predecessor.
  void LocalDenormTransform(const TPOINT& pt, TPOINT* original) const;
  void LocalDenormTransform(const FCOORD& pt, FCOORD* original) const;
  // Transforms the given coords all the way back to source image space using
  // the full transformation sequence defined by this and its predecessors
  // recursively, shallowest first, and finally any block re_rotation.
  // If last_denorm is not NULL, then the last transformation used will
  // be last_denorm, and the block re_rotation will never be executed.
  void DenormTransform(const DENORM* last_denorm, const TPOINT& pt,
                       TPOINT* original) const;
  void DenormTransform(const DENORM* last_denorm, const FCOORD& pt,
                       FCOORD* original) const;
    
      tesseract::ParagraphJustification justification() const {
    return justification_;
  }
  int margin() const { return margin_; }
  int first_indent() const { return first_indent_; }
  int body_indent() const { return body_indent_; }
  int tolerance() const { return tolerance_; }
  bool is_flush() const {
    return (justification_ == tesseract::JUSTIFICATION_LEFT ||
            justification_ == tesseract::JUSTIFICATION_RIGHT) &&
        abs(first_indent_ - body_indent_) <= tolerance_;
  }
    
    // A useful base struct to facilitate the common operation of sorting a vector
// of simple or smart-pointer data using a separate key. Similar to STL pair.
template <typename Key, typename Data>
struct KDPair {
  KDPair() {}
  KDPair(Key k, Data d) : data(d), key(k) {}
    }
    
     private:
  struct ReferenceCount {
    STRING id;  // A unique ID to identify the object (think path on disk)
    T *object;  // A copy of the object in memory.  Can be delete'd.
    int count;  // A count of the number of active users of this object.
  };
    
    #endif

    
    
    {}  // namespace tesseract

    
    namespace {
///////////////////////////////////////////////////////////////////////////////
    }
    
    /*
 * Timing execution of block of codes.
 */
struct Timer {
  enum Type {
    WallTime,
    SystemCPU,
    UserCPU,
    TotalCPU,
  };
  enum ReportType {
    Log,
    Stderr,
    Trace,
  };
  enum Who {
    Self = RUSAGE_SELF,
    Children = RUSAGE_CHILDREN,
#ifdef RUSAGE_THREAD
    Thread = RUSAGE_THREAD,
#endif
  };
    }
    
    template<typename T>
inline Vptr emitTLSAddr(Vout& v, TLSDatum<T> datum) {
  switch (arch()) {
    case Arch::X64:
      return x64::detail::emitTLSAddr(v, datum);
    case Arch::ARM:
      return arm::detail::emitTLSAddr(v, datum);
    case Arch::PPC64:
      return ppc64::detail::emitTLSAddr(v, datum);
  }
  not_reached();
}
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}}

    
    public const char *
magic_error(struct magic_set *ms)
{
  if (ms == NULL)
    return 'Magic database is not open';
  return (ms->event_flags & EVENT_HAD_ERR) ? ms->o.buf : NULL;
}
    
    void emitJmpNS(IRGS& env, Offset relOffset) {
  jmpImpl(env, bcOff(env) + relOffset);
}
    
    std::string NormalizedInstruction::toString() const {
  return instrToString(pc(), unit());
}
    
      Op op() const;
  PC pc() const;
  const Unit* unit() const;
  const Func* func() const;
  Offset offset() const;
  SrcKey nextSk() const;
    
            // Get node iterator to access all effective nodes in the graph.
        Graph::NodeIterator Nodes_begin();
        Graph::NodeIterator Nodes_end();
    
        Model::Model(std::unique_ptr<ModelProto> p_modelProto)
    {
        assert(nullptr != p_modelProto);
        m_modelProto.reset(p_modelProto.release());
        for (auto& prop : m_modelProto->metadata_props())
        {
            m_modelMetaData[prop.key()] = prop.value();
        }
    }
    
                static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/std::string* p_data, int64_t p_expected_size);
            static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/bool* p_data, int64_t p_expected_size);
    
    namespace ONNXIR
{
    typedef const std::string* PTYPE;
    namespace Utils
    {
        class StringRange;
    }
    }
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(ParametericSoftplus)
        .Description('Softplus takes input data (Tensor<T>) and parametric tensors, '
            'producing one output data (Tensor<T>) where the function, '
            'y = alpha * log(1 + exp(beta * x), is applied to the tensor elementwise.')
        .Input('X', 'Input tensor, typically 1-D.', 'T')
        .Output('Y', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.')
        .Attr('alpha', 'Alpha tensor. If `alpha` is of size 1, '
            'the value is shared across different channels.',
            AttrType::AttributeProto_AttributeType_FLOAT, float(1.0))
        .Attr('beta', 'Beta tensor. If `beta` is of size 1, '
            'the value is shared across different channels.',
            AttrType::AttributeProto_AttributeType_FLOAT, float(1.0));
    
        // Take from ONNX
    REGISTER_OPERATOR_SCHEMA(Reciprocal)
        .Description('Reciprocal takes one input data (Tensor<T>) and produces one output data '
            '(Tensor<T>) where the reciprocal is, y = 1/x, is applied to '
            'the tensor elementwise.')
        .Input('X', 'Input tensor of any shape', 'T')
        .Output('Y', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
        // Take from RS4
    REGISTER_OPERATOR_SCHEMA(Embedding)
        .Description('Turns positive integers (indexes) into dense vectors of fixed size. '
            'eg. [[4], [20]] -> [[0.25, 0.1], [0.6, -0.2]] '
            'TODO: Omits use of CoreML bias parameter.')
        .Input('input', '1-D tensor of integers representing indices in the embedding '
            'dictionary with length [N] and values [0, input_dim -1]', 'T1')
        .Input('W', '2-D tensor of weights [O, I]', 'T2')
        .Output('output', 'Output tensor of computed features [N, O].', 'T2')
        .TypeConstraint('T1', { 'tensor(uint64)' }, 'Constrain input types to ints.')
        .TypeConstraint('T2', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
                'Constrain output types to float tensors.')
        .Attr('input_dim', 'Size of the input vocabulary.', AttrType::AttributeProto_AttributeType_INT)
        .Attr('output_dim', 'Dimension of the embedding output vectors.', AttrType::AttributeProto_AttributeType_INT);
    
        // Make sure there are no outstanding reads.
    if (m_prefetchTask.valid())
        m_prefetchTask.wait();
    
    bool js_cocos2dx_studio_PositionFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_PositionFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_PositionFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_PositionFrame_getX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_getY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_setX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_setY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_PositionFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    			b2RevoluteJointDef jd;
    
    			bd.position.Set(-1.0f, 0.35f);
			m_wheel1 = m_world->CreateBody(&bd);
			m_wheel1->CreateFixture(&fd);
    
    
    {  if (method->NoStreaming()) {
    printer->Print(
        *vars,
        'MOCK_METHOD3($Method$, ::grpc::Status(::grpc::ClientContext* context, '
        'const $Request$& request, $Response$* response));\n');
    for (size_t i = 0; i < sizeof(async_prefixes)/sizeof(async_prefixes[0]); i ++) {
      auto& async_prefix = async_prefixes[i];
      (*vars)['AsyncPrefix'] = async_prefix.prefix;
      printer->Print(
          *vars,
          'MOCK_METHOD3($AsyncPrefix$$Method$Raw, '
          '::grpc::ClientAsyncResponseReaderInterface< $Response$>*'
          '(::grpc::ClientContext* context, const $Request$& request, '
          '::grpc::CompletionQueue* cq));\n');
    }
  } else if (ClientOnlyStreaming(method)) {
    printer->Print(
        *vars,
        'MOCK_METHOD2($Method$Raw, '
        '::grpc::ClientWriterInterface< $Request$>*'
        '(::grpc::ClientContext* context, $Response$* response));\n');
    for (size_t i = 0; i < sizeof(async_prefixes)/sizeof(async_prefixes[0]); i ++) {
      auto& async_prefix = async_prefixes[i];
      (*vars)['AsyncPrefix'] = async_prefix.prefix;
      (*vars)['AsyncMethodParams'] = async_prefix.method_params;
      (*vars)['MockArgs'] =
        flatbuffers::NumToString(3 + async_prefix.extra_method_param_count);
      printer->Print(*vars,
                     'MOCK_METHOD$MockArgs$($AsyncPrefix$$Method$Raw, '
                     '::grpc::ClientAsyncWriterInterface< $Request$>*'
                     '(::grpc::ClientContext* context, $Response$* response, '
                     '::grpc::CompletionQueue* cq$AsyncMethodParams$));\n');
    }
  } else if (ServerOnlyStreaming(method)) {
    printer->Print(
        *vars,
        'MOCK_METHOD2($Method$Raw, '
        '::grpc::ClientReaderInterface< $Response$>*'
        '(::grpc::ClientContext* context, const $Request$& request));\n');
    for (size_t i = 0; i < sizeof(async_prefixes)/sizeof(async_prefixes[0]); i ++) {
      auto& async_prefix = async_prefixes[i];
      (*vars)['AsyncPrefix'] = async_prefix.prefix;
      (*vars)['AsyncMethodParams'] = async_prefix.method_params;
      (*vars)['MockArgs'] =
          flatbuffers::NumToString(3 + async_prefix.extra_method_param_count);
      printer->Print(
          *vars,
          'MOCK_METHOD$MockArgs$($AsyncPrefix$$Method$Raw, '
          '::grpc::ClientAsyncReaderInterface< $Response$>*'
          '(::grpc::ClientContext* context, const $Request$& request, '
          '::grpc::CompletionQueue* cq$AsyncMethodParams$));\n');
    }
  } else if (method->BidiStreaming()) {
    printer->Print(
        *vars,
        'MOCK_METHOD1($Method$Raw, '
        '::grpc::ClientReaderWriterInterface< $Request$, $Response$>*'
        '(::grpc::ClientContext* context));\n');
    for (size_t i = 0; i < sizeof(async_prefixes)/sizeof(async_prefixes[0]); i ++) {
      auto& async_prefix = async_prefixes[i];
      (*vars)['AsyncPrefix'] = async_prefix.prefix;
      (*vars)['AsyncMethodParams'] = async_prefix.method_params;
      (*vars)['MockArgs'] =
          flatbuffers::NumToString(2 + async_prefix.extra_method_param_count);
      printer->Print(
          *vars,
          'MOCK_METHOD$MockArgs$($AsyncPrefix$$Method$Raw, '
          '::grpc::ClientAsyncReaderWriterInterface<$Request$, $Response$>*'
          '(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq'
          '$AsyncMethodParams$));\n');
    }
  }
}
    
    
    {  flatbuffers::FlatCompiler flatc(params);
  return flatc.Compile(argc - 1, argv + 1);
}
