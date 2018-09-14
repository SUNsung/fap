
        
        // Asserts that a given statement causes the program to exit, either by
// explicitly exiting with a nonzero exit code or being killed by a
// signal, and emitting error output that matches regex.
# define ASSERT_DEATH(statement, regex) \
    ASSERT_EXIT(statement, ::testing::internal::ExitedUnsuccessfully, regex)
    
    
    {}  // namespace internal
    
    #if 0
    
      explicit FilePath(const std::string& pathname) : pathname_(pathname) {
    Normalize();
  }
    
    // We cannot use std::numeric_limits<T>::max() as it clashes with the max()
// macro defined by <windows.h>.
template <>
inline float FloatingPoint<float>::Max() { return FLT_MAX; }
template <>
inline double FloatingPoint<double>::Max() { return DBL_MAX; }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6>
class ValueArray6 {
 public:
  ValueArray6(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6) : v1_(v1), v2_(v2),
      v3_(v3), v4_(v4), v5_(v5), v6_(v6) {}
    }
    
      // Converts a wide C string to a String using the UTF-8 encoding.
  // NULL will be converted to '(null)'.  If an error occurred during
  // the conversion, '(failed to convert from wide string)' is
  // returned.
  static std::string ShowWideCString(const wchar_t* wide_c_str);
    
    
    {  // <TechnicalDetails>
  //
  // EXPECT_EQ(expected, actual) is the same as
  //
  //   EXPECT_TRUE((expected) == (actual))
  //
  // except that it will print both the expected value and the actual
  // value when the assertion fails.  This is very helpful for
  // debugging.  Therefore in this case EXPECT_EQ is preferred.
  //
  // On the other hand, EXPECT_TRUE accepts any Boolean expression,
  // and is thus more general.
  //
  // </TechnicalDetails>
}
    
      // Copy c'tor
  MyString(const MyString& string) : c_string_(NULL) {
    Set(string.c_string_);
  }
    
    bool IsUserOnly(std::wstring opt)
{
	bool userOnly;
    }
    
    /*! \brief typedef the factory function of operator property */
typedef std::function<OperatorProperty *()> OperatorPropertyFactory;
/*!
 * \brief Registry entry for OperatorProperty factory functions.
 */
struct OperatorPropertyReg
    : public dmlc::FunctionRegEntryBase<OperatorPropertyReg,
                                        OperatorPropertyFactory> {
  /*!
   * \brief Set key_var_num_args
   *  When this is set, the API caller is required to pass in a
   *  argument with key=key_num_args.c_str(), and value=num_args.
   *  num_args is number of positional argument when calling the function.
   *
   *  This is used to pass in length of positional arguments
   *  for operators that can take variable length of input.
   *  Most operators do not need to set this property.
   *
   * \param key the key name to be set
   */
  inline OperatorPropertyReg& set_key_var_num_args(const std::string &key) {  // NOLINT(*)
    this->key_var_num_args = key;
    return *this;
  }
  /*!
   * \brief Check if TypeString of the type matches the registered name
   */
  inline OperatorPropertyReg& check_name() {
    OperatorProperty *p = this->body();
    std::string type = p->TypeString();
    delete p;
    CHECK_EQ(this->name, type)
        << 'Register Name and TypeString mismatch, name=\'' << this->name << '\','
        << ' but TypeString=\'' << type <<'\'';
    return *this;
  }
    }
    
    template <typename Dtype>
void Deleter(::caffe::Layer<Dtype> *ptr) {
}
    
    #include <caffe/util/io.hpp>
namespace dmlc {
namespace parameter {
    }
    }
    
    MXNET_REGISTER_OP_PROPERTY(CaffeLoss, CaffeLossProp)
.describe('Caffe loss layer')
.add_arguments(CaffeLossParam::__FIELDS__());
    
    /*!
 *  Copyright (c) 2016 by Contributors
 * \file cv_api.h
 * \brief C API for opencv
 * \author Junyuan Xie
 */
#include <dmlc/base.h>
#include <mxnet/base.h>
#include <mxnet/ndarray.h>
#include <opencv2/opencv.hpp>
#include 'cv_api.h'
#include '../../src/c_api/c_api_common.h'
    
    template <std::size_t kNumGpus, std::size_t kStreams>
StreamManager<kNumGpus, kStreams>::StreamManager() {
#if MXNET_USE_CUDA
  for (std::size_t i = 0; i < kNumGpus; ++i) {
    gpu_cnt_.at(i) = -1;
  }
  for (auto&& i : gpu_io_streams_) {
    i = nullptr;
  }
#endif  // MXNET_USE_CUDA
}
    
      std::string shape_attr_key;
  if (ret.attrs.count(attr_key_name) != 0) {
    shape_attr_key = ret.GetAttr<std::string>(attr_key_name);
    // erase the provided arguments
    ret.attrs.erase(attr_key_name);
  }
    
            const auto learningRate = float(LearningRate(trainingSampleCount));
        const auto momentum = float(MomentumValueForMB(trainingSampleCount));
        const auto unitGainFactor = UnitGainFactor<float>(trainingSampleCount);
    
    namespace CNTK
{
    const std::wstring versionKey = L'version';
    const std::wstring typeKey = L'type';
    const std::wstring uidKey = L'uid';
    const std::wstring kindKey = L'kind';
    const std::wstring dataTypeKey = L'data_type';
    const std::wstring dynamicAxisKey = L'dynamic_axis';
    const std::wstring isSparseKey = L'is_sparse';
    const std::wstring nameKey = L'name';
    const std::wstring needsGradientKey = L'needs_gradient';
    const std::wstring shapeKey = L'shape';
    const std::wstring valueKey = L'value';
    const std::wstring opKey = L'op';
    const std::wstring attributesKey = L'attributes';
    const std::wstring inputsKey = L'inputs';
    const std::wstring rootKey = L'root';
    const std::wstring functionsKey = L'primitive_functions';
    const std::wstring sampleCountKey = L'sample_count';
    const std::wstring minibatchCountKey = L'minibatchCount'; // TODO: Python-style spelling
    const std::wstring sweepCountKey = L'sweepCount';
    const std::wstring unitKey = L'unit';
    const std::wstring refMBSizeKey = L'ref_mb_size';
    const std::wstring epochSizeKey = L'epoch_size';
    const std::wstring scheduleKey = L'schedule';
    const std::wstring learningRateScheduleKey = L'learnig_rate_schedule';
    const std::wstring smoothedGradientsKey = L'smoothed_gradients';
    const std::wstring noiseInjectionSeedKey = L'noise_injection_seed';
    const std::wstring masterParameterUpdatedKey = L'master_parameter_updated';
    const std::wstring smoothedCountKey = L'smoothed_count';
    const std::wstring stateKey = L'state';
    const std::wstring rngSeedKey = L'rng_seed';
    const std::wstring rngOffsetKey = L'rng_offset';
    const std::wstring blockFunctionCompositeKey = L'block_function_composite';
    const std::wstring blockFunctionOpNameKey = L'block_function_op_name';
    const std::wstring blockFunctionCompositeArgumentsMapKeysKey = L'block_function_composite_arguments_map_keys';
    const std::wstring blockFunctionCompositeArgumentsMapValuesKey = L'block_function_composite_arguments_map_values';
    const std::wstring internalWorkerStateKey = L'internal_worker_state';
    const std::wstring externalWorkerStateKey = L'external_worker_state';
    const std::wstring userDefinedStateKey = L'user_defined_state';
    const std::wstring udfModuleNameKey = L'module';
    const std::wstring udfFactoryMethodNameKey = L'deserialize_method';
    const std::wstring nativeUDFKey = L'native';
    }
    
        // Acquires the mutex. If 'wait' is true and mutex is acquired by someone else then
    // function waits until mutex is released
    // Returns false if !wait and lock cannot be acquired, or in case of a system error that prevents us from acquiring the lock.
    bool Acquire(bool wait)
    {
        assert(m_handle == NULL);
        m_handle = ::CreateMutexA(NULL /*security attr*/, FALSE /*bInitialOwner*/, m_name.c_str());
        if (m_handle == NULL)
        {
            if (!wait)
                return false;   // can't lock due to access permissions: lock already exists, consider not available
            else
                RuntimeError('Acquire: Failed to create named mutex %s: %d.', m_name.c_str(), GetLastError());
        }
    }
    
    // GetMinibatch - Get the next minibatch (features and labels)
// matrices - [in] a map with named matrix types (i.e. 'features', 'labels') mapped to the corresponding matrix,
//             [out] each matrix resized if necessary containing data.
// returns - true if there are more minibatches, false if no more minibatches remain
bool DataReader::GetMinibatch(StreamMinibatchInputs& matrices)
{
    /**
    each reader reads data with number of columns as  nbr_utterances_per_minibatch * mbSize
    notice that readers may differ in their actual mbsize, though it is supposedly to be nbr_utterances_per_minibatch * mbSize.
    To handle with this, readers use their getminibatch function and then return their exact number of utterance in each minbatch.
    This exact number, which is specified for the next reader, is passed to the next reader.
    The next reader then returns the exact number of utterances per minibatch, after calling its getminibatch function.
    Then this returned number is compared against the specified number. If these two numbers are not consistent, return with logic error.
    The logic error can be avoided usually with an exchange of reading orders.
    */
    bool bRet = true;
    //vector<size_t> vNbrSentences;
    size_t nbr = 0;
    for (size_t i = 0; i < m_ioNames.size(); i++)
    {
        if (nbr > 0)
            m_dataReaders[m_ioNames[i]]->SetNumParallelSequences(nbr); // the first one determines the param of all others --TODO: This is flimsy.
        bRet &= m_dataReaders[m_ioNames[i]]->GetMinibatch(matrices);
        size_t thisNbr = m_dataReaders[m_ioNames[i]]->GetNumParallelSequencesForFixingBPTTMode();
        if (nbr == 0)
            nbr = thisNbr;
        else if (thisNbr != nbr)
            LogicError('DataReader::GetMinibatch: The specified number of utterances per minibatch is not consistent to the actual number of utterances per minibatch');
    }
    return bRet;
}
    
    #include <functional>
#include <stdexcept>
    
    template <typename TVector>
inline void RandomShuffleMT(TVector& v, std::mt19937_64& rng)
{
    foreach_index(currentLocation, v)
    {
        // Pick a random location and swap with current one
        const size_t randomLocation = RandMT(0, v.size(), rng);
        std::swap(v[currentLocation], v[randomLocation]);
    }
}
    
            // if dimension not specified we assume two operands' dimensions should match
        Input(0)->ValidateInferInputDimsFrom(TensorShape(rows1));
    
        virtual void Save(File& fstream) const override
    {
        Base::Save(fstream);
        size_t rowsDummy = 0; // compat with old file format
        size_t colsDummy = 0;
        fstream << rowsDummy << colsDummy;
        m_sampleLayout.Save(fstream);
    }
    
    void Speed::setInnerAction(ActionInterval *action)
{
    if (_innerAction != action)
    {
        CC_SAFE_RELEASE(_innerAction);
        _innerAction = action;
        CC_SAFE_RETAIN(_innerAction);
    }
}
    
    
    {private:
    CC_DISALLOW_COPY_AND_ASSIGN(Sequence);
};
    
    class Action;
    
    /**
@brief Progress to percentage.
@details This action show the target node from current percentage to the specified percentage.
        You should specify the destination percentage when creating the action.
@since v0.99.1
*/
class CC_DLL ProgressTo : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes with a duration and a destination percentage.
     * @param duration Specify the duration of the ProgressTo action. It's a value in seconds.
     * @param percent Specify the destination percentage.
     * @return If the creation success, return a pointer of ProgressTo action; otherwise, return nil.
     */
    static ProgressTo* create(float duration, float percent);
    }
    
        /** 
    * @brief Initializes the action with grid size, random seed and duration.
    * @param duration Specify the duration of the TurnOffTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the Initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, unsigned int seed);
    
    /**
@brief The delegate class for ActionTween.
@details If you want to use ActionTween on a node.
        You should implement the node follow these steps:
        1. The node should be inherit from ActionTweenDelegate.
        2. Override the virtual method updateTweenAction in the node.
    
            if ( frames.empty() )
        {
            CCLOG('cocos2d: AnimationCache: None of the frames for animation '%s' were found in the SpriteFrameCache. Animation is not being added to the Animation Cache.', anim.first.c_str());
            continue;
        }
        else if ( frames.size() != frameNameSize )
        {
            CCLOG('cocos2d: AnimationCache: An animation in your dictionary refers to a frame which is not in the SpriteFrameCache. Some or all of the frames for the animation '%s' may be missing.', anim.first.c_str());
        }