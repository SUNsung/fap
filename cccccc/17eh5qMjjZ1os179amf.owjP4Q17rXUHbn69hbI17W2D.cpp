
        
        #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    #include 'tensorflow/core/framework/numeric_types.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/logging.h'
#include 'tensorflow/python/lib/core/numpy.h'
#include 'tensorflow/python/lib/core/safe_ptr.h'
    
    #ifndef TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
#define TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_H_
    
    // Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
    #endif  // TENSORFLOW_STREAM_EXECUTOR_CUDA_CUDA_ACTIVATION_H_

    
    // Computes part of matrix.vector v = Wu. Computes N=64 results.
// The weights *must* be arranged so that consecutive reads from wi
// provides (num_in/kNumInputsPerGroup groups of (N output dim groups of
// (kNumInputsPerGroup inputs))). After that there must be N consecutive
// bias weights, before continuing with any more weights.
// u must be padded out with zeros to
// kNumInputsPerGroup*ceil(num_in/kNumInputsPerGroup) elements.
static void PartialMatrixDotVector64(const int8_t* wi, const double* scales,
                                     const int8_t* u, int num_in, int num_out,
                                     double* v) {
  // Register containing 16-bit ones for horizontal add with 16->32 bit
  // conversion.
  __m256i ones =
      _mm256_set_epi16(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
  __m256i shift_id = _mm256_set_epi32(0, 7, 6, 5, 4, 3, 2, 1);
  // Initialize all the results to 0.
  __m256i result0 = _mm256_setzero_si256();
  __m256i result1 = _mm256_setzero_si256();
  __m256i result2 = _mm256_setzero_si256();
  __m256i result3 = _mm256_setzero_si256();
  __m256i result4 = _mm256_setzero_si256();
  __m256i result5 = _mm256_setzero_si256();
  __m256i result6 = _mm256_setzero_si256();
  __m256i result7 = _mm256_setzero_si256();
  // Iterate over the input (u), one registerful at a time.
  for (int j = 0; j < num_in;) {
    __m256i inputs =
        _mm256_loadu_si256(reinterpret_cast<const __m256i*>(u + j));
    // Inputs are processed in groups of kNumInputsPerGroup, replicated
    // kNumInputGroups times.
    for (int ig = 0; ig < kNumInputGroups && j < num_in;
         ++ig, j += kNumInputsPerGroup) {
      // Replicate the low 32 bits (4 inputs) 8 times.
      __m256i rep_input =
          _mm256_broadcastd_epi32(_mm256_castsi256_si128(inputs));
      // Rotate the inputs in groups of 4, so the next 4 inputs are ready.
      inputs = _mm256_permutevar8x32_epi32(inputs, shift_id);
      __m256i weights, reps;
      // Mul-add, with horizontal add of the 4 inputs to each of the results.
      MultiplyGroup(rep_input, ones, wi, weights, reps, result0);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result1);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result2);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result3);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result4);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result5);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result6);
      MultiplyGroup(rep_input, ones, wi, weights, reps, result7);
    }
  }
  ExtractResults(result0, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result1, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result2, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result3, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result4, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result5, shift_id, wi, scales, kNumOutputsPerRegister, v);
  ExtractResults(result6, shift_id, wi, scales, kNumOutputsPerRegister, v);
  num_out -= kNumOutputsPerRegister * 7;
  ExtractResults(result7, shift_id, wi, scales,
                 std::min(kNumOutputsPerRegister, num_out), v);
}
    
    /// Base class for all tesseract image thresholding classes.
/// Specific classes can add new thresholding methods by
/// overriding ThresholdToPix.
/// Each instance deals with a single image, but the design is intended to
/// be useful for multiple calls to SetRectangle and ThresholdTo* if
/// desired.
class TESS_API ImageThresholder {
 public:
  ImageThresholder();
  virtual ~ImageThresholder();
    }
    
    // Macros for comparing floating-point numbers.
//
//    * {ASSERT|EXPECT}_FLOAT_EQ(expected, actual):
//         Tests that two float values are almost equal.
//    * {ASSERT|EXPECT}_DOUBLE_EQ(expected, actual):
//         Tests that two double values are almost equal.
//    * {ASSERT|EXPECT}_NEAR(v1, v2, abs_error):
//         Tests that v1 and v2 are within the given distance to each other.
//
// Google Test uses ULP-based comparison to automatically pick a default
// error bound that is appropriate for the operands.  See the
// FloatingPoint template class in gtest-internal.h if you are
// interested in the implementation details.
    
    // A function to convert T* into linked_ptr<T>
// Doing e.g. make_linked_ptr(new FooBarBaz<type>(arg)) is a shorter notation
// for linked_ptr<FooBarBaz<type> >(new FooBarBaz<type>(arg))
template <typename T>
linked_ptr<T> make_linked_ptr(T* ptr) {
  return linked_ptr<T>(ptr);
}
    
      // Create template
  std::vector<char> tmp(256);
  auto len = snprintf(tmp.data(), tmp.size(), '%s/testXXXXXX', tmpdir);
  tmp.resize(len);
    
    class GetSubGradient final : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
    }
    
    ```
    
    
    {class GetHalfToFloatGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'FloatToHalf', '', vector<string>{GO(0)}, vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(HalfToFloat, GetHalfToFloatGradient);
NO_GRADIENT(Float16ConstantFill);
} // namespace caffe2

    
    namespace xgboost {
/*!
 * \brief Learner class that does training and prediction.
 *  This is the user facing module of xgboost training.
 *  The Load/Save function corresponds to the model used in python/R.
 *  \code
 *
 *  std::unique_ptr<Learner> learner(new Learner::Create(cache_mats));
 *  learner.Configure(configs);
 *
 *  for (int iter = 0; iter < max_iter; ++iter) {
 *    learner->UpdateOneIter(iter, train_mat);
 *    LOG(INFO) << learner->EvalOneIter(iter, data_sets, data_names);
 *  }
 *
 *  \endcode
 */
class Learner : public rabit::Serializable {
 public:
  /*! \brief virtual destructor */
  ~Learner() override = default;
  /*!
   * \brief set configuration from pair iterators.
   * \param begin The beginning iterator.
   * \param end The end iterator.
   * \tparam PairIter iterator<std::pair<std::string, std::string> >
   */
  template<typename PairIter>
  inline void Configure(PairIter begin, PairIter end);
  /*!
   * \brief Set the configuration of gradient boosting.
   *  User must call configure once before InitModel and Training.
   *
   * \param cfg configurations on both training and model parameters.
   */
  virtual void Configure(const std::vector<std::pair<std::string, std::string> >& cfg) = 0;
  /*!
   * \brief Initialize the model using the specified configurations via Configure.
   *  An model have to be either Loaded or initialized before Update/Predict/Save can be called.
   */
  virtual void InitModel() = 0;
  /*!
   * \brief load model from stream
   * \param fi input stream.
   */
  void Load(dmlc::Stream* fi) override = 0;
  /*!
   * \brief save model to stream.
   * \param fo output stream
   */
  void Save(dmlc::Stream* fo) const override = 0;
  /*!
   * \brief update the model for one iteration
   *  With the specified objective function.
   * \param iter current iteration number
   * \param train reference to the data matrix.
   */
  virtual void UpdateOneIter(int iter, DMatrix* train) = 0;
  /*!
   * \brief Do customized gradient boosting with in_gpair.
   *  in_gair can be mutated after this call.
   * \param iter current iteration number
   * \param train reference to the data matrix.
   * \param in_gpair The input gradient statistics.
   */
  virtual void BoostOneIter(int iter,
                            DMatrix* train,
                            HostDeviceVector<GradientPair>* in_gpair) = 0;
  /*!
   * \brief evaluate the model for specific iteration using the configured metrics.
   * \param iter iteration number
   * \param data_sets datasets to be evaluated.
   * \param data_names name of each dataset
   * \return a string corresponding to the evaluation result
   */
  virtual std::string EvalOneIter(int iter,
                                  const std::vector<DMatrix*>& data_sets,
                                  const std::vector<std::string>& data_names) = 0;
  /*!
   * \brief get prediction given the model.
   * \param data input data
   * \param output_margin whether to only predict margin value instead of transformed prediction
   * \param out_preds output vector that stores the prediction
   * \param ntree_limit limit number of trees used for boosted tree
   *   predictor, when it equals 0, this means we are using all the trees
   * \param pred_leaf whether to only predict the leaf index of each tree in a boosted tree predictor
   * \param pred_contribs whether to only predict the feature contributions
   * \param approx_contribs whether to approximate the feature contributions for speed
   * \param pred_interactions whether to compute the feature pair contributions
   */
  virtual void Predict(DMatrix* data,
                       bool output_margin,
                       HostDeviceVector<bst_float> *out_preds,
                       unsigned ntree_limit = 0,
                       bool pred_leaf = false,
                       bool pred_contribs = false,
                       bool approx_contribs = false,
                       bool pred_interactions = false) const = 0;
    }
    }
    
      size_t PeekRead(void* dptr, size_t size) {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer < size) {
      buffer_ = buffer_.substr(buffer_ptr_, buffer_.length());
      buffer_ptr_ = 0;
      buffer_.resize(size);
      size_t nadd = strm_->Read(dmlc::BeginPtr(buffer_) + nbuffer, size - nbuffer);
      buffer_.resize(nbuffer + nadd);
      std::memcpy(dptr, dmlc::BeginPtr(buffer_), buffer_.length());
      return buffer_.length();
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      return size;
    }
  }
    
      QueryLogItem item;
  item.epoch = 0L;
  item.counter = 0L;
  getDecorations(item.decorations);
  ASSERT_EQ(item.decorations.size(), 2U);
  EXPECT_EQ(item.decorations.at('internal_60_test'), 'test');
    
      ASSERT_TRUE(data.doc().HasMember('events'));
  ASSERT_TRUE(data.doc()['events'].HasMember('environment_variables'));
  ASSERT_TRUE(data.doc()['events']['environment_variables'].IsArray());
  for (const auto& var :
       data.doc()['events']['environment_variables'].GetArray()) {
    std::string value = var.GetString();
    EXPECT_TRUE(value == 'foo' || value == 'bar');
  }
    
      // This looks funky, because the parser is named 'options' and it claims
  // ownership of a single top-level-key called 'options'.
  const auto& doc = c.getParser('options')->getData().doc()['options'];
    
    #include 'osquery/core/conversions.h'
    
    int PlatformProcess::getCurrentPid() {
  return PlatformProcess::getCurrentProcess()->pid();
}
    
      void WaitForFinish() {
    if (thread_send_ != nullptr && thread_send_->joinable()) {
      thread_send_->join();
      thread_send_.reset();
      AINFO << 'Send thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
    if (thread_recv_ != nullptr && thread_recv_->joinable()) {
      thread_recv_->join();
      thread_recv_.reset();
      AINFO << 'Recv thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
  }
    
    /**
 * @namespace apollo::drivers::canbus::can
 * @brief apollo::drivers::canbus::can
 */
namespace apollo {
namespace drivers {
namespace canbus {
namespace can {
    }
    }
    }
    }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
      /**
   * @brief Initialize the fake CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  bool Init(const CANCardParameter &param) override;
    
    #include 'modules/drivers/canbus/can_comm/can_receiver.h'
    
      sender.AddMessage(1, &mpd);
  EXPECT_EQ(sender.Start(), common::ErrorCode::OK);
  EXPECT_TRUE(sender.IsRunning());
  EXPECT_TRUE(sender.enable_log());
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    #include 'gflags/gflags.h'