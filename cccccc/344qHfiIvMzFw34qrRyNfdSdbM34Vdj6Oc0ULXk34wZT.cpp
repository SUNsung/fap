
        
        // Tell browser to delete a object.
// function DeallocateObject(id);
v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id);
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    void Menu::Popup(int x, int y, content::Shell* shell) {
  GdkEventButton* event = NULL; //FIXME: shell->web_contents()->GetRenderWidgetHostView()->GetLastMouseDown();
  uint32_t triggering_event_time = event ? event->time : GDK_CURRENT_TIME;
  gfx::Point point;
  if (!event) {
    // gfx::Rect bounds = shell->web_contents()->GetRenderWidgetHostView()->GetViewBounds();
    // point = gfx::Point(x + bounds.x(), y + bounds.y());
    DVLOG(1) << 'no last mouse down event';
    point = gfx::Point(x, y);
  }else
    point = gfx::Point(event->x_root, event->y_root);
    }
    
    
    {  // ExtensionFunction:
  ResponseAction Run() override;
  DECLARE_EXTENSION_FUNCTION('nw.App.closeAllWindows', UNKNOWN)
};
    
        bool ReadImage(ClipboardData& data) {
      DCHECK(data.type == TYPE_PNG || data.type == TYPE_JPEG);
      std::vector<unsigned char> encoded_image;
      SkBitmap bitmap = clipboard_->ReadImage(ui::CLIPBOARD_TYPE_COPY_PASTE);
    }
    
      // Open leveldb
  leveldb::DB* db;
  leveldb::Options options;
  options.create_if_missing = true;
  options.error_if_exists = true;
  leveldb::Status status = leveldb::DB::Open(
      options, db_filename, &db);
  CHECK(status.ok()) << 'Failed to open leveldb ' << db_filename
      << '. Is it already existing?';
    
    #define INSTANTIATE_LAYER_GPU_FUNCS(classname) \
  INSTANTIATE_LAYER_GPU_FORWARD(classname); \
  INSTANTIATE_LAYER_GPU_BACKWARD(classname)
    
      /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const Datum& datum);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const vector<Datum> & datum_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   */
#ifdef USE_OPENCV
  vector<int> InferBlobShape(const vector<cv::Mat> & mat_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   */
  vector<int> InferBlobShape(const cv::Mat& cv_img);
#endif  // USE_OPENCV
    
    /**
 * @brief Fills a Blob with values @f$ x \sim U(-a, +a) @f$ where @f$ a @f$ is
 *        set inversely proportional to number of incoming nodes, outgoing
 *        nodes, or their average.
 *
 * A Filler based on the paper [Bengio and Glorot 2010]: Understanding
 * the difficulty of training deep feedforward neuralnetworks.
 *
 * It fills the incoming matrix by randomly sampling uniform data from [-scale,
 * scale] where scale = sqrt(3 / n) where n is the fan_in, fan_out, or their
 * average, depending on the variance_norm option. You should make sure the
 * input blob has shape (num, a, b, c) where a * b * c = fan_in and num * b * c
 * = fan_out. Note that this is currently not the case for inner product layers.
 *
 * TODO(dox): make notation in above comment consistent with rest & use LaTeX.
 */
template <typename Dtype>
class XavierFiller : public Filler<Dtype> {
 public:
  explicit XavierFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    int fan_in = blob->count() / blob->shape(0);
    // Compatibility with ND blobs
    int fan_out = blob->num_axes() > 1 ?
                  blob->count() / blob->shape(1) :
                  blob->count();
    Dtype n = fan_in;  // default to fan_in
    if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_AVERAGE) {
      n = (fan_in + fan_out) / Dtype(2);
    } else if (this->filler_param_.variance_norm() ==
        FillerParameter_VarianceNorm_FAN_OUT) {
      n = fan_out;
    }
    Dtype scale = sqrt(Dtype(3) / n);
    caffe_rng_uniform<Dtype>(blob->count(), -scale, scale,
        blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    
#define REGISTER_LAYER_CREATOR(type, creator)                                  \
  static LayerRegisterer<float> g_creator_f_##type(#type, creator<float>);     \
  static LayerRegisterer<double> g_creator_d_##type(#type, creator<double>)    \
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times ...) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (M) @f$
   *      the inputs @f$ x_2 @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (M \times ...) @f$:
   *      the reindexed array @f$
   *        y = x_1[x_2]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
    
    {}  // namespace caffe
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t bias_desc_;
  cudnnFilterDescriptor_t filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
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
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace caffe2 {
    }
    
    REGISTER_CPU_OPERATOR(
    MergeSingleListFeatureTensors,
    MergeSingleListFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleListFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with list features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 3 == 0; })
    .NumOutputs(4)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_values', '.values')
    .Input(2, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values_lengths', '.values.lengths')
    .Output(3, 'out_values_values', '.values.values')
    .Arg('feature_ids', 'feature ids');
    
    OPERATOR_SCHEMA(GivenTensorBoolFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .Arg(
        'values',
        'The value for the elements of the output tensor.',
        true /* required */)
    .Arg(
        'shape',
        'The shape of the output tensor.'
        'Cannot set the shape argument and pass in an input at the same time.')
    .Arg(
        'extra_shape',
        'The additional dimensions appended at the end of the shape indicated'
        'by the input blob.'
        'Cannot set the extra_shape argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '1D tensor containing the desired output shape. First input must be in CPU context.')
    .TensorInferenceFunction(FillerTensorInference<TensorProto_DataType_BOOL>);
    
        case URX_SETREF:
    case URX_LOOP_SR_I:
        {
            UnicodeString s;
            UnicodeSet *set = (UnicodeSet *)fSets->elementAt(val);
            set->toPattern(s, TRUE);
            printf('%s', CStr(s)());
        }
        break;
    
    class Calendar;
    
    // Bitwise comparison for the collation keys.
UCollationResult
CollationKey::compareTo(const CollationKey& target, UErrorCode &status) const
{
  if(U_SUCCESS(status)) {
    const uint8_t *src = getBytes();
    const uint8_t *tgt = target.getBytes();
    }
    }
    
    //---- Avoid multiple STB libraries implementations, or redefine path/filenames to prioritize another version
// By default the embedded implementations are declared static and not available outside of imgui cpp files.
//#define IMGUI_STB_TRUETYPE_FILENAME   'my_folder/stb_truetype.h'
//#define IMGUI_STB_RECT_PACK_FILENAME  'my_folder/stb_rect_pack.h'
//#define IMGUI_DISABLE_STB_TRUETYPE_IMPLEMENTATION
//#define IMGUI_DISABLE_STB_RECT_PACK_IMPLEMENTATION
    
    IMGUI_IMPL_API bool     ImGui_ImplDX10_Init(ID3D10Device* device);
IMGUI_IMPL_API void     ImGui_ImplDX10_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplDX10_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplDX10_RenderDrawData(ImDrawData* draw_data);
    
        if (!g_pIB || g_IndexBufferSize < draw_data->TotalIdxCount)
    {
        if (g_pIB) { g_pIB->Release(); g_pIB = NULL; }
        g_IndexBufferSize = draw_data->TotalIdxCount + 10000;
        D3D10_BUFFER_DESC desc;
        memset(&desc, 0, sizeof(D3D10_BUFFER_DESC));
        desc.Usage = D3D10_USAGE_DYNAMIC;
        desc.ByteWidth = g_IndexBufferSize * sizeof(ImDrawIdx);
        desc.BindFlags = D3D10_BIND_INDEX_BUFFER;
        desc.CPUAccessFlags = D3D10_CPU_ACCESS_WRITE;
        if (ctx->CreateBuffer(&desc, NULL, &g_pIB) < 0)
            return;
    }
    
    void    ImGui_ImplOpenGL2_DestroyDeviceObjects()
{
    ImGui_ImplOpenGL2_DestroyFontsTexture();
}

    
        // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsClassic();
    
    
    {    // Create Descriptor Pool
    {
        VkDescriptorPoolSize pool_sizes[] =
        {
            { VK_DESCRIPTOR_TYPE_SAMPLER, 1000 },
            { VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 1000 },
            { VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, 1000 },
            { VK_DESCRIPTOR_TYPE_STORAGE_IMAGE, 1000 },
            { VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER, 1000 },
            { VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER, 1000 },
            { VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1000 },
            { VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1000 },
            { VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC, 1000 },
            { VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC, 1000 },
            { VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT, 1000 }
        };
        VkDescriptorPoolCreateInfo pool_info = {};
        pool_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
        pool_info.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
        pool_info.maxSets = 1000 * IM_ARRAYSIZE(pool_sizes);
        pool_info.poolSizeCount = (uint32_t)IM_ARRAYSIZE(pool_sizes);
        pool_info.pPoolSizes = pool_sizes;
        err = vkCreateDescriptorPool(g_Device, &pool_info, g_Allocator, &g_DescriptorPool);
        check_vk_result(err);
    }
}
    
            // Poll and handle inputs
        // You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
        // - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
        // - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
        // Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
        s3eKeyboardUpdate();
        s3ePointerUpdate();
    
    
    {        // Setup the debug report callback
        VkDebugReportCallbackCreateInfoEXT debug_report_ci = {};
        debug_report_ci.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
        debug_report_ci.flags = VK_DEBUG_REPORT_ERROR_BIT_EXT | VK_DEBUG_REPORT_WARNING_BIT_EXT | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT;
        debug_report_ci.pfnCallback = debug_report;
        debug_report_ci.pUserData = NULL;
        err = vkCreateDebugReportCallbackEXT(g_Instance, &debug_report_ci, g_Allocator, &g_DebugReport);
        check_vk_result(err);
#else
        // Create Vulkan Instance without any debug feature
        err = vkCreateInstance(&create_info, g_Allocator, &g_Instance);
        check_vk_result(err);
#endif
    }
    
    #include 'gtest/gtest.h'
    
    
    {  double ret = x * OBJECT_DIST_RES + OBJECT_DIST_LONG_MIN;
  return ret;
}
    
    
    {
    {
    {}  // namespace msf
}  // namespace localization
}  // namespace apollo

    
    namespace apollo {
namespace hdmap {
DEFINE_string(test_map_file,
              'modules/map/data/sunnyvale_loop/base_map_test.bin',
              'The test map file');
DEFINE_string(
    test_routing_file,
    'modules/map/pnc_map/testdata/sample_sunnyvale_loop_routing.pb.txt',
    'The test map file');
    }
    }
    
      MatrixXd mat_golden(20, 10);
  // clang-format off
  mat_golden <<
    -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     1, -1,  0,  0,  0,  0,  0,  0,  0,  0,
    -1,  1,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  1, -1,  0,  0,  0,  0,  0,  0,  0,
     0, -1,  1,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  1, -1,  0,  0,  0,  0,  0,  0,
     0,  0, -1,  1,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  1, -1,  0,  0,  0,  0,  0,
     0,  0,  0, -1,  1,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  1, -1,  0,  0,  0,  0,
     0,  0,  0,  0, -1,  1,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  1, -1,  0,  0,  0,
     0,  0,  0,  0,  0, -1,  1,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  1, -1,  0,  0,
     0,  0,  0,  0,  0,  0, -1,  1,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  1, -1,  0,
     0,  0,  0,  0,  0,  0,  0, -1,  1,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  1, -1,
     0,  0,  0,  0,  0,  0,  0,  0, -1,  1;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);