
        
          const Decl *getDecl() const { return D; }
    
      /// \brief The buffer ID where a hashbang line #! is allowed.
  unsigned HashbangBufferID = 0U;
    
    // On Cygwin, std::once_flag can not be used because it is larger than the
// platform word.
typedef uintptr_t swift_once_t;
#else
    
    
    {
    {} // end namespace index
} // end namespace swift
    
    #endif // SWIFT_INDEX_INDEXDATACONSUMER_H

    
      static ResultPlanPtr computeResultPlan(SILGenFunction &SGF,
                                         const CalleeTypeInfo &calleeTypeInfo,
                                         SILLocation loc,
                                         SGFContext evalContext);
    
    #include 'swift/SIL/InstructionUtils.h'
#include 'swift/SIL/Projection.h'
#include 'swift/SILOptimizer/Analysis/AliasAnalysis.h'
#include 'swift/SILOptimizer/Analysis/EscapeAnalysis.h'
#include 'swift/SILOptimizer/Analysis/TypeExpansionAnalysis.h'
#include 'swift/SILOptimizer/Analysis/ValueTracking.h'
#include 'swift/SILOptimizer/Utils/Local.h'
#include 'llvm/ADT/DenseMap.h'
#include 'llvm/ADT/DenseSet.h'
#include 'llvm/ADT/Hashing.h'
#include 'llvm/ADT/SmallVector.h'
#include 'llvm/Support/Debug.h'
#include <utility> 
    
    
    {                return (count & TAG_MASK) - 1;
#else
                return ::atomicInc(address, val);
#endif
            }
    
    #ifndef OPENCV_CUDA_WARP_REDUCE_HPP__
#define OPENCV_CUDA_WARP_REDUCE_HPP__
    
    #include 'runtime_common.hpp'
    
    #include '../../precomp.hpp'
    
    #if defined(MBEDTLS_SSL_DTLS_ANTI_REPLAY) &&                              \
    ( !defined(MBEDTLS_SSL_TLS_C) || !defined(MBEDTLS_SSL_PROTO_DTLS) )
#error 'MBEDTLS_SSL_DTLS_ANTI_REPLAY  defined, but not all prerequisites'
#endif
    
        struct mem_block
    {
      mem_block *m_pNext;
      size_t m_used_count;
      size_t m_size;
      char m_data[1];
    };
    
    #endif

    
    	// Set path to vendored ConEmu config file
	PathCombine(cfgPath, exeDir, L'vendor\\conemu-maximus5\\ConEmu.xml');
    
      /// Construct an acceptor without opening it.
  /**
   * This constructor creates an acceptor without opening it to listen for new
   * connections. The open() function must be called before the acceptor can
   * accept new socket connections.
   *
   * @param io_service The io_service object that the acceptor will use to
   * dispatch handlers for any asynchronous operations performed on the
   * acceptor.
   */
  explicit basic_socket_acceptor(boost::asio::io_service& io_service)
    : basic_io_object<SocketAcceptorService>(io_service)
  {
  }
    
      /// Construct, passing the specified argument to initialise the next layer.
  template <typename Arg>
  explicit buffered_read_stream(Arg& a)
    : next_layer_(a),
      storage_(default_buffer_size)
  {
  }
    
    #endif // BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP

    
      // The type used for offsets into the buffer.
  typedef std::size_t size_type;
    
    
    {
    {} // namespace posix_time
} // namespace boost
    
    #endif // defined(__GNUC__) && defined(__arm__)
    
      // Insert a new entry into the map.
  std::pair<iterator, bool> insert(const value_type& v)
  {
    if (size_ + 1 >= num_buckets_)
      rehash(hash_size(size_ + 1));
    size_t bucket = calculate_hash_value(v.first) % num_buckets_;
    iterator it = buckets_[bucket].first;
    if (it == values_.end())
    {
      buckets_[bucket].first = buckets_[bucket].last =
        values_insert(values_.end(), v);
      ++size_;
      return std::pair<iterator, bool>(buckets_[bucket].last, true);
    }
    iterator end_it = buckets_[bucket].last;
    ++end_it;
    while (it != end_it)
    {
      if (it->first == v.first)
        return std::pair<iterator, bool>(it, false);
      ++it;
    }
    buckets_[bucket].last = values_insert(end_it, v);
    ++size_;
    return std::pair<iterator, bool>(buckets_[bucket].last, true);
  }
    
    
    {  bool earliest = queue.enqueue_timer(time, timer, op);
  io_service_.work_started();
  if (earliest)
    interrupter_.interrupt();
}
    
    void dev_poll_reactor::run(bool block, op_queue<operation>& ops)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
    }
    
    void DebugHUD_InitDefaults( DebugHUD *hud )
{
    hud->show_demo_window = true;
    hud->show_another_window = true;
    hud->rotation_speed = 15.0f;
    
    hud->cubeColor1[0] = 0.4f;
    hud->cubeColor1[1] = 0.4f;
    hud->cubeColor1[2] = 1.0f;
    hud->cubeColor1[3] = 1.0f;
    
    hud->cubeColor2[0] = 1.0f;
    hud->cubeColor2[1] = 0.4f;
    hud->cubeColor2[2] = 0.4f;
    hud->cubeColor2[3] = 1.0f;
    
    hud->clearColor[0] = 0.45f;
    hud->clearColor[1] = 0.55f;
    hud->clearColor[2] = 0.60f;
    hud->clearColor[3] = 1.00f;
}
    
        if (install_callbacks)
    {
        s3ePointerRegister(S3E_POINTER_BUTTON_EVENT, ImGui_Marmalade_PointerButtonEventCallback, 0);
        s3eKeyboardRegister(S3E_KEYBOARD_KEY_EVENT, ImGui_Marmalade_KeyCallback, 0);
        s3eKeyboardRegister(S3E_KEYBOARD_CHAR_EVENT, ImGui_Marmalade_CharCallback, 0);
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL2_CreateDeviceObjects();
    
        // Setup time step
    INT64 current_time;
    QueryPerformanceCounter((LARGE_INTEGER *)&current_time);
    io.DeltaTime = (float)(current_time - g_Time) / g_TicksPerSecond;
    g_Time = current_time;
    
    // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
bool ImGui_ImplA5_ProcessEvent(ALLEGRO_EVENT *ev)
{
    ImGuiIO &io = ImGui::GetIO();
    }
    
    
    {        if (!cfg.GlyphRanges)
            cfg.GlyphRanges = atlas->GetGlyphRangesDefault();
        for (const ImWchar* in_range = cfg.GlyphRanges; in_range[0] && in_range[ 1 ]; in_range += 2, total_ranges_count++) 
            total_glyphs_count += (in_range[1] - in_range[0]) + 1;
    }
    
        {
        D3D12_DESCRIPTOR_HEAP_DESC desc = {};
        desc.Type           = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
        desc.NumDescriptors = NUM_BACK_BUFFERS;
        desc.Flags          = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
        desc.NodeMask       = 1;
        if (g_pd3dDevice->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_pd3dRtvDescHeap)) != S_OK)
            return E_FAIL;
    }
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('ImGui DirectX9 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
    int main(int, char**)
{
    // Setup window
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#if __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif
    GLFWwindow* window = glfwCreateWindow(1280, 720, 'ImGui GLFW+OpenGL3 example', NULL, NULL);
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync
    gl3wInit();
    }
    
    
    {        memcpy(&g_ClearValue.color.float32[0], &clear_color, 4 * sizeof(float));
        frame_begin();
        ImGui_ImplGlfwVulkan_Render(g_CommandBuffer[g_FrameIndex]);
        frame_end();
        frame_present();
    }
    
                // Simple selection popup
            // (If you want to show the current selection inside the Button itself, you may want to build a string using the '###' operator to preserve a constant ID with a variable label)
            if (ImGui::Button('Select..'))
                ImGui::OpenPopup('select');
            ImGui::SameLine();
            ImGui::TextUnformatted(selected_fish == -1 ? '<None>' : names[selected_fish]);
            if (ImGui::BeginPopup('select'))
            {
                ImGui::Text('Aquarium');
                ImGui::Separator();
                for (int i = 0; i < IM_ARRAYSIZE(names); i++)
                    if (ImGui::Selectable(names[i]))
                        selected_fish = i;
                ImGui::EndPopup();
            }