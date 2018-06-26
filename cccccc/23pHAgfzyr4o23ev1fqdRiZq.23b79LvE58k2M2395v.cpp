
        
        namespace tensorflow {
    }
    
    #include 'tensorflow/contrib/mpi/mpi_utils.h'
namespace tensorflow {
    }
    
    REGISTER_COMPLEX(CPU, float, complex64);
REGISTER_COMPLEX(CPU, double, complex128);
    
    
    {    {
      mutex_lock l(mu);
      statuses.push_back(publish_status);
      if (this_count == kSends - 1 && !all_done.HasBeenNotified()) {
        all_done.Notify();
      }
    }
  };
    
      image_format_ = kDefaultFormat;
  image_quality_ = kDefaultQuality;
    
    // Create a Shell and returns its routing id.
IPC_SYNC_MESSAGE_ROUTED2_1(ShellViewHostMsg_CreateShell,
                           std::string /* url */,
                           base::DictionaryValue /* manifest */,
                           int /* result */)
    
    #include 'base/compiler_specific.h'
#include 'content/nw/src/api/base/base.h'
    
    namespace nwapi {
    }
    
    void Menu::Insert(MenuItem* menu_item, int pos) {
  std::vector<MenuItem*>::iterator begin = menu_items.begin();
  menu_items.insert(begin+pos,menu_item);
  if (GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    menu_item->UpdateKeys(gtk_accel_group);
  }
  gtk_menu_shell_insert(GTK_MENU_SHELL(menu_), menu_item->menu_item_, pos);
}
    
    void Menu::Create(const base::DictionaryValue& option) {
  is_menu_modified_ = true;
  menu_delegate_.reset(new MenuDelegate(object_manager()));
  menu_model_.reset(new ui::NwMenuModel(menu_delegate_.get()));
    }
    
    using namespace extensions::nwapi::nw__clipboard;
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.create', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCreateFunction);
};
    
      bool NwScreenStartMonitorFunction::RunNWSync(base::ListValue* response, std::string* error) {
    bool screens, windows;
    EXTENSION_FUNCTION_VALIDATE(args_->GetBoolean(0, &screens));
    EXTENSION_FUNCTION_VALIDATE(args_->GetBoolean(1, &windows));
    NwDesktopCaptureMonitor::GetInstance()->Start(screens, windows);
    return true;
  }
    
    void projectPoints(cv::InputArray objectPoints, cv::OutputArray imagePoints,
                   cv::InputArray _rvec,cv::InputArray _tvec,
                   const IntrinsicParams& param, cv::OutputArray jacobian);
    
            // find two white and black blobs that are close to the input point
        std::vector<std::pair<int, float> > white_order, black_order;
        orderContours(black_contours, corners[i], black_order);
        orderContours(white_contours, corners[i], white_order);
    
                            CV_Assert(arr.type() == CV_64FC2);
                        Point2d tangentVector_1 = arr.at<Point2d>(endPointIndex) - arr.at<Point2d>(startPointIndex);
                        Point2d tangentVector_2 = arr.at<Point2d>(testPointIndex) - arr.at<Point2d>(startPointIndex);
    
    /* ////////////////////////////////////////////////////////////////////
//
//  CvMat helper tables
//
// */
    
    namespace testing {
    }
    
    
    {  // Tersely prints the first N fields of a tuple to a string vector,
  // one element for each field.
  template <typename Tuple>
  static void TersePrintPrefixToStrings(const Tuple& t, Strings* strings) {
    TuplePrefixPrinter<N - 1>::TersePrintPrefixToStrings(t, strings);
    ::std::stringstream ss;
    UniversalTersePrint(::std::tr1::get<N - 1>(t), &ss);
    strings->push_back(ss.str());
  }
};
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_SPI_H_

    
    #if 0
    
      // Gets the number of failed test cases.
  int failed_test_case_count() const;
    
      // The d'tor pops the info pushed by the c'tor.
  //
  // Note that the d'tor is not virtual in order to be efficient.
  // Don't inherit from ScopedTrace!
  ~ScopedTrace();
    
      template <GTEST_7_TYPENAMES_(U)>
  tuple(const GTEST_7_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_), f5_(t.f5_), f6_(t.f6_) {}
    
    // We will track memory used by this class.
class Water {
 public:
  // Normal Water declarations go here.
    }
    
    #include '../master_worker/common/RPC.hpp'
#include 'TH/THStorage.h'
    
    #include <boost/asio/detail/config.hpp>
    
    #ifndef BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP
#define BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP
    
      static void validate(const Buffers& buffer_sequence)
  {
    typename Buffers::const_iterator iter = buffer_sequence.begin();
    typename Buffers::const_iterator end = buffer_sequence.end();
    for (; iter != end; ++iter)
    {
      Buffer buffer(*iter);
      boost::asio::buffer_cast<const void*>(buffer);
    }
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
# include <boost/asio/detail/null_fenced_block.hpp>
#elif defined(__MACH__) && defined(__APPLE__)
# include <boost/asio/detail/macos_fenced_block.hpp>
#elif defined(__sun)
# include <boost/asio/detail/solaris_fenced_block.hpp>
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
# include <boost/asio/detail/gcc_arm_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
# include <boost/asio/detail/gcc_hppa_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
# include <boost/asio/detail/gcc_x86_fenced_block.hpp>
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
# include <boost/asio/detail/gcc_sync_fenced_block.hpp>
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
# include <boost/asio/detail/win_fenced_block.hpp>
#else
# include <boost/asio/detail/null_fenced_block.hpp>
#endif
    
    #if defined(BOOST_ASIO_HAS_STD_FUNCTION)
# include <functional>
#else // defined(BOOST_ASIO_HAS_STD_FUNCTION)
# include <boost/function.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_FUNCTION)
    
    #define BOOST_ASIO_SIGNAL_HANDLER_CHECK( \
    handler_type, handler) \
  typedef int BOOST_ASIO_UNUSED_TYPEDEF
    
        // Output as Base85 encoded
    FILE* out = stdout;
    fprintf(out, '// File: '%s' (%d bytes)\n', filename, (int)data_sz);
    fprintf(out, '// Exported using binary_to_compressed_c.cpp\n');
	const char* compressed_str = use_compression ? 'compressed_' : '';
    if (use_base85_encoding)
    {
        fprintf(out, 'static const char %s_%sdata_base85[%d+1] =\n    \'', symbol, compressed_str, (int)((compressed_sz+3)/4)*5);
        char prev_c = 0;
        for (int src_i = 0; src_i < compressed_sz; src_i += 4)
        {
            // This is made a little more complicated by the fact that ??X sequences are interpreted as trigraphs by old C/C++ compilers. So we need to escape pairs of ??.
            unsigned int d = *(unsigned int*)(compressed + src_i);
            for (unsigned int n5 = 0; n5 < 5; n5++, d /= 85)
            {
                char c = Encode85Byte(d);
                fprintf(out, (c == '?' && prev_c == '?') ? '\\%c' : '%c', c);
                prev_c = c;
            }
            if ((src_i % 112) == 112-4)
                fprintf(out, '\'\n    \'');
        }
        fprintf(out, '\';\n\n');
    }
    else
    {
        fprintf(out, 'static const unsigned int %s_%ssize = %d;\n', symbol, compressed_str, (int)compressed_sz);
        fprintf(out, 'static const unsigned int %s_%sdata[%d/4] =\n{', symbol, compressed_str, (int)((compressed_sz+3)/4)*4);
        int column = 0;
        for (int i = 0; i < compressed_sz; i += 4)
        {
            unsigned int d = *(unsigned int*)(compressed + i);
            if ((column++ % 12) == 0)
                fprintf(out, '\n    0x%08x, ', d);
            else
                fprintf(out, '0x%08x, ', d);
        }
        fprintf(out, '\n};\n\n');
    }
    
    bool ImGui_ImplOpenGL2_CreateFontsTexture()
{
    // Build texture atlas
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pixels;
    int width, height;
    io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height);   // Load as RGBA 32-bits (75% of the memory is wasted, but default font is so small) because it is more likely to be compatible with user's existing shaders. If your ImTextureId represent a higher-level concept than just a GL texture id, consider calling GetTexDataAsAlpha8() instead to save on GPU memory.
    }
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
    #ifdef _MSC_VER
#pragma warning (disable: 4505) // unreferenced local function has been removed (stb stuff)
#endif
    
    static void ImGui_ImplGlfw_UpdateMousePosAndButtons()
{
    // Update buttons
    ImGuiIO& io = ImGui::GetIO();
    for (int i = 0; i < IM_ARRAYSIZE(io.MouseDown); i++)
    {
        // If a mouse press event came, always pass it as 'mouse held this frame', so we don't miss click-release events that are shorter than 1 frame.
        io.MouseDown[i] = g_MouseJustPressed[i] || glfwGetMouseButton(g_Window, i) != 0;
        g_MouseJustPressed[i] = false;
    }
    }
    
    
    {    // Destroy SDL mouse cursors
    for (ImGuiMouseCursor cursor_n = 0; cursor_n < ImGuiMouseCursor_COUNT; cursor_n++)
        SDL_FreeCursor(g_MouseCursors[cursor_n]);
    memset(g_MouseCursors, 0, sizeof(g_MouseCursors));
}
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        if (int size = s3eClipboardGetText(NULL, 0))
    {
        if (g_ClipboardText)
            delete[] g_ClipboardText;
        g_ClipboardText = new char[size];
        g_ClipboardText[0] = '\0';
        s3eClipboardGetText(g_ClipboardText, size);
    }