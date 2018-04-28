
        
        #ifdef _MSC_VER
    
    // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
        base::FilePath shortcutPath(path);
    result->AppendBoolean(base::win::CreateOrUpdateShortcutLink(shortcutPath, props, 
      base::PathExists(shortcutPath) ? base::win::SHORTCUT_UPDATE_EXISTING : base::win::SHORTCUT_CREATE_ALWAYS));
#else
    result->AppendBoolean(false);
#endif
    return;
  } else if (method == 'GetPackage') {
    result->AppendString(shell->GetPackage()->package_string());
    return;
  } else if (method == 'SetCrashDumpDir') {
    std::string path;
    arguments.GetString(0, &path);
    //FIXME: result->AppendBoolean(SetCrashDumpPath(path.c_str()));
    return;
  } else if (method == 'RegisterGlobalHotKey') {
    int object_id = -1;
    arguments.GetInteger(0, &object_id);
    Shortcut* shortcut =
        static_cast<Shortcut*>(DispatcherHost::GetApiObject(object_id));
    bool success = GlobalShortcutListener::GetInstance()->RegisterAccelerator(
                       shortcut->GetAccelerator(), shortcut);
    if (!success)
      shortcut->OnFailed('Register global desktop keyboard shortcut failed.');
    
      int id() const { return id_; }
  std::string extension_id_;
  ObjectManager* object_manager() const { return object_manager_.get(); }
    
    v8::Handle<v8::Value> CallObjectMethodSync(int routing_id,
                                           int object_id,
                                           const std::string& type,
                                           const std::string& method,
                                           v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Clipboard);
};
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    #include 'base/files/file_path.h'
#include 'base/strings/string_util.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/threading/thread_restrictions.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
#include 'content/nw/src/nw_base.h'
#include 'content/nw/src/nw_content.h'
#include 'content/nw/src/nw_package.h'
#include 'ui/base/accelerators/accelerator.h'
#include 'ui/gfx/image/image_skia_operations.h'
#include 'ui/events/event_constants.h'//for modifier key code
#include 'base/logging.h'
    
        bool Read(ClipboardData& data) {
      switch(data.type) {
        case TYPE_TEXT:
        return ReadText(data);
        break;
        case TYPE_HTML:
        return ReadHTML(data);
        break;
        case TYPE_RTF:
        return ReadRTF(data);
        break;
        case TYPE_PNG:
        case TYPE_JPEG:
        return ReadImage(data);
        break;
        case TYPE_NONE:
        NOTREACHED();
        return false;
      }
      NOTREACHED();
      return false;      
    }
    
        bool m_needAveMultiplier;
    double m_L2RegWeight;
    double m_L1RegWeight;
    
    namespace ONNXIR
{
    typedef std::unordered_map<std::string, std::string> ModelMetaData;
    }
    
            opSchema.m_opSignature.m_outputs.reserve(p_opSchemaSetter.m_outputs.size());
        for (const auto& output : p_opSchemaSetter.m_outputs)
        {
            std::string name;
            std::string type;
            std::string desc;
            std::tie(name, desc, type) = output;
            opSchema.m_opSignature.m_outputs.push_back(
                OpSignature::FormalParameter(name, type, desc,
                    opSchema.m_opSignature.m_typeConstraintMap));
        }
    
                static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/std::string* p_data, int64_t p_expected_size);
            static Common::Status UnpackTensor(const onnx::TensorProto& p_tensor, /*out*/bool* p_data, int64_t p_expected_size);
    
    namespace ONNXIR {
    // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Sigmoid)
        .Description('Sigmoid takes one input data (Tensor<T>) and produces one output data '
            '(Tensor<T>) where the sigmoid function, y = 1 / (1 + exp(-x)), is applied to the '
            'tensor elementwise.')
        .Input('X', 'input tensor', 'T')
        .Output('Y', 'The sigmoid value of the input tensor computed element-wise', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    }
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Ceil)
        .Description('Ceil takes one input data (Tensor<T>) and produces one output data'
            '(Tensor<T>) where the ceil is, y = ceil(x), is applied to'
            'the tensor elementwise.')
        .Input('input', 'Input tensor of any shape', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
                Notations:
            `X` - input tensor
            `z` - update gate
            `r` - reset gate
            `h` - hidden gate
            `t` - time step (t-1 means previous time step)
            `W[zrh]` - W parameter weight matrix for update, reset, and hidden gates
            `R[zrh]` - R recurrence weight matrix for update, reset, and hidden gates
            `Wb[zrh]` - W bias vectors for update, reset, and hidden gates
            `Rb[zrh]` - R bias vectors for update, reset, and hidden gates
            `WB[zrh]` - W parameter weight matrix for backward update, reset, and hidden gates
            `RB[zrh]` - R recurrence weight matrix for backward update, reset, and hidden gates
            `WBb[zrh]` - W bias vectors for backward update, reset, and hidden gates
            `RBb[zrh]` - R bias vectors for backward update, reset, and hidden gates
            `tanh(X)` - hyperbolic tangent of X
            `sigmoid(X)` - 1 / (1 + e^-X)
            `H` - Hidden state
            `num_directions` - 2 if direction == bidirectional else 1
    
    protected:
    virtual char* EnsureElements(size_t element, size_t bytesRequested = 0);
    
      /// Determine the amount of data that may be read without blocking.
  std::size_t in_avail(boost::system::error_code& ec)
  {
    ec = boost::system::error_code();
    return storage_.size();
  }
    
    namespace boost {
namespace asio {
    }
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      // Destructor.
  ~gcc_arm_fenced_block()
  {
    barrier();
  }
    
    #endif // defined(BOOST_ASIO_HAS_DEV_POLL)
    
    namespace xgboost {
namespace common {
/*! \brief buffer reader of the stream that allows you to get */
class StreamBufferReader {
 public:
  explicit StreamBufferReader(size_t buffer_size)
      :stream_(NULL),
       read_len_(1), read_ptr_(1) {
    buffer_.resize(buffer_size);
  }
  /*!
   * \brief set input stream
   */
  inline void set_stream(dmlc::Stream *stream) {
    stream_ = stream;
    read_len_ = read_ptr_ = 1;
  }
  /*!
   * \brief allows quick read using get char
   */
  inline char GetChar(void) {
    while (true) {
      if (read_ptr_ < read_len_) {
        return buffer_[read_ptr_++];
      } else {
        read_len_ = stream_->Read(&buffer_[0], buffer_.length());
        if (read_len_ == 0) return EOF;
        read_ptr_ = 0;
      }
    }
  }
  /*! \brief whether we are reaching the end of file */
  inline bool AtEnd(void) const {
    return read_len_ == 0;
  }
    }
    }
    }
    
    SEXP XGDMatrixSaveBinary_R(SEXP handle, SEXP fname, SEXP silent) {
  R_API_BEGIN();
  CHECK_CALL(XGDMatrixSaveBinary(R_ExternalPtrAddr(handle),
                                 CHAR(asChar(fname)),
                                 asInteger(silent)));
  R_API_END();
  return R_NilValue;
}
    
      inline void Pred(const RowBatch::Inst &inst, bst_float *preds, int gid,
                   bst_float base) {
    bst_float psum = model_.bias()[gid] + base;
    for (bst_uint i = 0; i < inst.length; ++i) {
      if (inst[i].index >= model_.param.num_feature) continue;
      psum += inst[i].fvalue * model_[inst[i].index][gid];
    }
    preds[gid] = psum;
  }
  // biase margin score
  bst_float base_margin_;
  // model field
  GBLinearModel model_;
  GBLinearModel previous_model_;
  GBLinearTrainParam param_;
  std::unique_ptr<LinearUpdater> updater_;
  double sum_instance_weight_;
  bool sum_weight_complete_;
  common::Monitor monitor_;
  bool is_converged_;
    
    // Reads the Define Huffman Table (DHT) marker segment and fills in *jpg with
// the parsed data. Builds the Huffman decoding table in either dc_huff_lut or
// ac_huff_lut, depending on the type and solt_id of Huffman code being read.
bool ProcessDHT(const uint8_t* data, const size_t len,
                JpegReadMode mode,
                std::vector<HuffmanTableEntry>* dc_huff_lut,
                std::vector<HuffmanTableEntry>* ac_huff_lut,
                size_t* pos,
                JPEGData* jpg) {
  const size_t start_pos = *pos;
  VERIFY_LEN(2);
  size_t marker_len = ReadUint16(data, pos);
  if (marker_len == 2) {
    fprintf(stderr, 'DHT marker: no Huffman table found\n');
    jpg->error = JPEG_EMPTY_DHT;
    return false;
  }
  while (*pos < start_pos + marker_len) {
    VERIFY_LEN(1 + kJpegHuffmanMaxBitLength);
    JPEGHuffmanCode huff;
    huff.slot_id = ReadUint8(data, pos);
    int huffman_index = huff.slot_id;
    int is_ac_table = (huff.slot_id & 0x10) != 0;
    HuffmanTableEntry* huff_lut;
    if (is_ac_table) {
      huffman_index -= 0x10;
      VERIFY_INPUT(huffman_index, 0, 3, HUFFMAN_INDEX);
      huff_lut = &(*ac_huff_lut)[huffman_index * kJpegHuffmanLutSize];
    } else {
      VERIFY_INPUT(huffman_index, 0, 3, HUFFMAN_INDEX);
      huff_lut = &(*dc_huff_lut)[huffman_index * kJpegHuffmanLutSize];
    }
    huff.counts[0] = 0;
    int total_count = 0;
    int space = 1 << kJpegHuffmanMaxBitLength;
    int max_depth = 1;
    for (int i = 1; i <= kJpegHuffmanMaxBitLength; ++i) {
      int count = ReadUint8(data, pos);
      if (count != 0) {
        max_depth = i;
      }
      huff.counts[i] = count;
      total_count += count;
      space -= count * (1 << (kJpegHuffmanMaxBitLength - i));
    }
    if (is_ac_table) {
      VERIFY_INPUT(total_count, 0, kJpegHuffmanAlphabetSize, HUFFMAN_CODE);
    } else {
      VERIFY_INPUT(total_count, 0, kJpegDCAlphabetSize, HUFFMAN_CODE);
    }
    VERIFY_LEN(total_count);
    std::vector<bool> values_seen(256, false);
    for (int i = 0; i < total_count; ++i) {
      uint8_t value = ReadUint8(data, pos);
      if (!is_ac_table) {
        VERIFY_INPUT(value, 0, kJpegDCAlphabetSize - 1, HUFFMAN_CODE);
      }
      if (values_seen[value]) {
        fprintf(stderr, 'Duplicate Huffman code value %d\n', value);
        jpg->error = JPEG_INVALID_HUFFMAN_CODE;
        return false;
      }
      values_seen[value] = true;
      huff.values[i] = value;
    }
    // Add an invalid symbol that will have the all 1 code.
    ++huff.counts[max_depth];
    huff.values[total_count] = kJpegHuffmanAlphabetSize;
    space -= (1 << (kJpegHuffmanMaxBitLength - max_depth));
    if (space < 0) {
      fprintf(stderr, 'Invalid Huffman code lengths.\n');
      jpg->error = JPEG_INVALID_HUFFMAN_CODE;
      return false;
    } else if (space > 0 && huff_lut[0].value != 0xffff) {
      // Re-initialize the values to an invalid symbol so that we can recognize
      // it when reading the bit stream using a Huffman code with space > 0.
      for (int i = 0; i < kJpegHuffmanLutSize; ++i) {
        huff_lut[i].bits = 0;
        huff_lut[i].value = 0xffff;
      }
    }
    huff.is_last = (*pos == start_pos + marker_len);
    if (mode == JPEG_READ_ALL &&
        !BuildJpegHuffmanTable(&huff.counts[0], &huff.values[0], huff_lut)) {
      fprintf(stderr, 'Failed to build Huffman table.\n');
      jpg->error = JPEG_INVALID_HUFFMAN_CODE;
      return false;
    }
    jpg->huffman_code.push_back(huff);
  }
  VERIFY_MARKER_END();
  return true;
}
    
      // Must be called before any CompareBlock() calls can be called.
  virtual void StartBlockComparisons() = 0;
  // No more CompareBlock() calls can be called after this.
  virtual void FinishBlockComparisons() = 0;
    
    
    {}  // namespace guetzli
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    #endif  // GUETZLI_JPEG_HUFFMAN_DECODE_H_

    
    #ifndef GUETZLI_PREPROCESS_DOWNSAMPLE_H_
#define GUETZLI_PREPROCESS_DOWNSAMPLE_H_
    
    int32 ImGui_Marmalade_PointerButtonEventCallback(void* SystemData, void* pUserData)
{
    // pEvent->m_Button is of type s3ePointerButton and indicates which mouse
    // button was pressed.  For touchscreen this should always have the value
    // S3E_POINTER_BUTTON_SELECT
    s3ePointerEvent* pEvent = (s3ePointerEvent*)SystemData;
    }
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplGlfwGL2_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplGlfwGL2_CreateDeviceObjects();
    
        // Create the blending setup
    {
        D3D11_BLEND_DESC desc;
        ZeroMemory(&desc, sizeof(desc));
        desc.AlphaToCoverageEnable = false;
        desc.RenderTarget[0].BlendEnable = true;
        desc.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
        desc.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
        desc.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
        desc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
        desc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_ZERO;
        desc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
        desc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
        g_pd3dDevice->CreateBlendState(&desc, &g_pBlendState);
    }
    
        // Setup mouse inputs (we already got mouse wheel, keyboard keys & characters from our event handler)
    int mx, my;
    Uint32 mouse_buttons = SDL_GetMouseState(&mx, &my);
    io.MousePos = ImVec2(-FLT_MAX, -FLT_MAX);
    io.MouseDown[0] = g_MousePressed[0] || (mouse_buttons & SDL_BUTTON(SDL_BUTTON_LEFT)) != 0;  // If a mouse press event came, always pass it as 'mouse held this frame', so we don't miss click-release events that are shorter than 1 frame.
    io.MouseDown[1] = g_MousePressed[1] || (mouse_buttons & SDL_BUTTON(SDL_BUTTON_RIGHT)) != 0;
    io.MouseDown[2] = g_MousePressed[2] || (mouse_buttons & SDL_BUTTON(SDL_BUTTON_MIDDLE)) != 0;
    g_MousePressed[0] = g_MousePressed[1] = g_MousePressed[2] = false;
    
    void ImGui_ImplGlfwVulkan_Render(VkCommandBuffer command_buffer)
{
    g_CommandBuffer = command_buffer;
    ImGui::Render();
    ImGui_ImplGlfwVulkan_RenderDrawData(ImGui::GetDrawData());
    g_CommandBuffer = VK_NULL_HANDLE;
    g_FrameIndex = (g_FrameIndex + 1) % IMGUI_VK_QUEUED_FRAMES;
}

    
    bool ImGui_ImplA5_Init(ALLEGRO_DISPLAY* display)
{
    g_Display = display;
    }
    
    //---- Define assertion handler. Defaults to calling assert().
//#define IM_ASSERT(_EXPR)  MyAssert(_EXPR)
    
            static float f = 0.0f;
        ImGui::Text('Hello, world!');
        ImGui::SliderFloat('float', &f, 0.0f, 1.0f);
        ImGui::Text('Application average %.3f ms/frame (%.1f FPS)', 1000.0f / io.Framerate, io.Framerate);
        ImGui::ShowDemoWindow(NULL);
    
        jclass GetSuperclass(jclass clazz)
    { return functions->GetSuperclass(this, clazz); }
    
    struct Layout
{
    double left;
    double right;
    }
    
    
    {    method(isExperimentalFeatureEnabled);
}
    
    // Keeps a thread-local reference to the current thread's JNIEnv.
struct Environment {
  // May be null if this thread isn't attached to the JVM
  FBEXPORT static JNIEnv* current();
  static void initialize(JavaVM* vm);
    }
    
      std::string asFormattedString() const {
    std::stringstream str;
    str << 'Function ' << m_functionName << ' in file ' << m_fileName << ':' << m_lineNumber;
    return str.str();
  }
    
      // Creates a strong reference from a raw pointer, assuming that it points to a
  // freshly-created object. See the documentation for RefPtr for usage.
  static inline RefPtr<T> adoptRef(T* ptr) {
    return RefPtr<T>(ptr, ConstructionMode::Adopted);
  }
    
    ///////////////////////////////////////////////////////////////////////////////