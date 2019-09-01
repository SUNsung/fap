
        
            void KeyChord::Modifiers(Settings::KeyModifiers const& value)
    {
        _modifiers = value;
    }
    
      void visitInitExistentialValueInst(InitExistentialValueInst *IEVI) {
    SGM.useConformancesFromType(IEVI->getFormalConcreteType());
    SGM.useConformancesFromObjectiveCType(IEVI->getFormalConcreteType());
    for (auto conformance : IEVI->getConformances())
      SGM.useConformance(conformance);
  }
    
      // If we have a value that is owned, but that we are going to use in as a
  // guaranteed argument, we need to borrow/unborrow the argument. Otherwise, we
  // will introduce new consuming uses. In contrast, if we have an owned value,
  // we are ok due to the forwarding nature of upcasts.
  SmallVector<SILValue, 8> NewArgBorrows;
    
    private:
  /// The ClassDecl mapped to this VTable.
  ClassDecl *Class;
    
    
    {#ifndef NDEBUG
  LLVM_ATTRIBUTE_DEPRECATED(void dump(SourceManager &SM, llvm::raw_ostream &OS = llvm::errs(),
                            unsigned Indent = 0) const,
                  'only for use in the debugger');
  LLVM_ATTRIBUTE_DEPRECATED(void dump(SILModule &Mod) const, 'only for use in the debugger');
#endif
};
    
      const ClosureBindingMetadataSource *
  createClosureBinding(unsigned Index) {
    return ClosureBindingMetadataSource::create(*this, Index);
  }
    
    template <typename T> static T unwrap(llvm::Expected<T> value) {
  if (value)
    return std::move(value.get());
  llvm::errs() << 'swift-reflection-test error: ' << toString(value.takeError())
               << '\n';
  exit(EXIT_FAILURE);
}
    
      constexpr static KeyPathComponentHeader
  forStructComponentWithUnresolvedFieldOffset(bool isLet) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_StructTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | _SwiftKeyPathComponentHeader_UnresolvedFieldOffsetPayload
      | isLetBit(isLet));
  }
  
  constexpr static KeyPathComponentHeader
  forClassComponentWithInlineOffset(bool isLet,
                                    unsigned offset) {
    return KeyPathComponentHeader(
      (_SwiftKeyPathComponentHeader_ClassTag
       << _SwiftKeyPathComponentHeader_DiscriminatorShift)
      | validateInlineOffset(offset)
      | isLetBit(isLet));
  }
    
      size_t numTrailingObjects(
      typename TrailingObjectsIdentifier::template OverloadToken<SourceLoc>)
      const {
    return asDerived().hasArgumentLabelLocs() ? asDerived().getNumArguments()
                                              : 0;
  }
    
    namespace swift {
struct SupplementaryOutputPaths {
  /// The path to which we should emit an Objective-C header for the module.
  ///
  /// Currently only makes sense when the compiler has whole module knowledge.
  /// The modes for which it makes sense incuide both WMO and the 'merge
  /// modules' job that happens after the normal compilation jobs. That's where
  /// the header is emitted in single-file mode, since it needs whole-module
  /// information.
  ///
  /// \sa swift::printAsObjC
  std::string ObjCHeaderOutputPath;
    }
    }
    
    namespace mongo {
    }
    
    #include 'mongo/db/stats/top.h'
#include 'mongo/unittest/unittest.h'
    
        int32_t result;
    int32_t fastLatinOptions = settings->fastLatinOptions;
    if(fastLatinOptions >= 0 &&
            (equalPrefixLength == leftLength ||
                left[equalPrefixLength] <= CollationFastLatin::LATIN_MAX) &&
            (equalPrefixLength == rightLength ||
                right[equalPrefixLength] <= CollationFastLatin::LATIN_MAX)) {
        if(leftLength >= 0) {
            result = CollationFastLatin::compareUTF16(data->fastLatinTable,
                                                      settings->fastLatinPrimaries,
                                                      fastLatinOptions,
                                                      left + equalPrefixLength,
                                                      leftLength - equalPrefixLength,
                                                      right + equalPrefixLength,
                                                      rightLength - equalPrefixLength);
        } else {
            result = CollationFastLatin::compareUTF16(data->fastLatinTable,
                                                      settings->fastLatinPrimaries,
                                                      fastLatinOptions,
                                                      left + equalPrefixLength, -1,
                                                      right + equalPrefixLength, -1);
        }
    } else {
        result = CollationFastLatin::BAIL_OUT_RESULT;
    }
    
    U_NAMESPACE_BEGIN
    
    U_NAMESPACE_BEGIN
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
    
    {    // Create SwapChain, RenderPass, Framebuffer, etc.
    IM_ASSERT(g_MinImageCount >= 2);
    ImGui_ImplVulkanH_CreateWindow(g_Instance, g_PhysicalDevice, g_Device, wd, g_QueueFamily, g_Allocator, width, height, g_MinImageCount);
}
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
            D3D12_RESOURCE_BARRIER barrier = {};
        barrier.Type                   = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
        barrier.Flags                  = D3D12_RESOURCE_BARRIER_FLAG_NONE;
        barrier.Transition.pResource   = g_mainRenderTargetResource[backBufferIdx];
        barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
        barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
        barrier.Transition.StateAfter  = D3D12_RESOURCE_STATE_RENDER_TARGET;
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_Init(const char* glsl_version = NULL);
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
    
    void    ImFontAtlas::GetTexDataAsAlpha8(unsigned char** out_pixels, int* out_width, int* out_height, int* out_bytes_per_pixel)
{
    // Build atlas on demand
    if (TexPixelsAlpha8 == NULL)
    {
        if (ConfigData.empty())
            AddFontDefault();
        Build();
    }
    }
    
      static bool s_inited;
  static hphp_string_map<Verb> s_verbs;
  static const char *s_verb_names[];
    
      T& operator[](V idx);
  const T& operator[](V idx) const;
    
    inline bool isPropHandled(Variant& propResult) {
  return propResult.isInitialized();
}
    
      bool operator==(unsigned char v) const { return compare(v) == 0;}
  bool operator!=(unsigned char v) const { return compare(v) != 0;}
  bool operator>=(unsigned char v) const { return compare(v) >= 0;}
  bool operator<=(unsigned char v) const { return compare(v) <= 0;}
  bool operator> (unsigned char v) const { return compare(v) >  0;}
  bool operator< (unsigned char v) const { return compare(v) <  0;}
    
    #if USE_JEMALLOC_EXTENT_HOOKS
    
    #endif // incl_HPHP_SYNCHRONIZABLE_H_

    
    ////////////////////////////////////////////////////////////////////////////////
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // print values
    std::cout << object << '\n';
    std::cout << *res1.first << ' ' << std::boolalpha << res1.second << '\n';
    
    #endif // OPENPOSE_CORE_RECTANGLE_HPP

    
    
    {
    {        // PIMP requires DELETE_COPY & destructor, or extra code
        // http://oliora.github.io/2015/12/29/pimpl-and-rule-of-zero.html
        DELETE_COPY(GuiAdam);
    };
}
    
        template<typename T>
    Point<T> Point<T>::operator-(const T value) const
    {
        try
        {
            return Point<T>{T(x - value), T(y - value)};
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Point<T>{};
        }
    }