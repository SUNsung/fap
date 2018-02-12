
        
        class TestFileSystem : public NullFileSystem {
 public:
  Status NewRandomAccessFile(
      const string& fname, std::unique_ptr<RandomAccessFile>* result) override {
    result->reset(new TestRandomAccessFile);
    return Status::OK();
  }
  // Always return size of 10
  Status GetFileSize(const string& fname, uint64* file_size) override {
    *file_size = 10;
    return Status::OK();
  }
};
    
    #include 'tensorflow/core/framework/op_kernel.h'
#include 'tensorflow/core/framework/resource_mgr.h'
#include 'tensorflow/core/framework/tensor_shape.h'
#include 'tensorflow/core/platform/logging.h'
#include 'tensorflow/core/platform/mutex.h'
#include 'tensorflow/core/platform/thread_annotations.h'
#include 'tensorflow/core/platform/types.h'
    
    
    {  virtual ~SessionFactory() {}
  static void Register(const string& runtime_type, SessionFactory* factory);
  static Status GetFactory(const SessionOptions& options,
                           SessionFactory** out_factory);
};
    
    #ifndef TENSORFLOW_GRAPPLER_OPTIMIZERS_MODEL_PRUNER_H_
#define TENSORFLOW_GRAPPLER_OPTIMIZERS_MODEL_PRUNER_H_
    
    
    { private:
  PluginId blas_, dnn_, fft_, rng_;
};
    
    #include <deque>
#include <vector>
    
    
    {// Options specific to zlib compression.
#if !defined(IS_SLIM_BUILD)
  ZlibCompressionOptions zlib_options;
#endif  // IS_SLIM_BUILD
};
    
    namespace internal {
template <typename T>
struct functor_traits<scalar_sigmoid_fast_derivative_op<T> > {
  enum {
    Cost = NumTraits<T>::AddCost * 2 + NumTraits<T>::MulCost,
    PacketAccess = packet_traits<T>::HasAdd && packet_traits<T>::HasMul &&
                   packet_traits<T>::HasNegate
  };
};
}  // namespace internal
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        const Tensor& contents = context->input(0);
    const Tensor& file_format_tensor = context->input(1);
    const Tensor& samples_per_second_tensor = context->input(2);
    const Tensor& bits_per_second_tensor = context->input(3);
    
       * If the object has no entry for that name, then the member name used to store
   * the new entry is not duplicated.
   * Example of use:
   * \code
   * Json::Value object;
   * static const StaticString code('code');
   * object[code] = 1234;
   * \endcode
   */
  Value& operator[](const StaticString& key);
#ifdef JSON_USE_CPPTL
  /// Access an object value by name, create a null member if it does not exist.
  Value& operator[](const CppTL::ConstString& key);
  /// Access an object value by name, returns null if there is no member with
  /// that name.
  const Value& operator[](const CppTL::ConstString& key) const;
#endif
  /// Return the member named key if it exist, defaultValue otherwise.
  /// \note deep copy
  Value get(const char* key, const Value& defaultValue) const;
  /// Return the member named key if it exist, defaultValue otherwise.
  /// \note deep copy
  /// \note key may contain embedded nulls.
  Value get(const char* begin, const char* end, const Value& defaultValue) const;
  /// Return the member named key if it exist, defaultValue otherwise.
  /// \note deep copy
  /// \param key may contain embedded nulls.
  Value get(const std::string& key, const Value& defaultValue) const;
#ifdef JSON_USE_CPPTL
  /// Return the member named key if it exist, defaultValue otherwise.
  /// \note deep copy
  Value get(const CppTL::ConstString& key, const Value& defaultValue) const;
#endif
  /// Most general and efficient version of isMember()const, get()const,
  /// and operator[]const
  /// \note As stated elsewhere, behavior is undefined if (end-begin) >= 2^30
  Value const* find(char const* begin, char const* end) const;
  /// Most general and efficient version of object-mutators.
  /// \note As stated elsewhere, behavior is undefined if (end-begin) >= 2^30
  /// \return non-zero, but JSON_ASSERT if this is neither object nor nullValue.
  Value const* demand(char const* begin, char const* end);
  /// \brief Remove and return the named member.
  ///
  /// Do nothing if it did not exist.
  /// \return the removed Value, or null.
  /// \pre type() is objectValue or nullValue
  /// \post type() is unchanged
  /// \deprecated
  Value removeMember(const char* key);
  /// Same as removeMember(const char*)
  /// \param key may contain embedded nulls.
  /// \deprecated
  Value removeMember(const std::string& key);
  /// Same as removeMember(const char* begin, const char* end, Value* removed),
  /// but 'key' is null-terminated.
  bool removeMember(const char* key, Value* removed);
  /** \brief Remove the named map member.
    
      // Find the file that declares the given fully-qualified symbol name.
  bool FindFileContainingSymbol(const string& symbol_name,
                                FileDescriptorProto* output);
    
    #include <string>
    
      void Generate(io::Printer* printer);
    
    void RepeatedEnumFieldGenerator::WriteHash(io::Printer* printer) {
  printer->Print(
    variables_,
    'hash ^= $name$_.GetHashCode();\n');
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void RepeatedPrimitiveFieldGenerator::GenerateMergingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.Add(other.$name$_);\n');
}
    
    void WriteMessageDocComment(io::Printer* printer, const Descriptor* message);
void WriteFieldDocComment(io::Printer* printer, const FieldDescriptor* field);
void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enum_);
void WriteEnumValueDocComment(io::Printer* printer,
                              const EnumValueDescriptor* value);
void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service);
void WriteMethodDocComment(io::Printer* printer,
                           const MethodDescriptor* method);
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
    // Generates code for a lite extension, which may be within the scope of some
// message or may be at file scope.  This is much simpler than FieldGenerator
// since extensions are just simple identifiers with interesting types.
class ImmutableExtensionLiteGenerator : public ExtensionGenerator {
 public:
  explicit ImmutableExtensionLiteGenerator(const FieldDescriptor* descriptor,
                                           Context* context);
  virtual ~ImmutableExtensionLiteGenerator();
    }
    
        DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory( &sd, sizeof( sd ) );
    sd.BufferCount = 1;
    sd.BufferDesc.Width = width;
    sd.BufferDesc.Height = height;
#ifdef CHECK_NV12
    sd.BufferDesc.Format = DXGI_FORMAT_NV12;
#else
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
#endif
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = NULL; //g_hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    
      double inv_2a = 0.5 / a;
    
    bool cv::cuda::TargetArchs::hasEqualOrLessPtx(int major, int minor)
{
#ifndef HAVE_CUDA
    (void) major;
    (void) minor;
    throw_no_cuda();
    return false;
#else
    return cudaArch.hasEqualOrLessPtx(major, minor);
#endif
}
    
            createInitialSimplex(x, simplex, _step);
        int count = 0;
        double res = innerDownhillSimplex(simplex,_termcrit.epsilon, _termcrit.epsilon,
                                          count, _termcrit.maxCount);
        dprintf(('%d iterations done\n',count));
    
        static void CODEGEN_FUNCPTR Switch_TexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
    {
        TexParameterfv = (PFNTEXPARAMETERFVPROC)IntGetProcAddress('glTexParameterfv');
        TexParameterfv(target, pname, params);
    }
    
    void DebugHUD_InitDefaults( DebugHUD *hud )
{
    hud->show_demo_window = true;
    hud->show_another_window = true;
    hud->rotation_speed = 15.0f;
    
    hud->cubeColor1[0] = 0.4f;
    hud->cubeColor1[1] = 0.4f;
    hud->cubeColor1[2] = 1.0f;
    hud->cubeColor1[3] = 1.0f;
    
    hud->cubeColor2[0] = 1.0f;
    hud->cubeColor2[1] = 0.4f;
    hud->cubeColor2[2] = 0.4f;
    hud->cubeColor2[3] = 1.0f;
    
    hud->clearColor[0] = 0.45f;
    hud->clearColor[1] = 0.55f;
    hud->clearColor[2] = 0.60f;
    hud->clearColor[3] = 1.00f;
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfwGL3_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfwGL3_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfwGL3_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfwGL3_CharCallback(GLFWwindow* window, unsigned int c);

    
    // Return the prologue of the generated mock file.
grpc::string GetMockPrologue(grpc_generator::File *file,
                             const Parameters &params);
    
    
    {  //Package name for the service
  grpc::string package_name;
};
    
    struct FieldBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Field::VT_NAME, name);
  }
  void add_type(flatbuffers::Offset<Type> type) {
    fbb_.AddOffset(Field::VT_TYPE, type);
  }
  void add_id(uint16_t id) {
    fbb_.AddElement<uint16_t>(Field::VT_ID, id, 0);
  }
  void add_offset(uint16_t offset) {
    fbb_.AddElement<uint16_t>(Field::VT_OFFSET, offset, 0);
  }
  void add_default_integer(int64_t default_integer) {
    fbb_.AddElement<int64_t>(Field::VT_DEFAULT_INTEGER, default_integer, 0);
  }
  void add_default_real(double default_real) {
    fbb_.AddElement<double>(Field::VT_DEFAULT_REAL, default_real, 0.0);
  }
  void add_deprecated(bool deprecated) {
    fbb_.AddElement<uint8_t>(Field::VT_DEPRECATED, static_cast<uint8_t>(deprecated), 0);
  }
  void add_required(bool required) {
    fbb_.AddElement<uint8_t>(Field::VT_REQUIRED, static_cast<uint8_t>(required), 0);
  }
  void add_key(bool key) {
    fbb_.AddElement<uint8_t>(Field::VT_KEY, static_cast<uint8_t>(key), 0);
  }
  void add_attributes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<KeyValue>>> attributes) {
    fbb_.AddOffset(Field::VT_ATTRIBUTES, attributes);
  }
  void add_documentation(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> documentation) {
    fbb_.AddOffset(Field::VT_DOCUMENTATION, documentation);
  }
  FieldBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FieldBuilder &operator=(const FieldBuilder &);
  flatbuffers::Offset<Field> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Field>(end);
    fbb_.Required(o, Field::VT_NAME);
    fbb_.Required(o, Field::VT_TYPE);
    return o;
  }
};
    
    MonsterStorage::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel)  , rpcmethod_Store_(MonsterStorage_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Retrieve_(MonsterStorage_method_names[1], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}
  
::grpc::Status MonsterStorage::Stub::Store(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, flatbuffers::grpc::Message<Stat>* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Store_, context, request, response);
}
    
    using namespace std;
    
      server_instance->Shutdown();
    
    inline void IterateValue(ElementaryType type, const uint8_t *val,
                         const TypeTable *type_table, const uint8_t *prev_val,
                         soffset_t vector_index, IterationVisitor *visitor) {
  switch (type) {
    case ET_UTYPE: {
      auto tval = *reinterpret_cast<const uint8_t *>(val);
      visitor->UType(tval, EnumName(tval, type_table));
      break;
    }
    case ET_BOOL: {
      visitor->Bool(*reinterpret_cast<const uint8_t *>(val) != 0);
      break;
    }
    case ET_CHAR: {
      auto tval = *reinterpret_cast<const int8_t *>(val);
      visitor->Char(tval, EnumName(tval, type_table));
      break;
    }
    case ET_UCHAR: {
      auto tval = *reinterpret_cast<const uint8_t *>(val);
      visitor->UChar(tval, EnumName(tval, type_table));
      break;
    }
    case ET_SHORT: {
      auto tval = *reinterpret_cast<const int16_t *>(val);
      visitor->Short(tval, EnumName(tval, type_table));
      break;
    }
    case ET_USHORT: {
      auto tval = *reinterpret_cast<const uint16_t *>(val);
      visitor->UShort(tval, EnumName(tval, type_table));
      break;
    }
    case ET_INT: {
      auto tval = *reinterpret_cast<const int32_t *>(val);
      visitor->Int(tval, EnumName(tval, type_table));
      break;
    }
    case ET_UINT: {
      auto tval = *reinterpret_cast<const uint32_t *>(val);
      visitor->UInt(tval, EnumName(tval, type_table));
      break;
    }
    case ET_LONG: {
      visitor->Long(*reinterpret_cast<const int64_t *>(val));
      break;
    }
    case ET_ULONG: {
      visitor->ULong(*reinterpret_cast<const uint64_t *>(val));
      break;
    }
    case ET_FLOAT: {
      visitor->Float(*reinterpret_cast<const float *>(val));
      break;
    }
    case ET_DOUBLE: {
      visitor->Double(*reinterpret_cast<const double *>(val));
      break;
    }
    case ET_STRING: {
      val += ReadScalar<uoffset_t>(val);
      visitor->String(reinterpret_cast<const String *>(val));
      break;
    }
    case ET_SEQUENCE: {
      switch (type_table->st) {
        case ST_TABLE:
          val += ReadScalar<uoffset_t>(val);
          IterateObject(val, type_table, visitor);
          break;
        case ST_STRUCT: IterateObject(val, type_table, visitor); break;
        case ST_UNION: {
          val += ReadScalar<uoffset_t>(val);
          assert(prev_val);
          auto union_type = *prev_val;  // Always a uint8_t.
          if (vector_index >= 0) {
            auto type_vec = reinterpret_cast<const Vector<uint8_t> *>(prev_val);
            union_type = type_vec->Get(static_cast<uoffset_t>(vector_index));
          }
          auto type_code_idx =
              LookupEnum(union_type, type_table->values, type_table->num_elems);
          if (type_code_idx >= 0 &&
              type_code_idx < static_cast<int32_t>(type_table->num_elems)) {
            auto type_code = type_table->type_codes[type_code_idx];
            switch (type_code.base_type) {
              case ET_SEQUENCE: {
                auto ref = type_table->type_refs[type_code.sequence_ref]();
                IterateObject(val, ref, visitor);
                break;
              }
              case ET_STRING:
                visitor->String(reinterpret_cast<const String *>(val));
                break;
              default: visitor->Unknown(val);
            }
          } else {
            visitor->Unknown(val);
          }
          break;
        }
        case ST_ENUM: assert(false); break;
      }
      break;
    }
    default: {
      visitor->Unknown(val);
      break;
    }
  }
}
    
    // Get a field, if you know it's a vector.
template<typename T>
Vector<T> *GetFieldV(const Table &table, const reflection::Field &field) {
  assert(field.type()->base_type() == reflection::Vector &&
         sizeof(T) == GetTypeSize(field.type()->element()));
  return table.GetPointer<Vector<T> *>(field.offset());
}
    
    int FuzzerDriver(int *argc, char ***argv, UserCallback Callback);
    
      bool ContainsWord(const Word &W) const {
    return std::any_of(begin(), end(), [&](const DictionaryEntry &DE) {
      return DE.GetW() == W;
    });
  }
  const DictionaryEntry *begin() const { return &DE[0]; }
  const DictionaryEntry *end() const { return begin() + Size; }
  DictionaryEntry & operator[] (size_t Idx) {
    assert(Idx < Size);
    return DE[Idx];
  }
  void push_back(DictionaryEntry DE) {
    if (Size < kMaxDictSize)
      this->DE[Size++] = DE;
  }
  void clear() { Size = 0; }
  bool empty() const { return Size == 0; }
  size_t size() const { return Size; }
    
    static int RunInMultipleProcesses(const std::vector<std::string> &Args,
                                  unsigned NumWorkers, unsigned NumJobs) {
  std::atomic<unsigned> Counter(0);
  std::atomic<bool> HasErrors(false);
  std::string Cmd = CloneArgsWithoutX(Args, 'jobs', 'workers');
  std::vector<std::thread> V;
  std::thread Pulse(PulseThread);
  Pulse.detach();
  for (unsigned i = 0; i < NumWorkers; i++)
    V.push_back(std::thread(WorkerThread, Cmd, &Counter, NumJobs, &HasErrors));
  for (auto &T : V)
    T.join();
  return HasErrors ? 1 : 0;
}
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
    
    struct FuzzingOptions {
  int Verbosity = 1;
  size_t MaxLen = 0;
  int UnitTimeoutSec = 300;
  int TimeoutExitCode = 77;
  int ErrorExitCode = 77;
  int MaxTotalTimeSec = 0;
  int RssLimitMb = 0;
  bool DoCrossOver = true;
  int MutateDepth = 5;
  bool UseCounters = false;
  bool UseIndirCalls = true;
  bool UseMemcmp = true;
  bool UseMemmem = true;
  bool UseCmp = false;
  bool UseValueProfile = false;
  bool Shrink = false;
  int ReloadIntervalSec = 1;
  bool ShuffleAtStartUp = true;
  bool PreferSmall = true;
  size_t MaxNumberOfRuns = -1L;
  int ReportSlowUnits = 10;
  bool OnlyASCII = false;
  std::string OutputCorpus;
  std::string ArtifactPrefix = './';
  std::string ExactArtifactPath;
  std::string ExitOnSrcPos;
  std::string ExitOnItem;
  bool SaveArtifacts = true;
  bool PrintNEW = true; // Print a status line when new units are found;
  bool OutputCSV = false;
  bool PrintNewCovPcs = false;
  bool PrintFinalStats = false;
  bool PrintCorpusStats = false;
  bool PrintCoverage = false;
  bool DumpCoverage = false;
  bool DetectLeaks = true;
  int  TraceMalloc = 0;
  bool HandleAbrt = false;
  bool HandleBus = false;
  bool HandleFpe = false;
  bool HandleIll = false;
  bool HandleInt = false;
  bool HandleSegv = false;
  bool HandleTerm = false;
};
    
    #ifndef LLVM_FUZZER_TRACE_PC
#define LLVM_FUZZER_TRACE_PC