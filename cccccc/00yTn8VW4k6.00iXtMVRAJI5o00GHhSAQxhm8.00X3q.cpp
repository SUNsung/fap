
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    template <>
inline std::vector<int64_t> Split(const string& s, const string& delimiter) {
  std::vector<int64_t> fields;
  for (const auto& p : SplitToPos(s, delimiter)) {
    fields.push_back(strtoll(s.data() + p.first, nullptr, 10));
  }
  return fields;
}
    
    
    {    Tensor* output = nullptr;
    OP_REQUIRES_OK(context, context->allocate_output(0, output_shape, &output));
    auto output_reshaped = output->flat<T>();
    auto input_reshaped = input.flat_inner_dims<T, 3>();
    functor::MatrixDiagPart<Device, T>::Compute(
        context, context->eigen_device<Device>(), input_reshaped,
        output_reshaped, lower_diag_index, upper_diag_index, max_diag_len,
        padding_value);
  }
    
    TF_CALL_int64(DECLARE_GPU_SPECS);
TF_CALL_GPU_NUMBER_TYPES(DECLARE_GPU_SPECS);
TF_CALL_complex64(DECLARE_GPU_SPECS);
TF_CALL_complex128(DECLARE_GPU_SPECS);
    
    #if GOOGLE_CUDA || TENSORFLOW_USE_ROCM
    
    namespace {
    }
    
      T* operator->() const { return object_; }
  v8::Local<v8::Object> ToV8() const { return wrapper_; }
  T* get() const { return object_; }
    
    
    {  return args[0];
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
    
    
    {  DISALLOW_COPY_AND_ASSIGN(BrowserWindow);
};
    
      SourceLoc getLParenLoc() const { return LParenLoc; }
  SourceLoc getRParenLoc() const { return RParenLoc; }
  
  typedef MutableArrayRef<ParamDecl*>::iterator iterator;
  typedef ArrayRef<ParamDecl*>::iterator const_iterator;
  iterator begin() { return getArray().begin(); }
  iterator end() { return getArray().end(); }
  const_iterator begin() const { return getArray().begin(); }
  const_iterator end() const { return getArray().end(); }
  
  MutableArrayRef<ParamDecl*> getArray() {
    return {getTrailingObjects<ParamDecl*>(), numParameters};
  }
  ArrayRef<ParamDecl*> getArray() const {
    return {getTrailingObjects<ParamDecl*>(), numParameters};
  }
    
    void DocSerializer::writeDocHeader() {
  {
    BCBlockRAII restoreBlock(Out, CONTROL_BLOCK_ID, 3);
    control_block::ModuleNameLayout ModuleName(Out);
    control_block::MetadataLayout Metadata(Out);
    control_block::TargetLayout Target(Out);
    }
    }
    
    static _Unwind_Reason_Code SwiftUnwindFrame(struct _Unwind_Context *context, void *arg) {
  struct UnwindState *state = static_cast<struct UnwindState *>(arg);
  if (state->current == state->end) {
    return _URC_END_OF_STACK;
  }
    }
    
    KNOWN_STDLIB_TYPE_DECL(Int,   NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Int64, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Int32, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Int16, NominalTypeDecl, 0)
KNOWN_STDLIB_TYPE_DECL(Int8,  NominalTypeDecl, 0)
    
    #if defined(__APPLE__) || defined(__FreeBSD__) || defined(__ANDROID__)
static inline locale_t getCLocale() {
  // On these platforms convenience functions from xlocale.h interpret nullptr
  // as C locale.
  return nullptr;
}
#elif defined(__CYGWIN__) || defined(__HAIKU__)
// In Cygwin, getCLocale() is not used.
#elif defined(_WIN32)
static _locale_t makeCLocale() {
  _locale_t CLocale = _create_locale(LC_ALL, 'C');
  if (!CLocale) {
    swift::crash('makeCLocale: _create_locale() returned a null pointer');
  }
  return CLocale;
}
    
    llvm::Expected<CustomAttr *>
AttachedFunctionBuilderRequest::evaluate(Evaluator &evaluator,
                                         ValueDecl *decl) const {
  ASTContext &ctx = decl->getASTContext();
  auto dc = decl->getDeclContext();
  for (auto attr : decl->getAttrs().getAttributes<CustomAttr>()) {
    auto mutableAttr = const_cast<CustomAttr *>(attr);
    // Figure out which nominal declaration this custom attribute refers to.
    auto nominal = evaluateOrDefault(ctx.evaluator,
                                     CustomAttrNominalRequest{mutableAttr, dc},
                                     nullptr);
    }
    }
    
    class OpenURIDialog : public QDialog
{
    Q_OBJECT
    }
    
        bool getImagesOnButtons() const { return imagesOnButtons; }
    bool getUseExtraSpacing() const { return useExtraSpacing; }
    
    #endif /* SECP256K1_MODULE_RECOVERY_TESTS_H */

    
    static const char *json1 =
'[1.10000000,{\'key1\':\'str\\u0000\',\'key2\':800,\'key3\':{\'name\':\'martian http://test.com\'}}]';
    
    namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
      ScopedPyObjectPtr obj(PyType_GenericAlloc(&ExtensionIterator_Type, 0));
  if (obj == nullptr) {
    return PyErr_Format(PyExc_MemoryError,
                        'Could not allocate extension iterator');
  }
    
    class Message;
    
      // Generates code for the given proto file, generating one or more files in
  // the given output directory.
  //
  // A parameter to be passed to the generator can be specified on the command
  // line. This is intended to be used to pass generator specific parameters.
  // It is empty if no parameter was given. ParseGeneratorParameter (below),
  // can be used to accept multiple parameters within the single parameter
  // command line flag.
  //
  // Returns true if successful.  Otherwise, sets *error to a description of
  // the problem (e.g. 'invalid parameter') and returns false.
  virtual bool Generate(const FileDescriptor* file,
                        const std::string& parameter,
                        GeneratorContext* generator_context,
                        std::string* error) const = 0;
    
        if (pb_h != NULL && pb_h_info != NULL) {
      GOOGLE_CHECK_OK(
          File::GetContents(output_base + '.pb.h', pb_h, true));
      if (!atu::DecodeMetadata(output_base + '.pb.h.meta', pb_h_info)) {
        return false;
      }
    }
    
    namespace content {
class RenderFrameHost;
}
    
    void Clipboard::Call(const std::string& method,
                     const base::ListValue& arguments) {
  if (method == 'Set') {
    std::string text, type;
    arguments.GetString(0, &text);
    arguments.GetString(1, &type);
    SetText(text);
  } else if (method == 'Clear') {
    Clear();
  } else {
    NOTREACHED() << 'Invalid call to Clipboard method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    void Menu::RemoveKeys() {
  if (!focus_manager_) return;
    }
    
     protected:
  ~NwClipboardClearSyncFunction() override;
    
      protected:
    ~NwScreenRegisterStreamFunction() override {}
    DECLARE_EXTENSION_FUNCTION('nw.Screen.registerStream', UNKNOWN)
    
    // global JVM
static JavaVM* global_jvm = nullptr;
    
    
    {    elem_of_each_node_[left_node_id] = Elem(begin, split_pt, left_node_id);
    elem_of_each_node_[right_node_id] = Elem(split_pt, e.end, right_node_id);
    elem_of_each_node_[node_id] = Elem(begin, e.end, -1);
  }
    
    SEXP XGDMatrixCreateFromMat_R(SEXP mat,
                              SEXP missing) {
  SEXP ret;
  R_API_BEGIN();
  SEXP dim = getAttrib(mat, R_DimSymbol);
  size_t nrow = static_cast<size_t>(INTEGER(dim)[0]);
  size_t ncol = static_cast<size_t>(INTEGER(dim)[1]);
  const bool is_int = TYPEOF(mat) == INTSXP;
  double *din;
  int *iin;
  if (is_int) {
    iin = INTEGER(mat);
  } else {
    din = REAL(mat);
  }
  std::vector<float> data(nrow * ncol);
  #pragma omp parallel for schedule(static)
  for (omp_ulong i = 0; i < nrow; ++i) {
    for (size_t j = 0; j < ncol; ++j) {
      data[i * ncol +j] = is_int ? static_cast<float>(iin[i + nrow * j]) : din[i + nrow * j];
    }
  }
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromMat(BeginPtr(data), nrow, ncol, asReal(missing), &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
      devices = GPUSet::Range(2, -1);
  EXPECT_EQ(devices, GPUSet::Empty());
  EXPECT_EQ(devices.Size(), 0);
  EXPECT_TRUE(devices.IsEmpty());
    
    template<typename T>
XGBOOST_DEVICE inline T LogGamma(T v) {
#ifdef _MSC_VER
    }
    
    // This is a helpful data structure to define parameters
// You do not have to use it.
// see http://dmlc-core.readthedocs.org/en/latest/parameter.html
// for introduction of this module.
struct MyLogisticParam : public dmlc::Parameter<MyLogisticParam> {
  float scale_neg_weight;
  // declare parameters
  DMLC_DECLARE_PARAMETER(MyLogisticParam) {
    DMLC_DECLARE_FIELD(scale_neg_weight).set_default(1.0f).set_lower_bound(0.0f)
        .describe('Scale the weight of negative examples by this factor');
  }
};
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }
    
    
    {    symbol <<= 7 - ibit_end % 8;
    for (ptrdiff_t ibyte = ibyte_end; ibyte >= (ptrdiff_t)ibyte_start; --ibyte) {
      dh::AtomicOrByte(reinterpret_cast<unsigned int*>(buffer + detail::kPadding),
                       ibyte, symbol & 0xff);
      symbol >>= 8;
    }
  }
#endif  // __CUDACC__
    
      vals_in.clear(); ss.flush(); ss.clear(); ss.str('');
  ss << ' (3,2,1,)';
  ss >> vals_in;
  EXPECT_EQ(vals_in, vals);
    
    // redirect the nath functions.
bool CheckNAN(double v) {
  return ISNAN(v);
}
#if !defined(XGBOOST_USE_CUDA)
double LogGamma(double v) {
  return lgammafn(v);
}
#endif  // !defined(XGBOOST_USE_CUDA)
// customize random engine.
void CustomGlobalRandomEngine::seed(CustomGlobalRandomEngine::result_type val) {
  // ignore the seed
}
    
      using apollo::common::ErrorCode;
  using apollo::drivers::canbus::CanAgent;
  using apollo::drivers::canbus::CANCardParameter;
  using apollo::drivers::canbus::CanClient;
  using apollo::drivers::canbus::CanClientFactory;
  using apollo::drivers::canbus::TestCanParam;
  CANCardParameter can_client_conf_a;
  std::shared_ptr<TestCanParam> param_ptr_a(new TestCanParam());
  std::shared_ptr<TestCanParam> param_ptr_b(new TestCanParam());
    
    #pragma once
    
    bool Scenario::LoadConfig(const std::string& config_file,
                          ScenarioConfig* config) {
  return apollo::cyber::common::GetProtoFromFile(config_file, config);
}
    
      Eigen::Vector3d translation;
  Eigen::Quaterniond quat;
  fin >> *frame_id >> *time_stamp >> translation(0) >> translation(1) >>
      translation(2) >> quat.x() >> quat.y() >> quat.z() >> quat.w();
    
    class PullOverScenarioTest : public ::testing::Test {
 public:
  virtual void SetUp() {}
    }
    
     private:
  struct Entry {
    Entry() {}
    explicit Entry(K key) : key(key) {
      value_ptr.store(new V(), std::memory_order_release);
    }
    Entry(K key, const V &value) : key(key) {
      value_ptr.store(new V(value), std::memory_order_release);
    }
    Entry(K key, V &&value) : key(key) {
      value_ptr.store(new V(std::forward<V>(value)), std::memory_order_release);
    }
    ~Entry() { delete value_ptr.load(std::memory_order_acquire); }
    }
    
    void ChannelManager::GetReadersOfNode(const std::string& node_name,
                                      RoleAttrVec* readers) {
  RETURN_IF_NULL(readers);
  uint64_t key = common::GlobalData::RegisterNode(node_name);
  node_readers_.Search(key, readers);
}
    
    bool LoadFromKitti(const std::string &kitti_path, CameraFrame *frame) {
  frame->detected_objects.clear();
  FILE *fp = fopen(kitti_path.c_str(), 'r');
  if (fp == nullptr) {
    AERROR << 'Failed to load object file: ' << kitti_path;
    return false;
  }
  while (!feof(fp)) {
    base::ObjectPtr obj = nullptr;
    obj.reset(new base::Object);
    float trash = 0.0f;
    float score = 0.0f;
    char type[255];
    float x1 = 0.0f;
    float y1 = 0.0f;
    float x2 = 0.0f;
    float y2 = 0.0f;
    memset(type, 0, sizeof(type));
    }
    }
    
    
    {int WriteLanelines(const bool enabled, const std::string &save_path,
                   const std::vector<base::LaneLine> &lane_objects) {
  if (!enabled) {
    return -1;
  }
  FILE *file_save = fopen(save_path.data(), 'wt');
  if (file_save == nullptr) {
    AERROR << 'Failed to open lane save path: ' << save_path;
    return -1;
  }
  int lane_line_size = static_cast<int>(lane_objects.size());
  AINFO << 'Lane line num: ' << lane_line_size;
  fprintf(file_save, '[\n');
  for (int j = 0; j < lane_line_size; ++j) {
    const base::LaneLineCubicCurve &curve_camera =
        lane_objects[j].curve_camera_coord;
    const base::LaneLineCubicCurve &curve_img =
        lane_objects[j].curve_image_coord;
    const std::vector<base::Point3DF> &camera_point_set =
        lane_objects[j].curve_camera_point_set;
    const std::vector<base::Point2DF> &image_point_set =
        lane_objects[j].curve_image_point_set;
    fprintf(file_save, '{\n');
    fprintf(file_save, '\'type\':%d,\n', lane_objects[j].type);
    fprintf(file_save, '\'pos_type\':%d,\n', lane_objects[j].pos_type);
    // Camera curve
    fprintf(file_save, '\'camera_curve\':\n');
    fprintf(file_save, '{\'a\':%.10f,\'b\':%.10f,\'c\':%.10f,\'d\':%.10f,',
            curve_camera.a, curve_camera.b, curve_camera.c, curve_camera.d);
    fprintf(file_save, '\'x0\':%.10f,\'x1\':%.10f},\n', curve_camera.x_start,
            curve_camera.x_end);
    // Camera image point set
    fprintf(file_save, '\'camera_point_set\':\n');
    fprintf(file_save, '[');
    for (size_t k = 0; k < camera_point_set.size(); k++) {
      if (k < camera_point_set.size() - 1) {
        fprintf(file_save, '{\'x\':%.4f,\'y\':%.4f,\'z\':%.4f},',
                camera_point_set[k].x, camera_point_set[k].y,
                camera_point_set[k].z);
      } else {
        fprintf(file_save, '{\'x\':%.4f,\'y\':%.4f,\'z\':%.4f}',
                camera_point_set[k].x, camera_point_set[k].y,
                camera_point_set[k].z);
      }
    }
    fprintf(file_save, '],');
    fprintf(file_save, '\n');
    // Image curve
    fprintf(file_save, '\'image_curve\':\n');
    fprintf(file_save, '{\'a\':%.10f,\'b\':%.10f,\'c\':%.10f,\'d\':%.10f,',
            curve_img.a, curve_img.b, curve_img.c, curve_img.d);
    fprintf(file_save, '\'x0\':%.10f,\'x1\':%.10f},\n', curve_img.x_start,
            curve_img.x_end);
    // Curve image point set
    fprintf(file_save, '\'image_point_set\':\n');
    fprintf(file_save, '[');
    for (size_t k = 0; k < image_point_set.size(); ++k) {
      if (k < image_point_set.size() - 1) {
        fprintf(file_save, '{\'x\':%.4f,\'y\':%.4f},', image_point_set[k].x,
                image_point_set[k].y);
      } else {
        fprintf(file_save, '{\'x\':%.4f,\'y\':%.4f}', image_point_set[k].x,
                image_point_set[k].y);
      }
    }
    fprintf(file_save, ']');
    fprintf(file_save, '\n');
    if (j < lane_line_size - 1) {
      fprintf(file_save, '},\n');
    } else {
      fprintf(file_save, '}\n');
    }
  }
  fprintf(file_save, ']\n');
  fclose(file_save);
  return 0;
}