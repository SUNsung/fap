
        
        TegraRowOp_Invoker(split2, split2, 1, 2, 0, RANGE_DATA(ST, src1_data, 2*sizeof(ST)), range.end-range.start,
                                            RANGE_DATA(DT, dst1_data, sizeof(DT)), range.end-range.start,
                                            RANGE_DATA(DT, dst2_data, sizeof(DT)), range.end-range.start)
TegraRowOp_Invoker(split3, split3, 1, 3, 0, RANGE_DATA(ST, src1_data, 3*sizeof(ST)), range.end-range.start,
                                            RANGE_DATA(DT, dst1_data, sizeof(DT)), range.end-range.start,
                                            RANGE_DATA(DT, dst2_data, sizeof(DT)), range.end-range.start,
                                            RANGE_DATA(DT, dst3_data, sizeof(DT)), range.end-range.start)
TegraRowOp_Invoker(split4, split4, 1, 4, 0, RANGE_DATA(ST, src1_data, 4*sizeof(ST)), range.end-range.start,
                                            RANGE_DATA(DT, dst1_data, sizeof(DT)), range.end-range.start,
                                            RANGE_DATA(DT, dst2_data, sizeof(DT)), range.end-range.start,
                                            RANGE_DATA(DT, dst3_data, sizeof(DT)), range.end-range.start,
                                            RANGE_DATA(DT, dst4_data, sizeof(DT)), range.end-range.start)
#define TEGRA_SPLIT64S(type, src, dst, len, cn) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
        cn == 2 ? \
        parallel_for_(Range(0, len), \
        TegraRowOp_split2_Invoker<const type, type>(src, dst[0], dst[1]), \
        (len) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        cn == 3 ? \
        parallel_for_(Range(0, len), \
        TegraRowOp_split3_Invoker<const type, type>(src, dst[0], dst[1], dst[2]), \
        (len) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        cn == 4 ? \
        parallel_for_(Range(0, len), \
        TegraRowOp_split4_Invoker<const type, type>(src, dst[0], dst[1], dst[2], dst[3]), \
        (len) / static_cast<double>(1<<16)), \
        CV_HAL_ERROR_OK : \
        CV_HAL_ERROR_NOT_IMPLEMENTED \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vabd(v_src0, v_src1);
    }
    
    void add(const Size2D &size,
         const s8 * src0Base, ptrdiff_t src0Stride,
         const s8 * src1Base, ptrdiff_t src1Stride,
         s8 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    if (policy == CONVERT_POLICY_SATURATE)
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddSaturate<s8, s16>());
    }
    else
    {
        internal::vtransform(size,
                             src0Base, src0Stride,
                             src1Base, src1Stride,
                             dstBase, dstStride,
                             AddWrap<s8, s16>());
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
    (void)policy;
#endif
}
    
            size_t x = 0;
        for (; x <= colsn - 4; x += 4)
        {
            internal::prefetch(ln0 + x);
            internal::prefetch(ln1 + x);
            internal::prefetch(ln2 + x);
box3x3s32_vert_ll:
            int32x4_t v0 = vld1q_s32(ln0+x);
            int32x4_t v1 = vld1q_s32(ln1+x);
            int32x4_t v2 = vld1q_s32(ln2+x);
    }
    
            if ((stack_top - stack_bottom) + size.width > maxsize)
        {
            ptrdiff_t sz = (ptrdiff_t)(stack_top - stack_bottom);
            maxsize = maxsize * 3/2;
            stack.resize(maxsize);
            stack_bottom = &stack[0];
            stack_top = stack_bottom + sz;
        }
    
    bool isSupportedConfiguration()
{
#ifdef CAROTENE_NEON
    return true;
#else
    return false;
#endif
}
    
    ptrdiff_t borderInterpolate(ptrdiff_t _p, size_t _len, BORDER_MODE borderType, size_t startMargin = 0, size_t endMargin = 0);
    
    #define CVTS_FUNC1(T1, SIMD_SIZE, CVTSINIT, CVTSROW)                             \
    void convertScale(const Size2D &_size,                                       \
                      const T1 * srcBase, ptrdiff_t srcStride,                   \
                      T1 * dstBase, ptrdiff_t dstStride,                         \
                      f64 alpha, f64 beta)                                       \
    {                                                                            \
        internal::assertSupportedConfiguration();                                \
        Size2D size(_size);                                                      \
        if (srcStride == dstStride &&                                            \
            srcStride == (ptrdiff_t)(size.width))                                \
        {                                                                        \
            size.width *= size.height;                                           \
            size.height = 1;                                                     \
        }                                                                        \
        const ptrdiff_t sstep = srcStride / sizeof(T1);                          \
        const ptrdiff_t dstep = dstStride / sizeof(T1);                          \
        const size_t w = size.width & ~(SIMD_SIZE-1);                            \
        if (size.width >= SIMD_SIZE)                                             \
        {                                                                        \
            const T1* _src = srcBase;                                            \
            T1* _dst = dstBase;                                                  \
            CVTSINIT                                                             \
            for (ptrdiff_t h = size.height; h--; _src += sstep, _dst += dstep )  \
                CVTSROW                                                          \
        }                                                                        \
        if(w < size.width)                                                       \
        {                                                                        \
            const T1* _src = srcBase;                                            \
            T1* _dst = dstBase;                                                  \
            for (ptrdiff_t h = size.height; h--; _src += sstep, _dst += dstep )  \
                for(size_t i = w; i < size.width; i++ )                          \
                    _dst[i] = internal::saturate_cast<T1>(_src[i]*alpha + beta); \
        }                                                                        \
    }
    
        // 4. Gather glyphs sizes so we can pack them in our virtual canvas.
    // 8. Render/rasterize font characters into the texture
    int total_surface = 0;
    int buf_rects_out_n = 0;
    for (int src_i = 0; src_i < src_tmp_array.Size; src_i++)
    {
        ImFontBuildSrcDataFT& src_tmp = src_tmp_array[src_i];
        ImFontConfig& cfg = atlas->ConfigData[src_i];
        if (src_tmp.GlyphsCount == 0)
            continue;
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {    return 0;
}

    
            // 3. Show another simple window.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    // Main code
int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    ::RegisterClassEx(&wc);
    HWND hwnd = ::CreateWindow(wc.lpszClassName, _T('Dear ImGui DirectX10 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
    
    // Main code
int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    ::RegisterClassEx(&wc);
    HWND hwnd = ::CreateWindow(wc.lpszClassName, _T('Dear ImGui DirectX9 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_WindowFlags window_flags = (SDL_WindowFlags)(SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    SDL_Window* window = SDL_CreateWindow('Dear ImGui SDL2+OpenGL example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, window_flags);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;   // Enable Gamepad Controls