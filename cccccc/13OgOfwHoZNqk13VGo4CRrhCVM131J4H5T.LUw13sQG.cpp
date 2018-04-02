
        
        bool js_cocos2dx_physics3d_Physics3DConstraint_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DConstraint_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DConstraint(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DConstraint_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setBreakingImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBreakingImpulse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBodyA(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_isEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getOverrideNumSolverIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getBodyB(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setOverrideNumSolverIterations(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getConstraintType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_setUserData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DConstraint_getbtContraint(JSContext *cx, uint32_t argc, jsval *vp);
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    
    
    			b2EdgeShape shape;
			shape.Set(b2Vec2(-20.0f, 0.0f), b2Vec2(20.0f, 0.0f));
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        void* This() const {return m_this;}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
#define DEFINE_HAS_MEMBER_WITH_TYPE(member_name, member_type) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <member_type (T::*)> struct tester;\
        template <typename U> static yes_type test(tester<&U::member_name>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT
    
    struct ImDrawVertAllegro
{
    ImVec2 pos;
    ImVec2 uv;
    ALLEGRO_COLOR col;
};
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX9_CreateDeviceObjects();
    
        // Setup display size (every frame to accommodate for window resizing)
    int w = IwGxGetScreenWidth(), h = IwGxGetScreenHeight();
    io.DisplaySize = ImVec2((float)w, (float)h);
     // For retina display or other situations where window coordinates are different from framebuffer coordinates. User storage only, presently not used by ImGui.
    io.DisplayFramebufferScale = g_scale;
    
        // Create texture
    atlas->TexHeight = (atlas->Flags & ImFontAtlasFlags_NoPowerOfTwoHeight) ? (atlas->TexHeight + 1) : ImUpperPowerOfTwo(atlas->TexHeight);
    atlas->TexUvScale = ImVec2(1.0f / atlas->TexWidth, 1.0f / atlas->TexHeight);
    atlas->TexPixelsAlpha8 = (unsigned char*)ImGui::MemAlloc(atlas->TexWidth * atlas->TexHeight);
    memset(atlas->TexPixelsAlpha8, 0, atlas->TexWidth * atlas->TexHeight);
    
    int main(int, char**)
{
    // Setup window
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;
    GLFWwindow* window = glfwCreateWindow(1280, 720, 'ImGui GLFW+OpenGL2 example', NULL, NULL);
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync
    }
    
    static int                      fb_width = 0, fb_height = 0;
static bool                     g_ResizeWanted = false;
static int                      g_ResizeWidth = 0, g_ResizeHeight = 0;
static uint32_t                 g_BackbufferIndices[IMGUI_VK_QUEUED_FRAMES];    // keep track of recently rendered swapchain frame indices
static uint32_t                 g_BackBufferCount = 0;
static VkImage                  g_BackBuffer[IMGUI_MAX_POSSIBLE_BACK_BUFFERS] = {};
static VkImageView              g_BackBufferView[IMGUI_MAX_POSSIBLE_BACK_BUFFERS] = {};
static VkFramebuffer            g_Framebuffer[IMGUI_MAX_POSSIBLE_BACK_BUFFERS] = {};
    
    void ImDrawList::PrimQuadUV(const ImVec2& a, const ImVec2& b, const ImVec2& c, const ImVec2& d, const ImVec2& uv_a, const ImVec2& uv_b, const ImVec2& uv_c, const ImVec2& uv_d, ImU32 col)
{
    ImDrawIdx idx = (ImDrawIdx)_VtxCurrentIdx;
    _IdxWritePtr[0] = idx; _IdxWritePtr[1] = (ImDrawIdx)(idx+1); _IdxWritePtr[2] = (ImDrawIdx)(idx+2);
    _IdxWritePtr[3] = idx; _IdxWritePtr[4] = (ImDrawIdx)(idx+2); _IdxWritePtr[5] = (ImDrawIdx)(idx+3);
    _VtxWritePtr[0].pos = a; _VtxWritePtr[0].uv = uv_a; _VtxWritePtr[0].col = col;
    _VtxWritePtr[1].pos = b; _VtxWritePtr[1].uv = uv_b; _VtxWritePtr[1].col = col;
    _VtxWritePtr[2].pos = c; _VtxWritePtr[2].uv = uv_c; _VtxWritePtr[2].col = col;
    _VtxWritePtr[3].pos = d; _VtxWritePtr[3].uv = uv_d; _VtxWritePtr[3].col = col;
    _VtxWritePtr += 4;
    _VtxCurrentIdx += 4;
    _IdxWritePtr += 6;
}
    
    
    {    // Restore modified state
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    glBindTexture(GL_TEXTURE_2D, (GLuint)last_texture);
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glPopAttrib();
    glPolygonMode(GL_FRONT, (GLenum)last_polygon_mode[0]); glPolygonMode(GL_BACK, (GLenum)last_polygon_mode[1]);
    glViewport(last_viewport[0], last_viewport[1], (GLsizei)last_viewport[2], (GLsizei)last_viewport[3]);
    glScissor(last_scissor_box[0], last_scissor_box[1], (GLsizei)last_scissor_box[2], (GLsizei)last_scissor_box[3]);
}
    
        // Update OS/hardware mouse cursor if imgui isn't drawing a software cursor
    if ((io.ConfigFlags & ImGuiConfigFlags_NoSetMouseCursor) == 0 && glfwGetInputMode(g_Window, GLFW_CURSOR) != GLFW_CURSOR_DISABLED)
    {
        ImGuiMouseCursor cursor = ImGui::GetMouseCursor();
        if (io.MouseDrawCursor || cursor == ImGuiMouseCursor_None)
        {
            glfwSetInputMode(g_Window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);
        }
        else
        {
            glfwSetCursor(g_Window, g_MouseCursors[cursor] ? g_MouseCursors[cursor] : g_MouseCursors[ImGuiMouseCursor_Arrow]);
            glfwSetInputMode(g_Window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
        }
    }