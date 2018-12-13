// Register the bfloat16 numpy type.
void RegisterNumpyBfloat16();
    
      // Returns the Python exception type corresponding to `code`. Init() must be
  // called before using this function. `code` should not be TF_OK.
  static PyObject* Lookup(TF_Code code);
    
    
    {}  // namespace tensorflow

    
    #endif  // TENSORFLOW_PYTHON_UTIL_KERNEL_REGISTRY_H_

    
      // Creates a new CUDA stream associated with the given context via
  // cuStreamCreate.
  // stream is an outparam owned by the caller, must not be null.
  // http://docs.nvidia.com/cuda/cuda-driver-api/group__CUDA__STREAM.html#group__CUDA__STREAM_1ga581f0c5833e21ded8b5a56594e243f4
  static bool CreateStream(CudaContext* context, CUstream *stream);
    
    
    {}  // namespace atom
    
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
    
    void AtomBrowserMainParts::HandleSIGCHLD() {
  // We need to accept SIGCHLD, even though our handler is a no-op because
  // otherwise we cannot wait on children. (According to POSIX 2001.)
  struct sigaction action;
  memset(&action, 0, sizeof(action));
  action.sa_handler = SIGCHLDHandler;
  CHECK_EQ(sigaction(SIGCHLD, &action, nullptr), 0);
}
    
    class AtomQuotaPermissionContext : public content::QuotaPermissionContext {
 public:
  typedef content::QuotaPermissionContext::QuotaPermissionResponse response;
    }
    
      // Gets/Sets the delegate.
  static Delegate* GetDelegate();
  static void SetDelegate(Delegate* delegate);
    
    // Author: qrczak@google.com (Marcin Kowalczyk)
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    void Context::InitializeFieldGeneratorInfoForFields(
    const std::vector<const FieldDescriptor*>& fields) {
  // Find out all fields that conflict with some other field in the same
  // message.
  std::vector<bool> is_conflict(fields.size());
  std::vector<string> conflict_reason(fields.size());
  for (int i = 0; i < fields.size(); ++i) {
    const FieldDescriptor* field = fields[i];
    const string& name = UnderscoresToCapitalizedCamelCase(field);
    for (int j = i + 1; j < fields.size(); ++j) {
      const FieldDescriptor* other = fields[j];
      const string& other_name = UnderscoresToCapitalizedCamelCase(other);
      if (name == other_name) {
        is_conflict[i] = is_conflict[j] = true;
        conflict_reason[i] = conflict_reason[j] =
            'capitalized name of field \'' + field->name() +
            '\' conflicts with field \'' + other->name() + '\'';
      } else if (IsConflicting(field, name, other, other_name,
                               &conflict_reason[j])) {
        is_conflict[i] = is_conflict[j] = true;
        conflict_reason[i] = conflict_reason[j];
      }
    }
    if (is_conflict[i]) {
      GOOGLE_LOG(WARNING) << 'field \'' << field->full_name() << '\' is conflicting '
                   << 'with another field: ' << conflict_reason[i];
    }
  }
  for (int i = 0; i < fields.size(); ++i) {
    const FieldDescriptor* field = fields[i];
    FieldGeneratorInfo info;
    info.name = CamelCaseFieldName(field);
    info.capitalized_name = UnderscoresToCapitalizedCamelCase(field);
    // For fields conflicting with some other fields, we append the field
    // number to their field names in generated code to avoid conflicts.
    if (is_conflict[i]) {
      info.name += SimpleItoa(field->number());
      info.capitalized_name += SimpleItoa(field->number());
      info.disambiguated_reason = conflict_reason[i];
    }
    field_generator_info_map_[field] = info;
  }
}
    
    
    {
    {    printer->Print(' * <pre>\n');
    for (int i = 0; i < lines.size(); i++) {
      // Most lines should start with a space.  Watch out for lines that start
      // with a /, since putting that right after the leading asterisk will
      // close the comment.
      if (!lines[i].empty() && lines[i][0] == '/') {
        printer->Print(' * $line$\n', 'line', lines[i]);
      } else {
        printer->Print(' *$line$\n', 'line', lines[i]);
      }
    }
    printer->Print(
        ' * </pre>\n'
        ' *\n');
  }
}
    
    void SharedCodeGenerator::GenerateDescriptors(io::Printer* printer) {
  // Embed the descriptor.  We simply serialize the entire FileDescriptorProto
  // and embed it as a string literal, which is parsed and built into real
  // descriptors at initialization time.  We unfortunately have to put it in
  // a string literal, not a byte array, because apparently using a literal
  // byte array causes the Java compiler to generate *instructions* to
  // initialize each and every byte of the array, e.g. as if you typed:
  //   b[0] = 123; b[1] = 456; b[2] = 789;
  // This makes huge bytecode files and can easily hit the compiler's internal
  // code size limits (error 'code to large').  String literals are apparently
  // embedded raw, which is what we want.
  FileDescriptorProto file_proto;
  file_->CopyTo(&file_proto);
    }
    
    OneofGenerator::~OneofGenerator() {}
    
    
    {
    {			char      *lPr = (char *)malloc(MAX_PATH);
			char      *pR = (char *)malloc(MAX_PATH);
			size_t i;
			wcstombs_s(&i, lPr, (size_t)MAX_PATH,
				legacyUserAliasesPath, (size_t)MAX_PATH);
			wcstombs_s(&i, pR, (size_t)MAX_PATH,
				userAliasesPath, (size_t)MAX_PATH);
			rename(lPr, pR);
		}
	}
    
    namespace mxnet {
/*!
 * \brief Operator interface.
 *  Operator defines basic operation unit of optimized computation graph in mxnet.
 *  This interface relies on pre-allocated memory in TBlob, the caller need to set
 *  the memory region in TBlob correctly before calling Forward and Backward.
 *
 *  Operator is generated by OperatorProperty.
 *  To add new operator(aka. layers of neural nets) to mxnet, developer need to create
 *  a new OperatorProperty and its corresponding Operator.
 *
 * \sa TBlob, TShape, OperatorProperty
 */
class Operator {
 public:
  /*! \brief destructor */
  virtual ~Operator() {}
  /*!
   * \brief perform a forward operation of Operator, save the output to TBlob.
   * \param ctx runtime context available to this call
   * \param in_data array of input data, it is const
   * \param req the request types of saving operation, can only be kWriteTo or kWriteInplace.
   * \param out_data array of output data, pointer is used to indicate that this is holder
   *        the space of TBlob in out_data must be pre-allocated with InferShape
   * \param aux_states Auxiliary states of operator. Normally operator doesn't
   *        need, epecial case like Batch Norm requires.
   * \sa OpReqType, OpContext
   */
  virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_states) = 0;
  /*!
   * \brief Perform a Backward Operation, write gradient to the in_grad.
   *
   * \note
   * Convention:
   *   out_grad.size() == OperatorProperty.NumVisibleOutputs()
   *   out_data.size() == OperatorProperty.NumOutputs()
   * out_data can contain additional invisible returns that remembers the
   * state carried from the Forward pass. For example mask in the dropout.
   * The gradients are passed from visible returns in this function.
   *
   * \par
   * Not all the TBlobs in the arguments will be available
   * if you override the DeclareBackwardDependency of corresponding OperatorProperty class.
   * Only the dependencies you declared will be available at corresponding position,
   * the rest of the parameters are simply dummy where you will get a nullptr.
   * You will be safe if you use the default DeclareBackwardDependency.
   * But only declare what you need will give engine more chance for optimization.
   *
   * \param ctx runtime context available to this call
   * \param out_grad the gradient value we get from of the Operator.
   * \param in_data the array of input data.
   * \param out_data the array of output data.
   * \param req request types of the saving operation, can be all types.
   * \param in_grad the array of gradient we need to write to.
   * \param aux_states Auxiliary states of operator. Normally operator doesn't need
   * \sa OperatorProperty, OpReqType, OpContext
   */
  virtual void Backward(const OpContext &ctx,
                        const std::vector<TBlob> &out_grad,
                        const std::vector<TBlob> &in_data,
                        const std::vector<TBlob> &out_data,
                        const std::vector<OpReqType> &req,
                        const std::vector<TBlob> &in_grad,
                        const std::vector<TBlob> &aux_states) {
    LOG(FATAL) << 'Backward is not implemented';
  }
  /*! \return [Deprecated] execution type of the operator */
  virtual ExecType exec_type() const final {  // NOLINT(*) exec_type has been moved to OperatorProperty
    return ExecType::kSync;
  }
};
    }
    
     private:
  /*! \brief indexes into top_ */
  enum { DATA = 0, LABEL, NR_SUPPORTED_TOP_ITEMS };
    
      // override set_default
  inline FieldEntry<caffe::LayerParameter> &set_default(const std::string &value) {
    caffe::NetParameter net_param;
    if (!ReadProtoFromTextContent(value, &net_param))
      CHECK(false)<< 'Caffe Net Prototxt: ' << value << 'Initialized Failed';
    }
    
    
MXNET_DLL int MXCVResize(NDArrayHandle src, const mx_uint w, const mx_uint h,
                         const int interpolation, NDArrayHandle *out) {
  API_BEGIN();
  NDArray ndsrc = *static_cast<NDArray*>(src);
  CHECK_EQ(ndsrc.shape().ndim(), 3);
  CHECK_EQ(ndsrc.ctx(), Context::CPU());
  CHECK_EQ(ndsrc.dtype(), mshadow::kUint8);
    }
    
     protected:
  void PushToExecute(OprBlock *opr_block, bool pusher_thread) override {
    if (opr_block->opr->prop == FnProperty::kAsync && pusher_thread) {
      DoExecute(opr_block);
    } else {
      DoPushToQueue(opr_block);
    }
  }
    
    
    {
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<ImageAugmenter *()> ImageAugmenterFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct ImageAugmenterReg
    : public dmlc::FunctionRegEntryBase<ImageAugmenterReg,
                                        ImageAugmenterFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register image augmenter
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IMAGE_AUGMENTER(aug_default)
 * .describe('default augmenter')
 * .set_body([]() {
 *     return new DefaultAugmenter();
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IMAGE_AUGMENTER(name)                            \
  DMLC_REGISTRY_REGISTER(::mxnet::io::ImageAugmenterReg, ImageAugmenterReg, name)
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_USE_OPENCV
    
    namespace parallel {
    }
    
    #endif

    
    
    {}
    
    
    {      dword(ds_formater.instruction);
   }
    
      static void ParseHdfFile(const std::string &filename, Hdf &hdf);
    
      char* comma = (char*)memchr(data, ',', data_len);
  if (comma == nullptr) {
    raise_warning('rfc2397: missing comma');
    return nullptr;
  }
    
    #endif // incl_HPHP_DEBUGGABLE_H_

    
      req::ptr<Directory> opendir(const String& path) override;
    
    req::ptr<Directory> GlobStreamWrapper::opendir(const String& path) {
  const char* prefix = 'glob://';
  const char* path_str = path.data();
  int path_len = path.length();
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
        /** 
     * Initializes the action with a duration and an array of points.
     *
     * @param duration In seconds.
     * @param points An PointArray.
     * @param tension Goodness of fit.
     */
    bool initWithDuration(float duration, PointArray* points, float tension);
    /** It will update the target position and change the _previousPosition to newPos
     *
     * @param newPos The new position.
     */
    virtual void updatePosition(const Vec2 &newPos);
    /** Return a PointArray.
     *
     * @return A PointArray.
     */
    PointArray* getPoints() { return _points; }
    /**
     * @js NA
     * @lua NA
     */
    void setPoints(PointArray* points)
    {
        CC_SAFE_RETAIN(points);
        CC_SAFE_RELEASE(_points);
        _points = points;
    }
    
    NS_CC_END

    
    __CCCallFuncO::~__CCCallFuncO()
{
    CC_SAFE_RELEASE(_object);
}
    
    /** @class __CCCallFuncND
 * @deprecated Please use CallFuncN instead.
 * @brief Calls a 'callback' with the node as the first argument and the 2nd argument is data.
 * ND means: Node and Data. Data is void *, so it could be anything.
 * @js NA
 */
class CC_DLL  __CCCallFuncND : public CallFunc
{
public:
    /** Creates the action with the callback and the data to pass as an argument.
     *
     * @param target    A certain target.
     * @param selector  The callback need to be executed.
     * @param d Data, is void* type.
     * @return An autoreleased __CCCallFuncND object.
     */
    CC_DEPRECATED_ATTRIBUTE static __CCCallFuncND * create(Ref* target, SEL_CallFuncND selector, void* d);
    
    //
    // Overrides
    //
    virtual __CCCallFuncND* clone() const override;
    virtual void execute() override;
    
CC_CONSTRUCTOR_ACCESS:
    __CCCallFuncND() {}
    virtual ~__CCCallFuncND() {}
    
    /** initializes the action with the callback and the data to pass as an argument */
    bool initWithTarget(Ref* target, SEL_CallFuncND selector, void* d);
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
        /** 
    * @brief Initializes the action with grid size, random seed and duration.
    * @param duration Specify the duration of the ShuffleTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the Initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, unsigned int seed);
    
    /** Singleton that manages the Animations.
It saves in a cache the animations. You should use this class if you want to save your animations in a cache.
    
    static void Dump(benchmark::State& state, const char* filename, int indent)
{
    std::ifstream f(filename);
    std::string str((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    json j = json::parse(str);
    }
    
      // We need to flush the stream buffers into the console before each
  // SetConsoleTextAttribute call lest it affect the text that is already
  // printed but has not yet reached the console.
  fflush(stdout);
  SetConsoleTextAttribute(stdout_handle,
                          GetPlatformColorCode(color) | FOREGROUND_INTENSITY);
  vprintf(fmt, args);
    
    
    {// Returns true unless value starts with one of: '0', 'f', 'F', 'n' or 'N', or
// some non-alphanumeric character. As a special case, also returns true if
// value is the empty string.
bool IsTruthyFlagValue(const std::string& value);
}  // end namespace benchmark
    
      if (result.report_big_o) {
    std::string big_o = GetBigOString(result.complexity);
    printer(Out, COLOR_YELLOW, '%10.2f %s %10.2f %s ', real_time, big_o.c_str(),
            cpu_time, big_o.c_str());
  } else if (result.report_rms) {
    printer(Out, COLOR_YELLOW, '%10.0f %% %10.0f %% ', real_time * 100,
            cpu_time * 100);
  } else {
    const char* timeLabel = GetTimeUnitString(result.time_unit);
    printer(Out, COLOR_YELLOW, '%10.0f %s %10.0f %s ', real_time, timeLabel,
            cpu_time, timeLabel);
  }
    
    double Finish(Counter const& c, double cpu_time, double num_threads) {
  double v = c.value;
  if (c.flags & Counter::kIsRate) {
    v /= cpu_time;
  }
  if (c.flags & Counter::kAvgThreads) {
    v /= num_threads;
  }
  return v;
}
    
    BENCHMARK_RELATIVE(format_long_string_safe, iters) {
  BenchmarkSuspender suspender;
  auto const& longString = getLongString();
  while (iters--) {
    fbstring out;
    suspender.dismissing([&] { format(&out, '{}', longString); });
  }
}
    
    #include <folly/Range.h>
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
      /* Get a reference to the pointer, either from the local batch or
   * from the global count.
   *
   * return is the base ptr, and the previous local count, if it is
   * needed for compare_and_swap later.
   */
  PackedPtr takeOwnedBase(std::memory_order order) const noexcept {
    PackedPtr local, newlocal;
    local = ptr_.load(std::memory_order_acquire);
    while (true) {
      if (!local.get()) {
        return local;
      }
      newlocal = local;
      if (get_local_count(newlocal) + 1 > EXTERNAL_OFFSET) {
        // spinlock in the rare case we have more than
        // EXTERNAL_OFFSET threads trying to access at once.
        std::this_thread::yield();
        // Force DeterministicSchedule to choose a different thread
        local = ptr_.load(std::memory_order_acquire);
      } else {
        newlocal.setExtra(newlocal.extra() + 1);
        assert(get_local_count(newlocal) > 0);
        if (ptr_.compare_exchange_weak(local, newlocal, order)) {
          break;
        }
      }
    }
    }