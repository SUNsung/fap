
        
        		if (b == h.first)
			h.first = b->next;
    
    
    {	Translation();
};
    
    
    {	return false;
};
    
    
    {		} else {
			// WARN_PRINT('Ignoring packet with unknown address family');
			uint8_t type = (uint8_t)IP::TYPE_NONE;
			rb.write(&type, 1);
		};
    
    	t->id = (ID)GetCurrentThreadId(); // must implement
	t->callback(t->user);
    
    void ImGui_ImplFreeGLUT_ReshapeFunc(int w, int h)
{
    ImGuiIO& io = ImGui::GetIO();
    io.DisplaySize = ImVec2((float)w, (float)h);
}
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
        }
    }
    
    // Data
static ID3D10Device*            g_pd3dDevice = NULL;
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D10RenderTargetView*  g_mainRenderTargetView = NULL;
    
    extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;
    }
    
    static const int kCbToBlueTable[256] = {
  -227, -225, -223, -222, -220, -218, -216, -214, -213, -211, -209, -207,
  -206, -204, -202, -200, -198, -197, -195, -193, -191, -190, -188, -186,
  -184, -183, -181, -179, -177, -175, -174, -172, -170, -168, -167, -165,
  -163, -161, -159, -158, -156, -154, -152, -151, -149, -147, -145, -144,
  -142, -140, -138, -136, -135, -133, -131, -129, -128, -126, -124, -122,
  -120, -119, -117, -115, -113, -112, -110, -108, -106, -105, -103, -101,
   -99,  -97,  -96,  -94,  -92,  -90,  -89,  -87,  -85,  -83,  -82,  -80,
   -78,  -76,  -74,  -73,  -71,  -69,  -67,  -66,  -64,  -62,  -60,  -58,
   -57,  -55,  -53,  -51,  -50,  -48,  -46,  -44,  -43,  -41,  -39,  -37,
   -35,  -34,  -32,  -30,  -28,  -27,  -25,  -23,  -21,  -19,  -18,  -16,
   -14,  -12,  -11,   -9,   -7,   -5,   -4,   -2,    0,    2,    4,    5,
     7,    9,   11,   12,   14,   16,   18,   19,   21,   23,   25,   27,
    28,   30,   32,   34,   35,   37,   39,   41,   43,   44,   46,   48,
    50,   51,   53,   55,   57,   58,   60,   62,   64,   66,   67,   69,
    71,   73,   74,   76,   78,   80,   82,   83,   85,   87,   89,   90,
    92,   94,   96,   97,   99,  101,  103,  105,  106,  108,  110,  112,
   113,  115,  117,  119,  120,  122,  124,  126,  128,  129,  131,  133,
   135,  136,  138,  140,  142,  144,  145,  147,  149,  151,  152,  154,
   156,  158,  159,  161,  163,  165,  167,  168,  170,  172,  174,  175,
   177,  179,  181,  183,  184,  186,  188,  190,  191,  193,  195,  197,
   198,  200,  202,  204,  206,  207,  209,  211,  213,  214,  216,  218,
   220,  222,  223,  225,
};
    
      // Sets the coordinates of the current macro-block for the purpose of
  // CompareBlock() calls.
  virtual void SwitchBlock(int block_x, int block_y,
                           int factor_x, int factor_y) = 0;
    
    void DCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * x + u] * in[u * stride];
    }
  }
}
    
    namespace guetzli {
    }
    
    
    {  size_t len;
  std::unique_ptr<uint8_t[]> data;
  size_t pos;
  uint64_t put_buffer;
  int put_bits;
  bool overflow;
};
    
    void InitJPEGDataForYUV444(int w, int h, JPEGData* jpg) {
  jpg->width = w;
  jpg->height = h;
  jpg->max_h_samp_factor = 1;
  jpg->max_v_samp_factor = 1;
  jpg->MCU_rows = (h + 7) >> 3;
  jpg->MCU_cols = (w + 7) >> 3;
  jpg->quant.resize(3);
  jpg->components.resize(3);
  for (int i = 0; i < 3; ++i) {
    JPEGComponent* c = &jpg->components[i];
    c->id = i;
    c->h_samp_factor = 1;
    c->v_samp_factor = 1;
    c->quant_idx = i;
    c->width_in_blocks = jpg->MCU_cols;
    c->height_in_blocks = jpg->MCU_rows;
    c->num_blocks = c->width_in_blocks * c->height_in_blocks;
    c->coeffs.resize(c->num_blocks * kDCTBlockSize);
  }
}
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
      void PrintCallGraph() {
    for (Callgraph::const_iterator i = callgraph_.begin(), e = callgraph_.end();
         i != e;
         ++i) {
      std::cout << i->first << '\n';
    }
    }
    
    
    {
    {}  // namespace internal
}  // namespace v8
    
    namespace v8 {
namespace internal {
    }
    }
    
      Node* EmitCreateShallowObjectLiteral(Node* feedback_vector, Node* slot,
                                       Label* call_runtime);
  Node* EmitCreateEmptyObjectLiteral(Node* context);
    
    #endif  // V8_BUILTINS_BUILTINS_LAZY_GEN_H_

    
    #include 'torque-generated/builtins-base-from-dsl-gen.h'
    
      // Client side
  printer->Print(
      'class StubInterface {\n'
      ' public:\n');
  printer->Indent();
  printer->Print('virtual ~StubInterface() {}\n');
  for (int i = 0; i < service->method_count(); ++i) {
    printer->Print(service->method(i)->GetLeadingComments('//').c_str());
    PrintHeaderClientMethodInterfaces(printer, service->method(i).get(), vars,
                                      true);
    printer->Print(service->method(i)->GetTrailingComments('//').c_str());
  }
  printer->Outdent();
  printer->Print('private:\n');
  printer->Indent();
  for (int i = 0; i < service->method_count(); ++i) {
    PrintHeaderClientMethodInterfaces(printer, service->method(i).get(), vars,
                                      false);
  }
  printer->Outdent();
  printer->Print('};\n');
  printer->Print(
      'class Stub final : public StubInterface'
      ' {\n public:\n');
  printer->Indent();
  printer->Print(
      'Stub(const std::shared_ptr< ::grpc::ChannelInterface>& '
      'channel);\n');
  for (int i = 0; i < service->method_count(); ++i) {
    PrintHeaderClientMethod(printer, service->method(i).get(), vars, true);
  }
  printer->Outdent();
  printer->Print('\n private:\n');
  printer->Indent();
  printer->Print('std::shared_ptr< ::grpc::ChannelInterface> channel_;\n');
  for (int i = 0; i < service->method_count(); ++i) {
    PrintHeaderClientMethod(printer, service->method(i).get(), vars, false);
  }
  for (int i = 0; i < service->method_count(); ++i) {
    PrintHeaderClientMethodData(printer, service->method(i).get(), vars);
  }
  printer->Outdent();
  printer->Print('};\n');
  printer->Print(
      'static std::unique_ptr<Stub> NewStub(const std::shared_ptr< '
      '::grpc::ChannelInterface>& channel, '
      'const ::grpc::StubOptions& options = ::grpc::StubOptions());\n');
    
    template <typename T> struct NamedHashFunction {
  const char *name;
    }
    
      // If schemas used contain include statements, call this function for every
  // directory the parser should search them for.
  void AddIncludeDirectory(const char *path) { include_paths_.push_back(path); }
    
      // Get access to the root:
  auto monster = GetMonster(builder.GetBufferPointer());
    
    // Generate text for non-scalar field.
static bool GenFieldOffset(const FieldDef &fd, const Table *table, bool fixed,
                           int indent, Type *union_type, const IDLOptions &opts,
                           std::string *_text) {
  const void *val = nullptr;
  if (fixed) {
    // The only non-scalar fields in structs are structs.
    FLATBUFFERS_ASSERT(IsStruct(fd.value.type));
    val = reinterpret_cast<const Struct *>(table)->GetStruct<const void *>(
        fd.value.offset);
  } else if (fd.flexbuffer) {
    auto vec = table->GetPointer<const Vector<uint8_t> *>(fd.value.offset);
    auto root = flexbuffers::GetRoot(vec->data(), vec->size());
    root.ToString(true, opts.strict_json, *_text);
    return true;
  } else if (fd.nested_flatbuffer) {
    auto vec = table->GetPointer<const Vector<uint8_t> *>(fd.value.offset);
    auto root = GetRoot<Table>(vec->data());
    return GenStruct(*fd.nested_flatbuffer, root, indent, opts, _text);
  } else {
    val = IsStruct(fd.value.type)
              ? table->GetStruct<const void *>(fd.value.offset)
              : table->GetPointer<const void *>(fd.value.offset);
  }
  return Print(val, fd.value.type, indent, union_type, opts, _text);
}
    
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