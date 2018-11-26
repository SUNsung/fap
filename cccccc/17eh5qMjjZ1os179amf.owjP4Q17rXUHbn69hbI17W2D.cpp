
        
        /// @brief Fills a Blob with constant or randomly-generated data.
template <typename Dtype>
class Filler {
 public:
  explicit Filler(const FillerParameter& param) : filler_param_(param) {}
  virtual ~Filler() {}
  virtual void Fill(Blob<Dtype>* blob) = 0;
 protected:
  FillerParameter filler_param_;
};  // class Filler
    
    #ifndef CPU_ONLY
  void forward_gpu_gemm(const Dtype* col_input, const Dtype* weights,
      Dtype* output, bool skip_im2col = false);
  void forward_gpu_bias(Dtype* output, const Dtype* bias);
  void backward_gpu_gemm(const Dtype* input, const Dtype* weights,
      Dtype* col_output);
  void weight_gpu_gemm(const Dtype* col_input, const Dtype* output, Dtype*
      weights);
  void backward_gpu_bias(Dtype* bias, const Dtype* input);
#endif
    
    /**
 * @brief Normalizes the input to have 0-mean and/or unit (1) variance across
 *        the batch.
 *
 * This layer computes Batch Normalization as described in [1]. For each channel
 * in the data (i.e. axis 1), it subtracts the mean and divides by the variance,
 * where both statistics are computed across both spatial dimensions and across
 * the different examples in the batch.
 *
 * By default, during training time, the network is computing global
 * mean/variance statistics via a running average, which is then used at test
 * time to allow deterministic outputs for each input. You can manually toggle
 * whether the network is accumulating or using the statistics via the
 * use_global_stats option. For reference, these statistics are kept in the
 * layer's three blobs: (0) mean, (1) variance, and (2) moving average factor.
 *
 * Note that the original paper also included a per-channel learned bias and
 * scaling factor. To implement this in Caffe, define a `ScaleLayer` configured
 * with `bias_term: true` after each `BatchNormLayer` to handle both the bias
 * and scaling factor.
 *
 * [1] S. Ioffe and C. Szegedy, 'Batch Normalization: Accelerating Deep Network
 *     Training by Reducing Internal Covariate Shift.' arXiv preprint
 *     arXiv:1502.03167 (2015).
 *
 * TODO(dox): thorough documentation for Forward, Backward, and proto params.
 */
template <typename Dtype>
class BatchNormLayer : public Layer<Dtype> {
 public:
  explicit BatchNormLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
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
    
    namespace caffe {
    }
    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
      vector<cudnnTensorDescriptor_t> bottom_descs_, top_descs_;
  cudnnTensorDescriptor_t bias_desc_;
  cudnnFilterDescriptor_t filter_desc_;
  vector<cudnnConvolutionDescriptor_t> conv_descs_;
  int bottom_offset_, top_offset_, bias_offset_;
    
      int size_, pre_pad_;
  Dtype alpha_, beta_, k_;
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
                    if (accumulatedMetric)
                {
                    m_metric.second = accumulatedMetric->AsScalar<double>();
                }
    
    // Same as above but with additional information about required streams.
void DataReader::StartDistributedMinibatchLoop(size_t mbSize, size_t epoch, size_t subsetNum, size_t numSubsets, const std::unordered_set<InputStreamDescription>& streamDescriptions, size_t requestedEpochSamples /* = requestDataSize*/)
{
    for (size_t i = 0; i < m_ioNames.size(); i++)
    {
        m_dataReaders[m_ioNames[i]]->StartDistributedMinibatchLoop(mbSize, epoch, subsetNum, numSubsets, streamDescriptions, requestedEpochSamples);
    }
}
    
    // -----------------------------------------------------------------------
// DynamicAxisNode (/*no input*/)
// This is a holder for MBLayout objects shared across inputs.
// -----------------------------------------------------------------------
template <class ElemType>
class DynamicAxisNode : public ComputationNode<ElemType>, public NumInputs<0>
{
    typedef ComputationNode<ElemType> Base; UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName() { return L'DynamicAxis'; }
public:
    DynamicAxisNode(DEVICEID_TYPE deviceId, const wstring& name)
        : Base(deviceId, name)
    {
        // BUGBUG: In BS, the node name is not known during node instantiation.
        // This may require to pass the display name as a separate parameter.
    }
    }
    
    #include 'internal_macros.h'
#include 'log.h'
    
    namespace benchmark {
namespace {
#ifdef BENCHMARK_OS_WINDOWS
typedef WORD PlatformColorCode;
#else
typedef const char* PlatformColorCode;
#endif
    }
    }
    
    // Function to return an string for the calculated complexity
std::string GetBigOString(BigO complexity) {
  switch (complexity) {
    case oN:
      return 'N';
    case oNSquared:
      return 'N^2';
    case oNCubed:
      return 'N^3';
    case oLogN:
      return 'lgN';
    case oNLogN:
      return 'NlgN';
    case o1:
      return '(1)';
    default:
      return 'f(N)';
  }
}
    
      // Do not print timeLabel on bigO and RMS report
  if (run.report_big_o) {
    Out << GetBigOString(run.complexity);
  } else if (!run.report_rms) {
    Out << GetTimeUnitString(run.time_unit);
  }
  Out << ',';
    
    inline LogType& operator<<(LogType& log, EndLType* m) {
  if (log.out_) {
    *log.out_ << m;
  }
  return log;
}
    
      // State for barrier management
  int phase_number_ = 0;
  int entered_ = 0;  // Number of threads that have entered this barrier
    
    namespace benchmark {
    }
    
    #include <cerrno>
#include <cstdlib>
#include <ctime>