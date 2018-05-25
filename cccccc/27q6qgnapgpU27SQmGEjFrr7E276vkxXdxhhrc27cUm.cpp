
        
        class QuickTest : public testing::Test {
 protected:
  virtual void SetUp() {
    start_time_ = time(nullptr);
  }
  virtual void TearDown() {
    const time_t end_time = time(nullptr);
    EXPECT_TRUE(end_time - start_time_ <=25) << 'The test took too long - ' << ::testing::PrintToString(end_time - start_time_);
  }
  time_t start_time_;
  };
    
    // Tests that the SSE implementation gets the same result as the vanilla.
TEST_F(IntSimdMatrixTest, SSE) {
  if (SIMDDetect::IsSSEAvailable()) {
    tprintf('SSE found! Continuing...');
  } else {
    tprintf('No SSE found! Not Tested!');
    return;
  }
  std::unique_ptr<IntSimdMatrix> matrix(new IntSimdMatrixSSE());
  ExpectEqualResults(matrix.get());
}
    
    TESS_API void TESS_CALL TessPageIteratorOrientation(TessPageIterator* handle, TessOrientation* orientation,
                                                          TessWritingDirection* writing_direction, TessTextlineOrder* textline_order,
                                                          float* deskew_angle)
{
    handle->Orientation(orientation, writing_direction, textline_order, deskew_angle);
}
    
    // Computes matrix.vector v = Wu.
// u is of size W.dim2() - 1 and the output v is of size W.dim1().
// u is imagined to have an extra element at the end with value 1, to
// implement the bias, but it doesn't actually have it.
void IntSimdMatrix::MatrixDotVector(const GENERIC_2D_ARRAY<int8_t>& w,
                                    const GenericVector<double>& scales,
                                    const int8_t* u, double* v) const {
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  if (partial_funcs_.empty()) {
    // Base implementation.
    for (int i = 0; i < num_out; ++i) {
      const int8_t* wi = w[i];
      int total = 0;
      for (int j = 0; j < num_in; ++j) total += wi[j] * u[j];
      // Add in the bias and correct for integer values.
      v[i] = (static_cast<double>(total) / INT8_MAX + wi[num_in]) * scales[i];
    }
  } else {
    const int8_t* w_data = shaped_w_.data();
    const double* scales_data = &scales[0];
    // Each call to a partial_func_ produces group_size outputs, except the
    // last one, which can produce less.
    int group_size = num_outputs_per_register_ * max_output_registers_;
    int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
    int rounded_num_out = RoundOutputs(num_out);
    int output = 0;
    for (auto fn : partial_funcs_) {
      // The amount of w_data consumed by each call to fn.
      int w_step = (rounded_num_in + 1) * group_size;
      // Run with this group size, until it would produce too much output, then
      // switch to a smaller size.
      for (; output + group_size <= rounded_num_out; output += group_size) {
        (*fn)(w_data, scales_data, u, rounded_num_in, num_out - output, v);
        w_data += w_step;
        scales_data += group_size;
        v += group_size;
      }
      group_size /= 2;
    }
  }
}
    
      // Step two: Try to split off bits of the word that are both outliers
  //           and have much lower certainty than average
  // Calculate num_leading and leading_certainty.
  for (*leading_certainty = 0.0f, *num_rebuilt_leading = 0;
       *num_rebuilt_leading < leading_outliers;
       (*num_rebuilt_leading)++) {
    float char_certainty = word->best_choice->certainty(*num_rebuilt_leading);
    if (char_certainty > *unlikely_threshold) {
      break;
    }
    if (char_certainty < *leading_certainty) {
      *leading_certainty = char_certainty;
    }
  }
    
    // Helper builds the all_fonts table by adding new fonts from new_fonts.
static void CollectFonts(const UnicityTable<FontInfo>& new_fonts,
                         UnicityTable<FontInfo>* all_fonts) {
  for (int i = 0; i < new_fonts.size(); ++i) {
    // UnicityTable uniques as we go.
    all_fonts->push_back(new_fonts.get(i));
  }
}
    
    /// Base class for all tesseract image thresholding classes.
/// Specific classes can add new thresholding methods by
/// overriding ThresholdToPix.
/// Each instance deals with a single image, but the design is intended to
/// be useful for multiple calls to SetRectangle and ThresholdTo* if
/// desired.
class TESS_API ImageThresholder {
 public:
  ImageThresholder();
  virtual ~ImageThresholder();
    }
    
    /**********************************************************************
 * read_unlv_file
 *
 * Read a whole unlv zone file to make a list of blocks.
 **********************************************************************/
    
    // A simple class to provide a dynamic programming solution to a class of
// 1st-order problems in which the cost is dependent only on the current
// step and the best cost to that step, with a possible special case
// of using the variance of the steps, and only the top choice is required.
// Useful for problems such as finding the optimal cut points in a fixed-pitch
// (vertical or horizontal) situation.
// Skeletal Example:
// DPPoint* array = new DPPoint[width];
// for (int i = 0; i < width; i++) {
//   array[i].AddLocalCost(cost_at_i)
// }
// DPPoint* best_end = DPPoint::Solve(..., array);
// while (best_end != nullptr) {
//   int cut_index = best_end - array;
//   best_end = best_end->best_prev();
// }
// delete [] array;
class DPPoint {
 public:
  // The cost function evaluates the total cost at this (excluding this's
  // local_cost) and if it beats this's total_cost, then
  // replace the appropriate values in this.
  typedef int64_t (DPPoint::*CostFunc)(const DPPoint* prev);
    }
    
      // ValidFirstLine() and ValidBodyLine() take arguments describing a text line
  // in a block of text which we are trying to model:
  //   lmargin, lindent:  these add up to the distance from the leftmost ink
  //                      in the text line to the surrounding text block's left
  //                      edge.
  //   rmargin, rindent:  these add up to the distance from the rightmost ink
  //                      in the text line to the surrounding text block's right
  //                      edge.
  // The caller determines the division between 'margin' and 'indent', which
  // only actually affect whether we think the line may be centered.
  //
  // If the amount of whitespace matches the amount of whitespace expected on
  // the relevant side of the line (within tolerance_) we say it matches.
    
    
    {        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                CIwMaterial* pCurrentMaterial = IW_GX_ALLOC_MATERIAL();
                pCurrentMaterial->SetShadeMode(CIwMaterial::SHADE_FLAT);
                pCurrentMaterial->SetCullMode(CIwMaterial::CULL_NONE);
                pCurrentMaterial->SetFiltering(false);
                pCurrentMaterial->SetAlphaMode(CIwMaterial::ALPHA_BLEND);
                pCurrentMaterial->SetDepthWriteMode(CIwMaterial::DEPTH_WRITE_NORMAL);
                pCurrentMaterial->SetAlphaTestMode(CIwMaterial::ALPHATEST_DISABLED);
                pCurrentMaterial->SetTexture((CIwTexture*)pcmd->TextureId);
                IwGxSetMaterial(pCurrentMaterial);
                IwGxDrawPrims(IW_GX_TRI_LIST, (uint16*)idx_buffer, pcmd->ElemCount);
            }
            idx_buffer += pcmd->ElemCount;
        }
        IwGxFlush();
    }
    
    struct SDL_Window;
typedef union SDL_Event SDL_Event;
    
        // Setup viewport
    D3D10_VIEWPORT vp;
    memset(&vp, 0, sizeof(D3D10_VIEWPORT));
    vp.Width = (UINT)ImGui::GetIO().DisplaySize.x;
    vp.Height = (UINT)ImGui::GetIO().DisplaySize.y;
    vp.MinDepth = 0.0f;
    vp.MaxDepth = 1.0f;
    vp.TopLeftX = vp.TopLeftY = 0;
    ctx->RSSetViewports(1, &vp);
    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('ImGui DirectX10 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
        // Main loop
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    while (msg.message != WM_QUIT)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
        ImGui_ImplDX11_NewFrame();
    }
    
                ImGui::Checkbox('Demo Window', &show_demo_window);      // Edit bools storing our windows open/close state
            ImGui::Checkbox('Another Window', &show_another_window);
    
        // Setup window
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window* window = SDL_CreateWindow('ImGui SDL2+OpenGL example', SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);
    SDL_GLContext gl_context = SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(1); // Enable vsync
    
      /**
   * Finds the first occurrence of any character in the first `count` characters
   *   in the buffer pointed to by `that` in this string, starting at offset
   *  `pos`.
   * \pre `pos <= size()`
   * \pre `that` points to a buffer containing at least `count` contiguous
   *   characters.
   * \return The smallest offset `i` such that `i >= pos` and
   *   `std::find(that, that+count, at(i)) != that+count`; or
   *   `npos` if there is no such offset `i`.
   * \throw std::out_of_range when `pos > size()`
   */
  constexpr std::size_t find_first_of(
      const Char* that,
      std::size_t pos,
      std::size_t count) const noexcept(false) {
    return size_ == detail::fixedstring::checkOverflow(pos, size_)
        ? npos
        : detail::fixedstring::find_first_of_(data_, size_, that, pos, count);
  }
    
    // An actual instance of a singleton, tracking the instance itself,
// its state as described above, and the create and teardown
// functions.
template <typename T>
struct SingletonHolder : public SingletonHolderBase {
 public:
  typedef std::function<void(T*)> TeardownFunc;
  typedef std::function<T*(void)> CreateFunc;
    }
    
    template <typename T, template <typename> class Atom = std::atomic>
class HazptrLockFreeLIFO {
  struct Node;
    }
    
    template <
    class Value,
    class Error FOLLY_REQUIRES_TRAILING(IsLessThanComparable<Value>::value)>
inline bool operator<=(
    const Expected<Value, Error>& lhs,
    const Expected<Value, Error>& rhs) {
  return !(rhs < lhs);
}
    
    #include <exception>
#include <stdexcept>
    
    /**
 * This function tries to reallocate a buffer of which only the first
 * currentSize bytes are used. The problem with using realloc is that
 * if currentSize is relatively small _and_ if realloc decides it
 * needs to move the memory chunk to a new buffer, then realloc ends
 * up copying data that is not used. It's generally not a win to try
 * to hook in to realloc() behavior to avoid copies - at least in
 * jemalloc, realloc() almost always ends up doing a copy, because
 * there is little fragmentation / slack space to take advantage of.
 */
FOLLY_MALLOC_CHECKED_MALLOC FOLLY_MALLOC_NOINLINE inline void* smartRealloc(
    void* p,
    const size_t currentSize,
    const size_t currentCapacity,
    const size_t newCapacity) {
  assert(p);
  assert(currentSize <= currentCapacity &&
         currentCapacity < newCapacity);
    }
    
    template <typename TPE>
static void registersToExecutorListTest() {
  EXPECT_EQ(0, getNumThreadPoolExecutors());
  {
    TPE tpe(10);
    EXPECT_EQ(1, getNumThreadPoolExecutors());
    {
      TPE tpe2(5);
      EXPECT_EQ(2, getNumThreadPoolExecutors());
    }
    EXPECT_EQ(1, getNumThreadPoolExecutors());
  }
  EXPECT_EQ(0, getNumThreadPoolExecutors());
}
    
    
    {  virtual bool execute() CXX11_OVERRIDE;
};
    
    void AbstractOptionHandler::setChangeGlobalOption(bool f)
{
  updateFlags(FLAG_CHANGE_GLOBAL_OPTION, f);
}
    
    class AdaptiveFileAllocationIterator : public FileAllocationIterator {
private:
  std::unique_ptr<FileAllocationIterator> allocator_;
    }
    
    void AnnounceTier::nextEvent()
{
  switch (event) {
  case STARTED:
    event = DOWNLOADING;
    break;
  case STARTED_AFTER_COMPLETION:
    event = SEEDING;
    break;
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
    namespace aria2 {
    }