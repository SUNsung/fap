
        
            bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
    static int const                    NUM_BACK_BUFFERS = 3;
static ID3D12Device*                g_pd3dDevice = NULL;
static ID3D12DescriptorHeap*        g_pd3dRtvDescHeap = NULL;
static ID3D12DescriptorHeap*        g_pd3dSrvDescHeap = NULL;
static ID3D12CommandQueue*          g_pd3dCommandQueue = NULL;
static ID3D12GraphicsCommandList*   g_pd3dCommandList = NULL;
static ID3D12Fence*                 g_fence = NULL;
static HANDLE                       g_fenceEvent = NULL;
static UINT64                       g_fenceLastSignaledValue = 0;
static IDXGISwapChain3*             g_pSwapChain = NULL;
static HANDLE                       g_hSwapChainWaitableObject = NULL;
static ID3D12Resource*              g_mainRenderTargetResource[NUM_BACK_BUFFERS] = {};
static D3D12_CPU_DESCRIPTOR_HANDLE  g_mainRenderTargetDescriptor[NUM_BACK_BUFFERS] = {};
    
        // the literals are everything from lit_start to q
    *pending_literals = (q - lit_start);
    
            {
            static char str0[128] = 'Hello, world!';
            static int i0 = 123;
            ImGui::InputText('input text', str0, IM_ARRAYSIZE(str0));
            ImGui::SameLine(); ShowHelpMarker('USER:\nHold SHIFT or use mouse to select text.\n' 'CTRL+Left/Right to word jump.\n' 'CTRL+A or double-click to select all.\n' 'CTRL+X,CTRL+C,CTRL+V clipboard.\n' 'CTRL+Z,CTRL+Y undo/redo.\n' 'ESCAPE to revert.\n\nPROGRAMMER:\nYou can use the ImGuiInputTextFlags_CallbackResize facility if you need to wire InputText() to a dynamic string type. See misc/cpp/imgui_stdlib.h for an example (this is not demonstrated in imgui_demo.cpp).');
    }