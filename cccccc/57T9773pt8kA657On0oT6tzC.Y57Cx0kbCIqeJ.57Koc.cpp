
        
        #include <map>
    
    namespace atom {
    }
    
    
    {}  // namespace api
    
      // Wrap TrackableObject into a class that SupportsUserData.
  void AttachAsUserData(base::SupportsUserData* wrapped);
    
    void AutoUpdater::QuitAndInstall() {}
#endif
    
    
    {}  // namespace atom
    
      // ViewsDelegate:
  void OnBeforeWidgetInit(
      views::Widget::InitParams* params,
      views::internal::NativeWidgetDelegate* delegate) override;
  ui::ContextFactory* GetContextFactory() override;
  ui::ContextFactoryPrivate* GetContextFactoryPrivate() override;
    
    /// LinkedList Test Helper Functions
ListNode* createLinkedList(int arr[], int n){
    }
    
    
    {
    {        return true;
    }
};
    
    using namespace std;
    
    using namespace std;
    
    private:
    void __postorderTraversal(TreeNode* node, vector<int> &res){
    }
    
    #pragma once
    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    #define SDL_HAS_CAPTURE_AND_GLOBAL_MOUSE    SDL_VERSION_ATLEAST(2,0,4)
#define SDL_HAS_VULKAN                      SDL_VERSION_ATLEAST(2,0,6)
#if !SDL_HAS_VULKAN
static const Uint32 SDL_WINDOW_VULKAN = 0x10000000;
#endif
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.