
        
        ${TensorDenseOrSparse}
    
        // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
    if (hud->show_another_window)
    {
        ImGui::Begin('Another Window', &hud->show_another_window);
        ImGui::Text('Hello from another window!');
        ImGui::ColorEdit3('Cube 1 Color', hud->cubeColor1);
        ImGui::ColorEdit3('Cube 2 Color', hud->cubeColor2);
        ImGui::SliderFloat('Rotation Speed', &hud->rotation_speed, 0.0f, 200.0f);
        if (ImGui::Button('Close Me'))
            hud->show_another_window = false;
        ImGui::End();
    }
    
    IMGUI_API bool        ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_API void        ImGui_Marmalade_Shutdown();
IMGUI_API void        ImGui_Marmalade_NewFrame();
IMGUI_API void        ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
        /// A structure that describe a glyph.
    struct GlyphInfo 
    {
        float Width;		// Glyph's width in pixels.
        float Height;		// Glyph's height in pixels.
        float OffsetX;		// The distance from the origin ('pen position') to the left of the glyph.
        float OffsetY;		// The distance from the origin to the top of the glyph. This is usually a value < 0.
        float AdvanceX;		// The distance from the origin to the origin of the next glyph. This is usually a value > 0.
    };
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
    
        // Update OS mouse cursor with the cursor requested by imgui
    ImGuiMouseCursor mouse_cursor = io.MouseDrawCursor ? ImGuiMouseCursor_None : ImGui::GetMouseCursor();
    if (g_LastMouseCursor != mouse_cursor)
    {
        g_LastMouseCursor = mouse_cursor;
        ImGui_ImplWin32_UpdateMouseCursor();
    }