
        
          /**
   * Return whether this iterator points anywhere in the first textline of a
   * paragraph.
   */
  bool IsWithinFirstTextlineOfParagraph() const;
    
    RemoveTransliterator::RemoveTransliterator() : Transliterator(UnicodeString(TRUE, ::CURR_ID, -1), 0) {}
    
    void appendSubtag(CharString &s, char letter, const char *subtag, int32_t length,
                  UErrorCode &errorCode) {
    if(U_FAILURE(errorCode) || length == 0) { return; }
    if(!s.isEmpty()) {
        s.append('_', errorCode);
    }
    s.append(letter, errorCode);
    for(int32_t i = 0; i < length; ++i) {
        s.append(uprv_toupper(subtag[i]), errorCode);
    }
}
    
    SelectFormat::SelectFormat(const SelectFormat& other) : Format(other),
                                                        msgPattern(other.msgPattern) {
}
    
    #include 'unicode/uobject.h'
#include 'unicode/utypes.h'
    
    U_NAMESPACE_END
    
        /**
     * Sets U_ILLEGAL_ARGUMENT_ERROR if the keyword is not a plural form.
     *
     * @param keyword for example 'few' or 'other'
     * @return the plural form corresponding to the keyword
     */
    static Form fromString(const char *keyword, UErrorCode &errorCode) {
        return static_cast<Form>(indexFromString(keyword, errorCode));
    }
    
    /**
 * Implement UnicodeReplacer
 */
void StringReplacer::addReplacementSetTo(UnicodeSet& toUnionTo) const {
    UChar32 ch;
    for (int32_t i=0; i<output.length(); i+=U16_LENGTH(ch)) {
    ch = output.char32At(i);
    UnicodeReplacer* r = data->lookupReplacer(ch);
    if (r == NULL) {
        toUnionTo.add(ch);
    } else {
        r->addReplacementSetTo(toUnionTo);
    }
    }
}
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        bool show_demo_window = true;
    bool show_another_window = false;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    
    
    {    return 0;
}

    
        // Setup back-end capabilities flags
    g_hWnd = (HWND)hwnd;
    ImGuiIO& io = ImGui::GetIO();
    io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;         // We can honor GetMouseCursor() values (optional)
    io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;          // We can honor io.WantSetMousePos requests (optional, rarely used)
    io.BackendPlatformName = 'imgui_impl_win32';
    io.ImeWindowHandle = hwnd;
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
    using json = nlohmann::json;
    
        // out_of_range.109
    try
    {
        // try to use an array index that is not a number
        json::const_reference ref = j.at('/array/one'_json_pointer);
    }
    catch (json::parse_error& e)
    {
        std::cout << e.what() << '\n';
    }