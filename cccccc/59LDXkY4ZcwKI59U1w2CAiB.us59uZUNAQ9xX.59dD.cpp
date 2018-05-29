
        
        
    {
    {      auto h = handle_.AccessTensor(context)->template flat<string>();
      h(0) = cinfo_.container();
      h(1) = cinfo_.name();
      resource_ = resource;
    }
    if (context->expected_output_dtype(0) == DT_RESOURCE) {
      OP_REQUIRES_OK(context, MakeResourceHandleToOutput(
                                  context, 0, cinfo_.container(), cinfo_.name(),
                                  MakeTypeIndex<T>()));
    } else {
      context->set_output_ref(0, &mu_, handle_.AccessTensor(context));
    }
  }
    
    
    {}  // namespace xla
    
    class SessionFactory {
 public:
  virtual Session* NewSession(const SessionOptions& options) = 0;
  virtual bool AcceptsOptions(const SessionOptions& options) = 0;
    }
    
    #include 'third_party/eigen3/unsupported/Eigen/CXX11/Tensor'
#include 'tensorflow/core/framework/tensor_types.h'
#include 'tensorflow/core/framework/types.h'
#include 'tensorflow/core/kernels/scatter_functor.h'
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    
    {  DynamicStitchKernel<T>
      <<<config.block_count, config.thread_per_block, 0, gpu_device.stream()>>>(
          slice_size, output_size, input_indices, input_ptrs, output);
}
    
    #endif  // TENSORFLOW_FRAMEWORK_TENSOR_SLICE_H_

    
    using caffe::Datum;
using boost::scoped_ptr;
using std::string;
namespace db = caffe::db;
    
    namespace caffe {
    }
    
    namespace caffe {
    }
    
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
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    {}  // namespace caffe
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
    /////////////////////////////////////////////////////////////////////////////
    
    void initNuma() {
  if (getenv('HHVM_DISABLE_NUMA')) {
    return;
  }
  // When linked dynamically numa_init() is called before JEMallocInitializer()
  // numa_init is not exported by libnuma.so so it will be NULL
  // however when linked statically numa_init() is not guaranteed to be called
  // before JEMallocInitializer(), so call it here.
  if (&numa_init) {
    numa_init();
  }
  if (numa_available() < 0) return;
    }
    
    struct DataBlockFull : std::runtime_error {
  std::string name;
    }
    
    bool CurlShareResource::setOption(int option, const Variant& value) {
  if (m_share == nullptr) {
    raise_warning('curl_share_setopt():'
                  ' curl share not created or is already closed');
    return false;
  }
    }
    
    #ifndef incl_HPHP_CURL_SHARE_RESOURCE_H
#define incl_HPHP_CURL_SHARE_RESOURCE_H
    
    /**
 * A Synchronizable object that has multiple conditional variables. The benefit
 * is, notify() can choose to wake up a thread that is more favorable (e.g.,
 * one with stack/heap mapped on huge pages, or one that is recently active).
 */
struct SynchronizableMulti {
  explicit SynchronizableMulti(int size);
  virtual ~SynchronizableMulti() {}
    }
    
    TCA genFuncPrologue(TransID transID, TransKind kind, Func* func, int argc,
                    CodeCache::View code, CGMeta& fixups) {
  auto context = prologue_context(transID, kind, func,
                                  func->getEntryForNumArgs(argc));
  IRUnit unit{context};
  irgen::IRGS env{unit, nullptr};
    }
    
      /**
   * @brief A getter for the message property
   *
   * @return a string representing arbitrary additional information about the
   * success or failure of an operation. On successful operations, the idiom
   * is for the message to be 'OK'
   */
  std::string getMessage() const { return message_; }
    
    class PermissionsPollRunnable : public PermissionsRunnable {
 public:
  PermissionsPollRunnable() : PermissionsRunnable('PermissionsPollRunnable') {}
    }
    
    
    {
    {  // Set the time at now to 2.
  TablePlugin::kCacheStep = 2;
  test.testSetCache(TablePlugin::kCacheStep, TablePlugin::kCacheInterval);
  EXPECT_TRUE(test.testIsCached(5));
  // Now 6 is within the freshness of 2 + 5.
  EXPECT_TRUE(test.testIsCached(6));
  EXPECT_FALSE(test.testIsCached(7));
}
}

    
    namespace osquery {
    }
    
    SEXP XGBoosterDumpModel_R(SEXP handle, SEXP fmap, SEXP with_stats, SEXP dump_format) {
  SEXP out;
  R_API_BEGIN();
  bst_ulong olen;
  const char **res;
  const char *fmt = CHAR(asChar(dump_format));
  CHECK_CALL(XGBoosterDumpModelEx(R_ExternalPtrAddr(handle),
                                CHAR(asChar(fmap)),
                                asInteger(with_stats),
                                fmt,
                                &olen, &res));
  out = PROTECT(allocVector(STRSXP, olen));
  if (!strcmp('json', fmt)) {
    std::stringstream stream;
    stream <<  '[\n';
    for (size_t i = 0; i < olen; ++i) {
      stream << res[i];
      if (i < olen - 1) {
        stream << ',\n';
      } else {
        stream << '\n';
      }
    }
    stream <<  ']';
    SET_STRING_ELT(out, 0, mkChar(stream.str().c_str()));
  } else {
    for (size_t i = 0; i < olen; ++i) {
      std::stringstream stream;
      stream <<  'booster[' << i <<']\n' << res[i];
      SET_STRING_ELT(out, i, mkChar(stream.str().c_str()));
    }
  }
  R_API_END();
  UNPROTECT(1);
  return out;
}
    
          ASSERT_TRUE(input == output);
    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    
    {
    {XGBOOST_REGISTER_LINEAR_UPDATER(ShotgunUpdater, 'shotgun')
    .describe(
        'Update linear model according to shotgun coordinate descent '
        'algorithm.')
    .set_body([]() { return new ShotgunUpdater(); });
}  // namespace linear
}  // namespace xgboost
