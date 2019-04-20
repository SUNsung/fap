
        
        // static
void App::CloseAllWindows(bool force, bool quit) {
  std::vector<Shell*> windows = Shell::windows();
    }
    
      static void Call(content::Shell* shell,
                   const std::string& method,
                   const base::ListValue& arguments,
                   base::ListValue* result,
                   DispatcherHost* dispatcher_host);
    
    
    {}  // namespace nwapi
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    void Menu::Append(MenuItem* menu_item) {
  menu_items.push_back(menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_append(GTK_MENU_SHELL(menu_), menu_item->menu_item_);
}
    
        if (!found) {
      KeyMap::iterator it = keymap.find(upperText);
      if (it != keymap.end()) {
        keyName = it->second;
        found = true;
      }
    }
    
    #include 'base/base64.h'
#include 'base/logging.h'
#include 'base/strings/stringprintf.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/nw_clipboard.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
#include 'ui/base/clipboard/clipboard.h'
#include 'ui/base/clipboard/clipboard_constants.h'
#include 'ui/base/clipboard/scoped_clipboard_writer.h'
#include 'ui/gfx/codec/jpeg_codec.h'
#include 'ui/gfx/codec/png_codec.h'
#include 'third_party/skia/include/core/SkBitmap.h'
    
      // implement nw.Screen.startMonitor()
  class NwScreenStartMonitorFunction : public NWSyncExtensionFunction {
  public:
    NwScreenStartMonitorFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
namespace {
    }
    }
    }
    }
    }
    
    
    {
    {
    {}  // namespace io
}  // namespace protobuf
}  // namespace google

    
    namespace google {
namespace protobuf {
    }
    }
    
    TEST(StatusOr, TestPointerAssignmentStatusNotOkConverting) {
  StatusOr<Derived*> source(Status::CANCELLED);
  StatusOr<Base2*>   target;
  target = source;
  EXPECT_EQ(source.status(), target.status());
}
    
      while (true) {
    void* outptr;
    int outlen;
    bool ok;
    do {
      ok = out.Next(&outptr, &outlen);
      if (!ok) {
        break;
      }
    } while (outlen <= 0);
    readlen = read(STDIN_FILENO, outptr, outlen);
    if (readlen <= 0) {
      out.BackUp(outlen);
      break;
    }
    if (readlen < outlen) {
      out.BackUp(outlen - readlen);
    }
  }
    
    class DataStripper {
 public:
  void StripMessage(Message *message) {
    std::vector<const FieldDescriptor*> set_fields;
    const Reflection* reflection = message->GetReflection();
    reflection->ListFields(*message, &set_fields);
    }
    }
    
        if (dataset.message_name() == 'benchmarks.proto3.GoogleMessage1') {
      message = new benchmarks::proto3::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage1') {
      message = new benchmarks::proto2::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage2') {
      message = new benchmarks::proto2::GoogleMessage2;
    } else if (dataset.message_name() ==
        'benchmarks.google_message3.GoogleMessage3') {
      message = new benchmarks::google_message3::GoogleMessage3;
    } else if (dataset.message_name() ==
        'benchmarks.google_message4.GoogleMessage4') {
      message = new benchmarks::google_message4::GoogleMessage4;
    } else {
      std::cerr << 'Unknown message type: ' << dataset.message_name();
      exit(1);
    }
    
        string filename = file->name();
    string basename = StripProto(filename);
    
      // Array holding scores for each orientation id [0,3].
  // Orientation ids [0..3] map to [0, 270, 180, 90] degree orientations of the
  // page respectively, where the values refer to the amount of clockwise
  // rotation to be applied to the page for the text to be upright and readable.
  float orientations[4];
  // Script confidence scores for each of 4 possible orientations.
  float scripts_na[4][kMaxNumberOfScripts];
    
      // Backwards compatible fit returning a gradient and constant.
  // Deprecated. Prefer Fit(ICOORD*, ICOORD*) where possible, but use this
  // function in preference to the LMS class.
  double Fit(float* m, float* c);
    
    // Update the other members if the cost is lower.
void DPPoint::UpdateIfBetter(int64_t cost, int32_t steps, const DPPoint* prev,
                             int32_t n, int32_t sig_x, int64_t sig_xsq) {
  if (cost < total_cost_) {
    total_cost_ = cost;
    total_steps_ = steps;
    best_prev_ = prev;
    n_ = n;
    sig_x_ = sig_x;
    sig_xsq_ = sig_xsq;
  }
}
    
     private:
  std::vector<TestPartResult> array_;
    
    
    {  // We disallow copying TestResult.
  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestResult);
};  // class TestResult
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED1.  Don't use
// this in your code.
#define GTEST_PRED1_(pred, v1, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred1Helper(#pred, \
                                             #v1, \
                                             pred, \
                                             v1), on_failure)
    
    // Names of the flags (needed for parsing Google Test flags).
const char kDeathTestStyleFlag[] = 'death_test_style';
const char kDeathTestUseFork[] = 'death_test_use_fork';
const char kInternalRunDeathTestFlag[] = 'internal_run_death_test';
    
      // Leave whatever circle we're part of.  Returns true if we were the
  // last member of the circle.  Once this is done, you can join() another.
  bool depart()
      GTEST_LOCK_EXCLUDED_(g_linked_ptr_mutex) {
    MutexLock lock(&g_linked_ptr_mutex);
    }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41, GTEST_TEMPLATE_ T42,
    GTEST_TEMPLATE_ T43, GTEST_TEMPLATE_ T44, GTEST_TEMPLATE_ T45,
    GTEST_TEMPLATE_ T46, GTEST_TEMPLATE_ T47, GTEST_TEMPLATE_ T48>
struct Templates48 {
  typedef TemplateSel<T1> Head;
  typedef Templates47<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
      T43, T44, T45, T46, T47, T48> Tail;
};
    
    #include 'sample1.h'
    
    
// This sample shows how to write a simple unit test for a function,
// using Google C++ testing framework.
//
// Writing a unit test using Google C++ testing framework is easy as 1-2-3:
    
      const size_t len = strlen(a_c_string);
  char* const clone = new char[ len + 1 ];
  memcpy(clone, a_c_string, len + 1);
    
    /*
Method:
Start at vertex with minimum y (pick maximum x one if there are two).  
We aim our 'lastDir' vector at (1.0, 0)
We look at the two rays going off from our start vertex, and follow whichever
has the smallest angle (in -Pi -> Pi) wrt lastDir ('rightest' turn)
    
    			float fDX = a_frgbaDecodedColor.fR - a_frgbaSourcePixel.fR;
			float fDY = a_frgbaDecodedColor.fG - a_frgbaSourcePixel.fG;
			float fDZ = a_frgbaDecodedColor.fB - a_frgbaSourcePixel.fB;
			float fDW = a_frgbaDecodedColor.fA - a_frgbaSourcePixel.fA;
    
    		virtual bool HasSeverelyBentDifferentialColors(void) const = 0;
    
    #define MULT16_16_Q11_32(a,b)     ((a)*(b))
#define MULT16_16_Q11(a,b)     ((a)*(b))
#define MULT16_16_Q13(a,b)     ((a)*(b))
#define MULT16_16_Q14(a,b)     ((a)*(b))
#define MULT16_16_Q15(a,b)     ((a)*(b))
#define MULT16_16_P15(a,b)     ((a)*(b))
#define MULT16_16_P13(a,b)     ((a)*(b))
#define MULT16_16_P14(a,b)     ((a)*(b))
#define MULT16_32_P16(a,b)     ((a)*(b))
    
    /** Shift by a and round-to-neareast 32-bit value. Result is a 16-bit value */
#define ROUND16(x,a) (EXTRACT16(PSHR32((x),(a))))
/** Divide by two */
#define HALF16(x)  (SHR16(x,1))
#define HALF32(x)  (SHR32(x,1))
    
    #define silk_sign(a)                        ((a) > 0 ? 1 : ( (a) < 0 ? -1 : 0 ))
    
    /* a32 + (b32 * (opus_int32)((opus_int16)(c32))) >> 16 output have to be 32bit int */
#undef silk_SMLAWB
#define silk_SMLAWB(a, b, c) ((a) + silk_SMULWB(b, c))
    
        template <>
    std::tuple<const float16 *, const SparseIndexType*, const SparseIndexType*, size_t> NDArrayView::SparseCSCDataBuffers<float16>() const
    {
        return _SparseCSCDataBuffers<float16, half>();
    }
    
            CNTK_API void SetValueInitialization(const ParameterInitializer& initializationConfig, const DeviceDescriptor& device);
    
    VMTOC::~VMTOC() {
  FTRACE(1, 'Number of values if 64bits stored in TOC: {}\n',
    std::to_string(m_last_elem_pos));
}
    
    APCCollection::~APCCollection() {
  // Zero for size is correct, because when this APCCollection was unreferenced
  // it already included the size of the inner handle.
  m_arrayHandle->unreferenceRoot(0);
}
    
    #endif // HPHP_GLOB_STREAM_WRAPPER_H

    
    void logAHMSubMapWarning(folly::StringPiece mapName);
    
      // overriding ResourceData
  const String& o_getClassNameHook() const override { return classnameof(); }
    
      explicit PlainFile(FILE *stream = nullptr,
                     bool nonblocking = false,
                     const String& wrapper_type = null_string,
                     const String& stream_type = null_string);
  explicit PlainFile(int fd,
                     bool nonblocking = false,
                     const String& wrapper = null_string,
                     const String& stream_type = null_string);
  ~PlainFile() override;
    
    
    {
    {        if (multiply_table == NULL)
        {
            for (uint32_t y = 0; y < h; y++, src += src_pitch, dst += dst_pitch)
                memcpy(dst, src, w);
        }
        else
        {
            for (uint32_t y = 0; y < h; y++, src += src_pitch, dst += dst_pitch)
                for (uint32_t x = 0; x < w; x++)
                    dst[x] = multiply_table[src[x]];
        }
    }
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        glfwDestroyWindow(window);
    glfwTerminate();
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL3_Init(const char* glsl_version = NULL);
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
    
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