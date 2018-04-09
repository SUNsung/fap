
        
        
    {}

    
    ELISTIZEH(PARA)
    
    
    {}  // namespace tesseract.
    
    #include 'ccutil.h'
#include 'errcode.h'
#include 'genericvector.h'
#include 'tesscallback.h'
    
    // Initialize the table to the given size of feature space.
void IntFeatureDist::Init(const IntFeatureMap* feature_map) {
  size_ = feature_map->sparse_size();
  Clear();
  feature_map_ = feature_map;
  features_ = new bool[size_];
  features_delta_one_ = new bool[size_];
  features_delta_two_ = new bool[size_];
  memset(features_, false, size_ * sizeof(features_[0]));
  memset(features_delta_one_, false, size_ * sizeof(features_delta_one_[0]));
  memset(features_delta_two_, false, size_ * sizeof(features_delta_two_[0]));
  total_feature_weight_ = 0.0;
}
    
    static void RunQPS() {
  gpr_log(GPR_INFO, 'Running QPS test, open-loop');
    }
    
    namespace routeguide {
    }
    
    namespace routeguide {
class Feature;
    }
    
    template <class T, class F>
double sum(const T& container, F functor) {
  double r = 0;
  for (auto v = container.begin(); v != container.end(); v++) {
    r += functor(*v);
  }
  return r;
}
    
    #include <initializer_list>
#include <string>
#include <vector>
    
        // Taken from RS4
    REGISTER_OPERATOR_SCHEMA(Softsign)
        .Description('Softsign takes one input data (Tensor<T>) and produces one output '
            'data (Tensor<T>) where the function, y = x / (1 + abs(x)), is applied to the '
            'tensor elementwise.')
        .Input('input', 'Input tensor, typically 1-D.', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
        //‘GREATER’, ‘LESS’, ‘EQUALS,
    REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Greater)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Less)
        REGISTER_BINARY_COMPARISON_OPERATOR_SCHEMA(Equal)
    
    
    {    private:
        // test if data is in memory at the moment
        bool IsInRam() const
        {
            return !m_frames.empty();
        }
};
    
    template <class ElemType>
void ReaderShim<ElemType>::SetCurrentSamplePosition(size_t currentSamplePosition)
{
    if (GetCurrentSamplePosition() == currentSamplePosition)
        return;
    }
    
    	if (cmderOptions.registerApp == true) {
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_BACKGROUND);
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_LISTITEM);
	}
	else if (cmderOptions.unRegisterApp == true)
	{
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_BACKGROUND);
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_LISTITEM);
	}
	else if (cmderOptions.error == true)
	{
		return 1;
	}
	else
	{
		StartCmder(cmderOptions.cmderStart, cmderOptions.cmderSingle, cmderOptions.cmderTask, cmderOptions.cmderCfgRoot);
	}
    
    #define STB__TRY(t,p)  /* avoid retrying a match we already tried */ \
    if (p ? dist != q-t : 1)                             \
    if ((m = stb_matchlen(t, q, match_max)) > best)     \
    if (stb__nc(m,q-(t)))                                \
    best = m, dist = q - (t)
    
            if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    //---- Avoid multiple STB libraries implementations, or redefine path/filenames to prioritize another version
// By default the embedded implementations are declared static and not available outside of imgui cpp files.
//#define IMGUI_STB_TRUETYPE_FILENAME   'my_folder/stb_truetype.h'
//#define IMGUI_STB_RECT_PACK_FILENAME  'my_folder/stb_rect_pack.h'
//#define IMGUI_DISABLE_STB_TRUETYPE_IMPLEMENTATION
//#define IMGUI_DISABLE_STB_RECT_PACK_IMPLEMENTATION
    
    // CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2018-03-20: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors flag + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-02-16: Inputs: Added support for mouse cursors, honoring ImGui::GetMouseCursor() value.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplSdlGL2_RenderDrawData() in the .h file so you can call it yourself.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-02-05: Misc: Using SDL_GetPerformanceCounter() instead of SDL_GetTicks() to be able to handle very high framerate (1000+ FPS).
//  2018-02-05: Inputs: Keyboard mapping is using scancodes everywhere instead of a confusing mixture of keycodes and scancodes. 
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-19: Inputs: When available (SDL 2.0.4+) using SDL_CaptureMouse() to retrieve coordinates outside of client area when dragging. Otherwise (SDL 2.0.3 and before) testing for SDL_WINDOW_INPUT_FOCUS instead of SDL_WINDOW_MOUSE_FOCUS.
//  2018-01-18: Inputs: Added mapping for ImGuiKey_Insert.
//  2017-09-01: OpenGL: Save and restore current polygon mode.
//  2017-08-25: Inputs: MousePos set to -FLT_MAX,-FLT_MAX when mouse is unavailable/missing (instead of -1,-1).
//  2016-10-15: Misc: Added a void* user_data parameter to Clipboard function handlers.
//  2016-09-05: OpenGL: Fixed save and restore of current scissor rectangle.
//  2016-07-29: OpenGL: Explicitly setting GL_UNPACK_ROW_LENGTH to reduce issues because SDL changes it. (#752)
    
    
    {    return true;
}
    
        // Create Descriptor Set:
    {
        VkDescriptorSetAllocateInfo alloc_info = {};
        alloc_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
        alloc_info.descriptorPool = g_DescriptorPool;
        alloc_info.descriptorSetCount = 1;
        alloc_info.pSetLayouts = &g_DescriptorSetLayout;
        err = vkAllocateDescriptorSets(g_Device, &alloc_info, &g_DescriptorSet);
        ImGui_ImplGlfwVulkan_VkResult(err);
    }
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
    /**
 * Check whether 'path' starts with 'prefix'.
 * That is, if prefix has n path elements, then the first n elements of
 * path must be the same as prefix.
 *
 * There is a special case if prefix ends with a slash:
 * /foo/bar/ is not a prefix of /foo/bar, but both /foo/bar and /foo/bar/
 * are prefixes of /foo/bar/baz.
 */
bool starts_with(const path& p, const path& prefix);
    
    
    {  size_t foundCompleted = 0;
  for (auto& op : ops) {
    if (op->state() == AsyncIOOp::State::COMPLETED) {
      ++foundCompleted;
    } else {
      EXPECT_TRUE(op->state() == AsyncIOOp::State::CANCELED) << *op;
    }
  }
  EXPECT_EQ(foundCompleted, completed);
}

    
    
    {} // namespace folly

    
      /**
   * Get the output file.
   */
  const folly::File& getFile() const {
    return file_;
  }
    
    
    {  // Propagate the message up to our parent LogCategory.
  //
  // Maybe in the future it might be worth adding a flag to control if a
  // LogCategory should propagate messages to its parent or not.  (This would
  // be similar to log4j's 'additivity' flag.)
  // For now I don't have a strong use case for this.
  if (parent_) {
    parent_->processMessage(message);
  }
}
    
    namespace folly {
    }
    
    /**
 * Parse a folly::dynamic object.
 *
 * The input should be an object data type, and is parsed the same as a JSON
 * object accpted by parseLogConfigJson().
 */
LogConfig parseLogConfigDynamic(const dynamic& value);