
        
        
    {  TF_DISALLOW_COPY_AND_ASSIGN(RecordWriter);
};
    
    #if TENSORFLOW_USE_SYCL
    
    
    {}  // namespace xla

    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
      // Get a layer using a LayerParameter.
  static shared_ptr<Layer<Dtype> > CreateLayer(const LayerParameter& param) {
    if (Caffe::root_solver()) {
      LOG(INFO) << 'Creating layer ' << param.name();
    }
    const string& type = param.type();
    CreatorRegistry& registry = Registry();
    CHECK_EQ(registry.count(type), 1) << 'Unknown layer type: ' << type
        << ' (known types: ' << LayerTypeListString() << ')';
    return registry[type](param);
  }
    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
      virtual inline const char* type() const { return 'BatchReindex'; }
  virtual inline int ExactNumBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    #endif  // CAFFE_CUDNN_LCN_LAYER_HPP_

    
    namespace caffe {
    }
    
      virtual inline const char* type() const { return 'Eltwise'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    #include <vector>
    
    
    {}  // namespace caffe
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    namespace boost {
    }
    
      private:
    friend class call_stack<Key, Value>;
    
    namespace boost {
namespace date_time {
    }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      // Constructor for a full fenced block.
  explicit gcc_arm_fenced_block(full_t)
  {
    barrier();
  }
    
    #endif // BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP

    
    
    {error_exit:
  // Unlock and return a status to the daemon.
  lck_mtx_unlock(osquery.mtx);
  return err;
}
    
    TEST_F(ViewsConfigParserPluginTests, test_swap_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  EXPECT_EQ(old_views_vec[0], 'config_views.kernel_hashes_new');
    }
    
    #include <boost/lexical_cast.hpp>
    
    namespace osquery {
    }
    
    /// Returns a C++ string explaining the errnum
std::string platformStrerr(int errnum);
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
            for( int i=0; i < nVert; i++ )
        {
            // TODO: optimize multiplication on gpu using vertex shader/projection matrix.
            pVertStream[i].x = cmd_list->VtxBuffer[i].pos.x * g_RenderScale.x;
            pVertStream[i].y = cmd_list->VtxBuffer[i].pos.y * g_RenderScale.y;
            pUVStream[i].x = cmd_list->VtxBuffer[i].uv.x;
            pUVStream[i].y = cmd_list->VtxBuffer[i].uv.y;
            pColStream[i] = cmd_list->VtxBuffer[i].col;
        }
    
    // Implemented features:
//  [X] User texture binding. Cast 'GLuint' OpenGL texture identifier as void*/ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplSdlGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplSdlGL2_CreateDeviceObjects();

    
        // Upload texture to graphics system
    {
        D3D12_HEAP_PROPERTIES props;
        memset(&props, 0, sizeof(D3D12_HEAP_PROPERTIES));
        props.Type = D3D12_HEAP_TYPE_DEFAULT;
        props.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
        props.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
    }
    
    // GL3W/GLFW
#include <GL/gl3w.h>    // This example is using gl3w to access OpenGL functions (because it is small). You may use glew/glad/glLoadGen/etc. whatever already works for you.
#include <GLFW/glfw3.h>
#ifdef _WIN32
#undef APIENTRY
#define GLFW_EXPOSE_NATIVE_WIN32
#define GLFW_EXPOSE_NATIVE_WGL
#include <GLFW/glfw3native.h>
#endif
    
    
    {        g_pSwapChain->Present(1, 0); // Present with vsync
        //g_pSwapChain->Present(0, 0); // Present without vsync
    }
    
        if (EXPECTS_CRASH_DUMP_HEADER == _state) {
        _state = EXPECTS_CRASH_DUMP_CONTENT;
        strout += _strcache;
    }
    
    template <class T>
inline T ntoh(T t) { return Endian<T>::ntoh(t); }
    
            std::map<const std::string, Spy*>::iterator it;
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #ifndef _COMM_FUNCTION_H_
#define _COMM_FUNCTION_H_