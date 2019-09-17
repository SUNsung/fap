
        
        #endif  // CHROME_BROWSER_CERTIFICATE_MANAGER_MODEL_H_

    
    bool Browser::SetBadgeCount(int count) {
  if (IsUnityRunning()) {
    unity::SetDownloadCount(count);
    badge_count_ = count;
    return true;
  } else {
    return false;
  }
}
    
    
    {  // Start the next request.
  if (!pending_requests_.empty())
    StartPendingRequest();
}
    
    static HRESULT ShowFileDialog(IFileDialog* dialog,
                              const DialogSettings& settings) {
  electron::UnresponsiveSuppressor suppressor;
  HWND parent_window =
      settings.parent_window
          ? static_cast<electron::NativeWindowViews*>(settings.parent_window)
                ->GetAcceleratedWidget()
          : NULL;
    }
    
      if (focused_node_was_last_clicked_ && was_focused_before_now_) {
    ShowSuggestionsOptions options;
    options.autofill_on_empty_values = true;
    auto* input_element = ToWebInputElement(&element);
    if (input_element)
      ShowSuggestions(*input_element, options);
  }
    
    // This set of templates invokes a base::Callback by converting the Arguments
// into native types. It relies on the function_template.h to provide helper
// templates.
inline WrappableBase* InvokeFactory(
    Arguments* args,
    const base::Callback<WrappableBase*()>& callback) {
  return callback.Run();
}
    
    
    {  return false;
}
    
    #ifndef SHELL_APP_COMMAND_LINE_ARGS_H_
#define SHELL_APP_COMMAND_LINE_ARGS_H_
    
      // Delegate implementations.
  void OnError(const std::string& error) override;
  void OnError(const std::string& message,
               const int code,
               const std::string& domain) override;
  void OnCheckingForUpdate() override;
  void OnUpdateAvailable() override;
  void OnUpdateNotAvailable() override;
  void OnUpdateDownloaded(const std::string& release_notes,
                          const std::string& release_name,
                          const base::Time& release_date,
                          const std::string& update_url) override;
    
    OCL_PERF_TEST_P(DenseOpticalFlow_DIS, perf,
                Combine(Values('PRESET_ULTRAFAST', 'PRESET_FAST', 'PRESET_MEDIUM'), Values(szVGA, sz720p, sz1080p)))
{
    DISParams params = GetParam();
    }
    
    #include <ImfFloatAttribute.h>
    
      private:
    
    
    {    protected:
        IMF_EXPORT
        GenericOutputFile() {}
        IMF_EXPORT
        void writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os, const Header& header);
        IMF_EXPORT
        void writeMagicNumberAndVersionField (OPENEXR_IMF_INTERNAL_NAMESPACE::OStream& os, const Header * headers, int parts);
  
};
    
    
OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
    
//
// ENCODING TABLE BUILDING & (UN)PACKING
//
    
        virtual bool	read (char c[/*n*/], int n) = 0;
    
    
    //---------------------------------------------------
    // Read from a memory-mapped stream:
    //
    // readMemoryMapped(n) reads n bytes from the stream
    // and returns a pointer to the first byte.  The
    // returned pointer remains valid until the stream
    // is closed.  If there are less than n byte left to
    // read in the stream or if the stream is not memory-
    // mapped, readMemoryMapped(n) throws an exception.  
    //---------------------------------------------------
    
    bool
InputPart::isOptimizationEnabled() const
{
   return file->isOptimizationEnabled();
}
    
        // You can set those flags on a per font basis in ImFontConfig::RasterizerFlags.
    // Use the 'extra_flags' parameter of BuildFontAtlas() to force a flag on all your fonts.
    enum RasterizerFlags
    {
        // By default, hinting is enabled and the font's native hinter is preferred over the auto-hinter.
        NoHinting       = 1 << 0,   // Disable hinting. This generally generates 'blurrier' bitmap glyphs when the glyph are rendered in any of the anti-aliased modes.
        NoAutoHint      = 1 << 1,   // Disable auto-hinter.
        ForceAutoHint   = 1 << 2,   // Indicates that the auto-hinter is preferred over the font's native hinter.
        LightHinting    = 1 << 3,   // A lighter hinting algorithm for gray-level modes. Many generated glyphs are fuzzier but better resemble their original shape. This is achieved by snapping glyphs to the pixel grid only vertically (Y-axis), as is done by Microsoft's ClearType and Adobe's proprietary font renderer. This preserves inter-glyph spacing in horizontal text.
        MonoHinting     = 1 << 4,   // Strong hinting algorithm that should only be used for monochrome output.
        Bold            = 1 << 5,   // Styling: Should we artificially embolden the font?
        Oblique         = 1 << 6,   // Styling: Should we slant the font, emulating italic style?
        Monochrome      = 1 << 7    // Disable anti-aliasing. Combine this with MonoHinting for best results!
    };
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
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
    
        // Show the window
    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}
