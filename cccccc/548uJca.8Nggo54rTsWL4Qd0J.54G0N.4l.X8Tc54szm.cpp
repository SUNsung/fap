
        
        template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43>
internal::ValueArray43<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
    T43> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
    T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
    T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33,
    T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41,
    T42 v42, T43 v43) {
  return internal::ValueArray43<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40, T41, T42, T43>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12,
      v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26,
      v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40,
      v41, v42, v43);
}
    
    template <typename T>
class UniversalTersePrinter {
 public:
  static void Print(const T& value, ::std::ostream* os) {
    UniversalPrint(value, os);
  }
};
template <typename T>
class UniversalTersePrinter<T&> {
 public:
  static void Print(const T& value, ::std::ostream* os) {
    UniversalPrint(value, os);
  }
};
template <typename T, size_t N>
class UniversalTersePrinter<T[N]> {
 public:
  static void Print(const T (&value)[N], ::std::ostream* os) {
    UniversalPrinter<T[N]>::Print(value, os);
  }
};
template <>
class UniversalTersePrinter<const char*> {
 public:
  static void Print(const char* str, ::std::ostream* os) {
    if (str == NULL) {
      *os << 'NULL';
    } else {
      UniversalPrint(string(str), os);
    }
  }
};
template <>
class UniversalTersePrinter<char*> {
 public:
  static void Print(char* str, ::std::ostream* os) {
    UniversalTersePrinter<const char*>::Print(str, os);
  }
};
    
    
// Helper function for implementing {EXPECT|ASSERT}_PRED1.  Don't use
// this in your code.
template <typename Pred,
          typename T1>
AssertionResult AssertPred1Helper(const char* pred_text,
                                  const char* e1,
                                  Pred pred,
                                  const T1& v1) {
  if (pred(v1)) return AssertionSuccess();
    }
    
    // Traps C++ exceptions escaping statement and reports them as test
// failures. Note that trapping SEH exceptions is not implemented here.
# if GTEST_HAS_EXCEPTIONS
#  define GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, death_test) \
  try { \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
  } catch (const ::std::exception& gtest_exception) { \
    fprintf(\
        stderr, \
        '\n%s: Caught std::exception-derived exception escaping the ' \
        'death test statement. Exception message: %s\n', \
        ::testing::internal::FormatFileLocation(__FILE__, __LINE__).c_str(), \
        gtest_exception.what()); \
    fflush(stderr); \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  } catch (...) { \
    death_test->Abort(::testing::internal::DeathTest::TEST_THREW_EXCEPTION); \
  }
    
      static void OnDoneRecvMessageCb(void* user_data, grpc_error* error);
    
    MeasureDouble RpcClientReceivedBytesPerRpc() {
  static const auto measure = MeasureDouble::Register(
      kRpcClientReceivedBytesPerRpcMeasureName,
      'Total bytes received across all response messages per RPC', kUnitBytes);
  return measure;
}
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
      // Fixed size offsets for field ID start positions during encoding.  Field
  // data immediately follows.
  enum FieldIdOffset {
    kTraceIdOffset = kVersionIdSize,
    kSpanIdOffset = kTraceIdOffset + kFieldIdSize + kTraceIdSize,
    kTraceOptionsOffset = kSpanIdOffset + kFieldIdSize + kSpanIdSize,
  };
    
    
    {}  // namespace grpc
    
    #include <grpc/support/port_platform.h>
    
    std::pair<uint64_t, uint64_t> GetCpuStatsImpl() {
  uint64_t busy = 0, total = 0;
  FILETIME idle, kernel, user;
  if (GetSystemTimes(&idle, &kernel, &user) != 0) {
    total = FiletimeToInt(kernel) + FiletimeToInt(user);
    busy = total - FiletimeToInt(idle);
  }
  return std::make_pair(busy, total);
}
    
    void CoreStatsToProto(const grpc_stats_data& core, Stats* proto) {
  for (int i = 0; i < GRPC_STATS_COUNTER_COUNT; i++) {
    Metric* m = proto->add_metrics();
    m->set_name(grpc_stats_counter_name[i]);
    m->set_count(core.counters[i]);
  }
  for (int i = 0; i < GRPC_STATS_HISTOGRAM_COUNT; i++) {
    Metric* m = proto->add_metrics();
    m->set_name(grpc_stats_histogram_name[i]);
    Histogram* h = m->mutable_histogram();
    for (int j = 0; j < grpc_stats_histo_buckets[i]; j++) {
      Bucket* b = h->add_buckets();
      b->set_start(grpc_stats_histo_bucket_boundaries[i][j]);
      b->set_count(core.histograms[grpc_stats_histo_start[i] + j]);
    }
  }
}
    
      count = p - buffer;
  if (buffer[0] >= 'a' && buffer[0] <= 'z')
    return 26 * (count - 1) + buffer[0] - 'a' + 1;
  if (buffer[0] >= 'A' && buffer[0] <= 'Z')
    return 26 * (count - 1) + buffer[0] - 'A' + 1;
    
      // Destructor.
  virtual ~PreScanOutputDev();
    
    MediaRendition::MediaRendition(Object* obj) {
  Object tmp, tmp2;
  GBool hasClip = gFalse;
    }
    
    Sound *Sound::parseSound(Object *obj)
{
  // let's try to see if this Object is a Sound, according to the PDF specs
  // (section 9.2)
  Stream *str = NULL;
  // the Object must be a Stream
  if (obj->isStream()) {
    str = obj->getStream();
  } else {
    return NULL;
  }
  // the Stream must have a Dict
  Dict *dict = str->getDict();
  if (dict == NULL)
    return NULL;
  Object tmp;
  // the Dict must have the 'R' key of type num
  dict->lookup('R', &tmp);
  if (tmp.isNum()) {
    return new Sound(obj);
  } else {
    return NULL;
  }
}
    
      SplashAxialPattern(SplashColorMode colorMode, GfxState *state, GfxAxialShading *shading);
    
        Rational Sin(Rational const& rat, ANGLE_TYPE angletype);
    Rational Cos(Rational const& rat, ANGLE_TYPE angletype);
    Rational Tan(Rational const& rat, ANGLE_TYPE angletype);
    Rational ASin(Rational const& rat, ANGLE_TYPE angletype);
    Rational ACos(Rational const& rat, ANGLE_TYPE angletype);
    Rational ATan(Rational const& rat, ANGLE_TYPE angletype);
    
    // Update the commands corresponding to the passed string Number
std::shared_ptr<CalculatorVector<int>> CHistoryCollector::GetOperandCommandsFromString(wstring_view numStr)
{
    std::shared_ptr<CalculatorVector<int>> commands = std::make_shared<CalculatorVector<int>>();
    // Check for negate
    bool fNegative = (numStr[0] == L'-');
    }
    
    
    {        DisplayNum();
        m_HistoryCollector.AddUnaryOpToHistory(IDC_SIGN, m_bInv, m_angletype);
    }
    break;
    
        struct HISTORYITEMVECTOR
    {
        std::shared_ptr<CalculatorVector<std::pair<std::wstring, int>>> spTokens;
        std::shared_ptr<CalculatorVector<std::shared_ptr<IExpressionCommand>>> spCommands;
        std::wstring expression;
        std::wstring result;
    };
    
        // Static methods for the instance
    static void
    InitialOneTimeOnlySetup(CalculationManager::IResourceProvider& resourceProvider); // Once per load time to call to initialize all shared global variables
    // returns the ptr to string representing the operator. Mostly same as the button, but few special cases for x^y etc.
    static std::wstring_view GetString(int ids)
    {
        return s_engineStrings[std::to_wstring(ids)];
    }
    static std::wstring_view GetString(std::wstring ids)
    {
        return s_engineStrings[ids];
    }
    static std::wstring_view OpCodeToString(int nOpCode)
    {
        return GetString(IdStrFromCmdId(nOpCode));
    }
    static std::wstring_view OpCodeToUnaryString(int nOpCode, bool fInv, ANGLE_TYPE angletype);
    
    #if defined(DEBUG_RATPAK)
//-----------------------------------------------------------------------------
//
//   Debug versions of rational number creation and destruction routines.
//   used for debugging allocation errors.
//
//-----------------------------------------------------------------------------
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
    #include <s3eKeyboard.h>
#include <s3ePointer.h>
#include <IwGx.h>
    
    ImVec2 ImFont::CalcTextSizeA(float size, float max_width, float wrap_width, const char* text_begin, const char* text_end, const char** remaining) const
{
    if (!text_end)
        text_end = text_begin + strlen(text_begin); // FIXME-OPT: Need to avoid this.
    }
    
    // About GLSL version:
//  The 'glsl_version' initialization parameter should be NULL (default) or a '#version XXX' string.
//  On computer platform the GLSL version default to '#version 130'. On OpenGL ES 3 platform it defaults to '#version 300 es'
//  Only override if your GL version doesn't handle this GLSL version. See GLSL version table at the top of imgui_impl_opengl3.cpp.
    
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
    
    bool ImGui::InputTextMultiline(const char* label, std::string* str, const ImVec2& size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
    IM_ASSERT((flags & ImGuiInputTextFlags_CallbackResize) == 0);
    flags |= ImGuiInputTextFlags_CallbackResize;
    }
    
    #include 'imgui.h'
#include 'imgui_impl_sdl.h'
#include 'imgui_impl_opengl3.h'
#include <stdio.h>
#include <emscripten.h>
#include <SDL.h>
#include <SDL_opengles2.h>
    
    void ImGui_ImplOpenGL2_DestroyFontsTexture()
{
    if (g_FontTexture)
    {
        ImGuiIO& io = ImGui::GetIO();
        glDeleteTextures(1, &g_FontTexture);
        io.Fonts->TexID = 0;
        g_FontTexture = 0;
    }
}
    
    int main()
{
    // create JSON array
    json array = {'first', '2nd', 'third', 'fourth'};
    }