
        
        
    {}  // namespace tensorflow
    
    // Estimate the cost of running a Grappler item by actually running the
// corresponding TensorFlow graph on the specified cluster and measuring the
// runtimes.
class MeasuringCostEstimator : public CostEstimator {
 public:
  // Run the model for measurement_steps to measure its average cost.
  // When measurement_threads is greater than 0, use a threadpool of as many
  // threads to run the measurements; otherwise, run them serially. Does not
  // take ownership of cluster.
  explicit MeasuringCostEstimator(Cluster* cluster, int measurement_steps,
                                  int measurement_threads);
  ~MeasuringCostEstimator() override {}
    }
    
      bool operator==(const PluginConfig& rhs) const;
    
    #endif  // TENSORFLOW_LIB_IO_RECORD_WRITER_H_

    
    /** scalar_tanh_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a tanh
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::tanh_fast_derivative()
  */
template <typename T>
struct scalar_tanh_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_tanh_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return one - (y * y);
  }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
    class TextLineReaderOp : public ReaderOpKernel {
 public:
  explicit TextLineReaderOp(OpKernelConstruction* context)
      : ReaderOpKernel(context) {
    int skip_header_lines = -1;
    OP_REQUIRES_OK(context,
                   context->GetAttr('skip_header_lines', &skip_header_lines));
    OP_REQUIRES(context, skip_header_lines >= 0,
                errors::InvalidArgument('skip_header_lines must be >= 0 not ',
                                        skip_header_lines));
    Env* env = context->env();
    SetReaderFactory([this, skip_header_lines, env]() {
      return new TextLineReader(name(), skip_header_lines, env);
    });
  }
};
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // A = [3 2; -1 0]; x = rand(2, 1);
// We want to compute the largest eigenvalue for A.
// repeat x = y / y.norm(); y = A * x; end
GraphDef CreateGraphDef() {
  // TODO(jeff,opensource): This should really be a more interesting
  // computation.  Maybe turn this into an mnist model instead?
  Scope root = Scope::NewRootScope();
  using namespace ::tensorflow::ops;  // NOLINT(build/namespaces)
    }
    
    // Declare here, so we don't need a public header.
Status RemoveDevice(const GraphDef& input_graph_def,
                    const TransformFuncContext& context,
                    GraphDef* output_graph_def);
    
      // C++ can not distinguish overloaded member function.
  template<AtomNetworkDelegate::SimpleEvent type>
  void SetSimpleListener(mate::Arguments* args);
  template<AtomNetworkDelegate::ResponseEvent type>
  void SetResponseListener(mate::Arguments* args);
  template<typename Listener, typename Method, typename Event>
  void SetListener(Method method, Event type, mate::Arguments* args);
    
    void SavePageHandler::OnDownloadCreated(content::DownloadManager* manager,
                                        content::DownloadItem* item) {
  // OnDownloadCreated is invoked during WebContents::SavePage, so the |item|
  // here is the one stated by WebContents::SavePage.
  item->AddObserver(this);
}
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
      // URLRequestSimpleJob:
  int GetData(std::string* mime_type,
              std::string* charset,
              std::string* data,
              const net::CompletionCallback& callback) const override;
    
    
    {}  // namespace atom
    
    bool MenuModelAdapter::GetAccelerator(int id,
                                      ui::Accelerator* accelerator) const {
  ui::MenuModel* model = menu_model_;
  int index = 0;
  if (ui::MenuModel::GetModelAndIndexForCommandId(id, &model, &index)) {
    return static_cast<AtomMenuModel*>(model)->
      GetAcceleratorAtWithParams(index, true, accelerator);
  }
  return false;
}
    
    // static
void App::Call(const std::string& method,
               const base::ListValue& arguments) {
  if (method == 'Quit') {
    Quit();
  } else if (method == 'CloseAllWindows') {
    CloseAllWindows();
  } else if (method == 'CrashBrowser') {
    int* ptr = NULL;
    *ptr = 1;
  } else {
    NOTREACHED() << 'Calling unknown method ' << method << ' of App.';
  }
}
    
    namespace content {
class RenderFrameHost;
}
    
    void Clipboard::CallSync(const std::string& method,
                         const base::ListValue& arguments,
                         base::ListValue* result) {
  if (method == 'Get') {
    result->AppendString(GetText());
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    DispatcherBindings::DispatcherBindings()
    : v8::Extension('dispatcher_bindings.js',
                    GetStringResource(
                        IDR_NW_API_DISPATCHER_BINDINGS_JS).data(),
                    0,     // num dependencies.
                    NULL,  // dependencies array.
                    (int)GetStringResource(
                        IDR_NW_API_DISPATCHER_BINDINGS_JS).size()) {
#if defined(OS_MACOSX)
  InitMsgIDMap();
#endif
}
    
    static KeyMap keymap = {
  {'`'    , 'Backquote'},
  {'\\'   , 'Backslash'},
  {'['    , 'BracketLeft'},
  {']'    , 'BracketRight'},
  {','    , 'Comma'},
  {'='    , 'Equal'},
  {'-'    , 'Minus'},
  {'.'    , 'Period'},
  {'''    , 'Quote'},
  {';'    , 'Semicolon'},
  {'/'    , 'Slash'},
  {'\n'   , 'Enter'},
  {'\t'   , 'Tab'},
  {'UP'   , 'ArrowUp'},
  {'DOWN' , 'ArrowDown'},
  {'LEFT' , 'ArrowLeft'},
  {'RIGHT', 'ArrowRight'},
  {'ESC'  , 'Escape'},
  {'MEDIANEXTTRACK', 'MediaTrackNext'},
  {'MEDIAPREVTRACK', 'MediaTrackPrevious'}
};
    
      nw::Package* package = nw::package();
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  base::CommandLine::StringVector args = command_line->GetArgs();
  base::CommandLine::StringVector argv = command_line->original_argv();
    
    
    {  return true;
}
    
    namespace enum_descriptor {
PyObject* NewEnumValuesByName(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesByNumber(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesSeq(const EnumDescriptor* descriptor);
}  // namespace enum_descriptor
    
    // Find the file which defines an extension extending the given message type
// with the given field number.
// Python DescriptorDatabases are not required to implement this method.
bool PyDescriptorDatabase::FindFileContainingExtension(
    const string& containing_type, int field_number,
    FileDescriptorProto* output) {
  ScopedPyObjectPtr py_method(
      PyObject_GetAttrString(py_database_, 'FindFileContainingExtension'));
  if (py_method == NULL) {
    // This method is not implemented, returns without error.
    PyErr_Clear();
    return false;
  }
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallFunction(py_method.get(), 's#i', containing_type.c_str(),
                            containing_type.size(), field_number));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_DATABASE_H__

    
    
    
    RepeatedEnumFieldGenerator::~RepeatedEnumFieldGenerator() {
    }
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    void ImmutableLazyMessageFieldGenerator::
GenerateSerializationCode(io::Printer* printer) const {
  // Do not de-serialize lazy fields.
  printer->Print(variables_,
    'if ($get_has_field_bit_message$) {\n'
    '  output.writeBytes($number$, $name$_.toByteString());\n'
    '}\n');
}
    
    
    {}  // namespace tesseract.
    
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
    
    // Transforms the given coords forward to normalized space using the
// full transformation sequence defined by the block rotation, the
// predecessors, deepest first, and finally this. If first_norm is not NULL,
// then the first and deepest transformation used is first_norm, ending
// with this, and the block rotation will not be applied.
void DENORM::NormTransform(const DENORM* first_norm, const TPOINT& pt,
                           TPOINT* transformed) const {
  FCOORD src_pt(pt.x, pt.y);
  FCOORD float_result;
  NormTransform(first_norm, src_pt, &float_result);
  transformed->x = IntCastRounded(float_result.x());
  transformed->y = IntCastRounded(float_result.y());
}
void DENORM::NormTransform(const DENORM* first_norm, const FCOORD& pt,
                           FCOORD* transformed) const {
  FCOORD src_pt(pt);
  if (first_norm != this) {
    if (predecessor_ != NULL) {
      predecessor_->NormTransform(first_norm, pt, &src_pt);
    } else if (block_ != NULL) {
      FCOORD fwd_rotation(block_->re_rotation().x(),
                          -block_->re_rotation().y());
      src_pt.rotate(fwd_rotation);
    }
  }
  LocalNormTransform(src_pt, transformed);
}
    
      // Accumulates counts for junk. Counts only whether the junk was correctly
  // rejected or not.
  bool AccumulateJunk(bool debug, const GenericVector<UnicharRating>& results,
                      TrainingSample* sample);
    
    
    {  auto const ret = make_map_array(
    s_sec, (int)tp.tv_sec,
    s_usec, (int)tp.tv_usec,
    s_minuteswest, (int)(-offset->offset / 60),
    s_dsttime, (int)offset->is_dst
  );
  timelib_time_offset_dtor(offset);
  return ret;
}
    
      /**
   * Add a piece of response to the pipeline.
   */
  static void AddToPipeline(const std::string &s);
    
    //////////////////////////////////////////////////////////////////////
    
    /*
 * Block of Vinstrs, managed by Vunit.
 *
 * A Vblock, in addition to containing a Vinstr stream, also specifies where it
 * should be emitted to.
 */
struct Vblock {
  explicit Vblock(AreaIndex area_idx, uint64_t w)
    : area_idx(area_idx)
    , weight(w) {}
    }
    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
    struct Block;
struct SSATmp;
    
    std::string NormalizedInstruction::toString() const {
  return instrToString(pc(), unit());
}
    
    
    {}