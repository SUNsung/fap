
        
        class NativeWindow;
    
      // views::View:
  const char* GetClassName() const override;
    
    #include 'atom/browser/unresponsive_suppressor.h'
    
    #include 'ui/gfx/geometry/rect.h'
    
    
    {  DISALLOW_COPY_AND_ASSIGN(PreferencesManager);
};
    
     private:
  // IPC message handler.
  int32_t OnHostMsgGetDeviceID(ppapi::host::HostMessageContext* context);
  int32_t OnHostMsgGetHmonitor(ppapi::host::HostMessageContext* context);
  int32_t OnHostMsgMonitorIsExternal(ppapi::host::HostMessageContext* context);
    
    void TtsPlatformImpl::WillSpeakUtteranceWithVoice(const Utterance* utterance,
                                                  const VoiceData& voice_data) {
}
    
    #include <memory>
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(JavaGenerator);
};
    
    void THDTensor_(_resize5d)(THDTensor *tensor, int64_t size0, int64_t size1, int64_t size2, int64_t size3, int64_t size4) {
  int64_t sizes[] = {size0, size1, size2, size3, size4};
  THDTensor_(_resize)(tensor, 2, sizes, nullptr);
}
    
    namespace at {
    }
    
    #ifdef _THP_CORE
#define THCPStorageType TH_CONCAT_3(THCP,Real,StorageType)
#define THCPStorageBaseStr TH_CONCAT_STRING_3(Cuda,Real,StorageBase)
#endif
    
    #include <stdint.h>
    
    // Creates a JPEG from the rgb pixel data. Returns true on success. The given
// quantization table must have 3 * kDCTBlockSize values.
bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg);
    
    void UpdateACHistogramForDCTBlock(const coeff_t* coeffs,
                                  JpegHistogram* ac_histogram);
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
      // Fill in root table.
  key = 0;
  idx = 0;
  for (len = 1; len <= kJpegHuffmanRootTableBits; ++len) {
    for (; count[len] > 0; --count[len]) {
      code.bits = len;
      code.value = symbols[idx++];
      reps = 1 << (kJpegHuffmanRootTableBits - len);
      while (reps--) {
        table[key++] = code;
      }
    }
  }
    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    // GLFW callbacks (registered by default to GLFW if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks yourself. You may also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
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
    
    //---- Pack colors to BGRA8 instead of RGBA8 (if you needed to convert from one to another anyway)
//#define IMGUI_USE_BGRA_PACKED_COLOR
    
                ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our windows open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
    static bool ImGui_ImplWin32_UpdateMouseCursor()
{
    ImGuiIO& io = ImGui::GetIO();
    if (io.ConfigFlags & ImGuiConfigFlags_NoMouseCursorChange)
        return false;
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    TEST(WriteChainAsyncTransportWrapperTest, TestSimpleBuf) {
  TestWriteChainAsyncTransportWrapper transport;
  auto buf = folly::IOBuf::copyBuffer('foobar');
    }
    
    ssize_t AsyncIOOp::result() const {
  CHECK_EQ(state_, State::COMPLETED);
  return result_;
}
    
    #include <folly/Exception.h>
    
    using folly::File;
using folly::StringPiece;
    
    
    {} // namespace folly

    
    bool FileWriterFactory::processOption(StringPiece name, StringPiece value) {
  if (name == 'async') {
    async_ = to<bool>(value);
    return true;
  } else if (name == 'max_buffer_size') {
    auto size = to<size_t>(value);
    if (size == 0) {
      throw std::invalid_argument(to<string>('must be a positive integer'));
    }
    maxBufferSize_ = size;
    return true;
  } else {
    return false;
  }
}
    
        jclass      (*GetObjectClass)(JNIEnv*, jobject);
    jboolean    (*IsInstanceOf)(JNIEnv*, jobject, jclass);
    jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
    
    // Normally, pass through types unmolested.
template <typename T, typename Enabled = void>
struct Convert {
  typedef T jniType;
  static jniType fromJni(jniType t) {
    return t;
  }
  static jniType toJniRet(jniType t) {
    return t;
  }
  static jniType toCall(jniType t) {
    return t;
  }
};
    
    
/**
 * Captures and symbolicates a stack trace
 *
 * Beware of a bug on some platforms, which makes the trace loop until the
 * buffer is full when it reaches a noexpr function. It seems to be fixed in
 * newer versions of gcc. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=56846
 *
 * @param skip The number of frames before capturing the trace
 *
 * @param limit The maximum number of frames captured
 */
FBEXPORT inline std::vector<StackTraceElement> getStackTraceSymbols(
    size_t skip = 0,
    size_t limit = kDefaultLimit) {
  return getStackTraceSymbols(getStackTrace(skip + 1, limit));
}
    
    #include <dlfcn.h>
#include <unwind.h>
    
    Value Node::getPadding(int edge) const
{
    return Value::fromYGValue(YGNodeStyleGetPadding(m_node, static_cast<YGEdge>(edge)));
}
    
    #pragma once
    
    NBIND_GLOBAL()
{
    function(getInstanceCount);
}
    
    
#define DEFINE_BOXED_PRIMITIVE(LITTLE, BIG)                          \
  struct J ## BIG : detail::JPrimitive<J ## BIG, j ## LITTLE> {      \
    static auto constexpr kJavaDescriptor = 'Ljava/lang/' #BIG ';';  \
    static auto constexpr kValueMethod = #LITTLE 'Value';            \
    j ## LITTLE LITTLE ## Value() const {                            \
      return value();                                                \
    }                                                                \
  };                                                                 \
  inline local_ref<jobject> autobox(j ## LITTLE val) {               \
    return J ## BIG::valueOf(val);                                   \
  }
    
    namespace facebook {
namespace jni {
    }
    }