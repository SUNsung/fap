
        
        namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    void ReflectionClassGenerator::Generate(io::Printer* printer) {
  WriteIntroduction(printer);
    }
    
      for (string::size_type i = 0; i < input.size(); i++) {
    char c = input[i];
    switch (c) {
      case '*':
        // Avoid '/*'.
        if (prev == '/') {
          result.append('&#42;');
        } else {
          result.push_back(c);
        }
        break;
      case '/':
        // Avoid '*/'.
        if (prev == '*') {
          result.append('&#47;');
        } else {
          result.push_back(c);
        }
        break;
      case '@':
        // '@' starts javadoc tags including the @deprecated tag, which will
        // cause a compile-time error if inserted before a declaration that
        // does not have a corresponding @Deprecated annotation.
        result.append('&#64;');
        break;
      case '<':
        // Avoid interpretation as HTML.
        result.append('&lt;');
        break;
      case '>':
        // Avoid interpretation as HTML.
        result.append('&gt;');
        break;
      case '&':
        // Avoid interpretation as HTML.
        result.append('&amp;');
        break;
      case '\\':
        // Java interprets Unicode escape sequences anywhere!
        result.append('&#92;');
        break;
      default:
        result.push_back(c);
        break;
    }
    }
    
      // write file header
  io::CodedOutputStream output(raw_output_);
  output.WriteLittleEndian32(0x04034b50);  // magic
  WriteShort(&output, 10);  // version needed to extract
  WriteShort(&output, 0);  // flags
  WriteShort(&output, 0);  // compression method: stored
  WriteShort(&output, 0);  // last modified time
  WriteShort(&output, kDosEpoch);  // last modified date
  output.WriteLittleEndian32(info.crc32);  // crc-32
  output.WriteLittleEndian32(info.size);  // compressed size
  output.WriteLittleEndian32(info.size);  // uncompressed size
  WriteShort(&output, filename_size);  // file name length
  WriteShort(&output, 0);   // extra field length
  output.WriteString(filename);  // file name
  output.WriteString(contents);  // file data
    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    #include 'imgui.h'
#include 'imgui_impl_win32.h'
#include 'imgui_impl_dx11.h'
#include <d3d11.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>
    
        {
        IDXGIFactory4* dxgiFactory = NULL;
        IDXGISwapChain1* swapChain1 = NULL;
        if (CreateDXGIFactory1(IID_PPV_ARGS(&dxgiFactory)) != S_OK ||
            dxgiFactory->CreateSwapChainForHwnd(g_pd3dCommandQueue, hWnd, &sd, NULL, NULL, &swapChain1) != S_OK ||
            swapChain1->QueryInterface(IID_PPV_ARGS(&g_pSwapChain)) != S_OK)
            return E_FAIL;
        swapChain1->Release();
        dxgiFactory->Release();
        g_pSwapChain->SetMaximumFrameLatency(NUM_BACK_BUFFERS);
        g_hSwapChainWaitableObject = g_pSwapChain->GetFrameLatencyWaitableObject();
    }
    
        if (!g_pIB || g_IndexBufferSize < draw_data->TotalIdxCount)
    {
        if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
        g_IndexBufferSize = draw_data->TotalIdxCount + 10000;
        D3D10_BUFFER_DESC desc;
        memset(&desc, 0, sizeof(D3D10_BUFFER_DESC));
        desc.Usage = D3D10_USAGE_DYNAMIC;
        desc.ByteWidth = g_IndexBufferSize * sizeof(ImDrawIdx);
        desc.BindFlags = D3D10_BIND_INDEX_BUFFER;
        desc.CPUAccessFlags = D3D10_CPU_ACCESS_WRITE;
        if (ctx->CreateBuffer(&desc, NULL, &g_pIB) < 0)
            return;
    }
    
    
    {    // Start the frame
    ImGui::NewFrame();
}
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in imgui_impl_opengl3.cpp**
// This code is mostly provided as a reference to learn how ImGui integration works, because it is shorter to read.
// If your code is using GL3+ context or any semi modern OpenGL calls, using this is likely to make everything more
// complicated, will require your code to reset every single OpenGL attributes to their initial state, and might
// confuse your GPU driver.
// The GL2 code is unable to reset attributes or even call e.g. 'glUseProgram(0)' because they don't exist in that API.
    
        // Backup GL state
    GLenum last_active_texture; glGetIntegerv(GL_ACTIVE_TEXTURE, (GLint*)&last_active_texture);
    glActiveTexture(GL_TEXTURE0);
    GLint last_program; glGetIntegerv(GL_CURRENT_PROGRAM, &last_program);
    GLint last_texture; glGetIntegerv(GL_TEXTURE_BINDING_2D, &last_texture);
#ifdef GL_SAMPLER_BINDING
    GLint last_sampler; glGetIntegerv(GL_SAMPLER_BINDING, &last_sampler);
#endif
    GLint last_array_buffer; glGetIntegerv(GL_ARRAY_BUFFER_BINDING, &last_array_buffer);
    GLint last_vertex_array; glGetIntegerv(GL_VERTEX_ARRAY_BINDING, &last_vertex_array);
#ifdef GL_POLYGON_MODE
    GLint last_polygon_mode[2]; glGetIntegerv(GL_POLYGON_MODE, last_polygon_mode);
#endif
    GLint last_viewport[4]; glGetIntegerv(GL_VIEWPORT, last_viewport);
    GLint last_scissor_box[4]; glGetIntegerv(GL_SCISSOR_BOX, last_scissor_box);
    GLenum last_blend_src_rgb; glGetIntegerv(GL_BLEND_SRC_RGB, (GLint*)&last_blend_src_rgb);
    GLenum last_blend_dst_rgb; glGetIntegerv(GL_BLEND_DST_RGB, (GLint*)&last_blend_dst_rgb);
    GLenum last_blend_src_alpha; glGetIntegerv(GL_BLEND_SRC_ALPHA, (GLint*)&last_blend_src_alpha);
    GLenum last_blend_dst_alpha; glGetIntegerv(GL_BLEND_DST_ALPHA, (GLint*)&last_blend_dst_alpha);
    GLenum last_blend_equation_rgb; glGetIntegerv(GL_BLEND_EQUATION_RGB, (GLint*)&last_blend_equation_rgb);
    GLenum last_blend_equation_alpha; glGetIntegerv(GL_BLEND_EQUATION_ALPHA, (GLint*)&last_blend_equation_alpha);
    GLboolean last_enable_blend = glIsEnabled(GL_BLEND);
    GLboolean last_enable_cull_face = glIsEnabled(GL_CULL_FACE);
    GLboolean last_enable_depth_test = glIsEnabled(GL_DEPTH_TEST);
    GLboolean last_enable_scissor_test = glIsEnabled(GL_SCISSOR_TEST);
    bool clip_origin_lower_left = true;
#ifdef GL_CLIP_ORIGIN
    GLenum last_clip_origin = 0; glGetIntegerv(GL_CLIP_ORIGIN, (GLint*)&last_clip_origin); // Support for GL 4.5's glClipControl(GL_UPPER_LEFT)
    if (last_clip_origin == GL_UPPER_LEFT)
        clip_origin_lower_left = false;
#endif
    
    // About OpenGL function loaders:
// About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually.
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad.
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
    class MockProtocolData : public ProtocolData<::apollo::canbus::ChassisDetail> {
 public:
  static const int32_t ID = 0x111;
  MockProtocolData() {}
};
    
    #include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    
    {  Byte t1(bytes + 3);
  uint32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;
  double ret = x * CLUSTER_DIST_RES + CLUSTER_DIST_LAT_MIN;
  return ret;
}
    
    int ClusterQualityInfo702::lateral_vel_rms(const std::uint8_t* bytes,
                                           int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 1);
    }
    
    using apollo::drivers::canbus::Byte;
using apollo::drivers::ContiRadarObs;
    
    
    {  for (int i = 0; i < conti_radar->contiobs_size(); ++i) {
    if (conti_radar->contiobs(i).obstacle_id() == obj_id) {
      auto obs = conti_radar->mutable_contiobs(i);
      obs->set_longitude_dist_rms(
          LINEAR_RMS[longitude_dist_rms(bytes, length)]);
      obs->set_lateral_dist_rms(LINEAR_RMS[lateral_dist_rms(bytes, length)]);
      obs->set_longitude_vel_rms(LINEAR_RMS[longitude_vel_rms(bytes, length)]);
      obs->set_lateral_vel_rms(LINEAR_RMS[lateral_vel_rms(bytes, length)]);
      obs->set_longitude_accel_rms(
          LINEAR_RMS[longitude_accel_rms(bytes, length)]);
      obs->set_lateral_accel_rms(LINEAR_RMS[lateral_accel_rms(bytes, length)]);
      obs->set_oritation_angle_rms(
          ANGLE_RMS[oritation_angle_rms(bytes, length)]);
      obs->set_probexist(PROBOFEXIST[probexist(bytes, length)]);
      obs->set_meas_state(meas_state(bytes, length));
      break;
    }
  }
}
    
    BaseMapMatrix::BaseMapMatrix(const BaseMapMatrix& cells) {}
    
        auto it_lower = std::lower_bound(
        speed_limit_.speed_limit_points().begin(),
        speed_limit_.speed_limit_points().end(), s,
        [](const std::pair<double, double>& point, const double curr_s) {
          return point.first < curr_s;
        });
    
    
    {  EXPECT_EQ(offset, offset_golden);
}
    
    /**
 * @file : spline_1d_seg.cc
 * @brief: polynomial smoothing spline segment
 **/
    
        static BOOST_FORCEINLINE bool compare_exchange_strong(
        storage_type volatile& storage, storage_type& expected, storage_type desired, memory_order, memory_order) BOOST_NOEXCEPT
    {
#if defined(__clang__)
        // Clang cannot allocate rax:rdx register pairs but it has sync intrinsics
        storage_type old_expected = expected;
        expected = __sync_val_compare_and_swap(&storage, old_expected, desired);
        return expected == old_expected;
#elif defined(BOOST_ATOMIC_DETAIL_NO_ASM_RAX_RDX_PAIRS)
        // GCC 4.4 can't allocate rax:rdx register pair either but it also doesn't support 128-bit __sync_val_compare_and_swap
        uint64_t const* p_desired = (uint64_t const*)&desired;
        bool success;
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %[expected], %%rax\n\t'
            'movq 8+%[expected], %%rdx\n\t'
            'lock; cmpxchg16b %[dest]\n\t'
            'sete %[success]\n\t'
            'movq %%rax, %[expected]\n\t'
            'movq %%rdx, 8+%[expected]\n\t'
            : [dest] '+m' (storage), [expected] '+o' (expected), [success] '=q' (success)
            : 'b' (p_desired[0]), 'c' (p_desired[1])
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq 0(%[expected]), %%rax\n\t'
            'movq 8(%[expected]), %%rdx\n\t'
            'lock; cmpxchg16b %[dest]\n\t'
            'sete %[success]\n\t'
            'movq %%rax, 0(%[expected])\n\t'
            'movq %%rdx, 8(%[expected])\n\t'
            : [dest] '+m' (storage), [success] '=q' (success)
            : 'b' (p_desired[0]), 'c' (p_desired[1]), [expected] 'r' (&expected)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
    }