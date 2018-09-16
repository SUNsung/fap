  virtual void Update(HostDeviceVector<GradientPair>* in_gpair, DMatrix* data,
                      gbm::GBLinearModel* model,
                      double sum_instance_weight) = 0;
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
    struct Float8 {
  __m256 x;
  explicit Float8(const __m256& x) : x(x) {}
  explicit Float8(const float& val) : x(_mm256_broadcast_ss(&val)) {}
  explicit Float8(const float* vec) : x(_mm256_loadu_ps(vec)) {}
  Float8() : x() {}
  Float8& operator+=(const Float8& rhs) {
    x = _mm256_add_ps(x, rhs.x);
    return *this;
  }
  Float8& operator-=(const Float8& rhs) {
    x = _mm256_sub_ps(x, rhs.x);
    return *this;
  }
  Float8& operator*=(const Float8& rhs) {
    x = _mm256_mul_ps(x, rhs.x);
    return *this;
  }
  Float8& operator/=(const Float8& rhs) {
    x = _mm256_div_ps(x, rhs.x);
    return *this;
  }
  void Print() {
    float* f = reinterpret_cast<float*>(&x);
    printf('%f %f %f %f %f %f %f %f\n', f[0], f[1], f[2], f[3], f[4], f[5],
           f[6], f[7]);
  }
};
    
        size_t* it = begin;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].left.begin(), row_split_tloc[tid].left.end(), it);
      it += row_split_tloc[tid].left.size();
    }
    size_t* split_pt = it;
    for (bst_omp_uint tid = 0; tid < nthread; ++tid) {
      std::copy(row_split_tloc[tid].right.begin(), row_split_tloc[tid].right.end(), it);
      it += row_split_tloc[tid].right.size();
    }
    
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
    
    namespace osquery {
    }
    
      /// Similarly to the uncontrolled worker restarted, count each extension.
  std::map<std::string, size_t> extension_restarts_;
    
    void Initializer::platformSetup() {
  // Initialize the COM libraries utilized by Windows WMI calls.
  auto ret = ::CoInitializeEx(0, COINIT_MULTITHREADED);
  if (ret != S_OK) {
    ::CoUninitialize();
  }
}
    
    #include <sys/inotify.h>
#include <sys/stat.h>
    
    
    {  return str_helper.str();
}
    
    #include <osquery/sdk.h>
#include <osquery/system.h>