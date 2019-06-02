
        
        template <typename Key, class Comparator>
void SkipList<Key, Comparator>::Insert(const Key& key) {
  // TODO(opt): We can use a barrier-free variant of FindGreaterOrEqual()
  // here since Insert() is externally synchronized.
  Node* prev[kMaxHeight];
  Node* x = FindGreaterOrEqual(key, prev);
    }
    
    
    {}  // namespace leveldb

    
    
    {  static CacheTest* current_;
};
CacheTest* CacheTest::current_;
    
    void CHistoryCollector::AddBinOpToHistory(int nOpCode, bool fNoRepetition)
{
    int iCommandEnd = AddCommand(std::make_shared<CBinaryCommand>(nOpCode));
    m_lastBinOpStartIndex = IchAddSzToEquationSz(L' ', -1);
    }
    
    
    {        DisplayNum();
        m_HistoryCollector.AddUnaryOpToHistory(IDC_SIGN, m_bInv, m_angletype);
    }
    break;
    
    CalculatorHistory::CalculatorHistory(size_t maxSize)
    : m_maxHistorySize(maxSize)
{
}
    
        static void LoadEngineStrings(CalculationManager::IResourceProvider& resourceProvider);
    static int IdStrFromCmdId(int id)
    {
        return id - IDC_FIRSTCONTROL + IDS_ENGINESTR_FIRST;
    }
    
    
    {
    {        #define MAP_BUTTON(NAV_NO, BUTTON_ENUM)     { io.NavInputs[NAV_NO] = (gamepad.wButtons & BUTTON_ENUM) ? 1.0f : 0.0f; }
        #define MAP_ANALOG(NAV_NO, VALUE, V0, V1)   { float vn = (float)(VALUE - V0) / (float)(V1 - V0); if (vn > 1.0f) vn = 1.0f; if (vn > 0.0f && io.NavInputs[NAV_NO] < vn) io.NavInputs[NAV_NO] = vn; }
        MAP_BUTTON(ImGuiNavInput_Activate,      XINPUT_GAMEPAD_A);              // Cross / A
        MAP_BUTTON(ImGuiNavInput_Cancel,        XINPUT_GAMEPAD_B);              // Circle / B
        MAP_BUTTON(ImGuiNavInput_Menu,          XINPUT_GAMEPAD_X);              // Square / X
        MAP_BUTTON(ImGuiNavInput_Input,         XINPUT_GAMEPAD_Y);              // Triangle / Y
        MAP_BUTTON(ImGuiNavInput_DpadLeft,      XINPUT_GAMEPAD_DPAD_LEFT);      // D-Pad Left
        MAP_BUTTON(ImGuiNavInput_DpadRight,     XINPUT_GAMEPAD_DPAD_RIGHT);     // D-Pad Right
        MAP_BUTTON(ImGuiNavInput_DpadUp,        XINPUT_GAMEPAD_DPAD_UP);        // D-Pad Up
        MAP_BUTTON(ImGuiNavInput_DpadDown,      XINPUT_GAMEPAD_DPAD_DOWN);      // D-Pad Down
        MAP_BUTTON(ImGuiNavInput_FocusPrev,     XINPUT_GAMEPAD_LEFT_SHOULDER);  // L1 / LB
        MAP_BUTTON(ImGuiNavInput_FocusNext,     XINPUT_GAMEPAD_RIGHT_SHOULDER); // R1 / RB
        MAP_BUTTON(ImGuiNavInput_TweakSlow,     XINPUT_GAMEPAD_LEFT_SHOULDER);  // L1 / LB
        MAP_BUTTON(ImGuiNavInput_TweakFast,     XINPUT_GAMEPAD_RIGHT_SHOULDER); // R1 / RB
        MAP_ANALOG(ImGuiNavInput_LStickLeft,    gamepad.sThumbLX,  -XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE, -32768);
        MAP_ANALOG(ImGuiNavInput_LStickRight,   gamepad.sThumbLX,  +XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE, +32767);
        MAP_ANALOG(ImGuiNavInput_LStickUp,      gamepad.sThumbLY,  +XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE, +32767);
        MAP_ANALOG(ImGuiNavInput_LStickDown,    gamepad.sThumbLY,  -XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE, -32767);
        #undef MAP_BUTTON
        #undef MAP_ANALOG
    }
}
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
    // Build with, e.g:
//   # cl.exe binary_to_compressed_c.cpp
//   # gcc binary_to_compressed_c.cpp
// You can also find a precompiled Windows binary in the binary/demo package available from https://github.com/ocornut/imgui
    
    // Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
    
        // Create the D3DDevice
    ZeroMemory(&g_d3dpp, sizeof(g_d3dpp));
    g_d3dpp.Windowed = TRUE;
    g_d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
    g_d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;
    g_d3dpp.EnableAutoDepthStencil = TRUE;
    g_d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
    g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_ONE;           // Present with vsync
    //g_d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;   // Present without vsync, maximum unthrottled framerate
    if (g_pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &g_d3dpp, &g_pd3dDevice) < 0)
        return false;
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextWithHint(label, hint, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}

    
    using apollo::common::ErrorCode;
    
    TEST(SocketCanClientRawTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::SOCKET_CAN_RAW);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    
    {  Byte t1(bytes + 5);
  uint32_t t = t1.get_byte(6, 2);
  x <<= 2;
  x |= t;
  double ret = x * CLUSTER_VREL_RES + CLUSTER_VREL_LONG_MIN;
  return ret;
}
    
    #include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
    unsigned int BaseMapMatrix::CreateBinary(unsigned char* buf,
                                         unsigned int buf_size) const {
  return 0;
}
    
    // config detail: {'name': 'motor_current', 'offset': 0.0, 'precision': 0.001,
// 'len': 32, 'is_signed_var': False, 'physical_range': '[0|4294967.295]',
// 'bit': 7, 'type': 'double', 'order': 'motorola', 'physical_unit': 'amps'}
double Brakemotorrpt170::motor_current(const std::uint8_t* bytes,
                                       int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 8);
    }
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    // config detail: {'name': 'output_value', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 39,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Brakerpt6c::output_value(const std::uint8_t* bytes,
                                int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 8);
    }