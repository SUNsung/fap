
        
        #include <memory>
    
    namespace grpc {
namespace testing {
    }
    }
    
    #include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include 'route_guide.grpc.pb.h'
    
    
    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
    #endif  // GRPC_TEST_CPP_UTIL_SUBPROCESS_H

    
    using namespace std;
using namespace thd;
using namespace thd::rpc;
    
    template<> bool overflows<Half, double>(double f);
template<> bool overflows<Half, int64_t>(int64_t f);
    
      struct Group : DataChannel::Group {
    Group(const std::string& addr, port_type port,
              std::vector<rank_type> ranks, rank_type max_rank,
              int store_socket);
    }
    
      Tensor dInput = at::zeros_like(input);
  for (int k = 0; k < kw; k++) {
    int iShift = std::max(0, k - real_pad);
    int oShift = std::max(0, real_pad - k);
    int t = std::min(ilen + real_pad - k, olen) - oShift;
    // dOutput * T(weight) -> dInput
    if (t > 0) {
      auto dO = dOutput.narrow(0, oShift, t).view({t * batchSize, outputPlanes});
      auto dI = dInput.narrow(0, iShift, t).view({t * batchSize, inputPlanes});
      dI.addmm_(dO, weight[k].t());
    }
  }
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHShortTensor(THShortTensor *tensor) {
  return at::getType(at::Backend::CPU, at::ScalarType::Short).unsafeTensorFromTH((void*)tensor, true);
}
    
    // use this setting to scale the interface - e.g. on device you could use 2 or 3 scale factor
static ImVec2       g_RenderScale = ImVec2(1.0f,1.0f);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
    
        // Count glyphs/ranges, initialize font
    int total_glyphs_count = 0;
    int total_ranges_count = 0;
    for (int input_i = 0; input_i < atlas->ConfigData.Size; input_i++) 
    {
        ImFontConfig& cfg = atlas->ConfigData[input_i];
        FreeTypeFont& font_face = fonts[input_i];
        IM_ASSERT(cfg.DstFont && (!cfg.DstFont->IsLoaded() || cfg.DstFont->ContainerAtlas == atlas));
    }
    
    bool    ImGui_ImplDX11_CreateDeviceObjects()
{
    if (!g_pd3dDevice)
        return false;
    if (g_pFontSampler)
        ImGui_ImplDX11_InvalidateDeviceObjects();
    }
    
    bool    ImGui_ImplDX12_Init(void* hwnd, int num_frames_in_flight,
                            ID3D12Device* device,
                            DXGI_FORMAT rtv_format,
                            D3D12_CPU_DESCRIPTOR_HANDLE font_srv_cpu_desc_handle,
                            D3D12_GPU_DESCRIPTOR_HANDLE font_srv_gpu_desc_handle)
{
    g_hWnd = (HWND)hwnd;
    g_pd3dDevice = device;
    g_RTVFormat = rtv_format;
    g_hFontSrvCpuDescHandle = font_srv_cpu_desc_handle;
    g_hFontSrvGpuDescHandle = font_srv_gpu_desc_handle;
    g_pFrameResources = new FrameResources [num_frames_in_flight];
    g_numFramesInFlight = num_frames_in_flight;
    g_frameIndex = UINT_MAX;
    }
    
        // Set OS mouse position if requested (only used when ImGuiConfigFlags_NavEnableSetMousePos is enabled by user)
    if (io.WantSetMousePos)
    {
        POINT pos = { (int)io.MousePos.x, (int)io.MousePos.y };
        ClientToScreen(g_hWnd, &pos);
        SetCursorPos(pos.x, pos.y);
    }
    
    //---- Don't define obsolete functions/enums names. Consider enabling from time to time after updating to avoid using soon-to-be obsolete function/names
//#define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    #include <vector>
#include <string>
    
    class CoreServiceBase: public ServiceBase {
  protected:
    CoreServiceBase(const char* _servicename);
    virtual ~CoreServiceBase();
    }
    
    #ifndef __PublicComponent__testspy__
#define __PublicComponent__testspy__
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.