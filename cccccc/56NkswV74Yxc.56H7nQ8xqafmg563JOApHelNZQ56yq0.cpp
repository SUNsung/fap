
        
        
    {
    {}  // namespace python
}  // namespace protobuf
    
    #include <string>
    
    
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
    
    #include <string>
    
    // Exposed for testing only.
LIBPROTOC_EXPORT string EscapeJavadoc(const string& input);
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_EXTENSION_LITE_H__

    
    // ===================================================================
    
    
    {    cvReleaseMat( &(*state)->preFilteredImg0 );
    cvReleaseMat( &(*state)->preFilteredImg1 );
    cvReleaseMat( &(*state)->slidingSumBuf );
    cvReleaseMat( &(*state)->disp );
    cvReleaseMat( &(*state)->cost );
    cvFree( state );
}
    
            template<int CTA_SIZE>
        static __forceinline__ __device__ int Ballot(int predicate)
        {
#if defined (__CUDA_ARCH__) && (__CUDA_ARCH__ >= 200)
            return __ballot(predicate);
#else
            __shared__ volatile int cta_buffer[CTA_SIZE];
    }
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
    #ifndef CV_CL_GET_PROC_ADDRESS
#ifdef __GNUC__
#warning('OPENCV: OpenCL FFT dynamic library loader: check configuration')
#else
#pragma message('WARNING: OPENCV: OpenCL FFT dynamic library loader: check configuration')
#endif
#define CV_CL_GET_PROC_ADDRESS(name) NULL
#endif
    
    TEST_F(UnicharcompressTest, DoesJapanese) {
  LOG(INFO) << 'Testing jpn';
  LoadUnicharset('jpn.unicharset');
  ExpectCorrect('jpn');
}
    
    // dims=[5, 4, 3, 2]->[5, 3, 2, 4]
TEST_F(MatrixTest, RotatingTranspose_1_3) {
  GENERIC_2D_ARRAY<int> m;
  src_.RotatingTranspose(dims_, kNumDims_, 1, 3, &m);
  m.ResizeNoInit(kInputSize_ / 4, 4);
  // Verify that the result is:
  // output tensor=[[[[0, 6, 12, 18][1, 7, 13, 19]]
  //                 [[2, 8, 14, 20][3, 9, 15, 21]]
  //                 [[4, 10, 16, 22][5, 11, 17, 23]]]
  //                [[[24, 30, 36, 42]...
  EXPECT_EQ(0, m(0, 0));
  EXPECT_EQ(6, m(0, 1));
  EXPECT_EQ(1, m(1, 0));
  EXPECT_EQ(2, m(2, 0));
  EXPECT_EQ(3, m(3, 0));
  EXPECT_EQ(4, m(4, 0));
  EXPECT_EQ(5, m(5, 0));
  EXPECT_EQ(24, m(6, 0));
  EXPECT_EQ(30, m(6, 1));
}
    
      // Writes to the given file. Returns false in case of error.
  bool Serialize(TFile* fp) const override;
  // Reads from the given file. Returns false in case of error.
  bool DeSerialize(TFile* fp) override;
    
      protected:
    /**
     * Called by concrete classes.
     *
     * outputbase is the name of the output file excluding
     * extension. For example, '/path/to/chocolate-chip-cookie-recipe'
     *
     * extension indicates the file extension to be used for output
     * files. For example 'pdf' will produce a .pdf file, and 'hocr'
     * will produce .hocr files.
     */
    TessResultRenderer(const char *outputbase,
                       const char* extension);
    
      // Identify the colparitions in part_grid_, label them as PT_EQUATION, and
  // save them into cp_seeds_.
  void IdentifySeedParts();
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
// Nothing to include.
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <atomic>
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <boost/detail/atomic_count.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {private:
  Handler handler_;
};
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if defined(BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS)
    
      // Get an iterator for the beginning of the map.
  const_iterator begin() const
  {
    return values_.begin();
  }
    
    template <typename Time_Traits>
std::size_t epoll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}
    
    stb_uint stb_compress(stb_uchar *out, stb_uchar *input, stb_uint length)
{
    stb__out = out;
    stb__outfile = NULL;
    }
    
    
    {    // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
    if (hud->show_demo_window)
    {
        ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
        ImGui::ShowDemoWindow(&hud->show_demo_window);
    }
}

    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    // Handler for Win32 messages, update mouse/keyboard data.
// You may or not need this for your implementation, but it can serve as reference for handling inputs.
// Commented out to avoid dragging dependencies on <windows.h> types. You can copy the extern declaration in your code.
/*
IMGUI_API LRESULT   ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
*/

    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
    
        // Create the blending setup
    {
        D3D12_BLEND_DESC& desc = psoDesc.BlendState;
        desc.AlphaToCoverageEnable = false;
        desc.RenderTarget[0].BlendEnable = true;
        desc.RenderTarget[0].SrcBlend = D3D12_BLEND_SRC_ALPHA;
        desc.RenderTarget[0].DestBlend = D3D12_BLEND_INV_SRC_ALPHA;
        desc.RenderTarget[0].BlendOp = D3D12_BLEND_OP_ADD;
        desc.RenderTarget[0].SrcBlendAlpha = D3D12_BLEND_INV_SRC_ALPHA;
        desc.RenderTarget[0].DestBlendAlpha = D3D12_BLEND_ZERO;
        desc.RenderTarget[0].BlendOpAlpha = D3D12_BLEND_OP_ADD;
        desc.RenderTarget[0].RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL;
    }
    
        // Setup style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
    FrameContext* WaitForNextFrameResources()
{
    UINT nextFrameIndex = g_frameIndex + 1;
    g_frameIndex = nextFrameIndex;
    }
    
    #include <cstdarg>
#include <stdio.h>
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg, ARGS... args) noexcept {
  __android_log_print(level, tag, msg, args...);
}
    
      void unref() {
    if (0 == --m_refcount) {
      delete this;
    }
  }
    
    
    {}

    
    // Class that lets you declare a global but does not add a static constructor
// to the binary. Eventually I'd like to have this auto-initialize in a
// multithreaded environment but for now it's easiest just to use manual
// initialization.
template <typename T>
class StaticInitialized {
public:
  constexpr StaticInitialized() :
    m_instance(nullptr)
  {}
    }
    
    #define FBASSERT(expr) FBASSERTMSGF(expr, '%s', #expr)
    
    #pragma once