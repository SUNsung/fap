
        
        
    {  /// Profile the substitution map storage, for use with LLVM's FoldingSet.
  static void Profile(llvm::FoldingSetNodeID &id,
                      GenericSignature *genericSig,
                      ArrayRef<Type> replacementTypes,
                      ArrayRef<ProtocolConformanceRef> conformances);
};
    
    CacheImpl::ImplTy CacheImpl::create(StringRef Name, const CallBacks &CBs) {
  return new DefaultCache(CBs);
}
    
    static const StringRef SupportedConditionalCompilationTargetEnvironments[] = {
  'simulator',
};
    
    #ifndef DIRECTIONAL_PREPOSITION
#  define DIRECTIONAL_PREPOSITION(Word) PREPOSITION(Word)
#endif
    
      ::UUID uuid2;
  memcpy(&uuid2, y.Value, Size);
    
    namespace swift {
namespace importer {
    }
    }
    
    namespace swift {
    }
    
        /** Specify model role to use as ordinal value (defaults to Qt::UserRole) */
    void setRole(int role);
    
    QT_BEGIN_NAMESPACE
class QPaintEvent;
class QTimer;
QT_END_NAMESPACE
    
        BOOST_CHECK_EQUAL(arr[999].getValStr(), '');
    
      /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param datum
   *    Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const Datum& datum);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param datum_vector
   *    A vector of Datum containing the data to be transformed.
   */
  vector<int> InferBlobShape(const vector<Datum> & datum_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *    It uses the first element to infer the shape of the blob.
   *
   * @param mat_vector
   *    A vector of Mat containing the data to be transformed.
   */
#ifdef USE_OPENCV
  vector<int> InferBlobShape(const vector<cv::Mat> & mat_vector);
  /**
   * @brief Infers the shape of transformed_blob will have when
   *    the transformation is applied to the data.
   *
   * @param cv_img
   *    cv::Mat containing the data to be transformed.
   */
  vector<int> InferBlobShape(const cv::Mat& cv_img);
#endif  // USE_OPENCV
    
    
  /// @brief Not implemented -- AccuracyLayer cannot be used as a loss.
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    for (int i = 0; i < propagate_down.size(); ++i) {
      if (propagate_down[i]) { NOT_IMPLEMENTED; }
    }
  }
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    
    {}  // namespace caffe
    
    #endif  // CAFFE_BATCHNORM_LAYER_HPP_

    
    /**
 * @brief Takes at least two Blob%s and concatenates them along either the num
 *        or channel dimension, outputting the result.
 */
template <typename Dtype>
class ConcatLayer : public Layer<Dtype> {
 public:
  explicit ConcatLayer(const LayerParameter& param)
      : Layer<Dtype>(param) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    }
    
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
    
    #include <folly/Benchmark.h>
    
    vector<detail::BenchmarkResult> resultsFromFile(const std::string& filename) {
  string content;
  readFile(filename.c_str(), content);
  vector<detail::BenchmarkResult> ret;
  benchmarkResultsFromDynamic(parseJson(content), ret);
  return ret;
}
    
        // Check address information of the tracepoint
    intptr_t probeAddr = getAddr(note, pos);
    CHECK_GT(probeAddr, 0);
    remaining -= kAddrWidth;
    
    /**
 * Debug string for an exception: include type and what(), if
 * defined.
 */
inline fbstring exceptionStr(const std::exception& e) {
#ifdef FOLLY_HAS_RTTI
  fbstring rv(demangle(typeid(e)));
  rv += ': ';
#else
  fbstring rv('Exception (no RTTI available): ');
#endif
  rv += e.what();
  return rv;
}
    
    namespace folly {
    }
    
    /**
 * Reads sizeof(T) bytes, and returns false if not enough bytes are available.
 * Returns true if the first n bytes are equal to prefix when interpreted as
 * a little endian T.
 */
template <typename T>
typename std::enable_if<std::is_unsigned<T>::value, bool>::type
dataStartsWithLE(const IOBuf* data, T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  T value;
  Cursor cursor{data};
  if (!cursor.tryReadLE(value)) {
    return false;
  }
  const T mask = n == sizeof(T) ? T(-1) : (T(1) << (8 * n)) - 1;
  return prefix == (value & mask);
}
    
    #if FOLLY_HAVE_LIBZ
    
    /// Returns the best real CacheLocality information available
static CacheLocality getSystemLocalityInfo() {
  if (kIsLinux) {
    try {
      return CacheLocality::readFromSysfs();
    } catch (...) {
      // keep trying
    }
  }
    }
    
    /**
 * This class creates core-local caches for a given shared_ptr, to
 * mitigate contention when acquiring/releasing it.
 *
 * It has the same thread-safety guarantees as shared_ptr: it is safe
 * to concurrently call get(), but reset()s must be synchronized with
 * reads and other resets().
 *
 * @author Giuseppe Ottaviano <ott@fb.com>
 */
template <class T, size_t kNumSlots = 64>
class CoreCachedSharedPtr {
 public:
  explicit CoreCachedSharedPtr(const std::shared_ptr<T>& p = nullptr) {
    reset(p);
  }
    }