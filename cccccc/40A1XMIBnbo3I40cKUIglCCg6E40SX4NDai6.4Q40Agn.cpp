
        
        // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    
    {  base::ListValue result;
  RenderThread::Get()->Send(new ShellViewHostMsg_Call_Object_Method_Sync(
      routing_id,
      object_id,
      type,
      method,
      *static_cast<base::ListValue*>(value_args.get()),
      &result));
  return converter->ToV8Value(&result, isolate->GetCurrentContext());
}
    
    namespace content {
class RenderView;
}
    
    void Clipboard::Clear() {
  ui::Clipboard* clipboard = ui::Clipboard::GetForCurrentThread();
  clipboard->Clear(ui::CLIPBOARD_TYPE_COPY_PASTE);
}
    
    
    {}
    
    // Popup menus may get squished if they open up too close to the bottom of the
// screen. This function takes the size of the screen, the size of the menu,
// an optional widget, the Y position of the mouse click, and adjusts the popup
// menu's Y position to make it fit if it's possible to do so.
// Returns the new Y position of the popup menu.
int CalculateMenuYPosition(const GdkRectangle* screen_rect,
                           const GtkRequisition* menu_req,
                           GtkWidget* widget, const int y) {
  CHECK(screen_rect);
  CHECK(menu_req);
  // If the menu would run off the bottom of the screen, and there is enough
  // screen space upwards to accommodate the menu, then pop upwards. If there
  // is a widget, then also move the anchor point to the top of the widget
  // rather than the bottom.
  const int screen_top = screen_rect->y;
  const int screen_bottom = screen_rect->y + screen_rect->height;
  const int menu_bottom = y + menu_req->height;
  int alternate_y = y - menu_req->height;
  if (widget) {
    GtkAllocation allocation;
    gtk_widget_get_allocation(widget, &allocation);
    alternate_y -= allocation.height;
  }
  if (menu_bottom >= screen_bottom && alternate_y >= screen_top)
    return alternate_y;
  return y;
}
    
    void MenuItem::Create(const base::DictionaryValue& option) {
  std::string type;
  option.GetString('type', &type);
  submenu_ = NULL;
  gtk_accel_group = NULL;
    }
    
    #if defined(OS_WIN) || defined(OS_LINUX)
bool MenuItem::AcceleratorPressed(const ui::Accelerator& accelerator) {
#if defined(OS_WIN)
  if (meta_down_flag_) {
    if ((::GetKeyState(VK_APPS) & 0x8000) != 0x8000) {
      return true;
    }
  }
#endif
  OnClick();
  return true;
}
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.App.clearAppCache', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwAppClearAppCacheFunction);
};
    
    bool NwObjDestroyFunction::RunNWSync(base::ListValue* response, std::string* error) {
  int id = 0;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
    }
    
    IntSimdMatrixAVX2::IntSimdMatrixAVX2() {
#ifdef __AVX2__
  num_outputs_per_register_ = kNumOutputsPerRegister;
  max_output_registers_ = kMaxOutputRegisters;
  num_inputs_per_register_ = kNumInputsPerRegister;
  num_inputs_per_group_ = kNumInputsPerGroup;
  num_input_groups_ = kNumInputGroups;
  partial_funcs_ = {PartialMatrixDotVector64, PartialMatrixDotVector32,
                    PartialMatrixDotVector16, PartialMatrixDotVector8};
#endif  // __AVX2__
}
    
    #ifdef __SSE4_1__
// Computes part of matrix.vector v = Wu. Computes 1 result.
static void PartialMatrixDotVector1(const int8_t* wi, const double* scales,
                                    const int8_t* u, int num_in, int num_out,
                                    double* v) {
  int total = IntDotProductSSE(u, wi, num_in);
  // Add in the bias and correct for integer values.
  *v = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * *scales;
}
#endif  // __SSE4_1__
    
    #endif

    
     protected:
  // ----------------------------------------------------------------------
  // Utility functions that may be useful components for other thresholders.
    
    #pragma once
    
    
    {        const auto& type = dict[typeKey].Value<std::wstring>();
        if (type != typeValue) 
        {
            const auto& version = GetVersion(dict);
            LogicError('Unexpected '%ls':'%ls' in place of '%ls':'%ls' (%s).',
                       typeKey.c_str(), type.c_str(), typeKey.c_str(), typeValue.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
        }
    }
    
            std::wstring AsString() const;
        std::shared_ptr<VariableFields> Clone() const;
        FunctionPtr Owner() const;
    
        typedef unsigned int INDEXTYPE; // don't use size_t, as this saves HUGE amounts of RAM
    std::vector<INDEXTYPE> map;     // [t] -> t' indices in randomized order
    size_t currentseed;             // seed for current sequence
    size_t randomizationrange;      // t - randomizationrange/2 <= t' < t + randomizationrange/2 (we support this to enable swapping)
                                    // special values (randomizeDisable)
    void Invalidate()
    {
        currentseed = (size_t) -1;
    }
    
        EditDistanceErrorNode(const ScriptableObjects::IConfigRecordPtr configp)
        : EditDistanceErrorNode(configp->Get(L'deviceId'), L'<placeholder>', configp->Get(L'subPen'), configp->Get(L'delPen'), configp->Get(L'insPen'), configp->Get(L'squashInputs'), {})
    {
        AttachInputsFromConfig(configp, this->GetExpectedNumInputs());
        m_tokensToIgnore = ScriptableObjects::ConfigArray::FlattenedVectorFrom<size_t>(configp->Get(L'tokensToIgnore'));
    }
    
    // -----------------------------------------------------------------------
// EnvironmentInput (propertyName) -- read out environment properties
// Such as whether we are currently training or evaluating, which can affect
// behavior, such as seq-2-seq decoding.
// -----------------------------------------------------------------------
    
    
    {        ImGui::Render();
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp
// https://github.com/ocornut/imgui
    
        ALLEGRO_MOUSE_STATE mouse;
    if (keys.display == g_Display)
    {
        al_get_mouse_state(&mouse);
        io.MousePos = ImVec2((float)mouse.x, (float)mouse.y);
    }
    else
    {
        io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
    }
    
    // Implemented features:
//  [X] Platform: Clipboard support (for Win32 this is actually part of core imgui)
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
//  [X] Platform: Keyboard arrays indexed using VK_* Virtual Key Codes, e.g. ImGui::IsKeyPressed(VK_SPACE).
// Missing features:
//  [ ] Platform: Gamepad support (best leaving it to user application to fill io.NavInputs[] with gamepad inputs from their source of choice).
    
    //---- Don't implement demo windows functionality (ShowDemoWindow()/ShowStyleEditor()/ShowUserGuide() methods will be empty)
//---- It is very strongly recommended to NOT disable the demo windows during development. Please read the comments in imgui_demo.cpp.
//#define IMGUI_DISABLE_DEMO_WINDOWS
    
        VkPipelineColorBlendStateCreateInfo blend_info = {};
    blend_info.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    blend_info.attachmentCount = 1;
    blend_info.pAttachments = color_attachment;
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
    namespace benchmark {
namespace internal {
    }
    }
    
      // Accumulators.
  std::vector<int> n;
  std::vector<double> real_time;
  std::vector<double> cpu_time;
    
    #ifdef BENCHMARK_OS_EMSCRIPTEN
#include <emscripten.h>
#endif
    
    // Prefer C regex libraries when compiling w/o exceptions so that we can
// correctly report errors.
#if defined(BENCHMARK_HAS_NO_EXCEPTIONS) && defined(HAVE_STD_REGEX) && \
    (defined(HAVE_GNU_POSIX_REGEX) || defined(HAVE_POSIX_REGEX))
#undef HAVE_STD_REGEX
#endif
    
    inline UriTuple as_tuple(const folly::Uri& k) {
  return UriTuple(
      k.scheme(),
      k.username(),
      k.password(),
      k.host(),
      k.port(),
      k.path(),
      k.query(),
      k.fragment());
}