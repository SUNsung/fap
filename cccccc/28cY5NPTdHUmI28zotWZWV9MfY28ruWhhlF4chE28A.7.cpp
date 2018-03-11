CvRect cvGetValidDisparityROI( CvRect roi1, CvRect roi2, int minDisparity,
                              int numberOfDisparities, int SADWindowSize )
{
    return (CvRect)cv::getValidDisparityROI( roi1, roi2, minDisparity,
                                            numberOfDisparities, SADWindowSize );
}
    
    
    {            findCorner(quads_approx[k], corners[i], quad_corners[k]);
            quad_corners[k] += Point2f(0.5f, 0.5f);
        }
    
    #elif (defined(OPUS_X86_MAY_HAVE_SSE) && !defined(OPUS_X86_PRESUME_SSE)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE2) && !defined(OPUS_X86_PRESUME_SSE2)) || \
  (defined(OPUS_X86_MAY_HAVE_SSE4_1) && !defined(OPUS_X86_PRESUME_SSE4_1)) || \
  (defined(OPUS_X86_MAY_HAVE_AVX) && !defined(OPUS_X86_PRESUME_AVX))
    
    #elif (defined(HAVE_LRINT))
    
    /*Constants used by the entropy encoder/decoder.*/
    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    IMGUI_API bool        ImGui_ImplDX9_Init(void* hwnd, IDirect3DDevice9* device);
IMGUI_API void        ImGui_ImplDX9_Shutdown();
IMGUI_API void        ImGui_ImplDX9_NewFrame();
IMGUI_API void        ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
    
    
    {    return g_ClipboardText;
}
    
    IMGUI_API bool        ImGui_ImplSdlGL2_Init(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL2_NewFrame(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_RenderDrawData(ImDrawData* draw_data);
IMGUI_API bool        ImGui_ImplSdlGL2_ProcessEvent(SDL_Event* event);
    
        // Cleanup
    ImGui_ImplA5_Shutdown();
    ImGui::DestroyContext();
    al_destroy_event_queue(queue);
    al_destroy_display(display);
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
        g_ShaderHandle = glCreateProgram();
    g_VertHandle = glCreateShader(GL_VERTEX_SHADER);
    g_FragHandle = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(g_VertHandle, 2, vertex_shader_with_version, NULL);
    glShaderSource(g_FragHandle, 2, fragment_shader_with_version, NULL);
    glCompileShader(g_VertHandle);
    glCompileShader(g_FragHandle);
    glAttachShader(g_ShaderHandle, g_VertHandle);
    glAttachShader(g_ShaderHandle, g_FragHandle);
    glLinkProgram(g_ShaderHandle);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {    return true;
}