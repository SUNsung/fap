
        
        /** Exceptions which the user cannot easily avoid.
 *
 * E.g. out-of-memory (when we use malloc), stack-overflow, malicious input
 * 
 * \remark derived from Json::Exception
 */
class JSON_API RuntimeError : public Exception {
public:
  RuntimeError(std::string const& msg);
};
    
      // Find the file which defines an extension extending the given message type
  // with the given field number.
  // Containing_type must be a fully-qualified type name.
  // Python objects are not required to implement this method.
  bool FindFileContainingExtension(const string& containing_type,
                                   int field_number,
                                   FileDescriptorProto* output);
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(CppGenerator);
};
    
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
    
    
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
    namespace internal {
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31>
class ValueArray31 {
 public:
  ValueArray31(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31) : v1_(v1), v2_(v2),
      v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9), v10_(v10),
      v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15), v16_(v16),
      v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21), v22_(v22),
      v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27), v28_(v28),
      v29_(v29), v30_(v30), v31_(v31) {}
    }
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
    #include <THPP/tensors/THTensor.hpp>
    
    template<template <typename> class Trait, typename... Types>
struct map_to_ptr<Trait, std::tuple<Types...>> {
  using type = std::tuple<
    typename std::add_pointer<Types>::type...,
    typename std::add_pointer<typename Trait<Types>::type>::type...
  >;
};
    
    void THDTensor_(gesvd2)(THDTensor *ru, THDTensor *rs, THDTensor *rv, THDTensor *ra,
                        THDTensor *a, const char *jobu) {
  if (a == NULL) a = ra;
  THArgCheck(a->nDimension == 2, 1, 'A should be 2 dimensional');
    }
    
    static inline uint64_t decodeUInt64BE(const uint8_t *data) {
  return (((uint64_t)data[7])<< 0) | (((uint64_t)data[6])<< 8) |
         (((uint64_t)data[5])<<16) | (((uint64_t)data[4])<<24) |
         (((uint64_t)data[3])<<32) | (((uint64_t)data[2])<<40) |
         (((uint64_t)data[1])<<48) | (((uint64_t)data[0])<<56);
}
    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
    
    {}  // namespace
    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
    #include 'test/cpp/qps/histogram.h'
    
    int protoc_main(int argc, char* argv[]) {
  google::protobuf::compiler::CommandLineInterface cli;
  cli.AllowPlugins('protoc-');
    }
    
      int64_t getTime() const;
    
    
    {
    {}}

    
    //////////////////////////////////////////////////////////////////////
    
      Vconst() : kind(Quad), val(0) {}
  explicit Vconst(Kind k)        : kind(k), isUndef(true), val(0) {}
  explicit Vconst(bool b)        : kind(Byte), val(b) {}
  explicit Vconst(uint8_t b)     : kind(Byte), val(b) {}
  explicit Vconst(int8_t b)      : Vconst(uint8_t(b)) {}
  explicit Vconst(uint32_t i)    : kind(Long), val(i) {}
  // For historical reasons Vconst(int) produces an 8-byte constant.
  explicit Vconst(int32_t i)     : Vconst(int64_t(i)) {}
  explicit Vconst(uint16_t)      = delete;
  explicit Vconst(int16_t)       = delete;
  explicit Vconst(ullong i)      : kind(Quad), val(i) {}
  explicit Vconst(long long i)   : Vconst(ullong(i)) {}
  explicit Vconst(ulong i)       : Vconst(ullong(i)) {}
  explicit Vconst(long i)        : Vconst(ullong(i)) {}
  explicit Vconst(const void* p) : Vconst(uintptr_t(p)) {}
  explicit Vconst(double d)      : kind(Double), doubleVal(d) {}
    
    
static Variant HHVM_FUNCTION(gmp_powm,
                             const Variant& dataA,
                             const Variant& dataB,
                             const Variant& dataC) {
  mpz_t gmpDataA, gmpDataB, gmpDataC, gmpReturn;
    }
    
      bool ret = true;
  bitmask* run_nodes = numa_get_run_node_mask();
  bitmask* mem_nodes = numa_get_mems_allowed();
  for (int i = 0; i <= max_node; i++) {
    if (!numa_bitmask_isbitset(run_nodes, i) ||
        !numa_bitmask_isbitset(mem_nodes, i)) {
      // Only deal with the case of a contiguous set of nodes where we can
      // run/allocate memory on each node.
      ret = false;
      break;
    }
    numa_node_set |= (uint32_t)1 << i;
    numa_num_nodes++;
  }
  numa_bitmask_free(run_nodes);
  numa_bitmask_free(mem_nodes);
    
    public int
magic_compile(struct magic_set *ms, const char *magicfile)
{
  if (ms == NULL)
    return -1;
  return file_apprentice(ms, magicfile, FILE_COMPILE);
}
    
    private:
    
    void embedded_data_cleanup() {
  std::lock_guard<std::mutex> l(s_tmp_files_lock);
    }
    
      for (const auto& iter : line_exports) {
    Row r;
    r['share'] = iter;
    r['readonly'] = (readonly) ? '1' : '0';
    }
    
    std::string stringFromCFAbsoluteTime(const CFDataRef& cf_abstime) {
  double value;
  if (CFNumberGetValue((CFNumberRef)cf_abstime, kCFNumberFloat64Type, &value)) {
    // Add seconds difference between CFAbsoluteTime and UNIX times.
    value += kCFAbsoluteTimeIntervalSince1970;
    }
    }
    
    namespace osquery {
    }
    
    REGISTER(KernelEventPublisher, 'event_publisher', 'kernel');
    
    // Build with, e.g:
//   # cl.exe binary_to_compressed_c.cpp
//   # gcc binary_to_compressed_c.cpp
// You can also find a precompiled Windows binary in the binary/demo package available from https://github.com/ocornut/imgui
    
    // CHANGELOG 
// (minor and older changes stripped away, please see git history for details)
//  2018-06-08: Misc: Extracted imgui_impl_opengl3.cpp/.h away from the old combined GLFW/SDL+OpenGL3 examples.
//  2018-06-08: OpenGL: Use draw_data->DisplayPos and draw_data->DisplaySize to setup projection matrix and clipping rectangle.
//  2018-05-25: OpenGL: Removed unnecessary backup/restore of GL_ELEMENT_ARRAY_BUFFER_BINDING since this is part of the VAO state.
//  2018-05-14: OpenGL: Making the call to glBindSampler() optional so 3.2 context won't fail if the function is a NULL pointer.
//  2018-03-06: OpenGL: Added const char* glsl_version parameter to ImGui_ImplOpenGL3_Init() so user can override the GLSL version e.g. '#version 150'.
//  2018-02-23: OpenGL: Create the VAO in the render function so the setup can more easily be used with multiple shared GL context.
//  2018-02-16: Misc: Obsoleted the io.RenderDrawListsFn callback and exposed ImGui_ImplSdlGL3_RenderDrawData() in the .h file so you can call it yourself.
//  2018-01-07: OpenGL: Changed GLSL shader version from 330 to 150.
//  2017-09-01: OpenGL: Save and restore current bound sampler. Save and restore current polygon mode.
//  2017-05-01: OpenGL: Fixed save and restore of current blend func state.
//  2017-05-01: OpenGL: Fixed save and restore of current GL_ACTIVE_TEXTURE.
//  2016-09-05: OpenGL: Fixed save and restore of current scissor rectangle.
//  2016-07-29: OpenGL: Explicitly setting GL_UNPACK_ROW_LENGTH to reduce issues because SDL changes it. (#752)
    
    public:
    ImGuiWindow(ImGuiContext* context, const char* name);
    ~ImGuiWindow();
    
        // Create the rasterizer state
    {
        D3D12_RASTERIZER_DESC& desc = psoDesc.RasterizerState;
        desc.FillMode = D3D12_FILL_MODE_SOLID;
        desc.CullMode = D3D12_CULL_MODE_NONE;
        desc.FrontCounterClockwise = FALSE;
        desc.DepthBias = D3D12_DEFAULT_DEPTH_BIAS;
        desc.DepthBiasClamp = D3D12_DEFAULT_DEPTH_BIAS_CLAMP;
        desc.SlopeScaledDepthBias = D3D12_DEFAULT_SLOPE_SCALED_DEPTH_BIAS;
        desc.DepthClipEnable = true;
        desc.MultisampleEnable = FALSE;
        desc.AntialiasedLineEnable = FALSE;
        desc.ForcedSampleCount = 0;
        desc.ConservativeRaster = D3D12_CONSERVATIVE_RASTERIZATION_MODE_OFF;
    }
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
        ImGuiIO& io = ImGui::GetIO();
    
            // 3. Show the ImGui demo window. Most of the sample code is in ImGui::ShowDemoWindow(). Read its code to learn more about Dear ImGui!
        if (show_demo_window)
        {
            ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiCond_FirstUseEver); // Normally user code doesn't need/want to call this because positions are saved in .ini file anyway. Here we just want to make the demo initial state a bit more friendly!
            ImGui::ShowDemoWindow(&show_demo_window);
        }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    
    {    // Store letters in KeysDown[] array as both uppercase and lowercase + Handle GLUT translating CTRL+A..CTRL+Z as 1..26. 
    // This is a hacky mess but GLUT is unable to distinguish e.g. a TAB key from CTRL+I so this is probably the best we can do here.
    if (c >= 1 && c <= 26)
        io.KeysDown[c] = io.KeysDown[c - 1 + 'a'] = io.KeysDown[c - 1 + 'A'] = true;
    else if (c >= 'a' && c <= 'z')
        io.KeysDown[c] = io.KeysDown[c - 'a' + 'A'] = true;
    else if (c >= 'A' && c <= 'Z')
        io.KeysDown[c] = io.KeysDown[c - 'A' + 'a'] = true;
    else
        io.KeysDown[c] = true;
    ImGui_ImplFreeGLUT_UpdateKeyboardMods();
    (void)x; (void)y; // Unused
}
    
        // Main loop
    bool running = true;
    while (running)
    {
        // Poll and handle events (inputs, window resize, etc.)
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplAllegro5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplAllegro5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                ImGui_ImplAllegro5_CreateDeviceObjects();
            }
        }
    }
    
            // Rendering
        ImGui::Render();
        IwGxSetColClear(clear_color.x * 255, clear_color.y * 255, clear_color.z * 255, clear_color.w * 255);
        IwGxClear();
        ImGui_Marmalade_RenderDrawData(ImGui::GetDrawData());
        IwGxSwapBuffers();
    
    
    {  c3.write((uint8_t)10); // This should _not_ duplicate the two buffers.
  t = c4.read<uint8_t>();
  EXPECT_EQ(10, t);
}
    
    template <class C, std::size_t N>
inline std::basic_ostream<C>& operator<<(
    std::basic_ostream<C>& os,
    const BasicFixedString<C, N>& string) {
  using StreamSize = decltype(os.width());
  os.write(string.begin(), static_cast<StreamSize>(string.size()));
  return os;
}
    
    
    {  // Free the SharedInfo if it was allocated separately.
  //
  // This is only used by takeOwnership().
  //
  // To avoid this special case handling in decrementRefcount(), we could have
  // takeOwnership() set a custom freeFn() that calls the user's free function
  // then frees the SharedInfo object.  (This would require that
  // takeOwnership() store the user's free function with its allocated
  // SharedInfo object.)  However, handling this specially with a flag seems
  // like it shouldn't be problematic.
  if (flags() & kFlagFreeSharedInfo) {
    delete sharedInfo();
  }
}
    
      std::lock_guard<std::mutex> entry_lock(mutex_);
  if (state_.load(std::memory_order_acquire) == SingletonHolderState::Living) {
    return;
  }
  if (state_.load(std::memory_order_acquire) ==
        SingletonHolderState::NotRegistered) {
    detail::singletonWarnCreateUnregisteredAndAbort(type());
  }
    
      // State of the singleton entry. If state is Living, instance_ptr and
  // instance_weak can be safely accessed w/o synchronization.
  std::atomic<SingletonHolderState> state_{SingletonHolderState::NotRegistered};
    
    #include <string>
    
    // See portability/Unistd.h for why these need to be in a namespace
// rather then extern 'C'.
namespace folly {
namespace portability {
namespace fcntl {
int creat(char const* fn, int pm);
int fcntl(int fd, int cmd, ...);
int posix_fallocate(int fd, off_t offset, off_t len);
int open(char const* fn, int of, int pm = 0);
}
}
}
    
    #include <folly/Executor.h>
#include <folly/MPMCQueue.h>
#include <folly/Range.h>
#include <folly/executors/task_queue/BlockingQueue.h>
#include <folly/synchronization/LifoSem.h>
#include <glog/logging.h>
    
    #pragma once
    
      virtual bool FullMergeV2(const MergeOperationInput& merge_in,
                           MergeOperationOutput* merge_out) const override;
    
      /// Remove the first (or last) num occurrences of value from the list (key)
  /// Return the number of elements removed.
  /// May throw RedisListException
  int Remove(const std::string& key, int32_t num,
             const std::string& value);
  int RemoveFirst(const std::string& key, int32_t num,
                  const std::string& value);
  int RemoveLast(const std::string& key, int32_t num,
                 const std::string& value);
    
    
    {  m_jcreate_compaction_filter_methodid =
      AbstractCompactionFilterFactoryJni::getCreateCompactionFilterMethodId(env);
  if(m_jcreate_compaction_filter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
}
    
    void BaseComparatorJniCallback::FindShortestSeparator(
    std::string* start, const Slice& limit) const {
  if (start == nullptr) {
    return;
  }
    }
    
    #ifdef NDEBUG
#define TEST_SYNC_POINT(x)
#define TEST_IDX_SYNC_POINT(x, index)
#define TEST_SYNC_POINT_CALLBACK(x, y)
#define INIT_SYNC_POINT_SINGLETONS()
#else