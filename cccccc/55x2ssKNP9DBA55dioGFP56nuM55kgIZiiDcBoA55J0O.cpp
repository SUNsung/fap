
        
        #include <unordered_map>
    
    class TestFileSystem : public NullFileSystem {
 public:
  Status NewRandomAccessFile(
      const string& fname, std::unique_ptr<RandomAccessFile>* result) override {
    result->reset(new TestRandomAccessFile);
    return Status::OK();
  }
  // Always return size of 10
  Status GetFileSize(const string& fname, uint64* file_size) override {
    *file_size = 10;
    return Status::OK();
  }
};
    
    
    {  PyObject* np_array =
      PyArray_SimpleNewFromData(dim_size, dims, type_num, data);
  if (PyType_Ready(&TensorReleaserType) == -1) {
    return errors::Unknown('Python type initialization failed.');
  }
  TensorReleaser* releaser = reinterpret_cast<TensorReleaser*>(
      TensorReleaserType.tp_alloc(&TensorReleaserType, 0));
  releaser->destructor = new std::function<void()>(std::move(destructor));
  if (PyArray_SetBaseObject(reinterpret_cast<PyArrayObject*>(np_array),
                            reinterpret_cast<PyObject*>(releaser)) == -1) {
    Py_DECREF(releaser);
    return errors::Unknown('Python array refused to use memory.');
  }
  *result = PyArray_Return(reinterpret_cast<PyArrayObject*>(np_array));
  return Status::OK();
}
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
    // Global registry mapping C API error codes to the corresponding custom Python
// exception type. This is used to expose the exception types to C extension
// code (i.e. so we can raise custom exceptions via SWIG).
//
// Init() must be called exactly once at the beginning of the process before
// Lookup() can be used.
//
// Example usage:
//   TF_Status* status = TF_NewStatus();
//   TF_Foo(..., status);
//
//   if (TF_GetCode(status) != TF_OK) {
//     PyObject* exc_type = PyExceptionRegistry::Lookup(TF_GetCode(status));
//     // Arguments to OpError base class. Set `node_def` and `op` to None.
//     PyObject* args =
//       Py_BuildValue('sss', nullptr, nullptr, TF_Message(status));
//     PyErr_SetObject(exc_type, args);
//     Py_DECREF(args);
//     TF_DeleteStatus(status);
//     return NULL;
//   }
class PyExceptionRegistry {
 public:
  // Initializes the process-wide registry. Should be called exactly once near
  // the beginning of the process. The arguments are the various Python
  // exception types (e.g. `cancelled_exc` corresponds to
  // errors.CancelledError).
  static void Init(PyObject* code_to_exc_type_map);
    }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    // Safe containers for an owned TFE_TensorHandle. On destruction, the handle
// will be deleted by TFE_DeleteTensorHandle.
using Safe_TFE_TensorHandlePtr =
    std::unique_ptr<TFE_TensorHandle, detail::TFETensorHandleDeleter>;
Safe_TFE_TensorHandlePtr make_safe(TFE_TensorHandle* handle);
    
    #include 'intsimdmatrix.h'
#include 'genericvector.h'      // for GenericVector
#include 'intsimdmatrixavx2.h'  // for IntSimdMatrixAVX2
#include 'intsimdmatrixsse.h'   // for IntSimdMatrixSSE
#include 'matrix.h'             // for GENERIC_2D_ARRAY
#include 'simddetect.h'         // for SIMDDetect
    
    ScrollView* bln_word_window_handle();  //return handle
void build_image_window(int width, int height);
void display_bln_lines(ScrollView window,
                       ScrollView::Color colour,
                       float scale_factor,
                       float y_offset,
                       float minx,
                       float maxx);
                                 //function to call
void pgeditor_msg(  //message display
                  const char *msg);
void pgeditor_show_point(  //display coords
                         SVEvent *event);
                                 //put bln word in       box
void show_point(PAGE_RES* page_res, float x, float y);
    
    namespace grpc {
    }
    
    Alarm::Alarm() : alarm_(new internal::AlarmImpl()) {
  g_gli_initializer.summon();
}
    
    bool AuthPropertyIterator::operator==(const AuthPropertyIterator& rhs) const {
  if (property_ == nullptr || rhs.property_ == nullptr) {
    return property_ == rhs.property_;
  } else {
    return index_ == rhs.index_;
  }
}
    
    #include <grpc/impl/codegen/grpc_types.h>
#include <grpc/support/log.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/resource_quota.h>
#include 'src/core/lib/channel/channel_args.h'
#include 'src/core/lib/iomgr/exec_ctx.h'
#include 'src/core/lib/iomgr/socket_mutator.h'
    
      AuthPropertyIterator end() const override;
    
    //
// this header can be included multiple times, each time with
// a different character type, BOOST_REGEX_CHAR_T must be defined
// first:
//
#ifndef BOOST_REGEX_CHAR_T
#  error 'BOOST_REGEX_CHAR_T not defined'
#endif
    
    template<>
struct regex_iterator_traits<char*> : pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<const char*> : const_pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<wchar_t*> : pointer_iterator_traits<wchar_t>{};
template<>
struct regex_iterator_traits<const wchar_t*> : const_pointer_iterator_traits<wchar_t>{};
//
// the follwoing are needed for ICU support:
//
template<>
struct regex_iterator_traits<unsigned char*> : pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<const unsigned char*> : const_pointer_iterator_traits<char>{};
template<>
struct regex_iterator_traits<int*> : pointer_iterator_traits<int>{};
template<>
struct regex_iterator_traits<const int*> : const_pointer_iterator_traits<int>{};
    
    
    {
   vector_type            m_subs;                      // subexpressions
   BidiIterator   m_base;                              // where the search started from
   sub_match<BidiIterator> m_null;                     // a null match
   boost::shared_ptr<named_sub_type> m_named_subs;     // Shared copy of named subs in the regex object
   int m_last_closed_paren;                            // Last ) to be seen - used for formatting
   bool m_is_singular;                                 // True if our stored iterators are singular
};
    
       if(next == last) return next;
    
    no_type check_is_formatter(unary_type, binary_type, ternary_type);
template<typename T>
unary_type check_is_formatter(T const &, binary_type, ternary_type);
template<typename T>
binary_type check_is_formatter(unary_type, T const &, ternary_type);
template<typename T, typename U>
binary_type check_is_formatter(T const &, U const &, ternary_type);
template<typename T>
ternary_type check_is_formatter(unary_type, binary_type, T const &);
template<typename T, typename U>
ternary_type check_is_formatter(T const &, binary_type, U const &);
template<typename T, typename U>
ternary_type check_is_formatter(unary_type, T const &, U const &);
template<typename T, typename U, typename V>
ternary_type check_is_formatter(T const &, U const &, V const &);
    
       pimpl pdata;
    
       ~raw_storage()
   {
      ::operator delete(start);
   }
    
    
    {   bool operator()(const match_results<iterator_type>& what);
};
    
    
    
    // Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Gamepad navigation mapping. Enable with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [x] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'. FIXME: 3 cursors types are missing from GLFW.
//  [X] Platform: Keyboard arrays indexed using GLFW_KEY_* codes, e.g. ImGui::IsKeyPressed(GLFW_KEY_SPACE).
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
        for (UINT i = 0; i < NUM_FRAMES_IN_FLIGHT; i++)
        if (g_pd3dDevice->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&g_frameContext[i].CommandAllocator)) != S_OK)
            return E_FAIL;
    
    bool ImGui_ImplSDL2_InitForVulkan(SDL_Window* window)
{
    #if !SDL_HAS_VULKAN
    IM_ASSERT(0 && 'Unsupported');
    #endif
    return ImGui_ImplSDL2_Init(window);
}
    
        // Backup the DX9 state
    IDirect3DStateBlock9* d3d9_state_block = NULL;
    if (g_pd3dDevice->CreateStateBlock(D3DSBT_ALL, &d3d9_state_block) < 0)
        return;
    
      typedef DiscriminatedPtr<int, Foo> Ptr;
  Ptr p;
    
    
    {  out.str('');
  dynamic objy2 = dynamic::array(objy,
                                 dynamic::object(12, 'str'),
                                 dynamic::object(true, false));
  out << objy2;
  EXPECT_EQ(out.str(), R'([{'a':12},{12:'str'},{true:false}])');
}
    
    namespace {
    }
    
    // insertThousandsGroupingUnsafe requires non-const params
static void testGrouping(const char* a_str, const char* expected) {
  char str[256];
  char* end_ptr = str + snprintf(str, sizeof(str), '%s', a_str);
  ASSERT_LT(end_ptr, str + sizeof(str));
  folly::detail::insertThousandsGroupingUnsafe(str, &end_ptr);
  ASSERT_STREQ(expected, str);
}
    
    
    {  bool atLeastOneIsGood = false;
  for (size_t i = 0; i < hist.size() - 1; ++i) {
    auto delta = hist[i + 1] - hist[i];
    if (delta > std::chrono::milliseconds(5) &&
        delta < std::chrono::milliseconds(15)) {
      atLeastOneIsGood = true;
    }
  }
  EXPECT_TRUE(atLeastOneIsGood);
}