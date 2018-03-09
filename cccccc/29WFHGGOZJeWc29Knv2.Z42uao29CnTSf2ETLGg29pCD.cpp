
        
          LOG(INFO) << 'Writing Training data';
  for (int fileid = 0; fileid < kCIFARTrainBatches; ++fileid) {
    // Open files
    LOG(INFO) << 'Training Batch ' << fileid + 1;
    string batchFileName = input_folder + '/data_batch_'
      + caffe::format_int(fileid+1) + '.bin';
    std::ifstream data_file(batchFileName.c_str(),
        std::ios::in | std::ios::binary);
    CHECK(data_file) << 'Unable to open train file #' << fileid + 1;
    for (int itemid = 0; itemid < kCIFARBatchSize; ++itemid) {
      read_image(&data_file, &label, str_buffer);
      datum.set_label(label);
      datum.set_data(str_buffer, kCIFARImageNBytes);
      string out;
      CHECK(datum.SerializeToString(&out));
      txn->Put(caffe::format_int(fileid * kCIFARBatchSize + itemid, 5), out);
    }
  }
  txn->Commit();
  train_db->Close();
    
      /// @brief The spatial dimensions of the input.
  inline int input_shape(int i) {
    return (*bottom_shape_)[channel_axis_ + i];
  }
  // reverse_dimensions should return true iff we are implementing deconv, so
  // that conv helpers know which dimensions are which.
  virtual bool reverse_dimensions() = 0;
  // Compute height_out_ and width_out_ from other parameters.
  virtual void compute_output_shape() = 0;
    
    /**
 * @brief Computes the contrastive loss @f$
 *          E = \frac{1}{2N} \sum\limits_{n=1}^N \left(y\right) d^2 +
 *              \left(1-y\right) \max \left(margin-d, 0\right)^2
 *          @f$ where @f$
 *          d = \left| \left| a_n - b_n \right| \right|_2 @f$. This can be
 *          used to train siamese networks.
 *
 * @param bottom input Blob vector (length 3)
 *   -# @f$ (N \times C \times 1 \times 1) @f$
 *      the features @f$ a \in [-\infty, +\infty]@f$
 *   -# @f$ (N \times C \times 1 \times 1) @f$
 *      the features @f$ b \in [-\infty, +\infty]@f$
 *   -# @f$ (N \times 1 \times 1 \times 1) @f$
 *      the binary similarity @f$ s \in [0, 1]@f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
 *      the computed contrastive loss: @f$ E =
 *          \frac{1}{2N} \sum\limits_{n=1}^N \left(y\right) d^2 +
 *          \left(1-y\right) \max \left(margin-d, 0\right)^2
 *          @f$ where @f$
 *          d = \left| \left| a_n - b_n \right| \right|_2 @f$.
 * This can be used to train siamese networks.
 */
template <typename Dtype>
class ContrastiveLossLayer : public LossLayer<Dtype> {
 public:
  explicit ContrastiveLossLayer(const LayerParameter& param)
      : LossLayer<Dtype>(param), diff_() {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
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
    
    #endif  // CAFFE_DECONV_LAYER_HPP_

    
    /**
 * @brief During training only, sets a random portion of @f$x@f$ to 0, adjusting
 *        the rest of the vector magnitude accordingly.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$ y = |x| @f$
 */
template <typename Dtype>
class DropoutLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides DropoutParameter dropout_param,
   *     with DropoutLayer options:
   *   - dropout_ratio (\b optional, default 0.5).
   *     Sets the probability @f$ p @f$ that any given unit is dropped.
   */
  explicit DropoutLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    /**
 * @brief Computes @f$ y = \gamma ^ {\alpha x + \beta} @f$,
 *        as specified by the scale @f$ \alpha @f$, shift @f$ \beta @f$,
 *        and base @f$ \gamma @f$.
 */
template <typename Dtype>
class ExpLayer : public NeuronLayer<Dtype> {
 public:
  /**
   * @param param provides ExpParameter exp_param,
   *     with ExpLayer options:
   *   - scale (\b optional, default 1) the scale @f$ \alpha @f$
   *   - shift (\b optional, default 0) the shift @f$ \beta @f$
   *   - base (\b optional, default -1 for a value of @f$ e \approx 2.718 @f$)
   *         the base @f$ \gamma @f$
   */
  explicit ExpLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    public:
  explicit Timer(Type type, const char *name = nullptr, ReportType r = Log);
  ~Timer();
    
      /**
   * Create a task. This returns a task handle, or null object
   * if there are no worker threads.
   */
  static Resource TaskStart(
    const String& url, const Array& headers,
    const String& remote_host,
    const String& post_data = null_string,
    const Array& files = null_array,
    int timeoutSeconds = -1,
    PageletServerTaskEvent *event = nullptr
  );
    
        auto gmpObjectData = Native::data<GMPData>(gmpObject);
    if (!gmpObjectData) {
      raise_warning(cs_GMP_INVALID_OBJECT, fnCaller);
      return false;
    }
    
    void numa_local(void* start, size_t size) {
  if (!use_numa) return;
  numa_setlocal_memory(start, size);
}
    
    bool HHVM_FUNCTION(posix_initgroups,
                   const String& name,
                   int base_group_id) {
  if (name.empty()) return false;
  return !initgroups(name.data(), base_group_id);
}
    
      // Compares img with the baseline image and saves the resulting distance map
  // inside the object. The provided image must have the same dimensions as the
  // baseline image.
  virtual void Compare(const OutputImage& img) = 0;
    
    namespace guetzli {
    }
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    // Single pixel rgb to 16-bit yuv conversion.
// The returned yuv values are signed integers in the
// range [-128, 127] inclusive.
inline static void RGBToYUV16(const uint8_t* const rgb,
                              coeff_t *out) {
  enum { FRAC = 16, HALF = 1 << (FRAC - 1) };
  const int r = rgb[0];
  const int g = rgb[1];
  const int b = rgb[2];
  out[0] = (19595 * r  + 38469 * g +  7471 * b - (128 << 16) + HALF) >> FRAC;
  out[64] = (-11059 * r - 21709 * g + 32768 * b + HALF - 1) >> FRAC;
  out[128] = (32768 * r  - 27439 * g -  5329 * b + HALF - 1) >> FRAC;
}
    
    
    {}  // namespace guetzli
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplDX9_CreateDeviceObjects();
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_Marmalade_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_Marmalade_CreateDeviceObjects();
    
        // Main loop
    bool running = true;
    while (running)
    {
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        ALLEGRO_EVENT ev;
        while (al_get_next_event(queue, &ev))
        {
            ImGui_ImplA5_ProcessEvent(&ev);
            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) 
                running = false;
            if (ev.type == ALLEGRO_EVENT_DISPLAY_RESIZE)
            {
                ImGui_ImplA5_InvalidateDeviceObjects();
                al_acknowledge_resize(display);
                Imgui_ImplA5_CreateDeviceObjects();
            }
        }
        ImGui_ImplA5_NewFrame();
    }
    
    static void ImGui_ImplWin32_UpdateMouseCursor()
{
    ImGuiIO& io = ImGui::GetIO();
    ImGuiMouseCursor imgui_cursor = io.MouseDrawCursor ? ImGuiMouseCursor_None : ImGui::GetMouseCursor();
    if (imgui_cursor == ImGuiMouseCursor_None)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        ::SetCursor(NULL);
    }
    else
    {
        // Hardware cursor type
        LPTSTR win32_cursor = IDC_ARROW;
        switch (imgui_cursor)
        {
        case ImGuiMouseCursor_Arrow:        win32_cursor = IDC_ARROW; break;
        case ImGuiMouseCursor_TextInput:    win32_cursor = IDC_IBEAM; break;
        case ImGuiMouseCursor_ResizeAll:    win32_cursor = IDC_SIZEALL; break;
        case ImGuiMouseCursor_ResizeEW:     win32_cursor = IDC_SIZEWE; break;
        case ImGuiMouseCursor_ResizeNS:     win32_cursor = IDC_SIZENS; break;
        case ImGuiMouseCursor_ResizeNESW:   win32_cursor = IDC_SIZENESW; break;
        case ImGuiMouseCursor_ResizeNWSE:   win32_cursor = IDC_SIZENWSE; break;
        }
        ::SetCursor(::LoadCursor(NULL, win32_cursor));
    }
}
    
    void ImGui_ImplSdlGL2_Shutdown()
{
    // Destroy SDL mouse cursors
    for (ImGuiMouseCursor cursor_n = 0; cursor_n < ImGuiMouseCursor_COUNT; cursor_n++)
        SDL_FreeCursor(g_MouseCursors[cursor_n]);
    memset(g_MouseCursors, 0, sizeof(g_MouseCursors));
    }
    
    ::grpc::Status MonsterStorage::Service::Store(::grpc::ServerContext* context, const flatbuffers::grpc::Message<Monster>* request, flatbuffers::grpc::Message<Stat>* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, '');
}
    
    #include 'monster_test_generated.h'
#include 'flatbuffers/grpc.h'
    
      virtual grpc::string name() const = 0;
    
    #if !FLATBUFFERS_GRPC_DISABLE_AUTO_VERIFICATION
  {
    // Test that an invalid request errors out correctly
    grpc::ClientContext context;
    flatbuffers::grpc::Message<Monster> request;  // simulate invalid message
    flatbuffers::grpc::Message<Stat> response;
    auto status = stub->Store(&context, request, &response);
    // The rpc status should be INTERNAL to indicate a verification error. This
    // matches the protobuf gRPC status code for an unparseable message.
    assert(!status.ok());
    assert(status.error_code() == ::grpc::StatusCode::INTERNAL);
    assert(strcmp(status.error_message().c_str(),
                  'Message verification failed') == 0);
  }
#endif
    
    inline void IterateValue(ElementaryType type, const uint8_t *val,
                         const TypeTable *type_table, const uint8_t *prev_val,
                         soffset_t vector_index, IterationVisitor *visitor) {
  switch (type) {
    case ET_UTYPE: {
      auto tval = *reinterpret_cast<const uint8_t *>(val);
      visitor->UType(tval, EnumName(tval, type_table));
      break;
    }
    case ET_BOOL: {
      visitor->Bool(*reinterpret_cast<const uint8_t *>(val) != 0);
      break;
    }
    case ET_CHAR: {
      auto tval = *reinterpret_cast<const int8_t *>(val);
      visitor->Char(tval, EnumName(tval, type_table));
      break;
    }
    case ET_UCHAR: {
      auto tval = *reinterpret_cast<const uint8_t *>(val);
      visitor->UChar(tval, EnumName(tval, type_table));
      break;
    }
    case ET_SHORT: {
      auto tval = *reinterpret_cast<const int16_t *>(val);
      visitor->Short(tval, EnumName(tval, type_table));
      break;
    }
    case ET_USHORT: {
      auto tval = *reinterpret_cast<const uint16_t *>(val);
      visitor->UShort(tval, EnumName(tval, type_table));
      break;
    }
    case ET_INT: {
      auto tval = *reinterpret_cast<const int32_t *>(val);
      visitor->Int(tval, EnumName(tval, type_table));
      break;
    }
    case ET_UINT: {
      auto tval = *reinterpret_cast<const uint32_t *>(val);
      visitor->UInt(tval, EnumName(tval, type_table));
      break;
    }
    case ET_LONG: {
      visitor->Long(*reinterpret_cast<const int64_t *>(val));
      break;
    }
    case ET_ULONG: {
      visitor->ULong(*reinterpret_cast<const uint64_t *>(val));
      break;
    }
    case ET_FLOAT: {
      visitor->Float(*reinterpret_cast<const float *>(val));
      break;
    }
    case ET_DOUBLE: {
      visitor->Double(*reinterpret_cast<const double *>(val));
      break;
    }
    case ET_STRING: {
      val += ReadScalar<uoffset_t>(val);
      visitor->String(reinterpret_cast<const String *>(val));
      break;
    }
    case ET_SEQUENCE: {
      switch (type_table->st) {
        case ST_TABLE:
          val += ReadScalar<uoffset_t>(val);
          IterateObject(val, type_table, visitor);
          break;
        case ST_STRUCT: IterateObject(val, type_table, visitor); break;
        case ST_UNION: {
          val += ReadScalar<uoffset_t>(val);
          assert(prev_val);
          auto union_type = *prev_val;  // Always a uint8_t.
          if (vector_index >= 0) {
            auto type_vec = reinterpret_cast<const Vector<uint8_t> *>(prev_val);
            union_type = type_vec->Get(static_cast<uoffset_t>(vector_index));
          }
          auto type_code_idx =
              LookupEnum(union_type, type_table->values, type_table->num_elems);
          if (type_code_idx >= 0 &&
              type_code_idx < static_cast<int32_t>(type_table->num_elems)) {
            auto type_code = type_table->type_codes[type_code_idx];
            switch (type_code.base_type) {
              case ET_SEQUENCE: {
                auto ref = type_table->type_refs[type_code.sequence_ref]();
                IterateObject(val, ref, visitor);
                break;
              }
              case ET_STRING:
                visitor->String(reinterpret_cast<const String *>(val));
                break;
              default: visitor->Unknown(val);
            }
          } else {
            visitor->Unknown(val);
          }
          break;
        }
        case ST_ENUM: assert(false); break;
      }
      break;
    }
    default: {
      visitor->Unknown(val);
      break;
    }
  }
}
    
    #ifndef FLATBUFFERS_REGISTRY_H_
#define FLATBUFFERS_REGISTRY_H_
    
      // Second, serialize the rest of the objects needed by the Monster.
  auto position = Vec3(1.0f, 2.0f, 3.0f);
    
    // Get the value of a union from an object.
static void GetUnionField(const StructDef &struct_def, const FieldDef &field,
                          std::string *code_ptr) {
  std::string &code = *code_ptr;
  GenReceiver(struct_def, code_ptr);
  code += MakeCamel(field.name) + '(self):';
  code += OffsetPrefix(field);
    }
    
    
    {} // namespace aria2
    
    namespace aria2 {
    }
    
    namespace aria2 {
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
    
      void nextEvent();
    
    // DiskwriterFactory class template to create DiskWriter derived
// object, ignoring filename.
template <class DiskWriterType>
class AnonDiskWriterFactory : public DiskWriterFactory {
public:
  AnonDiskWriterFactory() = default;
  virtual ~AnonDiskWriterFactory() = default;
    }
    
    
    {private:
  Session* session_;
  DownloadEventCallback callback_;
  void* userData_;
};