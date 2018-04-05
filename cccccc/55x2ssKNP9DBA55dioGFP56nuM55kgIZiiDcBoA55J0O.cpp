
        
        #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
    // Finally, you are free to instantiate the pattern with the types you
// want.  If you put the above code in a header file, you can #include
// it in multiple C++ source files and instantiate it multiple times.
//
// To distinguish different instances of the pattern, the first
// argument to the INSTANTIATE_* macro is a prefix that will be added
// to the actual test case name.  Remember to pick unique prefixes for
// different instances.
typedef testing::Types<char, int, unsigned int> MyTypes;
INSTANTIATE_TYPED_TEST_CASE_P(My, FooTest, MyTypes);
    
    
// Helper function for implementing {EXPECT|ASSERT}_PRED1.  Don't use
// this in your code.
template <typename Pred,
          typename T1>
AssertionResult AssertPred1Helper(const char* pred_text,
                                  const char* e1,
                                  Pred pred,
                                  const T1& v1) {
  if (pred(v1)) return AssertionSuccess();
    }
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Outputs a message explaining invalid registration of different
// fixture class for the same test case. This may happen when
// TEST_P macro is used to define two tests with the same name
// but in different namespaces.
GTEST_API_ void ReportInvalidTestCaseType(const char* test_case_name,
                                          const char* file, int line);
    
    static const int kCbToGreenTable[256] = {
  2919680,  2897126,  2874572,  2852018,  2829464,  2806910,  2784356,  2761802,
  2739248,  2716694,  2694140,  2671586,  2649032,  2626478,  2603924,  2581370,
  2558816,  2536262,  2513708,  2491154,  2468600,  2446046,  2423492,  2400938,
  2378384,  2355830,  2333276,  2310722,  2288168,  2265614,  2243060,  2220506,
  2197952,  2175398,  2152844,  2130290,  2107736,  2085182,  2062628,  2040074,
  2017520,  1994966,  1972412,  1949858,  1927304,  1904750,  1882196,  1859642,
  1837088,  1814534,  1791980,  1769426,  1746872,  1724318,  1701764,  1679210,
  1656656,  1634102,  1611548,  1588994,  1566440,  1543886,  1521332,  1498778,
  1476224,  1453670,  1431116,  1408562,  1386008,  1363454,  1340900,  1318346,
  1295792,  1273238,  1250684,  1228130,  1205576,  1183022,  1160468,  1137914,
  1115360,  1092806,  1070252,  1047698,  1025144,  1002590,   980036,   957482,
   934928,   912374,   889820,   867266,   844712,   822158,   799604,   777050,
   754496,   731942,   709388,   686834,   664280,   641726,   619172,   596618,
   574064,   551510,   528956,   506402,   483848,   461294,   438740,   416186,
   393632,   371078,   348524,   325970,   303416,   280862,   258308,   235754,
   213200,   190646,   168092,   145538,   122984,   100430,    77876,    55322,
    32768,    10214,   -12340,   -34894,   -57448,   -80002,  -102556,  -125110,
  -147664,  -170218,  -192772,  -215326,  -237880,  -260434,  -282988,  -305542,
  -328096,  -350650,  -373204,  -395758,  -418312,  -440866,  -463420,  -485974,
  -508528,  -531082,  -553636,  -576190,  -598744,  -621298,  -643852,  -666406,
  -688960,  -711514,  -734068,  -756622,  -779176,  -801730,  -824284,  -846838,
  -869392,  -891946,  -914500,  -937054,  -959608,  -982162, -1004716, -1027270,
 -1049824, -1072378, -1094932, -1117486, -1140040, -1162594, -1185148, -1207702,
 -1230256, -1252810, -1275364, -1297918, -1320472, -1343026, -1365580, -1388134,
 -1410688, -1433242, -1455796, -1478350, -1500904, -1523458, -1546012, -1568566,
 -1591120, -1613674, -1636228, -1658782, -1681336, -1703890, -1726444, -1748998,
 -1771552, -1794106, -1816660, -1839214, -1861768, -1884322, -1906876, -1929430,
 -1951984, -1974538, -1997092, -2019646, -2042200, -2064754, -2087308, -2109862,
 -2132416, -2154970, -2177524, -2200078, -2222632, -2245186, -2267740, -2290294,
 -2312848, -2335402, -2357956, -2380510, -2403064, -2425618, -2448172, -2470726,
 -2493280, -2515834, -2538388, -2560942, -2583496, -2606050, -2628604, -2651158,
 -2673712, -2696266, -2718820, -2741374, -2763928, -2786482, -2809036, -2831590,
};
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    
    {}  // namespace guetzli
    
    
    {  return true;
}
    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);
    
            if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
            counter++;
        ImGui::SameLine();
        ImGui::Text('counter = %d', counter);
    
    int main(int, char**)
{
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
    IMGUI_API bool        ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_API void        ImGui_Marmalade_Shutdown();
IMGUI_API void        ImGui_Marmalade_NewFrame();
IMGUI_API void        ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('ImGui DirectX9 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    // Copyright (C) 2015 by Giovanni Zito
// This file is part of ImGui
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
    
                    // Pack rectangle
                stbrp_rect rect;
                rect.w = (uint16_t)glyph_info.Width + 1; // Account for texture filtering
                rect.h = (uint16_t)glyph_info.Height + 1;
                stbrp_pack_rects(&context, &rect, 1);
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
        // Gamepad navigation mapping [BETA]
    memset(io.NavInputs, 0, sizeof(io.NavInputs));
    if (io.ConfigFlags & ImGuiConfigFlags_NavEnableGamepad)
    {
        // Update gamepad inputs
        #define MAP_BUTTON(NAV_NO, BUTTON_NO)       { if (buttons_count > BUTTON_NO && buttons[BUTTON_NO] == GLFW_PRESS) io.NavInputs[NAV_NO] = 1.0f; }
        #define MAP_ANALOG(NAV_NO, AXIS_NO, V0, V1) { float v = (axes_count > AXIS_NO) ? axes[AXIS_NO] : V0; v = (v - V0) / (V1 - V0); if (v > 1.0f) v = 1.0f; if (io.NavInputs[NAV_NO] < v) io.NavInputs[NAV_NO] = v; }
        int axes_count = 0, buttons_count = 0;
        const float* axes = glfwGetJoystickAxes(GLFW_JOYSTICK_1, &axes_count);
        const unsigned char* buttons = glfwGetJoystickButtons(GLFW_JOYSTICK_1, &buttons_count);
        MAP_BUTTON(ImGuiNavInput_Activate,   0);     // Cross / A
        MAP_BUTTON(ImGuiNavInput_Cancel,     1);     // Circle / B
        MAP_BUTTON(ImGuiNavInput_Menu,       2);     // Square / X
        MAP_BUTTON(ImGuiNavInput_Input,      3);     // Triangle / Y
        MAP_BUTTON(ImGuiNavInput_DpadLeft,   13);    // D-Pad Left
        MAP_BUTTON(ImGuiNavInput_DpadRight,  11);    // D-Pad Right
        MAP_BUTTON(ImGuiNavInput_DpadUp,     10);    // D-Pad Up
        MAP_BUTTON(ImGuiNavInput_DpadDown,   12);    // D-Pad Down
        MAP_BUTTON(ImGuiNavInput_FocusPrev,  4);     // L1 / LB
        MAP_BUTTON(ImGuiNavInput_FocusNext,  5);     // R1 / RB
        MAP_BUTTON(ImGuiNavInput_TweakSlow,  4);     // L1 / LB
        MAP_BUTTON(ImGuiNavInput_TweakFast,  5);     // R1 / RB
        MAP_ANALOG(ImGuiNavInput_LStickLeft, 0,  -0.3f,  -0.9f);
        MAP_ANALOG(ImGuiNavInput_LStickRight,0,  +0.3f,  +0.9f);
        MAP_ANALOG(ImGuiNavInput_LStickUp,   1,  +0.3f,  +0.9f);
        MAP_ANALOG(ImGuiNavInput_LStickDown, 1,  -0.3f,  -0.9f);
        #undef MAP_BUTTON
        #undef MAP_ANALOG
        if (axes_count > 0 && buttons_count > 0) 
            io.BackendFlags |= ImGuiBackendFlags_HasGamepad; 
        else 
            io.BackendFlags &= ~ImGuiBackendFlags_HasGamepad;
    }
    
    void    ImGui_ImplSdlGL2_InvalidateDeviceObjects()
{
    if (g_FontTexture)
    {
        glDeleteTextures(1, &g_FontTexture);
        ImGui::GetIO().Fonts->TexID = 0;
        g_FontTexture = 0;
    }
}