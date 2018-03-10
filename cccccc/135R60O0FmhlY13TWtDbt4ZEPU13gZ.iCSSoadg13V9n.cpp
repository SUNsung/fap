
        
        bool js_cocos2dx_builder_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBReader(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readSoundKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_addOwnerCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_readCallbackKeyframesForSeq(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_setResolutionScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);
    
    bool js_cocos2dx_studio_PositionFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_PositionFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_PositionFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_PositionFrame_getX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_getY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_setX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_setY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_PositionFrame_PositionFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
        return 0;
}
int lua_cocos2dx_cocosdenshion_SimpleAudioEngine_willPlayBackgroundMusic(lua_State* tolua_S)
{
    int argc = 0;
    CocosDenshion::SimpleAudioEngine* cobj = nullptr;
    bool ok  = true;
    
    
    
    
    
    
    
    			b2FixtureDef sd2;
			sd2.shape = &poly2;
			sd2.density = 2.0f;
    
    //---- Include imgui_user.h at the end of imgui.h as a convenience
//#define IMGUI_INCLUDE_IMGUI_USER_H
    
    void DebugHUD_InitDefaults( DebugHUD *hud )
{
    hud->show_demo_window = true;
    hud->show_another_window = true;
    hud->rotation_speed = 15.0f;
    
    hud->cubeColor1[0] = 0.4f;
    hud->cubeColor1[1] = 0.4f;
    hud->cubeColor1[2] = 1.0f;
    hud->cubeColor1[3] = 1.0f;
    
    hud->cubeColor2[0] = 1.0f;
    hud->cubeColor2[1] = 0.4f;
    hud->cubeColor2[2] = 0.4f;
    hud->cubeColor2[3] = 1.0f;
    
    hud->clearColor[0] = 0.45f;
    hud->clearColor[1] = 0.55f;
    hud->clearColor[2] = 0.60f;
    hud->clearColor[3] = 1.00f;
}
    
        // Create custom vertex declaration.
    // Unfortunately Allegro doesn't support 32-bits packed colors so we have to convert them to 4 floats.
    // We still use a custom declaration to use 'ALLEGRO_PRIM_TEX_COORD' instead of 'ALLEGRO_PRIM_TEX_COORD_PIXEL' else we can't do a reliable conversion.
    ALLEGRO_VERTEX_ELEMENT elems[] =
    {
        { ALLEGRO_PRIM_POSITION, ALLEGRO_PRIM_FLOAT_2, IM_OFFSETOF(ImDrawVertAllegro, pos) },
        { ALLEGRO_PRIM_TEX_COORD, ALLEGRO_PRIM_FLOAT_2, IM_OFFSETOF(ImDrawVertAllegro, uv) },
        { ALLEGRO_PRIM_COLOR_ATTR, 0, IM_OFFSETOF(ImDrawVertAllegro, col) },
        { 0, 0, 0 }
    };
    g_VertexDecl = al_create_vertex_decl(elems, sizeof(ImDrawVertAllegro));
    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL2_CreateDeviceObjects();
    
                ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our windows open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        for (UINT i = 0; i < NUM_FRAMES_IN_FLIGHT; i++)
        if (g_pd3dDevice->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&g_frameContext[i].CommandAllocator)) != S_OK)
            return E_FAIL;
    
            // first check if only one format, VK_FORMAT_UNDEFINED, is available, which would imply that any format is available
        if (count == 1)
        {
            if( formats[0].format == VK_FORMAT_UNDEFINED )
            {
                g_SurfaceFormat.format = VK_FORMAT_B8G8R8A8_UNORM;
                g_SurfaceFormat.colorSpace = VK_COLORSPACE_SRGB_NONLINEAR_KHR;
            }
            else
            {   // no point in searching another format
                g_SurfaceFormat = formats[0];
            }
        }
        else
        {
            // request several formats, the first found will be used 
            VkFormat requestSurfaceImageFormat[] = {VK_FORMAT_B8G8R8A8_UNORM, VK_FORMAT_R8G8B8A8_UNORM, VK_FORMAT_B8G8R8_UNORM, VK_FORMAT_R8G8B8_UNORM};
            VkColorSpaceKHR requestSurfaceColorSpace = VK_COLORSPACE_SRGB_NONLINEAR_KHR;
            bool requestedFound = false;
            for (size_t i = 0; i < sizeof(requestSurfaceImageFormat) / sizeof(requestSurfaceImageFormat[0]); i++)
            {
                if( requestedFound ) {
                    break;
                }
                for (uint32_t j = 0; j < count; j++)
                {
                    if (formats[j].format == requestSurfaceImageFormat[i] && formats[j].colorSpace == requestSurfaceColorSpace)
                    {
                        g_SurfaceFormat = formats[j];
                        requestedFound = true;
                    }
                }
            }
    }
    
    
    {    // At this point note that we set ImGui::GetIO().Fonts->TexID to be == g_FontTexture, so clear both.
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(g_FontTexture == io.Fonts->TexID);
    if (g_FontTexture)
        g_FontTexture->Release();
    g_FontTexture = NULL;
    io.Fonts->TexID = NULL;
}
    
        // Render command lists
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawVert* vtx_buffer = cmd_list->VtxBuffer.Data;
        const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;
        glVertexPointer(2, GL_FLOAT, sizeof(ImDrawVert), (const GLvoid*)((const char*)vtx_buffer + IM_OFFSETOF(ImDrawVert, pos)));
        glTexCoordPointer(2, GL_FLOAT, sizeof(ImDrawVert), (const GLvoid*)((const char*)vtx_buffer + IM_OFFSETOF(ImDrawVert, uv)));
        glColorPointer(4, GL_UNSIGNED_BYTE, sizeof(ImDrawVert), (const GLvoid*)((const char*)vtx_buffer + IM_OFFSETOF(ImDrawVert, col)));
    }
    
        if (install_callbacks)
        ImGui_ImplGlfw_InstallCallbacks(window);
    
    namespace grpc_go_generator {
    }
    
    namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc
    
    // This function implements the server thread.
void RunServer() {
  auto server_address = '0.0.0.0:50051';
  // Callback interface we implemented above.
  ServiceImpl service;
  grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
    }
    
    extern void GenComment(const std::vector<std::string> &dc,
                       std::string *code_ptr, const CommentConfig *config,
                       const char *prefix = '');