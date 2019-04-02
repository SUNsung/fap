
        
        // static
void UvTaskRunner::OnTimeout(uv_timer_t* timer) {
  UvTaskRunner* self = static_cast<UvTaskRunner*>(timer->data);
  if (!ContainsKey(self->tasks_, timer))
    return;
    }
    
    #include <string>
    
    Event::Event(v8::Isolate* isolate) {
  Init(isolate);
}
    
    #if defined(OS_LINUX)
#include 'atom/browser/lib/power_observer_linux.h'
#else
#include 'base/power_monitor/power_observer.h'
#endif  // defined(OS_LINUX)
    
    namespace asar {
    }
    
      // Up until now, the parent process was blocked in a read waiting for the
  // write above to complete. The parent process is now free to exit. Wait for
  // that to happen.
  struct kevent event;
  int events = kevent(kq.get(), nullptr, 0, &event, 1, nullptr);
  if (events != 1) {
    if (events < 0) {
      PLOG(ERROR) << 'kevent (monitor)';
    } else {
      LOG(ERROR) << 'kevent (monitor): unexpected result ' << events;
    }
    return;
  }
    
    StringType AddQuoteForArg(const StringType& arg) {
  // We follow the quoting rules of CommandLineToArgvW.
  // http://msdn.microsoft.com/en-us/library/17w5ykft.aspx
  std::wstring quotable_chars(L' \\\'');
  if (arg.find_first_of(quotable_chars) == std::wstring::npos) {
    // No quoting necessary.
    return arg;
  }
    }
    
    class PAGE_RES_IT;
class ROW;
class WERD_RES;
    
    namespace tesseract {
class Tesseract;
}
    
    // Class to hold an array of bounding boxes for an output word and
// the bounding box of the whole word.
class BoxWord {
 public:
  BoxWord();
  explicit BoxWord(const BoxWord& src);
  ~BoxWord() = default;
    }
    
      // Sets the destination filename and enables images to be written to a PDF
  // on destruction.
  void WritePDF(const char* filename) {
    if (pixaGetCount(pixa_) > 0) {
      pixaConvertToPdf(pixa_, 300, 1.0f, 0, 0, 'AllDebugImages', filename);
      pixaClear(pixa_);
    }
  }
    
    namespace mxnet {
namespace op {
namespace caffe {
    }
    }
    }
    
    #include '../common/utils.h'
    
    struct quantize_2bit {
  MSHADOW_XINLINE static void Map(int out_block_id,
                                  int original_size,
                                  float *out,
                                  float *grad,
                                  float *residual,
                                  const float neg_threshold,
                                  const float pos_threshold) {
    // this block contains the compressed representation of
    // upto 16 values starting from out_block_id*16
    float *compr_block = out + out_block_id;
    // init to 0
    *compr_block = 0;
    // start and end are indices in original grad array
    const int start = out_block_id << 4;
    const int end = (start + 16 <= original_size) ? start + 16 : original_size;
    // cast as char* to manipulate bits of float addresses
    char *block_ptr = reinterpret_cast < char * > (compr_block);
    // masks to set bits when value meets pos_threshold
    // 0xc0 is mask when value is to be represented by the first two bits in a char*
    // 0xc0 means first two bits are set to 11
    const uint8_t posbits[] = {0xc0, 0x30, 0x0c, 0x03};
    // masks to set bits when value meets neg_threshold
    const uint8_t negbits[] = {0x80, 0x20, 0x08, 0x02};
    for (int i = start; i < end; i++) {
      // adds offset to reach appropriate byte
      char *curr_byte = block_ptr + ((i - start) >> 2);
      // adds gradient to existing residual to get updated grad
      residual[i] += grad[i];
      if (residual[i] >= pos_threshold) {
        // set data to 11
        *curr_byte |= posbits[(i & 3)];
        // reduce residual by pos_threshold
        residual[i] -= pos_threshold;
      } else if (residual[i] <= neg_threshold) {
        // set data to 10
        *curr_byte |= negbits[(i & 3)];
        residual[i] -= neg_threshold;
      }
    }
  }
};
    
    )code' ADD_FILELINE)
.set_attr<FCompute>('FCompute<cpu>', DivSqrtDimForward_<cpu>)
.set_attr<nnvm::FGradient>('FGradient', ElemwiseGradUseNone{'_contrib_div_sqrt_dim'});
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file cudnn_bilinear_sampler-inl.h
 * \brief
 * \author Xu Dong
*/
#ifndef MXNET_OPERATOR_CUDNN_BILINEAR_SAMPLER_INL_H_
#define MXNET_OPERATOR_CUDNN_BILINEAR_SAMPLER_INL_H_
    
    
    {
    {
    { private:
  inline void Init(mshadow::Stream<gpu> *s,
                   const std::vector<TBlob> &in_data,
                   const std::vector<TBlob> &out_data) {
    using namespace mshadow;
    CHECK_EQ(in_data.size(), 1U);
    CHECK_EQ(out_data.size(), 2U);
    if (!init_cudnn_) {
      init_cudnn_ = true;
      Tensor<gpu, 4, DType> data = in_data[lrn_enum::kData].get<gpu, 4, DType>(s);
      Tensor<gpu, 4, DType> out = out_data[lrn_enum::kOut].get<gpu, 4, DType>(s);
      unsigned lrn_n = param_.nsize;
      double alpha = param_.alpha;
      double beta = param_.beta;
      double lrn_k = param_.knorm;
      CHECK_EQ(data.shape_, out.shape_);
      CUDNN_CALL(cudnnCreateLRNDescriptor(&lrn_desc_));
      CUDNN_CALL(cudnnSetLRNDescriptor(lrn_desc_,
                                       lrn_n,
                                       alpha,
                                       beta,
                                       lrn_k));
      CUDNN_CALL(cudnnCreateTensorDescriptor(&shape_desc_));
      CUDNN_CALL(cudnnSetTensor4dDescriptor(shape_desc_,
                                            CUDNN_TENSOR_NCHW,
                                            dtype_,
                                            data.shape_[0],
                                            data.shape_[1],
                                            data.shape_[2],
                                            data.shape_[3]));
    }
  }
  bool init_cudnn_;
  LRNParam param_;
  cudnnDataType_t dtype_;
  cudnnLRNDescriptor_t lrn_desc_;
  cudnnTensorDescriptor_t shape_desc_;
};  // class CuDNNLocalResponseNormOp
}  // namespace op
}  // namespace mxnet
#endif  // MXNET_OPERATOR_CUDNN_LRN_INL_H_

    
    void Assembler::stbx(const Reg64& rt, MemoryRef m) {
  assertx(!m.r.disp);  // doesn't support immediate displacement
  EmitXForm(31, rn(rt), rn(m.r.base), rn(m.r.index), 215);
}
    
    
    {}
    
    #ifndef incl_HPHP_PIPE_H_
#define incl_HPHP_PIPE_H_
    
    
    {    return iter != s_categoryManifest.end();
}
    
    void TitleBarHelper::SetTitleBarHeight(double height)
{
    m_customTitleBar->Height = height;
}
    
    #pragma once
    
    
    {
    {        bool m_isErrorVisualState;
	};
}

    
    #include 'Views/CalculatorStandardOperators.g.h'
#include 'Views/NumberPad.xaml.h'
    
    #include 'Converters/BooleanNegationConverter.h'
#include 'Converters/VisibilityNegationConverter.h'
#include 'Views/DateCalculator.g.h'
    
    
    {    VisualStateManager::GoToState(this, 'MemoryButtonsHidden', true);
}
    
    using namespace std;
    
    class Node;
    
    Shaky3D* Shaky3D::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) Shaky3D();
    a->initWithDuration(_duration, _gridSize, _randrange, _shakeZ);
    a->autorelease();
    return a;
}
    
    /** @class RotateBy
 * @brief Rotates a Node object clockwise a number of degrees by modifying it's rotation attribute.
*/
class CC_DLL RotateBy : public ActionInterval
{
public:
    /** 
     * Creates the action.
     *
     * @param duration Duration time, in seconds.
     * @param deltaAngle In degreesCW.
     * @return An autoreleased RotateBy object.
     */
    static RotateBy* create(float duration, float deltaAngle);
    /**
     * Creates the action with separate rotation angles.
     *
     * @param duration Duration time, in seconds.
     * @param deltaAngleZ_X In degreesCW.
     * @param deltaAngleZ_Y In degreesCW.
     * @return An autoreleased RotateBy object.
     * @warning The physics body contained in Node doesn't support rotate with different x and y angle.
     */
    static RotateBy* create(float duration, float deltaAngleZ_X, float deltaAngleZ_Y);
    /** Creates the action with 3D rotation angles.
     *
     * @param duration Duration time, in seconds.
     * @param deltaAngle3D A Vec3 angle.
     * @return An autoreleased RotateBy object.
     */
    static RotateBy* create(float duration, const Vec3& deltaAngle3D);
    }
    
    void Animation::addSpriteFrameWithFile(const std::string& filename)
{
    Texture2D *texture = Director::getInstance()->getTextureCache()->addImage(filename);
    Rect rect = Rect::ZERO;
    rect.size = texture->getContentSize();
    SpriteFrame *frame = SpriteFrame::createWithTexture(texture, rect);
    addSpriteFrame(frame);
}
    
        /** Gets the units of time the frame takes.
     *
     * @return The units of time the frame takes.
     */
    float getDelayUnits() const { return _delayUnits; };
    
    /** Sets the units of time the frame takes.
     *
     * @param delayUnits The units of time the frame takes.
     */
    void setDelayUnits(float delayUnits) { _delayUnits = delayUnits; };
    
    /** @brief Gets user information
     * A AnimationFrameDisplayedNotification notification will be broadcast when the frame is displayed with this dictionary as UserInfo. 
     * If UserInfo is nil, then no notification will be broadcast.
     *
     * @return A dictionary as UserInfo
     */
    const ValueMap& getUserInfo() const { return _userInfo; };
    ValueMap& getUserInfo() { return _userInfo; };
    
    /** Sets user information.
     * @param userInfo A dictionary as UserInfo.
     */
    void setUserInfo(const ValueMap& userInfo)
    {
        _userInfo = userInfo;
    }
    
    // Overrides
    virtual AnimationFrame *clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    /**
     * @js ctor
     */
    AnimationFrame();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~AnimationFrame();
    
    /** initializes the animation frame with a spriteframe, number of delay units and a notification user info */
    bool initWithSpriteFrame(SpriteFrame* spriteFrame, float delayUnits, const ValueMap& userInfo);
    
        /** Returns a Animation that was previously added.
     * If the name is not found it will return nil.
     * You should retain the returned copy if you are going to use it.
     *
     * @return A Animation that was previously added. If the name is not found it will return nil.
     */
    Animation* getAnimation(const std::string& name);
    /**
     * @deprecated. Use getAnimation() instead
     * @js NA
     * @lua NA
     */
    CC_DEPRECATED_ATTRIBUTE Animation* animationByName(const std::string& name){ return getAnimation(name); }