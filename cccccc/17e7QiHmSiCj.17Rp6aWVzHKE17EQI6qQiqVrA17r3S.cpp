
        
        #endif  // GOOGLE_CUDA

    
    
    {  return call;
}
    
    #ifndef TENSORFLOW_CORE_DISTRIBUTED_RUNTIME_RPC_GRPC_MASTER_SERVICE_IMPL_H_
#define TENSORFLOW_CORE_DISTRIBUTED_RUNTIME_RPC_GRPC_MASTER_SERVICE_IMPL_H_
    
    #include 'tensorflow/core/distributed_runtime/partial_run_mgr.h'
    
    
    {    io::RecordReaderOptions options =
        io::RecordReaderOptions::CreateRecordReaderOptions(compression_type_);
    reader_.reset(new io::RecordReader(file_.get(), options));
    return Status::OK();
  }
    
    #define REGISTER_GPU(T)                                           \
  template void DynamicStitchGPUImpl(                             \
      const Eigen::GpuDevice& gpu_device, const int32 slice_size, \
      const int32 first_dim_size,                                 \
      const CudaDeviceArrayStruct<int32>& input_indices,          \
      const CudaDeviceArrayStruct<const T*>& input_ptrs, T* output);
    
    void convert_dataset(const char* image_filename, const char* label_filename,
        const char* db_path, const string& db_backend) {
  // Open files
  std::ifstream image_file(image_filename, std::ios::in | std::ios::binary);
  std::ifstream label_file(label_filename, std::ios::in | std::ios::binary);
  CHECK(image_file) << 'Unable to open file ' << image_filename;
  CHECK(label_file) << 'Unable to open file ' << label_filename;
  // Read the magic and the meta data
  uint32_t magic;
  uint32_t num_items;
  uint32_t num_labels;
  uint32_t rows;
  uint32_t cols;
    }
    
      caffe::Datum datum;
  datum.set_channels(2);  // one channel for each image in the pair
  datum.set_height(rows);
  datum.set_width(cols);
  LOG(INFO) << 'A total of ' << num_items << ' items.';
  LOG(INFO) << 'Rows: ' << rows << ' Cols: ' << cols;
  for (int itemid = 0; itemid < num_items; ++itemid) {
    int i = caffe::caffe_rng_rand() % num_items;  // pick a random  pair
    int j = caffe::caffe_rng_rand() % num_items;
    read_image(&image_file, &label_file, i, rows, cols,
        pixels, &label_i);
    read_image(&image_file, &label_file, j, rows, cols,
        pixels + (rows * cols), &label_j);
    datum.set_data(pixels, 2*rows*cols);
    if (label_i  == label_j) {
      datum.set_label(1);
    } else {
      datum.set_label(0);
    }
    datum.SerializeToString(&value);
    std::string key_str = caffe::format_int(itemid, 8);
    db->Put(leveldb::WriteOptions(), key_str, value);
  }
    
      /**
   * @brief Initialize the Random number generations if needed by the
   *    transformation.
   */
  void InitRand();
    
    #endif  // CAFFE_BASE_CONVOLUTION_LAYER_HPP_

    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
    /**
 * @brief Convolves the input image with a bank of learned filters,
 *        and (optionally) adds biases.
 *
 *   Caffe convolves by reduction to matrix multiplication. This achieves
 *   high-throughput and generality of input and filter dimensions but comes at
 *   the cost of memory for matrices. This makes use of efficiency in BLAS.
 *
 *   The input is 'im2col' transformed to a channel K' x H x W data matrix
 *   for multiplication with the N x K' x H x W filter matrix to yield a
 *   N' x H x W output matrix that is then 'col2im' restored. K' is the
 *   input channel * kernel height * kernel width dimension of the unrolled
 *   inputs so that the im2col matrix has a column for each input region to
 *   be filtered. col2im restores the output spatial structure by rolling up
 *   the output channel N' columns of the output matrix.
 */
template <typename Dtype>
class ConvolutionLayer : public BaseConvolutionLayer<Dtype> {
 public:
  /**
   * @param param provides ConvolutionParameter convolution_param,
   *    with ConvolutionLayer options:
   *  - num_output. The number of filters.
   *  - kernel_size / kernel_h / kernel_w. The filter dimensions, given by
   *  kernel_size for square filters or kernel_h and kernel_w for rectangular
   *  filters.
   *  - stride / stride_h / stride_w (\b optional, default 1). The filter
   *  stride, given by stride_size for equal dimensions or stride_h and stride_w
   *  for different strides. By default the convolution is dense with stride 1.
   *  - pad / pad_h / pad_w (\b optional, default 0). The zero-padding for
   *  convolution, given by pad for equal dimensions or pad_h and pad_w for
   *  different padding. Input padding is computed implicitly instead of
   *  actually padding.
   *  - dilation (\b optional, default 1). The filter
   *  dilation, given by dilation_size for equal dimensions for different
   *  dilation. By default the convolution has dilation 1.
   *  - group (\b optional, default 1). The number of filter groups. Group
   *  convolution is a method for reducing parameterization by selectively
   *  connecting input and output channels. The input and output channel dimensions must be divisible
   *  by the number of groups. For group @f$ \geq 1 @f$, the
   *  convolutional filters' input and output channels are separated s.t. each
   *  group takes 1 / group of the input channels and makes 1 / group of the
   *  output channels. Concretely 4 input channels, 8 output channels, and
   *  2 groups separate input channels 1-2 and output channels 1-4 into the
   *  first group and input channels 3-4 and output channels 5-8 into the second
   *  group.
   *  - bias_term (\b optional, default true). Whether to have a bias.
   *  - engine: convolution has CAFFE (matrix multiplication) and CUDNN (library
   *    kernels + stream parallelism) engines.
   */
  explicit ConvolutionLayer(const LayerParameter& param)
      : BaseConvolutionLayer<Dtype>(param) {}
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    /**
 * @brief Takes two+ Blobs, interprets last Blob as a selector and
 *  filter remaining Blobs accordingly with selector data (0 means that
 * the corresponding item has to be filtered, non-zero means that corresponding
 * item needs to stay).
 */
template <typename Dtype>
class FilterLayer : public Layer<Dtype> {
 public:
  explicit FilterLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    				gjk_input.m_transformA = area->get_transform__bullet() * area->get_compound_shape()->getChildTransform(y);
				area_shape = static_cast<btConvexShape *>(area->get_compound_shape()->getChildShape(y));
    
    
    {	ADD_PROPERTY(PropertyInfo(Variant::REAL, 'friction'), 'set_friction', 'get_friction');
	ADD_PROPERTY(PropertyInfo(Variant::BOOL, 'rough'), 'set_rough', 'is_rough');
	ADD_PROPERTY(PropertyInfo(Variant::REAL, 'bounce'), 'set_bounce', 'get_bounce');
	ADD_PROPERTY(PropertyInfo(Variant::BOOL, 'absorbent'), 'set_absorbent', 'is_absorbent');
}
    
    	_FORCE_INLINE_ void apply_bias_impulse(const Vector2 &p_pos, const Vector2 &p_j) {
    }
    
    		c.active = true;
#ifdef DEBUG_ENABLED
		if (space->is_debugging_contacts()) {
			space->add_debug_contact(global_A + offset_A);
			space->add_debug_contact(global_B + offset_A);
		}
#endif
		int gather_A = A->can_report_contacts();
		int gather_B = B->can_report_contacts();
    
    	virtual Variant area_get_param(RID p_area, AreaParameter p_param) const;
	virtual Transform2D area_get_transform(RID p_area) const;
	virtual void area_set_monitorable(RID p_area, bool p_monitorable);
	virtual void area_set_collision_mask(RID p_area, uint32_t p_mask);
	virtual void area_set_collision_layer(RID p_area, uint32_t p_layer);
    
    	bool body_collide_shape(RID p_body, int p_body_shape, RID p_shape, const Transform2D &p_shape_xform, const Vector2 &p_motion, Vector2 *r_results, int p_result_max, int &r_result_count) {
		return physics_2d_server->body_collide_shape(p_body, p_body_shape, p_shape, p_shape_xform, p_motion, r_results, p_result_max, r_result_count);
	}
    
    class Physics2DTestMotionResult;
    
    	ground_horizon_color = p_ground_horizon;
	_queue_update();
}
Color ProceduralSky::get_ground_horizon_color() const {
    
    	bool push_back(const T &p_elem);
    
      virtual void onAbortOutstandingRequestEvent(
      const BtAbortOutstandingRequestEvent& event) CXX11_OVERRIDE
  {
  }
    
    bool AbstractOptionHandler::getChangeOptionForReserved() const
{
  return flags_ & FLAG_CHANGE_OPTION_FOR_RESERVED;
}
    
    class HttpConnection;
class SocketCore;
    
    public:
  AbstractProxyResponseCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      const std::shared_ptr<HttpConnection>& httpConnection, DownloadEngine* e,
      const std::shared_ptr<SocketCore>& s);
    
    class ActivePeerConnectionCommand : public Command {
private:
  RequestGroup* requestGroup_;
  std::shared_ptr<BtRuntime> btRuntime_;
  std::shared_ptr<PieceStorage> pieceStorage_;
  std::shared_ptr<PeerStorage> peerStorage_;
  std::shared_ptr<BtAnnounce> btAnnounce_;
    }
    
      int64_t totalLength_;
    
    AnnounceTier::~AnnounceTier() = default;
    
    class ApiCallbackDownloadEventListener : public DownloadEventListener {
public:
  ApiCallbackDownloadEventListener(Session* session,
                                   DownloadEventCallback callback,
                                   void* userData);
  virtual ~ApiCallbackDownloadEventListener();
  virtual void onEvent(DownloadEvent event,
                       const RequestGroup* group) CXX11_OVERRIDE;
    }
    
    
    {} // namespace aria2
    
    
    {  return true;
}
    
    
    {
    {
    {}  // namespace math
}  // namespace common
}  // namespace apollo
    
      std::vector<const Obstacle*> obstacles_;
    
      bool HaveHighConfidence(std::shared_ptr<VisualObject> obj_ptr);
    
     private:
  void BuildPredictedEnvironment(
      const std::vector<const Obstacle*>& obstacles,
      const double ego_vehicle_s,
      const double ego_vehicle_d,
      const std::vector<common::PathPoint>& discretized_reference_line);
    
      const double dx1 = cos_heading_ * half_length_;
  const double dy1 = sin_heading_ * half_length_;
  const double dx2 = sin_heading_ * half_width_;
  const double dy2 = -cos_heading_ * half_width_;
  const double dx3 = box.cos_heading() * box.half_length();
  const double dy3 = box.sin_heading() * box.half_length();
  const double dx4 = box.sin_heading() * box.half_width();
  const double dy4 = -box.cos_heading() * box.half_width();
    
    bool Polygon2d::HasOverlap(const LineSegment2d &line_segment) const {
  CHECK_GE(points_.size(), 3);
  if ((line_segment.start().x() < min_x_ && line_segment.end().x() < min_x_) ||
      (line_segment.start().x() > max_x_ && line_segment.end().x() > max_x_) ||
      (line_segment.start().y() < min_y_ && line_segment.end().y() < min_y_) ||
      (line_segment.start().y() > max_y_ && line_segment.end().y() > max_y_)) {
    return false;
  }
  Vec2d first;
  Vec2d last;
  return GetOverlap(line_segment, &first, &last);
}
    
    bool MultiCamerasProjection::Project(const CarPose &pose,
                                     const ProjectOption &option,
                                     Light *light) const {
  const Eigen::Matrix4d mpose = pose.pose();
  const apollo::hdmap::Signal &tl_info = light->info;
  bool ret = true;
    }
    
    
    {  ReviseOption option(100);
  for (size_t i = 0; i < color_list.size(); ++i) {
    std::vector<LightPtr> light;
    light.emplace_back(new Light);
    light[0]->status.color = TLColor(color_list[i]);
    reviser_->Revise(option, &light);
    option.ts = ts_list[i];
    ASSERT_TRUE(TLColor(gt_list[i]) == light[0]->status.color) << ' i: ' << i;
  }
}
    
      /**
   * @brief Destructor
   */
  virtual ~Planner() = default;