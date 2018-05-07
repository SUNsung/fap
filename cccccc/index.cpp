
        
          THArgCheck((dimension >= 0) && (dimension < src->nDimension), 2, 'dimension out of range');
    
    #define ASSERT_TENSOR_VALUE(T, tensor, value) {            \
  for (std::size_t idx = 0; idx < (tensor).numel(); idx++) \
    assert(check_equal(                                    \
      reinterpret_cast<T*>((tensor).data())[idx], static_cast<T>(value) \
    ));                                                    \
}
    
      std::vector<std::shared_ptr<thpp::IntTensor>> tensors;
  std::vector<thpp::Tensor*> raw_tensors;
  if (contains(group_ranks, data_channel->getRank())) {
    if (data_channel->getRank() == group_ranks[0]) {
      for (std::size_t i = 0; i < group_ranks.size(); ++i) {
        tensors.push_back(buildTensor<int>({1, 2, 3, 4, 5}, group_ranks[i]));
        raw_tensors.push_back(tensors.back().get());
      }
    }
    }
    
    
    {    } else {
      throw std::runtime_error('unsupported tensor device in Gloo broadcast');
    }
    
    	// Check for machine-specific then user config source file.
	PathCombine(cpuCfgPath, userConfigDirPath, L'ConEmu-%COMPUTERNAME%.xml');
	ExpandEnvironmentStrings(cpuCfgPath, cpuCfgPath, sizeof(cpuCfgPath) / sizeof(cpuCfgPath[0]));
    
    
    {        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    struct GLFWwindow;
    
    IMGUI_API bool        ImGui_ImplSdlGL2_Init(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL2_NewFrame(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_RenderDrawData(ImDrawData* draw_data);
IMGUI_API bool        ImGui_ImplSdlGL2_ProcessEvent(SDL_Event* event);
    
    
    {    ImGuiMouseCursor imgui_cursor = io.MouseDrawCursor ? ImGuiMouseCursor_None : ImGui::GetMouseCursor();
    if (imgui_cursor == ImGuiMouseCursor_None)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        ::SetCursor(NULL);
    }
    else
    {
        // Hardware cursor type
        LPTSTR win32_cursor = IDC_ARROW;
        switch (imgui_cursor)
        {
        case ImGuiMouseCursor_Arrow:        win32_cursor = IDC_ARROW; break;
        case ImGuiMouseCursor_TextInput:    win32_cursor = IDC_IBEAM; break;
        case ImGuiMouseCursor_ResizeAll:    win32_cursor = IDC_SIZEALL; break;
        case ImGuiMouseCursor_ResizeEW:     win32_cursor = IDC_SIZEWE; break;
        case ImGuiMouseCursor_ResizeNS:     win32_cursor = IDC_SIZENS; break;
        case ImGuiMouseCursor_ResizeNESW:   win32_cursor = IDC_SIZENESW; break;
        case ImGuiMouseCursor_ResizeNWSE:   win32_cursor = IDC_SIZENWSE; break;
        }
        ::SetCursor(::LoadCursor(NULL, win32_cursor));
    }
    return true;
}
    
        // Setup inputs
    // (we already got mouse wheel, keyboard keys & characters from glfw callbacks polled in glfwPollEvents())
    if (glfwGetWindowAttrib(g_Window, GLFW_FOCUSED))
    {
        // Set OS mouse position if requested (only used when ImGuiConfigFlags_NavEnableSetMousePos is enabled by user)
        if (io.WantSetMousePos)
        {
            glfwSetCursorPos(g_Window, (double)io.MousePos.x, (double)io.MousePos.y);
        }
        else
        {
            double mouse_x, mouse_y;
            glfwGetCursorPos(g_Window, &mouse_x, &mouse_y);
            io.MousePos = ImVec2((float)mouse_x, (float)mouse_y);
        }
    }
    else
    {
        io.MousePos = ImVec2(-FLT_MAX,-FLT_MAX);
    }
    
        VkPipelineViewportStateCreateInfo viewport_info = {};
    viewport_info.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    viewport_info.viewportCount = 1;
    viewport_info.scissorCount = 1;
    
    // Data
static ALLEGRO_DISPLAY*         g_Display = NULL;
static ALLEGRO_BITMAP*          g_Texture = NULL;
static double                   g_Time = 0.0;
static ALLEGRO_MOUSE_CURSOR*    g_MouseCursorInvisible = NULL;
static ALLEGRO_VERTEX_DECL*     g_VertexDecl = NULL;
    
            ModalWindowDarkeningRatio = 0.0f;
        OverlayDrawList._Data = &DrawListSharedData;
        OverlayDrawList._OwnerName = '##Overlay'; // Give it a name for debugging
        MouseCursor = ImGuiMouseCursor_Arrow;
    
    //---- Don't implement demo windows functionality (ShowDemoWindow()/ShowStyleEditor()/ShowUserGuide() methods will be empty)
//---- It is very strongly recommended to NOT disable the demo windows during development. Please read the comments in imgui_demo.cpp.
//#define IMGUI_DISABLE_DEMO_WINDOWS
    
    HRESULT CreateDeviceD3D(HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    }
    
    ATTRIBUTE_NO_SANITIZE_MEMORY
void TracePC::AddValueForMemcmp(void *caller_pc, const void *s1, const void *s2,
                              size_t n) {
  if (!n) return;
  size_t Len = std::min(n, (size_t)32);
  const uint8_t *A1 = reinterpret_cast<const uint8_t *>(s1);
  const uint8_t *A2 = reinterpret_cast<const uint8_t *>(s2);
  size_t I = 0;
  for (; I < Len; I++)
    if (A1[I] != A2[I])
      break;
  size_t PC = reinterpret_cast<size_t>(caller_pc);
  size_t Idx = I;
  // if (I < Len)
  //  Idx += __builtin_popcountl((A1[I] ^ A2[I])) - 1;
  TPC.HandleValueProfile((PC & 4095) | (Idx << 12));
}