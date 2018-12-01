
        
        
    {  return true;
}

    
    
    {  //DefaultCacheKey() = default;
  DefaultCacheKey(void *Key, CacheImpl::CallBacks *CBs) : Key(Key), CBs(CBs) {}
};
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  llvm::SmallString<32> NameBuf(Name);
  cache_attributes_t Attrs = {
    CACHE_ATTRIBUTES_VERSION_2,
    CBs.keyHashCB,
    CBs.keyIsEqualCB,
    nullptr,
    CBs.keyDestroyCB,
    CBs.valueReleaseCB,
    nullptr,
    nullptr,
    CBs.UserData,
    CBs.valueRetainCB,
  };
    }
    
          if (node->Further) {
        // Further indent, and include the line to the right child if
        // there is one.
        IndentScope is(this, node->Right ? '|   ' : '    ');
        print(node->Further, ChildKind::Further);
      }
    
    using namespace llvm;
    
    
    {  memcpy(Value, &uuid, Size);
#else
  uuid_generate_time(Value);
#endif
}
    
      private:
    /// Is this a diagnostic that doesn't do the user any good to show if it
    /// is located in one of Swift's synthetic buffers? If so, returns true to
    /// suppress it.
    static bool shouldSuppressDiagInSwiftBuffers(clang::DiagOrStoredDiag info) {
      if (info.isNull())
        return false;
    }
    
      IAMAccessorKind accessorKind = IAMAccessorKind::None;
    
    // This is initialized with a default, stub implementation.
// If python-google.protobuf.cc is loaded, the function pointer is overridden
// with a full implementation.
const Message* (*GetCProtoInsidePyProtoPtr)(PyObject* msg) =
    GetCProtoInsidePyProtoStub;
Message* (*MutableCProtoInsidePyProtoPtr)(PyObject* msg) =
    MutableCProtoInsidePyProtoStub;
    
    // Can't use an anonymous namespace here due to brokenness of Tru64 compiler.
namespace cpp_unittest {
    }
    
    Context::~Context() {
}
    
    
    {  return result;
}
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    void ImmutableMapFieldGenerator::
GenerateMembers(io::Printer* printer) const {
  printer->Print(
      variables_,
      'private static final class $capitalized_name$DefaultEntryHolder {\n'
      '  static final com.google.protobuf.MapEntry<\n'
      '      $type_parameters$> defaultEntry =\n'
      '          com.google.protobuf.MapEntry\n'
      '          .<$type_parameters$>newDefaultInstance(\n'
      '              $descriptor$\n'
      '              $key_wire_type$,\n'
      '              $key_default_value$,\n'
      '              $value_wire_type$,\n'
      '              $value_default_value$);\n'
      '}\n');
  printer->Print(
      variables_,
      'private com.google.protobuf.MapField<\n'
      '    $type_parameters$> $name$_;\n'
      'private com.google.protobuf.MapField<$type_parameters$>\n'
      'internalGet$capitalized_name$() {\n'
      '  if ($name$_ == null) {\n'
      '    return com.google.protobuf.MapField.emptyMapField(\n'
      '        $map_field_parameter$);\n'
      '  }\n'
      '  return $name$_;\n'
      '}\n');
  if (GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        'private static final\n'
        'com.google.protobuf.Internal.MapAdapter.Converter<\n'
        '    java.lang.Integer, $value_enum_type$> $name$ValueConverter =\n'
        '        com.google.protobuf.Internal.MapAdapter.newEnumConverter(\n'
        '            $value_enum_type$.internalGetValueMap(),\n'
        '            $unrecognized_value$);\n');
    printer->Print(
        variables_,
        'private static final java.util.Map<$boxed_key_type$, '
        '$value_enum_type$>\n'
        'internalGetAdapted$capitalized_name$Map(\n'
        '    java.util.Map<$boxed_key_type$, $boxed_value_type$> map) {\n'
        '  return new com.google.protobuf.Internal.MapAdapter<\n'
        '      $boxed_key_type$, $value_enum_type$, java.lang.Integer>(\n'
        '          map, $name$ValueConverter);\n'
        '}\n');
  }
  GenerateMapGetters(printer);
}
    
    void Config::ParseHdfFile(const std::string &filename, Hdf &hdf) {
  hdf.append(filename);
}
    
    #endif // HPHP_DATA_STREAM_WRAPPER_H

    
    #include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
    
    {  // if the function was called via FCallBuiltin, we'll get a bogus name as
  // the stack frame will be wrong
  ActRec* ar = g_context->getStackFrame();
  const char* fn = (ar != nullptr)
    ? ar->func()->name()->data()
    : 'OPTIMIZED_BUILTIN';
  raise_warning('%s(%s): failed to open stream: '
                'wrapper does not support stream open',
                fn, filename.data());
  return nullptr;
}
    
    #ifndef incl_HPHP_PERF_EVENT_H_
#define incl_HPHP_PERF_EVENT_H_
    
    template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 1, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 1, rate, fillCols);
}
    
        static AGInfo& Create(const nnvm::NodePtr& node) {
      node->info.construct<AGInfo>();
      return Get(node);
    }
    
    /*! \brief Ouput value of the function to the function */
struct OutputValue : GradFunctionArgument {};
/*! \brief Gradient of output value */
struct OutputGrad : GradFunctionArgument {};
    
    template<>
void SetDataGradToBlob<mshadow::gpu, double>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<double>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  double *data_ptr = reinterpret_cast<double*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_gpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, double)->set_gpu_diff(data_ptr);
}
    
    // Initialization funciton called by caffeOp & caffeLoss
template<typename Dtype>
void InitCaffeBlobs(std::vector< ::caffe::Blob<Dtype>*>* v, int n_num) {
  for (index_t i=0; i < n_num; ++i)
    v->push_back(new ::caffe::Blob<Dtype>());
}
    
    
    {  Engine::Get()->PushSync([=](RunContext ctx){
      ndout.CheckAndAlloc();
      cv::Mat buf(ndsrc.shape()[0], ndsrc.shape()[1],
                  dims[2] == 3 ? CV_8UC3 : CV_8U, ndsrc.data().dptr_);
      cv::Mat dst(h, w, dims[2] == 3 ? CV_8UC3 : CV_8U, ndout.data().dptr_);
      cv::resize(buf, dst, cv::Size(w, h), 0, 0, interpolation);
      CHECK(!dst.empty());
    }, ndout.ctx(), {ndsrc.var()}, {ndout.var()});
  NDArray *tmp = new NDArray();
  *tmp = ndout;
  *out = tmp;
  API_END();
}
    
    #include <dmlc/base.h>
#include <dmlc/thread_group.h>
#include <cstddef>
#include <vector>
#include <list>
#include <thread>
#include <utility>
#include 'mxnet/base.h'
    
      virtual void BeforeFirst(void) {
    if (param_.round_batch == 0 || num_overflow_ == 0) {
      // otherise, we already called before first
      base_->BeforeFirst();
    } else {
      num_overflow_ = 0;
    }
    head_ = 1;
  }
    
    // stb_compress* from stb.h - definition
    
    // Compatibility:
// - std::string support is only guaranteed to work from C++11. 
//   If you try to use it pre-C++11, please share your findings (w/ info about compiler/architecture)
    
    //---- Define assertion handler. Defaults to calling assert().
//#define IM_ASSERT(_EXPR)  MyAssert(_EXPR)
//#define IM_ASSERT(_EXPR)  ((void)(_EXPR))     // Disable asserts
    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
        // Rendering
    ImGui::Render();
    ImGuiIO& io = ImGui::GetIO();
    glViewport(0, 0, (GLsizei)io.DisplaySize.x, (GLsizei)io.DisplaySize.y);
    glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
    glClear(GL_COLOR_BUFFER_BIT);
    //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound, but prefer using the GL3+ code.
    ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
                ImGui::Begin('Hello, world!');                          // Create a window called 'Hello, world!' and append into it.
    
    void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}
    
    // InitXXX function with 'install_callbacks=true': install GLFW callbacks. They will call user's previously installed callbacks, if any.
// InitXXX function with 'install_callbacks=false': do not install GLFW callbacks. You will need to call them yourself from your own GLFW callbacks.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
        ALLEGRO_LOCKED_REGION *locked_img = al_lock_bitmap(img, al_get_bitmap_format(img), ALLEGRO_LOCK_WRITEONLY);
    if (!locked_img)
    {
        al_destroy_bitmap(img);
        return false;
    }
    memcpy(locked_img->data, pixels, sizeof(int)*width*height);
    al_unlock_bitmap(img);