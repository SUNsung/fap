
        
        class EventListener : public Base {
  std::map<int, BaseEvent*> listerners_;
    }
    
      if (!item->enable_shortcut_)
    return false;
    
      if (type == 'separator') {
    menu_item_ = gtk_separator_menu_item_new();
  } else {
    if (type == 'checkbox') {
      menu_item_ = gtk_check_menu_item_new();
      bool checked;
      if (option.GetBoolean('checked', &checked))
        SetChecked(checked);
    } else {
      menu_item_ = gtk_image_menu_item_new();
      std::string icon;
      if (option.GetString('icon', &icon))
        SetIcon(icon);
    }
    }
    
          std::string decoded_str;
      if (!base::Base64Decode(content, &decoded_str)) {
        error_ = 'Bad base64 string';
        return false;
      }
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    /**
 * Returns true if the iterator is at the start of an object at the given
 * level. Possible uses include determining if a call to Next(RIL_WORD)
 * moved to the start of a RIL_PARA.
 */
bool PageIterator::IsAtBeginningOf(PageIteratorLevel level) const {
  if (it_->block() == nullptr) return false;  // Already at the end!
  if (it_->word() == nullptr) return true;  // In an image block.
  switch (level) {
    case RIL_BLOCK:
      return blob_index_ == 0 && it_->block() != it_->prev_block();
    case RIL_PARA:
      return blob_index_ == 0 &&
          (it_->block() != it_->prev_block() ||
           it_->row()->row->para() != it_->prev_row()->row->para());
    case RIL_TEXTLINE:
      return blob_index_ == 0 && it_->row() != it_->prev_row();
    case RIL_WORD:
      return blob_index_ == 0;
    case RIL_SYMBOL:
      return true;
  }
  return false;
}
    
      // A CostFunc that takes the variance of step into account in the cost.
  int64_t CostWithVariance(const DPPoint* prev);
    
    	LocalFree(szArgList);
    
    
    {        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                CIwMaterial* pCurrentMaterial = IW_GX_ALLOC_MATERIAL();
                pCurrentMaterial->SetShadeMode(CIwMaterial::SHADE_FLAT);
                pCurrentMaterial->SetCullMode(CIwMaterial::CULL_NONE);
                pCurrentMaterial->SetFiltering(false);
                pCurrentMaterial->SetAlphaMode(CIwMaterial::ALPHA_BLEND);
                pCurrentMaterial->SetDepthWriteMode(CIwMaterial::DEPTH_WRITE_NORMAL);
                pCurrentMaterial->SetAlphaTestMode(CIwMaterial::ALPHATEST_DISABLED);
                pCurrentMaterial->SetTexture((CIwTexture*)pcmd->TextureId);
                IwGxSetMaterial(pCurrentMaterial);
                IwGxDrawPrims(IW_GX_TRI_LIST, (uint16*)idx_buffer, pcmd->ElemCount);
            }
            idx_buffer += pcmd->ElemCount;
        }
        IwGxFlush();
    }
    
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
                const LPDIRECT3DTEXTURE9 texture = (LPDIRECT3DTEXTURE9)pcmd->TextureId;
                g_pd3dDevice->SetTexture(0, texture);
                g_pd3dDevice->SetScissorRect(&r);
                g_pd3dDevice->DrawIndexedPrimitive(D3DPT_TRIANGLELIST, vtx_offset, 0, (UINT)cmd_list->VtxBuffer.Size, idx_offset, pcmd->ElemCount/3);
            }
            idx_offset += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
    }
    
    #include <s3eKeyboard.h>
#include <s3ePointer.h>
#include <IwGx.h>
    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('Dear ImGui SDL2+OpenGL example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    
        // Initialize OpenGL loader
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
    bool err = gl3wInit() != 0;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
    bool err = glewInit() != GLEW_OK;
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
    bool err = gladLoadGL() == 0;
#else
    bool err = false; // If you use IMGUI_IMPL_OPENGL_LOADER_CUSTOM, your loader is likely to requires some form of initialization.
#endif
    if (err)
    {
        fprintf(stderr, 'Failed to initialize OpenGL loader!\n');
        return 1;
    }
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(wc.lpszClassName, _T('Dear ImGui DirectX11 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_hSwapChainWaitableObject != NULL) { CloseHandle(g_hSwapChainWaitableObject); }
    for (UINT i = 0; i < NUM_FRAMES_IN_FLIGHT; i++)
        if (g_frameContext[i].CommandAllocator) { g_frameContext[i].CommandAllocator->Release(); g_frameContext[i].CommandAllocator = NULL; }
    if (g_pd3dCommandQueue) { g_pd3dCommandQueue->Release(); g_pd3dCommandQueue = NULL; }
    if (g_pd3dCommandList) { g_pd3dCommandList->Release(); g_pd3dCommandList = NULL; }
    if (g_pd3dRtvDescHeap) { g_pd3dRtvDescHeap->Release(); g_pd3dRtvDescHeap = NULL; }
    if (g_pd3dSrvDescHeap) { g_pd3dSrvDescHeap->Release(); g_pd3dSrvDescHeap = NULL; }
    if (g_fence) { g_fence->Release(); g_fence = NULL; }
    if (g_fenceEvent) { CloseHandle(g_fenceEvent); g_fenceEvent = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();

    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
    
    {    return;
}
    
    
    {private:
    int nextDifferentCharacterIndex(const vector<int> &nums, int p){
        for( ; p < nums.size() ; p ++ )
            if( nums[p] != nums[p - 1] )
                break;
        return p;
    }
};
    
    
void printArr(const vector<int>& vec){
    for(int e: vec)
        cout << e << ' ';
    cout << endl;
}
    
    
/// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
    #include <iostream>
#include <vector>
#include <stack>
    
    #include <iostream>
#include <vector>