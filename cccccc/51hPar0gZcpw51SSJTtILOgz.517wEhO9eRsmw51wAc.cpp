
        
        namespace caffe {
    }
    
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
    
      /**
   * @brief Computes the error gradient w.r.t. the concatenate inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *        respect to the outputs
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length K), into which the top gradient
   *        @f$ \frac{\partial E}{\partial y} @f$ is deconcatenated back to the
   *        inputs @f$
   *        \left[ \begin{array}{cccc}
   *          \frac{\partial E}{\partial x_1} &
   *          \frac{\partial E}{\partial x_2} &
   *          ... &
   *          \frac{\partial E}{\partial x_K}
   *        \end{array} \right] =
   *        \frac{\partial E}{\partial y}
   *        @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    #include 'caffe/layers/conv_layer.hpp'
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLCNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLCNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false), tempDataSize(0),
        tempData1(NULL), tempData2(NULL) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLCNLayer();
    }
    
    
    {}  // namespace caffe
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of SigmoidLayer.
 */
template <typename Dtype>
class CuDNNSigmoidLayer : public SigmoidLayer<Dtype> {
 public:
  explicit CuDNNSigmoidLayer(const LayerParameter& param)
      : SigmoidLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNSigmoidLayer();
    }
    
    // This structure captures all information needed about a text line for the
// purposes of paragraph detection.  It is meant to be exceedingly light-weight
// so that we can easily test paragraph detection independent of the rest of
// Tesseract.
class RowInfo {
 public:
  // Constant data derived from Tesseract output.
  STRING text;        // the full UTF-8 text of the line.
  bool ltr;           // whether the majority of the text is left-to-right
                      // TODO(eger) make this more fine-grained.
    }
    
    CCStruct::CCStruct() {}
    
    
    {}  // namespace tesseract.
    
    #ifndef TESSERACT_CCUTIL_QRSEQUENCE_H_
#define TESSERACT_CCUTIL_QRSEQUENCE_H_
    
    MFEDGEPT *NewEdgePoint();
    
    // Raw features extracted from a single OCR hypothesis.
// The features are normalized (by outline length or number of unichars as
// appropriate) real-valued quantities with unbounded range and
// unknown distribution.
// Normalization / binarization of these features is done at a later stage.
// Note: when adding new fields to this enum make sure to modify
// kParamsTrainingFeatureTypeName
enum kParamsTrainingFeatureType {
  // Digits
  PTRAIN_DIGITS_SHORT,             // 0
  PTRAIN_DIGITS_MED,               // 1
  PTRAIN_DIGITS_LONG,              // 2
  // Number or pattern (NUMBER_PERM, USER_PATTERN_PERM)
  PTRAIN_NUM_SHORT,                // 3
  PTRAIN_NUM_MED,                  // 4
  PTRAIN_NUM_LONG,                 // 5
  // Document word (DOC_DAWG_PERM)
  PTRAIN_DOC_SHORT,                // 6
  PTRAIN_DOC_MED,                  // 7
  PTRAIN_DOC_LONG,                 // 8
  // Word (SYSTEM_DAWG_PERM, USER_DAWG_PERM, COMPOUND_PERM)
  PTRAIN_DICT_SHORT,               // 9
  PTRAIN_DICT_MED,                 // 10
  PTRAIN_DICT_LONG,                // 11
  // Frequent word (FREQ_DAWG_PERM)
  PTRAIN_FREQ_SHORT,               // 12
  PTRAIN_FREQ_MED,                 // 13
  PTRAIN_FREQ_LONG,                // 14
  PTRAIN_SHAPE_COST_PER_CHAR,      // 15
  PTRAIN_NGRAM_COST_PER_CHAR,      // 16
  PTRAIN_NUM_BAD_PUNC,             // 17
  PTRAIN_NUM_BAD_CASE,             // 18
  PTRAIN_XHEIGHT_CONSISTENCY,      // 19
  PTRAIN_NUM_BAD_CHAR_TYPE,        // 20
  PTRAIN_NUM_BAD_SPACING,          // 21
  PTRAIN_NUM_BAD_FONT,             // 22
  PTRAIN_RATING_PER_CHAR,          // 23
    }
    
      api.SetOutputName(outputbase);
    
      /*
  0: NO adaption
  */
  if (mode == 0) {
    if (tessedit_adaption_debug) tprintf('adaption disabled\n');
    return FALSE;
  }
    
    #endif

    
    void test_reduce_group(std::shared_ptr<thd::DataChannel> data_channel,
                       THDGroup group, std::vector<thd::rank_type> group_ranks) {
  if (g_data_channel_type == 'gloo') {
    return; // XXX: Gloo does not support reduce
  }
    }
    
    using namespace std;
using namespace thd;
using namespace thd::rpc;
    
    template<> AT_API Half convert(double f) {
  return convert<Half, float>(f);
}
template<> AT_API double convert(Half f) {
  return convert<float, Half>(f);
}
    
    #define DEFINE_ACCESSOR(type,name,member) \
  type to##name () const { \
    if (Tag::HAS_t == tag) { \
      return local().to##name(); \
    } else if (Tag::HAS_d == tag) { \
      return checked_convert<type, double>(v.d, #type); \
    } else { \
      return checked_convert<type, int64_t>(v.i, #type); \
    } \
  }
    
      std::unique_ptr<GlooCache> _cache;
    
        std::shared_ptr<GlooCache::algorithm_type> algo;
    if (device == DeviceType::CPU) {
      algo = std::make_shared<::gloo::BroadcastOneToAll<T>>(
        context,
        std::initializer_list<T*>{reinterpret_cast<T*>(input_buffer.get())},
        count,
        src_rank);
#ifdef WITH_CUDA
    } else if (device == DeviceType::CUDA) {
      auto stream = THCState_getCurrentStream(THDGetCudaState());
    }
    
    #include 'python_numbers.h'
#include 'torch/csrc/Exceptions.h'
    
    using namespace at;
    
      Tensor dWeight = at::zeros_like(weight);
  for (int k = 0; k < kw; k++) {
    int iShift = std::max(0, k - real_pad);
    int oShift = std::max(0, real_pad - k);
    int t = std::min(ilen + real_pad - k, olen) - oShift;
    // T(input) * dOutput -> dWeight
    if (t > 0) {
      auto dW = dWeight[k];
      auto dO = dOutput.narrow(0, oShift, t).view({t * batchSize, outputPlanes});
      auto I = input.narrow(0, iShift, t).view({t * batchSize, inputPlanes}).t();
      dW.addmm_(I, dO);
    }
  }
    
    THDTensorDescriptor THDTensorDescriptor_newFromTHCudaShortTensor(THCudaShortTensor *tensor) {
  return at::getType(at::Backend::CUDA, at::ScalarType::Short).unsafeTensorFromTH((void*)tensor, true);
}
    
    #define THCPStorage TH_CONCAT_3(THCP,Real,Storage)
#define THCPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THCPStorageClass TH_CONCAT_3(THCP,Real,StorageClass)
#define THCPStorage_(NAME) TH_CONCAT_4(THCP,Real,Storage_,NAME)
    
    #include <set>
#include <utility>
#include <vector>
#include 'db/dbformat.h'
    
      // Read sequentially.
  ASSERT_OK(env_->NewSequentialFile('/dir/f', &seq_file));
  ASSERT_OK(seq_file->Read(5, &result, scratch)); // Read 'hello'.
  ASSERT_EQ(0, result.compare('hello'));
  ASSERT_OK(seq_file->Skip(1));
  ASSERT_OK(seq_file->Read(1000, &result, scratch)); // Read 'world'.
  ASSERT_EQ(0, result.compare('world'));
  ASSERT_OK(seq_file->Read(1000, &result, scratch)); // Try reading past EOF.
  ASSERT_EQ(0, result.size());
  ASSERT_OK(seq_file->Skip(100)); // Try to skip past end of file.
  ASSERT_OK(seq_file->Read(1000, &result, scratch));
  ASSERT_EQ(0, result.size());
  delete seq_file;
    
      // count the keys
  leveldb::Iterator* iter = db->NewIterator(leveldb::ReadOptions());
  size_t num_keys = 0;
  for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
    num_keys++;
  }
  delete iter;
  ASSERT_EQ(kNumKeys, num_keys) << 'Bad number of keys';
    
    
    {  ASSERT_TRUE(!ParseInternalKey(Slice('bar'), &decoded));
}
    
      r['sycall_addr_modified'] = syscall_addr_modified;
  r['text_segment_hash'] = text_segment_hash;
  results.push_back(r);
    
    
    {
    { private:
  friend class InternalRunnable;
  friend class ExtensionsTests;
  friend class DispatcherTests;
};
} // namespace osquery

    
      /// Add a Subscription using a caller Subscription instance.
  static Status addSubscription(const std::string& type_id,
                                const SubscriptionRef& subscription);
    
    /**
 * @brief Create a pid file
 *
 * @return A status object indicating the success or failure of the operation
 */
Status createPidFile();
    
        pt::ptree multi_pack;
    for (const auto& path : paths) {
      std::string content;
      if (!readFile(path, content)) {
        LOG(WARNING) << 'Cannot read multi-pack file: ' << path;
        continue;
      }
    }
    
    
    {        strout += _strcache;
    }
    
    #include 'singleton.h'
    
        void TestFun0();
    void TestFun2()  {__TestFun1(1);}