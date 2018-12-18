
        
            // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
    bool ImGui::InputText(const char* label, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
            // Rendering
        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
        // Decide GL+GLSL versions
#if __APPLE__
    // GL 3.2 Core + GLSL 150
    const char* glsl_version = '#version 150';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG); // Always required on Mac
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = '#version 130';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
#endif
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
        // Create an invisible mouse cursor
    // Because al_hide_mouse_cursor() seems to mess up with the actual inputs..
    ALLEGRO_BITMAP* mouse_cursor = al_create_bitmap(8,8);
    g_MouseCursorInvisible = al_create_mouse_cursor(mouse_cursor, 0, 0);
    al_destroy_bitmap(mouse_cursor);
    
    
    {  EsdCanClient esd_can_client;
  EXPECT_TRUE(esd_can_client.Init(param));
  EXPECT_EQ(esd_can_client.Start(), ErrorCode::CAN_CLIENT_ERROR_BASE);
  std::vector<CanFrame> frames;
  int32_t num = 0;
  EXPECT_EQ(esd_can_client.Send(frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  EXPECT_EQ(esd_can_client.Receive(&frames, &num),
            ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED);
  CanFrame can_frame;
  frames.push_back(can_frame);
  EXPECT_EQ(esd_can_client.SendSingleFrame(frames),
            ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED);
  esd_can_client.Stop();
}
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    TEST(ByteTest, SetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  value.set_value(0x06, 3, 3);
  EXPECT_EQ(0x32, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 8);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 10);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 1, 7);
  EXPECT_EQ(0x0C, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, 1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, -1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
}
    
    ObjectQualityInfo60C::ObjectQualityInfo60C() {}
const uint32_t ObjectQualityInfo60C::ID = 0x60C;
    
    
    {
    {        sub_node = sub_node->NextSiblingElement('objectReference');
      }
    }
    
    
    {  pnc_map_->adc_waypoint_.s = 60;
  pnc_map_->UpdateNextRoutingWaypointIndex(14);
  EXPECT_EQ(2, pnc_map_->next_routing_waypoint_index_);
}
    
    TEST_F(RouteSegmentsTest, Shrink) {
  auto lane1 = hdmap_.GetLaneById(hdmap::MakeMapId('9_1_-1'));
  auto lane2 = hdmap_.GetLaneById(hdmap::MakeMapId('13_1_-1'));
  {
    RouteSegments seg;
    seg.emplace_back(lane1, 10, 20);
    seg.emplace_back(lane2, 15, 20);
    seg.emplace_back(lane2, 20, 30);
    auto point = lane2->GetSmoothPoint(15.0);
    EXPECT_TRUE(seg.Shrink({point.x(), point.y()}, 5, 10));
    EXPECT_EQ(3, seg.size());
    EXPECT_EQ(lane1, seg[0].lane);
    EXPECT_FLOAT_EQ(15, seg[0].start_s);
    EXPECT_FLOAT_EQ(20, seg[0].end_s);
    EXPECT_EQ(lane2, seg[1].lane);
    EXPECT_FLOAT_EQ(15, seg[1].start_s);
    EXPECT_FLOAT_EQ(20, seg[1].end_s);
    EXPECT_FLOAT_EQ(20, seg[2].start_s);
    EXPECT_FLOAT_EQ(25, seg[2].end_s);
  }
  {
    RouteSegments seg;
    seg.emplace_back(lane1, 10, 20);
    seg.emplace_back(lane2, 15, 20);
    seg.emplace_back(lane2, 20, 30);
    auto point = lane2->GetSmoothPoint(15.0);
    EXPECT_TRUE(seg.Shrink({point.x(), point.y()}, 50, 10));
    EXPECT_EQ(3, seg.size());
    EXPECT_EQ(lane1, seg[0].lane);
    EXPECT_FLOAT_EQ(10, seg[0].start_s);
    EXPECT_FLOAT_EQ(20, seg[0].end_s);
    EXPECT_EQ(lane2, seg[1].lane);
    EXPECT_FLOAT_EQ(15, seg[1].start_s);
    EXPECT_FLOAT_EQ(20, seg[1].end_s);
    EXPECT_EQ(lane2, seg[2].lane);
    EXPECT_FLOAT_EQ(20, seg[2].start_s);
    EXPECT_FLOAT_EQ(25, seg[2].end_s);
  }
  {
    RouteSegments seg;
    seg.emplace_back(lane1, 10, 20);
    seg.emplace_back(lane2, 15, 20);
    seg.emplace_back(lane2, 20, 30);
    auto point = lane2->GetSmoothPoint(15.0);
    EXPECT_TRUE(seg.Shrink({point.x(), point.y()}, -5, 50));
    EXPECT_EQ(1, seg.size());
    EXPECT_EQ(lane2, seg[0].lane);
    EXPECT_FLOAT_EQ(20, seg[0].start_s);
    EXPECT_FLOAT_EQ(30, seg[0].end_s);
  }
  {
    RouteSegments seg;
    seg.emplace_back(lane2, 10, 30);
    auto point = lane2->GetSmoothPoint(20.0);
    EXPECT_TRUE(seg.Shrink({point.x(), point.y()}, 5, 5));
    EXPECT_EQ(1, seg.size());
    EXPECT_EQ(lane2, seg[0].lane);
    EXPECT_FLOAT_EQ(15, seg[0].start_s);
    EXPECT_FLOAT_EQ(25, seg[0].end_s);
  }
}
    
    #include 'modules/planning/common/speed/st_point.h'
    
    #include <algorithm>
    
    #include 'modules/planning/math/smoothing_spline/spline_2d.h'