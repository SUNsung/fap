
        
        
    {
    {    std::vector<T> ret(ret_index.size());
    for (size_t i = 0; i < ret_index.size(); ++i) {
      ret[i] = all_data[ret_index[i]];
    }
    return ret;
  }
  /*!
   * \brief create OperatorProperty
   * \param type_name the type string of the OperatorProperty
   * \return a new constructed OperatorProperty
   */
  static OperatorProperty *Create(const char* type_name);
  /*! \return execution type of the operator */
  virtual ExecType exec_type() const {
    return ExecType::kSync;
  }
};
    
    template <typename Dtype>
class LayerRegistry {
 public:
  static ::caffe::Layer<Dtype> * CreateLayer(const ::caffe::LayerParameter& param) {
    ::caffe::shared_ptr< ::caffe::Layer<Dtype> > ptr =
      ::caffe::LayerRegistry<Dtype>::CreateLayer(param);
    // avoid caffe::layer destructor, which deletes the weights layer owns
    new ::caffe::shared_ptr< ::caffe::Layer<Dtype> >(ptr);
    return ptr.get();
  }
};
    
    MXNET_REGISTER_OP_PROPERTY(CaffeOp, CaffeOpProp)
.describe('Apply caffe operator')
.add_argument('data', 'Symbol[]', 'List of tensors')
.add_arguments(CaffeOpParam::__FIELDS__());
    
    template <std::size_t kNumGpus, std::size_t kStreams>
void StreamManager<kNumGpus, kStreams>::Finalize() {
#if MXNET_USE_CUDA
  for (std::size_t i = 0; i < kNumGpus; ++i) {
    if (gpu_cnt_.at(i) != -1) {
      for (auto&& j : gpu_streams_.at(i)) {
        // Catch exception for CUDA driver shutdown
        MSHADOW_CATCH_ERROR(mshadow::DeleteStream<gpu>(j));
      }
      gpu_cnt_.at(i) = -1;
    }
  }
#endif  // MXNET_USE_CUDA
}
    
    namespace mxnet {
namespace io {
/*!
 * \brief OpenCV based Image augmenter,
 *  The augmenter can contain internal temp state.
 */
class ImageAugmenter {
 public:
  /*!
   *  \brief Initialize the Operator by setting the parameters
   *  This function need to be called before all other functions.
   *  \param kwargs the keyword arguments parameters
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*!
   * \brief augment src image.
   *   this function is not thread safe, and will only be called by one thread
   *   however, it will tries to re-use memory space as much as possible
   * \param src the source image
   * \param prnd pointer to random number generator.
   * \return The processed image.
   */
  virtual cv::Mat Process(const cv::Mat &src, std::vector<float> *label,
                          common::RANDOM_ENGINE *prnd) = 0;
  // virtual destructor
  virtual ~ImageAugmenter() {}
  /*!
   * \brief factory function
   * \param name Name of the augmenter
   * \return The created augmenter.
   */
  static ImageAugmenter* Create(const std::string& name);
};
    }
    }
    
    #include <iostream>
    
    #include <string>
#include <vector>
    
    
    {
    {  // Reset the configuration.
  c.reset();
}
}

    
    class ViewsConfigParserPluginTests : public testing::Test {};
    
      fpack.platform_ = 'posix';
  if (isPlatform(PlatformType::TYPE_POSIX) ||
      isPlatform(PlatformType::TYPE_LINUX) ||
      isPlatform(PlatformType::TYPE_OSX) ||
      isPlatform(PlatformType::TYPE_FREEBSD)) {
    EXPECT_TRUE(fpack.checkPlatform());
  }
    
      /// Get state information for a worker or extension child.
  PerformanceState& getState(const PlatformProcess& child);
  PerformanceState& getState(const std::string& extension);
    
    void Initializer::platformSetup() {
  // Initialize the COM libraries utilized by Windows WMI calls.
  auto ret = ::CoInitializeEx(0, COINIT_MULTITHREADED);
  if (ret != S_OK) {
    ::CoUninitialize();
  }
}
    
    
    {  return doc.toString(json);
}
    
      /// The configuration finished loading or was updated.
  void configure() override;
    
    #include <osquery/events.h>
#include <osquery/flags.h>
#include <osquery/tables.h>
    
    static std::string getNoteRawContent(const std::string& fileName) {
  auto subProc = folly::Subprocess(
      std::vector<std::string>{
          'objdump',
          '--full-content',
          '--section=.note.' + kUSDTSubsectionName,
          fileName,
      },
      folly::Subprocess::Options().pipeStdout().usePath());
  auto output = subProc.communicate();
  auto retCode = subProc.wait();
  CHECK(retCode.exited());
  CHECK(output.second.empty());
  return output.first;
}
    
    // Return the state size needed by RNG, expressed as a number of uint32_t
// integers. Specialized for all templates specified in the C++11 standard.
// For some (mersenne_twister_engine), this is exported as a state_size static
// data member; for others, the standard shows formulas.
    
    #include <boost/regex/pending/unicode_iterator.hpp>
    
    /**
 * This functions is an extension point when FOLLY_HAVE_WEAK_SYMBOLS is true.
 * There is a default no-op implementation provided which can be overrided by
 * linking in a library which provides its own definition.
 *
 * @param codecType   The type of the codec for this counter.
 * @param codecName   The name of the codec for this counter. If the codecName
 *                    is empty it should be defaulted using the codecType.
 * @param level       Optionally the level used to construct the codec.
 * @param key         The key of the counter.
 * @param counterType The type of the counter.
 * @returns           A function to increment the counter for the given key and
 *                    type. It may be an empty folly::Function.
 */
folly::Function<void(double)> makeCompressionCounterHandler(
    folly::io::CodecType codecType,
    folly::StringPiece codecName,
    folly::Optional<int> level,
    CompressionCounterKey key,
    CompressionCounterType counterType);
    
      // one cache shared by all cpus
  rv.numCachesByLevel.push_back(numCpus);