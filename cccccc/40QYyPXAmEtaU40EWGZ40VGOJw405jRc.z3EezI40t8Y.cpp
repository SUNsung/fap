
        
        namespace leveldb {
    }
    
      Status status_;
  std::string saved_key_;     // == current key when direction_==kReverse
  std::string saved_value_;   // == current raw value when direction_==kReverse
  Direction direction_;
  bool valid_;
    
    TEST(FormatTest, InternalKeyShortestSuccessor) {
  ASSERT_EQ(IKey('g', kMaxSequenceNumber, kValueTypeForSeek),
            ShortSuccessor(IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('\xff\xff', 100, kTypeValue),
            ShortSuccessor(IKey('\xff\xff', 100, kTypeValue)));
}
    
    // Return the legacy file name for an sstable with the specified number
// in the db named by 'dbname'. The result will be prefixed with
// 'dbname'.
extern std::string SSTTableFileName(const std::string& dbname, uint64_t number);
    
    
    {  Table* table = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
  Iterator* result = table->NewIterator(options);
  result->RegisterCleanup(&UnrefEntry, cache_, handle);
  if (tableptr != NULL) {
    *tableptr = table;
  }
  return result;
}
    
    
    {  std::vector< std::pair<int, InternalKey> > compact_pointers_;
  DeletedFileSet deleted_files_;
  std::vector< std::pair<int, FileMetaData> > new_files_;
};
    
    namespace leveldb {
    }
    
      // Choose a location for the test database if none given with --db=<path>
  if (FLAGS_db == NULL) {
      leveldb::Env::Default()->GetTestDirectory(&default_db_path);
      default_db_path += '/dbbench';
      FLAGS_db = default_db_path.c_str();
  }
    
    #ifndef STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
#define STORAGE_LEVELDB_HELPERS_MEMENV_MEMENV_H_
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
    #include <string>
    
    #endif  // CAFFE_LAYER_FACTORY_H_

    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    #endif  // CAFFE_FILTER_LAYER_HPP_

    
    namespace mxnet {
namespace op {
    }
    }
    
    /*!
 * \file mkldnn_concat.cc
 * \brief
 * \author Wenting Jiang
*/
#include '../concat-inl.h'
#include './mkldnn_ops-inl.h'
#include './mkldnn_base-inl.h'
    
    
    {  const DotParam& param = nnvm::get<DotParam>(attrs.parsed);
  CHECK_EQ(inputs[0].shape().ndim(), 2) << 'sparse dot only supports 2 dimensional lhs';
  CHECK_EQ(inputs[1].shape().ndim(), 2) << 'sparse dot only supports 2 dimensional rhs';
  const auto ograd_stype = inputs[0].storage_type();
  const auto lhs_stype = inputs[1].storage_type();
  const auto rhs_stype = inputs[2].storage_type();
  const auto grad_rhs_stype = outputs[1].storage_type();
  if (ograd_stype == kDefaultStorage  // ograd dns format
      && lhs_stype == kCSRStorage  // csr input lhs of the op
      && grad_rhs_stype == kDefaultStorage && !param.transpose_b) {  // grad(rhs) dns format
    TBlob ret = outputs[1].data();
    DotCsrDnsDnsImpl(ctx, xpu(), inputs[1], inputs[0].data(), req[1], !param.transpose_a, &ret);
  } else if (ograd_stype == kDefaultStorage && lhs_stype == kCSRStorage
      && grad_rhs_stype == kRowSparseStorage && !param.transpose_b) {
    NDArray ret = outputs[1];
    DotCsrDnsRspImpl(ctx, xpu(), inputs[1], inputs[0].data(), req[1], !param.transpose_a, &ret);
  } else if (ograd_stype == kRowSparseStorage && lhs_stype == kCSRStorage
      && grad_rhs_stype == kRowSparseStorage && !param.transpose_b) {
    NDArray ret = outputs[1];
    DotCsrRspRspImpl(ctx, xpu(), inputs[1], inputs[0], req[1], !param.transpose_a, &ret);
  } else if (ograd_stype == kRowSparseStorage && lhs_stype == kCSRStorage
      && grad_rhs_stype == kDefaultStorage && !param.transpose_b) {
    TBlob ret = outputs[1].data();
    DotCsrRspDnsImpl(ctx, xpu(), inputs[1], inputs[0], req[1], !param.transpose_a, &ret);
  } else if (ograd_stype == kDefaultStorage &&  // ograd dns format
             lhs_stype == kDefaultStorage &&  // lhs dns format
             rhs_stype == kCSRStorage && !param.transpose_a) {
    NDArray ret = outputs[0];
    DotDnsCsrDnsImpl(ctx, xpu(), inputs[0].data(), inputs[2], req[0], &ret, !param.transpose_b);
  } else {
    LogUnimplementedOp(attrs, ctx, inputs, req, outputs);
  }
}
    
    template <typename T>
void ROIAlignBackward(
    const int nthreads,
    const T* top_diff,
    const int /*num_rois*/,
    const T& spatial_scale,
    const int channels,
    const int height,
    const int width,
    const int pooled_height,
    const int pooled_width,
    const int sampling_ratio,
    T* bottom_diff,
    const T* bottom_rois,
    int rois_cols) {
  DCHECK(rois_cols == 4 || rois_cols == 5);
    }
    
    
    {    if (label_parser_.get() != nullptr) {
      while (label_ptr_ >= label_size_) {
        CHECK(label_parser_->Next())
            << 'Data CSV's row is smaller than the number of rows in label_csv';
        label_ptr_ = 0;
        label_size_ = label_parser_->Value().size;
      }
      CHECK_LT(label_ptr_, label_size_);
      out_.data[1] = AsTBlob(label_parser_->Value()[label_ptr_++], param_.label_shape);
    } else {
      out_.data[1] = dummy_label;
    }
    return true;
  }
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
     private:
  StreamBufferReader reader_;
  int tmp_ch;
  int num_prev;
  unsigned char buf_prev[2];
  // whether we need to do strict check
  static const bool kStrictCheck = false;
};
/*! \brief the stream that write to base64, note we take from file pointers */
class Base64OutStream: public dmlc::Stream {
 public:
  explicit Base64OutStream(dmlc::Stream *fp) : fp(fp) {
    buf_top = 0;
  }
  virtual void Write(const void *ptr, size_t size) {
    using base64::EncodeTable;
    size_t tlen = size;
    const unsigned char *cptr = static_cast<const unsigned char*>(ptr);
    while (tlen) {
      while (buf_top < 3  && tlen != 0) {
        buf[++buf_top] = *cptr++; --tlen;
      }
      if (buf_top == 3) {
        // flush 4 bytes out
        PutChar(EncodeTable[buf[1] >> 2]);
        PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
        PutChar(EncodeTable[((buf[2] << 2) | (buf[3] >> 6)) & 0x3F]);
        PutChar(EncodeTable[buf[3] & 0x3F]);
        buf_top = 0;
      }
    }
  }
  virtual size_t Read(void *ptr, size_t size) {
    LOG(FATAL) << 'Base64OutStream do not support read';
    return 0;
  }
  /*!
   * \brief finish writing of all current base64 stream, do some post processing
   * \param endch character to put to end of stream, if it is EOF, then nothing will be done
   */
  inline void Finish(char endch = EOF) {
    using base64::EncodeTable;
    if (buf_top == 1) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[(buf[1] << 4) & 0x3F]);
      PutChar('=');
      PutChar('=');
    }
    if (buf_top == 2) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
      PutChar(EncodeTable[(buf[2] << 2) & 0x3F]);
      PutChar('=');
    }
    buf_top = 0;
    if (endch != EOF) PutChar(endch);
    this->Flush();
  }
    
    
    {
    {}  // namespace data
}  // namespace xgboost

    
    XGBOOST_REGISTER_OBJECTIVE(HingeObj, 'binary:hinge')
.describe('Hinge loss. Expects labels to be in [0,1f]')
.set_body([]() { return new HingeObj(); });
    
    
    {}  // namespace detail
    
    XGBOOST_REGISTER_SPARSE_PAGE_FORMAT(lz4i16hc)
.describe('Apply LZ4 binary data compression(16 bit index mode) for ext memory.')
.set_body([]() {
    return new SparsePageLZ4Format<uint16_t>(true);
  });
    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
        // Load Fonts
    // - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them. 
    // - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple. 
    // - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
    // - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
    // - Read 'misc/fonts/README.txt' for more instructions and details.
    // - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
    //io.Fonts->AddFontDefault();
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Roboto-Medium.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/Cousine-Regular.ttf', 15.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/DroidSans.ttf', 16.0f);
    //io.Fonts->AddFontFromFileTTF('../../misc/fonts/ProggyTiny.ttf', 10.0f);
    //ImFont* font = io.Fonts->AddFontFromFileTTF('c:\\Windows\\Fonts\\ArialUni.ttf', 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
    //IM_ASSERT(font != NULL);
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        ImGui_ImplVulkanH_FrameData* fd = &wd->Frames[wd->FrameIndex];
    {
		err = vkWaitForFences(g_Device, 1, &fd->Fence, VK_TRUE, UINT64_MAX);	// wait indefinitely instead of periodically checking
		check_vk_result(err);
    }
    
    //---- Define constructor and implicit cast operators to convert back<>forth between your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
/*
#define IM_VEC2_CLASS_EXTRA                                                 \
        ImVec2(const MyVec2& f) { x = f.x; y = f.y; }                       \
        operator MyVec2() const { return MyVec2(x,y); }
    
    void ImGui_ImplGlfw_KeyCallback(GLFWwindow*, int key, int, int action, int mods)
{
    ImGuiIO& io = ImGui::GetIO();
    if (action == GLFW_PRESS)
        io.KeysDown[key] = true;
    if (action == GLFW_RELEASE)
        io.KeysDown[key] = false;
    }
    
    #define SDL_HAS_CAPTURE_MOUSE               SDL_VERSION_ATLEAST(2,0,4)
#define SDL_HAS_VULKAN                      SDL_VERSION_ATLEAST(2,0,6)
#define SDL_HAS_MOUSE_FOCUS_CLICKTHROUGH    SDL_VERSION_ATLEAST(2,0,5)
#if !SDL_HAS_VULKAN
static const Uint32 SDL_WINDOW_VULKAN = 0x10000000;
#endif
    
    
    {    // Update OS mouse cursor with the cursor requested by imgui
    ImGuiMouseCursor mouse_cursor = io.MouseDrawCursor ? ImGuiMouseCursor_None : ImGui::GetMouseCursor();
    if (g_LastMouseCursor != mouse_cursor)
    {
        g_LastMouseCursor = mouse_cursor;
        ImGui_ImplWin32_UpdateMouseCursor();
    }
}