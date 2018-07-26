        assert((15 & reinterpret_cast<uintptr_t>(&row[0])) == 0);
        assert((15 & reinterpret_cast<uintptr_t>(&cols4[0])) == 0);
        assert((15 & reinterpret_cast<uintptr_t>(&cols4[cols4stride])) == 0);
        // assert (cols4stride * 4 == cols4.size());     // (passed in one vector with 4 columns stacked on top of each other)
        // assert (row.size() * 4 == cols4.size());  // this assert is no longer appropriate because of further breaking into blocks
    
    
    {                    // TODO IsEqualTo not yet implemented for sparse block matrix
                    // switch type from sparse block matrix is also not yet implemented 
                    // --> (mDblock.SwitchToMatrixType(MatrixType::DENSE, matrixFormatDense, true);)
                    BOOST_CHECK(mDblock.IsEqualTo(mC, c_epsilonFloatE4));
#endif
}
    
    #include <memory> // for shared_ptr
    
    vector<wstring> /*IConfigRecord::*/ ComputationNodeBase::GetMemberIds() const
{
    return vector<wstring>{ L'name', L'operation', L'dim', L'dims', /*L'tag', */L'inputs', OperationName() + L'Args' };
}
    
    // Win32 Data
static HWND                 g_hWnd = 0;
static INT64                g_Time = 0;
static INT64                g_TicksPerSecond = 0;
static ImGuiMouseCursor     g_LastMouseCursor = ImGuiMouseCursor_COUNT;
    
    static bool ImGui_ImplDX9_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height, bytes_per_pixel;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height, &bytes_per_pixel);
    }
    
    void ImGui_ImplGlfw_KeyCallback(GLFWwindow*, int key, int, int action, int mods)
{
    ImGuiIO& io = ImGui::GetIO();
    if (action == GLFW_PRESS)
        io.KeysDown[key] = true;
    if (action == GLFW_RELEASE)
        io.KeysDown[key] = false;
    }
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
    bool    ImGui_ImplDX11_Init(ID3D11Device* device, ID3D11DeviceContext* device_context)
{
    // Get factory from device
    IDXGIDevice* pDXGIDevice = NULL;
    IDXGIAdapter* pDXGIAdapter = NULL;
    IDXGIFactory1* pFactory = NULL;
    }
    
    // Enumeration for PushStyleVar() / PopStyleVar() to temporarily modify the ImGuiStyle structure.
// NB: the enum only refers to fields of ImGuiStyle which makes sense to be pushed/popped inside UI code. During initialization, feel free to just poke into ImGuiStyle directly.
// NB: if changing this enum, you need to update the associated internal table GStyleVarInfo[] accordingly. This is where we link enum values to members offset/type.
enum ImGuiStyleVar_
{
    // Enum name ......................// Member in ImGuiStyle structure (see ImGuiStyle for descriptions)
    ImGuiStyleVar_Alpha,               // float     Alpha
    ImGuiStyleVar_WindowPadding,       // ImVec2    WindowPadding
    ImGuiStyleVar_WindowRounding,      // float     WindowRounding
    ImGuiStyleVar_WindowBorderSize,    // float     WindowBorderSize
    ImGuiStyleVar_WindowMinSize,       // ImVec2    WindowMinSize
    ImGuiStyleVar_WindowTitleAlign,    // ImVec2    WindowTitleAlign
    ImGuiStyleVar_ChildRounding,       // float     ChildRounding
    ImGuiStyleVar_ChildBorderSize,     // float     ChildBorderSize
    ImGuiStyleVar_PopupRounding,       // float     PopupRounding
    ImGuiStyleVar_PopupBorderSize,     // float     PopupBorderSize
    ImGuiStyleVar_FramePadding,        // ImVec2    FramePadding
    ImGuiStyleVar_FrameRounding,       // float     FrameRounding
    ImGuiStyleVar_FrameBorderSize,     // float     FrameBorderSize
    ImGuiStyleVar_ItemSpacing,         // ImVec2    ItemSpacing
    ImGuiStyleVar_ItemInnerSpacing,    // ImVec2    ItemInnerSpacing
    ImGuiStyleVar_IndentSpacing,       // float     IndentSpacing
    ImGuiStyleVar_ScrollbarSize,       // float     ScrollbarSize
    ImGuiStyleVar_ScrollbarRounding,   // float     ScrollbarRounding
    ImGuiStyleVar_GrabMinSize,         // float     GrabMinSize
    ImGuiStyleVar_GrabRounding,        // float     GrabRounding
    ImGuiStyleVar_ButtonTextAlign,     // ImVec2    ButtonTextAlign
    ImGuiStyleVar_COUNT
    }