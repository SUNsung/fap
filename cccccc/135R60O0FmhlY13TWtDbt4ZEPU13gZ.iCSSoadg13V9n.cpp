
    {}  // namespace tensorflow

    
    #endif  // TENSORFLOW_COMPILER_XLA_SERVICE_HLO_CONSTANT_FOLDING_H_

    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    int SubProcess::Communicate(const string* stdin_input, string* stdout_output,
                            string* stderr_output) {
  struct pollfd fds[kNFds];
  size_t nbytes[kNFds];
  string* iobufs[kNFds];
  int fd_count = 0;
    }
    
    // Converts a parsed driver version to string form.
string DriverVersionToString(DriverVersion version);
    
    void SYCLDeviceContext::CopyDeviceTensorToCPU(const Tensor *device_tensor,
                                              StringPiece edge_name,
                                              Device *device,
                                              Tensor *cpu_tensor,
                                              StatusCallback done) {
  const int64 total_bytes = device_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(device_tensor);
    void *dst_ptr = DMAHelper::base(cpu_tensor);
    switch (device_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyDeviceToHost(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyDeviceToHost(
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
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
    #include 'tensorflow/core/lib/strings/strcat.h'
    
    // See docs in ../ops/io_ops.cc.
    
    HloReachabilityMap::HloReachabilityMap(
    const std::list<HloInstruction*>& instructions)
    : size_(instructions.size()) {
  bit_vectors_.reserve(size_);
  for (const HloInstruction* hlo : instructions) {
    indices_[hlo] = bit_vectors_.size();
    bit_vectors_.emplace_back(size_);
  }
  CHECK_EQ(size_, indices_.size());  // instructions should be unique
}
    
    #if PY_MAJOR_VERSION >= 3
static struct PyModuleDef _module = {
  PyModuleDef_HEAD_INIT,
  kModuleName,
  kModuleDocstring,
  -1,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};
#define INITFUNC PyInit__api_implementation
#define INITFUNC_ERRORVAL NULL
#else
#define INITFUNC init_api_implementation
#define INITFUNC_ERRORVAL
#endif
    
    // Convert a Python object to a FileDescriptorProto pointer.
// Handles all kinds of Python errors, which are simply logged.
static bool GetFileDescriptorProto(PyObject* py_descriptor,
                                   FileDescriptorProto* output) {
  if (py_descriptor == NULL) {
    if (PyErr_ExceptionMatches(PyExc_KeyError)) {
      // Expected error: item was simply not found.
      PyErr_Clear();
    } else {
      GOOGLE_LOG(ERROR) << 'DescriptorDatabase method raised an error';
      PyErr_Print();
    }
    return false;
  }
  if (py_descriptor == Py_None) {
    return false;
  }
  const Descriptor* filedescriptor_descriptor =
      FileDescriptorProto::default_instance().GetDescriptor();
  CMessage* message = reinterpret_cast<CMessage*>(py_descriptor);
  if (PyObject_TypeCheck(py_descriptor, &CMessage_Type) &&
      message->message->GetDescriptor() == filedescriptor_descriptor) {
    // Fast path: Just use the pointer.
    FileDescriptorProto* file_proto =
        static_cast<FileDescriptorProto*>(message->message);
    *output = *file_proto;
    return true;
  } else {
    // Slow path: serialize the message. This allows to use databases which
    // use a different implementation of FileDescriptorProto.
    ScopedPyObjectPtr serialized_pb(
        PyObject_CallMethod(py_descriptor, 'SerializeToString', NULL));
    if (serialized_pb == NULL) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    char* str;
    Py_ssize_t len;
    if (PyBytes_AsStringAndSize(serialized_pb.get(), &str, &len) < 0) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    FileDescriptorProto file_proto;
    if (!file_proto.ParseFromArray(str, len)) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      return false;
    }
    *output = file_proto;
    return true;
  }
}
    
    #include <Python.h>
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
    
    #include <string>
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    void convert_dataset(const string& input_folder, const string& output_folder,
    const string& db_type) {
  scoped_ptr<db::DB> train_db(db::GetDB(db_type));
  train_db->Open(output_folder + '/cifar10_train_' + db_type, db::NEW);
  scoped_ptr<db::Transaction> txn(train_db->NewTransaction());
  // Data buffer
  int label;
  char str_buffer[kCIFARImageNBytes];
  Datum datum;
  datum.set_channels(3);
  datum.set_height(kCIFARSize);
  datum.set_width(kCIFARSize);
    }
    
    #if defined(USE_LEVELDB) && defined(USE_LMDB)
#include <leveldb/db.h>
#include <leveldb/write_batch.h>
#include <lmdb.h>
#endif
    
    /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    namespace caffe {
    }
    
    namespace caffe {
    }
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of TanHLayer.
 */
template <typename Dtype>
class CuDNNTanHLayer : public TanHLayer<Dtype> {
 public:
  explicit CuDNNTanHLayer(const LayerParameter& param)
      : TanHLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNTanHLayer();
    }
    
    #include 'caffe/layers/neuron_layer.hpp'
    
      virtual inline const char* type() const { return 'Exp'; }
    
    
    {            for (auto& x : m_netStatefulNodes)
            {
                const wstring& name = x.first;
                auto& pNode         = x.second;
                if (m_netStates[name][iSubminibatch])
                    pNode->ImportState(std::move(m_netStates[name][iSubminibatch]));
            }
        }
    
        void Train(shared_ptr<ComputationNetwork> net, DEVICEID_TYPE deviceId,
               IDataReader* trainSetDataReader,
               IDataReader* validationSetDataReader, int startEpoch, bool loadNetworkFromCheckpoint);
    void Adapt(wstring origModelFileName, wstring refNodeName,
               IDataReader* trainSetDataReader,
               IDataReader* validationSetDataReader,
               const DEVICEID_TYPE deviceID, const bool makeMode = true);
    
        template <typename ElemType>
    bool AccumulateData(ElemType* dataSource, size_t numRecords, size_t recordStart, size_t datasetSize);
    
        // first try if a NetworkBuilder is present
    function<ComputationNetworkPtr(DEVICEID_TYPE)> createNetworkFn;
    bool gotIt = TryGetNetworkFactory<ConfigRecordType, ElemType>(config, createNetworkFn);
    if (gotIt)
    {
        // We have several ways to create a network.
        net = createNetworkFn(deviceId);
        if (outputNodeNames.size() > 0)
        {
            net->InvalidateCompiledNetwork();
            PatchOutputNodes(net, outputNodeNames, outputNodeNamesVector);
            net->CompileNetwork();
            // BUGBUG: This will generate double Validation output in the log
        }
    }
    else // no NetworkBuilder given: load from 'modelPath'
    {
        wstring modelPath = config(L'modelPath');
    }
    
    template void DoConvertFromDbn<float>(const ConfigParameters& config);
template void DoConvertFromDbn<double>(const ConfigParameters& config);
template void DoExportToDbn<float>(const ConfigParameters& config);
template void DoExportToDbn<double>(const ConfigParameters& config);

    
    // ---------------------------------------------------------------------------
// Expression -- the entire config is a tree of Expression types
// We don't use polymorphism here because C++ is so verbose...
// ---------------------------------------------------------------------------
    
        bool GetOptionalIncludeDataValue(const ConfigParamList& params, const size_t numFixedParams)
    {
        bool includeData = false;
        for (size_t paramNumber = params.size(); paramNumber > numFixedParams; paramNumber--)
        {
            // process optional parameter if it exists
            std::string propName, value;
            if (OptionalParameter(params[paramNumber - 1], propName, value))
            {
                if (EqualInsensitive(propName, 'includeData'))
                {
                    includeData = ConfigValue(value);
                }
                else
                {
                    RuntimeError('Invalid optional parameter %s, valid optional parameters: includeData=(false|true)', propName.c_str());
                }
            }
        }
    }
    
    // GetFileConfigNames - determine the names of the features and labels sections in the config file
// features - [in,out] a vector of feature name strings
// labels - [in,out] a vector of label name strings
template <class ConfigRecordType>
void GetFileConfigNames(const ConfigRecordType& config, std::vector<std::wstring>& features, std::vector<std::wstring>& labels)
{
    for (const auto& id : config.GetMemberIds())
    {
        if (!config.CanBeConfigRecord(id))
            continue;
        const ConfigRecordType& temp = config(id);
        // ############### BREAKING ############
        // Before it required a 'dim' parameter, but that was unused for labels.
        // ############### BREAKING ############
        //// see if we have a config parameters that contains a 'dim' element, it's a sub key, use it
        //if (temp.ExistsCurrent(L'dim'))
        //{
        // any sub-dictionary that contains any relevant entries is considered an input stream, either label or features
        if (temp.ExistsCurrent(L'labelMappingFile') || temp.ExistsCurrent(L'labelDim') || temp.ExistsCurrent(L'labelType') || (temp.ExistsCurrent(L'sectionType') && (const wstring&) temp(L'sectionType') == L'labels'))
            labels.push_back(id);
        else if (temp.ExistsCurrent(L'dim'))
            features.push_back(id);
        //}
    }
}
    
    public:
    // DataWriter Constructor
    // config - [in] configuration parameters for the datareader
    template <class ConfigRecordType>
    DataWriter(const ConfigRecordType& config);
    // constructor from Scripting
    DataWriter(const ScriptableObjects::IConfigRecordPtr configp)
        : DataWriter(*configp)
    {
    }
    virtual ~DataWriter();
    
    #include <string>
    
    public:
    typedef msra::dbn::latticepair latticepair;
    latticesource(std::pair<std::vector<std::wstring>, std::vector<std::wstring>> latticetocs, const std::unordered_map<std::string, size_t>& modelsymmap, std::wstring RootPathInToc)
        : numlattices(latticetocs.first, modelsymmap, RootPathInToc), denlattices(latticetocs.second, modelsymmap, RootPathInToc), verbosity(0)
    {
    }
    
    /**
 * @brief DECLARE_PUBLISHER supplies needed boilerplate code that applies a
 * string-type EventPublisherID to identify the publisher declaration.
 */
#define DECLARE_PUBLISHER(TYPE)                                                \
 public:                                                                       \
  const std::string type() const override final {                              \
    return TYPE;                                                               \
  }
    
      /**
   * @brief Attempt to drop privileges to that of the parent of a given path.
   *
   * This will return false if privileges could not be dropped or there was
   * an previous, and still active, request for dropped privileges.
   *
   * @return success if privileges were dropped, otherwise false.
   */
  bool dropToParent(const boost::filesystem::path& path);
    
    using RouteUUID = uint64_t;
    
      // Enables use of gtest (ASSERT|EXPECT)_NE
  bool operator!=(const Status& rhs) const { return !operator==(rhs); }
    
        // Unlock while applying update logic, re-lock on error and success.
    lck_mtx_unlock(osquery.mtx);
    sync = (osquery_buf_sync_args_t *)data;
    if ((err = update_user_kernel_buffer(sync->options,
                                         sync->read_offset,
                                         &(sync->max_read_offset),
                                         &(sync->drops)))) {
      lck_mtx_lock(osquery.mtx);
      goto error_exit;
    }
    lck_mtx_lock(osquery.mtx);
    break;
    
    /// Database domain where we store carve table entries
const std::string kCarveDbDomain = 'carves';
    
    namespace osquery {
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    
    {      multi_pack.put_child(fs::path(path).stem().string(), single_pack);
    }
    
    namespace osquery {
    }
    
    Status Flag::updateValue(const std::string& name, const std::string& value) {
  if (instance().flags_.count(name) > 0) {
    flags::SetCommandLineOption(name.c_str(), value.c_str());
    return Status(0, 'OK');
  } else if (instance().aliases_.count(name) > 0) {
    // Updating a flag by an alias name.
    auto& real_name = instance().aliases_.at(name).description;
    flags::SetCommandLineOption(real_name.c_str(), value.c_str());
    return Status(0, 'OK');
  } else if (name.find('custom_') == 0) {
    instance().custom_[name] = value;
  }
  return Status(1, 'Flag not found');
}
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
        // Set OS mouse position if requested last frame by io.WantMoveMouse flag (used when io.NavMovesTrue is enabled by user and using directional navigation)
    if (io.WantMoveMouse)
    {
        POINT pos = { (int)io.MousePos.x, (int)io.MousePos.y };
        ClientToScreen(g_hWnd, &pos);
        SetCursorPos(pos.x, pos.y);
    }
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
        ImGui_ImplDX11_NewFrame();
    }
    
    IMGUI_API bool        ImGui_ImplDX9_Init(void* hwnd, IDirect3DDevice9* device);
IMGUI_API void        ImGui_ImplDX9_Shutdown();
IMGUI_API void        ImGui_ImplDX9_NewFrame();
IMGUI_API void        ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    
    {    // TODO: restore modified state (i.e. mvp matrix)
}
    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL2_CreateDeviceObjects();
    
    // cpp_generator.h/.cc do not directly depend on GRPC/ProtoBuf, such that they
// can be used to generate code for other serialization systems, such as
// FlatBuffers.
    
        // The `ReleaseMessage<T>()` function detaches the message from the
    // builder, so we can transfer the resopnse to gRPC while simultaneously
    // detaching that memory buffer from the builer.
    *response_msg = mb_.ReleaseMessage<HelloReply>();
    assert(response_msg->Verify());
    
    namespace MyGame {
namespace Example {
    }
    }
    
      T *operator*() const {
    return reinterpret_cast<T *>(
        reinterpret_cast<uint8_t *>(flatbuffers::vector_data(vec_)) + offset_);
  }
  T *operator->() const { return operator*(); }
  void operator=(const pointer_inside_vector &piv);
    
    // Convenience class to easily parse or generate text for arbitrary FlatBuffers.
// Simply pre-populate it with all schema filenames that may be in use, and
// This class will look them up using the file_identifier declared in the
// schema.
class Registry {
 public:
  // Call this for all schemas that may be in use. The identifier has
  // a function in the generated code, e.g. MonsterIdentifier().
  void Register(const char *file_identifier, const char *schema_path) {
    Schema schema;
    schema.path_ = schema_path;
    schemas_[file_identifier] = schema;
  }
    }
    
    #include 'monster_generated.h'  // Already includes 'flatbuffers/flatbuffers.h'.
    
    
    {
    {    ss << '  ' << full_name.str() << ' ' << name << '    ' << help << '.\n';
  }
  // clang-format off
  ss <<
    '  -o PATH            Prefix PATH to all generated files.\n'
    '  -I PATH            Search for includes in the specified path.\n'
    '  -M                 Print make rules for generated files.\n'
    '  --version          Print the version number of flatc and exit.\n'
    '  --strict-json      Strict JSON: field names must be / will be quoted,\n'
    '                     no trailing commas in tables/vectors.\n'
    '  --allow-non-utf8   Pass non-UTF-8 input through parser and emit nonstandard\n'
    '                     \\x escapes in JSON. (Default is to raise parse error on\n'
    '                     non-UTF-8 input.)\n'
    '  --defaults-json    Output fields whose value is the default when\n'
    '                     writing JSON\n'
    '  --unknown-json     Allow fields in JSON that are not defined in the\n'
    '                     schema. These fields will be discared when generating\n'
    '                     binaries.\n'
    '  --no-prefix        Don\'t prefix enum values with the enum type in C++.\n'
    '  --scoped-enums     Use C++11 style scoped and strongly typed enums.\n'
    '                     also implies --no-prefix.\n'
    '  --gen-includes     (deprecated), this is the default behavior.\n'
    '                     If the original behavior is required (no include\n'
    '                     statements) use --no-includes.\n'
    '  --no-includes      Don\'t generate include statements for included\n'
    '                     schemas the generated file depends on (C++).\n'
    '  --gen-mutable      Generate accessors that can mutate buffers in-place.\n'
    '  --gen-onefile      Generate single output file for C# and Go.\n'
    '  --gen-name-strings Generate type name functions for C++.\n'
    '  --gen-object-api   Generate an additional object-based API.\n'
    '  --cpp-ptr-type T   Set object API pointer type (default std::unique_ptr)\n'
    '  --cpp-str-type T   Set object API string type (default std::string)\n'
    '                     T::c_str() and T::length() must be supported\n'
    '  --gen-nullable     Add Clang _Nullable for C++ pointer. or @Nullable for Java\n'
    '  --object-prefix    Customise class prefix for C++ object-based API.\n'
    '  --object-suffix    Customise class suffix for C++ object-based API.\n'
    '                     Default value is \'T\'\n'
    '  --no-js-exports    Removes Node.js style export lines in JS.\n'
    '  --goog-js-export   Uses goog.exports* for closure compiler exporting in JS.\n'
    '  --go-namespace     Generate the overrided namespace in Golang.\n'
    '  --go-import        Generate the overrided import for flatbuffers in Golang.\n'
    '                     (default is \'github.com/google/flatbuffers/go\')\n'
    '  --raw-binary       Allow binaries without file_indentifier to be read.\n'
    '                     This may crash flatc given a mismatched schema.\n'
    '  --proto            Input is a .proto, translate to .fbs.\n'
    '  --grpc             Generate GRPC interfaces for the specified languages\n'
    '  --schema           Serialize schemas instead of JSON (use with -b)\n'
    '  --bfbs-comments    Add doc comments to the binary schema files.\n'
    '  --conform FILE     Specify a schema the following schemas should be\n'
    '                     an evolution of. Gives errors if not.\n'
    '  --conform-includes Include path for the schema given with --conform\n'
    '    PATH             \n'
    '  --include-prefix   Prefix this path to any generated include statements.\n'
    '    PATH\n'
    '  --keep-prefix      Keep original prefix of schema include statement.\n'
    '  --no-fb-import     Don't include flatbuffers import statement for TypeScript.\n'
    '  --no-ts-reexport   Don't re-export imported dependencies for TypeScript.\n'
    '  --reflect-types    Add minimal type reflection to code generation.\n'
    '  --reflect-names    Add minimal type/name reflection.\n'
    'FILEs may be schemas (must end in .fbs), or JSON files (conforming to preceding\n'
    'schema). FILEs after the -- must be binary flatbuffer format files.\n'
    'Output files are named using the base file name of the input,\n'
    'and written to the current directory or the path given by -o.\n'
    'example: ' << program_name << ' -c -b schema1.fbs schema2.fbs data.json\n';
  // clang-format on
  return ss.str();
}
    
    static void Warn(const flatbuffers::FlatCompiler *flatc,
                 const std::string &warn, bool show_exe_name) {
  (void)flatc;
  if (show_exe_name) { printf('%s: ', g_program_name); }
  printf('warning: %s\n', warn.c_str());
}