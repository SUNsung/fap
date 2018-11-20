
        
        /**
 * @brief Computes @f$ y = |x| @f$
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class AbsValLayer : public NeuronLayer<Dtype> {
 public:
  explicit AbsValLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      int channel_axis_;
  int num_;
  int channels_;
  int group_;
  int out_spatial_dim_;
  int weight_offset_;
  int num_output_;
  bool bias_term_;
  bool is_1x1_;
  bool force_nd_im2col_;
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      bool handles_setup_;
  cudnnHandle_t* handle_;
  cudaStream_t*  stream_;
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #endif  // CAFFE_CUDNN_SOFTMAX_LAYER_HPP_

    
    
    {}  // namespace tesseract.
    
    // Computes part of matrix.vector v = Wu. Computes N=32 results.
// For details see PartialMatrixDotVector64 with N=32.
static void PartialMatrixDotVector32(const int8_t* wi, const double* scales,
                                     const int8_t* u, int num_in, int num_out,
                                     double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  __m256i result1 = _mm256_setzero_si256();
  __m256i result2 = _mm256_setzero_si256();
  __m256i result3 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result1);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result2);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result3);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result1, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result2, shift_id, wi, scales, kNumOutputsPerRegister, v);
  num_out -= kNumOutputsPerRegister * 3;
  ExtractResults(result3, shift_id, wi, scales,
                 std::min(kNumOutputsPerRegister, num_out), v);
}
    
    SIMDDetect SIMDDetect::detector;
    
      // Writing direction
  bool is_vertical_text = (block->classify_rotation().x() == 0.0);
  bool right_to_left = block->right_to_left();
  *writing_direction =
      is_vertical_text
          ? WRITING_DIRECTION_TOP_TO_BOTTOM
          : (right_to_left
                ? WRITING_DIRECTION_RIGHT_TO_LEFT
                : WRITING_DIRECTION_LEFT_TO_RIGHT);
    
      /**
   * Returns the type of the current block. See apitypes.h for
   * PolyBlockType.
   */
  PolyBlockType BlockType() const;
    
    
    {}  // namespace
    
      // Event listener. Waits for SVET_POPUP events and processes them.
  void Notify(const SVEvent* sve);
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
    
    {
    {  uint64_t nElemX = nElemFromDim(X);
  uint64_t nElemW = nElemFromDim(W);
  uint64_t nElemB = nElemFromDim(b);
  c.flops = 2 * K * M * N + M * N;
  c.bytes_read = (nElemX + nElemW + nElemB) * sizeof(X.data_type());
  c.bytes_written = M * N * sizeof(X.data_type());
  c.params_bytes = (K * N + N) * sizeof(X.data_type());
  return c;
}
} // namespace caffe2

    
    **Code**
    
    **Code**
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
    public:
	JointBullet();
	virtual ~JointBullet();
    
    #include 'register_types.h'
    
    #include 'image_etc.h'
#include 'texture_loader_pkm.h'
    
    	BIND_ENUM_CONSTANT(CONNECTION_DISCONNECTED);
	BIND_ENUM_CONSTANT(CONNECTION_CONNECTING);
	BIND_ENUM_CONSTANT(CONNECTION_CONNECTED);
    
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
    
        // Upload texture to graphics system
    g_FontTexture = new CIwTexture();
    g_FontTexture->SetModifiable(true);
    CIwImage& image = g_FontTexture->GetImage();
    image.SetFormat(CIwImage::ARGB_8888);
    image.SetWidth(width);
    image.SetHeight(height);
    image.SetBuffers();                                    // allocates and own buffers
    image.ReadTexels(pixels);
    g_FontTexture->SetMipMapping(false);
    g_FontTexture->SetFiltering(false);
    g_FontTexture->Upload();
    
        void FreeTypeFont::SetPixelHeight(int pixel_height) 
    {
        // I'm not sure how to deal with font sizes properly.
        // As far as I understand, currently ImGui assumes that the 'pixel_height' is a maximum height of an any given glyph,
        // i.e. it's the sum of font's ascender and descender. Seems strange to me.
        FT_Size_RequestRec req;
        req.type = FT_SIZE_REQUEST_TYPE_REAL_DIM;
        req.width = 0;
        req.height = (uint32_t)pixel_height * 64;
        req.horiResolution = 0;
        req.vertResolution = 0;
        FT_Request_Size(FreetypeFace, &req);
    }
    
        // Keyboard mapping. ImGui will use those indices to peek into the io.KeysDown[] array that we will update during the application lifetime.
    io.KeyMap[ImGuiKey_Tab] = VK_TAB;
    io.KeyMap[ImGuiKey_LeftArrow] = VK_LEFT;
    io.KeyMap[ImGuiKey_RightArrow] = VK_RIGHT;
    io.KeyMap[ImGuiKey_UpArrow] = VK_UP;
    io.KeyMap[ImGuiKey_DownArrow] = VK_DOWN;
    io.KeyMap[ImGuiKey_PageUp] = VK_PRIOR;
    io.KeyMap[ImGuiKey_PageDown] = VK_NEXT;
    io.KeyMap[ImGuiKey_Home] = VK_HOME;
    io.KeyMap[ImGuiKey_End] = VK_END;
    io.KeyMap[ImGuiKey_Insert] = VK_INSERT;
    io.KeyMap[ImGuiKey_Delete] = VK_DELETE;
    io.KeyMap[ImGuiKey_Backspace] = VK_BACK;
    io.KeyMap[ImGuiKey_Space] = VK_SPACE;
    io.KeyMap[ImGuiKey_Enter] = VK_RETURN;
    io.KeyMap[ImGuiKey_Escape] = VK_ESCAPE;
    io.KeyMap[ImGuiKey_A] = 'A';
    io.KeyMap[ImGuiKey_C] = 'C';
    io.KeyMap[ImGuiKey_V] = 'V';
    io.KeyMap[ImGuiKey_X] = 'X';
    io.KeyMap[ImGuiKey_Y] = 'Y';
    io.KeyMap[ImGuiKey_Z] = 'Z';
    
    // Compatibility:
// - std::string support is only guaranteed to work from C++11. 
//   If you try to use it pre-C++11, please share your findings (w/ info about compiler/architecture)
    
    //---- Don't implement some functions to reduce linkage requirements.
//#define IMGUI_DISABLE_WIN32_DEFAULT_CLIPBOARD_FUNCTIONS   // [Win32] Don't implement default clipboard handler. Won't use and link with OpenClipboard/GetClipboardData/CloseClipboard etc.
//#define IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS         // [Win32] Don't implement default IME handler. Won't use and link with ImmGetContext/ImmSetCompositionWindow.
//#define IMGUI_DISABLE_WIN32_FUNCTIONS                     // [Win32] Won't use and link with any Win32 function.
//#define IMGUI_DISABLE_FORMAT_STRING_FUNCTIONS             // Don't implement ImFormatString/ImFormatStringV so you can implement them yourself if you don't want to link with vsnprintf.
//#define IMGUI_DISABLE_MATH_FUNCTIONS                      // Don't implement ImFabs/ImSqrt/ImPow/ImFmod/ImCos/ImSin/ImAcos/ImAtan2 wrapper so you can implement them yourself. Declare your prototypes in imconfig.h.
//#define IMGUI_DISABLE_DEFAULT_ALLOCATORS                  // Don't implement default allocators calling malloc()/free() to avoid linking with them. You will need to call ImGui::SetAllocatorFunctions().
    
    // Callbacks (installed by default if you enable 'install_callbacks' during initialization)
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API int32    ImGui_Marmalade_PointerButtonEventCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_KeyCallback(void* system_data, void* user_data);
IMGUI_IMPL_API int32    ImGui_Marmalade_CharCallback(void* system_data, void* user_data);

    
    // Called by Init/NewFrame/Shutdown
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateFontsTexture();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyFontsTexture();
IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_CreateDeviceObjects();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_DestroyDeviceObjects();

    
    // About OpenGL function loaders: 
// About OpenGL function loaders: modern OpenGL doesn't have a standard header file and requires individual function pointers to be loaded manually. 
// Helper libraries are often used for this purpose! Here we are supporting a few common ones: gl3w, glew, glad. 
// You may use another loader/header of your choice (glext, glLoadGen, etc.), or chose to manually implement your own.
    
    template <class... Args>
std::system_error makeSystemError(Args&&... args) {
  return makeSystemErrorExplicit(errno, std::forward<Args>(args)...);
}
    
    namespace folly {
    }
    
    [[noreturn]] void exception_wrapper::onNoExceptionError(
    char const* const name) {
  std::ios_base::Init ioinit_; // ensure std::cerr is alive
  std::cerr << 'Cannot use `' << name
            << '` with an empty folly::exception_wrapper' << std::endl;
  std::terminate();
}
    
    #include <folly/DefaultKeepAliveExecutor.h>
    
    /*
 * This is an implementation of the std::atomic_shared_ptr TS
 * http://en.cppreference.com/w/cpp/experimental/atomic_shared_ptr
 * https://isocpp.org/files/papers/N4162.pdf
 *
 * AFAIK, the only other implementation is Anthony Williams from
 * Just::thread library:
 *
 * https://bitbucket.org/anthonyw/atomic_shared_ptr
 *
 * implementation details:
 *
 * Basically, three things need to be atomically exchanged to make this work:
 * * the local count
 * * the pointer to the control block
 * * the aliased pointer, if any.
 *
 * The Williams version does it with DWcas: 32 bits for local count, 64
 * bits for control block ptr, and he changes the shared_ptr
 * implementation to also store the aliased pointers using a linked list
 * like structure, and provides 32-bit index accessors to them (like
 * IndexedMemPool trick).
 *
 * This version instead stores the 48 bits of address, plus 16 bits of
 * local count in a single 8byte pointer.  This avoids 'lock cmpxchg16b',
 * which is much slower than 'lock xchg' in the normal 'store' case.  In
 * the less-common aliased pointer scenaro, we just allocate it in a new
 * block, and store a pointer to that instead.
 *
 * Note that even if we only want to use the 3-bits of pointer alignment,
 * this trick should still work - Any more than 4 concurrent accesses
 * will have to go to an external map count instead (slower, but lots of
 * concurrent access will be slow anyway due to bouncing cachelines).
 *
 * As a perf optimization, we currently batch up local count and only
 * move it global every once in a while.  This means load() is usually
 * only a single atomic operation, instead of 3.  For this trick to work,
 * we probably need at least 8 bits to make batching worth it.
 */
    
    /**
 * This class creates core-local caches for a given shared_ptr, to
 * mitigate contention when acquiring/releasing it.
 *
 * All methods are threadsafe.  Hazard pointers are used to avoid
 * use-after-free for concurrent reset() and get() operations.
 *
 * Concurrent reset()s are sequenced with respect to each other: the
 * sharded shared_ptrs will always all be set to the same value.
 * get()s will never see a newer pointer on one core, and an older
 * pointer on another after a subsequent thread migration.
 */
template <class T, size_t kNumSlots = 64>
class AtomicCoreCachedSharedPtr {
 public:
  explicit AtomicCoreCachedSharedPtr(const std::shared_ptr<T>& p = nullptr) {
    reset(p);
  }
    }
    
    // Note about the CORRECT_LSB macro:
// using 16bit fixed-point constants, we often compute products like:
// p = (A*x + B*y + 32768) >> 16 by adding two sub-terms q = (A*x) >> 16
// and r = (B*y) >> 16 together. Statistically, we have p = q + r + 1
// in 3/4 of the cases. This can be easily seen from the relation:
//   (a + b + 1) >> 1 = (a >> 1) + (b >> 1) + ((a|b)&1)
// The approximation we are doing is replacing ((a|b)&1) by 1.
// In practice, this is a slightly more involved because the constants A and B
// have also been rounded compared to their exact floating point value.
// However, all in all the correction is quite small, and CORRECT_LSB can
// be defined empty if needed.
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
      std::unique_ptr<char[]> buf(new char[buffer_size]);
  while (!feof(f)) {
    size_t read_bytes = fread(buf.get(), sizeof(char), buffer_size, f);
    if (ferror(f)) {
      perror('fread');
      exit(1);
    }
    result.append(buf.get(), read_bytes);
  }
    
    
    {}  // namespace guetzli
    
    void EncodeDCTBlockSequential(const coeff_t* coeffs,
                              const HuffmanCodeTable& dc_huff,
                              const HuffmanCodeTable& ac_huff,
                              coeff_t* last_dc_coeff,
                              BitWriter* bw) {
  coeff_t temp2;
  coeff_t temp;
  temp2 = coeffs[0];
  temp = temp2 - *last_dc_coeff;
  *last_dc_coeff = temp2;
  temp2 = temp;
  if (temp < 0) {
    temp = -temp;
    temp2--;
  }
  int nbits = Log2Floor(temp) + 1;
  bw->WriteBits(dc_huff.depth[nbits], dc_huff.code[nbits]);
  if (nbits > 0) {
    bw->WriteBits(nbits, temp2 & ((1 << nbits) - 1));
  }
  int r = 0;
  for (int k = 1; k < 64; ++k) {
    if ((temp = coeffs[kJPEGNaturalOrder[k]]) == 0) {
      r++;
      continue;
    }
    if (temp < 0) {
      temp = -temp;
      temp2 = ~temp;
    } else {
      temp2 = temp;
    }
    while (r > 15) {
      bw->WriteBits(ac_huff.depth[0xf0], ac_huff.code[0xf0]);
      r -= 16;
    }
    int nbits = Log2FloorNonZero(temp) + 1;
    int symbol = (r << 4) + nbits;
    bw->WriteBits(ac_huff.depth[symbol], ac_huff.code[symbol]);
    bw->WriteBits(nbits, temp2 & ((1 << nbits) - 1));
    r = 0;
  }
  if (r > 0) {
    bw->WriteBits(ac_huff.depth[0], ac_huff.code[0]);
  }
}