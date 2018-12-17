
        
            atlas->TexID = NULL;
    atlas->TexWidth = atlas->TexHeight = 0;
    atlas->TexUvScale = ImVec2(0.0f, 0.0f);
    atlas->TexUvWhitePixel = ImVec2(0.0f, 0.0f);
    atlas->ClearTexData();
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    void my_display_code()
{
    // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
    if (show_demo_window)
        ImGui::ShowDemoWindow(&show_demo_window);
    }
    
    static void check_vk_result(VkResult err)
{
    if (err == 0) return;
    printf('VkResult %d\n', err);
    if (err < 0)
        abort();
}
    
    #include 'imgui.h'
#include 'imgui_impl_win32.h'
#include 'imgui_impl_dx10.h'
#include <d3d10_1.h>
#include <d3d10.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>
    
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
    
        {
        D3D12_DESCRIPTOR_HEAP_DESC desc = {};
        desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
        desc.NumDescriptors = 1;
        desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
        if (g_pd3dDevice->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_pd3dSrvDescHeap)) != S_OK)
            return E_FAIL;
    }
    
    double ClusterGeneralInfo701::longitude_dist(const std::uint8_t* bytes,
                                             int32_t length) const {
  Byte t0(bytes + 1);
  uint32_t x = t0.get_byte(0, 8);
    }
    
    namespace apollo {
namespace drivers {
namespace conti_radar {
    }
    }
    }
    
    
    {
    {
    {}  // namespace conti_radar
}  // namespace drivers
}  // namespace apollo

    
    TEST_F(PncMapTest, SearchForwardIndex_SearchBackwardIndex) {
  auto lane = hdmap_.GetLaneById(hdmap::MakeMapId('9_1_-2'));
  LaneWaypoint waypoint(lane, 3.0);
  auto result = pnc_map_->SearchForwardWaypointIndex(0, waypoint);
  EXPECT_EQ(11, result);
  result = pnc_map_->SearchBackwardWaypointIndex(0, waypoint);
  EXPECT_EQ(-1, result);
  result = pnc_map_->SearchForwardWaypointIndex(11, waypoint);
  EXPECT_EQ(11, result);
  result = pnc_map_->SearchBackwardWaypointIndex(11, waypoint);
  EXPECT_EQ(11, result);
  result = pnc_map_->SearchForwardWaypointIndex(12, waypoint);
  EXPECT_EQ(18, result);
  result = pnc_map_->SearchBackwardWaypointIndex(12, waypoint);
  EXPECT_EQ(11, result);
  result = pnc_map_->SearchForwardWaypointIndex(10, waypoint);
  EXPECT_EQ(11, result);
  result = pnc_map_->SearchBackwardWaypointIndex(10, waypoint);
  EXPECT_EQ(-1, result);
}
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
    namespace apollo {
namespace planning {
    }
    }
    
      const double init_derivative = 0.1;
  constraint.AddSecondDerivativeBoundary(init_derivative, index_list,
                                         lower_bound, upper_bound);
  const auto mat = constraint.inequality_constraint_matrix();
  const auto bd = constraint.inequality_constraint_boundary();