
        
        Base::~Base() {
}
    
    class EventListener : public Base {
  std::map<int, BaseEvent*> listerners_;
    }
    
    namespace nwapi {
    }
    
    bool MenuItem::CanHandleAccelerators() const {
  return enable_shortcut_ && is_enabled_;
}
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
     protected:
  ResponseAction Run() override;
  ~NwObjCallObjectMethodAsyncFunction() override;
    
    namespace extensions {
    }
    
        if (!g_DescriptorSetLayout)
    {
        VkSampler sampler[1] = {g_FontSampler};
        VkDescriptorSetLayoutBinding binding[1] = {};
        binding[0].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        binding[0].descriptorCount = 1;
        binding[0].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
        binding[0].pImmutableSamplers = sampler;
        VkDescriptorSetLayoutCreateInfo info = {};
        info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
        info.bindingCount = 1;
        info.pBindings = binding;
        err = vkCreateDescriptorSetLayout(v->Device, &info, v->Allocator, &g_DescriptorSetLayout);
        check_vk_result(err);
    }
    
        // You can set those flags on a per font basis in ImFontConfig::RasterizerFlags.
    // Use the 'extra_flags' parameter of BuildFontAtlas() to force a flag on all your fonts.
    enum RasterizerFlags
    {
        // By default, hinting is enabled and the font's native hinter is preferred over the auto-hinter.
        NoHinting       = 1 << 0,   // Disable hinting. This generally generates 'blurrier' bitmap glyphs when the glyph are rendered in any of the anti-aliased modes.
        NoAutoHint      = 1 << 1,   // Disable auto-hinter.
        ForceAutoHint   = 1 << 2,   // Indicates that the auto-hinter is preferred over the font's native hinter.
        LightHinting    = 1 << 3,   // A lighter hinting algorithm for gray-level modes. Many generated glyphs are fuzzier but better resemble their original shape. This is achieved by snapping glyphs to the pixel grid only vertically (Y-axis), as is done by Microsoft's ClearType and Adobe's proprietary font renderer. This preserves inter-glyph spacing in horizontal text.
        MonoHinting     = 1 << 4,   // Strong hinting algorithm that should only be used for monochrome output.
        Bold            = 1 << 5,   // Styling: Should we artificially embolden the font?
        Oblique         = 1 << 6    // Styling: Should we slant the font, emulating italic style?
    };
    
        // Main loop
    bool running = true;
    while (running)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplAllegro5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplAllegro5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                ImGui_ImplAllegro5_CreateDeviceObjects();
            }
        }
    }
    
    // Build with, e.g:
//   # cl.exe binary_to_compressed_c.cpp
//   # gcc binary_to_compressed_c.cpp
// You can also find a precompiled Windows binary in the binary/demo package available from https://github.com/ocornut/imgui
    
        // Setup orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPos (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right).
    // Being agnostic of whether <d3dx9.h> or <DirectXMath.h> can be used, we aren't relying on D3DXMatrixIdentity()/D3DXMatrixOrthoOffCenterLH() or DirectX::XMMatrixIdentity()/DirectX::XMMatrixOrthographicOffCenterLH()
    {
        float L = draw_data->DisplayPos.x + 0.5f;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x + 0.5f;
        float T = draw_data->DisplayPos.y + 0.5f;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y + 0.5f;
        D3DMATRIX mat_identity = { { { 1.0f, 0.0f, 0.0f, 0.0f,  0.0f, 1.0f, 0.0f, 0.0f,  0.0f, 0.0f, 1.0f, 0.0f,  0.0f, 0.0f, 0.0f, 1.0f } } };
        D3DMATRIX mat_projection =
        { { {
            2.0f/(R-L),   0.0f,         0.0f,  0.0f,
            0.0f,         2.0f/(T-B),   0.0f,  0.0f,
            0.0f,         0.0f,         0.5f,  0.0f,
            (L+R)/(L-R),  (T+B)/(B-T),  0.5f,  1.0f
        } } };
        g_pd3dDevice->SetTransform(D3DTS_WORLD, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_VIEW, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_PROJECTION, &mat_projection);
    }
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-11-30: Platform: Added touchscreen support.
//  2018-11-30: Misc: Setting up io.BackendPlatformName/io.BackendRendererName so they can be displayed in the About Window.
//  2018-06-13: Platform: Added clipboard support (from Allegro 5.1.12).
//  2018-06-13: Renderer: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-06-13: Renderer: Backup/restore transform and clipping rectangle.
//  2018-06-11: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors flag + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-04-18: Misc: Renamed file from imgui_impl_a5.cpp to imgui_impl_allegro5.cpp.
//  2018-04-18: Misc: Added support for 32-bits vertex indices to avoid conversion at runtime. Added imconfig_allegro5.h to enforce 32-bit indices when included from imgui.h.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplAllegro5_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.