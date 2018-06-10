
        
        namespace swift {
class DependencyTracker;
class ModuleDecl;
class SourceFile;
    }
    
    StringRef StdlibGroupsIndexRecordingConsumer::findGroupForSymbol(const IndexSymbol &sym) {
  bool isDeclOrDef = sym.roles & ((SymbolRoleSet)SymbolRole::Declaration | (SymbolRoleSet)SymbolRole::Definition);
  if (isDeclOrDef) {
    if (!sym.group.empty())
      return sym.group;
    return findGroupNameForDecl(sym.decl);
  }
    }
    
    public:
  DocComment(const Decl *D, swift::markup::Document *Doc,
             swift::markup::CommentParts Parts)
      : D(D), Doc(Doc), Parts(Parts) {}
    
    SILDebugScope::SILDebugScope(SILLocation Loc, SILFunction *SILFn,
                             const SILDebugScope *ParentScope ,
                             const SILDebugScope *InlinedCallSite)
    : Loc(Loc), InlinedCallSite(InlinedCallSite) {
  if (ParentScope)
    Parent = ParentScope;
  else {
    assert(SILFn && 'no parent provided');
    Parent = SILFn;
  }
}
    
    #include 'llvm/ADT/Hashing.h'
    
    /// Runs the given function with the given context argument exactly once.
/// The predicate argument must point to a global or static variable of static
/// extent of type swift_once_t.
void swift::swift_once(swift_once_t *predicate, void (*fn)(void *),
                       void *context) {
#if defined(__APPLE__)
  dispatch_once_f(predicate, context, fn);
#elif defined(__CYGWIN__)
  _swift_once_f(predicate, context, fn);
#else
  std::call_once(*predicate, [fn, context]() { fn(context); });
#endif
}

    
    #if !defined(JSONCPP_DEPRECATED)
#define JSONCPP_DEPRECATED(message)
#endif // if !defined(JSONCPP_DEPRECATED)
    
    // CodeGenerator implementation which generates a C++ source file and
// header.  If you create your own protocol compiler binary and you want
// it to support C++ output, you can do so by registering an instance of this
// CodeGenerator with the CommandLineInterface in your main() function.
class LIBPROTOC_EXPORT CppGenerator : public CodeGenerator {
 public:
  CppGenerator();
  ~CppGenerator();
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
      std::string namespace_;
  std::string reflectionClassname_;
    
    
    {
    {
    {}  // namespace java
}  // namespace compiler
}  // namespace protobuf
    
    /// Enforce specific types of decoration.
enum DecorationPoint {
  DECORATE_LOAD,
  DECORATE_ALWAYS,
  DECORATE_INTERVAL,
};
    
    #pragma once
    
    bool waitForTick(const std::shared_ptr<PermissionsRunnable>& runnable) {
  size_t now = runnable->ticks;
  size_t timeout = 1000;
  size_t delay = 0;
  while (delay < timeout) {
    sleepFor(20);
    if (runnable->ticks > now) {
      return true;
    }
    sleepFor(200);
    delay += 220;
  }
  return false;
}
    
    
    {  // And of the column has constraints:
  EXPECT_TRUE(cm['path'].notExistsOrMatches('some'));
  EXPECT_FALSE(cm['path'].notExistsOrMatches('not_some'));
  EXPECT_TRUE(cm['path'].exists());
  EXPECT_TRUE(cm['path'].existsAndMatches('some'));
}
    
    #include <osquery/events.h>
#include <osquery/status.h>
    
    extern JSClass  *jsb_cocos2d_PhysicsSprite3D_class;
extern JSObject *jsb_cocos2d_PhysicsSprite3D_prototype;
    
    
    
    	lua_register_cocos2dx_cocosdenshion_SimpleAudioEngine(tolua_S);
    
    
    
    
    
    
    
        glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, vertices);
    glDrawArrays(GL_LINE_LOOP, 0, vertexCount);
    
    // This class implements debug drawing callbacks that are invoked
// inside b2World::Step.
class GLESDebugDraw : public b2Draw
{
    float32 mRatio;
    cocos2d::GLProgram* mShaderProgram;
    GLint        mColorLocation;
    }
    
    			// Top horizontal
			shape.Set(b2Vec2(-20.0f, 20.0f), b2Vec2(20.0f, 20.0f));
			ground->CreateFixture(&sd);
    
    inline int ReadUint8(const uint8_t* data, size_t* pos) {
  return data[(*pos)++];
}
    
    std::vector<uint8_t> OutputImage::ToSRGB(int xmin, int ymin,
                                         int xsize, int ysize) const {
  std::vector<uint8_t> rgb(xsize * ysize * 3);
  for (int c = 0; c < 3; ++c) {
    components_[c].ToPixels(xmin, ymin, xsize, ysize, &rgb[c], 3);
  }
  for (size_t p = 0; p < rgb.size(); p += 3) {
    ColorTransformYCbCrToRGB(&rgb[p]);
  }
  return rgb;
}
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    
    {}  // namespace guetzli

    
    inline int Log2FloorNonZero(uint32_t n) {
#ifdef __GNUC__
  return 31 ^ __builtin_clz(n);
#else
  unsigned int result = 0;
  while (n >>= 1) result++;
  return result;
#endif
}
    
    namespace guetzli {
    }
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};
    
      // Sets the 8x8 coefficient block with block coordinates (block_x, block_y)
  // to block[].
  // NOTE: If the component is 2x2 subsampled, this corresponds to the 16x16
  // pixel area with upper-left corner (16 * block_x, 16 * block_y).
  // REQUIRES: block[k] % quant()[k] == 0 for each coefficient index k.
  void SetCoeffBlock(int block_x, int block_y,
                     const coeff_t block[kDCTBlockSize]);
    
        // Navigation / Focus
    // FIXME-NAV: Merge all this with the new Nav system, at least the request variables should be moved to ImGuiContext
    int                     FocusIdxAllCounter;                 // Start at -1 and increase as assigned via FocusItemRegister()
    int                     FocusIdxTabCounter;                 // (same, but only count widgets which you can Tab through)
    int                     FocusIdxAllRequestCurrent;          // Item being requested for focus
    int                     FocusIdxTabRequestCurrent;          // Tab-able item being requested for focus
    int                     FocusIdxAllRequestNext;             // Item being requested for focus, for next update (relies on layout to be stable between the frame pressing TAB and the next frame)
    int                     FocusIdxTabRequestNext;             // '
    
    
    {        // Rendering
        ImGui::Render();
        int display_w, display_h;
        glfwMakeContextCurrent(window);
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    	
        glfwMakeContextCurrent(window);
        glfwSwapBuffers(window);
    }
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
        // Copy and convert all vertices into a single contiguous buffer
    D3D11_MAPPED_SUBRESOURCE vtx_resource, idx_resource;
    if (ctx->Map(g_pVB, 0, D3D11_MAP_WRITE_DISCARD, 0, &vtx_resource) != S_OK)
        return;
    if (ctx->Map(g_pIB, 0, D3D11_MAP_WRITE_DISCARD, 0, &idx_resource) != S_OK)
        return;
    ImDrawVert* vtx_dst = (ImDrawVert*)vtx_resource.pData;
    ImDrawIdx* idx_dst = (ImDrawIdx*)idx_resource.pData;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        memcpy(vtx_dst, cmd_list->VtxBuffer.Data, cmd_list->VtxBuffer.Size * sizeof(ImDrawVert));
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        vtx_dst += cmd_list->VtxBuffer.Size;
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    ctx->Unmap(g_pVB, 0);
    ctx->Unmap(g_pIB, 0);
    
        // Render command lists
    int vtx_offset = 0;
    int idx_offset = 0;
    ImVec2 pos = draw_data->DisplayPos;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                const RECT r = { (LONG)(pcmd->ClipRect.x - pos.x), (LONG)(pcmd->ClipRect.y - pos.y), (LONG)(pcmd->ClipRect.z - pos.x), (LONG)(pcmd->ClipRect.w - pos.y) };
                g_pd3dDevice->SetTexture(0, (LPDIRECT3DTEXTURE9)pcmd->TextureId);
                g_pd3dDevice->SetScissorRect(&r);
                g_pd3dDevice->DrawIndexedPrimitive(D3DPT_TRIANGLELIST, vtx_offset, 0, (UINT)cmd_list->VtxBuffer.Size, idx_offset, pcmd->ElemCount/3);
            }
            idx_offset += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
    }
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);
