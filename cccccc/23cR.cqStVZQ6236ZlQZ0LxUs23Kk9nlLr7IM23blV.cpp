
        
        #ifndef NDEBUG
/// Verify that the types of fields are valid within a given generic signature.
static void verifyFields(CanGenericSignature Sig, ArrayRef<SILField> Fields) {
  for (auto &field : Fields) {
    auto ty = field.getLoweredType();
    // Layouts should never refer to archetypes, since they represent an
    // abstract generic type layout.
    assert(!ty->hasArchetype()
           && 'SILLayout field cannot have an archetype type');
    assert(!ty->hasTypeVariable()
           && 'SILLayout cannot contain constraint system type variables');
    if (!ty->hasTypeParameter())
      continue;
    field.getLoweredType().findIf([Sig](Type t) -> bool {
      if (auto gpt = t->getAs<GenericTypeParamType>()) {
        // Check that the generic param exists in the generic signature.
        assert(Sig && 'generic param in nongeneric layout?');
        assert(std::find(Sig.getGenericParams().begin(),
                         Sig.getGenericParams().end(),
                         gpt->getCanonicalType()) != Sig.getGenericParams().end()
               && 'generic param not declared in generic signature?!');
      }
      return false;
    });
  }
}
#endif
    
    #include 'swift/ASTSectionImporter/ASTSectionImporter.h'
#include 'swift/Basic/Dwarf.h'
#include 'swift/Serialization/SerializedModuleLoader.h'
#include 'swift/Serialization/Validation.h'
#include 'llvm/Support/Debug.h'
#include 'llvm/Support/raw_ostream.h'
    
      if (!wasInline) delete[] oldBegin;
    
      // Set the '_endian' platform condition.
  switch (Target.getArch()) {
  case llvm::Triple::ArchType::arm:
  case llvm::Triple::ArchType::thumb:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::aarch64:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::ppc64:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'big');
    break;
  case llvm::Triple::ArchType::ppc64le:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::x86:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::x86_64:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'little');
    break;
  case llvm::Triple::ArchType::systemz:
    addPlatformConditionValue(PlatformConditionKind::Endianness, 'big');
    break;
  default:
    llvm_unreachable('undefined architecture endianness');
  }
    
      /// Local function that lowercases all of the base names and
  /// argument names before returning.
  auto lowercaseAcronymsForReturn = [&] {
    StringRef newBaseName = toLowercaseInitialisms(baseName, scratch);
    if (baseName.data() != newBaseName.data()) {
      baseName = newBaseName;
      anyChanges = true;
    }
    }
    
    
    {      ExecutingTasks.push(PidTaskPair(Pid, std::move(T)));
    }
    
    swift::UUID::UUID(FromTime_t) {
#if defined(_WIN32)
  ::UUID uuid;
  ::CoCreateGuid(&uuid);
    }
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    namespace remote {
    }
    
    
    {} // namespace nwapi

    
    void Menu::Append(MenuItem* menu_item) {
  menu_items.push_back(menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_append(GTK_MENU_SHELL(menu_), menu_item->menu_item_);
}
    
    namespace extensions {
    }
    
    // Version constant.
// This is either 0 for python, 1 for CPP V1, 2 for CPP V2.
//
// 0 is default and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=python
//
// 1 is set with -DPYTHON_PROTO2_CPP_IMPL_V1 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=1
//
// 2 is set with -DPYTHON_PROTO2_CPP_IMPL_V2 and is equivalent to
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION=cpp
// and
//   PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION_VERSION=2
#ifdef PYTHON_PROTO2_CPP_IMPL_V1
#error 'PYTHON_PROTO2_CPP_IMPL_V1 is no longer supported.'
#else
#ifdef PYTHON_PROTO2_CPP_IMPL_V2
static int kImplVersion = 2;
#else
#ifdef PYTHON_PROTO2_PYTHON_IMPL
static int kImplVersion = 0;
#else
    
    static const Message* GetCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
static Message* MutableCProtoInsidePyProtoStub(PyObject* msg) {
  return NULL;
}
    
    void upb_arena_init(upb_arena *a);
void upb_arena_init2(upb_arena *a, void *mem, size_t n, upb_alloc *alloc);
void upb_arena_uninit(upb_arena *a);
bool upb_arena_addcleanup(upb_arena *a, upb_cleanup_func *func, void *ud);
size_t upb_arena_bytesallocated(const upb_arena *a);
void upb_arena_setnextblocksize(upb_arena *a, size_t size);
void upb_arena_setmaxblocksize(upb_arena *a, size_t size);
UPB_INLINE upb_alloc *upb_arena_alloc(upb_arena *a) { return (upb_alloc*)a; }
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, const Options& options)
    : RepeatedFieldGenerator(descriptor, options) {
  SetEnumVariables(descriptor, &variables_);
  variables_['array_storage_type'] = 'GPBEnumArray';
}
    
      inline int offset(const vector<int>& indices) const {
    CHECK_LE(indices.size(), num_axes());
    int offset = 0;
    for (int i = 0; i < num_axes(); ++i) {
      offset *= shape(i);
      if (indices.size() > i) {
        CHECK_GE(indices[i], 0);
        CHECK_LT(indices[i], shape(i));
        offset += indices[i];
      }
    }
    return offset;
  }
  /**
   * @brief Copy from a source Blob.
   *
   * @param source the Blob to copy from
   * @param copy_diff if false, copy the data; if true, copy the diff
   * @param reshape if false, require this Blob to be pre-shaped to the shape
   *        of other (and die otherwise); if true, Reshape this Blob to other's
   *        shape if necessary
   */
  void CopyFrom(const Blob<Dtype>& source, bool copy_diff = false,
      bool reshape = false);
    
      bool is_started() const;
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/im2col.hpp'
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_2 @f$
   *   -# ...
   *   - K @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_K @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      the concatenated output @f$
   *        y = [\begin{array}{cccc} x_1 & x_2 & ... & x_K \end{array}]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    #if GTEST_HAS_STD_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::std::wstring& wstr);
#endif  // GTEST_HAS_STD_WSTRING
    
    template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6,
    typename Generator7, typename Generator8>
internal::CartesianProductHolder8<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6, Generator7, Generator8> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6,
        const Generator7& g7, const Generator8& g8) {
  return internal::CartesianProductHolder8<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6, Generator7, Generator8>(
      g1, g2, g3, g4, g5, g6, g7, g8);
}
    
    // Helper function for printing a tuple.  T must be instantiated with
// a tuple type.
template <typename T>
void PrintTupleTo(const T& t, ::std::ostream* os) {
  *os << '(';
  TuplePrefixPrinter< ::std::tr1::tuple_size<T>::value>::
      PrintPrefixTo(t, os);
  *os << ')';
}
    
    // 5-ary predicate assertion macros.
#define EXPECT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)
    
      // Smart pointer members.
  void reset(T* ptr = NULL) {
    depart();
    capture(ptr);
  }
  T* get() const { return value_; }
  T* operator->() const { return value_; }
  T& operator*() const { return *value_; }
    
        for (int i = 2; i <= max; i++) {
      if (!is_prime_[i]) continue;
    }
    
    // Tests the c'tor that accepts a C string.
TEST(MyString, ConstructorFromCString) {
  const MyString s(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
  EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
            s.Length());
}
    
    const std::string LoggerConfigParserPlugin::kLoggerKey{'logger'};
    
    #ifdef WIN32
  DWORD code = 0;
  DWORD ret = 0;
    
    TEST_F(TablesTests, test_constraint_matching) {
  struct ConstraintList cl;
  // An empty constraint list has expectations.
  EXPECT_FALSE(cl.exists());
  EXPECT_FALSE(cl.exists(GREATER_THAN));
  EXPECT_TRUE(cl.notExistsOrMatches('some'));
    }
    
        // Create a basic path trigger, this is a file path.
    real_test_path = kTestWorkingDirectory + 'inotify-trigger' +
                     std::to_string(rand() % 10000 + 10000);
    // Create a similar directory for embedded paths and directories.
    real_test_dir = kTestWorkingDirectory + 'inotify-triggers' +
                    std::to_string(rand() % 10000 + 10000);
    
      // Custom methods do not make sense, but for testing it exists.
  int getTestValue() {
    return smallest_ever_;
  }
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    
    {    if (g_pBlendState) { g_pBlendState->Release(); g_pBlendState = NULL; }
    if (g_pDepthStencilState) { g_pDepthStencilState->Release(); g_pDepthStencilState = NULL; }
    if (g_pRasterizerState) { g_pRasterizerState->Release(); g_pRasterizerState = NULL; }
    if (g_pPixelShader) { g_pPixelShader->Release(); g_pPixelShader = NULL; }
    if (g_pPixelShaderBlob) { g_pPixelShaderBlob->Release(); g_pPixelShaderBlob = NULL; }
    if (g_pVertexConstantBuffer) { g_pVertexConstantBuffer->Release(); g_pVertexConstantBuffer = NULL; }
    if (g_pInputLayout) { g_pInputLayout->Release(); g_pInputLayout = NULL; }
    if (g_pVertexShader) { g_pVertexShader->Release(); g_pVertexShader = NULL; }
    if (g_pVertexShaderBlob) { g_pVertexShaderBlob->Release(); g_pVertexShaderBlob = NULL; }
}
    
            D3D12_TEXTURE_COPY_LOCATION dstLocation = {};
        dstLocation.pResource = pTexture;
        dstLocation.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
        dstLocation.SubresourceIndex = 0;
    
    BENCHMARK_RELATIVE(format_long_string_safe, iters) {
  BenchmarkSuspender suspender;
  auto const& longString = getLongString();
  while (iters--) {
    fbstring out;
    suspender.dismissing([&] { format(&out, '{}', longString); });
  }
}
    
    int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  folly::runBenchmarks();
  return 0;
}

    
    /**
 * If cond is not true, raise an exception of type E.  E must have a ctor that
 * works with const char* (a description of the failure).
 */
#define CHECK_THROW(cond, E)           \
  do {                                 \
    if (!(cond)) {                     \
      throw E('Check failed: ' #cond); \
    }                                  \
  } while (0)
    
    
    {} // namespace folly

    
    namespace folly {
    }
    
    #include <type_traits>
    
    /// Returns the best real CacheLocality information available
static CacheLocality getSystemLocalityInfo() {
  if (kIsLinux) {
    try {
      return CacheLocality::readFromSysfs();
    } catch (...) {
      // keep trying
    }
  }
    }