
        
        
    {	mix_udata = p_userdata;
	mix_callback = p_callback;
}
    
    #endif

    
    		md->unlock();
    
    #endif // MIDI_DRIVER_ALSAMIDI_H
#endif // ALSAMIDI_ENABLED

    
    #endif // MIDI_DRIVER_WINMIDI_H
#endif // WINMIDI_ENABLED

    
    void GDAPI godot_pool_color_array_new_with_array(godot_pool_color_array *r_dest, const godot_array *p_a) {
	PoolVector<Color> *dest = (PoolVector<Color> *)r_dest;
	Array *a = (Array *)p_a;
	memnew_placement(dest, PoolVector<Color>);
    }
    
    #include 'core/error_macros.h'
    
    
    {	return 0;
}

    
        // Setup Platform/Renderer bindings
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX10_Init(g_pd3dDevice);
    
        // Decide GL+GLSL versions
#if __APPLE__
    // GL 3.2 Core + GLSL 150
    const char* glsl_version = '#version 150';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG); // Always required on Mac
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = '#version 130';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
#endif