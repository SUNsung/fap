
        
                res->first.func = disk_info.mapping;
        res->first.func_version = disk_info.mapping_version_info.original_reql_version;
        res->first.multi = disk_info.multi;
        res->first.geo = disk_info.geo;
    
                auto it = sindexes.begin();
            auto jt = mirror.begin();
    
    template <$for j, [[typename T$j]]>
internal::ValueArray$i<$for j, [[T$j]]> Values($for j, [[T$j v$j]]) {
  return internal::ValueArray$i<$for j, [[T$j]]>($for j, [[v$j]]);
}
    
    #endif  // GTEST_OS_WINDOWS
    
    GTEST_DECLARE_string_(internal_run_death_test);
    
    
    {  GTEST_DISALLOW_ASSIGN_(NativeArray);
};
    
      // Many linked_ptr operations may change p.link_ for some linked_ptr
  // variable p in the same circle as this object.  Therefore we need
  // to prevent two such operations from occurring concurrently.
  //
  // Note that different types of linked_ptr objects can coexist in a
  // circle (e.g. linked_ptr<Base>, linked_ptr<Derived1>, and
  // linked_ptr<Derived2>).  Therefore we must use a single mutex to
  // protect all linked_ptr objects.  This can create serious
  // contention in production code, but is acceptable in a testing
  // framework.
    
    namespace mxnet {
namespace profiler {
    }
    }
    
    void GPUPooledStorageManager::Free(Storage::Handle handle) {
  // Do nothing if dptr is nullptr. Otherwise, nullptr may be reused
  // which can cause illegal memory access error.
  if (handle.dptr == nullptr) return;
    }
    
    
    {
    {}  // namespace storage
}  // namespace mxnet
    
    
/*!
 * \brief deformable_im2col 2D cpu version.
 * DO NOT call this function directly.
 * Use the wrapper function im2col() instead.
 */
template <typename DType>
inline void deformable_im2col_cpu(const DType* data_im,
                                  const DType* data_offset,
                                  const index_t channels,
                                  const index_t height, const index_t width,
                                  const index_t kernel_h, const index_t kernel_w,
                                  const index_t pad_h, const index_t pad_w,
                                  const index_t stride_h, const index_t stride_w,
                                  const index_t dilation_h, const index_t dilation_w,
                                  const index_t deformable_group,
                                  const index_t height_col, const index_t width_col,
                                  DType* data_col) {
  const index_t channel_size = height * width;
  const index_t offset_size = 2 * kernel_h * kernel_w * height_col * width_col;
  const index_t channel_per_group = channels / deformable_group;
  for (index_t channel = 0; channel < channels; channel++, data_im += channel_size) {
    if (channel % channel_per_group == 0 && channel != 0) {
      data_offset += offset_size;
    }
    for (index_t i = 0; i < kernel_h; i++) {
      for (index_t j = 0; j < kernel_w; j++) {
        index_t input_row = -pad_h + i * dilation_h;
        for (index_t h_col = 0; h_col < height_col; h_col++) {
          index_t input_col = -pad_w + j * dilation_w;
          for (index_t w_col = 0; w_col < width_col; w_col++) {
            index_t offset_h_ptr = ((2 * (i * kernel_w + j)) *
              height_col + h_col) * width_col + w_col;
            index_t offset_w_ptr = offset_h_ptr + height_col * width_col;
            DType im_row = input_row + data_offset[offset_h_ptr];
            DType im_col = input_col + data_offset[offset_w_ptr];
            if (im_row >= 0 && im_col >= 0 && im_row < height && im_col < width) {
              *(data_col++) = im2col_bilinear_cpu(data_im, height, width, im_row, im_col);
            } else {
              *(data_col++) = 0;
            }
            input_col += stride_w;
          }
          input_row += stride_h;
        }
      }
    }
  }
}
    
      auto user_src_iter_memory = null_memory_;
  if (L == 1) {
    user_src_iter_memory = (*concat_iter_memory)[layer_index];
  } else {
    user_src_iter_memory = (*concat_iter_memory)[L + layer_index];
    std::vector<void*> src_l_data;
    std::vector<mkldnn::memory::dims> src_l_dim;
    for (int l = 0; l < L; l++) {
      src_l_data.push_back(reinterpret_cast<DType *>
          ((*concat_iter_memory)[l + layer_index].get_data_handle()));
      src_l_dim.push_back({1, 1, nstates, N, H});
    }
    ConcatData(mkldnn::memory::format::ldsnc, mkldnn::memory::format::ldsnc, src_l_dim,
        {L, 1, nstates, N, H}, mkldnn_dtype, 0, src_l_data, user_src_iter_memory);
  }
  (*hcx_memory)[layer_index].set_data_handle(user_src_iter_memory.get_data_handle());
    
      // limit inference to part of the graph
  uint32_t node_start = 0, node_end = idx.num_nodes();
  if (ret.attrs.count('node_range')) {
    const auto& range = ret.GetAttr<std::pair<uint32_t, uint32_t> >('node_range');
    node_start = range.first;
    node_end = range.second;
    CHECK_GE(node_start, 0);
    CHECK_LE(node_end, idx.num_nodes());
    ret.attrs.erase('node_range');
  }
  uint32_t entry_start = 0, entry_end = idx.num_node_entries();
  if (ret.attrs.count('entry_range')) {
    const auto& range = ret.GetAttr<std::pair<uint32_t, uint32_t> >('entry_range');
    entry_start = range.first;
    entry_end = range.second;
    CHECK_GE(entry_start, 0);
    CHECK_LE(entry_end, idx.num_node_entries());
    ret.attrs.erase('entry_range');
  }
  // populate the node attribute vector
  if (dispatch_mode_name != nullptr) {
    if (ret.attrs.count(dispatch_mode_name) != 0) {
      dispatch_modes = ret.MoveCopyAttr<NodeAttrVector>(dispatch_mode_name);
    } else {
      LOG(FATAL) << 'Node attribute ' << dispatch_mode_name << ' does not exist in the graph';
    }
  }
    
      index_products[ndim] = 1;
    
    MXNET_REGISTER_IO_ITER(CaffeDataIter)
.describe('Create MxNet iterator for a Caffe data layer.')
.add_arguments(CaffeDataParam::__FIELDS__())
.add_arguments(PrefetcherParam::__FIELDS__())
.set_body([]() {
    return new CaffeDataIterWrapper();
});
    
        float DecayCoefficient()
    {
        float f = 1.f;
        switch (m_adjustLearningRateAtBeginningType)
        {
        case AdjustLearningRateAtBeginning::None:
            break;
        case AdjustLearningRateAtBeginning::Linearly:
            f = min(f, max(0.f, (float)(m_adjustCoefficient + (1 - m_adjustCoefficient) / m_adjustMBNumber * m_parameterSyncCounter)));
            break;
        case AdjustLearningRateAtBeginning::Staircase:
            f = min(f, max(0.f, (float)(m_adjustCoefficient * (m_parameterSyncCounter / m_adjustMBNumber + 1))));
            break;
        default:
            break;
        }
        return f;
    }
    
    template <>
std::shared_ptr<IDistGradAggregator<half>> GetSimpleDistGradAggregator<half>(
    const MPIWrapperPtr& mpi,
    bool useAsyncAggregation,
    int deviceId,
    int syncStatsTrace,
    size_t packThresholdSizeInBytes,
    bool useFP16AllReduce)
{
    if (Globals::UseV2Aggregator())
        return std::make_shared<V2SimpleDistGradAggregator<half>>(
            mpi,
            useAsyncAggregation,
            deviceId,
            syncStatsTrace,
            ::CNTK::MPICommunicator(packThresholdSizeInBytes, useFP16AllReduce));
    else
        RuntimeError('SGD - half not supported when useV2Aggregator is false!');
}
    
    void DHTRoutingTableSerializer::setNodes(
    const std::vector<std::shared_ptr<DHTNode>>& nodes)
{
  nodes_ = nodes;
}
    
      void addTask(const std::shared_ptr<DHTTask>& task) { queue_.push_back(task); }
    
    void DHTTaskQueueImpl::executeTask()
{
  A2_LOG_DEBUG('Updating periodicTaskQueue1');
  periodicTaskQueue1_.update();
  A2_LOG_DEBUG('Updating periodicTaskQueue2');
  periodicTaskQueue2_.update();
  A2_LOG_DEBUG('Updating immediateTaskQueue');
  immediateTaskQueue_.update();
}
    
    DHTTokenTracker::DHTTokenTracker()
{
  util::generateRandomData(secret_[0], SECRET_SIZE);
  memcpy(secret_[1], secret_[0], SECRET_SIZE);
}
    
    
    {} // namespace aria2

    
      void GetTwoEllipsePoints(const double position_x, const double position_y,
                           const double direction_x, const double direction_y,
                           const double ellipse_len_x,
                           const double ellipse_len_y,
                           apollo::common::TrajectoryPoint* ellipse_point_1,
                           apollo::common::TrajectoryPoint* ellipse_point_2);
    
      // 2. orientation
  Eigen::Quaterniond q =
      Eigen::AngleAxisd(ins->euler_angles().z() - 90 * DEG_TO_RAD_LOCAL,
                        Eigen::Vector3d::UnitZ()) *
      Eigen::AngleAxisd(-ins->euler_angles().y(), Eigen::Vector3d::UnitX()) *
      Eigen::AngleAxisd(ins->euler_angles().x(), Eigen::Vector3d::UnitY());
    
    #include 'modules/tools/visualizer/main_window.h'
    
    
    {  double normalized_y_diff =
      y_diff * y_diff / params.diff_std_dev_ / params.diff_std_dev_;
  double y_similarity = 1 - ChiSquaredCdf1TableFun(normalized_y_diff);
  y_similarity = BoundedScalePositiveProbability(
      y_similarity, params.bounded_scale_positive_max_p_,
      params.bounded_scale_positive_min_p_);
  return y_similarity;
}
double ComputeRadarCameraHSimilarity(
    const SensorObjectConstPtr& radar, const SensorObjectConstPtr& camera,
    const double size_y,
    const std::vector<Eigen::Vector2d>& radar_box2d_vertices,
    const HSimilarityParams& params) {
  const double camera_height = camera->GetBaseObject()->size(2);
  double height_similarity = params.initial_similarity_;
  if (camera_height > FLT_EPSILON) {
    double min_height_diff = std::numeric_limits<double>::max();
    for (size_t i = 0; i < 4; ++i) {
      double img_car_height = std::abs(radar_box2d_vertices[i + 4].y() -
                                       radar_box2d_vertices[i].y());
      min_height_diff =
          std::min(std::abs(img_car_height - size_y), min_height_diff);
    }
    min_height_diff /= size_y;
    double normalized_min_height_diff = min_height_diff * min_height_diff /
                                        params.diff_std_dev_ /
                                        params.diff_std_dev_;
    height_similarity = 1 - ChiSquaredCdf1TableFun(normalized_min_height_diff);
    height_similarity = ScalePositiveProbability(height_similarity,
                                                 params.scale_positive_max_p_,
                                                 params.scale_positive_th_p_);
  }
  return height_similarity;
}
double ComputeRadarCameraWSimilarity(
    const SensorObjectConstPtr& radar, const double width, const double size_x,
    const std::vector<Eigen::Vector2d>& radar_box2d_vertices,
    const WSimilarityParams& params) {
  std::vector<double> radar_box2d_xs = {
      radar_box2d_vertices[0].x(), radar_box2d_vertices[1].x(),
      radar_box2d_vertices[2].x(), radar_box2d_vertices[3].x()};
  for (double& x : radar_box2d_xs) {
    x = Bound(x, width, 0.0);
  }
  auto min_max_xs =
      std::minmax_element(radar_box2d_xs.begin(), radar_box2d_xs.end());
  double radar_box2d_width = *min_max_xs.second - *min_max_xs.first;
  double width_diff = std::abs(radar_box2d_width - size_x) / size_x;
  double normalized_width_diff =
      width_diff * width_diff / params.diff_std_dev_ / params.diff_std_dev_;
  double width_similarity = 1 - ChiSquaredCdf1TableFun(normalized_width_diff);
  width_similarity = BoundedScalePositiveProbability(
      width_similarity, params.bounded_scale_positive_max_p_,
      params.bounded_scale_positive_min_p_);
  return width_similarity;
}
double ComputeRadarCameraLocSimilarity(const Eigen::Vector3d& radar_ct,
                                       const SensorObjectConstPtr& camera,
                                       const Eigen::Matrix4d& world2camera_pose,
                                       const LocSimilarityParams& params) {
  Eigen::Vector3d camera_ct = camera->GetBaseObject()->center;
  Eigen::Vector3d camera_ct_c =
      (world2camera_pose * camera_ct.homogeneous()).head(3);
  double ct_diff = (radar_ct - camera_ct).norm();
  ct_diff = ct_diff / camera_ct_c.z();
  double ct_similarity = WelshVarLossFun(ct_diff, params.welsh_loss_thresh_,
                                         params.welsh_loss_scale_);
  ct_similarity = ScalePositiveProbability(
      ct_similarity, params.scale_positive_max_p_, params.scale_positive_th_p_);
  return ct_similarity;
}
    
    
    {  return DstManager::Instance()->IsAppAdded(name_) &&
         DstManager::Instance()->IsAppAdded(toic_name_);
}
    
      // @brief: update track data without object
  // @params [in]: timestamp
  // @params [in/out]: history track data
  void UpdateTrackDataWithoutObject(double timestamp,
                                    MlfTrackDataPtr track_data);