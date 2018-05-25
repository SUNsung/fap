
        
        class DebuggerState : public DebuggerStateInterface {
 public:
  DebuggerState(const DebugOptions& debug_options);
  virtual ~DebuggerState();
    }
    
     private:
  // Must return a T descendant allocated with new that ResourceOpKernel will
  // take ownership of.
  virtual Status CreateResource(T** resource) EXCLUSIVE_LOCKS_REQUIRED(mu_) = 0;
    
    #endif  // TENSORFLOW_COMMON_RUNTIME_SESSION_FACTORY_H_

    
    
    {
    {}  // namespace graph_transforms
}  // namespace tensorflow

    
    
    {  if (proc_id == 0) LOG(INFO) << 'MPI process-ID to gRPC server name map: \n';
  for (int i = 0; i < number_of_procs; i++) {
    name_to_id_[std::string(&worker_names[i * 128])] = i;
    if (proc_id == 0)
      LOG(INFO) << 'Process: ' << i
                << '\tgRPC-name: ' << std::string(&worker_names[i * 128])
                << std::endl;
  }
}
    
     private:
  // a length value of kFullExtent (-1) means we have a full slice at this
  // dimension. It's defined in tensor_slice.cc.
  static const int64 kFullExtent;
    
      std::vector<string> debug_metadata_strings;
  std::vector<string> encoded_graph_defs;
  std::vector<string> device_names;
  std::vector<string> node_names;
  std::vector<int32> output_slots;
  std::vector<string> debug_ops;
  std::vector<Tensor> debug_tensors;
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    RepeatedEnumFieldGenerator::RepeatedEnumFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
      printer->Print(variables_,
    '$deprecation$public $type$ get$capitalized_name$() {\n'
    '  if ($has_oneof_case_message$) {\n'
    '    return ($type$) (($lazy_type$) $oneof_name$_).getValue(\n'
    '        $type$.getDefaultInstance());\n'
    '  }\n'
    '  return $type$.getDefaultInstance();\n'
    '}\n');
    
    TESS_API void TESS_CALL TessBaseAPISetPageSegMode(TessBaseAPI* handle, TessPageSegMode mode)
{
    handle->SetPageSegMode(mode);
}
    
    // Computes a reshaped copy of the weight matrix w. If there are no
// partial_funcs_, it does nothing.
void IntSimdMatrix::Init(const GENERIC_2D_ARRAY<int8_t>& w) {
  if (partial_funcs_.empty()) return;
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  // The rounded-up sizes of the reshaped weight matrix, excluding biases.
  int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
  int rounded_num_out = RoundOutputs(num_out);
  // Add the bias and compute the required size.
  shaped_w_.resize((rounded_num_in + 1) * rounded_num_out, 0);
  int shaped_index = 0;
  int output = 0;
  // Each number of registers needs a different format! Iterates over the
  // different numbers of registers (each a power of 2).
  for (int num_registers = max_output_registers_; num_registers >= 1;
       num_registers /= 2) {
    // The number of outputs that we will generate with this many registers.
    int num_outputs_per_register_set =
        num_registers * num_outputs_per_register_;
    // Use the max number of registers until we have to go fewer.
    while (output + num_outputs_per_register_set <= rounded_num_out) {
      // Accumulating outputs in registers saves iterating over the inputs, so
      // we only have to do it once per output register set.
      for (int input = 0; input < num_in; input += num_inputs_per_group_) {
        // Iterate over the number of outputs in a register set.
        for (int j = 0; j < num_outputs_per_register_set; ++j) {
          // Inner-most loop corresponds to the number of inputs in an input
          // group.
          for (int i = 0; i < num_inputs_per_group_; ++i) {
            int8_t weight = 0;
            if (output + j < num_out && input + i < num_in)
              weight = w(output + j, input + i);
            shaped_w_[shaped_index++] = weight;
          }
        }
      }
      // Append the bias weights for the register set.
      for (int j = 0; j < num_outputs_per_register_set; ++j) {
        int8_t weight = 0;
        if (output + j < num_out) weight = w(output + j, num_in);
        shaped_w_[shaped_index++] = weight;
      }
      output += num_outputs_per_register_set;
    }
  }
}
    
      // We've now calculated the number of rebuilt blobs we want to carve off.
  // However, split_word() works from TBLOBs in chopped_word, so we need to
  // convert to those.
  int num_chopped_leading =
      LeadingUnicharsToChopped(word, num_leading) + num_remainder_leading;
  int num_chopped_trailing =
      TrailingUnicharsToChopped(word, num_trailing) + num_remainder_trailing;
    
    
void Tesseract::Clear() {
  STRING debug_name = imagebasename + '_debug.pdf';
  pixa_debug_.WritePDF(debug_name.string());
  pixDestroy(&pix_binary_);
  pixDestroy(&pix_grey_);
  pixDestroy(&pix_thresholds_);
  pixDestroy(&scaled_color_);
  deskew_ = FCOORD(1.0f, 0.0f);
  reskew_ = FCOORD(1.0f, 0.0f);
  splitter_.Clear();
  scaled_factor_ = -1;
  for (int i = 0; i < sub_langs_.size(); ++i)
    sub_langs_[i]->Clear();
}
    
      // Accessors.
  int total_cost() const {
    return total_cost_;
  }
  int Pathlength() const {
    return total_steps_;
  }
  const DPPoint* best_prev() const {
    return best_prev_;
  }
  void AddLocalCost(int new_cost) {
    local_cost_ += new_cost;
  }
    
      // Adds an element with a weight of 1.
  void add(double x, double y);
  // Adds an element with a specified weight.
  void add(double x, double y, double weight);
  // Adds a whole LLSQ.
  void add(const LLSQ& other);
  // Deletes an element with a weight of 1.
  void remove(double x, double y);
  int32_t count() const {  // no of elements
    return static_cast<int>(total_weight + 0.5);
  }
    
    // A geometric model of paragraph indentation and alignment.
//
// Measurements are in pixels. The meaning of the integer arguments changes
// depending upon the value of justification.  Distances less than or equal
// to tolerance apart we take as 'equivalent' for the purpose of model
// matching, and in the examples below, we assume tolerance is zero.
//
// justification = LEFT:
//   margin       the 'ignored' margin to the left block edge.
//   first_indent indent from the left margin to a typical first text line.
//   body_indent  indent from the left margin of a typical body text line.
//
// justification = RIGHT:
//   margin       the 'ignored' margin to the right block edge.
//   first_indent indent from the right margin to a typical first text line.
//   body_indent  indent from the right margin of a typical body text line.
//
// justification = CENTER:
//   margin       ignored
//   first_indent ignored
//   body_indent  ignored
//
//  ====== Extended example, assuming each letter is ten pixels wide: =======
//
// +--------------------------------+
// |      Awesome                   | ParagraphModel(CENTER, 0, 0, 0)
// |   Centered Title               |
// | Paragraph Detection            |
// |      OCR TEAM                  |
// |  10 November 2010              |
// |                                |
// |  Look here, I have a paragraph.| ParagraphModel(LEFT, 0, 20, 0)
// |This paragraph starts at the top|
// |of the page and takes 3 lines.  |
// |  Here I have a second paragraph| ParagraphModel(LEFT, 0, 20, 0)
// |which indicates that the first  |
// |paragraph is not a continuation |
// |from a previous page, as it is  |
// |indented just like this second  |
// |paragraph.                      |
// |   Here is a block quote. It    | ParagraphModel(LEFT, 30, 0, 0)
// |   looks like the prior text    |
// |   but it  is indented  more    |
// |   and is fully justified.      |
// |  So how does one deal with     | ParagraphModel(LEFT, 0, 20, 0)
// |centered text, block quotes,    |
// |normal paragraphs, and lists    |
// |like what follows?              |
// |1. Make a plan.                 | ParagraphModel(LEFT, 0, 0, 30)
// |2. Use a heuristic, for example,| ParagraphModel(LEFT, 0, 0, 30)
// |   looking for lines where the  |
// |   first word of the next line  |
// |   would fit on the previous    |
// |   line.                        |
// |8. Try to implement the plan in | ParagraphModel(LEFT, 0, 0, 30)
// |   Python and try it out.       |
// |4. Determine how to fix the     | ParagraphModel(LEFT, 0, 0, 30)
// |   mistakes.                    |
// |5. Repeat.                      | ParagraphModel(LEFT, 0, 0, 30)
// |  For extra painful penalty work| ParagraphModel(LEFT, 0, 20, 0)
// |you can try to identify source  |
// |code.  Ouch!                    |
// +--------------------------------+
class ParagraphModel {
 public:
  ParagraphModel(tesseract::ParagraphJustification justification,
                 int margin,
                 int first_indent,
                 int body_indent,
                 int tolerance)
      : justification_(justification),
        margin_(margin),
        first_indent_(first_indent),
        body_indent_(body_indent),
        tolerance_(tolerance) {
    // Make one of {first_indent, body_indent} is 0.
    int added_margin = first_indent;
    if (body_indent < added_margin)
      added_margin = body_indent;
    margin_ += added_margin;
    first_indent_ -= added_margin;
    body_indent_ -= added_margin;
  }
    }
    
    int gettime(clockid_t, struct timespec*);
int64_t gettime_ns(clockid_t);
    
    template<typename T>
inline void
emitTLSLoad(Vout& v, TLSDatum<ThreadLocalNoCheck<T>> datum, Vreg d) {
  auto const off = ThreadLocalNoCheck<T>::node_ptr_offset();
  v << load{emitTLSAddr(v, datum) + safe_cast<int32_t>(off), d};
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
    
      auto const dataSize = iv.size() * sizeof(SwitchProfile::cases[0]);
  TargetProfile<SwitchProfile> profile(
    env.unit.context(), env.irb->curMarker(), s_switchProfile.get(),
    dataSize
  );
    
    bool CurlShareResource::setLongOption(long option, long value) {
  CURLSHcode error = CURLSHE_OK;
  error = curl_share_setopt(m_share,
                            (CURLSHoption)option,
                            value);
  return error == CURLSHE_OK;
}
    
    #ifndef incl_HPHP_CURL_SHARE_RESOURCE_H
#define incl_HPHP_CURL_SHARE_RESOURCE_H
    
        bool empty() const {
      return m_highPriList.empty() && m_midLowPriList.empty();
    }
    CondVarNode& front() {
      if (!m_highPriList.empty()) return m_highPriList.front();
      return m_midLowPriList.front();
    }
    void pop_front() {
      if (!m_highPriList.empty()) m_highPriList.pop_front();
      else m_midLowPriList.pop_front();
    }
    
    // This function will create a Huffman tree.
//
// The (data,length) contains the population counts.
// The tree_limit is the maximum bit depth of the Huffman codes.
//
// The depth contains the tree, i.e., how many bits are used for
// the symbol.
//
// The actual Huffman tree is constructed in the tree[] array, which has to
// be at least 2 * length + 1 long.
//
// See http://en.wikipedia.org/wiki/Huffman_coding
void CreateHuffmanTree(const uint32_t *data,
                       const size_t length,
                       const int tree_limit,
                       HuffmanTree* tree,
                       uint8_t *depth);
    
    // Library to decode jpeg coefficients into an RGB image.
    
    namespace guetzli {
    }
    
    // Implemented features:
//  [X] User texture binding. Use 'ID3D10ShaderResourceView*' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
    // Process Win32 mouse/keyboard inputs. 
// You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
// PS: In this Win32 handler, we use the capture API (GetCapture/SetCapture/ReleaseCapture) to be able to read mouse coordinations when dragging mouse outside of our window bounds.
// PS: We treat DBLCLK messages as regular mouse down messages, so this code will work on windows classes that have the CS_DBLCLKS flag set. Our own example app code doesn't set this flag.
IMGUI_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui::GetCurrentContext() == NULL)
        return 0;
    }
    
    // DirectX data
static LPDIRECT3DDEVICE9        g_pd3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9  g_pVB = NULL;
static LPDIRECT3DINDEXBUFFER9   g_pIB = NULL;
static LPDIRECT3DTEXTURE9       g_FontTexture = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;
    
        // Setup Dear ImGui binding
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
    ImGui_ImplDX10_Init(hwnd, g_pd3dDevice);
    
    
    {    g_fence->SetEventOnCompletion(fenceValue, g_fenceEvent);
    WaitForSingleObject(g_fenceEvent, INFINITE);
}
    
    // **DO NOT USE THIS CODE IF YOUR CODE/ENGINE IS USING MODERN OPENGL (SHADERS, VBO, VAO, etc.)**
// **Prefer using the code in the sdl_opengl3_example/ folder**
// See imgui_impl_sdl.cpp for details.
    
    static int                      fb_width = 0, fb_height = 0;
static bool                     g_ResizeWanted = false;
static int                      g_ResizeWidth = 0, g_ResizeHeight = 0;
static uint32_t                 g_BackbufferIndices[IMGUI_VK_QUEUED_FRAMES];    // keep track of recently rendered swapchain frame indices
static uint32_t                 g_BackBufferCount = 0;
static VkImage                  g_BackBuffer[IMGUI_MAX_POSSIBLE_BACK_BUFFERS] = {};
static VkImageView              g_BackBufferView[IMGUI_MAX_POSSIBLE_BACK_BUFFERS] = {};
static VkFramebuffer            g_Framebuffer[IMGUI_MAX_POSSIBLE_BACK_BUFFERS] = {};
    
    // All draw data to render an ImGui frame
// (NB: the style and the naming convention here is a little inconsistent but we preserve them for backward compatibility purpose)
struct ImDrawData
{
    bool            Valid;                  // Only valid after Render() is called and before the next NewFrame() is called.
    ImDrawList**    CmdLists;               // Array of ImDrawList* to render. The ImDrawList are owned by ImGuiContext and only pointed to from here.
    int             CmdListsCount;          // Number of ImDrawList* to render
    int             TotalIdxCount;          // For convenience, sum of all ImDrawList's IdxBuffer.Size
    int             TotalVtxCount;          // For convenience, sum of all ImDrawList's VtxBuffer.Size
    }
    
            if (ImGui::TreeNode('Horizontal Scrolling'))
        {
            ImGui::SetNextWindowContentSize(ImVec2(1500.0f, 0.0f));
            ImGui::BeginChild('##ScrollingRegion', ImVec2(0, ImGui::GetFontSize() * 20), false, ImGuiWindowFlags_HorizontalScrollbar);
            ImGui::Columns(10);
            int ITEMS_COUNT = 2000;
            ImGuiListClipper clipper(ITEMS_COUNT);  // Also demonstrate using the clipper for large list
            while (clipper.Step())
            {
                for (int i = clipper.DisplayStart; i < clipper.DisplayEnd; i++)
                    for (int j = 0; j < 10; j++)
                    {
                        ImGui::Text('Line %d Column %d...', i, j);
                        ImGui::NextColumn();
                    }
            }
            ImGui::Columns(1);
            ImGui::EndChild();
            ImGui::TreePop();
        }