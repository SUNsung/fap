
        
        bool IsUnresponsiveEventSuppressed() {
  return g_suppress_level > 0;
}
    
    namespace atom {
    }
    
      // A new extension RenderViewHost has been registered. The details are
  // the RenderViewHost*.
  NOTIFICATION_EXTENSION_VIEW_REGISTERED,
    
     private:
  // The following methods are implemented by platform-specific implementations
  // of this class.
  //
  // Start/StopListening are called when transitioning between zero and nonzero
  // registered accelerators. StartListening will be called after
  // RegisterAcceleratorImpl and StopListening will be called after
  // UnregisterAcceleratorImpl.
  //
  // For RegisterAcceleratorImpl, implementations return false if registration
  // did not complete successfully.
  virtual void StartListening() = 0;
  virtual void StopListening() = 0;
  virtual bool RegisterAcceleratorImpl(const ui::Accelerator& accelerator) = 0;
  virtual void UnregisterAcceleratorImpl(
      const ui::Accelerator& accelerator) = 0;
    
    // An interface the PrintViewManager uses to notify an observer when the print
// dialog is shown. Register the observer via PrintViewManager::set_observer.
class PrintViewManagerObserver {
 public:
  // Notifies the observer that the print dialog was shown.
  virtual void OnPrintDialogShown() = 0;
    }
    
    // Parse hex color like '#FFF' or '#EFEFEF'
SkColor ParseHexColor(const std::string& name);
    
    void OutputImageComponent::ToFloatPixels(float* out, int stride) const {
  assert(factor_x_ == 1);
  assert(factor_y_ == 1);
  for (int block_y = 0; block_y < height_in_blocks_; ++block_y) {
    for (int block_x = 0; block_x < width_in_blocks_; ++block_x) {
      coeff_t block[kDCTBlockSize];
      GetCoeffBlock(block_x, block_y, block);
      double blockd[kDCTBlockSize];
      for (int k = 0; k < kDCTBlockSize; ++k) {
        blockd[k] = block[k];
      }
      ComputeBlockIDCTDouble(blockd);
      for (int iy = 0; iy < 8; ++iy) {
        for (int ix = 0; ix < 8; ++ix) {
          int y = block_y * 8 + iy;
          int x = block_x * 8 + ix;
          if (y >= height_ || x >= width_) continue;
          out[(y * width_ + x) * stride] = static_cast<float>(blockd[8 * iy + ix] + 128.0);
        }
      }
    }
  }
}
    
    inline void ColorTransformYCbCrToRGB(uint8_t* pixel) {
  int y  = pixel[0];
  int cb = pixel[1];
  int cr = pixel[2];
  pixel[0] = kRangeLimit[y + kCrToRedTable[cr]];
  pixel[1] = kRangeLimit[y +
                         ((kCrToGreenTable[cr] + kCbToGreenTable[cb]) >> 16)];
  pixel[2] = kRangeLimit[y + kCbToBlueTable[cb]];
}
    
        size_t i = 0;      // Points to the next leaf node.
    size_t j = n + 1;  // Points to the next non-leaf node.
    for (size_t k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }
    }
    
    // Computes the DCT (Discrete Cosine Transform) of the 8x8 array in 'block',
// scaled up by a factor of 16. The values in 'block' are laid out row-by-row
// and the result is written to the same memory area.
void ComputeBlockDCT(coeff_t* block);
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
      // Sync + corrupt => no change
  ASSERT_OK(writable_file->Fsync());
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    namespace rocksdb {
    }
    
     private:
  // A version of PartialMerge that actually performs 'partial merging'.
  // Use this to simulate the exact behaviour of the StringAppendOperator.
  bool _AssocPartialMergeMulti(const Slice& key,
                               const std::deque<Slice>& operand_list,
                               std::string* new_value, Logger* logger) const;
    
      bool StatisticsJni::HistEnabledForType(uint32_t type) const {
    if (type >= HISTOGRAM_ENUM_MAX) {
      return false;
    }
    
    if (m_ignore_histograms.count(type) > 0) {
        return false;
    }
    }
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
      // 7. create wal_pool_ioctx
  ret = _rados.ioctx_create(_wal_pool_name.c_str(), _wal_pool_ioctx);
  if (ret < 0) {
    std::cerr << 'couldn't set up ioctx! error ' << ret << std::endl;
    ret = EXIT_FAILURE;
    goto out;
  }
    
    #include <jni.h>
#include <memory>
#include <string>
#include 'rocksjni/jnicallback.h'
#include 'port/port.h'
#include 'rocksdb/env.h'
    
      void Seek(const Slice& target) override {
    StopWatch seek_sw(env_, statistics_, BLOB_DB_SEEK_MICROS);
    RecordTick(statistics_, BLOB_DB_NUM_SEEK);
    iter_->Seek(target);
    while (UpdateBlobValue()) {
      iter_->Next();
    }
  }
    
    void InstrumentedCondVar::WaitInternal() {
#ifndef NDEBUG
  ThreadStatusUtil::TEST_StateDelay(ThreadStatus::STATE_MUTEX_WAIT);
#endif
  cond_.Wait();
}
    
    // Register plugin
REGISTER_CAMERA_TRANSFORMER(FlatCameraTransformer);
    
      // Make sure the points are in ccw order.
  area_ = 0.0;
  for (int i = 1; i < num_points_; ++i) {
    area_ += CrossProd(points_[0], points_[i - 1], points_[i]);
  }
  if (area_ < 0) {
    area_ = -area_;
    std::reverse(points_.begin(), points_.end());
  }
  area_ /= 2.0;
  CHECK_GT(area_, kMathEpsilon);
    
    PathObstacle *PathDecision::AddPathObstacle(const PathObstacle &path_obstacle) {
  std::lock_guard<std::mutex> lock(obstacle_mutex_);
  return path_obstacles_.Add(path_obstacle.Id(), path_obstacle);
}
    
      /**
   * @brief Override function Plan in parent class Planner.
   * @param planning_init_point The trajectory point where planning starts.
   * @param frame Current planning frame.
   * @param reference_line_info The computed reference line.
   * @return OK if planning succeeds; error otherwise.
   */
  apollo::common::Status PlanOnReferenceLine(
      const common::TrajectoryPoint& planning_init_point, Frame* frame,
      ReferenceLineInfo* reference_line_info) override;
  /**
   * @brief Read the recorded trajectory file.
   * @param filename The name of the trajectory file.
   */
  void ReadTrajectoryFile(const std::string& filename);
    
      /**
   * @brief Set lane feature vector
   * @param Obstacle pointer
   *        Lane sequence pointer
   *        Feature container in a vector for receiving the feature values
   */
  void SetLaneFeatureValues(Obstacle* obstacle_ptr,
                            LaneSequence* lane_sequence_ptr,
                            std::vector<double>* feature_values);