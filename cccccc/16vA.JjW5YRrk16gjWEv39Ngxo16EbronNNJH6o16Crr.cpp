
        
          /// Retrieve the array of replacement types, which line up with the
  /// generic parameters.
  ///
  /// Note that the types may be null, for cases where the generic parameter
  /// is concrete but hasn't been queried yet.
  ArrayRef<Type> getReplacementTypes() const {
    return llvm::makeArrayRef(getTrailingObjects<Type>(),
                              getNumReplacementTypes());
  }
    
      assert(capacity % 16 == 0 && 'not allocating multiple of alignment');
    
        StringRef Line = RawText.substr(0, Pos);
    Lines.push_back(Line);
    if (!IsFirstLine) {
      size_t NonWhitespacePos = RawText.find_first_not_of(' ');
      if (NonWhitespacePos != StringRef::npos)
        WhitespaceToTrim =
            std::min(WhitespaceToTrim,
                     static_cast<unsigned>(NonWhitespacePos));
    }
    IsFirstLine = false;
    
    %{
    }
    
    
    
    const char *Demangle::getNodeKindString(swift::Demangle::Node::Kind k) {
  switch (k) {
#define NODE(ID)                                                               \
  case Node::Kind::ID:                                                         \
    return #ID;
#include 'swift/Demangling/DemangleNodes.def'
  }
  return 'Demangle::Node::Kind::???';
}
    
    #include 'ArgsToFrontendOutputsConverter.h'
#include 'swift/AST/DiagnosticsFrontend.h'
#include 'swift/Basic/Defer.h'
#include 'swift/Frontend/FrontendOptions.h'
#include 'swift/Option/Options.h'
#include 'swift/Parse/Lexer.h'
#include 'swift/Strings.h'
#include 'llvm/Option/Arg.h'
#include 'llvm/Option/ArgList.h'
#include 'llvm/Option/Option.h'
#include 'llvm/Support/ErrorHandling.h'
#include 'llvm/Support/FileSystem.h'
#include 'llvm/Support/LineIterator.h'
#include 'llvm/Support/Path.h'
    
        Transliterator::_registerFactory(UnicodeString(TRUE, ::CURR_ID, -1),
                                     RemoveTransliterator_create, integerToken(0));
    
        UBool numeric = settings->isNumeric();
    if(equalPrefixLength > 0) {
        if((equalPrefixLength != leftLength &&
                    data->isUnsafeBackward(left[equalPrefixLength], numeric)) ||
                (equalPrefixLength != rightLength &&
                    data->isUnsafeBackward(right[equalPrefixLength], numeric))) {
            // Identical prefix: Back up to the start of a contraction or reordering sequence.
            while(--equalPrefixLength > 0 &&
                    data->isUnsafeBackward(left[equalPrefixLength], numeric)) {}
        }
        // Notes:
        // - A longer string can compare equal to a prefix of it if only ignorables follow.
        // - With a backward level, a longer string can compare less-than a prefix of it.
    }
    
    ScientificNumberFormatter *ScientificNumberFormatter::createMarkupInstance(
        const Locale &locale,
        const UnicodeString &beginMarkup,
        const UnicodeString &endMarkup,
        UErrorCode &status) {
    return createInstance(
            static_cast<DecimalFormat *>(
                    DecimalFormat::createScientificInstance(locale, status)),
            new MarkupStyle(beginMarkup, endMarkup),
            status);
}
    
    static const UChar SELECT_KEYWORD_OTHER[] = {LOW_O, LOW_T, LOW_H, LOW_E, LOW_R, 0};
    
    #endif

    
    // Called by TimeZone::createDefault(), then clone() inside a Mutex - be careful.
SimpleTimeZone &
SimpleTimeZone::operator=(const SimpleTimeZone &right)
{
    if (this != &right)
    {
        TimeZone::operator=(right);
        rawOffset      = right.rawOffset;
        startMonth     = right.startMonth;
        startDay       = right.startDay;
        startDayOfWeek = right.startDayOfWeek;
        startTime      = right.startTime;
        startTimeMode  = right.startTimeMode;
        startMode      = right.startMode;
        endMonth       = right.endMonth;
        endDay         = right.endDay;
        endDayOfWeek   = right.endDayOfWeek;
        endTime        = right.endTime;
        endTimeMode    = right.endTimeMode;
        endMode        = right.endMode;
        startYear      = right.startYear;
        dstSavings     = right.dstSavings;
        useDaylight    = right.useDaylight;
        clearTransitionRules();
    }
    return *this;
}
    
    UBool
SmallIntFormatter::canFormat(
        int32_t positiveValue, const IntDigitCountRange &range) {
    return (positiveValue < gMaxFastInt && range.getMin() <= 4);
}
    
    int32_t StandardPlural::indexOrNegativeFromString(const char *keyword) {
    switch (*keyword++) {
    case 'f':
        if (uprv_strcmp(keyword, 'ew') == 0) {
            return FEW;
        }
        break;
    case 'm':
        if (uprv_strcmp(keyword, 'any') == 0) {
            return MANY;
        }
        break;
    case 'o':
        if (uprv_strcmp(keyword, 'ther') == 0) {
            return OTHER;
        } else if (uprv_strcmp(keyword, 'ne') == 0) {
            return ONE;
        }
        break;
    case 't':
        if (uprv_strcmp(keyword, 'wo') == 0) {
            return TWO;
        }
        break;
    case 'z':
        if (uprv_strcmp(keyword, 'ero') == 0) {
            return ZERO;
        }
        break;
    default:
        break;
    }
    return -1;
}
    
        /**
     * Limit offset, in the match text, of the <em>rightmost</em>
     * match.
     */
    int32_t matchLimit;
    
        // TODO: Hide OS mouse cursor if ImGui is drawing it
    // s3ePointerSetInt(S3E_POINTER_HIDE_CURSOR,(io.MouseDrawCursor ? 0 : 1));
    
        // Read keyboard modifiers inputs
    io.KeyCtrl = (::GetKeyState(VK_CONTROL) & 0x8000) != 0;
    io.KeyShift = (::GetKeyState(VK_SHIFT) & 0x8000) != 0;
    io.KeyAlt = (::GetKeyState(VK_MENU) & 0x8000) != 0;
    io.KeySuper = false;
    // io.KeysDown[], io.MousePos, io.MouseDown[], io.MouseWheel: filled by the WndProc handler below.
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_DestroyDeviceObjects();

    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    #include 'imgui.h'
#include 'imgui_impl_dx9.h'
#include 'imgui_impl_win32.h'
#include <d3d9.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>
    
        // Upload vertex/index data into a single contiguous GPU buffer
    D3D11_MAPPED_SUBRESOURCE vtx_resource, idx_resource;
    if (ctx->Map(g_pVB, 0, D3D11_MAP_WRITE_DISCARD, 0, &vtx_resource) != S_OK)
        return;
    if (ctx->Map(g_pIB, 0, D3D11_MAP_WRITE_DISCARD, 0, &idx_resource) != S_OK)
        return;
    ImDrawVert* vtx_dst = (ImDrawVert*)vtx_resource.pData;
    ImDrawIdx* idx_dst = (ImDrawIdx*)idx_resource.pData;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        memcpy(vtx_dst, cmd_list->VtxBuffer.Data, cmd_list->VtxBuffer.Size * sizeof(ImDrawVert));
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        vtx_dst += cmd_list->VtxBuffer.Size;
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    ctx->Unmap(g_pVB, 0);
    ctx->Unmap(g_pIB, 0);
    
        int64_t firstScreenCssLayoutTime;
    
    class RenderObject;
    
    #include <string>
    
    #endif  // CORE_RENDER_ACTION_RENDER_ACTION_CREATEBODY_H_

    
    #include 'core/render/action/render_action_interface.h'
    
    #include <string>
    
    class RenderActionRemoveElement : public RenderAction {
 public:
  explicit RenderActionRemoveElement(const std::string &page_id,
                                     const std::string &ref);
    }