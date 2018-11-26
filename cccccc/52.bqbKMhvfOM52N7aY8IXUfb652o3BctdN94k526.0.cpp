
        
        class OrientationDetector {
 public:
  OrientationDetector(const GenericVector<int>* allowed_scripts,
                      OSResults* results);
  bool detect_blob(BLOB_CHOICE_LIST* scores);
  int get_orientation();
 private:
  OSResults* osr_;
  const GenericVector<int>* allowed_scripts_;
};
    
    // Getter for the name.
const char* ParamContent::GetName() const {
  if (param_type_ == VT_INTEGER) { return iIt->name_str(); }
  else if (param_type_ == VT_BOOLEAN) { return bIt->name_str(); }
  else if (param_type_ == VT_DOUBLE) { return dIt->name_str(); }
  else if (param_type_ == VT_STRING) { return sIt->name_str(); }
  else
    return 'ERROR: ParamContent::GetName()';
}
    
    bool binary_to_compressed_c(const char* filename, const char* symbol, bool use_base85_encoding, bool use_compression)
{
    // Read file
    FILE* f = fopen(filename, 'rb');
    if (!f) return false;
    int data_sz;
    if (fseek(f, 0, SEEK_END) || (data_sz = (int)ftell(f)) == -1 || fseek(f, 0, SEEK_SET)) { fclose(f); return false; }
    char* data = new char[data_sz+4];
    if (fread(data, 1, data_sz, f) != (size_t)data_sz) { fclose(f); delete[] data; return false; }
    memset((void*)(((char*)data) + data_sz), 0, 4);
    fclose(f);
    }
    
    int main(int, char**)
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
    // DirectX
#include <d3d12.h>
#include <dxgi1_4.h>
#include <d3dcompiler.h>
    
    // Data
static ALLEGRO_DISPLAY*         g_Display = NULL;
static ALLEGRO_BITMAP*          g_Texture = NULL;
static double                   g_Time = 0.0;
static ALLEGRO_MOUSE_CURSOR*    g_MouseCursorInvisible = NULL;
static ALLEGRO_VERTEX_DECL*     g_VertexDecl = NULL;
static char*                    g_ClipboardTextData = NULL;
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputText(label, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}
    
        if (ImGui::TreeNode('Settings'))
    {
        ImGui::SliderFloat2('WindowPadding', (float*)&style.WindowPadding, 0.0f, 20.0f, '%.0f');
        ImGui::SliderFloat('PopupRounding', &style.PopupRounding, 0.0f, 16.0f, '%.0f');
        ImGui::SliderFloat2('FramePadding', (float*)&style.FramePadding, 0.0f, 20.0f, '%.0f');
        ImGui::SliderFloat2('ItemSpacing', (float*)&style.ItemSpacing, 0.0f, 20.0f, '%.0f');
        ImGui::SliderFloat2('ItemInnerSpacing', (float*)&style.ItemInnerSpacing, 0.0f, 20.0f, '%.0f');
        ImGui::SliderFloat2('TouchExtraPadding', (float*)&style.TouchExtraPadding, 0.0f, 10.0f, '%.0f');
        ImGui::SliderFloat('IndentSpacing', &style.IndentSpacing, 0.0f, 30.0f, '%.0f');
        ImGui::SliderFloat('ScrollbarSize', &style.ScrollbarSize, 1.0f, 20.0f, '%.0f');
        ImGui::SliderFloat('GrabMinSize', &style.GrabMinSize, 1.0f, 20.0f, '%.0f');
        ImGui::Text('BorderSize');
        ImGui::SliderFloat('WindowBorderSize', &style.WindowBorderSize, 0.0f, 1.0f, '%.0f');
        ImGui::SliderFloat('ChildBorderSize', &style.ChildBorderSize, 0.0f, 1.0f, '%.0f');
        ImGui::SliderFloat('PopupBorderSize', &style.PopupBorderSize, 0.0f, 1.0f, '%.0f');
        ImGui::SliderFloat('FrameBorderSize', &style.FrameBorderSize, 0.0f, 1.0f, '%.0f');
        ImGui::Text('Rounding');
        ImGui::SliderFloat('WindowRounding', &style.WindowRounding, 0.0f, 14.0f, '%.0f');
        ImGui::SliderFloat('ChildRounding', &style.ChildRounding, 0.0f, 16.0f, '%.0f');
        ImGui::SliderFloat('FrameRounding', &style.FrameRounding, 0.0f, 12.0f, '%.0f');
        ImGui::SliderFloat('ScrollbarRounding', &style.ScrollbarRounding, 0.0f, 12.0f, '%.0f');
        ImGui::SliderFloat('GrabRounding', &style.GrabRounding, 0.0f, 12.0f, '%.0f');
        ImGui::Text('Alignment');
        ImGui::SliderFloat2('WindowTitleAlign', (float*)&style.WindowTitleAlign, 0.0f, 1.0f, '%.2f');
        ImGui::SliderFloat2('ButtonTextAlign', (float*)&style.ButtonTextAlign, 0.0f, 1.0f, '%.2f'); ImGui::SameLine(); ShowHelpMarker('Alignment applies when a button is larger than its text content.');
        ImGui::Text('Safe Area Padding'); ImGui::SameLine(); ShowHelpMarker('Adjust if you cannot see the edges of your screen (e.g. on a TV where scaling has not been configured).');
        ImGui::SliderFloat2('DisplaySafeAreaPadding', (float*)&style.DisplaySafeAreaPadding, 0.0f, 30.0f, '%.0f');
        ImGui::TreePop();
    }
    
    
    {    colors[ImGuiCol_Text]                   = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_TextDisabled]           = ImVec4(0.60f, 0.60f, 0.60f, 1.00f);
    colors[ImGuiCol_WindowBg]               = ImVec4(0.94f, 0.94f, 0.94f, 1.00f);
    colors[ImGuiCol_ChildBg]                = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_PopupBg]                = ImVec4(1.00f, 1.00f, 1.00f, 0.98f);
    colors[ImGuiCol_Border]                 = ImVec4(0.00f, 0.00f, 0.00f, 0.30f);
    colors[ImGuiCol_BorderShadow]           = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg]                = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.26f, 0.59f, 0.98f, 0.40f);
    colors[ImGuiCol_FrameBgActive]          = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
    colors[ImGuiCol_TitleBg]                = ImVec4(0.96f, 0.96f, 0.96f, 1.00f);
    colors[ImGuiCol_TitleBgActive]          = ImVec4(0.82f, 0.82f, 0.82f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(1.00f, 1.00f, 1.00f, 0.51f);
    colors[ImGuiCol_MenuBarBg]              = ImVec4(0.86f, 0.86f, 0.86f, 1.00f);
    colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.98f, 0.98f, 0.98f, 0.53f);
    colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.69f, 0.69f, 0.69f, 0.80f);
    colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.49f, 0.49f, 0.49f, 0.80f);
    colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.49f, 0.49f, 0.49f, 1.00f);
    colors[ImGuiCol_CheckMark]              = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_SliderGrab]             = ImVec4(0.26f, 0.59f, 0.98f, 0.78f);
    colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.46f, 0.54f, 0.80f, 0.60f);
    colors[ImGuiCol_Button]                 = ImVec4(0.26f, 0.59f, 0.98f, 0.40f);
    colors[ImGuiCol_ButtonHovered]          = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_ButtonActive]           = ImVec4(0.06f, 0.53f, 0.98f, 1.00f);
    colors[ImGuiCol_Header]                 = ImVec4(0.26f, 0.59f, 0.98f, 0.31f);
    colors[ImGuiCol_HeaderHovered]          = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
    colors[ImGuiCol_HeaderActive]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_Separator]              = ImVec4(0.39f, 0.39f, 0.39f, 1.00f);
    colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.14f, 0.44f, 0.80f, 0.78f);
    colors[ImGuiCol_SeparatorActive]        = ImVec4(0.14f, 0.44f, 0.80f, 1.00f);
    colors[ImGuiCol_ResizeGrip]             = ImVec4(0.80f, 0.80f, 0.80f, 0.56f);
    colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
    colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
    colors[ImGuiCol_PlotLines]              = ImVec4(0.39f, 0.39f, 0.39f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.45f, 0.00f, 1.00f);
    colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    colors[ImGuiCol_DragDropTarget]         = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
    colors[ImGuiCol_NavHighlight]           = colors[ImGuiCol_HeaderHovered];
    colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(0.70f, 0.70f, 0.70f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.20f, 0.20f, 0.20f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.20f, 0.20f, 0.20f, 0.35f);
}
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_Marmalade_CreateDeviceObjects();