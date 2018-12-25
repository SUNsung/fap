public:
  /// Form storage for the given generic signature and its replacement
  /// types and conformances.
  static Storage *get(GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
    
      DCache.CBs.valueRetainCB(Value, nullptr);
  DCache.Entries[CKey] = Value;
    
    void CacheImpl::destroy() {
  cache_destroy(static_cast<cache_t*>(Impl));
}

    
        if (node->Left) {
      IndentScope ms(this, (childKind == ChildKind::Left ||
                            childKind == ChildKind::Root) ? '  ' : '| ');
      print(node->Left, ChildKind::Left);
    }
    
          case PartOfSpeech::Verb:
      case PartOfSpeech::Gerund:
        // Don't prune redundant type information from the base name if
        // there is a corresponding property (either singular or plural).
        if (role == NameRole::BaseName &&
            textMatchesPropertyName(
              name.substr(nameWordRevIter.base().getPosition()),
              allPropertyNames))
          return name;
    
    /// The list of known CF types.  We use 'constexpr' to verify that this is
/// emitted as a constant.  Note that this is expected to be sorted in
/// quasi-lexicographic order.
static constexpr const llvm::StringLiteral KnownCFTypes[] = {
#define CF_TYPE(NAME) #NAME,
#define NON_CF_TYPE(NAME)
#include 'SortedCFDatabase.def'
};
const size_t NumKnownCFTypes = sizeof(KnownCFTypes) / sizeof(*KnownCFTypes);
    
      static CFPointeeInfo forRecord(bool isConst, const clang::RecordDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = isConst;
    info.Decl = decl;
    return info;
  }
    
      public:
    ClangDiagRenderer(const clang::LangOptions &langOpts,
                      clang::DiagnosticOptions *diagOpts,
                      decltype(callback) fn)
       : DiagnosticNoteRenderer(langOpts, diagOpts),
         callback(fn) {}
    
    char Mangle::getStandardTypeSubst(StringRef TypeName) {
#define STANDARD_TYPE(KIND, MANGLING, TYPENAME)      \
  if (TypeName == #TYPENAME) {                       \
    return #MANGLING[0];                             \
  }
    }
    
      virtual void Call(const std::string& method,
                    const base::ListValue& arguments,
                    content::RenderFrameHost* rvh = nullptr);
  virtual void CallSync(const std::string& method,
                        const base::ListValue& arguments,
                        base::ListValue* result);
    
    
    {  RenderThread::Get()->Send(new ShellViewHostMsg_Allocate_Object(
      routing_id,
      object_id,
      type,
      *static_cast<base::DictionaryValue*>(value_option.get())));
  return v8::Undefined(isolate);
}
    
    v8::Handle<v8::Value> AllocateId(int routing_id);
    
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
    
    
    {  DISALLOW_COPY_AND_ASSIGN(MenuDelegate);
};
    
    void Menu::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (!GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    return ;
  } else {
    std::vector<MenuItem*>::iterator menu_item_iterator = menu_items.begin();
    std::vector<MenuItem*>::iterator menu_item_end = menu_items.end();
    while (menu_item_iterator != menu_item_end){
      MenuItem *menu_item = *menu_item_iterator;
      if (menu_item!=NULL && GTK_IS_MENU_ITEM(menu_item->menu_item_)){
        menu_item->UpdateKeys(gtk_accel_group);
      }
      ++menu_item_iterator;
    }
  }
}
    
    aura::Window* Menu::GetActiveNativeView(content::RenderFrameHost* rfh) {
  content::WebContents* web_contents =
    content::WebContents::FromRenderFrameHost(rfh);
  if (!web_contents) {
    LOG(ERROR) << 'Menu: couldn't find WebContents';
    return NULL;
  }
  return web_contents->GetFullscreenRenderWidgetHostView()
             ? web_contents->GetFullscreenRenderWidgetHostView()
                   ->GetNativeView()
             : web_contents->GetNativeView();
}
    
    MenuItem::MenuItem(int id,
                   const base::WeakPtr<ObjectManager>& object_manager,
                   const base::DictionaryValue& option,
                   const std::string& extension_id)
  : Base(id, object_manager, option, extension_id) {
  Create(option);
}
    
      private:
    bool WriteText(ClipboardData& data) {
      DCHECK(data.type == TYPE_TEXT);
      scw_->WriteText(base::UTF8ToUTF16(*(data.data)));
      return true;
    }
    
    
    {
} // namespace extensions

    
          gfx::Rect rect = gfx_display.bounds();
      DisplayGeometry& bounds = displayResult->bounds;
      bounds.x = rect.x();
      bounds.y = rect.y();
      bounds.width = rect.width();
      bounds.height = rect.height();
    
    extern 'C' {
  PyMODINIT_FUNC INITFUNC() {
#if PY_MAJOR_VERSION >= 3
    PyObject *module = PyModule_Create(&_module);
#else
    PyObject *module = Py_InitModule3(
        const_cast<char*>(kModuleName),
        NULL,
        const_cast<char*>(kModuleDocstring));
#endif
    if (module == NULL) {
      return INITFUNC_ERRORVAL;
    }
    }
    }
    
    EnumGenerator::~EnumGenerator() {
}
    
      // write children: Messages
  if (file_->message_type_count() > 0) {
    printer->Print('#region Messages\n');
    for (int i = 0; i < file_->message_type_count(); i++) {
      MessageGenerator messageGenerator(file_->message_type(i), this->options());
      messageGenerator.Generate(printer);
    }
    printer->Print('#endregion\n');
    printer->Print('\n');
  }
    
    // ===================================================================
    
    void ImmutableMapFieldGenerator::
GenerateBuildingCode(io::Printer* printer) const {
  printer->Print(
      variables_,
      'result.$name$_ = internalGet$capitalized_name$();\n'
      'result.$name$_.makeImmutable();\n');
}
    
      desired_output_for_decode = 'ABCD__EfghI_j';
  expected = string('\x64\x80\xC5\xA1\x0', 5);
  result = TextFormatDecodeData::DecodeDataForString(input_for_decode,
                                                     desired_output_for_decode);
  EXPECT_EQ(expected, result);
    
      CodeGeneratorRequest request;
  if (!request.ParseFromFileDescriptor(STDIN_FILENO)) {
    std::cerr << argv[0] << ': protoc sent unparseable request to plugin.'
              << std::endl;
    return 1;
  }
    
    #define TEGRA_ADDWEIGHTED(src1, sz1, src2, sz2, dst, sz, w, h, scales) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::addWeighted(CAROTENE_NS::Size2D(w, h), \
                             src1, sz1, \
                             src2, sz2, \
                             dst, sz, \
                             ((double *)scales)[0], ((double *)scales)[1], ((double *)scales)[2]), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
    void extract2(const Size2D &size,
              const u8 * srcBase, ptrdiff_t srcStride,
              u8 * dstBase, ptrdiff_t dstStride,
              u32 coi)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
    #define  FARG_LINE(type, n) , const type * src##n##Base, ptrdiff_t src##n##Stride
    
    namespace CAROTENE_NS { namespace internal {
    }
    }
    
             int32x4_t vline1_s32 = vcvtq_s32_f32(vline1_f32);
         int32x4_t vline2_s32 = vcvtq_s32_f32(vline2_f32);
         int16x4_t vline1_s16 = vqmovn_s32(vline1_s32);
         int16x4_t vline2_s16 = vqmovn_s32(vline2_s32);
    
                for (; i <= lim; i+= 8)
            {
                internal::prefetch(src + i);
                uint16x8_t vln = vld1q_u16(src + i);
                uint16x8_t vnz = vminq_u16(vln, vc1);
                vs = vaddq_u16(vs, vnz);
            }
    
    
    {    minLocCount >>= 1;
    maxLocCount >>= 1;
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)minVal;
    (void)minLocPtr;
    (void)minLocCount;
    (void)minLocCapacity;
    (void)maxVal;
    (void)maxLocPtr;
    (void)maxLocCount;
    (void)maxLocCapacity;
#endif
}
    
    template <typename T>
void flip3(const Size2D & size,
           const void * srcBase, ptrdiff_t srcStride,
           void * dstBase, ptrdiff_t dstStride,
           FLIP_MODE flipMode)
{
    using namespace internal;
    }
    
    SHOULD_NOT_DO_GRADIENT(EnforceFinite);
    
    ```
    
    
    {} // namespace caffe2
    
    **Result**
    
    namespace grpc {
    }
    
    void CensusClientCallData::OnDoneRecvMessageCb(void* user_data,
                                               grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  CensusChannelData* channeld =
      reinterpret_cast<CensusChannelData*>(elem->channel_data);
  GPR_ASSERT(calld != nullptr);
  GPR_ASSERT(channeld != nullptr);
  // Stream messages are no longer valid after receiving trailing metadata.
  if ((*calld->recv_message_) != nullptr) {
    calld->recv_message_count_++;
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_message_, GRPC_ERROR_REF(error));
}
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CLIENT_FILTER_H */

    
    MeasureInt64 RpcClientReceivedMessagesPerRpc() {
  static const auto measure =
      MeasureInt64::Register(kRpcClientReceivedMessagesPerRpcMeasureName,
                             'Number of messages received per RPC', kCount);
  return measure;
}
    
    constexpr size_t TraceContextEncoding::kGrpcTraceContextSize;
constexpr size_t TraceContextEncoding::kEncodeDecodeFailure;
constexpr size_t TraceContextEncoding::kVersionIdSize;
constexpr size_t TraceContextEncoding::kFieldIdSize;
constexpr size_t TraceContextEncoding::kVersionIdOffset;
constexpr size_t TraceContextEncoding::kVersionId;
    
    #include <grpcpp/grpcpp.h>
#include 'src/proto/grpc/reflection/v1alpha/reflection.grpc.pb.h'
    
    class DynamicThreadPool final : public ThreadPoolInterface {
 public:
  explicit DynamicThreadPool(int reserve_threads);
  ~DynamicThreadPool();
    }
    
    #endif  // GPR_LINUX
