// Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
      // Polls the CUDA platform for the event's current status.
  Event::Status PollForStatus();
    
      /**
   * @brief Given the bottom blobs, compute the top blobs and the loss.
   *
   * @param bottom
   *     the input blobs, whose data fields store the input data for this layer
   * @param top
   *     the preshaped output blobs, whose data fields will store this layers'
   *     outputs
   * \return The total loss from the layer.
   *
   * The Forward wrapper calls the relevant device wrapper function
   * (Forward_cpu or Forward_gpu) to compute the top blob values given the
   * bottom blobs.  If the layer has any non-zero loss_weights, the wrapper
   * then computes and returns the loss.
   *
   * Your layer should implement Forward_cpu and (optionally) Forward_gpu.
   */
  inline Dtype Forward(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
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
    
    #endif  // CAFFE_BNLL_LAYER_HPP_

    
      virtual inline const char* type() const { return 'Concat'; }
  virtual inline int MinBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
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
    
      bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnLRNDescriptor_t norm_desc_;
  cudnnTensorDescriptor_t bottom_desc_, top_desc_;
    
    class TBOX;
class UNICHARSET;
    
    
    {  // Expand the box.
  *left = std::max(*left - padding, 0);
  *top = std::max(*top - padding, 0);
  right = std::min(right + padding, rect_width_);
  bottom = std::min(bottom + padding, rect_height_);
  Box* box = boxCreate(*left, *top, right - *left, bottom - *top);
  Pix* grey_pix = pixClipRectangle(original_img, box, nullptr);
  boxDestroy(&box);
  if (level == RIL_BLOCK || level == RIL_PARA) {
    // Clip to the block polygon as well.
    TBOX mask_box;
    Pix* mask = it_->block()->block->render_mask(&mask_box);
    // Copy the mask registered correctly into an image the size of grey_pix.
    int mask_x = *left - mask_box.left();
    int mask_y = *top - (pixGetHeight(original_img) - mask_box.top());
    int width = pixGetWidth(grey_pix);
    int height = pixGetHeight(grey_pix);
    Pix* resized_mask = pixCreate(width, height, 1);
    pixRasterop(resized_mask, std::max(0, -mask_x), std::max(0, -mask_y), width, height,
                PIX_SRC, mask, std::max(0, mask_x), std::max(0, mask_y));
    pixDestroy(&mask);
    pixDilateBrick(resized_mask, resized_mask, 2 * padding + 1,
                   2 * padding + 1);
    pixInvert(resized_mask, resized_mask);
    pixSetMasked(grey_pix, resized_mask, UINT32_MAX);
    pixDestroy(&resized_mask);
  }
  return grey_pix;
}
    
    // The following variables should remain static globals, since they
// are used by debug editor, which uses a single Tesseract instance.
//
// Contains the mappings from unique VC ids to their actual pointers.
static std::map<int, ParamContent*> vcMap;
static int nrParams = 0;
static int writeCommands[2];
    
      /// Pix vs raw, which to use? Pix is the preferred input for efficiency,
  /// since raw buffers are copied.
  /// SetImage for Pix clones its input, so the source pix may be pixDestroyed
  /// immediately after, but may not go away until after the Thresholder has
  /// finished with it.
  void SetImage(const Pix* pix);
    
    namespace tesseract {
    }
    
      // Computes all the cross product distances of the points perpendicular to
  // the given direction, ignoring distances outside of the give distance range,
  // storing the actual (signed) cross products in distances_.
  void ComputeConstrainedDistances(const FCOORD& direction,
                                   double min_dist, double max_dist);
    
    template <$for j, [[typename Generator$j]]>
internal::CartesianProductHolder$i<$for j, [[Generator$j]]> Combine(
    $for j, [[const Generator$j& g$j]]) {
  return internal::CartesianProductHolder$i<$for j, [[Generator$j]]>(
      $for j, [[g$j]]);
}
    
    typedef internal::TimeInMillis TimeInMillis;
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
#define GTEST_PRED2_(pred, v1, v2, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred2Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             pred, \
                                             v1, \
                                             v2), on_failure)
    
      bool operator==(T* p) const { return value_ == p; }
  bool operator!=(T* p) const { return value_ != p; }
  template <typename U>
  bool operator==(linked_ptr<U> const& ptr) const {
    return value_ == ptr.get();
  }
  template <typename U>
  bool operator!=(linked_ptr<U> const& ptr) const {
    return value_ != ptr.get();
  }
    
    template <class Generator1, class Generator2, class Generator3,
    class Generator4, class Generator5, class Generator6, class Generator7,
    class Generator8, class Generator9>
class CartesianProductHolder9 {
 public:
CartesianProductHolder9(const Generator1& g1, const Generator2& g2,
    const Generator3& g3, const Generator4& g4, const Generator5& g5,
    const Generator6& g6, const Generator7& g7, const Generator8& g8,
    const Generator9& g9)
      : g1_(g1), g2_(g2), g3_(g3), g4_(g4), g5_(g5), g6_(g6), g7_(g7), g8_(g8),
          g9_(g9) {}
  template <typename T1, typename T2, typename T3, typename T4, typename T5,
      typename T6, typename T7, typename T8, typename T9>
  operator ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6, T7, T8,
      T9> >() const {
    return ParamGenerator< ::std::tr1::tuple<T1, T2, T3, T4, T5, T6, T7, T8,
        T9> >(
        new CartesianProductGenerator9<T1, T2, T3, T4, T5, T6, T7, T8, T9>(
        static_cast<ParamGenerator<T1> >(g1_),
        static_cast<ParamGenerator<T2> >(g2_),
        static_cast<ParamGenerator<T3> >(g3_),
        static_cast<ParamGenerator<T4> >(g4_),
        static_cast<ParamGenerator<T5> >(g5_),
        static_cast<ParamGenerator<T6> >(g6_),
        static_cast<ParamGenerator<T7> >(g7_),
        static_cast<ParamGenerator<T8> >(g8_),
        static_cast<ParamGenerator<T9> >(g9_)));
  }
    }
    
    
    {  // Single-Delete diagnostics for exceptional situations
  uint64_t num_single_del_fallthru = 0;
  uint64_t num_single_del_mismatch = 0;
};

    
    class DB;
    
    #endif  // !defined(ROCKSDB_LITE) && !defined(OS_WIN)

    
      ////////////////////////////////////////////////////////
  //
  // 'Read Committed' (Monotonic Atomic Views) Example
  //   --Using multiple Snapshots
  //
  ////////////////////////////////////////////////////////
    
    
    {}  // namespace rocksdb

    
      // Restore rate limiter. Used to control transfer speed during restore. If
  // this is not null, restore_rate_limit is ignored.
  // Default: nullptr
  std::shared_ptr<RateLimiter> restore_rate_limiter{nullptr};