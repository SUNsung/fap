
        
        /**
    
    #endif  // PYTHON_PROTO2_PYTHON_IMPL
#endif  // PYTHON_PROTO2_CPP_IMPL_V2
#endif  // PYTHON_PROTO2_CPP_IMPL_V1
    
    namespace google {
namespace protobuf {
    }
    }
    
    
    {}  // namespace google

    
    void RepeatedEnumFieldGenerator::WriteEquals(io::Printer* printer) {
  printer->Print(
    variables_,
    'if(!$name$_.Equals(other.$name$_)) return false;\n');
}
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(JavaGenerator);
};
    
    
    {    IntrinsicParams();
    IntrinsicParams(Vec2d f, Vec2d c, Vec4d k, double alpha = 0);
    IntrinsicParams operator+(const Mat& a);
    IntrinsicParams& operator =(const Mat& a);
    void Init(const cv::Vec2d& f, const cv::Vec2d& c, const cv::Vec4d& k = Vec4d(0,0,0,0), const double& alpha = 0);
};
    
        // Extension: ARB_map_buffer_range
    extern GLvoid* (CODEGEN_FUNCPTR *MapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    extern void (CODEGEN_FUNCPTR *FlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length);
    
    #undef cv_hal_gemm32f
#define cv_hal_gemm32f lapack_gemm32f
#undef cv_hal_gemm64f
#define cv_hal_gemm64f lapack_gemm64f
#undef cv_hal_gemm32fc
#define cv_hal_gemm32fc lapack_gemm32fc
#undef cv_hal_gemm64fc
#define cv_hal_gemm64fc lapack_gemm64fc
    
    void StreamPeerSSL::_bind_methods() {
    }
    
    	mbedtls_ssl_conf_authmode(&conf, authmode);
	mbedtls_ssl_conf_ca_chain(&conf, &cacert, NULL);
	mbedtls_ssl_conf_rng(&conf, mbedtls_ctr_drbg_random, &ctr_drbg);
	mbedtls_ssl_conf_dbg(&conf, my_debug, stdout);
	mbedtls_ssl_setup(&ssl, &conf);
	mbedtls_ssl_set_hostname(&ssl, p_for_hostname.utf8().get_data());
    
    	virtual bool is_server() const;
	virtual ConnectionStatus get_connection_status() const = 0;
    
    	template <class N, class M>
	static MethodBind *bind_method(N p_method_name, M p_method, const Variant &p_def1, const Variant &p_def2, const Variant &p_def3) {
    }
    
    	void set_brake(float p_brake);
	float get_brake() const;
    
    
    {	if (stream.is_null())
		return '<No Stream>';
	return stream->get_name();
};
    
    	virtual bool needsCollision(btBroadphaseProxy *proxy0) const;
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {} // namespace boost
    
    #ifndef BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
#define BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
    
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
    
    #include <boost/asio/detail/push_options.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    template <typename Handler>
inline void deallocate(void* p, std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  ::operator delete(p);
#else
  using boost::asio::asio_handler_deallocate;
  asio_handler_deallocate(p, s, boost::asio::detail::addressof(h));
#endif
}
    
    #include <boost/asio/detail/push_options.hpp>
    
    #include <boost/asio/detail/config.hpp>
#include <cerrno>
#include <boost/asio/detail/descriptor_ops.hpp>
#include <boost/asio/error.hpp>
    
    void dev_poll_reactor::shutdown_service()
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
  shutdown_ = true;
  lock.unlock();
    }
    
     private:
  /// For testing only, reset the stopping status for unittests.
  void resetStopping() {
    stopping_ = false;
  }
    
    /**
 * @brief An EventPublisher will define a SubscriptionContext for
 * EventSubscriber%s to use.
 *
 * Most EventPublisher%s will require specific information for interacting with
 * an OS to receive events. The SubscriptionContext contains information the
 * EventPublisher will use to register OS API callbacks, create
 * subscriptioning/listening handles, etc.
 *
 * Linux `inotify` should implement a SubscriptionContext that subscribes
 * filesystem events based on a filesystem path. `libpcap` will subscribe on
 * networking protocols at various stacks. Process creation may subscribe on
 * process name, parent pid, etc.
 */
struct SubscriptionContext : private boost::noncopyable {};
    
    /// Start an ExtensionWatcher thread.
Status startExtensionWatcher(const std::string& manager_path,
                             size_t interval,
                             bool fatal);
    
    /*
 * @brief Replace gflags' `DEFINE_type` macros to track osquery flags.
 *
 * Do not use this macro within the codebase directly! Use the subsequent macros
 * that abstract the tail of boolean arguments into meaningful statements.
 *
 * @param type(t) The `_type` symbol portion of the gflags define.
 * @param name(n) The name symbol passed to gflags' `DEFINE_type`.
 * @param value(v) The default value, use a C++ literal.
 * @param desc(d) A string literal used for help display.
 * @param shell(s) Boolean, true if this is only supported in osqueryi.
 * @param extension(e) Boolean, true if this is only supported in an extension.
 * @param cli(c) Boolean, true if this can only be set on the CLI (or flagfile).
 *   This helps documentation since flags can also be set within configuration
 *   as 'options'.
 * @param hidden(h) Boolean, true if this is hidden from help displays.
 */
#define OSQUERY_FLAG(t, n, v, d, s, e, c, h)                                   \
  DEFINE_##t(n, v, d);                                                         \
  namespace flags {                                                            \
  const int flag_##n = Flag::create(#n, {d, s, e, c, h});                      \
  }
    
      /**
   * @brief Set the process name.
   */
  void setProcessName(const std::string& name) {
    process_name_ = name;
  }
    
      /**
   * @brief Before ending, tear down any platform specific setup
   *
   * On windows, we require the COM libraries be initialized just once
   */
  static void platformTeardown();
    
    
    {
    {  return '0';
}
}

    
    std::shared_ptr<PlatformProcess> PlatformProcess::launchTestPythonScript(
    const std::string& args) {
  std::string osquery_path;
  auto osquery_path_option = getEnvVar('OSQUERY_DEPS');
  if (osquery_path_option) {
    osquery_path = *osquery_path_option;
  } else {
    if (!isPlatform(PlatformType::TYPE_FREEBSD)) {
      osquery_path = '/usr/local/osquery';
    } else {
      osquery_path = '/usr/local';
    }
  }
    }
    
    std::string platformStrerr(int errnum) {
  return ::strerror(errnum);
}
    
    static unsigned int stb_matchlen(stb_uchar *m1, stb_uchar *m2, stb_uint maxlen)
{
    stb_uint i;
    for (i=0; i < maxlen; ++i)
        if (m1[i] != m2[i]) return i;
    return i;
}
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL2_CreateDeviceObjects();
    
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
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
// Missing features:
//  [ ] SDL2 handling of IME under Windows appears to be broken and it explicitly disable the regular Windows IME. You can restore Windows IME by compiling SDL with SDL_DISABLE_WINDOWS_IME.
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (NB: most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
    
    {
    {        err = vkEndCommandBuffer(g_CommandBuffer[g_FrameIndex]);
        check_vk_result(err);
        err = vkResetFences(g_Device, 1, &g_Fence[g_FrameIndex]);
        check_vk_result(err);
        err = vkQueueSubmit(g_Queue, 1, &info, g_Fence[g_FrameIndex]);
        check_vk_result(err);
    }
}
    
    // Win32 Data
static HWND                     g_hWnd = 0;
static INT64                    g_Time = 0;
static INT64                    g_TicksPerSecond = 0;
static ImGuiMouseCursor         g_LastMouseCursor = ImGuiMouseCursor_COUNT;
    
    
    {        g_pd3dDevice->CreateRootSignature(0, blob->GetBufferPointer(), blob->GetBufferSize(), IID_PPV_ARGS(&g_pRootSignature));
        blob->Release();
    }
    
        // Store our identifier
    io.Fonts->TexID = (void *)(intptr_t)g_FontTexture;
    
    
    {#ifndef FOLLY_TLD_USE_FOLLY_TLS
    delete tmp;
#endif
  }
    
    template <typename T>
constexpr T constexpr_ceil(T t, T round) {
  return round == T(0)
      ? t
      : ((t + (t < T(0) ? T(0) : round - T(1))) / round) * round;
}
    
    TEST(IOBuf, CreateCombined) {
  // Create a combined IOBuf, then destroy it.
  // The data buffer and IOBuf both become unused as part of the destruction
  {
    auto buf = IOBuf::createCombined(256);
    EXPECT_FALSE(buf->isShared());
  }
    }
    
    template <typename C>
struct compare_equal_to : detail::cmp_pred<C, ordering::eq, 0> {
  using detail::cmp_pred<C, ordering::eq, 0>::cmp_pred;
};
    
      /**
   * If POLLABLE, return a file descriptor that can be passed to poll / epoll
   * and will become readable when any async IO operations have completed.
   * If NOT_POLLABLE, return -1.
   */
  int pollFd() const {
    return pollFd_;
  }
    
    void AsyncFileWriter::writeMessage(StringPiece buffer, uint32_t flags) {
  return writeMessage(buffer.str(), flags);
}
    
    /**
 * A helper class for creating an AsyncFileWriter or ImmediateFileWriter based
 * on log handler options settings.
 *
 * This is used by StreamHandlerFactory and FileHandlerFactory.
 */
class FileWriterFactory {
 public:
  bool processOption(StringPiece name, StringPiece value);
  std::shared_ptr<LogWriter> createWriter(File file);
    }
    
    ImmediateFileWriter::ImmediateFileWriter(folly::File&& file)
    : file_{std::move(file)} {}