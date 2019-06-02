
        
        
    {}  // namespace
    
      std::map<uv_timer_t*, base::OnceClosure> tasks_;
    
    #include 'atom/browser/api/event_emitter.h'
    
    
    {  DISALLOW_COPY_AND_ASSIGN(RenderProcessPreferences);
};
    
    class WebRequest : public mate::TrackableObject<WebRequest> {
 public:
  static mate::Handle<WebRequest> Create(v8::Isolate* isolate,
                                         AtomBrowserContext* browser_context);
    }
    
    #include 'atom/browser/atom_quota_permission_context.h'
    
      AtomQuotaPermissionContext();
    
    void OffscreenViewProxy::OnEvent(ui::Event* event) {
  if (view_) {
    view_->OnEvent(event);
  }
}
    
    #ifndef ATOM_BROWSER_UI_COCOA_ROOT_VIEW_MAC_H_
#define ATOM_BROWSER_UI_COCOA_ROOT_VIEW_MAC_H_
    
    #endif  // ATOM_BROWSER_UI_COCOA_VIEWS_DELEGATE_MAC_H_

    
        private:
        bool ShouldWriteUpdate(size_t update) const
        {
            if (m_frequency == 0)
            {
                // Geometric schedule - write at every 2^(i) steps, with i = 1, 2, 3, ...
                return ((update + 1) & update) == 0;
            }
    }
    
            static Dictionary Serialize(const FunctionPtr& f);
    
            // 'initializer' must be a random initializer
        auto initializerType = initializer[InitializerTypeAttributeName].Value<std::wstring>();
        if ((initializerType != Microsoft::MSR::CNTK::UniformInitializerTypeName) &&
            (initializerType != Microsoft::MSR::CNTK::BilinearInitializerTypeName) &&
            (initializerType != Microsoft::MSR::CNTK::ConstantInitializerTypeName))
        {
            int oldOutputRank = initializer[OutputRankAttributeName].Value<int>();
            int oldFilterRank = initializer[FilterRankAttributeName].Value<int>();
    }
    
    
    {    return supportsDistributedMBRead;
}
    
    template <typename TVector>
inline void RandomShuffleMT(TVector& v, std::mt19937_64& rng)
{
    foreach_index(currentLocation, v)
    {
        // Pick a random location and swap with current one
        const size_t randomLocation = RandMT(0, v.size(), rng);
        std::swap(v[currentLocation], v[randomLocation]);
    }
}
    
        EditDistanceErrorNode(const ScriptableObjects::IConfigRecordPtr configp)
        : EditDistanceErrorNode(configp->Get(L'deviceId'), L'<placeholder>', configp->Get(L'subPen'), configp->Get(L'delPen'), configp->Get(L'insPen'), configp->Get(L'squashInputs'), {})
    {
        AttachInputsFromConfig(configp, this->GetExpectedNumInputs());
        m_tokensToIgnore = ScriptableObjects::ConfigArray::FlattenedVectorFrom<size_t>(configp->Get(L'tokensToIgnore'));
    }
    
        // initialize by reading a matrix from a text file
    void InitFromFile(const std::wstring& initFromFilePath);
    
        if (!semi) {
      // only media type (type/subtype,data)
      ssize_t media_len = comma - data;
      meta_len -= media_len;
      data += media_len;
    } else if (slash && slash < semi) {
      // media type + param (type/subtype;param,data)
      ssize_t media_len = semi - data;
      meta_len -= media_len;
      data += media_len;
    } else {
      // no media type (;base64,data)
      if (semi != data // ex. foo;base64,data
          || meta_len != sizeof(';base64') - 1 // ex. ;something,data
          || memcmp(data, ';base64',
                    sizeof(';base64') - 1)) { // ex. ;base65,data
          raise_warning('rfc2397: invalid meta data');
          return nullptr;
        }
    }
    
    struct GlobStreamWrapper final : Stream::Wrapper {
  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
  req::ptr<Directory> opendir(const String& path) override;
};
    
    #ifndef incl_HPHP_PERF_EVENT_H_
#define incl_HPHP_PERF_EVENT_H_
    
    template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 1, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 1, rate, fillCols);
}
    
        // TODO: Hide OS mouse cursor if ImGui is drawing it
    // s3ePointerSetInt(S3E_POINTER_HIDE_CURSOR,(io.MouseDrawCursor ? 0 : 1));
    
            // Find index from cfg.DstFont (we allow the user to set cfg.DstFont. Also it makes casual debugging nicer than when storing indices)
        src_tmp.DstIndex = -1;
        for (int output_i = 0; output_i < atlas->Fonts.Size && src_tmp.DstIndex == -1; output_i++)
            if (cfg.DstFont == atlas->Fonts[output_i])
                src_tmp.DstIndex = output_i;
        IM_ASSERT(src_tmp.DstIndex != -1); // cfg.DstFont not pointing within atlas->Fonts[] array?
        if (src_tmp.DstIndex == -1)
            return false;
    
    namespace ImGuiFreeType
{
    // Hinting greatly impacts visuals (and glyph sizes).
    // When disabled, FreeType generates blurrier glyphs, more or less matches the stb's output.
    // The Default hinting mode usually looks good, but may distort glyphs in an unusual way.
    // The Light hinting mode generates fuzzier glyphs but better matches Microsoft's rasterizer.
    }
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
        // stream signature
    stb_out(0x57); stb_out(0xbc);
    stb_out2(0);
    
    void ResetDevice()
{
    ImGui_ImplDX9_InvalidateDeviceObjects();
    HRESULT hr = g_pd3dDevice->Reset(&g_d3dpp);
    if (hr == D3DERR_INVALIDCALL)
        IM_ASSERT(0);
    ImGui_ImplDX9_CreateDeviceObjects();
}
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the example_sdl_opengl3/ folder**
// See imgui_impl_sdl.cpp for details.
    
    static ImGui_ImplVulkanH_Window g_MainWindowData;
static uint32_t                 g_MinImageCount = 2;
static bool                     g_SwapChainRebuild = false;
static int                      g_SwapChainResizeWidth = 0;
static int                      g_SwapChainResizeHeight = 0;