
        
        CallCredentials::~CallCredentials() {}
    
    const AuthProperty AuthPropertyIterator::operator*() {
  return std::pair<grpc::string_ref, grpc::string_ref>(
      property_->name,
      grpc::string_ref(property_->value, property_->value_length));
}
    
    void ChannelArguments::SetPointerWithVtable(
    const grpc::string& key, void* value,
    const grpc_arg_pointer_vtable* vtable) {
  grpc_arg arg;
  arg.type = GRPC_ARG_POINTER;
  strings_.push_back(key);
  arg.key = const_cast<char*>(strings_.back().c_str());
  arg.value.pointer.p = vtable->copy(value);
  arg.value.pointer.vtable = vtable;
  args_.push_back(arg);
}
    
    void CoreCodegen::grpc_init() { ::grpc_init(); }
void CoreCodegen::grpc_shutdown() { ::grpc_shutdown(); }
    
    
    {}  // namespace grpc
    
      enum FieldIdValue {
    kServerElapsedTimeField = 0,
  };
    
    const ViewDescriptor& ServerReceivedBytesPerRpcMinute() {
  const static ViewDescriptor descriptor =
      MinuteDescriptor()
          .set_name('grpc.io/server/received_bytes_per_rpc/minute')
          .set_measure(kRpcServerReceivedBytesPerRpcMeasureName)
          .set_aggregation(BytesDistributionAggregation())
          .add_column(ServerMethodTagKey());
  return descriptor;
}
    
    
    {
    {   private:
    const grpc::string name_;
    const grpc::string value_;
  };
  return std::unique_ptr<ServerBuilderOption>(new StringOption(name, value));
}
    
    #ifndef GRPC_CUSTOM_DEFAULT_THREAD_POOL
    
    /**
	@author AndreaCatania
*/
    
    public:
	JointBullet();
	virtual ~JointBullet();
    
    #include 'core/rid.h'
    
    void FuncRef::_bind_methods() {
    }
    
    
    {
    {}}
    
      std::vector<std::thread> workers;
  for (auto worker = size_t{0}; worker < num_threads; ++worker) {
    workers.push_back(std::thread([&] {
      try {
        hphp_thread_init();
        hphp_session_init(Treadmill::SessionKind::HHBBC);
        SCOPE_EXIT {
          hphp_context_exit();
          hphp_session_exit();
          hphp_thread_exit();
        };
    }
    }
    }
    
    //////////////////////////////////////////////////////////////////////
    
    /*
 * If Trace::hhbbc_time >= 1, print some stats about the program to a
 * temporary file.  If it's greater than or equal to 2, also dump it
 * to stdout.
 */
void print_stats(const Index&, const php::Program&);
    
    int64_t VMTOC::allocTOC(int64_t target) {
  folly::MSLGuard g{s_TOC};
  HPHP::Address addr = m_tocvector->frontier();
  m_tocvector->qword(target);
  return addr - (m_tocvector->base() + INT16_MAX + 1);
}
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
      if (ini_fd != -1) {
    newargv.push_back('-c');
    newargv.push_back(ini_path);
  }
    
        bool isPHP = false;
    const char *p = strrchr(ename, '.');
    if (p) {
      isPHP = (strncmp(p + 1, 'php', 3) == 0);
    } else {
      try {
        std::string line;
        std::ifstream fin(fe.c_str());
        if (std::getline(fin, line)) {
          if (line[0] == '#' && line[1] == '!' &&
              line.find('php') != std::string::npos) {
            isPHP = true;
          }
        }
      } catch (...) {
        Logger::Error('FileUtil::find(): unable to read %s', fe.c_str());
      }
    }
    
    int FileUtil::ssystem(const char* command) {
  int ret = system(command);
  if (ret == -1) {
    Logger::Error('system(\'%s\'): %s', command,
                  folly::errnoStr(errno).c_str());
  } else if (ret != 0) {
    Logger::Error('command failed: \'%s\'', command);
  }
  return ret;
}
    
    namespace HPHP { namespace FileUtil {
    }
    }
    
    String File::TranslatePath(const String& filename) {
  if (filename.empty()) {
    // Special case: an empty string should continue to be an empty string.
    // Otherwise it would be canonicalized to CWD, which is inconsistent with
    // PHP and most filesystem utilities.
    return filename;
  } else if (!FileUtil::isAbsolutePath(filename.slice())) {
    String cwd = g_context->getCwd();
    return TranslatePathKeepRelative(cwd + '/' + filename);
  } else {
    return TranslatePathKeepRelative(filename);
  }
}
    
        // Setup Dear ImGui binding
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
            // Start the Dear ImGui frame
        ImGui_Marmalade_NewFrame();
        ImGui::NewFrame();
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
        // Decide GL+GLSL versions
#if __APPLE__
    // GL 3.2 Core + GLSL 150
    const char* glsl_version = '#version 150';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG); // Always required on Mac
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = '#version 130';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
#endif
    
    
    {        D3DCompile(pixelShader, strlen(pixelShader), NULL, NULL, NULL, 'main', 'ps_4_0', 0, 0, &g_pPixelShaderBlob, NULL);
        if (g_pPixelShaderBlob == NULL)  // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        if (g_pd3dDevice->CreatePixelShader((DWORD*)g_pPixelShaderBlob->GetBufferPointer(), g_pPixelShaderBlob->GetBufferSize(), &g_pPixelShader) != S_OK)
            return false;
    }
    
        if (g_pFontSampler) { g_pFontSampler->Release(); g_pFontSampler = NULL; }
    if (g_pFontTextureView) { g_pFontTextureView->Release(); g_pFontTextureView = NULL; ImGui::GetIO().Fonts->TexID = NULL; } // We copied g_pFontTextureView to io.Fonts->TexID so let's clear that as well.
    if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
    if (g_pVB) { g_pVB->Release(); g_pVB = NULL; }
    
        D3D12_GRAPHICS_PIPELINE_STATE_DESC psoDesc;
    memset(&psoDesc, 0, sizeof(D3D12_GRAPHICS_PIPELINE_STATE_DESC));
    psoDesc.NodeMask = 1;
    psoDesc.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    psoDesc.pRootSignature = g_pRootSignature;
    psoDesc.SampleMask = UINT_MAX;
    psoDesc.NumRenderTargets = 1;
    psoDesc.RTVFormats[0] = g_RTVFormat;
    psoDesc.SampleDesc.Count = 1;
    psoDesc.Flags = D3D12_PIPELINE_STATE_FLAG_NONE;
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {    return true;
}
    
    void RunBenchmarks(const std::vector<Benchmark::Instance>& benchmarks,
                           BenchmarkReporter* console_reporter,
                           BenchmarkReporter* file_reporter) {
  // Note the file_reporter can be null.
  CHECK(console_reporter != nullptr);
    }
    
    namespace benchmark {
namespace internal {
    }
    }
    
    namespace benchmark {
namespace {
#ifdef BENCHMARK_OS_WINDOWS
typedef WORD PlatformColorCode;
#else
typedef const char* PlatformColorCode;
#endif
    }
    }
    
          // regerror returns the number of bytes necessary to null terminate
      // the string, so we move that when assigning to error.
      CHECK_NE(needed, 0);
      error->assign(errbuf, needed - 1);
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  virtual apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                         int32_t *const frame_num) = 0;
    
    
    {  return std::string((const char *)(str_buf));
}
    
      /**
   * @brief Start the fake CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
      // 1. set baudrate to 500k
  ret = bcan_set_baudrate(_dev_handler, BCAN_BAUDRATE_500K);
  if (ret != ErrorCode::OK) {
    AERROR << 'Set baudrate error Code: ' << ret;
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    
    {
    {
    {
    {
    {  std::vector<CanFrame> frames;
  int32_t num = 0;
  CanFrame frame;
  // frame.id = 0x60;
  // frame.len = 8;
  // frame.data[0] = 0;
  // frames.push_back(frame);
  // num = 1;
  EXPECT_EQ(hermes_can.Start(), ErrorCode::OK);
  EXPECT_EQ(hermes_can.Receive(&frames, &num), ErrorCode::OK);
}
*/
}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    bool SocketCanClientRaw::Init(const CANCardParameter &parameter) {
  if (!parameter.has_channel_id()) {
    AERROR << 'Init CAN failed: parameter does not have channel id. The '
              'parameter is '
           << parameter.DebugString();
    return false;
  }
    }
    
    #endif  // MODULES_DRIVERS_CANBUS_CANCARD_CLIENT_SOCKET_CAN_CLIENT_RAW_H_

    
    /**
 * @struct CheckIdArg
 *
 * @brief this struct include data for check ids.
 */
struct CheckIdArg {
  int64_t period = 0;
  int64_t real_period = 0;
  int64_t last_time = 0;
  int32_t error_count = 0;
};
    
    std::string Byte::byte_to_hex(const uint8_t value) {
  uint8_t high = value >> 4;
  uint8_t low = value & 0x0F;
  std::string result = '';
  result += HEX[high];
  result += HEX[low];
  return result;
}
    
    TEST(ByteTest, SetBit) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  value.set_bit_0(1);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_bit_0(7);
  EXPECT_EQ(0x7D, value.get_byte());
  value.set_bit_1(7);
  EXPECT_EQ(0xFD, value.get_byte());
  value.set_value(0x77);
  value.set_bit_1(0);
  EXPECT_EQ(0x77, value.get_byte());
    }
    
    template <typename SensorType>
Status SensorCanbus<SensorType>::Init() {
  AdapterManager::Init(FLAGS_adapter_config_filename);
  AINFO << 'The adapter manager is successfully initialized.';
    }