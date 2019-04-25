
        
          // Copy constructor.
  Message(const Message& msg) : ss_(new ::std::stringstream) {  // NOLINT
    *ss_ << msg.GetString();
  }
    
    TEST_P(FooTest, HasBlahBlah) {
  ...
}
    
      static void Print(const T& value, ::std::ostream* os) {
    // Prints the address of the value.  We use reinterpret_cast here
    // as static_cast doesn't compile when T is a function type.
    *os << '@' << reinterpret_cast<const void*>(&value) << ' ';
    }
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE DIRECTLY.
//
// Expands to the name of the variable used to remember the names of
// the registered tests in the given test case.
# define GTEST_REGISTERED_TEST_NAMES_(TestCaseName) \
  gtest_registered_test_names_##TestCaseName##_
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22>
struct Types22 {
  typedef T1 Head;
  typedef Types21<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22> Tail;
};
    
    // This provides interface PrimeTable that determines whether a number is a
// prime and determines a next prime number. This interface is used
// in Google Test samples demonstrating use of parameterized tests.
    
      // Now, we have that n is odd and n >= 3.
    
      static int allocated() { return allocated_; }
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
    
    
template <class ConfigRecordType>
void DataReader::InitFromConfig(const ConfigRecordType& /*config*/)
{
    RuntimeError('Init shouldn't be called, use constructor');
    // not implemented, calls the underlying class instead
}
    
    template <typename TVector>
inline void RandomShuffleMT(TVector& v, std::mt19937_64& rng)
{
    foreach_index(currentLocation, v)
    {
        // Pick a random location and swap with current one
        const size_t randomLocation = RandMT(0, v.size(), rng);
        std::swap(v[currentLocation], v[randomLocation]);
    }
}
    
    #endif

    
         // GP Register cannot be greater than 31
     assert(static_cast<uint32_t>(rt) < 32);
     assert(static_cast<uint32_t>(ra) < 32);
     assert(static_cast<uint32_t>(rb) < 32);
     assert(static_cast<uint32_t>(bc) < 32);
    
    #include <folly/ScopeGuard.h>
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
    /*
 * Attempt to log an entry to the perf warning service.
 *
 * If StructuredLog::enabled() returns false or this event is discarded by the
 * effective sample rate, nothing will be logged. If both of those checks pass,
 * fillCols will be passed a StructuredLogEntry& to populate, which will then
 * be logged. The column names 'event_name' and 'priority' are reserved and
 * will be overwritten is fillCols() sets them.
 *
 * The effective sample rate is determined by Eval.PerfWarningSampleRate * rate
 * (or kDefaultPerfWarningRate for the overloads that don't take a rate). If
 * the effective sample rate is 0, all events will be discarded.
 */
template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols);
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols);
    
        // Create Window Surface
    VkSurfaceKHR surface;
    VkResult err = glfwCreateWindowSurface(g_Instance, window, g_Allocator, &surface);
    check_vk_result(err);
    
    namespace ImGuiFreeType
{
    // Hinting greatly impacts visuals (and glyph sizes).
    // When disabled, FreeType generates blurrier glyphs, more or less matches the stb's output.
    // The Default hinting mode usually looks good, but may distort glyphs in an unusual way.
    // The Light hinting mode generates fuzzier glyphs but better matches Microsoft's rasterizer.
    }
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_WIN32_FUNCTIONS                     // [Win32] Won't use and link with any Win32 function.
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().
    
    IMGUI_IMPL_API bool     ImGui_ImplDX9_Init(IDirect3DDevice9* device);
IMGUI_IMPL_API void     ImGui_ImplDX9_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX9_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    struct GLFWwindow;
    
    // Main code
int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    ::RegisterClassEx(&wc);
    HWND hwnd = ::CreateWindow(wc.lpszClassName, _T('Dear ImGui DirectX12 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    
    {    // 3. Show another simple window.
    if (show_another_window)
    {
        ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
        ImGui::Text('Hello from another window!');
        if (ImGui::Button('Close Me'))
            show_another_window = false;
        ImGui::End();
    }
}