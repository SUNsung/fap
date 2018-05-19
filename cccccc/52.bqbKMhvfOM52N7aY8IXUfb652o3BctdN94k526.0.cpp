
        
        #endif  // ATOM_BROWSER_UI_VIEWS_WIN_FRAME_VIEW_H_

    
    #include 'atom/browser/unresponsive_suppressor.h'
    
    #endif  // ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_

    
      // Called immediately after a window is removed from the list.
  virtual void OnWindowRemoved(NativeWindow* window) {}
    
    namespace atom {
    }
    
      // ppapi::host::ResourceMessageFilter implementation.
  scoped_refptr<base::TaskRunner> OverrideTaskRunnerForMessage(
      const IPC::Message& msg) override;
  int32_t OnResourceMessageReceived(
      const IPC::Message& msg,
      ppapi::host::HostMessageContext* context) override;
    
    void TtsPlatformImpl::clear_error() {
  error_ = std::string();
}
    
      class MatchGroundTruth : public QuickTest ,
      public ::testing::WithParamInterface<const char*> {
  };
  
  TEST_P(MatchGroundTruth, FastPhototestOCR) {
    OCRTester(TESTING_DIR '/phototest.tif',
              TESTING_DIR '/phototest.txt',
              TESSDATA_DIR '_fast', GetParam());
  }
  
  INSTANTIATE_TEST_CASE_P( EngLatinDevaArabLang, MatchGroundTruth, 
                        ::testing::Values('eng', 'script/Latin', 'script/Devanagari', 'script/Arabic') );
    
    #endif  // ANDROID_BUILD

    
    void EquationDetect::ExpandSeedHorizontal(
    const bool search_left,
    ColPartition* seed,
    GenericVector<ColPartition*>* parts_to_merge) {
  ASSERT_HOST(seed != nullptr && parts_to_merge != nullptr);
  const float kYOverlapTh = 0.6;
  const int kXGapTh = static_cast<int>(roundf(0.2 * resolution_));
    }
    
      // Estimate the line spacing between two text partitions. Returns -1 if not
  // enough data.
  int EstimateTextPartLineSpacing();
    
      uint16_t fid = unpackFunctionId(msg);
  assert(fid == 1);
    
    template<typename To, typename From> To convert(From f) {
  return static_cast<To>(f);
}
    
    
    {    std::shared_ptr<store_type> _store;
  };
    
    
  // NOTE: this function needs to be thread safe
  std::shared_ptr<context_type> createContext(
    const DataChannelGloo::Group& group,
    const std::string& prefix
  ) {
    /**
     * We currently only supports a single Infiniband interface. In other words,
     * if there are multiple Infiniband devices in the system, Gloo will detect
     * all of them and use the first device.
     *
     * TODO: This can be extended later to utilize multiple Infiniband devices
     *
     * For ethernet, _deviceList[0] will always have the default ethernet
     * device that is detected from the user's provided IP address and there
     * won't be multiple one device in _deviceList
     *
     * For Infiniband, _deviceList[0], which is the first found IB interfance,
     * will be used by all Gloo operations.
     */
    size_t curDevice = 0;
    auto context = std::make_shared<context_type>(
        group.mustGetGroupRank(_rank), group.size());
    prefix_store_type prefix_store(prefix, *group._store);
    context->connectFullMesh(prefix_store, _deviceList[curDevice]);
    return context;
  }
    
      int timeout = -1;
  std::vector<int> to_add;
  std::vector<int> to_remove;
  for (;;) {
    int nevents;
    if (client_sessions.size() == 0)
      timeout = SHUTDOWN_TIMEOUT;
    SYSCHECK(nevents = poll(pollfds.data(), pollfds.size(), timeout));
    timeout = -1;
    if (nevents == 0 && client_sessions.size() == 0)
      break;
    }
    
    using THDGeneratorPtrTypes = map_to_ptr<std::add_const, THDGeneratorTypes>::type;
using THDTensorPtrTypes = map_to_ptr<std::add_const, THDTensorTypes>::type;
using THDStoragePtrTypes = map_to_ptr<std::add_const, THDStorageTypes>::type;
    
    
    {
    {  c.reset();
}
}

    
    class TLSConfigPlugin;
    
    TEST_F(PermissionsTests, test_multi_thread_permissions) {
  if (getuid() != 0) {
    LOG(WARNING) << 'Not root, skipping multi-thread deprivilege testing';
    return;
  }
    }
    
    #ifdef WIN32
  DWORD code = 0;
  DWORD ret = 0;
    
    class StatusTests : public testing::Test {};
    
      Status removeRange(const std::string& domain,
                     const std::string& low,
                     const std::string& high) override;
    
    
    
    
    
    
    
    	b2Body* m_groundBody;
	b2AABB m_worldAABB;
	ContactPoint m_points[k_maxContactPoints];
	int32 m_pointCount;
	DestructionListener m_destructionListener;
	GLESDebugDraw m_debugDraw;
	int32 m_textLine;
	b2World* m_world;
	b2Body* m_bomb;
	b2MouseJoint* m_mouseJoint;
	b2Vec2 m_bombSpawnPoint;
	bool m_bombSpawning;
	b2Vec2 m_mouseWorld;
	int32 m_stepCount;
    
    		// Car
		{
			b2PolygonShape chassis;
			b2Vec2 vertices[8];
			vertices[0].Set(-1.5f, -0.5f);
			vertices[1].Set(1.5f, -0.5f);
			vertices[2].Set(1.5f, 0.0f);
			vertices[3].Set(0.0f, 0.9f);
			vertices[4].Set(-1.15f, 0.9f);
			vertices[5].Set(-1.5f, 0.2f);
			chassis.Set(vertices, 6);
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    IMGUI_API bool        ImGui_ImplSdlGL2_Init(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL2_NewFrame(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_RenderDrawData(ImDrawData* draw_data);
IMGUI_API bool        ImGui_ImplSdlGL2_ProcessEvent(SDL_Event* event);
    
            D3D12_TEXTURE_COPY_LOCATION srcLocation = {};
        srcLocation.pResource = uploadBuffer;
        srcLocation.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
        srcLocation.PlacedFootprint.Footprint.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        srcLocation.PlacedFootprint.Footprint.Width = width;
        srcLocation.PlacedFootprint.Footprint.Height = height;
        srcLocation.PlacedFootprint.Footprint.Depth = 1;
        srcLocation.PlacedFootprint.Footprint.RowPitch = uploadPitch;
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-03-20: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors flag + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-02-20: Inputs: Added support for mouse cursors (ImGui::GetMouseCursor() value and WM_SETCURSOR message handling).
//  2018-02-20: Inputs: Renamed GLFW callbacks exposed in .h to not include Vulkan in their name.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback, ImGui_ImplGlfwVulkan_Render() calls ImGui_ImplGlfwVulkan_RenderDrawData() itself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-18: Inputs: Added mapping for ImGuiKey_Insert.
//  2017-08-25: Inputs: MousePos set to -FLT_MAX,-FLT_MAX when mouse is unavailable/missing (instead of -1,-1).
//  2017-05-15: Vulkan: Fix scissor offset being negative. Fix new Vulkan validation warnings. Set required depth member for buffer image copy.
//  2016-11-13: Vulkan: Fix validation layer warnings and errors and redeclare gl_PerVertex.
//  2016-10-18: Vulkan: Add location decorators & change to use structs as in/out in glsl, update embedded spv (produced with glslangValidator -x). Null the released resources.
//  2016-10-15: Misc: Added a void* user_data parameter to Clipboard function handlers.
//  2016-08-27: Vulkan: Fix Vulkan example for use when a depth buffer is active.
    
        UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D10_CREATE_DEVICE_DEBUG;
    if (D3D10CreateDeviceAndSwapChain(NULL, D3D10_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, D3D10_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice) != S_OK)
        return E_FAIL;
    
    
    {        // Handle loss of D3D9 device
        if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
        {
            ImGui_ImplDX9_InvalidateDeviceObjects();
            g_pd3dDevice->Reset(&g_d3dpp);
            ImGui_ImplDX9_CreateDeviceObjects();
        }
    }
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        }
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);