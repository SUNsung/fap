
        
        // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    IPC_MESSAGE_ROUTED3(ShellViewHostMsg_Call_Static_Method,
                    std::string /* type name */,
                    std::string /* method name */,
                    base::ListValue /* arguments */)
    
    #if defined(OS_WIN)
#include 'base/strings/utf_string_conversions.h'
#include 'base/files/file_path.h'
#include 'base/files/file_util.h'
#include 'base/win/shortcut.h'
#include 'base/path_service.h'
#include 'content/nw/src/common/shell_switches.h'
#endif
    
      scoped_ptr<base::Value> value_args(
      converter->FromV8Value(args, isolate->GetCurrentContext()));
  if (!value_args.get() ||
      !value_args->IsType(base::Value::TYPE_LIST))
    return isolate->ThrowException(v8::Exception::Error(v8::String::NewFromUtf8(isolate,
        'Unable to convert 'args' passed to CallObjectMethodSync')));
    
    bool MenuDelegate::GetIconForCommandId(int command_id,
                                       gfx::Image* icon) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  if (item->icon_.IsEmpty())
    return false;
    }
    
    #include 'base/run_loop.h'
#include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'skia/ext/image_operations.h'
#include 'ui/aura/client/screen_position_client.h'
#include 'ui/aura/window.h'
#include 'ui/aura/window_tree_host.h'
#include 'ui/events/platform/platform_event_source.h'
#include 'ui/views/controls/menu/menu_runner.h'
#include 'ui/views/widget/widget.h'
#include 'ui/views/focus/focus_manager.h'
#include 'vector'
    
    
    {}
    
    
    {}
    
      bool NwScreenGetScreensFunction::RunNWSync(base::ListValue* response, std::string* error) {
    const std::vector<display::Display>& displays = display::Screen::GetScreen()->GetAllDisplays();
    }
    
      ts->tv_sec += s_extra_request_nanoseconds / sec_to_ns;
  auto res = ts->tv_nsec + s_extra_request_nanoseconds % sec_to_ns;
  if (res > sec_to_ns) {
    res -= sec_to_ns;
    ts->tv_sec += 1;
  }
  ts->tv_nsec = res;
    
    /*
 * Check that each block has exactly one terminal instruction at the end.
 */
bool checkBlockEnd(const Vunit& v, Vlabel b);
    
    #ifndef incl_HPHP_UTIL_EMBEDDED_DATA_H_
#define incl_HPHP_UTIL_EMBEDDED_DATA_H_
    
    void CurlShareResource::sweep() {
  close();
}
    
            // Graph inputs.
        std::vector<const NodeArg*> m_graphInputs;
    
    #endif

    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Abs)
        .Description('Absolute takes one input data (Tensor<T>) and produces one output data '
            '(Tensor<T>) where the absolute is, y = abs(x), is applied to '
            'the tensor elementwise.')
        .Input('X', 'Input tensor of any shape', 'T')
        .Output('Y', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
        REGISTER_OPERATOR_SCHEMA(MeanVarianceNormalization)
        .Description('Perform mean variance normalization.')
        .Input('input', 'Input tensor of any shape', 'T')
        .Output('output', 'Output tensor of same shape and type as input X.', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' }, 'Constrain input and output '
            'types to float tensors.')
        .Attr('across_channels', 'If true, mean and variance are computed across channels. '
            'Default is false.', AttrType::AttributeProto_AttributeType_INT, int64_t(0))
        .Attr('normalize_variance', 'If false, normalize the mean only. Default is true.',
            AttrType::AttributeProto_AttributeType_INT, int64_t(1));
    
    
    {    m_currentState = m_reader->GetState();
}
    
    FunctionPtr CreateLSTM(const ONNXIR::Node *node, const std::vector<Variable> &inputs, const std::string &direction,
    const std::vector<std::string> &activations, const std::vector<float> &activation_alpha, const std::vector<float> &activation_beta);
    
    BOOST_FIXTURE_TEST_CASE(MatrixDenseTimesSparse, RandomSeedFixture)
{
    Matrix<float> mAdense(c_deviceIdZero);
    mAdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -3.0f, 0.1f, IncrementCounter()), 0);
    }
    
    inline int ReadUint8(const uint8_t* data, size_t* pos) {
  return data[(*pos)++];
}
    
    void OutputImageComponent::ToPixels(int xmin, int ymin, int xsize, int ysize,
                                    uint8_t* out, int stride) const {
  assert(xmin >= 0);
  assert(ymin >= 0);
  assert(xmin < width_);
  assert(ymin < height_);
  const int yend1 = ymin + ysize;
  const int yend0 = std::min(yend1, height_);
  int y = ymin;
  for (; y < yend0; ++y) {
    const int xend1 = xmin + xsize;
    const int xend0 = std::min(xend1, width_);
    int x = xmin;
    int px = y * width_ + xmin;
    for (; x < xend0; ++x, ++px, out += stride) {
      *out = static_cast<uint8_t>((pixels_[px] + 8 - (x & 1)) >> 4);
    }
    const int offset = -stride;
    for (; x < xend1; ++x) {
      *out = out[offset];
      out += stride;
    }
  }
  for (; y < yend1; ++y) {
    const int offset = -stride * xsize;
    for (int x = 0; x < xsize; ++x) {
      *out = out[offset];
      out += stride;
    }
  }
}
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    #include 'guetzli/entropy_encode.h'
    
    const double* Srgb8ToLinearTable() {
  static const double* const kSrgb8ToLinearTable = NewSrgb8ToLinearTable();
  return kSrgb8ToLinearTable;
}
    
    #include 'guetzli/fdct.h'
    
    #include 'guetzli/jpeg_data.h'
    
      JpegHistogram() { Clear(); }
  void Clear() {
    memset(counts, 0, sizeof(counts));
    counts[kSize - 1] = 1;
  }
  void Add(int symbol) {
    counts[symbol] += 2;
  }
  void Add(int symbol, int weight) {
    counts[symbol] += 2 * weight;
  }
  void AddHistogram(const JpegHistogram& other) {
    for (int i = 0; i + 1 < kSize; ++i) {
      counts[i] += other.counts[i];
    }
    counts[kSize - 1] = 1;
  }
  int NumSymbols() const {
    int n = 0;
    for (int i = 0; i + 1 < kSize; ++i) {
      n += (counts[i] > 0 ? 1 : 0);
    }
    return n;
  }
    
    #endif  // GUETZLI_JPEG_ERROR_H_

    
    // Builds jpeg-style Huffman lookup table from the given symbols.
// The symbols are in order of increasing bit lengths. The number of symbols
// with bit length n is given in counts[n] for each n >= 1.
// Returns the size of the lookup table.
int BuildJpegHuffmanTable(const int* counts, const int* symbols,
                          HuffmanTableEntry* lut);
    
      // If sharpen or blur are enabled, preprocesses image before downsampling U or
  // V to improve butteraugli score and/or reduce file size.
  // u_sharpen: sharpen the u channel in red areas to improve score (not as
  // effective as v_sharpen, blue is not so important)
  // u_blur: blur the u channel in some areas to reduce file size
  // v_sharpen: sharpen the v channel in red areas to improve score
  // v_blur: blur the v channel in some areas to reduce file size
  struct DownsampleConfig {
    // Default is YUV420.
    DownsampleConfig() : u_factor_x(2), u_factor_y(2),
                         v_factor_x(2), v_factor_y(2),
                         u_sharpen(true), u_blur(true),
                         v_sharpen(true), v_blur(true),
                         use_silver_screen(false) {}
    int u_factor_x;
    int u_factor_y;
    int v_factor_x;
    int v_factor_y;
    bool u_sharpen;
    bool u_blur;
    bool v_sharpen;
    bool v_blur;
    bool use_silver_screen;
  };
    
    // Gamma-compensated chroma subsampling.
// Returns Y, U, V image planes, each with width x height dimensions, but the
// U and V planes are composed of 2x2 blocks with the same values.
std::vector<std::vector<float> > RGBToYUV420(
    const std::vector<uint8_t>& rgb_in, const int width, const int height);