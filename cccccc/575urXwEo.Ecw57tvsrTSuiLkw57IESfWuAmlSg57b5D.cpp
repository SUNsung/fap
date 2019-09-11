
        
            // Try to check if the exact dynamic type of the instance is statically
    // known.
    if (auto Instance = getInstanceWithExactDynamicType(CMI->getOperand(), CHA))
      return tryDevirtualizeClassMethod(FAS, Instance, CD, ORE);
    
      switch (type->getKind()) {
  case MetadataKind::Class: {
    auto classType = static_cast<const ClassMetadata *>(type);
#if SWIFT_OBJC_INTEROP
    // Peek through artificial subclasses.
    while (classType->isTypeMetadata() && classType->isArtificialSubclass())
      classType = classType->Superclass;
#endif
    description = classType->getDescription();
    break;
  }
  case MetadataKind::Enum:
  case MetadataKind::Optional: {
    auto enumType = static_cast<const EnumMetadata *>(type);
    description = enumType->Description;
    break;
  }
  case MetadataKind::Struct: {
    auto structType = static_cast<const StructMetadata *>(type);
    description = structType->Description;
    break;
  }
  case MetadataKind::ForeignClass: {
    auto foreignType = static_cast<const ForeignClassMetadata *>(type);
    description = foreignType->Description;
    break;
  }
  default:
    return nullptr;
  }
    
        // The core of the algorithm: Mark functions as alive which can be reached
    // from the anchors.
    while (!Worklist.empty()) {
      SILFunction *F = Worklist.back();
      Worklist.pop_back();
      scanFunction(F);
    }
    
    /// Determine whether the given reflection protocol name matches.
static bool reflectionNameMatches(Demangler &dem,
                                  StringRef reflectionName,
                                  StringRef searchName) {
  auto normalized = normalizeReflectionName(dem, reflectionName);
  return searchName.equals(normalized);
}
    
      bool isAddressValid(RemoteAddress Addr, uint64_t Size) const {
    return (uintptr_t)Memory.data() <= Addr.getAddressData() &&
           Addr.getAddressData() + Size <=
               (uintptr_t)Memory.data() + Memory.size();
  }
    
    #ifndef SWIFT_FRONTEND_SUPPLEMENTARYOUTPUTPATHS_H
#define SWIFT_FRONTEND_SUPPLEMENTARYOUTPUTPATHS_H
    
    struct VorbisDecoder;
struct OpusDecoder;
    
      if (i != j || i > jj || i <= ii)
    return false;
    
    #if defined(MBEDTLS_ECP_RANDOMIZE_JAC_ALT) && !defined(MBEDTLS_ECP_INTERNAL_ALT)
#error 'MBEDTLS_ECP_RANDOMIZE_JAC_ALT defined, but not all prerequisites'
#endif
    
        object_buffer_t<fifo_enforcer_sink_t::exit_write_t>::destruction_sentinel_t destroyer(&token->main_write_token);
    wait_interruptible(token->main_write_token.get(), interruptor);
    
    #ifndef GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
#define GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
    
    // Returns a newly created InternalRunDeathTestFlag object with fields
// initialized from the GTEST_FLAG(internal_run_death_test) flag if
// the flag is specified; otherwise returns NULL.
InternalRunDeathTestFlag* ParseInternalRunDeathTestFlag();
    
     private:
  template <typename U>
  friend class linked_ptr;
    
      // Clones a 0-terminated C string, allocating memory using new.  The
  // caller is responsible for deleting the return value using
  // delete[].  Returns the cloned string, or NULL if the input is
  // NULL.
  //
  // This is different from strdup() in string.h, which allocates
  // memory using malloc().
  static const char* CloneCString(const char* c_str);
    
    // AssertyTypeEq<T1, T2>::type is defined iff T1 and T2 are the same
// type.  This can be used as a compile-time assertion to ensure that
// two types are equal.
    
    int main(int argc, char** argv)
{
    // Create GLUT window
    glutInit(&argc, argv);
#ifdef __FREEGLUT_EXT_H__
    glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
#endif
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_MULTISAMPLE);
    glutInitWindowSize(1280, 720);
    glutCreateWindow('Dear ImGui GLUT+OpenGL2 Example');
    }
    
        // Main loop
    bool done = false;
    while (!done)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            ImGui_ImplSDL2_ProcessEvent(&event);
            if (event.type == SDL_QUIT)
                done = true;
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE && event.window.windowID == SDL_GetWindowID(window))
                done = true;
        }
    }
    
        // Main loop
    bool running = true;
    while (running)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplAllegro5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplAllegro5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                ImGui_ImplAllegro5_CreateDeviceObjects();
            }
        }
    }
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    // Specific OpenGL versions
//#define IMGUI_IMPL_OPENGL_ES2     // Auto-detected on Emscripten
//#define IMGUI_IMPL_OPENGL_ES3     // Auto-detected on iOS/Android
    
                newConfig.Insert(name, config(name));
            newConfig.Insert('run', name);
        }
        else
        {
            std::string networkConfigString = networkConfig;
            if (networkConfigString.find_first_of('+') != std::string::npos)
                RuntimeError('\'+\' not allowed in \'networkDescription\' value.  Multiple files cannot be specified via \'networkDescription\' parameter. '
                             'In order to load multiple NDL files (eg, for loading several files of macros), use the \'ndlMacros\' parameter.');
    
            // now get the parameters to the macro added
        ConfigValue paramString = node->GetParamString();
        ParseParameters(newNode, paramString, true /*createNew*/);
        newNode->SetParamString(paramString);
    
            size_t numRecurrentLayers = m_recurrentLayers.size();
    
                Matrix<ElemType> S(-1), U(-1), VT(-1), W(-1);
            chrono::time_point<chrono::system_clock> stTime = chrono::system_clock::now();
            Matrix<ElemType>::SVD(A, S, U, VT, W);
            chrono::time_point<chrono::system_clock> enTime = chrono::system_clock::now();
    
        // Check if this transform is compatible with given one.
    void CheckCompatibility(const SpaceTransform& other) const
    {
        // Transforms are compatible if they have same number of axis transforms.
        if (m_axisTransforms.size() != other.m_axisTransforms.size())
        {
            RuntimeError('Incompatible space transforms.');
        }
    }
    
        // a few more handy operations that occurred multiple times
    bool IsNan() const { return std::isnan(first); }
    EpochCriterion operator-(const EpochCriterion& other) const { return EpochCriterion(first - other.first, second - other.second); }
    void operator+=(const EpochCriterion& other) { first += other.first; second += other.second; }