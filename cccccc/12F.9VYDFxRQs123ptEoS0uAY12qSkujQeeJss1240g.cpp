
        
          image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
    #endif  // CAFFE_ARGMAX_LAYER_HPP_

    
    /**
 * @brief Computes @f$ y = x + \log(1 + \exp(-x)) @f$ if @f$ x > 0 @f$;
 *        @f$ y = \log(1 + \exp(x)) @f$ otherwise.
 *
 * @param bottom input Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the inputs @f$ x @f$
 * @param top output Blob vector (length 1)
 *   -# @f$ (N \times C \times H \times W) @f$
 *      the computed outputs @f$
 *      y = \left\{
 *         \begin{array}{ll}
 *            x + \log(1 + \exp(-x)) & \mbox{if } x > 0 \\
 *            \log(1 + \exp(x)) & \mbox{otherwise}
 *         \end{array} \right.
 *      @f$
 */
template <typename Dtype>
class BNLLLayer : public NeuronLayer<Dtype> {
 public:
  explicit BNLLLayer(const LayerParameter& param)
      : NeuronLayer<Dtype>(param) {}
    }
    }
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
  cudnnActivationDescriptor_t activ_desc_;
};
#endif
    
    
    {  bool handles_setup_;
  cudnnHandle_t             handle_;
  cudnnTensorDescriptor_t bottom_desc_;
  cudnnTensorDescriptor_t top_desc_;
};
#endif
    
    namespace caffe {
    }
    
     protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
      /**
   * @brief Computes the error gradient w.r.t. the exp inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (N \times C \times H \times W) @f$
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to computed outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$; Backward fills their diff with
   *      gradients @f$
   *        \frac{\partial E}{\partial x} =
   *            \frac{\partial E}{\partial y} y \alpha \log_e(gamma)
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
    
    {} // namespace cuda
    
    struct Handle {
  cudnnHandle_t handle;
  Handle() : handle(NULL) {
    AT_CUDNN_CHECK(cudnnCreate(&handle));
  }
  ~Handle() {
    if (handle) {
// this is because of something dumb in the ordering of
// destruction. Sometimes atexit, the cuda context (or something)
// would already be destroyed by the time this gets destroyed. It
// happens in fbcode setting. @colesbury and I decided to not destroy
// the handle as a workaround.
//   - @soumith
#ifdef NO_CUDNN_DESTROY_HANDLE
#else
      cudnnDestroy(handle);
#endif
    }
  }
};
    
        // Checks if input strides can be viewed as embedded.
    // See NOTE [ cuFFT Embedded Strides ].
    //
    // TODO: Figure out why windows fails to compile
    //         at::optional<std::vector<long long int>> inembed_opt = at::nullopt;
    //       Then move the following to a helper function.
    std::vector<long long int> inembed(signal_ndim);
    if (!clone_input) {
      auto istrides = input.strides();
      auto last_istride = istrides[signal_ndim];
      clone_input = last_istride <= 0;
      for (auto i = signal_ndim - 1; !clone_input && i > 0 /* inembed[0] doesn't matteer */; i--) {
        auto istride = istrides[i];
        if (istride > 0 && istride % last_istride == 0) {
          inembed[i] = istride / last_istride;
          last_istride = istride;
        } else {
          clone_input = true;
        }
      }
    }
    
    void setSamplerDescriptor(SpatialTransformerDescriptor& desc,
                          cudnnDataType_t dataType,
                          int N, int C, int H, int W)
{
  int inputSize[4] = {N, C, H, W};
  desc.set(dataType, 4, inputSize);
}
    
    Tensor expandScale(const Tensor& t, int64_t dim) {
  std::vector<int64_t> size{ 1, t.numel() };
  while (static_cast<int64_t>(size.size()) < dim) {
    size.emplace_back(1);
  }
  return t.view(size);
}
    
    // ---------------------------------------------------------------------
//
// Bias addition
//
// ---------------------------------------------------------------------
    
      TensorDescriptor idesc{ *input };  // input descriptor
  TensorDescriptor odesc{ *grad_output };  // grad_output descriptor
  TensorDescriptor gdesc{ grad_input_t };  // grad_input descriptor
  SpatialTransformerDescriptor desc; // sampler descriptor
    
        std::set<THCStreamPtr> streams(std::move(block->stream_uses));
    THAssert(block->stream_uses.empty());
    for (auto it = streams.begin(); it != streams.end(); ++it) {
      auto& stream = *it;
    }
    
      // p2pAccessEnabled records if p2p copies are allowed between pairs of
  // devices. Values include '1' (copy allowed), '0' (copy not allowed), and
  // '-1' (unknown).
  // Currently the max number of gpus in P2P group is 8, so if there are more
  // we enable P2P in groups of 8
  state->p2pAccessEnabled = (int**) malloc(sizeof(int*) * numDevices);
  for (int i = 0; i < numDevices; ++i) {
    state->p2pAccessEnabled[i] = (int*) malloc(sizeof(int) * numDevices);
    for (int j = 0; j < numDevices; ++j)
      if (i == j)
        state->p2pAccessEnabled[i][j] = 1;
      else if (j / THC_CUDA_MAX_PEER_SIZE != i / THC_CUDA_MAX_PEER_SIZE)
        state->p2pAccessEnabled[i][j] = 0;
      else
        state->p2pAccessEnabled[i][j] = -1;
  }
    
    THC_API int THCStream_device(THCStream* stream) { 
  return at::cuda::detail::CUDAStream_device(stream);
}
    
    // Create the pybind11 module
PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  // Use the same name as the check functions so error messages make sense
  m.def(cudnn_relu_name, &cudnn_relu, 'CuDNN ReLU');
}

    
    // This is a pass-through wrapper function that does the size check and
// inferences. The actual forward implementation function is called
// at::_fft_with_size which dispatches to _fft_cufft (CUDA) or _fft_mkl (CPU).
static inline Tensor _fft(const Tensor &self, const int64_t signal_ndim,
           const bool complex_input, const bool complex_output,
           const bool inverse, IntList signal_sizes, const bool normalized,
           const bool onesided) {
    }
    
      /* storageOffset */
  if (storageOffset < 0)
    THError('can't set negative storage offset');
  self->storageOffset = storageOffset;
    
    
    {} // namespace at

    
    inline half float16ToHalf(const float16 x) {
  __half_raw hr;
  hr.x = x.x;
  half r(hr);
  return r;
}
    
      /**
   * @brief Gets a human-readable description of the box
   * @return A debug-string
   */
  std::string DebugString() const;
    
      /**
   * @brief Get the extreme points along a heading direction.
   * @param heading The specified heading.
   * @param first The point on the boundary of this polygon with the minimal
   *        projection onto the heading direction.
   * @param last The point on the boundary of this polygon with the maximal
   *        projection onto the heading direction.
   */
  void ExtremePoints(const double heading, Vec2d *const first,
                     Vec2d *const last) const;
    
    
    {  /**
   * @brief Compute a trajectory for execution.
   * @param planning_init_point The trajectory point where planning starts.
   * @param frame Current planning frame.
   * @param reference_line_info The computed reference line.
   * @return OK if planning succeeds; error otherwise.
   */
  virtual apollo::common::Status PlanOnReferenceLine(
      const common::TrajectoryPoint& planning_init_point, Frame* frame,
      ReferenceLineInfo* reference_line_info) = 0;
};
    
      EXPECT_TRUE(
      PathObstacle::MergeLongitudinalDecision(decision_follow, decision_ignore)
          .has_follow());
  EXPECT_TRUE(PathObstacle::MergeLongitudinalDecision(decision_follow,
                                                      decision_overtake)
                  .has_follow());