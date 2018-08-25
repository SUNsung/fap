
        
        #include 'tensorflow/c/eager/c_api.h'
#include 'tensorflow/core/framework/types.pb.h'
#include 'tensorflow/core/platform/types.h'
#include 'tensorflow/python/lib/core/numpy.h'
    
    // Execute a tensorflow operation assuming that all provided inputs are
// correctly formatted (i.e. EagerTensors). If it doesn't find EagerTensors,
// it will simply fail with a NotImplementedError.
//
// The first PyObject* is unused.
// The 'args' PyObject* is meant to be a tuple with the following structure:
//  Item 1: The TFE Context
//  Item 2: device_name: Name of the device on which to execute the operation,
//          or NULL for automatic selection.
//  Item 3: op_name: Name of the TensorFlow op to execute.
//  Item 4: name: An optional name for the operation.
//  Item 5: List representing all callbacks to execute after successful
//  op execute.
//  Item 6 onwards: inputs - This is a list of inputs followed by a list of
//        attrs. It is not necessary for type attrs to be present.
//
// This is named _C since there doesn't seem to be any way to make it visible
// in the SWIG interface without renaming due to the use of the %native
// directive.
PyObject* TFE_Py_FastPathExecute_C(PyObject*, PyObject* args);
    
    
    {}  // namespace tensorflow
    
      // Get original parameter name.
  string GetName() const { return name_; }
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    REGISTER_OP('Invalid')
    .Attr('invalid attr: int32')  // invalid since the name has a space.
    .Doc(R'doc(
An op to test that invalid ops do not successfully generate invalid python code.
)doc');
    
    // Creates a numpy array in 'ret' and copies the content of tensor 't'
// into 'ret'.
Status ConvertTensorToNdarray(const Tensor& t, PyObject** ret);
    
      std::vector<std::string> flash_version_numbers = base::SplitString(
      version, '.', base::TRIM_WHITESPACE, base::SPLIT_WANT_NONEMPTY);
  if (flash_version_numbers.empty())
    flash_version_numbers.push_back('11');
  // |SplitString()| puts in an empty string given an empty string. :(
  else if (flash_version_numbers[0].empty())
    flash_version_numbers[0] = '11';
  if (flash_version_numbers.size() < 2)
    flash_version_numbers.push_back('2');
  if (flash_version_numbers.size() < 3)
    flash_version_numbers.push_back('999');
  if (flash_version_numbers.size() < 4)
    flash_version_numbers.push_back('999');
  // E.g., 'Shockwave Flash 10.2 r154':
  plugin.description = plugin.name + ' ' + flash_version_numbers[0] + '.' +
                       flash_version_numbers[1] + ' r' +
                       flash_version_numbers[2];
  plugin.version = base::JoinString(flash_version_numbers, '.');
  content::WebPluginMimeType swf_mime_type(content::kFlashPluginSwfMimeType,
                                           content::kFlashPluginSwfExtension,
                                           content::kFlashPluginSwfDescription);
  plugin.mime_types.push_back(swf_mime_type);
  content::WebPluginMimeType spl_mime_type(content::kFlashPluginSplMimeType,
                                           content::kFlashPluginSplExtension,
                                           content::kFlashPluginSplDescription);
  plugin.mime_types.push_back(spl_mime_type);
    
    int NodeMain(int argc, char* argv[]);
    
    class BoxLayout : public LayoutManager {
 public:
  static mate::WrappableBase* New(mate::Arguments* args,
                                  views::BoxLayout::Orientation orientation);
    }
    
    #include 'atom/browser/api/atom_api_web_contents.h'
#include 'atom/browser/browser.h'
#include 'atom/browser/native_browser_view.h'
#include 'atom/common/color_util.h'
#include 'atom/common/native_mate_converters/gfx_converter.h'
#include 'atom/common/native_mate_converters/value_converter.h'
#include 'atom/common/node_includes.h'
#include 'atom/common/options_switches.h'
#include 'native_mate/constructor.h'
#include 'native_mate/dictionary.h'
#include 'ui/gfx/geometry/rect.h'
    
    #endif  // ATOM_BROWSER_API_ATOM_API_BROWSER_VIEW_H_

    
    #include 'atom/browser/api/atom_api_browser_window.h'
    
    #include 'atom/browser/api/atom_api_view.h'
#include 'native_mate/handle.h'
#include 'ui/views/controls/button/button.h'
    
    template <>
struct Converter<in_app_purchase::Payment> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const in_app_purchase::Payment& payment) {
    mate::Dictionary dict = mate::Dictionary::CreateEmpty(isolate);
    dict.SetHidden('simple', true);
    dict.Set('productIdentifier', payment.productIdentifier);
    dict.Set('quantity', payment.quantity);
    return dict.GetHandle();
  }
};
    
    #include 'atom/common/node_includes.h'
    
    // Get render process host.
RenderProcessHost* GetRenderProcessHost() {
  RenderProcessHost* render_process_host = NULL;
  std::vector<Shell*> windows = Shell::windows();
  for (size_t i = 0; i < windows.size(); ++i) {
    if (!windows[i]->is_devtools()) {
      render_process_host = windows[i]->web_contents()->GetRenderProcessHost();
      break;
    }
  }
    }
    
      bool delay_destruction() { return delay_destruction_; }
  void set_delay_destruction(bool val) { delay_destruction_ = val; }
  bool pending_destruction() { return pending_destruction_; }
  void set_pending_destruction (bool val) { pending_destruction_ = val; }
 protected:
  int id_;
  bool delay_destruction_;
  bool pending_destruction_;
  base::WeakPtr<ObjectManager> object_manager_;
    
    
    
    
    {}  // namespace nwapi

    
    #include <map>
    
       bool GetAcceleratorForCommandId(
      int command_id,
      ui::Accelerator* accelerator) const override;
    
    #include 'base/run_loop.h'
#include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/message_loop/message_loop_current.h'
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
    
    void MenuItem::OnClick() {
  // Automatically flip checkbox.
  if (type_ == 'checkbox')
    is_checked_ = !is_checked_;
    }
    
    void NwDesktopCaptureMonitor::OnSourceNameChanged(DesktopMediaList* list, int index) {
    DesktopMediaList::Source src = list->GetSource(index);
    std::unique_ptr<base::ListValue> args = nwapi::nw__screen::OnSourceNameChanged::Create(
      src.id.ToString(),
      base::UTF16ToUTF8(src.name));
    DispatchEvent(
      events::HistogramValue::UNKNOWN, 
      nwapi::nw__screen::OnSourceNameChanged::kEventName,
      std::move(args));    
  }
    
    class DescriptorProto : public ::upb::reffed_ptr<const ::upb::MessageDef> {
 public:
  DescriptorProto(const ::upb::MessageDef* m, const void *ref_donor = NULL)
      : reffed_ptr(m, ref_donor) {
    UPB_ASSERT(upbdefs_google_protobuf_DescriptorProto_is(m));
  }
    }
    
    
    {  // Moving to a message on the arena should lead to a copy.
  *message2_on_arena = std::move(message1);
  EXPECT_NE(nested, &message2_on_arena->optional_nested_message());
  TestUtil::ExpectAllFieldsSet(message1);
  TestUtil::ExpectAllFieldsSet(*message2_on_arena);
}
    
        case FieldDescriptor::TYPE_MESSAGE:
    case FieldDescriptor::TYPE_GROUP:
    case FieldDescriptor::TYPE_STRING:
    case FieldDescriptor::TYPE_BYTES:
      return true;
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_field_base.h>
    
    #include <string>
    
      // Getters for boost rng, curand, and cublas handles
  inline static RNG& rng_stream() {
    if (!Get().random_generator_) {
      Get().random_generator_.reset(new RNG());
    }
    return *(Get().random_generator_);
  }
#ifndef CPU_ONLY
  inline static cublasHandle_t cublas_handle() { return Get().cublas_handle_; }
  inline static curandGenerator_t curand_generator() {
    return Get().curand_generator_;
  }
#endif
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
    template <typename Dtype>
class BasePrefetchingDataLayer :
    public BaseDataLayer<Dtype>, public InternalThread {
 public:
  explicit BasePrefetchingDataLayer(const LayerParameter& param);
  // LayerSetUp: implements common data layer setup functionality, and calls
  // DataLayerSetUp to do special data layer setup for individual layer types.
  // This method may not be overridden.
  void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      /**
   * @brief Computes the error gradient w.r.t. the reordered input.
   *
   * @param top output Blob vector (length 1), providing the error gradient
   *        with respect to the outputs
   *   -# @f$ (M \times ...) @f$:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2):
   *   - @f$ \frac{\partial E}{\partial y} @f$ is de-indexed (summing where
   *     required) back to the input x_1
   *   - This layer cannot backprop to x_2, i.e. propagate_down[1] must be
   *     false.
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
    
    {}  // namespace caffe
    
    OPERATOR_SCHEMA(Squeeze)
    .NumInputs(1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .SetDoc(R'DOC(
The *Squeeze* op removes single-dimensional entries from the shape of the input tensor *data,* and produces a single output tensor *squeezed*. The op also takes an argument *dims* with a list of dimensions to squeeze. If the same blob is provided as input and output, the operation is copy-free. This is the exact inverse operation of *ExpandDims* given the same *dims* argument.
    
    
    {  bool RunOnDevice() override;
};
    
    // FreeOp frees the content of the output blob. We allow it to take in input
// blobs purely for the reason that it can 'wait' on the input blobs to be
// produced by some of the earlier operators before a free is called.
template <class Context>
class FreeOp : public Operator<Context> {
 public:
  FreeOp(const OperatorDef& def, Workspace* ws) : Operator<Context>(def, ws) {}
    }
    
    
    {		String name;
		Map<String, Variant> fields;
	};
    
    public:
	Error compile(VS::ShaderMode p_mode, const String &p_code, IdentifierActions *p_actions, const String &p_path, GeneratedCode &r_gen_code);
    
    	void set_socket(int p_sockfd, IP_Address p_host, int p_port, IP::Type p_sock_type);
    
    
    {	~ThreadPosix();
};
    
    	fileAttr = GetFileAttributesW(p_file.c_str());
	if (INVALID_FILE_ATTRIBUTES == fileAttr)
		return false;
    
    /**
	@author Juan Linietsky <reduz@gmail.com>
*/
    
    
    {	return memnew(MutexWindows);
}
    
    	virtual void write_lock();
	virtual void write_unlock();
	virtual Error write_try_lock();
    
    
    {		return true;
	};
    
    
    {	return memnew(ThreadWindows);
}
    
    	static DWORD WINAPI thread_callback(LPVOID userdata);
    
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
    
        my_display_code();
    
                ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    
        // Setup Vulkan binding
    ImGui_ImplVulkan_InitInfo init_info = {};
    init_info.Instance = g_Instance;
    init_info.PhysicalDevice = g_PhysicalDevice;
    init_info.Device = g_Device;
    init_info.QueueFamily = g_QueueFamily;
    init_info.Queue = g_Queue;
    init_info.PipelineCache = g_PipelineCache;
    init_info.DescriptorPool = g_DescriptorPool;
    init_info.Allocator = g_Allocator;
    init_info.CheckVkResultFn = check_vk_result;
    ImGui_ImplVulkan_Init(&init_info, wd->RenderPass);
    
    void ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow*, int button, int action, int /*mods*/)
{
    if (action == GLFW_PRESS && button >= 0 && button < IM_ARRAYSIZE(g_MouseJustPressed))
        g_MouseJustPressed[button] = true;
}
    
    BOOST_FORCEINLINE void signal_fence(memory_order order) BOOST_NOEXCEPT
{
    if (order != memory_order_relaxed)
        BOOST_ATOMIC_DETAIL_COMPILER_BARRIER();
}