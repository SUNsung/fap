
        
            // Compress
    int maxlen = data_sz + 512 + (data_sz >> 2) + sizeof(int); // total guess
    char* compressed = use_compression ? new char[maxlen] : data;
    int compressed_sz = use_compression ? stb_compress((stb_uchar*)compressed, (stb_uchar*)data, data_sz) : data_sz;
    if (use_compression)
		memset(compressed + compressed_sz, 0, maxlen - compressed_sz);
    
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
    
        // Setup render state
    const float blend_factor[4] = { 0.f, 0.f, 0.f, 0.f };
    ctx->OMSetBlendState(g_pBlendState, blend_factor, 0xffffffff);
    ctx->OMSetDepthStencilState(g_pDepthStencilState, 0);
    ctx->RSSetState(g_pRasterizerState);
    
    IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
IMGUI_IMPL_API void     ImGui_ImplGlfw_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplGlfw_NewFrame();
    
    static int g_Time = 0;          // Current time, in milliseconds
    
    bool IsZero(double n);
    
    #endif  // BENCHMARK_COLORPRINT_H_

    
      int32_t result = default_value;
  if (!ParseInt32(std::string('Environment variable ') + env_var, string_value,
                  &result)) {
    std::cout << 'The default value ' << default_value << ' is used.\n';
    return default_value;
  }
    
    void ConsoleReporter::ReportRuns(const std::vector<Run>& reports) {
  for (const auto& run : reports) {
    // print the header:
    // --- if none was printed yet
    bool print_header = !printed_header_;
    // --- or if the format is tabular and this run
    //     has different fields from the prev header
    print_header |= (output_options_ & OO_Tabular) &&
                    (!internal::SameNames(run.counters, prev_counters_));
    if (print_header) {
      printed_header_ = true;
      prev_counters_ = run.counters;
      PrintHeader(run);
    }
    // As an alternative to printing the headers like this, we could sort
    // the benchmarks by header and then print. But this would require
    // waiting for the full results before printing, or printing twice.
    PrintRunData(run);
  }
}
    
      // FIXME: Add locking to output.
  template <class Tp>
  friend LogType& operator<<(LogType&, Tp const&);
  friend LogType& operator<<(LogType&, EndLType*);
    
    #define ACQUIRE_SHARED(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(acquire_shared_capability(__VA_ARGS__))
    
    namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    #include 'modules/drivers/canbus/can_comm/message_manager.h'
    
    // Canbus gflags
DEFINE_double(sensor_freq, 100,
              'Sensor feedback timer frequency -- 0 means event trigger.');
    
    int ClusterQualityInfo702::ambig_state(const std::uint8_t* bytes,
                                       int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 3);
    }
    
    unsigned int BaseMapMatrix::CreateBinary(unsigned char* buf,
                                         unsigned int buf_size) const {
  return 0;
}
    
      header->set_version(version);
  header->set_date(date);
  header->mutable_projection()->set_proj(to_coordinate);
  header->set_district(database_name);
  header->set_rev_major(rev_major);
  header->set_rev_minor(rev_minor);
  header->set_left(west);
  header->set_right(east);
  header->set_top(north);
  header->set_bottom(south);
  header->set_vendor(vendor);
    
    
    {  for (auto& lon : lon_trajectories) {
    for (auto& lat : lat_trajectories) {
      trajectory_pair_pqueue_.emplace(lon, lat);
    }
  }
}
    
    
    {
    {
    {}  // namespace gem
}  // namespace canbus
}  // namespace apollo

    
    namespace mars_boost {} namespace boost = mars_boost; namespace mars_boost {
    }