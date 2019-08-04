
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Safe container for an owned PyObject. On destruction, the reference count of
// the contained object will be decremented.
using Safe_PyObjectPtr = std::unique_ptr<PyObject, detail::PyDecrefDeleter>;
Safe_PyObjectPtr make_safe(PyObject* o);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // This enum represents potential configurations of L1/shared memory when
// running a particular kernel. These values represent user preference, and
// the runtime is not required to respect these choices.
enum class KernelCacheConfig {
  // Indicates no preference for device L1/shared memory configuration.
  kNoPreference,
    }
    
            explicit Rational(PRAT prat) noexcept;
        PRAT ToPRAT() const;
    
        std::array<CalcEngine::Rational, NUM_WIDTH_LENGTH> m_chopNumbers;      // word size enforcement
    std::array<std::wstring, NUM_WIDTH_LENGTH> m_maxDecimalValueStrings;   // maximum values represented by a given word width based off m_chopNumbers
    static std::unordered_map<std::wstring, std::wstring> s_engineStrings; // the string table shared across all instances
    wchar_t m_decimalSeparator;
    wchar_t m_groupSeparator;
    
        case IDM_DEG:
    case IDM_RAD:
    case IDM_GRAD:
        m_angletype = static_cast<ANGLE_TYPE>(wParam - IDM_DEG);
        break;
    
        // to be changed when pszexp is back
    tokens->GetString(&generatedExpression);
    // Prefixing and suffixing the special Unicode markers to ensure that the expression
    // in the history doesn't get broken for RTL languages
    spHistoryItem->historyItemVector.expression = L'\u202d' + generatedExpression + L'\u202c';
    spHistoryItem->historyItemVector.result = wstring(result);
    addedIndex = AddItem(spHistoryItem);
    
    using namespace CalculatorApp::Common::Automation;
using namespace Windows::UI::Xaml::Automation;
using namespace Windows::UI::Xaml::Automation::Peers;
using namespace Windows::UI::Xaml::Controls;
    
    NarratorAnnouncement::NarratorAnnouncement(
    String ^ announcement,
    String ^ activityId,
    AutomationNotificationKind kind,
    AutomationNotificationProcessing processing)
    : m_announcement(announcement)
    , m_activityId(activityId)
    , m_kind(kind)
    , m_processing(processing)
{
}
    
    
    {    // By default ImGuiFreeType will use IM_ALLOC()/IM_FREE().
    // However, as FreeType does lots of allocations we provide a way for the user to redirect it to a separate memory heap if desired:
    IMGUI_API void SetAllocatorFunctions(void* (*alloc_func)(size_t sz, void* user_data), void (*free_func)(void* ptr, void* user_data), void* user_data = NULL);
}

    
    // Main code
int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    ::RegisterClassEx(&wc);
    HWND hwnd = ::CreateWindow(wc.lpszClassName, _T('Dear ImGui DirectX9 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    // DirectX data
static LPDIRECT3DDEVICE9        g_pd3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9  g_pVB = NULL;
static LPDIRECT3DINDEXBUFFER9   g_pIB = NULL;
static LPDIRECT3DTEXTURE9       g_FontTexture = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();

    
        // Cleanup
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    
        // Main loop
    while (true)
    {
        if (s3eDeviceCheckQuitRequest())
            break;
    }
    
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
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the example_sdl_opengl3/ folder**
// See imgui_impl_sdl.cpp for details.
    
     protected:
  Config config_;
  std::unique_ptr<Input> input_ = nullptr;
  std::unique_ptr<Input> positioning_input_ = nullptr;
  std::string topic_;
  double packet_rate_ = 0.0;
    
    namespace apollo {
namespace prediction {
    }
    }
    
    #include 'cyber/record/record_viewer.h'
    
    
    {  Notify();
  return true;
}
    
    #include 'modules/planning/math/curve_math.h'