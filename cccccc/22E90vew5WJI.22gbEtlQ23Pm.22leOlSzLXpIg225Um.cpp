
        
        TegraBinaryOp_Invoker(max, max)
    
    #ifdef CAROTENE_NEON
    
    
    {
    {
    {             vec128  vs = internal::vld1q( src + i);
             vec128 vr1 = internal::vld1q(rng1 + i);
             vec128 vr2 = internal::vld1q(rng2 + i);
            uvec128 vd1 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
                     vs = internal::vld1q( src + i + 16/sizeof(T));
                    vr1 = internal::vld1q(rng1 + i + 16/sizeof(T));
                    vr2 = internal::vld1q(rng2 + i + 16/sizeof(T));
            uvec128 vd2 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            vnst(dst + i, vd1, vd2);
        }
        vtail<T, sizeof(T)>::inRange(src, rng1, rng2, dst, i, size.width);
        for( ; i < size.width; i++ )
            dst[i] = (u8)(-(rng1[i] <= src[i] && src[i] <= rng2[i]));
    }
}
    
            // Inner state of the underlying reader.
        // Is set in the RestoreFromCheckpoint call and used in the next GetNextMinibatch
        // when the reader state is restored after the first StartEpoch call.
        Internal::Optional<Dictionary> m_state;
    
    
    {            // Arithmetic schedule - write at every m_frequency steps or if the update is one of the first m_firstN
            // updates.
            return update % m_frequency == 0 || update <= m_firstN;
        }
    
        template <typename T>
    inline void ValidateType(const Dictionary& dict, const std::wstring& typeValue, size_t currentVersion)
    {
        if (!dict.Contains(typeKey))
        {
            const auto& version = GetVersion(dict);
            LogicError('Required key '%ls' is not found in the dictionary (%s).',
                       typeKey.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
        } 
    }
    
    
    {        colStarts[numCSCCols - 1] = (SparseIndexType)(nonZeroValues.size());
        NDArrayViewPtr deviceValueData = MakeSharedObject<NDArrayView>(AsDataType<ElementType>(), valueDataShape, colStarts.data(), rowIndices.data(), nonZeroValues.data(), nonZeroValues.size(), device, readOnly);
        return MakeSharedObject<Value>(deviceValueData, deviceValueMask);
    }
    
            NDShape m_shape;
        VariableKind m_varKind;
        ::CNTK::DataType m_dataType;
        std::weak_ptr<Function> m_ownerFunction;
        std::unique_ptr<std::once_flag> m_initValueFlag;
        NDArrayViewPtr m_value;
        std::unique_ptr<ParameterInitializer> m_valueInitializer;
        std::unique_ptr<DeviceDescriptor> m_valueInitializationDevice;
        bool m_needsGradient;
        std::wstring m_name;
        std::vector<Axis> m_dynamicAxes;
        bool m_isSparse;
        std::wstring m_uid;
        std::atomic<size_t> m_valueTimeStamp;
        Variable m_blockFunctionVariableMapping;
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    
    {    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            ImGui_ImplDX9_InvalidateDeviceObjects();
            g_d3dpp.BackBufferWidth  = LOWORD(lParam);
            g_d3dpp.BackBufferHeight = HIWORD(lParam);
            HRESULT hr = g_pd3dDevice->Reset(&g_d3dpp);
            if (hr == D3DERR_INVALIDCALL)
                IM_ASSERT(0);
            ImGui_ImplDX9_CreateDeviceObjects();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}
    
    int32 ImGui_Marmalade_KeyCallback(void* system_data, void* user_data)
{
    ImGuiIO& io = ImGui::GetIO();
    s3eKeyboardEvent* e = (s3eKeyboardEvent*)system_data;
    if (e->m_Pressed == 1)
        io.KeysDown[e->m_Key] = true;
    if (e->m_Pressed == 0)
        io.KeysDown[e->m_Key] = false;
    }
    
        // Upload texture to graphics system
    GLint last_texture;
    glGetIntegerv(GL_TEXTURE_BINDING_2D, &last_texture);
    glGenTextures(1, &g_FontTexture);
    glBindTexture(GL_TEXTURE_2D, g_FontTexture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
    
    // Data
static ALLEGRO_DISPLAY*         g_Display = NULL;
static ALLEGRO_BITMAP*          g_Texture = NULL;
static double                   g_Time = 0.0;
static ALLEGRO_MOUSE_CURSOR*    g_MouseCursorInvisible = NULL;
static ALLEGRO_VERTEX_DECL*     g_VertexDecl = NULL;
static char*                    g_ClipboardTextData = NULL;
    
        g_MouseCursors[ImGuiMouseCursor_Arrow] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_TextInput] = glfwCreateStandardCursor(GLFW_IBEAM_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeAll] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);   // FIXME: GLFW doesn't have this.
    g_MouseCursors[ImGuiMouseCursor_ResizeNS] = glfwCreateStandardCursor(GLFW_VRESIZE_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeEW] = glfwCreateStandardCursor(GLFW_HRESIZE_CURSOR);
    g_MouseCursors[ImGuiMouseCursor_ResizeNESW] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);  // FIXME: GLFW doesn't have this.
    g_MouseCursors[ImGuiMouseCursor_ResizeNWSE] = glfwCreateStandardCursor(GLFW_ARROW_CURSOR);  // FIXME: GLFW doesn't have this.
    g_MouseCursors[ImGuiMouseCursor_Hand] = glfwCreateStandardCursor(GLFW_HAND_CURSOR);
    
    if (install_callbacks)
        ImGui_ImplGlfw_InstallCallbacks(window);
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    /**
 * Populate the vector with the current stack trace
 *
 * Note that this trace needs to be symbolicated to get the library offset even
 * if it is to be symbolicated off-line.
 *
 * Beware of a bug on some platforms, which makes the trace loop until the
 * buffer is full when it reaches a noexpr function. It seems to be fixed in
 * newer versions of gcc. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=56846
 *
 * @param stackTrace The vector that will receive the stack trace. Before
 * filling the vector it will be cleared. The vector will never grow so the
 * number of frames captured is limited by the capacity of it.
 *
 * @param skip The number of frames to skip before capturing the trace
 */
FBEXPORT void getStackTrace(std::vector<InstructionPointer>& stackTrace,
                            size_t skip = 0);
    
        jmethodID   (*FromReflectedMethod)(JNIEnv*, jobject);
    jfieldID    (*FromReflectedField)(JNIEnv*, jobject);
    /* spec doesn't show jboolean parameter */
    jobject     (*ToReflectedMethod)(JNIEnv*, jclass, jmethodID, jboolean);
    
    TEST_F(YogaTest_HadOverflowTests, children_overflow_no_wrap_and_no_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 15);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
        static void destroy(Config * config);
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
    
    
    #ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
namespace antlr {
#endif
    }
    
    #endif //INC_ASTFactory_hpp__

    
    #endif //INC_ASTNULLType_hpp__

    
    /** ASTPair:  utility class used for manipulating a pair of ASTs
  * representing the current AST root and current AST sibling.
  * This exists to compensate for the lack of pointers or 'var'
  * arguments in Java.
  *
  * OK, so we can do those things in C++, but it seems easier
  * to stick with the Java way for now.
  */
class ANTLR_API ASTPair {
public:
	RefAST root;		// current root of tree
	RefAST child;		// current child to which siblings are added
    }
    
    protected:
	// character source
	ANTLR_USE_NAMESPACE(std)istream& input;
    
    #include <antlr/config.hpp>
#include <antlr/ANTLRException.hpp>
    
    class ANTLR_API CommonAST : public BaseAST {
public:
	CommonAST()
	: BaseAST()
	, ttype( Token::INVALID_TYPE )
	, text()
	{
	}
    }
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/CommonHiddenStreamToken.hpp#2 $
 */
    
    #endif //INC_InputBuffer_hpp__

    
    	/** Mark a spot in the input and return the position.
	 * Forwarded to TokenBuffer.
	 */
	virtual inline unsigned int mark()
	{
		return inputState->getInput().mark();
	}
	/// rewind to a previously marked position
	virtual inline void rewind(unsigned int pos)
	{
		inputState->getInput().rewind(pos);
	}
	/** called by the generated parser to do error recovery, override to
	 * customize the behaviour.
	 */
	virtual void recover(const RecognitionException& ex, const BitSet& tokenSet)
	{
        (void)ex;
		consume();
		consumeUntil(tokenSet);
	}