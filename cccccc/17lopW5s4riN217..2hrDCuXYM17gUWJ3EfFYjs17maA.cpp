
        
        enum GARBAGE_LEVEL
{
  G_NEVER_CRUNCH,
  G_OK,
  G_DODGY,
  G_TERRIBLE
};
    
    
    {  TBLOB* blob;
  Tesseract* tesseract;
  BLOB_CHOICE_LIST** choices;
};
    
      Pix* pix() const {
    return pix_;
  }
  void set_pix(Pix* pix) {
    pix_ = pix;
  }
  bool inverse() const {
    return inverse_;
  }
  void set_inverse(bool value) {
    inverse_ = value;
  }
  const DENORM* RootDenorm() const {
    if (predecessor_ != nullptr)
      return predecessor_->RootDenorm();
    return this;
  }
  const DENORM* predecessor() const {
    return predecessor_;
  }
  // Accessors - perhaps should not be needed.
  float x_scale() const {
    return x_scale_;
  }
  float y_scale() const {
    return y_scale_;
  }
  const BLOCK* block() const {
    return block_;
  }
  void set_block(const BLOCK* block) {
    block_ = block;
  }
    
    #ifndef TESSERACT_CCMAIN_OTSUTHR_H_
#define TESSERACT_CCMAIN_OTSUTHR_H_
    
    // Specialization for a pair of ints in increasing order.
using IntKDPair = KDPairInc<int, int>;
    
        template <typename T> 
    inline std::string GetVersionsString(size_t currentVersion, size_t dictVersion)
    {
        std::stringstream info;
        info << 'Current ' << Typename<T>() << ' version = ' << currentVersion 
             << ', Dictionary version = ' << dictVersion;
        return info.str();
    }
    
    // base class that we can catch, independent of the type parameter
struct /*interface*/ IExceptionWithCallStackBase
{
    virtual const char * CallStack() const = 0;
    virtual ~IExceptionWithCallStackBase() noexcept = default;
};
    
    template <class ElemType>
TensorView<ElemType> EpochAccumulatorNode<ElemType>::EnsureAccumlator()
{
    if (m_accumulator->HasNoElements())
    {
        // Accumulator has not been resized yet, allocate with necessary size.
        const size_t sampleSize = GetSampleLayout().GetNumElements();
        m_accumulator->Resize(sampleSize, 1);
        Reset();
    }
    size_t rank = DetermineElementwiseTensorRank();
    return DataTensorFor(m_accumulator, rank, FrameRange());
}
    
    void Assembler::extsw(const Reg64& ra, const Reg64& rs, bool rc) {
  EmitXForm(31, rn(rs), rn(ra), rn(0), 986, rc);
}
    
    #define CONTAINER_CONFIG_BODY(T, METHOD) \
T Config::Get##METHOD(const IniSetting::Map& ini, const Hdf& config, \
                      const std::string& name /* = '' */, \
                      const T& defValue /* = T() */, \
                      const bool prepend_hhvm /* = true */) { \
  auto ini_name = IniName(name, prepend_hhvm); \
  Hdf hdf = name != '' ? config[name] : config; \
  T ini_ret, hdf_ret; \
  auto value = ini_iterate(ini, ini_name); \
  if (value.isArray() || value.isObject()) { \
    ini_on_update(value.toVariant(), ini_ret); \
    /** Make sure that even if we have an ini value, that if we also **/ \
    /** have an hdf value, that it maintains its edge as beating out **/ \
    /** ini                                                          **/ \
    if (hdf.exists() && !hdf.isEmpty()) { \
      hdf.configGet(hdf_ret); \
      if (hdf_ret != ini_ret) { \
        ini_ret = hdf_ret; \
        IniSetting::SetSystem(ini_name, ini_get(ini_ret)); \
      } \
    } \
    return ini_ret; \
  } \
  if (hdf.exists() && !hdf.isEmpty()) { \
    hdf.configGet(hdf_ret); \
    return hdf_ret; \
  } \
  return defValue; \
} \
void Config::Bind(T& loc, const IniSetting::Map& ini, const Hdf& config, \
                  const std::string& name /* = '' */, \
                  const T& defValue /* = T() */, \
                  const bool prepend_hhvm /* = true */) { \
  loc = Get##METHOD(ini, config, name, defValue, prepend_hhvm); \
  IniSetting::Bind(IniSetting::CORE, IniSetting::PHP_INI_SYSTEM, \
                   IniName(name, prepend_hhvm), &loc); \
}
    
    void ArrayDirectory::rewind() {
  m_it.rewind();
}
    
    namespace HPHP {
    }
    
    #if !UCONFIG_NO_TRANSLITERATION
    
    
    {    printf('\nIndex   Binary     Type             Operand\n' \
           '-------------------------------------------\n');
    for (index = 0; index<fCompiledPat->size(); index++) {
        dumpOp(index);
    }
    printf('\n\n');
#endif
}
    
    void ScientificNumberFormatter::getPreExponent(
        const DecimalFormatSymbols &dfs, UnicodeString &preExponent) {
    preExponent.append(dfs.getConstSymbol(
            DecimalFormatSymbols::kExponentMultiplicationSymbol));
    preExponent.append(dfs.getConstSymbol(DecimalFormatSymbols::kOneDigitSymbol));
    preExponent.append(dfs.getConstSymbol(DecimalFormatSymbols::kZeroDigitSymbol));
}
    
    U_NAMESPACE_BEGIN
    
    #ifndef __SHARED_BREAKITERATOR_H__
#define __SHARED_BREAKITERATOR_H__
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    #ifndef __SHARED_PLURALRULES_H__
#define __SHARED_PLURALRULES_H__
    
    
    {                text.extractBetween(0, start + count, temp);
                src = &temp;
            } else {
                src = &text;
            }
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
    U_NAMESPACE_BEGIN
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
                // Allocate new temporary chunk if needed
            const int bitmap_size_in_bytes = src_glyph.Info.Width * src_glyph.Info.Height;
            if (buf_bitmap_current_used_bytes + bitmap_size_in_bytes > BITMAP_BUFFERS_CHUNK_SIZE)
            {
                buf_bitmap_current_used_bytes = 0;
                buf_bitmap_buffers.push_back((unsigned char*)IM_ALLOC(BITMAP_BUFFERS_CHUNK_SIZE));
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
        Oblique         = 1 << 6    // Styling: Should we slant the font, emulating italic style?
    };
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Decide GL+GLSL versions
#if __APPLE__
    // GL 3.2 + GLSL 150
    const char* glsl_version = '#version 150';
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // Required on Mac
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = '#version 130';
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // 3.0+ only
#endif
    
    
    {            ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();
        }
    
    bool ImGui::InputText(const char* label, std::string* str, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
        io.KeyMap[ImGuiKey_Tab] = ALLEGRO_KEY_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = ALLEGRO_KEY_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = ALLEGRO_KEY_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = ALLEGRO_KEY_UP;
    io.KeyMap[ImGuiKey_DownArrow] = ALLEGRO_KEY_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = ALLEGRO_KEY_PGUP;
    io.KeyMap[ImGuiKey_PageDown] = ALLEGRO_KEY_PGDN;
    io.KeyMap[ImGuiKey_Home] = ALLEGRO_KEY_HOME;
    io.KeyMap[ImGuiKey_End] = ALLEGRO_KEY_END;
    io.KeyMap[ImGuiKey_Insert] = ALLEGRO_KEY_INSERT;
    io.KeyMap[ImGuiKey_Delete] = ALLEGRO_KEY_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = ALLEGRO_KEY_BACKSPACE;
    io.KeyMap[ImGuiKey_Space] = ALLEGRO_KEY_SPACE;
    io.KeyMap[ImGuiKey_Enter] = ALLEGRO_KEY_ENTER;
    io.KeyMap[ImGuiKey_Escape] = ALLEGRO_KEY_ESCAPE;
    io.KeyMap[ImGuiKey_A] = ALLEGRO_KEY_A;
    io.KeyMap[ImGuiKey_C] = ALLEGRO_KEY_C;
    io.KeyMap[ImGuiKey_V] = ALLEGRO_KEY_V;
    io.KeyMap[ImGuiKey_X] = ALLEGRO_KEY_X;
    io.KeyMap[ImGuiKey_Y] = ALLEGRO_KEY_Y;
    io.KeyMap[ImGuiKey_Z] = ALLEGRO_KEY_Z;
    io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);