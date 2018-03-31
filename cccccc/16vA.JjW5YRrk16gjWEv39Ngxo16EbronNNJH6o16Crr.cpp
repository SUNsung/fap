
        
        #endif /* OPENCV_CUDA_WARP_REDUCE_HPP__ */

    
            if (obj.empty() || obj.type() != type || !obj.isContinuous() || obj.size().area() != area)
            obj.create(1, area, type);
    
    GpuMat cv::cuda::HostMem::createGpuMatHeader() const
{
#ifndef HAVE_CUDA
    throw_no_cuda();
    return GpuMat();
#else
    CV_Assert( alloc_type == SHARED );
    }
    
    
class WERD;
class UNICHARSET;
    
    /**
 * @name tess_acceptable_word
 *
 * @return true if the word is regarded as 'good enough'.
 * @param word_choice after context
 * @param raw_choice before context
 */
bool Tesseract::tess_acceptable_word(WERD_RES* word) {
  return getDict().AcceptableResult(word);
}
    
    void LLSQ::add(double x, double y) {          // add an element
  total_weight++;                           // count elements
  sigx += x;                     // update accumulators
  sigy += y;
  sigxx += x * x;
  sigxy += x * y;
  sigyy += y * y;
}
// Adds an element with a specified weight.
void LLSQ::add(double x, double y, double weight) {
  total_weight += weight;
  sigx += x * weight;                     // update accumulators
  sigy += y * weight;
  sigxx += x * x * weight;
  sigxy += x * y * weight;
  sigyy += y * y * weight;
}
// Adds a whole LLSQ.
void LLSQ::add(const LLSQ& other) {
  total_weight += other.total_weight;
  sigx += other.sigx;                     // update accumulators
  sigy += other.sigy;
  sigxx += other.sigxx;
  sigxy += other.sigxy;
  sigyy += other.sigyy;
}
    
    
    {  // Does this paragraph begin with a drop cap?
  bool has_drop_cap;
};
    
    // A smart pointer class that implements a double-ended pointer. Each end
// points to the other end. The copy constructor and operator= have MOVE
// semantics, meaning that the relationship with the other end moves to the
// destination of the copy, leaving the source unattached.
// For this reason both the copy constructor and the operator= take a non-const
// reference argument, and the const reference versions cannot be used.
// DoublePtr is useful to incorporate into structures that are part of a
// collection such as GenericVector or STL containers, where reallocs can
// relocate the members. DoublePtr is also useful in a GenericHeap, where it
// can correctly maintain the pointer to an element of the heap despite it
// getting moved around on the heap.
class DoublePtr {
 public:
  DoublePtr() : other_end_(NULL) {}
  // Copy constructor steals the partner off src and is therefore a non
  // const reference arg.
  // Copying a const DoublePtr generates a compiler error.
  DoublePtr(DoublePtr& src) {
    other_end_ = src.other_end_;
    if (other_end_ != NULL) {
      other_end_->other_end_ = this;
      src.other_end_ = NULL;
    }
  }
  // Operator= steals the partner off src, and therefore needs src to be a non-
  // const reference.
  // Assigning from a const DoublePtr generates a compiler error.
  void operator=(DoublePtr& src) {
    Disconnect();
    other_end_ = src.other_end_;
    if (other_end_ != NULL) {
      other_end_->other_end_ = this;
      src.other_end_ = NULL;
    }
  }
    }
    
    #include 'genericvector.h'
    
    
    {
    {    loadSystemlib();
  }
} s_xhprof_extension;
    
    void Vunit::freeScratchBlock(Vlabel l) {
  // This will leak blocks if anything's been added since the corresponding
  // call to makeScratchBlock(), but it's harmless.
  if (l == blocks.size() - 1) blocks.pop_back();
}
    
     private:
  using Cluster = jit::vector<Vlabel>;
    
    void ThriftBuffer::skip(int8_t type) {
  switch (type) {
    case T_STOP:
    case T_VOID:
      return;
    case T_STRUCT:
      while (true) {
        int8_t ttype; read(ttype); // get field type
        if (ttype == T_STOP) break;
        read(nullptr, 2); // skip field number, I16
        skip(ttype); // skip field payload
      }
      return;
    case T_BOOL:
    case T_BYTE:
      read(nullptr, 1);
      return;
    case T_I16:
      read(nullptr, 2);
      return;
    case T_I32:
      read(nullptr, 4);
      return;
    case T_U64:
    case T_I64:
    case T_DOUBLE:
      read(nullptr, 8);
      return;
    //case T_UTF7: // aliases T_STRING
    case T_UTF8:
    case T_UTF16:
    case T_STRING: {
      int32_t len; read(len);
      read(nullptr, len);
      } return;
    case T_MAP: {
      int8_t keytype; read(keytype);
      int8_t valtype; read(valtype);
      int32_t size; read(size);
      for (int32_t i = 0; i < size; ++i) {
        skip(keytype);
        skip(valtype);
      }
    } return;
    case T_LIST:
    case T_SET: {
      int8_t valtype; read(valtype);
      int32_t size; read(size);
      for (int32_t i = 0; i < size; ++i) {
        skip(valtype);
      }
    } return;
  };
    }
    
    #ifndef GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
#define GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    // Tucks all generator state in an anonymous namespace away from
// PythonGrpcGenerator and the header file, mostly to encourage future changes
// to not require updates to the grpcio-tools C++ code part. Assumes that it is
// only ever used from a single thread.
struct PrivateGenerator {
  const GeneratorConfiguration& config;
  const grpc_generator::File* file;
    }
    
    bool SecureAuthContext::SetPeerIdentityPropertyName(const grpc::string& name) {
  if (!ctx_) return false;
  return grpc_auth_context_set_peer_identity_property_name(ctx_,
                                                           name.c_str()) != 0;
}
    
    #ifndef GRPC_XMACRO_ITEM
#error This file is to be used with the 'X-macro' pattern: Please #define \
       GRPC_XMACRO_ITEM(methodName, FlagName), then #include this file, and then #undef \
       GRPC_XMACRO_ITEM.
#endif
    
    
    {  const Result start_;
};
    
      std::unique_ptr<grpc::Server> StartServer(int port);
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    namespace boost {
namespace asio {
    }
    }
    
    #include <boost/asio/detail/config.hpp>
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
# include <boost/asio/detail/null_event.hpp>
#elif defined(BOOST_ASIO_WINDOWS)
# include <boost/asio/detail/win_event.hpp>
#elif defined(BOOST_ASIO_HAS_PTHREADS)
# include <boost/asio/detail/posix_event.hpp>
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
# include <boost/asio/detail/std_event.hpp>
#else
# error Only Windows, POSIX and std::condition_variable are supported!
#endif
    
    #include <boost/asio/detail/posix_fd_set_adapter.hpp>
#include <boost/asio/detail/win_fd_set_adapter.hpp>
    
    #include <boost/asio/detail/pop_options.hpp>
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    bool js_cocos2dx_studio_ComController_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ComController_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ComController(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ComController_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ComController_ComController(JSContext *cx, uint32_t argc, jsval *vp);
    
    
#endif // __cocos2dx_cocosbuilder_h__

    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
        argc = lua_gettop(tolua_S) - 1;
    
    void Test::MouseMove(const b2Vec2& p)
{
	m_mouseWorld = p;
	
	if (m_mouseJoint)
	{
		m_mouseJoint->SetTarget(p);
	}
}
    
    
    {	b2Profile m_maxProfile;
	b2Profile m_totalProfile;
};
    
    			b2WeldJointDef jd;
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX10_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX10_CreateDeviceObjects();
    
        // Setup time step
    double current_time = s3eTimerGetUST() / 1000.0f;
    io.DeltaTime = g_Time > 0.0 ? (float)(current_time - g_Time) : (float)(1.0f/60.0f);
    g_Time = current_time;
    
    // callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_API int32       ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData);
IMGUI_API int32       ImGui_Marmalade_KeyCallback(void* SystemData, void* userData);
IMGUI_API int32       ImGui_Marmalade_CharCallback(void* SystemData, void* userData);

    
    
    {        // Rendering
        al_clear_to_color(al_map_rgba_f(clear_color.x, clear_color.y, clear_color.z, clear_color.w));
        ImGui::Render();
        ImGui_ImplA5_RenderDrawData(ImGui::GetDrawData());
        al_flip_display();
    }
    
        g_pSwapChain->SetMaximumFrameLatency(NUM_BACK_BUFFERS);
    
        ImVec2 max_glyph_size(1.0f, 1.0f);
    
    const ImWchar*  ImFontAtlas::GetGlyphRangesCyrillic()
{
    static const ImWchar ranges[] =
    {
        0x0020, 0x00FF, // Basic Latin + Latin Supplement
        0x0400, 0x052F, // Cyrillic + Cyrillic Supplement
        0x2DE0, 0x2DFF, // Cyrillic Extended-A
        0xA640, 0xA69F, // Cyrillic Extended-B
        0,
    };
    return &ranges[0];
}
    
    
    {    g_FrameIndex = (g_FrameIndex + 1) % IMGUI_VK_QUEUED_FRAMES;
}
    
        // Setup time step
    double current_time =  glfwGetTime();
    io.DeltaTime = g_Time > 0.0 ? (float)(current_time - g_Time) : (float)(1.0f/60.0f);
    g_Time = current_time;
    
        // Store GL version string so we can refer to it later in case we recreate shaders.
    if (glsl_version == NULL)
        glsl_version = '#version 150';
    IM_ASSERT((int)strlen(glsl_version) + 2 < IM_ARRAYSIZE(g_GlslVersion));
    strcpy(g_GlslVersion, glsl_version);
    strcat(g_GlslVersion, '\n');
    
    IMGUI_API bool        ImGui_ImplSdlGL2_Init(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_Shutdown();
IMGUI_API void        ImGui_ImplSdlGL2_NewFrame(SDL_Window* window);
IMGUI_API void        ImGui_ImplSdlGL2_RenderDrawData(ImDrawData* draw_data);
IMGUI_API bool        ImGui_ImplSdlGL2_ProcessEvent(SDL_Event* event);
    
    
    {    void toJS(nbind::cbOutput expose) const
    {
        expose(unit, value);
    }
};

    
    /* static */ void Config::destroy(Config * node)
{
    delete node;
}
    
    // Return the epilogue of the generated source file.
grpc::string GetSourceEpilogue(grpc_generator::File *file,
                               const Parameters &params);
    
    namespace grpc_go_generator {
    }
    
    namespace MyGame {
namespace Example {
    }
    }
    
      void Warn(const std::string &warn, bool show_exe_name = true) const;
    
      T *operator*() const {
    return reinterpret_cast<T *>(
        reinterpret_cast<uint8_t *>(flatbuffers::vector_data(vec_)) + offset_);
  }
  T *operator->() const { return operator*(); }
  void operator=(const pointer_inside_vector &piv);
    
      // Get and test a field of the FlatBuffer's `struct`.
  auto pos = monster->pos();
  assert(pos);
  assert(pos->z() == 3.0f);
  (void)pos;
    
    std::string BaseGenerator::NamespaceDir(const Parser &parser,
                                        const std::string &path,
                                        const Namespace &ns) {
  EnsureDirExists(path.c_str());
  if (parser.opts.one_file) return path;
  std::string namespace_dir = path;  // Either empty or ends in separator.
  auto &namespaces = ns.components;
  for (auto it = namespaces.begin(); it != namespaces.end(); ++it) {
    namespace_dir += *it + kPathSeparator;
    EnsureDirExists(namespace_dir.c_str());
  }
  return namespace_dir;
}