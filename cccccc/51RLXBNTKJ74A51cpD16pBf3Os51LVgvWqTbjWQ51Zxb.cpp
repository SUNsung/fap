
        
        // Get basic type definitions.
#define IPC_MESSAGE_IMPL
#include 'content/nw/src/common/common_message_generator.h'
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    #include 'base/logging.h'
#include 'base/values.h'
#include 'content/nw/src/api/api_messages.h'
#include 'content/public/renderer/render_view.h'
#include 'content/public/renderer/render_thread.h'
#include 'content/public/renderer/v8_value_converter.h'
#include 'third_party/WebKit/public/web/WebView.h'
#include 'third_party/WebKit/public/web/WebLocalFrame.h'
#include 'ui/base/resource/resource_bundle.h'
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    void Menu::Create(const base::DictionaryValue& option) {
  gtk_accel_group = NULL;
  std::string type;
  if (option.GetString('type', &type) && type == 'menubar')
    menu_ = gtk_menu_bar_new();
  else
    menu_ = gtk_menu_new();
    }
    
    void Menu::Destroy() {
}
    
        if (!found) {
      KeyMap::iterator it = keymap.find(upperText);
      if (it != keymap.end()) {
        keyName = it->second;
        found = true;
      }
    }
    
    #include 'content/nw/src/api/menuitem/menuitem.h'
    
     protected:
  ~NwClipboardReadAvailableTypesFunction() override;
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
      private:
    ~NwScreenDisplayObserver() override;
    // gfx::DisplayObserver implementation.
    void OnDisplayMetricsChanged(const display::Display& display, uint32_t changed_metrics) override;
    void OnDisplayAdded(const display::Display& new_display) override;
    void OnDisplayRemoved(const display::Display& old_display) override;
    
      Blob<float>* input_layer = net_->input_blobs()[0];
  num_channels_ = input_layer->channels();
  CHECK(num_channels_ == 3 || num_channels_ == 1)
    << 'Input layer should have 1 or 3 channels.';
  input_geometry_ = cv::Size(input_layer->width(), input_layer->height());
    
    #include <vector>
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the absolute value inputs.
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
   *        \frac{\partial E}{\partial x} =
   *            \mathrm{sign}(x) \frac{\partial E}{\partial y}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
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
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    #endif  // CAFFE_CUDNN_SIGMOID_LAYER_HPP_

    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
};
#endif
    
    
    {}  // namespace caffe
    
    #include 'caffe/layers/neuron_layer.hpp'
    
    /**
 * @brief A layer for learning 'embeddings' of one-hot vector input.
 *        Equivalent to an InnerProductLayer with one-hot vectors as input, but
 *        for efficiency the input is the 'hot' index of each column itself.
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class EmbedLayer : public Layer<Dtype> {
 public:
  explicit EmbedLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {  Dtype inner_scale_, outer_scale_;
};
    
      virtual inline const char* type() const { return 'Filter'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int MinTopBlobs() const { return 1; }
    
    
    {}  // namespace tesseract

    
      /**
   * Returns whether the iterator is positioned at the last element in a
   * given level. (e.g. the last word in a line, the last line in a block)
   *
   *     Here's some two-paragraph example
   *   text.  It starts off innocuously
   *   enough but quickly turns bizarre.
   *     The author inserts a cornucopia
   *   of words to guard against confused
   *   references.
   *
   * Now take an iterator it pointed to the start of 'bizarre.'
   *  it.IsAtFinalElement(RIL_PARA, RIL_SYMBOL) = false
   *  it.IsAtFinalElement(RIL_PARA, RIL_WORD) = true
   *  it.IsAtFinalElement(RIL_BLOCK, RIL_WORD) = false
   */
  virtual bool IsAtFinalElement(PageIteratorLevel level,
                                PageIteratorLevel element) const;
    
      // Returns the covariance.
  double covariance() const {
    if (total_weight > 0.0)
      return (sigxy - sigx * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
  double x_variance() const {
    if (total_weight > 0.0)
      return (sigxx - sigx * sigx / total_weight) / total_weight;
    else
      return 0.0;
  }
  double y_variance() const {
    if (total_weight > 0.0)
      return (sigyy - sigy * sigy / total_weight) / total_weight;
    else
      return 0.0;
  }
    
    
    {  if (!it.empty ()) {
    word = it.data ();
    prev_left = word->bounding_box ().left ();
    it.forward ();
    while (!it.at_first ()) {
      word = it.data ();
      left = word->bounding_box ().left ();
      if (left < prev_left) {
        it.move_to_first ();
                                 //words in BB order
        it.sort (word_comparator);
        break;
      }
      prev_left = left;
      it.forward ();
    }
  }
  for (it.mark_cycle_pt (); !it.cycled_list (); it.forward ()) {
    word = it.data ();
    if (it.at_first ())
      word->set_flag (W_BOL, TRUE);
    else
                                 //not start of line
      word->set_flag (W_BOL, FALSE);
    if (it.at_last ())
      word->set_flag (W_EOL, TRUE);
    else
                                 //not end of line
      word->set_flag (W_EOL, FALSE);
                                 //extend BB as reqd
    bound_box += word->bounding_box ();
  }
}
    
      do {
                                 /*current point fixed */
    if (edgept->flags[FLAGS] & FIXED
                                 /*and next not */
    && (edgept->next->flags[FLAGS] & FIXED) == 0) {
      loopstart = edgept;        /*start of repoly */
      break;
    }
    edgept = edgept->next;       /*next point */
  }
  while (edgept != startpt);     /*until found or finished */
    
    
    {
    {} // namespace asio
} // namespace boost
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
// Nothing to include.
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <atomic>
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <boost/detail/atomic_count.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
      // Return a pointer to the beginning of the unread data.
  mutable_buffer data()
  {
    return boost::asio::buffer(buffer_) + begin_offset_;
  }
    
        // Push the key/value pair on to the stack.
    context(Key* k, Value& v)
      : key_(k),
        value_(&v),
        next_(call_stack<Key, Value>::top_)
    {
      call_stack<Key, Value>::top_ = this;
    }
    
    namespace boost {
namespace date_time {
    }
    }
    
    #endif // BOOST_ASIO_DETAIL_FUNCTION_HPP

    
    #include <boost/asio/detail/pop_options.hpp>
    
      // Re-initialise the hash from the values already contained in the list.
  void rehash(std::size_t num_buckets)
  {
    if (num_buckets == num_buckets_)
      return;
    num_buckets_ = num_buckets;
    BOOST_ASIO_ASSERT(num_buckets_ != 0);
    }
    
    #include <boost/asio/detail/config.hpp>
    
    
    {  // Destroy all operations associated with the descriptor.
  op_queue<operation> ops;
  boost::system::error_code ec;
  for (int i = 0; i < max_ops; ++i)
    op_queue_[i].cancel_operations(descriptor, ops, ec);
}
    
    #endif  // GUETZLI_FDCT_H_

    
    struct HuffmanTableEntry {
  // Initialize the value to an invalid symbol so that we can recognize it
  // when reading the bit stream using a Huffman code with space > 0.
  HuffmanTableEntry() : bits(0), value(0xffff) {}
    }
    
        int unit;
    double value;
    
    TEST_F(YogaTest_HadOverflowTests, hadOverflow_gets_reset_if_not_logger_valid) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 10);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeInsertChild(root, child1, 1);
    }
    
    void Config::setExperimentalFeatureEnabled(int feature, bool enabled)
{
    YGConfigSetExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature), enabled);
}
    
        Value getMinWidth(void) const;
    Value getMinHeight(void) const;
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg, ARGS... args) noexcept {
  __android_log_print(level, tag, msg, args...);
}
    
    
    {}

    
    // That gcc wants both of these prototypes seems mysterious. VC, for
// its part, can't decide which to use (another mystery). Matching of
// template overloads: the final frontier.
#ifndef COMPILER_MSVC
template <typename T, size_t N>
char (&ArraySizeHelper(const T (&array)[N]))[N];
#endif
    
    // Information kept per benchmark we may want to run
struct Benchmark::Instance {
  std::string name;
  Benchmark* benchmark;
  ReportMode report_mode;
  std::vector<int> arg;
  TimeUnit time_unit;
  int range_multiplier;
  bool use_real_time;
  bool use_manual_time;
  BigO complexity;
  BigOFunc* complexity_lambda;
  UserCounters counters;
  const std::vector<Statistics>* statistics;
  bool last_benchmark_instance;
  int repetitions;
  double min_time;
  size_t iterations;
  int threads;  // Number of concurrent threads to us
};
    
    
    {
    {
    {
    {        if (re.Match(instance.name)) {
          instance.last_benchmark_instance = (&args == &family->args_.back());
          benchmarks->push_back(std::move(instance));
        }
      }
    }
  }
  return true;
}
    
      out << indent << '\'caches\': [\n';
  indent = std::string(6, ' ');
  std::string cache_indent(8, ' ');
  for (size_t i = 0; i < info.caches.size(); ++i) {
    auto& CI = info.caches[i];
    out << indent << '{\n';
    out << cache_indent << FormatKV('type', CI.type) << ',\n';
    out << cache_indent << FormatKV('level', static_cast<int64_t>(CI.level))
        << ',\n';
    out << cache_indent
        << FormatKV('size', static_cast<int64_t>(CI.size) * 1000u) << ',\n';
    out << cache_indent
        << FormatKV('num_sharing', static_cast<int64_t>(CI.num_sharing))
        << '\n';
    out << indent << '}';
    if (i != info.caches.size() - 1) out << ',';
    out << '\n';
  }
  indent = std::string(4, ' ');
  out << indent << '],\n';
    
    namespace benchmark {
#ifdef BENCHMARK_OS_WINDOWS
// Window's Sleep takes milliseconds argument.
void SleepForMilliseconds(int milliseconds) { Sleep(milliseconds); }
void SleepForSeconds(double seconds) {
  SleepForMilliseconds(static_cast<int>(kNumMillisPerSecond * seconds));
}
#else   // BENCHMARK_OS_WINDOWS
void SleepForMicroseconds(int microseconds) {
  struct timespec sleep_time;
  sleep_time.tv_sec = microseconds / kNumMicrosPerSecond;
  sleep_time.tv_nsec = (microseconds % kNumMicrosPerSecond) * kNumNanosPerMicro;
  while (nanosleep(&sleep_time, &sleep_time) != 0 && errno == EINTR)
    ;  // Ignore signals and wait for the full interval to elapse.
}
    }