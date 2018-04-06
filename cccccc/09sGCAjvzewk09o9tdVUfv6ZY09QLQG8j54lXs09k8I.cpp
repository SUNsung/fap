
        
        #include <google/protobuf/descriptor_database.h>
    
      string data = message.SerializeAsString();
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    #include <sstream>
    
    class RepeatedPrimitiveFieldGenerator : public FieldGeneratorBase {
 public:
  RepeatedPrimitiveFieldGenerator(const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options);
  ~RepeatedPrimitiveFieldGenerator();
    }
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_DOC_COMMENT_H__

    
    // Author: kenton@google.com (Kenton Varda)
    
      if (superscript_debug >= 1) {
    tprintf('Candidate for superscript detection: %s (',
            word->best_choice->unichar_string().string());
    if (num_leading || num_remainder_leading) {
      tprintf('%d.%d %s-leading ', num_leading, num_remainder_leading,
              leading_pos);
    }
    if (num_trailing || num_remainder_trailing) {
      tprintf('%d.%d %s-trailing ', num_trailing, num_remainder_trailing,
              trailing_pos);
    }
    tprintf(')\n');
  }
  if (superscript_debug >= 3) {
    word->best_choice->print();
  }
  if (superscript_debug >= 2) {
    tprintf(' Certainties -- Average: %.2f  Unlikely thresh: %.2f  ',
            avg_certainty, unlikely_threshold);
    if (num_leading)
      tprintf('Orig. leading (min): %.2f  ', leading_certainty);
    if (num_trailing)
      tprintf('Orig. trailing (min): %.2f  ', trailing_certainty);
    tprintf('\n');
  }
    
    
    {
/**
 * @name tess_add_doc_word
 *
 * Add the given word to the document dictionary
 */
void Tesseract::tess_add_doc_word(WERD_CHOICE *word_choice) {
  getDict().add_document_word(*word_choice);
}
}  // namespace tesseract

    
    // Fills in the x-height range accepted by the given unichar_id, given its
// bounding box in the usual baseline-normalized coordinates, with some
// initial crude x-height estimate (such as word size) and this denoting the
// transformation that was used.
void DENORM::XHeightRange(int unichar_id, const UNICHARSET& unicharset,
                          const TBOX& bbox,
                          float* min_xht, float* max_xht, float* yshift) const {
  // Default return -- accept anything.
  *yshift = 0.0f;
  *min_xht = 0.0f;
  *max_xht = MAX_FLOAT32;
    }
    
    #include 'publictypes.h'
#include 'elst.h'
#include 'strngs.h'
    
    #ifndef TESSERACT_CCUTIL_DOUBLEPTR_H_
#define TESSERACT_CCUTIL_DOUBLEPTR_H_
    
        int argn = 1;
    bool use_base85_encoding = false;
    bool use_compression = true;
    if (argv[argn][0] == '-')
    {
        if (strcmp(argv[argn], '-base85') == 0) { use_base85_encoding = true; argn++; }
        else if (strcmp(argv[argn], '-nocompress') == 0) { use_compression = false; argn++; }
        else
        {
            printf('Unknown argument: '%s'\n', argv[argn]);
            return 1;
        }
    }
    
    
    {    return g_ClipboardText;
}
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
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
        ImGui_ImplDX11_NewFrame();
    }
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('ImGui DirectX12 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
            // 2. Show another simple window. In most cases you will use an explicit Begin/End pair to name your windows.
        if (show_another_window)
        {
            ImGui::Begin('Another Window', &show_another_window);
            ImGui::Text('Hello from another window!');
            if (ImGui::Button('Close Me'))
                show_another_window = false;
            ImGui::End();
        }
    
    #include 'imgui.h'
#include 'imgui_impl_sdl_gl3.h'
#include <stdio.h>
#include <GL/gl3w.h>    // This example is using gl3w to access OpenGL functions (because it is small). You may use glew/glad/glLoadGen/etc. whatever already works for you.
#include <SDL.h>
    
            // create the debug report callback
        VkDebugReportCallbackCreateInfoEXT debug_report_ci ={};
        debug_report_ci.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
        debug_report_ci.flags = VK_DEBUG_REPORT_ERROR_BIT_EXT | VK_DEBUG_REPORT_WARNING_BIT_EXT | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT;
        debug_report_ci.pfnCallback = debug_report;
        debug_report_ci.pUserData = NULL;
        
        // get the proc address of the function pointer, required for used extensions
        PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT = 
            (PFN_vkCreateDebugReportCallbackEXT)vkGetInstanceProcAddr(g_Instance, 'vkCreateDebugReportCallbackEXT');
    
        // Store GL version string so we can refer to it later in case we recreate shaders.
    if (glsl_version == NULL)
        glsl_version = '#version 150';
    IM_ASSERT((int)strlen(glsl_version) + 2 < IM_ARRAYSIZE(g_GlslVersion));
    strcpy(g_GlslVersion, glsl_version);
    strcat(g_GlslVersion, '\n');
    
    #include <algorithm>
#include <string>
    
    #include <cstddef>
    
    template <typename Fn>
void DynamicParser::wrapError(const folly::dynamic* lookup_k, Fn fn) {
  try {
    fn();
  } catch (DynamicParserLogicError&) {
    // When the parser is misused, we throw all the way up to the user,
    // instead of reporting it as if the input is invalid.
    throw;
  } catch (DynamicParserParseError&) {
    // We are just bubbling up a parse error for OnError::THROW.
    throw;
  } catch (const std::exception& ex) {
    reportError(lookup_k, ex);
  }
}
    
    
    {
    {    // NOTE: the way we count numProbes must be same in find(), insert(),
    // and erase(). Otherwise it may break probing.
    ++numProbes;
    if (UNLIKELY(numProbes >= capacity_)) {
      // probed every cell...fail
      return 0;
    }
  }
}
    
    void Node::copyStyle(Node const & other)
{
    YGNodeCopyStyle(m_node, other.m_node);
}
    
        static Node * createDefault(void);
    static Node * createWithConfig(Config * config);
    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);
    
    #include <fb/visibility.h>