
        
        /**
 * A transliterator that removes text.
 * @author Alan Liu
 */
class RemoveTransliterator : public Transliterator {
    }
    
    
//
//   compile with default flags, UText mode
//
RegexPattern * U_EXPORT2
RegexPattern::compile(UText               *regex,
                      UParseError         &pe,
                      UErrorCode          &err)
{
    return compile(regex, 0, pe, err);
}
    
        UnicodeString &displayScripts(UnicodeString &dest) const; // append script names to dest string.
    ScriptSet & parseScripts(const UnicodeString &scriptsString, UErrorCode &status);  // Replaces ScriptSet contents.
    
    U_NAMESPACE_END
    
    #ifndef __SHARED_BREAKITERATOR_H__
#define __SHARED_BREAKITERATOR_H__
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    #include 'unicode/uobject.h'
#include 'unicode/utypes.h'
    
    
    {    /**
     * Sets U_ILLEGAL_ARGUMENT_ERROR if the keyword is not a plural form.
     *
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword
     */
    static int32_t indexFromString(const UnicodeString &keyword, UErrorCode &errorCode);
};
    
    
    {    offset = cursor;
    return U_MATCH;
}
    
    
    {    return;
}
    
    
    {private:
    int nextDifferentCharacterIndex(const vector<int> &nums, int p){
        for( ; p < nums.size() ; p ++ )
            if( nums[p] != nums[p - 1] )
                break;
        return p;
    }
};
    
    
    {    return 0;
}

    
    using namespace std;
    
    // Another Classic Non-Recursive algorithm for preorder traversal
// Time Complexity: O(n), n is the node number in the tree
// Space Complexity: O(h), h is the height of the tree
class Solution {
    }
    
    using namespace std;
    
    #include <iostream>
#include <vector>
#include <stack>
    
    int main(int, char**)
{
    // Setup Allegro
    al_init();
    al_install_keyboard();
    al_install_mouse();
    al_init_primitives_addon();
    al_set_new_display_flags(ALLEGRO_RESIZABLE);
    ALLEGRO_DISPLAY* display = al_create_display(1280, 720);
    al_set_window_title(display, 'Dear ImGui Allegro 5 example');
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_mouse_event_source());
    }
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // Poll and handle messages (inputs, window resize, etc.)
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
    }
    
    // Implemented features:
//  [X] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
//  [X] Platform: Clipboard support.
//  [X] Platform: Keyboard arrays indexed using SDL_SCANCODE_* codes, e.g. ImGui::IsKeyPressed(SDL_SCANCODE_SPACE).
// Missing features:
//  [ ] Platform: SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
//  [ ] Platform: Gamepad support (need to use SDL_GameController API to fill the io.NavInputs[] value when ImGuiConfigFlags_NavEnableGamepad is set).
    
            // If you are using this code with non-legacy OpenGL header/contexts (which you should not, prefer using imgui_impl_opengl3.cpp!!), 
        // you may need to backup/reset/restore current shader using the commented lines below.
        //GLint last_program; 
        //glGetIntegerv(GL_CURRENT_PROGRAM, &last_program);
        //glUseProgram(0);
        ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
        //glUseProgram(last_program);
    
            D3DCompile(vertexShader, strlen(vertexShader), NULL, NULL, NULL, 'main', 'vs_4_0', 0, 0, &g_pVertexShaderBlob, NULL);
        if (g_pVertexShaderBlob == NULL) // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        if (g_pd3dDevice->CreateVertexShader((DWORD*)g_pVertexShaderBlob->GetBufferPointer(), g_pVertexShaderBlob->GetBufferSize(), &g_pVertexShader) != S_OK)
            return false;