
        
        #endif

    
    using namespace swift;
using namespace swift::syntax;
    
      /// Build an Objective-C method descriptor for the given setter method.
  void emitObjCSetterDescriptor(IRGenModule &IGM,
                                ConstantArrayBuilder &descriptors,
                                AbstractStorageDecl *storage);
    
    
    {  static bool classof(const MarkupASTNode *N) {
    return N->getKind() >= ASTNodeKind::First_Private &&
      N->getKind() <= ASTNodeKind::Last_Private;
  }
};
    
    /// Create a canonicalized substitution list from subs.
/// subs is the substitution list to be canonicalized.
/// canSubs is an out-parameter, which is used to store the results in case
/// the list of substitutions was not canonical.
/// The function returns a list of canonicalized substitutions.
/// If the substitution list subs was canonical already, it will be returned and
/// canSubs out-parameter will be empty.
/// If something had to be canonicalized, then the canSubs out-parameter will be
/// populated and the returned SubstitutionList would refer to canSubs storage.
SubstitutionList
getCanonicalSubstitutionList(SubstitutionList subs,
                             SmallVectorImpl<Substitution> &canSubs);
    
      friend class llvm::PointerLikeTypeTraits<ConcreteDeclRef>;
    
      // Calculate E^2
  if (E2 >= 0) {
    double E = sqrt(E2);
    double E_2 = 0.5 * E;
    if (nb_real_roots == 0) {
      x0 = - R_2 + E_2 - b_4;
      x1 = x0 - E;
      nb_real_roots = 2;
    }
    else {
      x2 = - R_2 + E_2 - b_4;
      x3 = x2 - E;
      nb_real_roots = 4;
    }
  }
    
    //! @cond IGNORED
    
    CV_EXPORTS_W void compare(InputArray src1, Scalar src2, OutputArray dst, int cmpop);
    
        Ptr<MatAllocator>& a = allocators[flag];
    
        // Extension: 2.0
    PFNBLENDEQUATIONSEPARATEPROC BlendEquationSeparate;
    PFNDRAWBUFFERSPROC DrawBuffers;
    PFNSTENCILOPSEPARATEPROC StencilOpSeparate;
    PFNSTENCILFUNCSEPARATEPROC StencilFuncSeparate;
    PFNSTENCILMASKSEPARATEPROC StencilMaskSeparate;
    PFNATTACHSHADERPROC AttachShader;
    PFNBINDATTRIBLOCATIONPROC BindAttribLocation;
    PFNCOMPILESHADERPROC CompileShader;
    PFNCREATEPROGRAMPROC CreateProgram;
    PFNCREATESHADERPROC CreateShader;
    PFNDELETEPROGRAMPROC DeleteProgram;
    PFNDELETESHADERPROC DeleteShader;
    PFNDETACHSHADERPROC DetachShader;
    PFNDISABLEVERTEXATTRIBARRAYPROC DisableVertexAttribArray;
    PFNENABLEVERTEXATTRIBARRAYPROC EnableVertexAttribArray;
    PFNGETACTIVEATTRIBPROC GetActiveAttrib;
    PFNGETACTIVEUNIFORMPROC GetActiveUniform;
    PFNGETATTACHEDSHADERSPROC GetAttachedShaders;
    PFNGETATTRIBLOCATIONPROC GetAttribLocation;
    PFNGETPROGRAMIVPROC GetProgramiv;
    PFNGETPROGRAMINFOLOGPROC GetProgramInfoLog;
    PFNGETSHADERIVPROC GetShaderiv;
    PFNGETSHADERINFOLOGPROC GetShaderInfoLog;
    PFNGETSHADERSOURCEPROC GetShaderSource;
    PFNGETUNIFORMLOCATIONPROC GetUniformLocation;
    PFNGETUNIFORMFVPROC GetUniformfv;
    PFNGETUNIFORMIVPROC GetUniformiv;
    PFNGETVERTEXATTRIBDVPROC GetVertexAttribdv;
    PFNGETVERTEXATTRIBFVPROC GetVertexAttribfv;
    PFNGETVERTEXATTRIBIVPROC GetVertexAttribiv;
    PFNGETVERTEXATTRIBPOINTERVPROC GetVertexAttribPointerv;
    PFNISPROGRAMPROC IsProgram;
    PFNISSHADERPROC IsShader;
    PFNLINKPROGRAMPROC LinkProgram;
    PFNSHADERSOURCEPROC ShaderSource;
    PFNUSEPROGRAMPROC UseProgram;
    PFNUNIFORM1FPROC Uniform1f;
    PFNUNIFORM2FPROC Uniform2f;
    PFNUNIFORM3FPROC Uniform3f;
    PFNUNIFORM4FPROC Uniform4f;
    PFNUNIFORM1IPROC Uniform1i;
    PFNUNIFORM2IPROC Uniform2i;
    PFNUNIFORM3IPROC Uniform3i;
    PFNUNIFORM4IPROC Uniform4i;
    PFNUNIFORM1FVPROC Uniform1fv;
    PFNUNIFORM2FVPROC Uniform2fv;
    PFNUNIFORM3FVPROC Uniform3fv;
    PFNUNIFORM4FVPROC Uniform4fv;
    PFNUNIFORM1IVPROC Uniform1iv;
    PFNUNIFORM2IVPROC Uniform2iv;
    PFNUNIFORM3IVPROC Uniform3iv;
    PFNUNIFORM4IVPROC Uniform4iv;
    PFNUNIFORMMATRIX2FVPROC UniformMatrix2fv;
    PFNUNIFORMMATRIX3FVPROC UniformMatrix3fv;
    PFNUNIFORMMATRIX4FVPROC UniformMatrix4fv;
    PFNVALIDATEPROGRAMPROC ValidateProgram;
    PFNVERTEXATTRIBPOINTERPROC VertexAttribPointer;
    
    // Record info about the current thread for the debugger client to use
// when listing all threads which are interrupted.
DThreadInfoPtr DebuggerProxy::createThreadInfo(const std::string &desc) {
  TRACE(2, 'DebuggerProxy::createThreadInfo\n');
  DThreadInfoPtr info(new DThreadInfo());
  info->m_id = (int64_t)Process::GetThreadId();
  info->m_desc = desc;
  Transport *transport = g_context->getTransport();
  if (transport) {
    info->m_type = transport->getThreadTypeName();
    info->m_url = transport->getCommand();
  } else {
    info->m_type = getThreadType();
  }
  return info;
}
    
    /*
 * SweepableMember is a Sweepable used as a member of an otherwise nonvirtual
 * class. The member must be named m_sweepable. If T is a derived class, it
 * should only have one m_sweepable member. Anything fancier than that voids
 * your warranty.
 */
template<class T>
struct SweepableMember : Sweepable {
  void sweep() override {
    auto obj = reinterpret_cast<T*>(
      uintptr_t(this) - offsetof(T, m_sweepable)
    );
    obj->sweep();
  };
  void* owner() override {
    return reinterpret_cast<T*>(
      uintptr_t(this) - offsetof(T, m_sweepable)
    );
  }
};
    
    #include 'hphp/util/safe-cast.h'
    
      ServerFactoryRegistry(const ServerFactoryRegistry&) = delete;
  ServerFactoryRegistry& operator=(const ServerFactoryRegistry&) = delete;
    
    #include <cstdint>
#include <vector>
#include <numa.h>
    
    void ThriftBuffer::read(std::string &data) {
  String sdata;
  read(sdata);
  data = std::string(sdata.data(), sdata.size());
}
    
    bool js_cocos2dx_studio_BlendFuncFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_BlendFuncFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_BlendFuncFrame(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_BlendFuncFrame_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BlendFuncFrame_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BlendFuncFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_BlendFuncFrame_BlendFuncFrame(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    struct b2AABB;
    
    
    {	b2Vec2 viewCenter;
	float32 hz;
	int32 velocityIterations;
	int32 positionIterations;
	int32 drawShapes;
	int32 drawJoints;
	int32 drawAABBs;
	int32 drawContactPoints;
	int32 drawContactNormals;
	int32 drawContactImpulse;
	int32 drawFrictionImpulse;
	int32 drawCOMs;
	int32 drawStats;
	int32 drawProfile;
	int32 enableWarmStarting;
	int32 enableContinuous;
	int32 enableSubStepping;
	int32 enableSleep;
	int32 pause;
	int32 singleStep;
};
    
    			b2RevoluteJointDef jd;
			jd.Initialize(ground, body, body->GetPosition());
			jd.lowerAngle = -8.0f * b2_pi / 180.0f;
			jd.upperAngle = 8.0f * b2_pi / 180.0f;
			jd.enableLimit = true;
			m_world->CreateJoint(&jd);
    
    
    {  private:
    std::vector<std::string> vecdump_;
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        template <class var> var* Variable(const char* _key) const
    { return boost::any_cast<var>(m_variablemap.find(_key)->second); }
    
    
    {        // see if our best match qualifies
        if (best < 3) { // fast path literals
            ++q;
        } else if (best > 2  &&  best <= 0x80    &&  dist <= 0x100) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out(0x80 + best-1);
            stb_out(dist-1);
        } else if (best > 5  &&  best <= 0x100   &&  dist <= 0x4000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out2(0x4000 + dist-1);       
            stb_out(best-1);
        } else if (best > 7  &&  best <= 0x100   &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x180000 + dist-1);     
            stb_out(best-1);
        } else if (best > 8  &&  best <= 0x10000 &&  dist <= 0x80000) {
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            stb_out3(0x100000 + dist-1);     
            stb_out2(best-1);
        } else if (best > 9                      &&  dist <= 0x1000000) {
            if (best > 65536) best = 65536;
            outliterals(lit_start, q-lit_start); lit_start = (q += best);
            if (best <= 0x100) {
                stb_out(0x06);
                stb_out3(dist-1);
                stb_out(best-1);
            } else {
                stb_out(0x04);
                stb_out3(dist-1);
                stb_out2(best-1);
            }
        } else {  // fallback literals if no match was a balanced tradeoff
            ++q;
        }
    }
    
    #include 'debug_hud.h'
#include 'imgui.h'
    
        // Create the pixel shader
    {
        static const char* pixelShader =
            'struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            sampler sampler0;\
            Texture2D texture0;\
            \
            float4 main(PS_INPUT input) : SV_Target\
            {\
            float4 out_col = input.col * texture0.Sample(sampler0, input.uv); \
            return out_col; \
            }';
    }
    
    
    {    ImGuiIO& io = ImGui::GetIO();
    switch (msg)
    {
    case WM_LBUTTONDOWN: case WM_LBUTTONDBLCLK:
    case WM_RBUTTONDOWN: case WM_RBUTTONDBLCLK:
    case WM_MBUTTONDOWN: case WM_MBUTTONDBLCLK:
    {
        int button = 0;
        if (msg == WM_LBUTTONDOWN || msg == WM_LBUTTONDBLCLK) button = 0;
        if (msg == WM_RBUTTONDOWN || msg == WM_RBUTTONDBLCLK) button = 1;
        if (msg == WM_MBUTTONDOWN || msg == WM_MBUTTONDBLCLK) button = 2;
        if (!IsAnyMouseButtonDown() && GetCapture() == NULL)
            SetCapture(hwnd);
        io.MouseDown[button] = true;
        return 0;
    }
    case WM_LBUTTONUP:
    case WM_RBUTTONUP:
    case WM_MBUTTONUP:
    {
        int button = 0;
        if (msg == WM_LBUTTONUP) button = 0;
        if (msg == WM_RBUTTONUP) button = 1;
        if (msg == WM_MBUTTONUP) button = 2;
        io.MouseDown[button] = false;
        if (!IsAnyMouseButtonDown() && GetCapture() == hwnd)
            ReleaseCapture();
        return 0;
    }
    case WM_MOUSEWHEEL:
        io.MouseWheel += GET_WHEEL_DELTA_WPARAM(wParam) > 0 ? +1.0f : -1.0f;
        return 0;
    case WM_MOUSEHWHEEL:
        io.MouseWheelH += GET_WHEEL_DELTA_WPARAM(wParam) > 0 ? +1.0f : -1.0f;
        return 0;
    case WM_MOUSEMOVE:
        io.MousePos.x = (signed short)(lParam);
        io.MousePos.y = (signed short)(lParam >> 16);
        return 0;
    case WM_KEYDOWN:
    case WM_SYSKEYDOWN:
        if (wParam < 256)
            io.KeysDown[wParam] = 1;
        return 0;
    case WM_KEYUP:
    case WM_SYSKEYUP:
        if (wParam < 256)
            io.KeysDown[wParam] = 0;
        return 0;
    case WM_CHAR:
        // You can also use ToAscii()+GetKeyboardState() to retrieve characters.
        if (wParam > 0 && wParam < 0x10000)
            io.AddInputCharacter((unsigned short)wParam);
        return 0;
    }
    return 0;
}
    
    IMGUI_API bool        ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_API void        ImGui_Marmalade_Shutdown();
IMGUI_API void        ImGui_Marmalade_NewFrame();
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
    int main(int, char**)
{
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
    void ImGui_ImplGlfwGL2_KeyCallback(GLFWwindow*, int key, int, int action, int mods)
{
    ImGuiIO& io = ImGui::GetIO();
    if (action == GLFW_PRESS)
        io.KeysDown[key] = true;
    if (action == GLFW_RELEASE)
        io.KeysDown[key] = false;
    }
    
    #include 'imgui.h'
#include 'imgui_impl_glfw_gl3.h'
#include <stdio.h>
#include <GL/gl3w.h>    // This example is using gl3w to access OpenGL functions (because it is small). You may use glew/glad/glLoadGen/etc. whatever already works for you.
#include <GLFW/glfw3.h>