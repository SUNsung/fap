
        
          /// The list of regular users from the last run of the checker.
  llvm::SmallVector<SILInstruction *, 16> LifetimeEndingUsers;
    
    #include 'swift/Basic/LLVM.h'
#include 'swift/AST/DiagnosticConsumer.h'
    
    /**
 * @brief Index into the input blob along its first axis.
 *
 * This layer can be used to select, reorder, and even replicate examples in a
 * batch.  The second blob is cast to int and treated as an index into the
 * first axis of the first blob.
 */
template <typename Dtype>
class BatchReindexLayer : public Layer<Dtype> {
 public:
  explicit BatchReindexLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
    {}  // namespace caffe
    
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
/*
 * @brief cuDNN implementation of ConvolutionLayer.
 *        Fallback to ConvolutionLayer for CPU mode.
 *
 * cuDNN accelerates convolution through forward kernels for filtering and bias
 * plus backward kernels for the gradient w.r.t. the filters, biases, and
 * inputs. Caffe + cuDNN further speeds up the computation through forward
 * parallelism across groups and backward parallelism across gradients.
 *
 * The CUDNN engine does not have memory overhead for matrix buffers. For many
 * input and filter regimes the CUDNN engine is faster than the CAFFE engine,
 * but for fully-convolutional models and large inputs the CAFFE engine can be
 * faster as long as it fits in memory.
*/
template <typename Dtype>
class CuDNNConvolutionLayer : public ConvolutionLayer<Dtype> {
 public:
  explicit CuDNNConvolutionLayer(const LayerParameter& param)
      : ConvolutionLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNConvolutionLayer();
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
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
    
    
    {}  // namespace caffe
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs. At training time, we have @f$
   *      y_{\mbox{train}} = \left\{
   *         \begin{array}{ll}
   *            \frac{x}{1 - p} & \mbox{if } u > p \\
   *            0 & \mbox{otherwise}
   *         \end{array} \right.
   *      @f$, where @f$ u \sim U(0, 1)@f$ is generated independently for each
   *      input at each iteration. At test time, we simply have
   *      @f$ y_{\mbox{test}} = \mathbb{E}[y_{\mbox{train}}] = x @f$.
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    }
    
     protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the computed outputs @f$
   *        y = \left\{
   *        \begin{array}{lr}
   *            x                  & \mathrm{if} \; x > 0 \\
   *            \alpha (\exp(x)-1) & \mathrm{if} \; x \le 0
   *        \end{array} \right.
   *      @f$.  
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
      virtual inline const char* type() const { return 'Exp'; }
    
    
    {}  // namespace caffe
    
    /**
 * @brief Converts struct tm to a size_t
 *
 * @param tm_time the time/date to convert to UNIX epoch time
 *
 * @return an int representing the UNIX epoch time of the struct tm
 */
size_t toUnixTime(const struct tm* tm_time);
    
    #include 'osquery/carver/carver.h'
#include 'osquery/core/json.h'
#include 'osquery/filesystem/fileops.h'
#include 'osquery/tables/system/hash.h'
#include 'osquery/tests/test_util.h'
    
    bool isLauncherProcessDead(PlatformProcess& launcher) {
  if (!launcher.isValid()) {
    return true;
  }
    }
    
    bool js_cocos2dx_builder_CCBAnimationManager_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBAnimationManager_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBAnimationManager(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setBaseValue(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getLastCompletedSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getKeyframeCallbacks(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRunningSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDelegate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setSequences(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_debug(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_CCBAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
    
    extern JSClass  *jsb_cocos2d_NavMesh_class;
extern JSObject *jsb_cocos2d_NavMesh_prototype;
    
    
    
    	AddPair()
	{
		m_world->SetGravity(b2Vec2(0.0f,0.0f));
		{
			b2CircleShape shape;
			shape.m_p.SetZero();
			shape.m_radius = 0.1f;
    }
    }
    
    #endif

    
    	void Keyboard(unsigned char key)
	{
		switch (key)
		{
		case 'a':
			m_spring1->SetMotorSpeed(m_speed);
			break;
    }
    }
    
    namespace rabit {
namespace utils {
extern 'C' {
  void (*Printf)(const char *fmt, ...) = Rprintf;
  void (*Assert)(int exp, const char *fmt, ...) = XGBoostAssert_R;
  void (*Check)(int exp, const char *fmt, ...) = XGBoostCheck_R;
  void (*Error)(const char *fmt, ...) = error;
}
}
}
    
    #include <random>
#include <limits>
    
      uint64_t uint64_t2[2] = {1U, 2U};
  EXPECT_EQ(info.group_ptr.size(), 0);
  info.SetInfo('group', uint64_t2, xgboost::kUInt64, 2);
  ASSERT_EQ(info.group_ptr.size(), 3);
  EXPECT_EQ(info.group_ptr[2], 3);
    
    /*!
 * \brief Whether always log console message with time.
 *  It will display like, with timestamp appended to head of the message.
 *  '[21:47:50] 6513x126 matrix with 143286 entries loaded from
 * ../data/agaricus.txt.train'
 */
#ifndef XGBOOST_LOG_WITH_TIME
#define XGBOOST_LOG_WITH_TIME 1
#endif
    
    #define VERIFY_MARKER_END()                                             \
  if (start_pos + marker_len != *pos) {                                 \
    fprintf(stderr, 'Invalid marker length: declared=%d actual=%d\n',   \
            static_cast<int>(marker_len),                               \
            static_cast<int>(*pos - start_pos));                        \
    jpg->error = JPEG_WRONG_MARKER_SIZE;                                \
    return false;                                                       \
  }
    
      // Returns an aggregate distance or similarity value between the baseline
  // image and the image in the last Compare() call (or the baseline image, if
  // Compare() was not called yet).
  // The interpretation of this aggregate value depends on the comparator used.
  virtual float distmap_aggregate() const = 0;
    
    size_t ClusterHistograms(JpegHistogram* histo, size_t* num,
                         int* histo_indexes, uint8_t* depth) {
  memset(depth, 0, *num * JpegHistogram::kSize);
  size_t costs[kMaxComponents];
  for (size_t i = 0; i < *num; ++i) {
    histo_indexes[i] = i;
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    CreateHuffmanTree(histo[i].counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0],
                      &depth[i * JpegHistogram::kSize]);
    costs[i] = (HistogramHeaderCost(histo[i]) +
                HistogramEntropyCost(histo[i],
                                     &depth[i * JpegHistogram::kSize]));
  }
  const size_t orig_num = *num;
  while (*num > 1) {
    size_t last = *num - 1;
    size_t second_last = *num - 2;
    JpegHistogram combined(histo[last]);
    combined.AddHistogram(histo[second_last]);
    std::vector<HuffmanTree> tree(2 * JpegHistogram::kSize + 1);
    uint8_t depth_combined[JpegHistogram::kSize] = { 0 };
    CreateHuffmanTree(combined.counts, JpegHistogram::kSize,
                      kJpegHuffmanMaxBitLength, &tree[0], depth_combined);
    size_t cost_combined = (HistogramHeaderCost(combined) +
                            HistogramEntropyCost(combined, depth_combined));
    if (cost_combined < costs[last] + costs[second_last]) {
      histo[second_last] = combined;
      histo[last] = JpegHistogram();
      costs[second_last] = cost_combined;
      memcpy(&depth[second_last * JpegHistogram::kSize], depth_combined,
             sizeof(depth_combined));
      for (size_t i = 0; i < orig_num; ++i) {
        if (histo_indexes[i] == last) {
          histo_indexes[i] = second_last;
        }
      }
      --(*num);
    } else {
      break;
    }
  }
  size_t total_cost = 0;
  for (size_t i = 0; i < *num; ++i) {
    total_cost += costs[i];
  }
  return (total_cost + 7) / 8;
}
    
    void OutputImage::Downsample(const DownsampleConfig& cfg) {
  if (components_[1].IsAllZero() && components_[2].IsAllZero()) {
    // If the image is already grayscale, nothing to do.
    return;
  }
  if (cfg.use_silver_screen &&
      cfg.u_factor_x == 2 && cfg.u_factor_y == 2 &&
      cfg.v_factor_x == 2 && cfg.v_factor_y == 2) {
    std::vector<uint8_t> rgb = ToSRGB();
    std::vector<std::vector<float> > yuv = RGBToYUV420(rgb, width_, height_);
    SetDownsampledCoefficients(yuv[0], 1, 1, &components_[0]);
    SetDownsampledCoefficients(yuv[1], 2, 2, &components_[1]);
    SetDownsampledCoefficients(yuv[2], 2, 2, &components_[2]);
    return;
  }
  // Get the floating-point precision YUV array represented by the set of
  // DCT coefficients.
  std::vector<std::vector<float> > yuv(3, std::vector<float>(width_ * height_));
  for (int c = 0; c < 3; ++c) {
    components_[c].ToFloatPixels(&yuv[c][0], 1);
  }
    }
    
          // The sentinel node becomes the parent node.
      size_t j_end = 2 * n - k;
      tree[j_end].total_count_ =
          tree[left].total_count_ + tree[right].total_count_;
      tree[j_end].index_left_ = static_cast<int16_t>(left);
      tree[j_end].index_right_or_value_ = static_cast<int16_t>(right);
    
    #include 'guetzli/output_image.h'
    
    void BuildDCHistograms(const JPEGData& jpg, JpegHistogram* histo);
void BuildACHistograms(const JPEGData& jpg, JpegHistogram* histo);
size_t JpegHeaderSize(const JPEGData& jpg, bool strip_metadata);
size_t EstimateJpegDataSize(const int num_components,
                            const std::vector<JpegHistogram>& histograms);
    
    
    {}  // namespace guetzli
    
      flatbuffers::FlatBufferBuilder builder;
  auto name = builder.CreateString('Dog');
  auto sound = builder.CreateString('Bark');
  auto animal_buffer = sample::CreateAnimal(builder, name, sound);
  builder.Finish(animal_buffer);
    
    
    {}  // namespace flatbuffers

    
    // Convert an underscore_based_indentifier in to camelCase.
// Also uppercases the first character if first is true.
std::string MakeCamel(const std::string &in, bool first) {
  std::string s;
  for (size_t i = 0; i < in.length(); i++) {
    if (!i && first)
      s += static_cast<char>(toupper(in[0]));
    else if (in[i] == '_' && i + 1 < in.length())
      s += static_cast<char>(toupper(in[++i]));
    else
      s += in[i];
  }
  return s;
}
    
    #include <map>
#include <cctype>
#include <sstream>
    
      int num_greetings = 10;
  greeter.SayManyHellos(name, num_greetings, [](const std::string &message) {
    std::cerr << 'Greeter received: ' << message << std::endl;
  });
    
    inline const char *SchemaIdentifier() {
  return 'BFBS';
}
    
    // Outputting a Flatbuffer to a string. Tries to conform as close to JSON /
// the output generated by idl_gen_text.cpp.
    
    #endif  // FLATBUFFERS_REGISTRY_H_

    
      // parse schema first, so we can use it to parse the data after
  flatbuffers::Parser parser;
  const char *include_directories[] = { 'samples', nullptr };
  ok = parser.Parse(schemafile.c_str(), include_directories) &&
       parser.Parse(jsonfile.c_str(), include_directories);
  assert(ok);
    
      const std::shared_ptr<Option>& getOption() const;
    
    AbstractHttpServerResponseCommand::AbstractHttpServerResponseCommand(
    cuid_t cuid, const std::shared_ptr<HttpServer>& httpServer,
    DownloadEngine* e, const std::shared_ptr<SocketCore>& socket)
    : Command(cuid),
      e_(e),
      socket_(socket),
      httpServer_(httpServer),
      readCheck_(false),
      writeCheck_(true)
{
  setStatus(Command::STATUS_ONESHOT_REALTIME);
  e_->addSocketForWriteCheck(socket_, this);
}
    
      virtual const std::string& getDefaultValue() const CXX11_OVERRIDE
  {
    return defaultValue_;
  }
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    #include 'common.h'