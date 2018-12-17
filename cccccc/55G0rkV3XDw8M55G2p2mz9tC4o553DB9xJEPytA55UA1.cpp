
        
        // TaskRunner implementation that posts tasks into libuv's default loop.
class UvTaskRunner : public base::SingleThreadTaskRunner {
 public:
  explicit UvTaskRunner(uv_loop_t* loop);
    }
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  mate::Dictionary dict(isolate, exports);
  dict.Set('autoUpdater', AutoUpdater::Create(isolate));
  dict.Set('AutoUpdater', AutoUpdater::GetConstructor(isolate)->GetFunction());
}
    
    
    {}  // namespace
    
    #include 'atom/browser/api/atom_api_net.h'
#include 'atom/browser/api/atom_api_url_request.h'
#include 'atom/common/node_includes.h'
#include 'native_mate/dictionary.h'
    
    class Screen : public mate::EventEmitter<Screen>,
               public display::DisplayObserver {
 public:
  static v8::Local<v8::Value> Create(v8::Isolate* isolate);
    }
    
      // TrayIconObserver:
  void OnClicked(const gfx::Rect& bounds,
                 const gfx::Point& location,
                 int modifiers) override;
  void OnDoubleClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnRightClicked(const gfx::Rect& bounds, int modifiers) override;
  void OnBalloonShow() override;
  void OnBalloonClicked() override;
  void OnBalloonClosed() override;
  void OnDrop() override;
  void OnDropFiles(const std::vector<std::string>& files) override;
  void OnDropText(const std::string& text) override;
  void OnDragEntered() override;
  void OnDragExited() override;
  void OnDragEnded() override;
  void OnMouseEntered(const gfx::Point& location, int modifiers) override;
  void OnMouseExited(const gfx::Point& location, int modifiers) override;
  void OnMouseMoved(const gfx::Point& location, int modifiers) override;
    
    namespace atom {
    }
    
    
    {}  // namespace atom
    
    template <typename T>
struct GetTypeInfo<T *, typename EnableIf<TypeInherits<Object, T>::value>::type> {
	static const Variant::Type VARIANT_TYPE = Variant::OBJECT;
	static inline PropertyInfo get_class_info() {
		return PropertyInfo(StringName(T::get_class_static()));
	}
};
    
    void register_csg_types() {
    }
    
    	FileAccess *file;
	int alignment;
    
    
    {	return singleton;
}
    
    static int InputTextCallback(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserData* user_data = (InputTextCallback_UserData*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        // If for some reason we refuse the new length (BufTextLen) and/or capacity (BufSize) we need to set them back to what we want.
        std::string* str = user_data->Str;
        IM_ASSERT(data->Buf == str->c_str());
        str->resize(data->BufTextLen);
        data->Buf = (char*)str->c_str();
    }
    else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}
    
    
    {        // If a number >1 of GPUs got reported, you should find the best fit GPU for your purpose
        // e.g. VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU if available, or with the greatest memory available, etc.
        // for sake of simplicity we'll just take the first one, assuming it has a graphics queue family.
        g_PhysicalDevice = gpus[0];
        free(gpus);
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    // [Win32] Our example includes a copy of glfw3.lib pre-compiled with VS2010 to maximize ease of testing and compatibility with old VS compilers.
// To link with VS2010-era libraries, VS2015+ requires linking with legacy_stdio_definitions.lib, which we do using this pragma. 
// Your own project should not be affected, as you are likely to link with a newer binary of GLFW that is adequate for your version of Visual Studio.
#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, 'legacy_stdio_definitions')
#endif
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually. 
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad.
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
#if defined(IMGUI_IMPL_OPENGL_LOADER_GL3W)
#include <GL/gl3w.h>    // Initialize with gl3wInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLEW)
#include <GL/glew.h>    // Initialize with glewInit()
#elif defined(IMGUI_IMPL_OPENGL_LOADER_GLAD)
#include <glad/glad.h>  // Initialize with gladLoadGL()
#else
#include IMGUI_IMPL_OPENGL_LOADER_CUSTOM
#endif
    
            // Rendering
        ImGui::Render();
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCGRID3D_ACTION_H__
#define __ACTION_CCGRID3D_ACTION_H__
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(FlipY);
};
    
    
    {    tHashElement *element = nullptr;
    Ref *target = action->getOriginalTarget();
    HASH_FIND_PTR(_targets, &target, element);
    if (element)
    {
        auto i = ccArrayGetIndexOfObject(element->actions, action);
        if (i != CC_INVALID_INDEX)
        {
            removeActionAtIndex(i, element);
        }
    }
}
    
    struct Tile;
/**
@brief ShuffleTiles action.
@details This action make the target node shuffle with many tiles in random order.
        You can create the action by these parameters:
        duration, grid size, the random seed.
*/
class CC_DLL ShuffleTiles : public TiledGrid3DAction
{
public:
    /** 
    * @brief Create the action with grid size, random seed and duration.
    * @param duration Specify the duration of the ShuffleTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the creation success, return a pointer of ShuffleTiles action; otherwise, return nil.
    */
    static ShuffleTiles* create(float duration, const Size& gridSize, unsigned int seed);
    }
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
      FunctionRef<int(int)> fref = funcptr;
  EXPECT_EQ(100, fref(10));
  EXPECT_EQ(121, fref(11));
    
    
    {  FLAGS_minloglevel = prev;
}
    
    namespace folly {
    }
    
    static std::vector<uint8_t> readNote(const std::string& fileName) {
  std::vector<uint8_t> res;
  std::string rawContent = getNoteRawContent(fileName);
  CHECK(!rawContent.empty());
  // Strip out the part of output containing raw content, and split by line.
  std::string contentStart =
      'Contents of section .note.' + kUSDTSubsectionName + ':';
  auto pos = rawContent.find(contentStart);
  CHECK_NE(pos, std::string::npos);
  pos = rawContent.find('\n', pos + 1);
  CHECK_NE(pos, std::string::npos);
  rawContent = rawContent.substr(pos + 1);
  std::vector<std::string> lines;
  folly::split('\n', rawContent, lines, true);
  CHECK_GT(lines.size(), 0);
  // Parse each line.
  for (auto line : lines) {
    // Empty segments or ASCIIified content after two spaces.
    auto endPos = line.find('  ');
    CHECK_NE(endPos, std::string::npos);
    line = line.substr(0, endPos);
    std::vector<std::string> segments;
    folly::split(' ', line, segments, true);
    CHECK_GE(segments.size(), 2);
    // First segment is address offset.
    for (size_t i = 1; i < segments.size(); i++) {
      CHECK_EQ(8, segments[i].size());
      for (size_t j = 0; j < 8; j += 2) {
        std::string hex = segments[i].substr(j, 2);
        res.push_back(hexToInt(hex));
      }
    }
  }
  CHECK_EQ(0, res.size() % 4);
  return res;
}
    
    exception_wrapper exception_wrapper::from_exception_ptr(
    std::exception_ptr const& ptr) noexcept {
  if (!ptr) {
    return exception_wrapper();
  }
  try {
    std::rethrow_exception(ptr);
  } catch (std::exception& e) {
    return exception_wrapper(std::current_exception(), e);
  } catch (...) {
    return exception_wrapper(std::current_exception());
  }
}
    
    /*
 * Return a good seed for a random number generator.
 * Note that this is a legacy function, as it returns a 32-bit value, which
 * is too small to be useful as a 'real' RNG seed. Use the functions in class
 * Random instead.
 */
inline uint32_t randomNumberSeed() {
  return Random::rand32();
}