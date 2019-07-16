
        
          std::mutex running_mutex_;
  std::condition_variable running_cv_;
  std::atomic<bool> running_;
    
    namespace {
    }
    
    class GetIm2ColGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Col2Im',
        '',
        std::vector<string>{GO(0), I(0)},
        std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Im2Col, GetIm2ColGradient);
    
    #ifndef TESSERACT_CCUTIL_BOXREAD_H_
#define TESSERACT_CCUTIL_BOXREAD_H_
    
      /* Reject modes generated after QUALITY_ACCEPT but before MINIMAL_REJ accep*/
  R_DOC_REJ,    // TEMP Document rejection
  R_BLOCK_REJ,  // TEMP Block rejection
  R_ROW_REJ,    // TEMP Row rejection
  R_UNLV_REJ,   // TEMP ~ turned to - or ^ turned to space
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
    // GenericHeap requires 1 template argument:
// Pair will normally be either KDPairInc<Key, Data> or KDPairDec<Key, Data>
// for some arbitrary Key and scalar, smart pointer, or non-ownership pointer
// Data type, according to whether a MIN heap or a MAX heap is desired,
// respectively. Using KDPtrPairInc<Key, Data> or KDPtrPairDec<Key, Data>,
// GenericHeap can also handle simple Data pointers and own them.
// If no additional data is required, Pair can also be a scalar, since
// GenericHeap doesn't look inside it except for operator<.
//
// The heap is stored as a packed binary tree in an array hosted by a
// GenericVector<Pair>, with the invariant that the children of each node are
// both NOT Pair::operator< the parent node. KDPairInc defines Pair::operator<
// to use Key::operator< to generate a MIN heap and KDPairDec defines
// Pair::operator< to use Key::operator> to generate a MAX heap by reversing
// all the comparisons.
// See http://en.wikipedia.org/wiki/Heap_(data_structure) for more detail on
// the basic heap implementation.
//
// Insertion and removal are both O(log n) and, unlike the STL heap, an
// explicit Reshuffle function allows a node to be repositioned in time O(log n)
// after changing its value.
//
// Accessing the element for revaluation is a more complex matter, since the
// index and pointer can be changed arbitrarily by heap operations.
// Revaluation can be done by making the Data type in the Pair derived from or
// contain a DoublePtr as its first data element, making it possible to convert
// the pointer to a Pair using KDPairInc::RecastDataPointer.
template <typename Pair>
class GenericHeap {
 public:
  GenericHeap() = default;
  // The initial size is only a GenericVector::reserve. It is not enforced as
  // the size limit of the heap. Caller must implement their own enforcement.
  explicit GenericHeap(int initial_size) {
    heap_.reserve(initial_size);
  }
    }
    
    // Specialization for a pair of ints in increasing order.
using IntKDPair = KDPairInc<int, int>;
    
        // Properly zero the superblock, zeroing sb->metainfo_blob, in particular.
    memset(sb, 0, REQL_BTREE_SUPERBLOCK_SIZE);
    
    /* `real_superblock_t` represents the superblock for the primary B-tree of a table. */
class real_superblock_t : public superblock_t {
public:
    explicit real_superblock_t(buf_lock_t &&sb_buf);
    real_superblock_t(buf_lock_t &&sb_buf, new_semaphore_in_line_t &&write_semaphore_acq);
    }
    
    /* Accessors to errno.
 * Please access errno *only* through these access functions.
 * Accessing errno directly is unsafe in the context of
 * coroutines because compiler optimizations can interfer with TLS, which
 * might be used for errno.
 * See thread_local.hpp for a more detailed explanation of the issue. */
int get_errno();
void set_errno(int new_errno);
/* The following line can be useful for identifying illegal direct access in our
 * code. However it cannot be turned on in general because some system headers use
 * errno and don't compile with this. */
//#pragma GCC poison errno
    
        struct sindex_access_t {
        sindex_access_t(btree_slice_t *_btree,
                        sindex_name_t _name,
                        secondary_index_t _sindex,
                        scoped_ptr_t<sindex_superblock_t> _superblock);
        ~sindex_access_t();
    }
    
    // Like ASSERT_DEATH, but continues on to successive tests in the
// test case, if any:
# define EXPECT_DEATH(statement, regex) \
    EXPECT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
      // Since the basic IO manipulators are overloaded for both narrow
  // and wide streams, we have to provide this specialized definition
  // of operator <<, even though its body is the same as the
  // templatized version above.  Without this definition, streaming
  // endl or other basic IO manipulators to Message will confuse the
  // compiler.
  Message& operator <<(BasicNarrowIoManip val) {
    *ss_ << val;
    return *this;
  }
    
    // First, define a fixture class template.  It should be parameterized
// by a type.  Remember to derive it from testing::Test.
template <typename T>
class FooTest : public testing::Test {
 public:
  ...
  typedef std::list<T> List;
  static T shared_;
  T value_;
};
    
    // Gets the content of the stringstream's buffer as an std::string.  Each '\0'
// character in the buffer is replaced with '\\0'.
GTEST_API_ std::string StringStreamToString(::std::stringstream* stream);
    
      explicit tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3, GTEST_BY_REF_(T4) f4,
      GTEST_BY_REF_(T5) f5, GTEST_BY_REF_(T6) f6, GTEST_BY_REF_(T7) f7,
      GTEST_BY_REF_(T8) f8) : f0_(f0), f1_(f1), f2_(f2), f3_(f3), f4_(f4),
      f5_(f5), f6_(f6), f7_(f7), f8_(f8) {}
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30>
struct Types30 {
  typedef T1 Head;
  typedef Types29<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30> Tail;
};
    
    
    {
    {
    {          op.Backward(ctx, out_grad, in_data, out_data, req, in_grad);
        });
    });
}
    
      printf('============= Test #2 ==============\n');
  var = engine->NewVariable();
  oprs.clear();
  for (int i = 0; i < 10; ++i) {
    oprs.push_back(engine->NewOperator(
        [i](mxnet::RunContext ctx, mxnet::Engine::CallbackOnComplete cb) {
          Foo(ctx, i);
          std::this_thread::sleep_for(std::chrono::milliseconds{500});
          cb();
        },
        {}, {var}));
    engine->Push(oprs.at(i), mxnet::Context{});
  }
  // std::this_thread::sleep_for(std::chrono::seconds{1});
  engine->WaitForAll();
  for (auto&& i : oprs) {
    engine->DeleteOperator(i);
  }
  engine->DeleteVariable([](mxnet::RunContext) {}, mxnet::Context{}, var);
    
    struct ProfileStat;
    
    #ifndef MXNET_STORAGE_STORAGE_MANAGER_H_
#define MXNET_STORAGE_STORAGE_MANAGER_H_
    
      void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) override {
    using namespace mshadow;
    param_.Init(kwargs);
    if (param_.kernel.ndim() == 2) {
      param_.layout = param_.layout ? param_.layout.value() : mshadow::kNCHW;
      if (param_.stride.ndim() == 0) param_.stride = Shape2(1, 1);
      if (param_.dilate.ndim() == 0) param_.dilate = Shape2(1, 1);
      if (param_.pad.ndim() == 0) param_.pad = Shape2(0, 0);
    } else {
      LOG(FATAL) << 'not implemented';
    }
  }
    
    
template <typename DType>
inline DType get_coordinate_weight_cpu(DType argmax_h, DType argmax_w,
                                       const index_t height, const index_t width,
                                       const DType* im_data,
                                       const index_t data_width, const index_t bp_dir) {
  if (argmax_h < 0 || argmax_h > height || argmax_w < 0 || argmax_w > width) {
    // empty
    return 0;
  }
    }
    
    
    { private:
  friend class NDArray;
  /*! \brief make constructor protected. */
  Imperative() {
    if (PreferBulkExecTrain())
      backward_bulk_size_ = BulkExecMaxNodeTrainBwd();
  }
  /*! \brief find the input/output ndarrays that are needed for backward */
  void GetBackwardDependency(
      const nnvm::NodePtr& node,
      uint32_t num_inputs, uint32_t num_outputs,
      std::vector<bool> *p_save_inputs,
      std::vector<bool> *p_save_outputs);
  /*! \brief indicate whether is training. */
#if DMLC_CXX11_THREAD_LOCAL
  static thread_local bool is_train_;
  static thread_local bool is_recording_;
  // TOOD(junwu): Added numpy compatibility switch for backward compatibility.
  // Delete it in the next major release.
  static thread_local bool is_np_shape_;
#else
  static MX_THREAD_LOCAL bool is_train_;
  static MX_THREAD_LOCAL bool is_recording_;
  // TOOD(junwu): Added numpy compatibility switch for backward compatibility.
  // Delete it in the next major release.
  static MX_THREAD_LOCAL bool is_np_shape_;
#endif
  /*! \brief node count used for naming */
  std::atomic<uint64_t> node_count_{0};
  /*! \brief variable count used for naming */
  std::atomic<uint64_t> variable_count_{0};
  /*! \brief default backward bulk size */
  int backward_bulk_size_{0};
};
    
    inline std::vector<int64_t> IndexArrayComputeIndexProducts(const TShape &inshape) {
  const int ndim = inshape.ndim();
    }
    
    #endif  // MXNET_GRAPH_ATTR_TYPES_H_

    
        io.KeyCtrl = s3eKeyboardGetState(s3eKeyLeftControl) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightControl) == S3E_KEY_STATE_DOWN;
    io.KeyShift = s3eKeyboardGetState(s3eKeyLeftShift) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightShift) == S3E_KEY_STATE_DOWN;
    io.KeyAlt = s3eKeyboardGetState(s3eKeyLeftAlt) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightAlt) == S3E_KEY_STATE_DOWN;
    io.KeySuper = s3eKeyboardGetState(s3eKeyLeftWindows) == S3E_KEY_STATE_DOWN || s3eKeyboardGetState(s3eKeyRightWindows) == S3E_KEY_STATE_DOWN;
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_WIN32_FUNCTIONS                     // [Win32] Won't use and link with any Win32 function (clipboard, ime).
//#define IMGUI_DISABLE_OSX_FUNCTIONS                       // [OSX] Won't use and link with any OSX function (clipboard).
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
        // Create the vertex shader
    {
        static const char* vertexShader =
            'cbuffer vertexBuffer : register(b0) \
            {\
            float4x4 ProjectionMatrix; \
            };\
            struct VS_INPUT\
            {\
            float2 pos : POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            struct PS_INPUT\
            {\
            float4 pos : SV_POSITION;\
            float4 col : COLOR0;\
            float2 uv  : TEXCOORD0;\
            };\
            \
            PS_INPUT main(VS_INPUT input)\
            {\
            PS_INPUT output;\
            output.pos = mul( ProjectionMatrix, float4(input.pos.xy, 0.f, 1.f));\
            output.col = input.col;\
            output.uv  = input.uv;\
            return output;\
            }';
    }
    
            D3D12_RESOURCE_BARRIER barrier = {};
        barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
        barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
        barrier.Transition.pResource   = pTexture;
        barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
        barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_COPY_DEST;
        barrier.Transition.StateAfter  = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
    
        // Copy and convert all vertices into a single contiguous buffer, convert colors to DX9 default format.
    // FIXME-OPT: This is a waste of resource, the ideal is to use imconfig.h and
    //  1) to avoid repacking colors:   #define IMGUI_USE_BGRA_PACKED_COLOR
    //  2) to avoid repacking vertices: #define IMGUI_OVERRIDE_DRAWVERT_STRUCT_LAYOUT struct ImDrawVert { ImVec2 pos; float z; ImU32 col; ImVec2 uv; }
    CUSTOMVERTEX* vtx_dst;
    ImDrawIdx* idx_dst;
    if (g_pVB->Lock(0, (UINT)(draw_data->TotalVtxCount * sizeof(CUSTOMVERTEX)), (void**)&vtx_dst, D3DLOCK_DISCARD) < 0)
        return;
    if (g_pIB->Lock(0, (UINT)(draw_data->TotalIdxCount * sizeof(ImDrawIdx)), (void**)&idx_dst, D3DLOCK_DISCARD) < 0)
        return;
    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawVert* vtx_src = cmd_list->VtxBuffer.Data;
        for (int i = 0; i < cmd_list->VtxBuffer.Size; i++)
        {
            vtx_dst->pos[0] = vtx_src->pos.x;
            vtx_dst->pos[1] = vtx_src->pos.y;
            vtx_dst->pos[2] = 0.0f;
            vtx_dst->col = (vtx_src->col & 0xFF00FF00) | ((vtx_src->col & 0xFF0000) >> 16) | ((vtx_src->col & 0xFF) << 16);     // RGBA --> ARGB for DirectX9
            vtx_dst->uv[0] = vtx_src->uv.x;
            vtx_dst->uv[1] = vtx_src->uv.y;
            vtx_dst++;
            vtx_src++;
        }
        memcpy(idx_dst, cmd_list->IdxBuffer.Data, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
        idx_dst += cmd_list->IdxBuffer.Size;
    }
    g_pVB->Unlock();
    g_pIB->Unlock();
    g_pd3dDevice->SetStreamSource(0, g_pVB, 0, sizeof(CUSTOMVERTEX));
    g_pd3dDevice->SetIndices(g_pIB);
    g_pd3dDevice->SetFVF(D3DFVF_CUSTOMVERTEX);
    
    // Implemented features:
//  [X] Renderer: User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
//  [X] Renderer: Support for large meshes (64k+ vertices) with 16-bits indices.
    
    void ImGui_ImplGLUT_MouseFunc(int glut_button, int state, int x, int y)
{
    ImGuiIO& io = ImGui::GetIO();
    io.MousePos = ImVec2((float)x, (float)y);
    int button = -1;
    if (glut_button == GLUT_LEFT_BUTTON) button = 0;
    if (glut_button == GLUT_RIGHT_BUTTON) button = 1;
    if (glut_button == GLUT_MIDDLE_BUTTON) button = 2;
    if (button != -1 && state == GLUT_DOWN)
        io.MouseDown[button] = true;
    if (button != -1 && state == GLUT_UP)
        io.MouseDown[button] = false;
}
    
    int main(int, char**)
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    }
    
        // change element at index 1 (second element) to 'second'
    array.at(1) = 'second';
    
        // out_of_range.402
    try
    {
        // try to use the array index '-'
        json::reference ref = j.at('/array/-'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }