
        
        
    {  /// Returns true if \p BB is a dead-end block.
  bool isDeadEnd(SILBasicBlock *BB) {
    if (!isComputed) {
      // Lazily compute the dataflow.
      compute();
      isComputed = true;
    }
    return ReachableBlocks.count(BB) == 0;
  }
};
    
    #include 'swift/Markup/Markup.h'
#include 'llvm/ADT/Optional.h'
    
    /// Format a Syntax tree with the given rules.
Syntax format(Syntax Tree);
// TODO: Representation for formatting rules, etc. This is just a figment
// for now.
    
    #endif // SWIFT_INDEX_INDEX_H

    
    class IndexDataConsumer {
  virtual void anchor();
    }
    
    namespace SourceKit {
  class LangSupport;
  class NotificationCenter;
    }
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
    #include 'base/strings/string_piece.h'
#include 'v8/include/v8.h'
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_enabled_;
}
    
    #include 'content/nw/src/api/menu/menu.h'
    
    void MenuItem::OnClick() {
  // Automatically flip checkbox.
  if (type_ == 'checkbox')
    is_checked_ = !is_checked_;
    }
    
    #include 'base/command_line.h'
#include 'base/memory/ptr_util.h'
#include 'chrome/browser/browsing_data/browsing_data_appcache_helper.h'
#include 'chrome/browser/browsing_data/browsing_data_helper.h'
#include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/nw_app.h'
#include 'content/nw/src/nw_base.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_process_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/storage_partition.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'extensions/browser/app_window/app_window_registry.h'
#include 'extensions/browser/app_window/native_app_window.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
#include 'net/proxy_resolution/proxy_config.h'
#include 'net/proxy_resolution/proxy_config_service_fixed.h'
#include 'net/proxy_resolution/proxy_resolution_service.h'
#include 'net/url_request/url_request_context.h'
#include 'net/url_request/url_request_context_getter.h'
#include 'net/traffic_annotation/network_traffic_annotation_test_helper.h'
    
     protected:
  ~NwObjCallObjectMethodSyncFunction() override;
    
    #include 'extensions/browser/extension_function.h'
    
    #include <osquery/config.h>
#include <osquery/database.h>
    
    class TLSConfigPlugin : public ConfigPlugin,
                        public std::enable_shared_from_this<TLSConfigPlugin> {
 public:
  Status setUp() override;
  Status genConfig(std::map<std::string, std::string>& config) override;
    }
    
      // Wait for the permissions thread to write once.
  EXPECT_TRUE(waitForTick(perms_thread));
    
      auto process = PlatformProcess::getCurrentProcess();
  EXPECT_NE(nullptr, process.get());
    
      hr = ::CoInitializeSecurity(nullptr,
                              -1,
                              nullptr,
                              nullptr,
                              RPC_C_AUTHN_LEVEL_DEFAULT,
                              RPC_C_IMP_LEVEL_IMPERSONATE,
                              nullptr,
                              EOAC_NONE,
                              nullptr);
  hr = ::CoCreateInstance(CLSID_WbemLocator,
                          0,
                          CLSCTX_INPROC_SERVER,
                          IID_IWbemLocator,
                          (LPVOID*)&locator_);
  if (hr != S_OK) {
    locator_ = nullptr;
    return;
  }
    
      // Check that all value lengths were maxed.
  std::map<std::string, size_t> expected = {
      {'name', 10}, {'age', 4}, {'food', 23}, {'number', 2}};
  EXPECT_EQ(lengths, expected);
    
    class ExampleTable : public TablePlugin {
 private:
  TableColumns columns() const {
    return {
        std::make_tuple('example_text', TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple(
            'example_integer', INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }
    }
    
                ImGui::AlignTextToFramePadding(); // If your line starts with text, call this to align it to upcoming widgets.
            ImGui::Text('Text aligned to Widget'); ImGui::SameLine();
            ImGui::Button('Widget##1'); ImGui::SameLine();
            ImGui::Text('Widget'); ImGui::SameLine();
            ImGui::SmallButton('Widget##2'); ImGui::SameLine();
            ImGui::Button('Widget##3');
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
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
    
    static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, 'Glfw Error %d: %s\n', error, description);
}
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
    }
    
    void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().