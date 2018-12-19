
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {}  // namespace tensorflow

    
      // We hit a mysterious crash if we haven't initialized numpy before this:
  PyBfloat16_Type.tp_base = &PyGenericArrType_Type;
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_PY_EXCEPTION_REGISTRY_H_

    
    // Converts a string of a form like '331.79' to a DriverVersion{331, 79}.
port::StatusOr<DriverVersion> StringToDriverVersion(const string &value);
    
    const CUevent& CUDAEvent::cuda_event() {
  return cuda_event_;
}
    
    
    {
    {
    {}  // namespace python
}  // namespace protobuf
}  // namespace google

    
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
    
    #include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
#include <google/protobuf/compiler/csharp/csharp_helpers.h>
#include <google/protobuf/compiler/csharp/csharp_names.h>
#include <google/protobuf/compiler/csharp/csharp_options.h>
    
    void WriteServiceDocComment(io::Printer* printer,
                            const ServiceDescriptor* service) {
  printer->Print('/**\n');
  WriteDocCommentBody(printer, service);
  printer->Print(
    ' * Protobuf service {@code $fullname$}\n'
    ' */\n',
    'fullname', EscapeJavadoc(service->full_name()));
}
    
    
    {  WriteFieldDocComment(printer, descriptor_);
  if (descriptor_->is_repeated()) {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newRepeatedGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $packed$,\n'
        '      $singular_type$.class);\n');
  } else {
    printer->Print(
        vars,
        'public static final\n'
        '  com.google.protobuf.GeneratedMessageLite.GeneratedExtension<\n'
        '    $containing_type$,\n'
        '    $type$> $name$ = com.google.protobuf.GeneratedMessageLite\n'
        '        .newSingularGeneratedExtension(\n'
        '      $containing_type$.getDefaultInstance(),\n'
        '      $default$,\n'
        '      $prototype$,\n'
        '      $enum_map$,\n'
        '      $number$,\n'
        '      com.google.protobuf.WireFormat.FieldType.$type_constant$,\n'
        '      $singular_type$.class);\n');
  }
  printer->Annotate('name', descriptor_);
}
    
      // -----------------------------------------------------------------
  // Invoke internalBuildGeneratedFileFrom() to build the file.
  printer->Print(
    'com.google.protobuf.Descriptors.FileDescriptor\n'
    '  .internalBuildGeneratedFileFrom(descriptorData,\n');
  printer->Print(
    '    new com.google.protobuf.Descriptors.FileDescriptor[] {\n');
    }
    
    #if !UCONFIG_NO_TRANSLITERATION
    
    
    {    // Compare identical level.
    left.move(&left, equalPrefixLength, UITER_ZERO);
    right.move(&right, equalPrefixLength, UITER_ZERO);
    const Normalizer2Impl &nfcImpl = data->nfcImpl;
    if(settings->dontCheckFCD()) {
        UIterNFDIterator leftIter(left);
        UIterNFDIterator rightIter(right);
        return compareNFDIter(nfcImpl, leftIter, rightIter);
    } else {
        FCDUIterNFDIterator leftIter(data, left, equalPrefixLength);
        FCDUIterNFDIterator rightIter(data, right, equalPrefixLength);
        return compareNFDIter(nfcImpl, leftIter, rightIter);
    }
}
    
    
ScriptSet &ScriptSet::resetAll() {
    for (uint32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        bits[i] = 0;
    }
    return *this;
}
    
    U_NAMESPACE_END
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    #endif

    
    #ifndef __SHARED_NUMBERFORMAT_H__
#define __SHARED_NUMBERFORMAT_H__
    
    int32_t 
SimpleTimeZone::getDSTSavings() const
{
    return dstSavings;
}
    
    
    {    /**
     * Formats positiveValue using the given range of digit counts.
     * Always uses standard digits '0' through '9'. Formatted value is
     * left padded with '0' as necessary to achieve minimum digit count.
     * Does not produce any grouping separators or trailing decimal point.
     * Calling format to format a value with a particular digit count range
     * when canFormat indicates that the same value and digit count range
     * cannot be formatted results in undefined behavior.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UnicodeString &format(
            int32_t positiveValue,
            const IntDigitCountRange &range,
            UnicodeString &appendTo);
    
};
    
    int32_t StandardPlural::indexFromString(const char *keyword, UErrorCode &errorCode) {
    if (U_FAILURE(errorCode)) { return OTHER; }
    int32_t i = indexOrNegativeFromString(keyword);
    if (i >= 0) {
        return i;
    } else {
        errorCode = U_ILLEGAL_ARGUMENT_ERROR;
        return OTHER;
    }
}
    
    /**
 * UnicodeReplacer API
 */
UnicodeString& StringMatcher::toReplacerPattern(UnicodeString& rule,
                                                UBool /*escapeUnprintable*/) const {
    // assert(segmentNumber > 0);
    rule.truncate(0);
    rule.append((UChar)0x0024 /*$*/);
    ICU_Utility::appendNumber(rule, segmentNumber, 10, 1);
    return rule;
}
    
        int32_t cursor = cursorPos;
    
    Carver::~Carver() {
  fs::remove_all(carveDir_);
}
    
    namespace osquery {
    }
    
    namespace osquery {
    }
    
      auto it = doc.FindMember(kLoggerKey);
  if (it != doc.MemberEnd()) {
    doc.EraseMember(it);
  }
    
    namespace osquery {
    }
    
    
    {  // Expect the decorators to be disabled by default.
  QueryLogItem item;
  getDecorations(item.decorations);
  EXPECT_EQ(item.decorations.size(), 0U);
}
    
    bool ImGui::InputTextMultiline(const char* label, std::string* str, const ImVec2& size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    //---- Define constructor and implicit cast operators to convert back<>forth between your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver. 
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
    // [Win32] Our example includes a copy of glfw3.lib pre-compiled with VS2010 to maximize ease of testing and compatibility with old VS compilers.
// To link with VS2010-era libraries, VS2015+ requires linking with legacy_stdio_definitions.lib, which we do using this pragma. 
// Your own project should not be affected, as you are likely to link with a newer binary of GLFW that is adequate for your version of Visual Studio.
#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, 'legacy_stdio_definitions')
#endif
    
            // Start the Dear ImGui frame
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();
    
        // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    
        IDXGISwapChain1* swapChain1 = NULL;
    dxgiFactory->CreateSwapChainForHwnd(g_pd3dCommandQueue, hWnd, &sd, NULL, NULL, &swapChain1);
    swapChain1->QueryInterface(IID_PPV_ARGS(&g_pSwapChain));
    swapChain1->Release();
    dxgiFactory->Release();
    
    // DirectX data
static LPDIRECT3DDEVICE9        g_pd3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9  g_pVB = NULL;
static LPDIRECT3DINDEXBUFFER9   g_pIB = NULL;
static LPDIRECT3DTEXTURE9       g_FontTexture = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
    EASE_TEMPLATE_IMPL(EaseExponentialIn, tweenfunc::expoEaseIn, EaseExponentialOut);
EASE_TEMPLATE_IMPL(EaseExponentialOut, tweenfunc::expoEaseOut, EaseExponentialIn);
EASE_TEMPLATE_IMPL(EaseExponentialInOut, tweenfunc::expoEaseInOut, EaseExponentialInOut);
EASE_TEMPLATE_IMPL(EaseSineIn, tweenfunc::sineEaseIn, EaseSineOut);
EASE_TEMPLATE_IMPL(EaseSineOut, tweenfunc::sineEaseOut, EaseSineIn);
EASE_TEMPLATE_IMPL(EaseSineInOut, tweenfunc::sineEaseInOut, EaseSineInOut);
EASE_TEMPLATE_IMPL(EaseBounceIn, tweenfunc::bounceEaseIn, EaseBounceOut);
EASE_TEMPLATE_IMPL(EaseBounceOut, tweenfunc::bounceEaseOut, EaseBounceIn);
EASE_TEMPLATE_IMPL(EaseBounceInOut, tweenfunc::bounceEaseInOut, EaseBounceInOut);
EASE_TEMPLATE_IMPL(EaseBackIn, tweenfunc::backEaseIn, EaseBackOut);
EASE_TEMPLATE_IMPL(EaseBackOut, tweenfunc::backEaseOut, EaseBackIn);
EASE_TEMPLATE_IMPL(EaseBackInOut, tweenfunc::backEaseInOut, EaseBackInOut);
EASE_TEMPLATE_IMPL(EaseQuadraticActionIn, tweenfunc::quadraticIn, EaseQuadraticActionIn);
EASE_TEMPLATE_IMPL(EaseQuadraticActionOut, tweenfunc::quadraticOut, EaseQuadraticActionOut);
EASE_TEMPLATE_IMPL(EaseQuadraticActionInOut, tweenfunc::quadraticInOut, EaseQuadraticActionInOut);
EASE_TEMPLATE_IMPL(EaseQuarticActionIn, tweenfunc::quartEaseIn, EaseQuarticActionIn);
EASE_TEMPLATE_IMPL(EaseQuarticActionOut, tweenfunc::quartEaseOut, EaseQuarticActionOut);
EASE_TEMPLATE_IMPL(EaseQuarticActionInOut, tweenfunc::quartEaseInOut, EaseQuarticActionInOut);
EASE_TEMPLATE_IMPL(EaseQuinticActionIn, tweenfunc::quintEaseIn, EaseQuinticActionIn);
EASE_TEMPLATE_IMPL(EaseQuinticActionOut, tweenfunc::quintEaseOut, EaseQuinticActionOut);
EASE_TEMPLATE_IMPL(EaseQuinticActionInOut, tweenfunc::quintEaseInOut, EaseQuinticActionInOut);
EASE_TEMPLATE_IMPL(EaseCircleActionIn, tweenfunc::circEaseIn, EaseCircleActionIn);
EASE_TEMPLATE_IMPL(EaseCircleActionOut, tweenfunc::circEaseOut, EaseCircleActionOut);
EASE_TEMPLATE_IMPL(EaseCircleActionInOut, tweenfunc::circEaseInOut, EaseCircleActionInOut);
EASE_TEMPLATE_IMPL(EaseCubicActionIn, tweenfunc::cubicEaseIn, EaseCubicActionIn);
EASE_TEMPLATE_IMPL(EaseCubicActionOut, tweenfunc::cubicEaseOut, EaseCubicActionOut);
EASE_TEMPLATE_IMPL(EaseCubicActionInOut, tweenfunc::cubicEaseInOut, EaseCubicActionInOut);
    
    
    {    return false;
}
    
        /**
    @brief Get the amplitude of the effect.
    @return Return the amplitude of the effect.
    */
    float getAmplitude() const { return _amplitude; }
    /**
    @brief Set the amplitude to the effect.
    @param amplitude The value of amplitude will be set.
    */
    void setAmplitude(float amplitude) { _amplitude = amplitude; }
    
    //
// Remove Self
//
RemoveSelf * RemoveSelf::create(bool isNeedCleanUp /*= true*/) 
{
    RemoveSelf *ret = new (std::nothrow) RemoveSelf();
    }
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual FlipX* reverse() const override;
    virtual FlipX* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    FlipX() :_flipX(false) {}
    virtual ~FlipX() {}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionPageTurn3D.h'
#include '2d/CCGrid.h'
#include '2d/CCNodeGrid.h'
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef __ACTION_CCPROGRESS_TIMER_H__
#define __ACTION_CCPROGRESS_TIMER_H__
    
     @code
     auto modifyWidth = ActionTween::create(2, 'width', 200, 300);
     target->runAction(modifyWidth);
 @endcode
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    #ifndef GUETZLI_DCT_DOUBLE_H_
#define GUETZLI_DCT_DOUBLE_H_
    
    static const int kDCTBlockSize = 64;
static const int kMaxComponents = 4;
static const int kMaxQuantTables = 4;
static const int kMaxHuffmanTables = 4;
static const int kJpegHuffmanMaxBitLength = 16;
static const int kJpegHuffmanAlphabetSize = 256;
static const int kJpegDCAlphabetSize = 12;
static const int kMaxDHTMarkers = 512;
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg) {
  bool has_Adobe_marker = false;
  uint8_t Adobe_transform = 0;
  for (const std::string& app : jpg.app_data) {
    if (static_cast<uint8_t>(app[0]) == 0xe0) {
      return true;
    } else if (static_cast<uint8_t>(app[0]) == 0xee && app.size() >= 15) {
      has_Adobe_marker = true;
      Adobe_transform = app[14];
    }
  }
  if (has_Adobe_marker) {
    return (Adobe_transform != 0);
  }
  const int cid0 = jpg.components[0].id;
  const int cid1 = jpg.components[1].id;
  const int cid2 = jpg.components[2].id;
  return (cid0 != 'R' || cid1 != 'G' || cid2 != 'B');
}
    
    
    {  int code = 0;
  int si = huffsize[0];
  p = 0;
  while (huffsize[p]) {
    while ((huffsize[p]) == si) {
      huffcode[p++] = code;
      code++;
    }
    code <<= 1;
    si++;
  }
  for (p = 0; p < lastp; p++) {
    int i = values[p];
    table->depth[i] = huffsize[p];
    table->code[i] = huffcode[p];
  }
}
    
      JpegHistogram() { Clear(); }
  void Clear() {
    memset(counts, 0, sizeof(counts));
    counts[kSize - 1] = 1;
  }
  void Add(int symbol) {
    counts[symbol] += 2;
  }
  void Add(int symbol, int weight) {
    counts[symbol] += 2 * weight;
  }
  void AddHistogram(const JpegHistogram& other) {
    for (int i = 0; i + 1 < kSize; ++i) {
      counts[i] += other.counts[i];
    }
    counts[kSize - 1] = 1;
  }
  int NumSymbols() const {
    int n = 0;
    for (int i = 0; i + 1 < kSize; ++i) {
      n += (counts[i] > 0 ? 1 : 0);
    }
    return n;
  }