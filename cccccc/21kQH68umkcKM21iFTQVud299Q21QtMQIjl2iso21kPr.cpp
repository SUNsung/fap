
        
        inline void
FastHufDecoder::refill
    (Int64 &buffer,
     int numBits,                       // number of bits to refill
     Int64 &bufferBack,                 // the next 64-bits, to refill from
     int &bufferBackNumBits,            // number of bits left in bufferBack
     const unsigned char *&currByte,    // current byte in the bitstream
     int &currBitsLeft)                 // number of bits left in the bitsream
{
    // 
    // Refill bits into the bottom of buffer, from the top of bufferBack.
    // Always top up buffer to be completely full.
    //
    }
    
    // file handling classes
class OutputFile;
class TiledInputFile;
class ScanLineInputFile;
class InputFile;
class TiledOutputFile;
class DeepScanLineInputFile;
class DeepScanLineOutputFile;
class DeepTiledInputFile;
class DeepTiledOutputFile;
class AcesInputFile;
class AcesOutputFile;
class TiledInputPart;
class TiledInputFile;
class TileOffsets;
    
        bool                xTileCoords;
    bool                yTileCoords;
    
        OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, magic);
    OPENEXR_IMF_INTERNAL_NAMESPACE::Xdr::read <OPENEXR_IMF_INTERNAL_NAMESPACE::StreamIO> (is, version);
    
    #include 'ImfNamespace.h'
    
        template <class T> T*	findTypedAttribute (const std::string &name);
    template <class T> const T*	findTypedAttribute (const std::string &name)
								       const;
    
    //-------------------------------------------------------------------
// class InputPart:
//
// Same interface as InputFile. Please refer to InputFile.
//-------------------------------------------------------------------
    
            Rational operator-() const;
        Rational& operator+=(Rational const& rhs);
        Rational& operator-=(Rational const& rhs);
        Rational& operator*=(Rational const& rhs);
        Rational& operator/=(Rational const& rhs);
        Rational& operator%=(Rational const& rhs);
    
        wstringstream groupedStream{};
    uint32_t groupingSize = 0;
    
    
    {        return;
    }
    
    #include <array>
#include <string>
#include <string_view>
#include <unordered_map>
    
    enum eANGLE_TYPE
{
    ANGLE_DEG, // Calculate trig using 360 degrees per revolution
    ANGLE_RAD, // Calculate trig using 2 pi  radians per revolution
    ANGLE_GRAD // Calculate trig using 400 gradients per revolution
    }
    
    void CCalcEngine::SettingsChanged()
{
    wchar_t lastDec = m_decimalSeparator;
    wstring decStr = m_resourceProvider->GetCEngineString(L'sDecimal');
    m_decimalSeparator = decStr.empty() ? DEFAULT_DEC_SEPARATOR : decStr.at(0);
    // Until it can be removed, continue to set ratpak decimal here
    SetDecimalSeparator(m_decimalSeparator);
    }
    
    static stb_uchar *stb__out;
static FILE      *stb__outfile;
static stb_uint   stb__outbytes;
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
            ImGui::Text('This is some useful text.');                     // Display some text (you can use a format strings too)
        ImGui::Checkbox('Demo Window', &show_demo_window);            // Edit bools storing our window open/close state
        ImGui::Checkbox('Another Window', &show_another_window);
    
                if (ImGui::Button('Button'))                            // Buttons return true when clicked (most widgets return true when edited/activated)
                counter++;
            ImGui::SameLine();
            ImGui::Text('counter = %d', counter);
    
            D3D12_RESOURCE_BARRIER barrier = {};
        barrier.Type                   = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
        barrier.Flags                  = D3D12_RESOURCE_BARRIER_FLAG_NONE;
        barrier.Transition.pResource   = g_mainRenderTargetResource[backBufferIdx];
        barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
        barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
        barrier.Transition.StateAfter  = D3D12_RESOURCE_STATE_RENDER_TARGET;
    
        // Create Vulkan Instance
    {
        VkInstanceCreateInfo create_info = {};
        create_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        create_info.enabledExtensionCount = extensions_count;
        create_info.ppEnabledExtensionNames = extensions;
    }
    
        // Rendering
    ImGui::Render();
    ImGuiIO& io = ImGui::GetIO();
    glViewport(0, 0, (GLsizei)io.DisplaySize.x, (GLsizei)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
        // Decide GL+GLSL versions
#if __APPLE__
    // GL 3.2 Core + GLSL 150
    const char* glsl_version = '#version 150';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG); // Always required on Mac
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = '#version 130';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
#endif
    
    
    {        err = vkDeviceWaitIdle(g_Device);
        check_vk_result(err);
        ImGui_ImplVulkan_DestroyFontUploadObjects();
    }
    
    
    {  // converting into the hardware velodyne ref (negative yaml and degrees)
  // adding 0.5 performs a centered double to int conversion
  config_.set_min_angle(100 * (2 * M_PI - tmp_min_angle) * 180 / M_PI + 0.5);
  config_.set_max_angle(100 * (2 * M_PI - tmp_max_angle) * 180 / M_PI + 0.5);
  if (config_.min_angle() == config_.max_angle()) {
    // avoid returning empty cloud if min_angle = max_angle
    config_.set_min_angle(0);
    config_.set_max_angle(36000);
  }
}
    
    TEST_F(GraphSegmentorTest, test_edge_comparison) {
  EXPECT_LT(edges_[1], edges_[0]);
  EXPECT_FALSE(edges_[3] < edges_[4]);
  EXPECT_FALSE(edges_[6] < edges_[7]);
}
    
      integer_param_map_.clear();
  string_param_map_.clear();
  double_param_map_.clear();
  float_param_map_.clear();
  bool_param_map_.clear();
  array_integer_param_map_.clear();
  array_string_param_map_.clear();
  array_double_param_map_.clear();
  array_float_param_map_.clear();
  array_bool_param_map_.clear();
    
    #include 'modules/planning/traffic_rules/traffic_rule.h'
    
    
    {
    {}  // namespace prediction
}  // namespace apollo
