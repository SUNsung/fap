
        
        #else // USE_GCC_FAST_TLS
    
    #include 'hphp/runtime/vm/jit/vasm-unit.h'
    
    /*
 * Block of Vinstrs, managed by Vunit.
 *
 * A Vblock, in addition to containing a Vinstr stream, also specifies where it
 * should be emitted to.
 */
struct Vblock {
  explicit Vblock(AreaIndex area_idx, uint64_t w)
    : area_idx(area_idx)
    , weight(w) {}
    }
    
        if (mpz_sgn(gmpData) < 0) {
      mpz_clear(gmpData);
    }
    
    #ifdef HAVE_NUMA
    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
    /*
 * Helpers for unconditional and conditional jumps.
 */
void surpriseCheck(IRGS&);
void surpriseCheck(IRGS&, Offset);
void jmpImpl(IRGS&, Offset);
void implCondJmp(IRGS&, Offset taken, bool negate, SSATmp*);
    
    /*
 * dlopen() the embedded shared object given by `desc'.
 *
 * Unfortunately, there's no way to do the equivalent of dlopen() on data
 * within another file, or even in memory.  This means we have to copy the
 * section into a temporary file and then dlopen() that.
 *
 * Returns the result of dlopen() on success, else nullptr.  Also logs the
 * failure condition with Logger on failure.
 */
void* dlopen_embedded_data(const embedded_data& desc, char* tmp_filename);
    
    
    {/////////////////////////////////////////////////////////////////////////////
}
#endif

    
    TEST(LogTest, ReadThirdStart) {
  CheckInitialOffsetRecord(20014, 2);
}
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
    // Helper class that locks a mutex on construction and unlocks the mutex when
// the destructor of the MutexLock object is invoked.
//
// Typical usage:
//
//   void MyClass::MyMethod() {
//     MutexLock l(&mu_);       // mu_ is an instance variable
//     ... some complex code, possibly with multiple return paths ...
//   }
    
    // A very simple random number generator.  Not especially good at
// generating truly random bits, but good enough for our needs in this
// package.
class Random {
 private:
  uint32_t seed_;
 public:
  explicit Random(uint32_t s) : seed_(s & 0x7fffffffu) {
    // Avoid bad seeds.
    if (seed_ == 0 || seed_ == 2147483647L) {
      seed_ = 1;
    }
  }
  uint32_t Next() {
    static const uint32_t M = 2147483647L;   // 2^31-1
    static const uint64_t A = 16807;  // bits 14, 8, 7, 5, 2, 1, 0
    // We are computing
    //       seed_ = (seed_ * A) % M,    where M = 2^31-1
    //
    // seed_ must not be zero or M, or else all subsequent computed values
    // will be zero or M respectively.  For all other values, seed_ will end
    // up cycling through every number in [1,M-1]
    uint64_t product = seed_ * A;
    }
    }
    
    
    {}  // namespace leveldb
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        io.KeyCtrl = s3eKeyboardGetState(s3eKeyLeftControl) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightControl) == S3E_KEY_STATE_DOWN;
    io.KeyShift = s3eKeyboardGetState(s3eKeyLeftShift) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightShift) == S3E_KEY_STATE_DOWN;
    io.KeyAlt = s3eKeyboardGetState(s3eKeyLeftAlt) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightAlt) == S3E_KEY_STATE_DOWN;
    io.KeySuper = s3eKeyboardGetState(s3eKeyLeftWindows) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightWindows) == S3E_KEY_STATE_DOWN;
    
    // Win32 data
static HWND                     g_hWnd = 0;
static INT64                    g_Time = 0;
static INT64                    g_TicksPerSecond = 0;
static ImGuiMouseCursor         g_LastMouseCursor = ImGuiMouseCursor_COUNT;
    
        // Main loop
    bool running = true;
    while (running)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplA5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplA5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                Imgui_ImplA5_CreateDeviceObjects();
            }
        }
        ImGui_ImplA5_NewFrame();
    }
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
        ImGui_ImplDX10_NewFrame();
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
    
        // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        glfwPollEvents();
        ImGui_ImplGlfwGL3_NewFrame();
    }
    
                ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our windows open/close state
            ImGui::Checkbox('Another Window', &show_another_window);