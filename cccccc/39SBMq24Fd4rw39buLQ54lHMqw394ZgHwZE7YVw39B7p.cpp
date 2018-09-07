
        
        /// @brief Fills a Blob with uniformly distributed values @f$ x\sim U(a, b) @f$.
template <typename Dtype>
class UniformFiller : public Filler<Dtype> {
 public:
  explicit UniformFiller(const FillerParameter& param)
      : Filler<Dtype>(param) {}
  virtual void Fill(Blob<Dtype>* blob) {
    CHECK(blob->count());
    caffe_rng_uniform<Dtype>(blob->count(), Dtype(this->filler_param_.min()),
        Dtype(this->filler_param_.max()), blob->mutable_cpu_data());
    CHECK_EQ(this->filler_param_.sparse(), -1)
         << 'Sparsity not supported by this Filler.';
  }
};
    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the absolute value inputs.
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
   *        \frac{\partial E}{\partial x} =
   *            \mathrm{sign}(x) \frac{\partial E}{\partial y}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
    
    {  Blob<Dtype> diff_;  // cached for backward pass
  Blob<Dtype> dist_sq_;  // cached for backward pass
  Blob<Dtype> diff_sq_;  // tmp storage for gpu forward pass
  Blob<Dtype> summer_vec_;  // tmp storage for gpu forward pass
};
    
    #include 'caffe/layers/base_conv_layer.hpp'
    
    #ifdef USE_CUDNN
/**
 * @brief CuDNN acceleration of ReLULayer.
 */
template <typename Dtype>
class CuDNNReLULayer : public ReLULayer<Dtype> {
 public:
  explicit CuDNNReLULayer(const LayerParameter& param)
      : ReLULayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNReLULayer();
    }
    
    
    {
    {        // For now reusing the shim to allow prefetch.
        // Please only use a subset of the shim interface that includes
        // Init()/StartEpoch()/GetMinibatch()/IsEndOfEpoch()
        // Shim will be deleted in the future versions.
        std::shared_ptr<ReaderShim<float>> m_shim;
        Microsoft::MSR::CNTK::StreamMinibatchInputs m_matrices;
    };
}

    
        template <typename V1ElemType>
    std::shared_ptr<Matrix<V1ElemType>> NDArrayView::GetWritableMatrix(size_t rowColSplitPoint/* = AutoSelectRowColSplitPoint*/)
    {
        return GetMatrixImpl<V1ElemType>(GetWritableTensorView<V1ElemType>(), rowColSplitPoint);
    }
    
            VariableFields(const NDShape& shape, VariableKind varType, ::CNTK::DataType type, const std::weak_ptr<Function>& ownerFunction, const NDArrayViewPtr& value, bool needsGradient, const std::vector<Axis>& dynamicAxes, bool isSparse, const std::wstring& name, const std::wstring& uid)
            : m_shape(shape), m_varKind(varType), m_dataType(type), m_ownerFunction(ownerFunction), m_value(value), m_needsGradient(needsGradient), m_dynamicAxes(dynamicAxes), m_isSparse(isSparse), m_name(name), m_uid(uid), m_valueTimeStamp(0)
        {
            if (value && (type != value->GetDataType()))
                InvalidArgument('The DataType of the Parameter/Constant Variable '%S' does not match the DataType of the associated Value', AsString().c_str());
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
    
    
    {protected:
    std::string m_callStack;
};
    
    template <class ElemType>
class SumColumnElementsNode : public ComputationNode<ElemType>, public NumInputs<1>
{
    typedef ComputationNode<ElemType> Base; UsingComputationNodeMembersBoilerplate;
    static const std::wstring TypeName() { return L'SumColumnElements'; }
    }
    
    public:
    // subPen - substitution penalty
    // delPen - deletion penalty
    // insPen - insertion penalty
    // squashInputs - whether to merge sequences of identical samples.
    // tokensToIgnore - list of indices of samples to ignore during edit distance evaluation
    EditDistanceErrorNode(DEVICEID_TYPE deviceId, const wstring & name, float subPen = 1.0f, float delPen = 1.0f, float insPen = 1.0f, bool squashInputs = false, vector<size_t> tokensToIgnore = {})
        : Base(deviceId, name), m_subPen(subPen), m_delPen(delPen), m_insPen(insPen), m_squashInputs(squashInputs), m_tokensToIgnore(tokensToIgnore)
    {
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    /** @class CatmullRomTo
 * An action that moves the target with a CatmullRom curve to a destination point.
 * A Catmull Rom is a Cardinal Spline with a tension of 0.5.
 * http://en.wikipedia.org/wiki/Cubic_Hermite_spline#Catmull.E2.80.93Rom_spline
 * @ingroup Actions
 */
class CC_DLL CatmullRomTo : public CardinalSplineTo
{
public:
    }
    
        // Override
    virtual Ripple3D* clone() const override;
    virtual void update(float time) override;
    
    protected:
    std::vector<float>* _splitTimes;
    int             _nextFrame;
    SpriteFrame*    _origFrame;
    int _currFrameIndex;
    unsigned int    _executedLoops;
    Animation*      _animation;
    
    NS_CC_BEGIN
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#include '2d/CCActionProgressTimer.h'
#include '2d/CCProgressTimer.h'
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
    
    {    frame->autorelease();
    return frame;
}
    
    
    {    /** how many times the animation is going to loop. 0 means animation is not animated. 1, animation is executed one time, ... */
    unsigned int _loops;
    
private:
    CC_DISALLOW_COPY_AND_ASSIGN(Animation);
};
    
    #include <string>
    
    
    {  /**
   * @brief CanFrame string including essential information about the message.
   * @return The info string.
   */
  std::string CanFrameString() const {
    std::stringstream output_stream('');
    output_stream << 'id:0x' << Byte::byte_to_hex(id)
                  << ',len:' << static_cast<int>(len) << ',data:';
    for (uint8_t i = 0; i < len; ++i) {
      output_stream << Byte::byte_to_hex(data[i]);
    }
    output_stream << ',';
    return output_stream.str();
  }
};
    
    #if USE_ESD_CAN
  CANCardParameter can_card_parameter;
  can_card_parameter.set_brand(CANCardParameter::ESD_CAN);
  can_card_parameter.set_type(CANCardParameter::PCI_CARD);
  can_card_parameter.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    
    #include <memory>
#include <sstream>
#include <string>
#include <thread>
    
    
    {  return ErrorCode::OK;
}
    
      /**
   * @brief get chassis detail. used lock_guard in this function to avoid
   * concurrent read/write issue.
   * @param chassis_detail chassis_detail to be filled.
   */
  common::ErrorCode GetSensorData(SensorType *const sensor_data);
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
    #include <cstdint>