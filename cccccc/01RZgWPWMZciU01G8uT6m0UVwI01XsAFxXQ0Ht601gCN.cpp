
        
          /// Verifies that all buffers are still valid.
  void verifyAllBuffers() const;
    
    namespace swift {
    }
    
    // On other platforms swift_once_t is std::once_flag
typedef std::once_flag swift_once_t;
    
    // On macOS and iOS, swift_once is implemented using GCD.
// The compiler emits an inline check matching the barrier-free inline fast
// path of dispatch_once(). See SwiftTargetInfo.OnceDonePredicateValue.
    
    void StartCmder(std::wstring  path = L'', bool is_single_mode = false, std::wstring taskName = L'', std::wstring cfgRoot = L'')
{
#if USE_TASKBAR_API
	wchar_t appId[MAX_PATH] = { 0 };
#endif
	wchar_t exeDir[MAX_PATH] = { 0 };
	wchar_t icoPath[MAX_PATH] = { 0 };
	wchar_t cfgPath[MAX_PATH] = { 0 };
	wchar_t backupCfgPath[MAX_PATH] = { 0 };
	wchar_t cpuCfgPath[MAX_PATH] = { 0 };
	wchar_t userCfgPath[MAX_PATH] = { 0 };
	wchar_t defaultCfgPath[MAX_PATH] = { 0 };
	wchar_t conEmuPath[MAX_PATH] = { 0 };
	wchar_t configDirPath[MAX_PATH] = { 0 };
	wchar_t userConfigDirPath[MAX_PATH] = { 0 };
	wchar_t userBinDirPath[MAX_PATH] = { 0 };
	wchar_t userProfiledDirPath[MAX_PATH] = { 0 };
	wchar_t args[MAX_PATH * 2 + 256] = { 0 };
    }
    
    
    {    // Destroy SDL mouse cursors
    for (ImGuiMouseCursor cursor_n = 0; cursor_n < ImGuiMouseCursor_Count_; cursor_n++)
        SDL_FreeCursor(g_MouseCursors[cursor_n]);
    memset(g_MouseCursors, 0, sizeof(g_MouseCursors));
}
    
    
    {        // Create texture view
        D3D10_SHADER_RESOURCE_VIEW_DESC srv_desc;
        ZeroMemory(&srv_desc, sizeof(srv_desc));
        srv_desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        srv_desc.ViewDimension = D3D10_SRV_DIMENSION_TEXTURE2D;
        srv_desc.Texture2D.MipLevels = desc.MipLevels;
        srv_desc.Texture2D.MostDetailedMip = 0;
        g_pd3dDevice->CreateShaderResourceView(pTexture, &srv_desc, &g_pFontTextureView);
        pTexture->Release();
    }
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
        VkPipelineVertexInputStateCreateInfo vertex_info = {};
    vertex_info.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    vertex_info.vertexBindingDescriptionCount = 1;
    vertex_info.pVertexBindingDescriptions = binding_desc;
    vertex_info.vertexAttributeDescriptionCount = 3;
    vertex_info.pVertexAttributeDescriptions = attribute_desc;
    
    // Win32 Data
static HWND                 g_hWnd = 0;
static INT64                g_Time = 0;
static INT64                g_TicksPerSecond = 0;
static ImGuiMouseCursor     g_LastMouseCursor = ImGuiMouseCursor_Count_;
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);