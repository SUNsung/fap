
        
        #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      /// @brief The spatial dimensions of a filter kernel.
  Blob<int> kernel_shape_;
  /// @brief The spatial dimensions of the stride.
  Blob<int> stride_;
  /// @brief The spatial dimensions of the padding.
  Blob<int> pad_;
  /// @brief The spatial dimensions of the dilation.
  Blob<int> dilation_;
  /// @brief The spatial dimensions of the convolution input.
  Blob<int> conv_input_shape_;
  /// @brief The spatial dimensions of the col_buffer.
  vector<int> col_buffer_shape_;
  /// @brief The spatial dimensions of the output.
  vector<int> output_shape_;
  const vector<int>* bottom_shape_;
    
    #ifdef USE_CUDNN
/*
 * @brief cuDNN implementation of PoolingLayer.
 *        Fallback to PoolingLayer for CPU mode.
*/
template <typename Dtype>
class CuDNNPoolingLayer : public PoolingLayer<Dtype> {
 public:
  explicit CuDNNPoolingLayer(const LayerParameter& param)
      : PoolingLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNPoolingLayer();
  // Currently, cuDNN does not support the extra top blob.
  virtual inline int MinTopBlobs() const { return -1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    }
    
    namespace caffe {
    }
    
      virtual inline const char* type() const { return 'Eltwise'; }
  virtual inline int MinBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
      // The user space daemon is requesting a new circular queue.
  // Make sure the requested size is within sane size bounds.
  if (size > MAX_KMEM || size < MIN_KMEM) {
    err = -EINVAL;
    goto error_exit;
  }
    
    #include <osquery/config.h>
#include <osquery/database.h>
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
    TEST_F(ProcessTests, test_constructor) {
  auto p = PlatformProcess(kInvalidPid);
  EXPECT_FALSE(p.isValid());
}
    
     private:
  ProcessState state_{PROCESS_STILL_ALIVE};
  int status_{0};
    
      /// RocksDB logger instance.
  std::shared_ptr<GlogRocksDBLogger> logger_{nullptr};
    
    TEST_F(PrinterTests, test_generate_header) {
  std::map<std::string, size_t> lengths;
  for (const auto& row : q) {
    computeRowLengths(row, lengths);
  }
    }
    
    // set of devices across which HostDeviceVector can be distributed;
// currently implemented as a range, but can be changed later to something else,
// e.g. a bitset
class GPUSet {
 public:
  explicit GPUSet(int start = 0, int ndevices = 0)
    : start_(start), ndevices_(ndevices) {}
  static GPUSet Empty() { return GPUSet(); }
  static GPUSet Range(int start, int ndevices) { return GPUSet(start, ndevices); }
  int Size() const { return ndevices_; }
  int operator[](int index) const {
    CHECK(index >= 0 && index < ndevices_);
    return start_ + index;
  }
  bool IsEmpty() const { return ndevices_ <= 0; }
  int Index(int device) const {
    CHECK(device >= start_ && device < start_ + ndevices_);
    return device - start_;
  }
  bool Contains(int device) const {
    return start_ <= device && device < start_ + ndevices_;
  }
  friend bool operator==(GPUSet a, GPUSet b) {
    return a.start_ == b.start_ && a.ndevices_ == b.ndevices_;
  }
  friend bool operator!=(GPUSet a, GPUSet b) {
    return a.start_ != b.start_ || a.ndevices_ != b.ndevices_;
  }
    }
    
    SEXP XGBoosterUpdateOneIter_R(SEXP handle, SEXP iter, SEXP dtrain) {
  R_API_BEGIN();
  CHECK_CALL(XGBoosterUpdateOneIter(R_ExternalPtrAddr(handle),
                                  asInteger(iter),
                                  R_ExternalPtrAddr(dtrain)));
  R_API_END();
  return R_NilValue;
}
    
    TEST(Metric, NDCG) {
  xgboost::Metric * metric = xgboost::Metric::Create('ndcg');
  ASSERT_STREQ(metric->Name(), 'ndcg');
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 1}, {}));
  EXPECT_NEAR(GetMetricEval(metric, {}, {}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.6509f, 0.001f);
    }
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)