
        
        class AdditionalMetadataInterceptor : public experimental::Interceptor {
 public:
  AdditionalMetadataInterceptor(
      std::multimap<grpc::string, grpc::string> additional_metadata)
      : additional_metadata_(std::move(additional_metadata)) {}
    }
    
    grpc_endpoint_pair grpc_iomgr_create_endpoint_pair(
    const char* name, grpc_channel_args* channel_args) {
  SOCKET sv[2];
  grpc_endpoint_pair p;
  create_sockets(sv);
  grpc_core::ExecCtx exec_ctx;
  p.client = grpc_tcp_create(grpc_winsocket_create(sv[1], 'endpoint:client'),
                             channel_args, 'endpoint:server');
  p.server = grpc_tcp_create(grpc_winsocket_create(sv[0], 'endpoint:server'),
                             channel_args, 'endpoint:client');
    }
    
    #include <grpc/support/port_platform.h>
    
    #include 'src/core/lib/channel/channel_args.h'
#include 'src/core/lib/iomgr/iocp_windows.h'
#include 'src/core/lib/iomgr/sockaddr.h'
#include 'src/core/lib/iomgr/sockaddr_utils.h'
#include 'src/core/lib/iomgr/socket_windows.h'
#include 'src/core/lib/iomgr/tcp_client.h'
#include 'src/core/lib/iomgr/tcp_windows.h'
#include 'src/core/lib/iomgr/timer.h'
    
      // Unsets `name` variable.
  void Unset();
    
    class GlobalConfigEnvTest : public ::testing::Test {
 protected:
  void SetUp() override { ClearConfigErrorCalled(); }
  void TearDown() override { EXPECT_FALSE(IsConfigErrorCalled()); }
};
    
      GPR_GLOBAL_CONFIG_SET(string_var, 'Test');
    
      KillServer();
    
      void VerifyHealthCheckService() {
    HealthCheckServiceInterface* service = server_->GetHealthCheckService();
    EXPECT_TRUE(service != nullptr);
    const grpc::string kHealthyService('healthy_service');
    const grpc::string kUnhealthyService('unhealthy_service');
    const grpc::string kNotRegisteredService('not_registered');
    service->SetServingStatus(kHealthyService, true);
    service->SetServingStatus(kUnhealthyService, false);
    }
    
    
    {    MemoryFlyout->Hide();
}
    
        auto rootFrame = dynamic_cast<Frame ^>(Window::Current->Content);
    
    TEST_METHOD(TestOnPaste)
{
    shared_ptr<UnitConverterMock> mock = make_shared<UnitConverterMock>();
    VM::UnitConverterViewModel vm(mock);
    }
    
    // This is expected to be in same order as IDM_QWORD, IDM_DWORD etc.
enum eNUM_WIDTH
{
    QWORD_WIDTH, // Number width of 64 bits mode (default)
    DWORD_WIDTH, // Number width of 32 bits mode
    WORD_WIDTH,  // Number width of 16 bits mode
    BYTE_WIDTH   // Number width of 16 bits mode
};
typedef enum eNUM_WIDTH NUM_WIDTH;
static constexpr size_t NUM_WIDTH_LENGTH = 4;
    
      struct LabelInfo {
    LabelInfo() : scopeId(0) {}
    int scopeId;
    LabelScopes scopes;
    LabelMap labels;
    std::vector<GotoInfo> gotos;
  };
  std::vector<LabelInfo> m_labelInfos; // stack by function
    
      static bool s_inited;
  static hphp_string_map<Verb> s_verbs;
  static const char *s_verb_names[];
    
    /**
 * Handler for a class with custom handling functions.
 */
void registerNativePropHandler(const String& className,
                               NativePropHandler::GetFunc get,
                               NativePropHandler::SetFunc set,
                               NativePropHandler::IssetFunc isset,
                               NativePropHandler::UnsetFunc unset);
    
    #include <bfd.h>
    
    namespace HPHP { namespace alloc {
    }
    }
    
      RangeMapper* next() {
    return m_fallback;
  }
    
    #include <cstddef>
    
    bool HHVM_FUNCTION(fb_rename_function, const String& orig_func_name,
                                       const String& new_func_name) {
  if (orig_func_name.empty() || new_func_name.empty() ||
      orig_func_name.get()->isame(new_func_name.get())) {
    throw_invalid_argument('unable to rename %s', orig_func_name.data());
    return false;
  }
    }
    
    
    {///////////////////////////////////////////////////////////////////////////////
}
    
      void onError(const proxygen::HTTPException& error)
    noexcept override {
    Logger::Error('HPHP push txn transport error: %s',
                  error.describe().c_str());
    // Pushed transactions can't really have ingress errors
    m_egressError = true;
  }
    
    #ifndef incl_HPHP_EXT_REFLECTION_H_
#define incl_HPHP_EXT_REFLECTION_H_
    
    /*
 * Actual implementation of TypeParser for DWARF.
 */
    
    // Data
static ALLEGRO_DISPLAY*         g_Display = NULL;
static ALLEGRO_BITMAP*          g_Texture = NULL;
static double                   g_Time = 0.0;
static ALLEGRO_MOUSE_CURSOR*    g_MouseCursorInvisible = NULL;
static ALLEGRO_VERTEX_DECL*     g_VertexDecl = NULL;
static char*                    g_ClipboardTextData = NULL;
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'ID3D10ShaderResourceView*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Renderer: Support for large meshes (64k+ vertices) with 16-bits indices.
    
        // Initialize Direct3D
    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClass(wc.lpszClassName, wc.hInstance);
        return 1;
    }
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        // Create the vertex shader
    {
        static const char* vertexShader =
            'cbuffer vertexBuffer : register(b0) \
            {\
            float4x4 ProjectionMatrix; \
            };\
            struct VS_INPUT\
            {\
            float2 pos : POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            PS_INPUT main(VS_INPUT input)\
            {\
            PS_INPUT output;\
            output.pos = mul( ProjectionMatrix, float4(input.pos.xy, 0.f, 1.f));\
            output.col = input.col;\
            output.uv  = input.uv;\
            return output;\
            }';
    }
    
        // Create Descriptor Set:
    {
        VkDescriptorSetAllocateInfo alloc_info = {};
        alloc_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
        alloc_info.descriptorPool = v->DescriptorPool;
        alloc_info.descriptorSetCount = 1;
        alloc_info.pSetLayouts = &g_DescriptorSetLayout;
        err = vkAllocateDescriptorSets(v->Device, &alloc_info, &g_DescriptorSet);
        check_vk_result(err);
    }
    
        std::unique_ptr<DHTTokenTracker> tokenTracker;
    
      // localnode
  // 8bytes reserved
  readBytes(fp, buf, buf.size(), 8);
  // localnode ID
  readBytes(fp, buf, buf.size(), DHT_ID_LENGTH);
  auto localNode = std::make_shared<DHTNode>(buf);
  // 4bytes reserved
  readBytes(fp, buf, buf.size(), 4);
    
    namespace aria2 {
    }
    
    
    {
    {    PrefPtr prefEntryPointHost = family == AF_INET ? PREF_DHT_ENTRY_POINT_HOST
                                                   : PREF_DHT_ENTRY_POINT_HOST6;
    if (!e->getOption()->get(prefEntryPointHost).empty()) {
      {
        PrefPtr prefEntryPointPort = family == AF_INET
                                         ? PREF_DHT_ENTRY_POINT_PORT
                                         : PREF_DHT_ENTRY_POINT_PORT6;
        std::pair<std::string, uint16_t> addr(
            e->getOption()->get(prefEntryPointHost),
            e->getOption()->getAsInt(prefEntryPointPort));
        std::vector<std::pair<std::string, uint16_t>> entryPoints;
        entryPoints.push_back(addr);
        auto command = make_unique<DHTEntryPointNameResolveCommand>(
            e->newCUID(), e, family, entryPoints);
        command->setBootstrapEnabled(true);
        command->setTaskQueue(taskQueue.get());
        command->setTaskFactory(taskFactory.get());
        command->setRoutingTable(routingTable.get());
        command->setLocalNode(localNode);
        tempCommands.push_back(std::move(command));
      }
    }
    else {
      A2_LOG_INFO('No DHT entry point specified.');
    }
    {
      auto command = make_unique<DHTInteractionCommand>(e->newCUID(), e);
      command->setMessageDispatcher(dispatcher.get());
      command->setMessageReceiver(receiver.get());
      command->setTaskQueue(taskQueue.get());
      command->setReadCheckSocket(connection->getSocket());
      command->setConnection(std::move(connection));
      command->setUDPTrackerClient(udpTrackerClient);
      tempRoutineCommands.push_back(std::move(command));
    }
    {
      auto command = make_unique<DHTTokenUpdateCommand>(
          e->newCUID(), e, DHT_TOKEN_UPDATE_INTERVAL);
      command->setTokenTracker(tokenTracker.get());
      tempCommands.push_back(std::move(command));
    }
    {
      auto command = make_unique<DHTBucketRefreshCommand>(
          e->newCUID(), e, DHT_BUCKET_REFRESH_CHECK_INTERVAL);
      command->setTaskQueue(taskQueue.get());
      command->setRoutingTable(routingTable.get());
      command->setTaskFactory(taskFactory.get());
      tempCommands.push_back(std::move(command));
    }
    {
      auto command = make_unique<DHTPeerAnnounceCommand>(
          e->newCUID(), e, DHT_PEER_ANNOUNCE_CHECK_INTERVAL);
      command->setPeerAnnounceStorage(peerAnnounceStorage.get());
      tempCommands.push_back(std::move(command));
    }
    {
      auto command =
          make_unique<DHTAutoSaveCommand>(e->newCUID(), e, family, 30_min);
      command->setLocalNode(localNode);
      command->setRoutingTable(routingTable.get());
      tempCommands.push_back(std::move(command));
    }
    // add deserialized nodes to routing table
    auto& desnodes = deserializer.getNodes();
    for (auto& node : desnodes) {
      routingTable->addNode(node);
    }
    if (!desnodes.empty()) {
      auto task = std::static_pointer_cast<DHTBucketRefreshTask>(
          taskFactory->createBucketRefreshTask());
      task->setForceRefresh(true);
      taskQueue->addPeriodicTask1(task);
    }
    // assign them into DHTRegistry
    if (family == AF_INET) {
      DHTRegistry::getMutableData().localNode = localNode;
      DHTRegistry::getMutableData().routingTable = std::move(routingTable);
      DHTRegistry::getMutableData().taskQueue = std::move(taskQueue);
      DHTRegistry::getMutableData().taskFactory = std::move(taskFactory);
      DHTRegistry::getMutableData().peerAnnounceStorage =
          std::move(peerAnnounceStorage);
      DHTRegistry::getMutableData().tokenTracker = std::move(tokenTracker);
      DHTRegistry::getMutableData().messageDispatcher = std::move(dispatcher);
      DHTRegistry::getMutableData().messageReceiver = std::move(receiver);
      DHTRegistry::getMutableData().messageFactory = std::move(factory);
      e->getBtRegistry()->setUDPTrackerClient(udpTrackerClient);
      DHTRegistry::setInitialized(true);
    }
    else {
      DHTRegistry::getMutableData6().localNode = localNode;
      DHTRegistry::getMutableData6().routingTable = std::move(routingTable);
      DHTRegistry::getMutableData6().taskQueue = std::move(taskQueue);
      DHTRegistry::getMutableData6().taskFactory = std::move(taskFactory);
      DHTRegistry::getMutableData6().peerAnnounceStorage =
          std::move(peerAnnounceStorage);
      DHTRegistry::getMutableData6().tokenTracker = std::move(tokenTracker);
      DHTRegistry::getMutableData6().messageDispatcher = std::move(dispatcher);
      DHTRegistry::getMutableData6().messageReceiver = std::move(receiver);
      DHTRegistry::getMutableData6().messageFactory = std::move(factory);
      DHTRegistry::setInitialized6(true);
    }
    if (e->getBtRegistry()->getUdpPort() == 0) {
      // We assign port last so that no exception gets in the way
      e->getBtRegistry()->setUdpPort(port);
    }
  }
  catch (RecoverableException& ex) {
    A2_LOG_ERROR_EX(fmt('Exception caught while initializing DHT functionality.'
                        ' DHT is disabled.'),
                    ex);
    tempCommands.clear();
    tempRoutineCommands.clear();
    if (family == AF_INET) {
      DHTRegistry::clearData();
      e->getBtRegistry()->setUDPTrackerClient(
          std::shared_ptr<UDPTrackerClient>{});
    }
    else {
      DHTRegistry::clearData6();
    }
  }
  return std::make_pair(std::move(tempCommands),
                        std::move(tempRoutineCommands));
}
    
    #endif // D_DHT_SETUP_H

    
    #include 'DHTTaskFactory.h'
#include 'a2time.h'
    
    void DHTTaskQueueImpl::addImmediateTask(const std::shared_ptr<DHTTask>& task)
{
  immediateTaskQueue_.addTask(task);
}
    
        CacheEntry& operator=(const CacheEntry& c);
    
    #ifndef V8_HEAP_STORE_BUFFER_INL_H_
#define V8_HEAP_STORE_BUFFER_INL_H_
    
    
static const char* const cpu_regs[8] = {
  'eax', 'ecx', 'edx', 'ebx', 'esp', 'ebp', 'esi', 'edi'
};
    
      void InvalidateValidityCellIfPrototype(Node* map, Node* bitfield2 = nullptr);
    
      Node* Generate_SubtractWithFeedback(Node* context, Node* lhs, Node* rhs,
                                      Node* slot_id, Node* feedback_vector,
                                      bool rhs_is_smi);
    
    
    {    auto status = stub_->SayHello(&context, request_msg, &response_msg);
    if (status.ok()) {
      const HelloReply *response = response_msg.GetRoot();
      return response->message()->str();
    } else {
      std::cerr << status.error_code() << ': ' << status.error_message()
                << std::endl;
      return 'RPC failed';
    }
  }
    
    // Return the prologue of the generated header file.
grpc::string GetHeaderPrologue(grpc_generator::File *file,
                               const Parameters &params);
    
      // to ensure it is correct, we now generate text back from the binary,
  // and compare the two:
  std::string jsongen;
  if (!GenerateText(parser, parser.builder_.GetBufferPointer(), &jsongen)) {
    printf('Couldn't serialize parsed data to JSON!\n');
    return 1;
  }
    
    struct MovieT : public flatbuffers::NativeTable {
  typedef Movie TableType;
  CharacterUnion main_character;
  std::vector<CharacterUnion> characters;
  MovieT() {
  }
};
    
    struct FieldBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Field::VT_NAME, name);
  }
  void add_type(flatbuffers::Offset<reflection::Type> type) {
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
  void add_attributes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<reflection::KeyValue>>> attributes) {
    fbb_.AddOffset(Field::VT_ATTRIBUTES, attributes);
  }
  void add_documentation(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> documentation) {
    fbb_.AddOffset(Field::VT_DOCUMENTATION, documentation);
  }
  explicit FieldBuilder(flatbuffers::FlatBufferBuilder &_fbb)
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
    
    template<> inline const MyGame::Example2::Monster *Monster::any_unique_as<MyGame::Example2::Monster>() const {
  return any_unique_as_M2();
}
    
    
    { public:
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return StructInNestedNSTypeTable();
  }
  StructInNestedNS() {
    memset(static_cast<void *>(this), 0, sizeof(StructInNestedNS));
  }
  StructInNestedNS(int32_t _a, int32_t _b)
      : a_(flatbuffers::EndianScalar(_a)),
        b_(flatbuffers::EndianScalar(_b)) {
  }
  int32_t a() const {
    return flatbuffers::EndianScalar(a_);
  }
  void mutate_a(int32_t _a) {
    flatbuffers::WriteScalar(&a_, _a);
  }
  int32_t b() const {
    return flatbuffers::EndianScalar(b_);
  }
  void mutate_b(int32_t _b) {
    flatbuffers::WriteScalar(&b_, _b);
  }
};
FLATBUFFERS_STRUCT_END(StructInNestedNS, 8);
    
    #ifndef FLATBUFFERS_REGISTRY_H_
#define FLATBUFFERS_REGISTRY_H_
    
      OutputFormat output_format = kHexadecimal;
  bool annotate = false;
  bool escape_dash = false;
  for (int i = 2; i < argc; i++) {
    const char *arg = argv[i];
    if (!escape_dash && arg[0] == '-') {
      std::string opt = arg;
      if (opt == '-d')
        output_format = kDecimal;
      else if (opt == '-x')
        output_format = kHexadecimal;
      else if (opt == '-0x')
        output_format = kHexadecimal0x;
      else if (opt == '-c')
        annotate = true;
      else if (opt == '--')
        escape_dash = true;
      else
        printf('Unrecognized argument: \'%s\'\n', arg);
    } else {
      std::stringstream ss;
      if (output_format == kDecimal) {
        ss << std::dec;
      } else if (output_format == kHexadecimal) {
        ss << std::hex;
      } else if (output_format == kHexadecimal0x) {
        ss << std::hex;
        ss << '0x';
      }
      if (hash_function16)
        ss << hash_function16(arg);
      else if (hash_function32)
        ss << hash_function32(arg);
      else if (hash_function64)
        ss << hash_function64(arg);
    }
    }
    
    /// This test populates a COMPLETE inner table before move conversion and later populates more members in the outer table.
void builder_move_assign_conversion_before_finish_test() {
  flatbuffers::FlatBufferBuilder fbb;
  flatbuffers::grpc::MessageBuilder mb;
    }
    
    
]]
$for i [[
#define MOCK_METHOD$i(m, ...) GMOCK_METHOD$i[[]]_(, , , m, __VA_ARGS__)
    
      // Clones a 0-terminated C string, allocating memory using new.  The
  // caller is responsible for deleting the return value using
  // delete[].  Returns the cloned string, or NULL if the input is
  // NULL.
  //
  // This is different from strdup() in string.h, which allocates
  // memory using malloc().
  static const char* CloneCString(const char* c_str);
    
    // Given the total number of shards, the shard index, and the test id,
// returns true iff the test should be run on this shard. The test id is
// some arbitrary but unique non-negative integer assigned to each test
// method. Assumes that 0 <= shard_index < total_shards.
GTEST_API_ bool ShouldRunTestOnShard(
    int total_shards, int shard_index, int test_id);
    
      // Provides a factory function to be called to generate the default value.
  // This method can be used even if T is only move-constructible, but it is not
  // limited to that case.
  typedef T (*FactoryFunction)();
  static void SetFactory(FactoryFunction factory) {
    delete producer_;
    producer_ = new FactoryValueProducer(factory);
  }