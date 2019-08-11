
        
        /** A parsed pkh(P) descriptor. */
class PKHDescriptor final : public DescriptorImpl
{
protected:
    std::vector<CScript> MakeScripts(const std::vector<CPubKey>& keys, const CScript*, FlatSigningProvider& out) const override
    {
        CKeyID id = keys[0].GetID();
        out.pubkeys.emplace(id, keys[0]);
        return Singleton(GetScriptForDestination(PKHash(id)));
    }
public:
    PKHDescriptor(std::unique_ptr<PubkeyProvider> prov) : DescriptorImpl(Singleton(std::move(prov)), {}, 'pkh') {}
};
    
    /** A hasher class for RIPEMD-160. */
class CRIPEMD160
{
private:
    uint32_t s[5];
    unsigned char buf[64];
    uint64_t bytes;
    }
    
    Status DumpTable(Env* env, const std::string& fname, WritableFile* dst) {
  uint64_t file_size;
  RandomAccessFile* file = NULL;
  Table* table = NULL;
  Status s = env->GetFileSize(fname, &file_size);
  if (s.ok()) {
    s = env->NewRandomAccessFile(fname, &file);
  }
  if (s.ok()) {
    // We use the default comparator, which may or may not match the
    // comparator used in this database. However this should not cause
    // problems since we only use Table operations that do not require
    // any comparisons.  In particular, we do not call Seek or Prev.
    s = Table::Open(Options(), file, file_size, &table);
  }
  if (!s.ok()) {
    delete table;
    delete file;
    return s;
  }
    }
    
      void ResetDBState(ResetMethod reset_method) {
    switch (reset_method) {
      case RESET_DROP_UNSYNCED_DATA:
        ASSERT_OK(env_->DropUnsyncedFileData());
        break;
      case RESET_DELETE_UNSYNCED_FILES:
        ASSERT_OK(env_->DeleteFilesCreatedAfterLastDirSync());
        break;
      default:
        assert(false);
    }
  }
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
    
//-----------------------------------------------------------------------------
//
//	class EnvmapAttribute
//
//-----------------------------------------------------------------------------
    
    
//
// Decode using a the 'One-Shift' strategy for decoding, with a 
// small-ish table to accelerate decoding of short codes.
//
// If possible, try looking up codes into the acceleration table.
// This has a few benifits - there's no search involved; We don't
// need an additional lookup to map id to symbol; we don't need
// a full 64-bits (so less refilling). 
//
    
        IMF_EXPORT
    Iterator                    find (const std::string &name);
    IMF_EXPORT
    ConstIterator               find (const std::string &name) const;
    
    class GenericInputFile
{
    public:
        IMF_EXPORT
        virtual ~GenericInputFile() {}
    }
    
    
    {    OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::write <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (os, version);
}
    
    //-----------------------------------------------------------------------------
//
//	Low-level file input and output for OpenEXR.
//
//-----------------------------------------------------------------------------
    
    
void
InputFile::rawPixelDataToBuffer (int scanLine,
                                 char *pixelData,
                                 int &pixelDataSize) const
{
    try
    {
        if (_data->dsFile)
        {
            throw IEX_NAMESPACE::ArgExc ('Tried to read a raw scanline '
                                         'from a deep image.');
        }
        
        else if (_data->isTiled)
        {
            throw IEX_NAMESPACE::ArgExc ('Tried to read a raw scanline '
                                         'from a tiled image.');
        }
        
        _data->sFile->rawPixelDataToBuffer(scanLine, pixelData, pixelDataSize);
    }
    catch (IEX_NAMESPACE::BaseExc &e)
    {
        REPLACE_EXC (e, 'Error reading pixel data from image '
                     'file \'' << fileName() << '\'. ' << e.what());
        throw;
    }
}
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_EXIT
    
    class ClientChannelStressTest {
 public:
  void Run() {
    Start();
    // Keep updating resolution for the test duration.
    gpr_log(GPR_INFO, 'Start updating resolution.');
    const auto wait_duration =
        std::chrono::milliseconds(kResolutionUpdateIntervalMs);
    std::vector<AddressData> addresses;
    auto start_time = std::chrono::steady_clock::now();
    while (true) {
      if (std::chrono::duration_cast<std::chrono::seconds>(
              std::chrono::steady_clock::now() - start_time)
              .count() > kTestDurationSec) {
        break;
      }
      // Generate a random subset of balancers.
      addresses.clear();
      for (const auto& balancer_server : balancer_servers_) {
        // Select each address with probability of 0.8.
        if (std::rand() % 10 < 8) {
          addresses.emplace_back(AddressData{balancer_server.port_, true, ''});
        }
      }
      std::shuffle(addresses.begin(), addresses.end(),
                   std::mt19937(std::random_device()()));
      SetNextResolution(addresses);
      std::this_thread::sleep_for(wait_duration);
    }
    gpr_log(GPR_INFO, 'Finish updating resolution.');
    Shutdown();
  }
    }
    
      void SendRequest() {
    EchoRequest request;
    EchoResponse response;
    request.set_message('Hello');
    ClientContext context;
    GPR_ASSERT(!shutdown_);
    Status s = stub_->Echo(&context, request, &response);
    GPR_ASSERT(shutdown_);
  }
    
    static void iomgr_platform_flush(void) { grpc_iocp_flush(); }
    
    #include <grpc/support/port_platform.h>
    
    #ifndef GRPCPP_CREATE_CHANNEL_H
#define GRPCPP_CREATE_CHANNEL_H
    
    // Add a second service with one async method.
TEST_F(HybridEnd2endTest, GenericEchoAsyncRequestStream_AsyncDupService) {
  typedef EchoTestService::WithAsyncMethod_RequestStream<
      EchoTestService::WithGenericMethod_Echo<TestServiceImpl>>
      SType;
  SType service;
  AsyncGenericService generic_service;
  duplicate::EchoTestService::AsyncService dup_service;
  SetUpServer(&service, &dup_service, &generic_service, nullptr);
  ResetStub();
  std::thread generic_handler_thread(HandleGenericCall, &generic_service,
                                     cqs_[0].get());
  std::thread request_stream_handler_thread(HandleClientStreaming<SType>,
                                            &service, cqs_[1].get());
  std::thread echo_handler_thread(
      HandleEcho<duplicate::EchoTestService::AsyncService>, &dup_service,
      cqs_[2].get(), true);
  TestAllMethods();
  SendEchoToDupService();
  generic_handler_thread.join();
  request_stream_handler_thread.join();
  echo_handler_thread.join();
}
    
    
    { protected:
  std::unique_ptr<Server> server_;
  std::unique_ptr<grpc::testing::EchoTestService::Stub> stub_;
  std::unique_ptr<ProtoReflectionDescriptorDatabase> desc_db_;
  std::unique_ptr<protobuf::DescriptorPool> desc_pool_;
  std::unordered_set<string> known_files_;
  std::unordered_set<string> known_types_;
  const protobuf::DescriptorPool* ref_desc_pool_;
  int port_;
  reflection::ProtoServerReflectionPlugin plugin_;
};
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
    }
    
            // Get the function pointer (required for any extensions)
        auto vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT)vkGetInstanceProcAddr(g_Instance, 'vkCreateDebugReportCallbackEXT');
        IM_ASSERT(vkCreateDebugReportCallbackEXT != NULL);
    
        // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
            // Start the Dear ImGui frame
        ImGui_ImplOpenGL2_NewFrame();
        ImGui_ImplSDL2_NewFrame(window);
        ImGui::NewFrame();
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Copy and convert all vertices into a single contiguous buffer, convert colors to DX9 default format.
    // FIXME-OPT: This is a waste of resource, the ideal is to use imconfig.h and
    //  1) to avoid repacking colors:   #define IMGUI_USE_BGRA_PACKED_COLOR
    //  2) to avoid repacking vertices: #define IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT struct ImDrawVert { ImVec2 pos; float z; ImU32 col; ImVec2 uv; }
    CUSTOMVERTEX* vtx_dst;
    ImDrawIdx* idx_dst;
    if (g_pVB->Lock(0, (UINT)(draw_data->TotalVtxCount * sizeof(CUSTOMVERTEX)), (void**)&vtx_dst, D3DLOCK_DISCARD) < 0)
        return;
    if (g_pIB->Lock(0, (UINT)(draw_data->TotalIdxCount * sizeof(ImDrawIdx)), (void**)&idx_dst, D3DLOCK_DISCARD) < 0)
        return;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawVert* vtx_src = cmd_list->VtxBuffer.Data;
        for (int i = 0; i < cmd_list->VtxBuffer.Size; i++)
        {
            vtx_dst->pos[0] = vtx_src->pos.x;
            vtx_dst->pos[1] = vtx_src->pos.y;
            vtx_dst->pos[2] = 0.0f;
            vtx_dst->col = (vtx_src->col & 0xFF00FF00) | ((vtx_src->col & 0xFF0000) >> 16) | ((vtx_src->col & 0xFF) << 16);     // RGBA --> ARGB for DirectX9
            vtx_dst->uv[0] = vtx_src->uv.x;
            vtx_dst->uv[1] = vtx_src->uv.y;
            vtx_dst++;
            vtx_src++;
        }
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    g_pVB->Unlock();
    g_pIB->Unlock();
    g_pd3dDevice->SetStreamSource(0, g_pVB, 0, sizeof(CUSTOMVERTEX));
    g_pd3dDevice->SetIndices(g_pIB);
    g_pd3dDevice->SetFVF(D3DFVF_CUSTOMVERTEX);
    
      /*
   * @brief A helper function to perform a start to finish carve
   *
   * This function walks through the carve, compress, and exfil functions
   * in one fell swoop. Use of this class should largely happen through
   * this function.
   */
  void start() override;
    
    void restoreScheduleBlacklist(std::map<std::string, size_t>& blacklist) {
  std::string content;
  getDatabaseValue(kPersistentSettings, kFailedQueries, content);
  auto blacklist_pairs = osquery::split(content, ':');
  if (blacklist_pairs.size() == 0 || blacklist_pairs.size() % 2 != 0) {
    // Nothing in the blacklist, or malformed data.
    return;
  }
    }
    
      /**
   * @brief Hash a source's config data
   *
   * @param source is the place where the config content came from
   * @param content is the content of the config data for a given source
   * @return false if the source did not change, otherwise true
   */
  bool hashSource(const std::string& source, const std::string& content);
    
      const std::string& getName() const {
    return name_;
  }
    
     private:
  bool is_open_ = false;
    
    
    {  name_ = name;
}
    
      /**
   * @brief Bind this plugin to an external plugin reference.
   *
   * Allow a specialized plugin type to act when an external plugin is
   * registered (e.g., a TablePlugin will attach the table name).
   *
   * @param name The broadcasted name of the plugin.
   * @param info The routing info for the owning extension.
   */
  static Status addExternal(const std::string& name,
                            const PluginResponse& info) {
    (void)name;
    (void)info;
    return Status::success();
  }
    
      if (doc.HasMember('removed')) {
    auto status = deserializeQueryData(doc['removed'], dr.removed);
    if (!status.ok()) {
      return status;
    }
  }