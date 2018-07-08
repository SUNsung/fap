
        
        template <typename T1, typename T2, typename T3, typename T4>
internal::ValueArray4<T1, T2, T3, T4> Values(T1 v1, T2 v2, T3 v3, T4 v4) {
  return internal::ValueArray4<T1, T2, T3, T4>(v1, v2, v3, v4);
}
    
    // Overloads for various char types.
GTEST_API_ void PrintTo(unsigned char c, ::std::ostream* os);
GTEST_API_ void PrintTo(signed char c, ::std::ostream* os);
inline void PrintTo(char c, ::std::ostream* os) {
  // When printing a plain char, we always treat it as unsigned.  This
  // way, the output won't be affected by whether the compiler thinks
  // char is signed or not.
  PrintTo(static_cast<unsigned char>(c), os);
}
    
    
    {  GTEST_DISALLOW_COPY_AND_ASSIGN_(SingleFailureChecker);
};
    
      // Returns true iff the test part failed.
  bool failed() const { return type_ != kSuccess; }
    
    #endif  // GTEST_HAS_DEATH_TEST
    
      // Given directory = 'dir', relative_path = 'test.xml',
  // returns 'dir/test.xml'.
  // On Windows, uses \ as the separator rather than /.
  static FilePath ConcatPaths(const FilePath& directory,
                              const FilePath& relative_path);
    
            begin$(j)_(other.begin$(j)_),
        end$(j)_(other.end$(j)_),
        current$(j)_(other.current$(j)_)
]] {
      ComputeCurrentValue();
    }
    
     private:
  const UserThreadFunc func_;  // User-supplied thread function.
  const T param_;  // User-supplied parameter to the thread function.
  // When non-NULL, used to block execution until the controller thread
  // notifies.
  Notification* const thread_can_start_;
  bool finished_;  // true iff we know that the thread function has finished.
  pthread_t thread_;  // The native thread object.
    
    // Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
    }
    
    	GetModuleFileName(NULL, exeDir, sizeof(exeDir));
    
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
    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('ImGui SDL2+OpenGL3 example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    gl3wInit();
    
        // From SDL_ttf: Handy routines for converting from fixed point
    #define FT_CEIL(X)  (((X + 63) & -64) / 64)
    
    #define DX12_ENABLE_DEBUG_LAYER     0
    
    static void SetupVulkan(const char** extensions, uint32_t extensions_count)
{
    VkResult err;
    }
    
    // Process Win32 mouse/keyboard inputs. 
// You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
// PS: In this Win32 handler, we use the capture API (GetCapture/SetCapture/ReleaseCapture) to be able to read mouse coordinations when dragging mouse outside of our window bounds.
// PS: We treat DBLCLK messages as regular mouse down messages, so this code will work on windows classes that have the CS_DBLCLKS flag set. Our own example app code doesn't set this flag.
IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui::GetCurrentContext() == NULL)
        return 0;
    }
    
    void ImGui_ImplDX11_Shutdown()
{
    ImGui_ImplDX11_InvalidateDeviceObjects();
    g_pd3dDevice = NULL;
    g_pd3dDeviceContext = NULL;
}
    
    void ImGui_ImplFreeGLUT_SpecialUpFunc(int key, int x, int y)
{
    //printf('key_up_func %d\n', key);
    ImGuiIO& io = ImGui::GetIO();
    if (key + 256 < IM_ARRAYSIZE(io.KeysDown))
        io.KeysDown[key + 256] = false;
    ImGui_ImplFreeGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
    
    {    // Internal fields
    rocksdb::Options options_;
    rocksdb::Status status_;
    rocksdb::DB* db_;
    std::unordered_map<std::string, rocksdb::ColumnFamilyHandle*>
        columnFamilies_;
};
    
      // Extend record types with the following special values
  enum {
    kEof = kMaxRecordType + 1,
    // Returned whenever we find an invalid physical record.
    // Currently there are three situations in which this happens:
    // * The record has an invalid CRC (ReadPhysicalRecord reports a drop)
    // * The record is a 0-length record (No drop is reported)
    // * The record is below constructor's initial_offset (No drop is reported)
    kBadRecord = kMaxRecordType + 2,
    // Returned when we fail to read a valid header.
    kBadHeader = kMaxRecordType + 3,
    // Returned when we read an old record from a previous user of the log.
    kOldRecord = kMaxRecordType + 4,
    // Returned when we get a bad record length
    kBadRecordLen = kMaxRecordType + 5,
    // Returned when we get a bad record checksum
    kBadRecordChecksum = kMaxRecordType + 6,
  };
    
    #ifndef JAVA_ROCKSJNI_STATISTICSJNI_H_
#define JAVA_ROCKSJNI_STATISTICSJNI_H_
    
      class LoggerJniCallback : public JniCallback, public Logger {
   public:
     LoggerJniCallback(JNIEnv* env, jobject jLogger);
     ~LoggerJniCallback();
    }