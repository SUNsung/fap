
        
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
    
      /** @brief Using the CPU device, compute the layer output. */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) = 0;
  /**
   * @brief Using the GPU device, compute the layer output.
   *        Fall back to Forward_cpu() if unavailable.
   */
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
    // LOG(WARNING) << 'Using CPU code as backup.';
    return Forward_cpu(bottom, top);
  }
    
    
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
    
     protected:
  // Helper functions that abstract away the column buffer and gemm arguments.
  // The last argument in forward_cpu_gemm is so that we can skip the im2col if
  // we just called weight_cpu_gemm with the same input.
  void forward_cpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_cpu_bias(Dtype* output, const Dtype* bias);
  void backward_cpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* output);
  void weight_cpu_gemm(const Dtype* input, const Dtype* output, Dtype*
      weights);
  void backward_cpu_bias(Dtype* bias, const Dtype* input);
    
      Blob<Dtype> mean_, variance_, temp_, x_norm_;
  bool use_global_stats_;
  Dtype moving_average_fraction_;
  int channels_;
  Dtype eps_;
    
    /**
 * @brief Computes a sum of two input Blobs, with the shape of the latter Blob
 *        'broadcast' to match the shape of the former. Equivalent to tiling
 *        the latter Blob, then computing the elementwise sum.
 *
 * The second input may be omitted, in which case it's learned as a parameter
 * of the layer. Note: in case bias and scaling are desired, both operations can
 * be handled by `ScaleLayer` configured with `bias_term: true`.
 */
template <typename Dtype>
class BiasLayer : public Layer<Dtype> {
 public:
  explicit BiasLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
    
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
    
     protected:
  /**
   * @param bottom input Blob vector (length 2+)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_1 @f$
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_2 @f$
   *   -# ...
   *   - K @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x_K @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      the concatenated output @f$
   *        y = [\begin{array}{cccc} x_1 & x_2 & ... & x_K \end{array}]
   *      @f$
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      /**
   * @brief Computes the Contrastive error gradient w.r.t. the inputs.
   *
   * Computes the gradients with respect to the two input vectors (bottom[0] and
   * bottom[1]), but not the similarity label (bottom[2]).
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *      respect to the outputs
   *   -# @f$ (1 \times 1 \times 1 \times 1) @f$
   *      This Blob's diff will simply contain the loss_weight* @f$ \lambda @f$,
   *      as @f$ \lambda @f$ is the coefficient of this layer's output
   *      @f$\ell_i@f$ in the overall Net loss
   *      @f$ E = \lambda_i \ell_i + \mbox{other loss terms}@f$; hence
   *      @f$ \frac{\partial E}{\partial \ell_i} = \lambda_i @f$.
   *      (*Assuming that this top Blob is not used as a bottom (input) by any
   *      other layer of the Net.)
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length 2)
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$a@f$; Backward fills their diff with
   *      gradients if propagate_down[0]
   *   -# @f$ (N \times C \times 1 \times 1) @f$
   *      the features @f$b@f$; Backward fills their diff with gradients if
   *      propagate_down[1]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    { protected:
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual inline bool reverse_dimensions() { return false; }
  virtual void compute_output_shape();
};
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/power_layer.hpp'
    
    
    {	_FORCE_INLINE_ void _set_physics_server(BulletPhysicsServer *p_physicsServer) { physicsServer = p_physicsServer; }
	_FORCE_INLINE_ BulletPhysicsServer *get_physics_server() const { return physicsServer; }
};
#endif

    
    #include 'modules/gdnative/gdnative.h'
    
    
    class LearnerUniversal : public LearnerBase
    {
        std::unordered_map<Parameter, Variable> m_parameter_gradient_map;
        FunctionPtr m_update_func;
    }
    
    
    {        // First make sure that the underlying matrix is on the right device
        auto matrix = GetMatrix<V1ElemType>();
        matrix->TransferToDeviceIfNotThere(AsCNTKImplDeviceId(m_device), true);
        return reinterpret_cast<ElementType*>(matrix->Data());
    }
    
                m_totalSummaries++;
            auto now = std::chrono::high_resolution_clock::now();
            size_t durationMs = std::chrono::duration_cast<std::chrono::milliseconds>(now - m_lastResetTime).count();
    
    
    {        const auto& type = dict[typeKey].Value<std::wstring>();
        if (type != typeValue) 
        {
            const auto& version = GetVersion(dict);
            LogicError('Unexpected '%ls':'%ls' in place of '%ls':'%ls' (%s).',
                       typeKey.c_str(), type.c_str(), typeKey.c_str(), typeValue.c_str(), GetVersionsString<T>(currentVersion, version).c_str());
        }
    }
    
    
    {        // TODO: exclude updating progress writers from profiling?
        UpdateTrainingProgress(m_prevMinibatchNumSamples, m_prevMinibatchAggregateTrainingLossValue,
                               m_prevMinibatchAggregateEvalCriterionValue, computeDevice);
        return result;
    }
    
            static bool IsUDF(const Dictionary& dict);
    
            NDArrayViewPtr Data() const override
        {
            Unpack();
            return Value::Data();
        }
    
    
    {        // Creating Composite Data Reader that allow to combine deserializers.
        // This should be changed to link statically when SGD uses the new interfaces.
        wstring ioName = L'ioName';
        GetReaderProc getReaderProc = (GetReaderProc)Plugin::Load(readerType, GetReaderName(precision));
        m_ioNames.push_back(ioName);
        assert(getReaderProc != nullptr);
        getReaderProc(&m_dataReaders[ioName]);
    }
    else
    {
        wstring readerType = config(L'readerType', L'Cntk.Deserializers.TextFormat');
        wstring ioName = L'ioName';
        // backward support to use only one type of data reader
        // get the name for the reader we want to use, default to CNTKTextFormatReader
        GetReaderProc getReaderProc = (GetReaderProc)Plugin::Load(readerType, GetReaderName(precision));
        m_ioNames.push_back(ioName);
        assert(getReaderProc != nullptr);
        getReaderProc(&m_dataReaders[ioName]);
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    #endif // __ACTION_CCPROGRESS_TIMER_H__

    
    
    {    delete action;
    return nullptr;
}
    
    void PrintUsageAndExit() {
  fprintf(stdout,
          'benchmark'
          ' [--benchmark_list_tests={true|false}]\n'
          '          [--benchmark_filter=<regex>]\n'
          '          [--benchmark_min_time=<min_time>]\n'
          '          [--benchmark_repetitions=<num_repetitions>]\n'
          '          [--benchmark_report_aggregates_only={true|false}\n'
          '          [--benchmark_format=<console|json|csv>]\n'
          '          [--benchmark_out=<filename>]\n'
          '          [--benchmark_out_format=<json|console|csv>]\n'
          '          [--benchmark_color={auto|true|false}]\n'
          '          [--benchmark_counters_tabular={true|false}]\n'
          '          [--v=<verbosity>]\n');
  exit(0);
}
    
    bool IsFlag(const char* str, const char* flag) {
  return (ParseFlagValue(str, flag, true) != nullptr);
}
    
    #ifdef BENCHMARK_OS_WINDOWS
  if ((output_options_ & OO_Color) && &std::cout != &GetOutputStream()) {
    GetErrorStream()
        << 'Color printing is only supported for stdout on windows.'
           ' Disabling color printing\n';
    output_options_ = static_cast< OutputOptions >(output_options_ & ~OO_Color);
  }
#endif
    
    namespace benchmark {
namespace internal {
    }
    }
    
        static BOOST_FORCEINLINE storage_type fetch_add(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
        switch (order)
        {
        case memory_order_relaxed:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD64_RELAXED(&storage, v));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD64_ACQUIRE(&storage, v));
            break;
        case memory_order_release:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD64_RELEASE(&storage, v));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            v = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_EXCHANGE_ADD64(&storage, v));
            break;
        }
        return v;
    }
    
    
    {} // namespace atomics