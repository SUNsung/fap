
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    CostAnalyzer::CostAnalyzer(const GrapplerItem& item, Cluster* cluster,
                           const string& suffix)
    : item_(&item),
      measure_estimator_(cluster, 10, 0),
      analytical_estimator_(cluster, false),
      suffix_(suffix) {}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_
#define TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_
    
    Safe_PyObjectPtr make_safe(PyObject* object) {
  return Safe_PyObjectPtr(object);
}
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  return TracingController::CreateFileEndpoint(
      result_file_path, base::Bind(callback, result_file_path));
}
    
    #include 'atom/browser/api/event_emitter.h'
#include 'atom/browser/mac/in_app_purchase.h'
#include 'atom/browser/mac/in_app_purchase_observer.h'
#include 'atom/browser/mac/in_app_purchase_product.h'
#include 'native_mate/handle.h'
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
    }
    
    
    {}  // namespace atom
    
     protected:
  Tray(v8::Isolate* isolate,
       v8::Local<v8::Object> wrapper,
       mate::Handle<NativeImage> image);
  ~Tray() override;
    
    void Action::stop()
{
    _target = nullptr;
}
    
    /** @class FlipY
* @brief Flips the sprite vertically.
* @since v0.99.0
*/
class CC_DLL FlipY : public ActionInstant
{
public:
    /** Create the action.
     *
     * @param y Flips the sprite vertically if true.
     * @return An autoreleased FlipY object.
     */
    static FlipY * create(bool y);
    }
    
    void ScaleTo::update(float time)
{
    if (_target)
    {
        _target->setScaleX(_startScaleX + _deltaX * time);
        _target->setScaleY(_startScaleY + _deltaY * time);
        _target->setScaleZ(_startScaleZ + _deltaZ * time);
    }
}
    
    
    {// end of actions group
/// @}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPAGETURN3D_ACTION_H__
#define __ACTION_CCPAGETURN3D_ACTION_H__
    
     @code
     // scaleA and scaleB are equivalents
     auto scaleA = ScaleTo::create(2, 3);                 // (duration, to)
     auto scaleB = ActionTween::create(2, 'scale', 1, 3); // (duration, key, from, to)
 @endcode
    
    NS_CC_BEGIN
    
    /**
 * @addtogroup _2d
 * @{
 */
    }
    
    bool AtlasNode::initWithTileFile(const std::string& tile, int tileWidth, int tileHeight, int itemsToRender)
{
    CCASSERT(tile.size() > 0, 'file size should not be empty');
    Texture2D *texture = Director::getInstance()->getTextureCache()->addImage(tile);
    return initWithTexture(texture, tileWidth, tileHeight, itemsToRender);
}
    
            err = vkResetCommandPool(g_Device, command_pool, 0);
        check_vk_result(err);
        VkCommandBufferBeginInfo begin_info = {};
        begin_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        begin_info.flags |= VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        err = vkBeginCommandBuffer(command_buffer, &begin_info);
        check_vk_result(err);
    
    //---- Define constructor and implicit cast operators to convert back<>forth between your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the example_glfw_opengl2/ folder**
// See imgui_impl_glfw.cpp for details.
    
                ImGui::Text('This is some useful text.');               // Display some text (you can use a format strings too)
            ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our window open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
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
    
        io.SetClipboardTextFn = ImGui_Marmalade_SetClipboardText;
    io.GetClipboardTextFn = ImGui_Marmalade_GetClipboardText;
    
    void    ImGui_ImplWin32_Shutdown()
{
    g_hWnd = (HWND)0;
}
    
    void CreateRenderTarget()
{
    ID3D10Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, __uuidof(ID3D10Texture2D), (LPVOID*)&pBackBuffer);
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();
}
    
    inline std::system_error makeSystemErrorExplicit(int err, const char* msg) {
  // TODO: The C++ standard indicates that std::generic_category() should be
  // used for POSIX errno codes.
  //
  // We should ideally change this to use std::generic_category() instead of
  // std::system_category().  However, undertaking this change will require
  // updating existing call sites that currently catch exceptions thrown by
  // this code and currently expect std::system_category.
  return std::system_error(err, std::system_category(), msg);
}
    
    /**
 * Debug string for an exception: include type and what(), if
 * defined.
 */
inline fbstring exceptionStr(const std::exception& e) {
#ifdef FOLLY_HAS_RTTI
  fbstring rv(demangle(typeid(e)));
  rv += ': ';
#else
  fbstring rv('Exception (no RTTI available): ');
#endif
  rv += e.what();
  return rv;
}
    
    void Executor::addWithPriority(Func, int8_t /* priority */) {
  throw std::runtime_error(
      'addWithPriority() is not implemented for this Executor');
}
    
    template <
    class Iterator = const char*,
    class Base = folly::Range<boost::u8_to_u32_iterator<Iterator>>>
class UTF8Range : public Base {
 public:
  /* implicit */ UTF8Range(const folly::Range<Iterator> baseRange)
      : Base(
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.begin(),
                baseRange.begin(),
                baseRange.end()),
            boost::u8_to_u32_iterator<Iterator>(
                baseRange.end(),
                baseRange.begin(),
                baseRange.end())) {}
  /* implicit */ UTF8Range(const std::string& baseString)
      : Base(folly::Range<Iterator>(baseString)) {}
};
    
    #include <string>
    
        // Test the boundaries of conversion to int32_t seconds
    using sec_i32 = std::chrono::duration<int32_t>;
    ts.tv_sec = 2147483647;
    ts.tv_nsec = 0;
    EXPECT_EQ(std::numeric_limits<int32_t>::max(), to<sec_i32>(ts).count());
    ts.tv_nsec = 1000000000;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    ts.tv_sec = -2147483648;
    ts.tv_nsec = 0;
    EXPECT_EQ(std::numeric_limits<int32_t>::min(), to<sec_i32>(ts).count());
    ts.tv_sec = -2147483649;
    ts.tv_nsec = 999999999;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    ts.tv_sec = -2147483649;
    ts.tv_nsec = 0;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    ts.tv_sec = -2147483650;
    ts.tv_nsec = 0;
    EXPECT_THROW(to<sec_i32>(ts), std::range_error);
    
    #pragma once