
        
        IPC_SYNC_MESSAGE_ROUTED4_1(ShellViewHostMsg_Call_Object_Method_Sync,
                           int /* object id */,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    // Get string from resource_id.
base::StringPiece GetStringResource(int resource_id);
    
      // Map point from document to screen.
  gfx::Point screen_point(x, y);
    
      std::string icon;
  if (option.GetString('icon', &icon) && !icon.empty())
    SetIcon(icon);
    
    ExtensionFunction::ResponseAction
NwAppQuitFunction::Run() {
  ExtensionService* service =
    ExtensionSystem::Get(browser_context())->extension_service();
  base::MessageLoop::current()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&ExtensionService::TerminateExtension,
                   service->AsWeakPtr(),
                   extension_id()));
  return RespondNow(NoArguments());
}
    
    bool NwClipboardSetListSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  std::unique_ptr<SetListSync::Params> params(SetListSync::Params::Create(*args_));
  EXTENSION_FUNCTION_VALIDATE(params.get());
  std::unique_ptr<ClipboardWriter> writer(new ClipboardWriter());
    }
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    const Message* GetCProtoInsidePyProto(PyObject* msg) {
  return GetCProtoInsidePyProtoPtr(msg);
}
Message* MutableCProtoInsidePyProto(PyObject* msg) {
  return MutableCProtoInsidePyProtoPtr(msg);
}
    
    
    {
    {
    {}  // namespace internal
}  // namespace protobuf
}  // namespace google

    
    void FindAnnotationsOnPath(
    const GeneratedCodeInfo& info, const string& source_file,
    const std::vector<int>& path,
    std::vector<const GeneratedCodeInfo::Annotation*>* annotations) {
  for (int i = 0; i < info.annotation_size(); ++i) {
    const GeneratedCodeInfo::Annotation* annotation = &info.annotation(i);
    if (annotation->source_file() != source_file ||
        annotation->path_size() != path.size()) {
      continue;
    }
    int node = 0;
    for (; node < path.size(); ++node) {
      if (annotation->path(node) != path[node]) {
        break;
      }
    }
    if (node == path.size()) {
      annotations->push_back(annotation);
    }
  }
}
    
    TEST(MovableMessageTest, SelfMoveAssignment) {
  // The `self` reference is necessary to defeat -Wself-move.
  protobuf_unittest::TestAllTypes message, &self = message;
  TestUtil::SetAllFields(&message);
  message = std::move(self);
  TestUtil::ExpectAllFieldsSet(message);
}
    
    void WritePropertyDocComment(io::Printer* printer, const FieldDescriptor* field) {
    WriteDocCommentBody(printer, field);
}
    
    EnumGenerator::EnumGenerator(const EnumDescriptor* descriptor, const Options* options) :
    SourceGeneratorBase(descriptor->file(), options),
    descriptor_(descriptor) {
}
    
    
#include <google/protobuf/compiler/csharp/csharp_enum.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_message.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
#include <google/protobuf/compiler/csharp/csharp_reflection_class.h>
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    namespace protobuf {
namespace compiler {
namespace objectivec {
    }
    }
    }
    
    // Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductSSE(const double* u, const double* v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductSSE(const int8_t* u, const int8_t* v, int n);
    
      // Identify inline partitions from cp_seeds_, and re-label them.
  void IdentifyInlineParts();
    
    void PageIterator::ParagraphInfo(tesseract::ParagraphJustification *just,
                                 bool *is_list_item,
                                 bool *is_crown,
                                 int *first_line_indent) const {
  *just = tesseract::JUSTIFICATION_UNKNOWN;
  if (!it_->row() || !it_->row()->row || !it_->row()->row->para() ||
      !it_->row()->row->para()->model)
    return;
    }
    
    #include 'tesseractclass.h'
#ifdef _OPENMP
#include <omp.h>
#endif  // _OPENMP
    
    namespace tesseract {
  class Tesseract;
}
    
    
    {}
    
    
    {
    {}}
    
    void Assembler::extsw(const Reg64& ra, const Reg64& rs, bool rc) {
  EmitXForm(31, rn(rs), rn(ra), rn(0), 986, rc);
}
    
    Object APCCollection::createObject() const {
  if (m_arrayHandle->isTypedValue()) {
    Variant local(m_arrayHandle->toLocal());
    assertx(local.isArray());
    return Object::attach(
      collections::alloc(m_colType, local.getArrayData())
    );
  }
    }
    
    #include 'hphp/runtime/base/type-string.h'
    
    
    {  return invokeFuncFew(
    ctx.func,
    thisOrCls,
    ctx.invName,
    argc,
    argv,
    ctx.dynamic
  );
}
    
    
    {  ret = copy(oldname, newname);
  if (ret != 0) {
    return -1;
  }
  unlink(oldname);
  return 0;
}
    
    
    {
    {///////////////////////////////////////////////////////////////////////////////
}
}
    
    void ActionEase::update(float time)
{
    _inner->update(time);
}
    
    
    {    a->autorelease();
    return a;
}
    
    JumpTo* JumpTo::create(float duration, const Vec2& position, float height, int jumps)
{
    JumpTo *jumpTo = new (std::nothrow) JumpTo();
    if (jumpTo && jumpTo->initWithDuration(duration, position, height, jumps))
    {
        jumpTo->autorelease();
        return jumpTo;
    }
    
    delete jumpTo;
    return nullptr;
}
    
    
    {    // issue #635
    _currentTarget = nullptr;
}
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
            // Create the input layout
        D3D10_INPUT_ELEMENT_DESC local_layout[] = 
        {
            { 'POSITION', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->pos), D3D10_INPUT_PER_VERTEX_DATA, 0 },
            { 'TEXCOORD', 0, DXGI_FORMAT_R32G32_FLOAT,   0, (size_t)(&((ImDrawVert*)0)->uv),  D3D10_INPUT_PER_VERTEX_DATA, 0 },
            { 'COLOR',    0, DXGI_FORMAT_R8G8B8A8_UNORM, 0, (size_t)(&((ImDrawVert*)0)->col), D3D10_INPUT_PER_VERTEX_DATA, 0 },
        };
        if (g_pd3dDevice->CreateInputLayout(local_layout, 3, g_pVertexShaderBlob->GetBufferPointer(), g_pVertexShaderBlob->GetBufferSize(), &g_pInputLayout) != S_OK)
            return false;
    
        // Bind shader and vertex buffers
    unsigned int stride = sizeof(ImDrawVert);
    unsigned int offset = 0;
    ctx->IASetInputLayout(g_pInputLayout);
    ctx->IASetVertexBuffers(0, 1, &g_pVB, &stride, &offset);
    ctx->IASetIndexBuffer(g_pIB, sizeof(ImDrawIdx) == 2 ? DXGI_FORMAT_R16_UINT : DXGI_FORMAT_R32_UINT, 0);
    ctx->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ctx->VSSetShader(g_pVertexShader, NULL, 0);
    ctx->VSSetConstantBuffers(0, 1, &g_pVertexConstantBuffer);
    ctx->PSSetShader(g_pPixelShader, NULL, 0);
    ctx->PSSetSamplers(0, 1, &g_pFontSampler);
    
    static bool ImGui_ImplDX9_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height, bytes_per_pixel;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height, &bytes_per_pixel);
    }
    
      ~CacheBench() {}
    
      enum class WriteStallCause {
    kNone,
    kMemtableLimit,
    kL0FileCountLimit,
    kPendingCompactionBytes,
  };
  static std::pair<WriteStallCondition, WriteStallCause>
  GetWriteStallConditionAndCause(int num_unflushed_memtables, int num_l0_files,
                                 uint64_t num_compaction_needed_bytes,
                                 const MutableCFOptions& mutable_cf_options);
    
      // Use the returned alignment value to allocate
  // aligned buffer for Direct I/O
  virtual size_t GetRequiredBufferAlignment() const override { 
    return file_->GetRequiredBufferAlignment(); 
  }
    
    // open a file for sequential reading
Status HdfsEnv::NewSequentialFile(const std::string& fname,
                                  unique_ptr<SequentialFile>* result,
                                  const EnvOptions& options) {
  result->reset();
  HdfsReadableFile* f = new HdfsReadableFile(fileSys_, fname);
  if (f == nullptr || !f->isValid()) {
    delete f;
    *result = nullptr;
    return IOError(fname, errno);
  }
  result->reset(dynamic_cast<SequentialFile*>(f));
  return Status::OK();
}
    
        static BOOST_FORCEINLINE bool compare_exchange_strong(
        storage_type volatile& storage, storage_type& expected, storage_type desired, memory_order success_order, memory_order failure_order) BOOST_NOEXCEPT
    {
        storage_type previous = expected, old_val;
    }
    
    #include <boost/atomic/detail/config.hpp>
    
    #include 'gtest/gtest.h'
    
    /**
 * @class SocketCanClientRaw
 * @brief The class which defines a ESD CAN client which inherites CanClient.
 */
class SocketCanClientRaw : public CanClient {
 public:
  /**
   * @brief Initialize the ESD CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  bool Init(const CANCardParameter &parameter) override;
    }
    
    #include 'modules/common/log.h'
#include 'modules/common/macro.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/can_comm/message_manager.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
    TEST(MessageManagerTest, GetMutableProtocolDataById) {
  uint8_t mock_data = 1;
  MockMessageManager manager;
  manager.Parse(MockProtocolData::ID, &mock_data, 8);
  manager.ResetSendMessages();
  EXPECT_TRUE(manager.GetMutableProtocolDataById(MockProtocolData::ID) !=
              nullptr);
    }