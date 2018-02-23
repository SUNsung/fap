
        
        static void frame_begin()
{
    VkResult err;
    for (;;)
    {
        err = vkWaitForFences(g_Device, 1, &g_Fence[g_FrameIndex], VK_TRUE, 100);
        if (err == VK_SUCCESS) break;
        if (err == VK_TIMEOUT) continue;
        check_vk_result(err);
    }
    {
        err = vkAcquireNextImageKHR(g_Device, g_Swapchain, UINT64_MAX, g_PresentCompleteSemaphore[g_FrameIndex], VK_NULL_HANDLE, &g_BackbufferIndices[g_FrameIndex]);
        check_vk_result(err);
    }
    {
        err = vkResetCommandPool(g_Device, g_CommandPool[g_FrameIndex], 0);
        check_vk_result(err);
        VkCommandBufferBeginInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        err = vkBeginCommandBuffer(g_CommandBuffer[g_FrameIndex], &info);
        check_vk_result(err);
    }
    {
        VkRenderPassBeginInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
        info.renderPass = g_RenderPass;
        info.framebuffer = g_Framebuffer[g_BackbufferIndices[g_FrameIndex]];
        info.renderArea.extent.width = fb_width;
        info.renderArea.extent.height = fb_height;
        info.clearValueCount = 1;
        info.pClearValues = &g_ClearValue;
        vkCmdBeginRenderPass(g_CommandBuffer[g_FrameIndex], &info, VK_SUBPASS_CONTENTS_INLINE);
    }
}
    
        // Cleanup
    ImGui_ImplA5_Shutdown();
    ImGui::DestroyContext();
    al_destroy_event_queue(queue);
    al_destroy_display(display);
    
    
    {    return 0;
}

    
                    // Copy rasterized pixels to main texture
                uint8_t* blit_dst = atlas->TexPixelsAlpha8 + rect.y * atlas->TexWidth + rect.x;
                font_face.BlitGlyph(ft_glyph_bitmap, blit_dst, atlas->TexWidth, multiply_enabled ? multiply_table : NULL);
                FT_Done_Glyph(ft_glyph);
    
    // DirectX data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static ID3D11Buffer*            g_pVB = NULL;
static ID3D11Buffer*            g_pIB = NULL;
static ID3D10Blob *             g_pVertexShaderBlob = NULL;
static ID3D11VertexShader*      g_pVertexShader = NULL;
static ID3D11InputLayout*       g_pInputLayout = NULL;
static ID3D11Buffer*            g_pVertexConstantBuffer = NULL;
static ID3D10Blob *             g_pPixelShaderBlob = NULL;
static ID3D11PixelShader*       g_pPixelShader = NULL;
static ID3D11SamplerState*      g_pFontSampler = NULL;
static ID3D11ShaderResourceView*g_pFontTextureView = NULL;
static ID3D11RasterizerState*   g_pRasterizerState = NULL;
static ID3D11BlendState*        g_pBlendState = NULL;
static ID3D11DepthStencilState* g_pDepthStencilState = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
    // GLFW callbacks (registered by default to GLFW if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks yourself. You may also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL3_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL3_CreateDeviceObjects();
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
        if (connections % 1000 == 0 || connections < 1000) {
        cout << 'Connections: ' << connections << endl;
    }
    
    template <bool isServer>
void ExtensionsNegotiator<isServer>::readOffer(std::string offer) {
    if (isServer) {
        ExtensionsParser extensionsParser(offer.data(), offer.length());
        if ((options & PERMESSAGE_DEFLATE) && extensionsParser.perMessageDeflate) {
            if (extensionsParser.clientNoContextTakeover || (options & CLIENT_NO_CONTEXT_TAKEOVER)) {
                options |= CLIENT_NO_CONTEXT_TAKEOVER;
            }
    }
    }
    }
    
    template <bool isServer>
void Group<isServer>::timerCallback(uS::Timer *timer) {
    Group<isServer> *group = (Group<isServer> *) timer->getData();
    }
    
        while (httpSocket->outstandingResponsesHead) {
        Group<isServer>::from(httpSocket)->httpCancelledRequestHandler(httpSocket->outstandingResponsesHead);
        HttpResponse *next = httpSocket->outstandingResponsesHead->next;
        delete httpSocket->outstandingResponsesHead;
        httpSocket->outstandingResponsesHead = next;
    }
    
    #include <string>
    
        // same as listen(TRANSFERS), backwards compatible API for now
    void addAsync() {
        if (!async) {
            NodeData::addAsync();
        }
    }
    
        // todo: asio is thread safe, use it!
    bool threadSafeChange(Loop *loop, Poll *self, int events) {
        return false;
    }
    
        void start(Loop *loop, Poll *self, int events) {
        epoll_event event;
        event.events = events;
        event.data.ptr = self;
        epoll_ctl(loop->epfd, EPOLL_CTL_ADD, state.fd, &event);
    }
    
    namespace fuzzer {
    }
    
    namespace fuzzer {
// A simple POD sized array of bytes.
template <size_t kMaxSize> class FixedWord {
public:
  FixedWord() {}
  FixedWord(const uint8_t *B, uint8_t S) { Set(B, S); }
    }
    }
    
    #endif // LIBFUZZER_WINDOWS

    
      Fuzzer(UserCallback CB, InputCorpus &Corpus, MutationDispatcher &MD,
         FuzzingOptions Options);
  ~Fuzzer();
  void Loop();
  void MinimizeCrashLoop(const Unit &U);
  void ShuffleAndMinimize(UnitVector *V);
  void InitializeTraceState();
  void RereadOutputCorpus(size_t MaxSize);
    
    
    {  std::vector<Mutator> Mutators;
  std::vector<Mutator> DefaultMutators;
};
    
      void StopTraceRecording() {
    if (!RecordingMemcmp)
      return;
    RecordingMemcmp = false;
    for (size_t i = 0; i < NumMutations; i++) {
      auto &M = Mutations[i];
      if (Options.Verbosity >= 2) {
        AutoDictUnitCounts[M.W]++;
        AutoDictAdds++;
        if ((AutoDictAdds & (AutoDictAdds - 1)) == 0) {
          typedef std::pair<size_t, Word> CU;
          std::vector<CU> CountedUnits;
          for (auto &I : AutoDictUnitCounts)
            CountedUnits.push_back(std::make_pair(I.second, I.first));
          std::sort(CountedUnits.begin(), CountedUnits.end(),
                    [](const CU &a, const CU &b) { return a.first > b.first; });
          Printf('AutoDict:\n');
          for (auto &I : CountedUnits) {
            Printf('   %zd ', I.first);
            PrintASCII(I.second.data(), I.second.size());
            Printf('\n');
          }
        }
      }
      MD.AddWordToAutoDictionary({M.W, M.Pos});
    }
    for (auto &W : InterestingWords)
      MD.AddWordToAutoDictionary({W});
  }
    
    namespace aria2 {
    }
    
      void setUserDefinedCred(std::string user, std::string password);
    
      virtual void openFile(int64_t totalLength = 0) CXX11_OVERRIDE;
    
    std::string AbstractOptionHandler::toTagString() const
{
  std::string s;
  for (int i = 0; i < MAX_HELP_TAG; ++i) {
    if (tags_ & (1 << i)) {
      s += strHelpTag(i);
      s += ', ';
    }
  }
  if (!s.empty()) {
    s.resize(s.size() - 2);
  }
  return s;
}
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
    void AnnounceList::moveToStoppedAllowedTier()
{
  auto itr = find_wrap_if(std::begin(tiers_), std::end(tiers_), currentTier_,
                          FindStoppedAllowedTier());
  setCurrentTier(std::move(itr));
}
    
      void nextEvent();
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }
    
    AuthConfig::AuthConfig(std::string user, std::string password)
    : user_(std::move(user)), password_(std::move(password))
{
}