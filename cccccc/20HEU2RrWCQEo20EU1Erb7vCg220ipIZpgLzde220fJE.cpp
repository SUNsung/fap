
        
          /// True if the ConstructorDecl requires an ObjC method descriptor.
  bool requiresObjCMethodDescriptor(ConstructorDecl *constructor);
    
    /// A utility for finding dead-end blocks.
///
/// Dead-end blocks are blocks from which there is no path to the function exit
/// (either return or throw). These are blocks which end with an unreachable
/// instruction and blocks from which all paths end in 'unreachable' blocks.
/// This utility is needed to determine if the a value definition can have a
/// lack of users ignored along a specific path.
class DeadEndBlocks {
  llvm::SetVector<const SILBasicBlock *> ReachableBlocks;
  const SILFunction *F;
  bool isComputed = false;
    }
    
    class StdlibGroupsIndexRecordingConsumer : public IndexDataConsumer {
  llvm::StringMap<std::unique_ptr<SymbolTracker>> TrackerByGroup;
  // Keep a USR map to uniquely identify Decls.
  // FIXME: if we just passed the original Decl * through we could use that,
  // which would also let us avoid producing the USR/Name/etc. for decls unless
  // we actually need it (once per Decl instead of once per occurrence).
  std::vector<IndexSymbol> symbolStack;
    }
    
    
    {  static bool classof(const MarkupASTNode *N) {
    return N->getKind() == ASTNodeKind::Code;
  }
};
    
    SILDebugScope::SILDebugScope(SILLocation Loc, SILFunction *SILFn,
                             const SILDebugScope *ParentScope ,
                             const SILDebugScope *InlinedCallSite)
    : Loc(Loc), InlinedCallSite(InlinedCallSite) {
  if (ParentScope)
    Parent = ParentScope;
  else {
    assert(SILFn && 'no parent provided');
    Parent = SILFn;
  }
}
    
    #include 'swift/Syntax/Rewriter.h'
    
    
    {} // end namespace swift
    
    class EditorDiagConsumer : public swift::DiagnosticConsumer {
  typedef std::vector<DiagnosticEntryInfo> DiagnosticsTy;
  /// Maps from a BufferID to the diagnostics that were emitted inside that
  /// buffer.
  llvm::DenseMap<unsigned, DiagnosticsTy> BufferDiagnostics;
    }
    
    
    {    return 1; // success
}
    
    //---- Don't define obsolete functions names. Consider enabling from time to time or when updating to reduce likelihood of using already obsolete function/names
//#define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    
    #include <stdint.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include 'imgui.h'
#include 'imgui_impl_a5.h'
    
        // Setup ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui_ImplDX11_Init(hwnd, g_pd3dDevice, g_pd3dDeviceContext);
    //io.NavFlags |= ImGuiNavFlags_EnableKeyboard;  // Enable Keyboard Controls
    
    int32 ImGui_Marmalade_CharCallback(void* SystemData, void* userData)
{
    ImGuiIO& io = ImGui::GetIO();
    s3eKeyboardCharEvent* e = (s3eKeyboardCharEvent*)SystemData;
    if ((e->m_Char > 0 && e->m_Char < 0x10000))
        io.AddInputCharacter((unsigned short)e->m_Char);
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
        const GLchar* fragment_shader =
        '#version 150\n'
        'uniform sampler2D Texture;\n'
        'in vec2 Frag_UV;\n'
        'in vec4 Frag_Color;\n'
        'out vec4 Out_Color;\n'
        'void main()\n'
        '{\n'
        '	Out_Color = Frag_Color * texture( Texture, Frag_UV.st);\n'
        '}\n';
    
    // Return the services for generated source file.
grpc::string GetSourceServices(grpc_generator::File *file,
                               const Parameters &params);
    
      void SayManyHellos(const std::string &name, int num_greetings,
                     std::function<void(const std::string &)> callback) {
    flatbuffers::grpc::MessageBuilder mb;
    auto name_offset = mb.CreateString(name);
    auto request_offset =
        CreateManyHellosRequest(mb, name_offset, num_greetings);
    mb.Finish(request_offset);
    auto request_msg = mb.ReleaseMessage<ManyHellosRequest>();
    }
    
    struct EnumBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Enum::VT_NAME, name);
  }
  void add_values(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<EnumVal>>> values) {
    fbb_.AddOffset(Enum::VT_VALUES, values);
  }
  void add_is_union(bool is_union) {
    fbb_.AddElement<uint8_t>(Enum::VT_IS_UNION, static_cast<uint8_t>(is_union), 0);
  }
  void add_underlying_type(flatbuffers::Offset<Type> underlying_type) {
    fbb_.AddOffset(Enum::VT_UNDERLYING_TYPE, underlying_type);
  }
  void add_attributes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<KeyValue>>> attributes) {
    fbb_.AddOffset(Enum::VT_ATTRIBUTES, attributes);
  }
  void add_documentation(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> documentation) {
    fbb_.AddOffset(Enum::VT_DOCUMENTATION, documentation);
  }
  EnumBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  EnumBuilder &operator=(const EnumBuilder &);
  flatbuffers::Offset<Enum> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Enum>(end);
    fbb_.Required(o, Enum::VT_NAME);
    fbb_.Required(o, Enum::VT_VALUES);
    fbb_.Required(o, Enum::VT_UNDERLYING_TYPE);
    return o;
  }
};
    
    class MonsterStorage final {
 public:
  static constexpr char const* service_full_name() {
    return 'MyGame.Example.MonsterStorage';
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Store(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, flatbuffers::grpc::Message<Stat>* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>> AsyncStore(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>>(AsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>> PrepareAsyncStore(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>>(PrepareAsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< flatbuffers::grpc::Message<Monster>>> Retrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< flatbuffers::grpc::Message<Monster>>>(RetrieveRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>> AsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>>(AsyncRetrieveRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>> PrepareAsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>>(PrepareAsyncRetrieveRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>* AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::grpc::Message<Stat>>* PrepareAsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< flatbuffers::grpc::Message<Monster>>* RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>* AsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< flatbuffers::grpc::Message<Monster>>* PrepareAsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Store(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, flatbuffers::grpc::Message<Stat>* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>> AsyncStore(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>>(AsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>> PrepareAsyncStore(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>>(PrepareAsyncStoreRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>> Retrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) {
      return std::unique_ptr< ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>>(RetrieveRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>> AsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>>(AsyncRetrieveRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>> PrepareAsyncRetrieve(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>>(PrepareAsyncRetrieveRaw(context, request, cq));
    }
  
   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< flatbuffers::grpc::Message<Stat>>* PrepareAsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Monster>& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>* RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) override;
    ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>* AsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< flatbuffers::grpc::Message<Monster>>* PrepareAsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Store_;
    const ::grpc::internal::RpcMethod rpcmethod_Retrieve_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
  
  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response);
    virtual ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Store : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Store() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Store() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
    void RequestStore(::grpc::ServerContext* context, flatbuffers::grpc::Message<Monster>* request, ::grpc::ServerAsyncResponseWriter< flatbuffers::grpc::Message<Stat>>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Retrieve : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Retrieve() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Retrieve() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
    void RequestRetrieve(::grpc::ServerContext* context, flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerAsyncWriter< flatbuffers::grpc::Message<Monster>>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef   WithAsyncMethod_Store<  WithAsyncMethod_Retrieve<  Service   >   >   AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Store : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Store() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Store() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Retrieve : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Retrieve() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Retrieve() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Store : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Store() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< flatbuffers::grpc::Message<Monster>, flatbuffers::grpc::Message<Stat>>(std::bind(&WithStreamedUnaryMethod_Store<BaseClass>::StreamedStore, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Store() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedStore(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< flatbuffers::grpc::Message<Monster>,flatbuffers::grpc::Message<Stat>>* server_unary_streamer) = 0;
  };
  typedef   WithStreamedUnaryMethod_Store<  Service   >   StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_Retrieve : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_Retrieve() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler< flatbuffers::grpc::Message<Stat>, flatbuffers::grpc::Message<Monster>>(std::bind(&WithSplitStreamingMethod_Retrieve<BaseClass>::StreamedRetrieve, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_Retrieve() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Retrieve(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Stat>* request, ::grpc::ServerWriter< flatbuffers::grpc::Message<Monster>>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedRetrieve(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< flatbuffers::grpc::Message<Stat>,flatbuffers::grpc::Message<Monster>>* server_split_streamer) = 0;
  };
  typedef   WithSplitStreamingMethod_Retrieve<  Service   >   SplitStreamedService;
  typedef   WithStreamedUnaryMethod_Store<  WithSplitStreamingMethod_Retrieve<  Service   >   >   StreamedService;
};
    
    
    {
    {    for (auto part = parts.begin(); part != parts.end(); part++) {
      temp.append('}  // namespace ');
      temp.append(*part);
      temp.append('\n');
    }
    temp.append('\n');
  }
    
      server_instance->Shutdown();
    
    
    { private:
  std::map<std::string, std::string> value_map_;
  std::stringstream stream_;
};
    
      // If schemas used contain include statements, call this function for every
  // directory the parser should search them for.
  void AddIncludeDirectory(const char *path) { include_paths_.push_back(path); }
    
    #include 'flatbuffers/idl.h'
#include 'flatbuffers/util.h'
    
    // Platform detection.
#ifdef __linux__
#define LIBFUZZER_APPLE 0
#define LIBFUZZER_LINUX 1
#define LIBFUZZER_WINDOWS 0
#elif __APPLE__
#define LIBFUZZER_APPLE 1
#define LIBFUZZER_LINUX 0
#define LIBFUZZER_WINDOWS 0
#elif _WIN32
#define LIBFUZZER_APPLE 0
#define LIBFUZZER_LINUX 0
#define LIBFUZZER_WINDOWS 1
#else
#error 'Support for your platform has not been implemented'
#endif
    
    
    {  Printf(' exec/s: %zd', ExecPerSec);
  Printf(' rss: %zdMb', GetPeakRSSMb());
  Printf('%s', End);
}
    
      /// Applies one of the configured mutations.
  /// Returns the new size of data which could be up to MaxSize.
  size_t Mutate(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Applies one of the default mutations. Provided as a service
  /// to mutation authors.
  size_t DefaultMutate(uint8_t *Data, size_t Size, size_t MaxSize);
    
    typedef struct sha1nfo {
	uint32_t buffer[BLOCK_LENGTH/4];
	uint32_t state[HASH_LENGTH/4];
	uint32_t byteCount;
	uint8_t bufferOffset;
	uint8_t keyBuffer[BLOCK_LENGTH];
	uint8_t innerHash[HASH_LENGTH];
} sha1nfo;
    
    __attribute__((visibility('default')))
void __sanitizer_cov_trace_switch(uint64_t Val, uint64_t *Cases) {
  // Updates the value profile based on the relative position of Val and Cases.
  // We want to handle one random case at every call (handling all is slow).
  // Since none of the arguments contain any random bits we use a thread-local
  // counter to choose the random case to handle.
  static thread_local size_t Counter;
  Counter++;
  uint64_t N = Cases[0];
  uint64_t *Vals = Cases + 2;
  char *PC = (char*)__builtin_return_address(0);
  // We need a random number < N using Counter as a seed. But w/o DIV.
  // * find a power of two >= N
  // * mask Counter with this power of two.
  // * maybe subtract N.
  size_t Nlog = sizeof(long) * 8 - __builtin_clzl((long)N);
  size_t PowerOfTwoGeN = 1U << Nlog;
  assert(PowerOfTwoGeN >= N);
  size_t Idx = Counter & (PowerOfTwoGeN - 1);
  if (Idx >= N)
    Idx -= N;
  assert(Idx < N);
  uint64_t TwoIn32 = 1ULL << 32;
  if ((Val | Vals[Idx]) < TwoIn32)
    fuzzer::TPC.HandleCmp(PC + Idx, static_cast<uint32_t>(Val),
                          static_cast<uint32_t>(Vals[Idx]));
  else
    fuzzer::TPC.HandleCmp(PC + Idx, Val, Vals[Idx]);
}