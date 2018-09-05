
        
        
    {  delete db;
  delete [] pixels;
}
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/layers/conv_layer.hpp'
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_CUDNN_RELU_LAYER_HPP_

    
    #ifdef USE_CUDNN
/**
 * @brief cuDNN implementation of SoftmaxLayer.
 *        Fallback to SoftmaxLayer for CPU mode.
 */
template <typename Dtype>
class CuDNNSoftmaxLayer : public SoftmaxLayer<Dtype> {
 public:
  explicit CuDNNSoftmaxLayer(const LayerParameter& param)
      : SoftmaxLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSoftmaxLayer();
    }
    
    #include <condition_variable>
#include <mutex>
#include <string>
#include <system_error>
#include <vector>
    
    OPERATOR_SCHEMA(EnforceFinite)
    .NumInputs(1)
    .NumOutputs(0)
    .SetDoc(R'DOC(
Raise if there is NaN or Inf values in the input tensor.
)DOC')
    .Input(0, 'input', 'Input tensor');
    
    template <class Context>
class FindDuplicateElementsOp final : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  USE_SIMPLE_CTOR_DTOR(FindDuplicateElementsOp);
  USE_DISPATCH_HELPER;
    }
    
    
    {} // namespace caffe2
    
    ChannelCredentials::~ChannelCredentials() {}
    
    std::shared_ptr<ChannelCredentials> CronetChannelCredentials(void* engine) {
  return std::shared_ptr<ChannelCredentials>(
      new CronetChannelCredentialsImpl(engine));
}
    
    
    {
    {  SecureChannelCredentials* AsSecureCredentials() override { return nullptr; }
};
}  // namespace
    
    namespace grpc {
    }
    
    #include 'src/cpp/common/secure_auth_context.h'
    
    struct grpc_auth_context;
    
    namespace grpc {
    }
    
    void FilterTrailingMetadata(grpc_metadata_batch* b, uint64_t* elapsed_time) {
  if (b->idx.named.grpc_server_stats_bin != nullptr) {
    ServerStatsDeserialize(
        reinterpret_cast<const char*>(GRPC_SLICE_START_PTR(
            GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md))),
        GRPC_SLICE_LENGTH(GRPC_MDVALUE(b->idx.named.grpc_server_stats_bin->md)),
        elapsed_time);
    grpc_metadata_batch_remove(b, b->idx.named.grpc_server_stats_bin);
  }
}
    
    size_t TraceContextSerialize(const ::opencensus::trace::SpanContext& context,
                             char* tracing_buf, size_t tracing_buf_size) {
  GrpcTraceContext trace_ctxt(context);
  return TraceContextEncoding::Encode(trace_ctxt, tracing_buf,
                                      tracing_buf_size);
}
    
      // Serializes a GrpcTraceContext into the provided buffer. Returns the number
  // of bytes serialized into the buffer. If the buffer is not of sufficient
  // size (it must be at least kGrpcTraceContextSize bytes) it will drop
  // everything and return 0 bytes serialized. Inlined for performance reasons.
  static size_t Encode(const GrpcTraceContext& tc, char* buf, size_t buf_size) {
    if (buf_size < kGrpcTraceContextSize) {
      return kEncodeDecodeFailure;
    }
    buf[kVersionIdOffset] = kVersionId;
    buf[kTraceIdOffset] = kTraceIdField;
    memcpy(&buf[kTraceIdOffset + 1], tc.trace_id,
           opencensus::trace::TraceId::kSize);
    buf[kSpanIdOffset] = kSpanIdField;
    memcpy(&buf[kSpanIdOffset + 1], tc.span_id,
           opencensus::trace::SpanId::kSize);
    buf[kTraceOptionsOffset] = kTraceOptionsField;
    memcpy(&buf[kTraceOptionsOffset + 1], tc.trace_options,
           opencensus::trace::TraceOptions::kSize);
    return kGrpcTraceContextSize;
  }
    
    		pick->next = h.first;
		h.first->prev = pick;
		pick->prev = NULL;
		h.first = pick;
		h.used++;
		pick->hand |= USED_FLAG;
    
    	StringName current_func_name;
	StringName vertex_name;
	StringName fragment_name;
	StringName light_name;
	StringName time_name;
    
    #include 'os/semaphore.h'
    
    		int read = recv(sockfd, p_buffer + total_read, to_read, 0);
    
    	static Mutex *create_func_windows(bool p_recursive);
    
    void RWLockWindows::write_unlock() {
    }
    
    #if defined(WINDOWS_ENABLED)
    
    #include 'thread_windows.h'
    
                tensorView = new TensorView<char>(slicedMatrixView, AsTensorViewShape(sliceViewShape));
            break;
        }
        case DataType::Int16:
        {
            auto currentMatrix = GetMatrix<short>();
            std::pair<size_t, size_t> currentMatrixDims = { currentMatrix->GetNumRows(), currentMatrix->GetNumCols() };
            std::shared_ptr<Matrix<short>> slicedMatrixView;
            if (sliceViewMatrixDims.first != currentMatrixDims.first)
                slicedMatrixView =
                make_shared<Matrix<short>>(currentMatrix->Reshaped(1, currentMatrix->GetNumElements())
                    .ColumnSlice(flatBufferOffset, sliceViewShape.TotalSize()));
            else
                slicedMatrixView = make_shared<Matrix<short>>(
                    currentMatrix->ColumnSlice(sliceMatrixColumnOffset, sliceViewMatrixDims.second));
    
        void ProgressWriter::UpdateTest(size_t samples, const ValuePtr& accumulatedMetric)
    {
        m_test->Update(samples, nullptr, accumulatedMetric,
            [this](const std::pair<size_t, size_t> samples, std::pair<size_t, size_t> updates,
                   const std::pair<double, double> /*aggregateLoss*/, std::pair<double, double> aggregateMetric)
            {
                OnWriteTestUpdate(samples, updates, aggregateMetric);
            });
    }
    
            const NDShape& Shape() const override { return m_unpackedShape; }
        DeviceDescriptor Device() const override { return m_isPacked ? m_packedData->Device() : Value::Device(); }
        DataType GetDataType() const override { return m_isPacked ? m_packedData->GetDataType() : Value::GetDataType(); }
        StorageFormat GetStorageFormat() const override { return m_isPacked? m_packedData->GetStorageFormat() : Value::GetStorageFormat(); }
        bool IsReadOnly() const override { return m_isPacked ? m_packedData->IsReadOnly() : Value::IsReadOnly(); }
    
                    if (outputRank == SentinelValueForInferParamInitRank)
                    outputRank = DefaultParamInitOutputRank;
    
    class Timer
{
public:
    Timer()
        : m_start(0), m_end(0)
    {
    }
    }
    
    public:
    DeclareConstructorFromConfigWithNumInputs(SumColumnElementsNode);
    SumColumnElementsNode(DEVICEID_TYPE deviceId, const wstring& name)
        : Base(deviceId, name)
    {
    }
    
        // Finish and check for file errors
    if (s.ok()) {
      s = file->Sync();
    }
    if (s.ok()) {
      s = file->Close();
    }
    delete file;
    file = nullptr;
    
      // Return an internal iterator over the current state of the database.
  // The keys of this iterator are internal keys (see format.h).
  // The returned iterator should be deleted when no longer needed.
  Iterator* TEST_NewInternalIterator();
    
    static const int kBlockSize = 32768;
    
    unsigned int Reader::ReadPhysicalRecord(Slice* result) {
  while (true) {
    if (buffer_.size() < kHeaderSize) {
      if (!eof_) {
        // Last read was a full read, so this is a trailer to skip
        buffer_.clear();
        Status status = file_->Read(kBlockSize, &buffer_, backing_store_);
        end_of_buffer_offset_ += buffer_.size();
        if (!status.ok()) {
          buffer_.clear();
          ReportDrop(kBlockSize, status);
          eof_ = true;
          return kEof;
        } else if (buffer_.size() < kBlockSize) {
          eof_ = true;
        }
        continue;
      } else {
        // Note that if buffer_ is non-empty, we have a truncated header at the
        // end of the file, which can be caused by the writer crashing in the
        // middle of writing the header. Instead of considering this an error,
        // just report EOF.
        buffer_.clear();
        return kEof;
      }
    }
    }
    }
    
    static Slice GetLengthPrefixedSlice(const char* data) {
  uint32_t len;
  const char* p = data;
  p = GetVarint32Ptr(p, p + 5, &len);  // +5: we assume 'p' is not corrupted
  return Slice(p, len);
}
    
       typedef typename traits_type::string_type traits_string_type;
   const ::boost::regex_traits_wrapper<traits_type>& traits_inst = *(e.m_ptraits);
   
   // dwa 9/13/00 suppress incorrect MSVC warning - it claims this is never
   // referenced
   (void)traits_inst;
    
    
    {   if(next_count->get_count() < rep->min)
   {
      // we must take the repeat:
      if(take_first)
      {
         // increase the counter:
         ++(*next_count);
         pstate = rep->next.p;
         return match_all_states();
      }
      return false;
   }
   bool greedy = (rep->greedy) && (!(m_match_flags & regex_constants::match_any) || m_independent);   
   if(greedy)
   {
      // try and take the repeat if we can:
      if((next_count->get_count() < rep->max) && take_first)
      {
         // store position in case we fail:
         BidiIterator pos = position;
         // increase the counter:
         ++(*next_count);
         pstate = rep->next.p;
         if(match_all_states())
            return true;
         if(!m_can_backtrack)
            return false;
         // failed repeat, reset posistion and fall through for alternative:
         position = pos;
      }
      if(take_second)
      {
         pstate = rep->alt.p;
         return true;
      }
      return false; // can't take anything, fail...
   }
   else // non-greedy
   {
      // try and skip the repeat if we can:
      if(take_second)
      {
         // store position in case we fail:
         BidiIterator pos = position;
         pstate = rep->alt.p;
         if(match_all_states())
            return true;
         if(!m_can_backtrack)
            return false;
         // failed alternative, reset posistion and fall through for repeat:
         position = pos;
      }
      if((next_count->get_count() < rep->max) && take_first)
      {
         // increase the counter:
         ++(*next_count);
         pstate = rep->next.p;
         return match_all_states();
      }
   }
   return false;
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    class BOOST_REGEX_DECL abstract_protected_call
{
public:
   bool BOOST_REGEX_CALL execute()const;
   // this stops gcc-4 from complaining:
   virtual ~abstract_protected_call(){}
private:
   virtual bool call()const = 0;
};
    
    
    {      basic = ::boost::regbase::basic,
      extended = ::boost::regbase::extended,
      normal = ::boost::regbase::normal,
      emacs = ::boost::regbase::emacs,
      awk = ::boost::regbase::awk,
      grep = ::boost::regbase::grep,
      egrep = ::boost::regbase::egrep,
      sed = basic,
      perl = normal,
      ECMAScript = normal,
      JavaScript = normal,
      JScript = normal
   };
   typedef ::boost::regbase::flag_type syntax_option_type;
    
    #endif
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
        // Build atlas
    unsigned char* tex_pixels = NULL;
    int tex_w, tex_h;
    io.Fonts->GetTexDataAsRGBA32(&tex_pixels, &tex_w, &tex_h);
    
    
    {    return S_OK;
}
    
    static void ImGui_ImplGlfw_UpdateMousePosAndButtons()
{
    // Update buttons
    ImGuiIO& io = ImGui::GetIO();
    for (int i = 0; i < IM_ARRAYSIZE(io.MouseDown); i++)
    {
        // If a mouse press event came, always pass it as 'mouse held this frame', so we don't miss click-release events that are shorter than 1 frame.
        io.MouseDown[i] = g_MouseJustPressed[i] || glfwGetMouseButton(g_Window, i) != 0;
        g_MouseJustPressed[i] = false;
    }
    }
    
    #if SDL_HAS_CAPTURE_MOUSE && !defined(__EMSCRIPTEN__)
    SDL_Window* focused_window = SDL_GetKeyboardFocus();
    if (g_Window == focused_window)
    {
        // SDL_GetMouseState() gives mouse position seemingly based on the last window entered/focused(?)
        // The creation of a new windows at runtime and SDL_CaptureMouse both seems to severely mess up with that, so we retrieve that position globally.
        int wx, wy;
        SDL_GetWindowPosition(focused_window, &wx, &wy);
        SDL_GetGlobalMouseState(&mx, &my);
        mx -= wx;
        my -= wy;
        io.MousePos = ImVec2((float)mx, (float)my);
    }
    
        // Setup orthographic projection matrix
    // Our visible imgui space lies from draw_data->DisplayPps (top left) to draw_data->DisplayPos+data_data->DisplaySize (bottom right).
    // Being agnostic of whether <d3dx9.h> or <DirectXMath.h> can be used, we aren't relying on D3DXMatrixIdentity()/D3DXMatrixOrthoOffCenterLH() or DirectX::XMMatrixIdentity()/DirectX::XMMatrixOrthographicOffCenterLH()
    {
        float L = draw_data->DisplayPos.x + 0.5f;
        float R = draw_data->DisplayPos.x + draw_data->DisplaySize.x + 0.5f;
        float T = draw_data->DisplayPos.y + 0.5f;
        float B = draw_data->DisplayPos.y + draw_data->DisplaySize.y + 0.5f;
        D3DMATRIX mat_identity = { { 1.0f, 0.0f, 0.0f, 0.0f,  0.0f, 1.0f, 0.0f, 0.0f,  0.0f, 0.0f, 1.0f, 0.0f,  0.0f, 0.0f, 0.0f, 1.0f } };
        D3DMATRIX mat_projection =
        {
            2.0f/(R-L),   0.0f,         0.0f,  0.0f,
            0.0f,         2.0f/(T-B),   0.0f,  0.0f,
            0.0f,         0.0f,         0.5f,  0.0f,
            (L+R)/(L-R),  (T+B)/(B-T),  0.5f,  1.0f,
        };
        g_pd3dDevice->SetTransform(D3DTS_WORLD, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_VIEW, &mat_identity);
        g_pd3dDevice->SetTransform(D3DTS_PROJECTION, &mat_projection);
    }
    
            for( int i=0; i < nVert; i++ )
        {
            // TODO: optimize multiplication on gpu using vertex shader/projection matrix.
            pVertStream[i].x = cmd_list->VtxBuffer[i].pos.x * g_RenderScale.x;
            pVertStream[i].y = cmd_list->VtxBuffer[i].pos.y * g_RenderScale.y;
            pUVStream[i].x = cmd_list->VtxBuffer[i].uv.x;
            pUVStream[i].y = cmd_list->VtxBuffer[i].uv.y;
            pColStream[i] = cmd_list->VtxBuffer[i].col;
        }
    
    #define GUETZLI_LOG(stats, ...)                                    \
  do {                                                             \
    char debug_string[1024];                                       \
    int res = snprintf(debug_string, sizeof(debug_string),         \
                       __VA_ARGS__);                               \
    assert(res > 0 && 'expected successful printing');             \
    (void)res;                                                     \
    debug_string[sizeof(debug_string) - 1] = '\0';                 \
    ::guetzli::PrintDebug(                      \
         stats, std::string(debug_string));        \
  } while (0)
#define GUETZLI_LOG_QUANT(stats, q)                    \
  for (int y = 0; y < 8; ++y) {                        \
    for (int c = 0; c < 3; ++c) {                      \
      for (int x = 0; x < 8; ++x)                      \
        GUETZLI_LOG(stats, ' %2d', (q)[c][8 * y + x]); \
      GUETZLI_LOG(stats, '   ');                       \
    }                                                  \
    GUETZLI_LOG(stats, '\n');                          \
  }
    
    
    {}  // namespace guetzli
    
      png_infop info_ptr = png_create_info_struct(png_ptr);
  if (!info_ptr) {
    png_destroy_read_struct(&png_ptr, nullptr, nullptr);
    return false;
  }
    
    void SaveQuantTables(const int q[3][kDCTBlockSize], JPEGData* jpg) {
  const size_t kTableSize = kDCTBlockSize * sizeof(q[0][0]);
  jpg->quant.clear();
  int num_tables = 0;
  for (size_t i = 0; i < jpg->components.size(); ++i) {
    JPEGComponent* comp = &jpg->components[i];
    // Check if we have this quant table already.
    bool found = false;
    for (int j = 0; j < num_tables; ++j) {
      if (memcmp(&q[i][0], &jpg->quant[j].values[0], kTableSize) == 0) {
        comp->quant_idx = j;
        found = true;
        break;
      }
    }
    if (!found) {
      JPEGQuantTable table;
      memcpy(&table.values[0], &q[i][0], kTableSize);
      table.precision = 0;
      for (int k = 0; k < kDCTBlockSize; ++k) {
        assert(table.values[k] >= 0);
        assert(table.values[k] < (1 << 16));
        if (table.values[k] > 0xff) {
          table.precision = 1;
        }
      }
      table.index = num_tables;
      comp->quant_idx = num_tables;
      jpg->quant.push_back(table);
      ++num_tables;
    }
  }
}
    
    // Huffman code and decoding lookup table used for DC and AC coefficients.
struct JPEGHuffmanCode {
  JPEGHuffmanCode() : counts(kJpegHuffmanMaxBitLength + 1),
                      values(kJpegHuffmanAlphabetSize + 1),
                      slot_id(0),
                      is_last(true) {}
    }
    
    
    {}  // namespace guetzli
    
      // Returns the next byte and skips the 0xff/0x00 escape sequences.
  uint8_t GetNextByte() {
    if (pos_ >= next_marker_pos_) {
      ++pos_;
      return 0;
    }
    uint8_t c = data_[pos_++];
    if (c == 0xff) {
      uint8_t escape = data_[pos_];
      if (escape == 0) {
        ++pos_;
      } else {
        // 0xff was followed by a non-zero byte, which means that we found the
        // start of the next marker segment.
        next_marker_pos_ = pos_ - 1;
      }
    }
    return c;
  }
    
    #include <stddef.h>
#include <stdint.h>