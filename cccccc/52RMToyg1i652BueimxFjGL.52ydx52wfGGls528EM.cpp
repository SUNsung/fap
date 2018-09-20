
        
        public:
    explicit OpenURIDialog(QWidget *parent);
    ~OpenURIDialog();
    
    QT_BEGIN_NAMESPACE
class QPaintEvent;
class QTimer;
QT_END_NAMESPACE
    
    /** Dialog showing transaction details. */
class TransactionDescDialog : public QDialog
{
    Q_OBJECT
    }
    
        CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 0));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 1));
    CHECK(secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 2));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    CHECK(secp256k1_ecdsa_recoverable_signature_parse_compact(ctx, &rsig, sig64, 3));
    CHECK(!secp256k1_ecdsa_recover(ctx, &pubkey, &rsig, msg32));
    
    static bool CaseInsensitiveEqual(const std::string &s1, const std::string &s2)
{
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        char c1 = s1[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 -= ('A' - 'a');
        char c2 = s2[i];
        if (c2 >= 'A' && c2 <= 'Z') c2 -= ('A' - 'a');
        if (c1 != c2) return false;
    }
    return true;
}
    
    /* Equality between doubles is imprecise. Comparison should be done
 * with a small threshold of tolerance, rather than exact equality.
 */
static bool DoubleEquals(double a, double b, double epsilon)
{
    return std::abs(a - b) < epsilon;
}
    
        int64_t vi64 = -82;
    UniValue v5(vi64);
    BOOST_CHECK(v5.isNum());
    BOOST_CHECK_EQUAL(v5.getValStr(), '-82');
    
    ExtensionFunction::ResponseAction
NwCurrentWindowInternalSetShadowFunction::Run() {
#if defined(OS_MACOSX)
  EXTENSION_FUNCTION_VALIDATE(args_);
  bool shadow;
  EXTENSION_FUNCTION_VALIDATE(args_->GetBoolean(0, &shadow));
  AppWindow* window = getAppWindow(this);
  SetShadowOnWindow(window->GetNativeWindow(), shadow);
#endif
  return RespondNow(NoArguments());
}
    
    class NwCurrentWindowInternalCloseFunction : public UIThreadExtensionFunction {
 public:
  NwCurrentWindowInternalCloseFunction() {};
  static void DoClose(AppWindow*);
  static void DoCloseBrowser(Browser*);
    }
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
                    if(!x) {
                    tcurr = tnext;
    }
    
                if(cn > 1)
            {
                for(size_t j = 0, jn = 0; j < size.width; ++j, jn += cn)
                {
                    size_t maxIdx = jn;
                    for(s32 k = 1; k < cn; ++k)
                        if(_norm[jn + k] > _norm[maxIdx]) maxIdx = jn + k;
                    _norm[j] = _norm[maxIdx];
                    _dx[j] = _dx[maxIdx];
                    _dy[j] = _dy[maxIdx];
                }
            }
    
        uint32x4_t vDiff_Res1 = vmulq_u32(vDiffL, vRes1);
    uint32x4_t vDiff_Res2 = vmulq_u32(vDiffH, vRes2);
    uint32x4_t vDiff_Res3 = vmulq_u32(vreinterpretq_u32_s32(vH_L), vRes3);
    uint32x4_t vDiff_Res4 = vmulq_u32(vreinterpretq_u32_s32(vH_H), vRes4);
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 7 && !defined(__clang__)
CVTS_FUNC(u16, f32, 8,
    register float32x4_t vscale asm ('q0') = vdupq_n_f32((f32)alpha);
    register float32x4_t vshift asm ('q1') = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        __asm__ (
            'vld1.16 {d4-d5}, [%[src]]                              \n\t'
            'vmovl.u16 q3, d4                                       \n\t'
            'vmovl.u16 q4, d5                                       \n\t'
             'vcvt.f32.u32 q5, q3                                    \n\t'
            'vcvt.f32.u32 q6, q4                                    \n\t'
            'vmul.f32 q7, q5, q0                                    \n\t'
            'vmul.f32 q8, q6, q0                                    \n\t'
            'vadd.f32 q9, q7, q1                                    \n\t'
            'vadd.f32 q10, q8, q1                                   \n\t'
            'vst1.32 {d18-d19}, [%[dst1]]                           \n\t'
            'vst1.32 {d20-d21}, [%[dst2]]                           \n\t'
            : /*no output*/
            : [src] 'r' (_src + i),
              [dst1] 'r' (_dst + i + 0),
              [dst2] 'r' (_dst + i + 4),
              'w'  (vscale), 'w' (vshift)
            : 'd4','d5','d6','d7','d8','d9','d10','d11','d12','d13','d14','d15','d16','d17','d18','d19','d20','d21'
        );
    }
})
#else
CVTS_FUNC(u16, f32, 8,
    float32x4_t vscale = vdupq_n_f32((f32)alpha);
    float32x4_t vshift = vdupq_n_f32((f32)beta);,
{
    for (size_t i = 0; i < w; i += 8)
    {
        internal::prefetch(_src + i);
        uint16x8_t vline = vld1q_u16(_src + i);
        uint32x4_t vline1_u32 = vmovl_u16(vget_low_u16 (vline));
        uint32x4_t vline2_u32 = vmovl_u16(vget_high_u16(vline));
        float32x4_t vline1_f32 = vcvtq_f32_u32(vline1_u32);
        float32x4_t vline2_f32 = vcvtq_f32_u32(vline2_u32);
        vline1_f32 = vmulq_f32(vline1_f32, vscale);
        vline2_f32 = vmulq_f32(vline2_f32, vscale);
        vline1_f32 = vaddq_f32(vline1_f32, vshift);
        vline2_f32 = vaddq_f32(vline2_f32, vshift);
        vst1q_f32(_dst + i + 0, vline1_f32);
        vst1q_f32(_dst + i + 4, vline2_f32);
    }
})
#endif
    
                // make shift
            prevx[0] = currx[0];
            currx[0] = nextx[0];
    
            if (s[0] < 0 || s[1] < 0)//saturate in case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
        result += (s[0] += s[1]);
        if (s[0] < 0 || result < 0)
        {
            return 0x7fFFffFF;
        }
    
        //k == 8
    int16x8_t v0k8 = v1k0;
    int16x8_t v1k8 = vextq_s16(d8_15, d16_23, 2);
    int16x8_t ak8 = vminq_s16(v0k8, v1k8);
    int16x8_t bk8 = vmaxq_s16(v0k8, v1k8);
    
    
    {                lane[colsn+k] = lane[idx_r1 + k];
                lane[colsn+cn+k] = lane[idx_r2 + k];
            }
    
    #endif  // CAFFE_BIAS_LAYER_HPP_

    
    
    {  /**
   * @brief Computes the error gradient w.r.t. the BNLL inputs.
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
   *        \frac{\partial E}{\partial x}
   *      @f$ if propagate_down[0]
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
};
    
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
    
    #include <vector>
    
      int size_, pre_pad_;
  Dtype alpha_, beta_, k_;
    
    #ifdef USE_CUDNN
template <typename Dtype>
class CuDNNLRNLayer : public LRNLayer<Dtype> {
 public:
  explicit CuDNNLRNLayer(const LayerParameter& param)
      : LRNLayer<Dtype>(param), handles_setup_(false) {}
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual ~CuDNNLRNLayer();
    }
    
    #include 'caffe/layers/neuron_layer.hpp'
#include 'caffe/layers/relu_layer.hpp'
    
     protected:
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
     const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    void free_used_object(const std::string &name) {
  if (!object_exists(name.c_str())) {
    DEBUG('object %s appears to have been freed', name.c_str());
    used_objects.erase(name);
  } else {
    DEBUG('object %s still exists', name.c_str());
  }
}
    
    template <class Context>
class FindDuplicateElementsOp final : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  USE_SIMPLE_CTOR_DTOR(FindDuplicateElementsOp);
  USE_DISPATCH_HELPER;
    }
    
    REGISTER_GRADIENT(Flatten, GetFlattenGradient);
    
      bool RunOnDevice() override {
    auto& X = Input(0);
    auto* Y = Output(0);
    Y->ResizeLike(X);
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
    
    /*! \brief First input to the function */
struct Input0 : GradFunctionArgument {};
/*! \brief Second input to the function */
struct Input1 : GradFunctionArgument {};
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_loss-inl.h
 * \brief Caffe Operator
 * \author Haoran Wang
*/
#ifndef PLUGIN_CAFFE_CAFFE_LOSS_INL_H_
#define PLUGIN_CAFFE_CAFFE_LOSS_INL_H_
    
    /*!
 * \brief Thread pool.
 */
class ThreadPool {
 public:
  /*! \brief Signal event upon destruction, even for exceptions (RAII) */
  struct SetReadyOnDestroy {
    explicit inline SetReadyOnDestroy(const std::shared_ptr<dmlc::ManualEvent>& event)
      : event_(event) {
    }
    inline ~SetReadyOnDestroy() {
      if (event_) {
        event_->signal();
      }
    }
    std::shared_ptr<dmlc::ManualEvent>  event_;
  };
    }
    
            // returns current per-minibatch variance momentum value.
        double VarianceMomentumValueForMB(size_t minibatchSize) const
        {
            //TODO: According to my preliminary analysis, the second momentum variance scaling is different from momentum scaling; need to double check -- yuqing tang
            return MomentumValueForMB(m_varianceMomentumSchedule, minibatchSize);
        }
    
        static void* AllocateTensorView(CNTK::DataType dataType,
                                    const NDShape& viewShape,
                                    const DeviceDescriptor& device,
                                    void* dataBuffer,
                                    size_t bufferSizeInBytes)
    {
        switch (dataType)
        {
        case DataType::Float:
            return AllocateTensorView<float>(viewShape, device, dataBuffer, bufferSizeInBytes);
        case DataType::Double:
            return AllocateTensorView<double>(viewShape, device, dataBuffer, bufferSizeInBytes);
        case DataType::Float16:
            return AllocateTensorView<half>(viewShape, device, dataBuffer, bufferSizeInBytes);
        case DataType::Int8:
            return AllocateTensorView<char>(viewShape, device, dataBuffer, bufferSizeInBytes);
        case DataType::Int16:
            return AllocateTensorView<short>(viewShape, device, dataBuffer, bufferSizeInBytes);
        default:
            LogicError('Unsupported DataType %s', DataTypeName(dataType));
            break;
        }
    }
    
    // Same as above but with additional information about required streams.
void DataReader::StartMinibatchLoop(size_t mbSize, size_t epoch, const std::unordered_set<InputStreamDescription>& streamDescriptions, size_t requestedEpochSamples)
{
    for (size_t i = 0; i < m_ioNames.size(); i++)
        m_dataReaders[m_ioNames[i]]->StartMinibatchLoop(mbSize, epoch, streamDescriptions, requestedEpochSamples);
}
    
    
#if 1
        // support for legacy models when the mean and variance vectors were stored as column vectors (N,1)
        // This code will copy the shape of Input(0) (source) to Input(1) and Input(2) (target) if:
        //   1. The source is a 3-tensor with shape 1x1xM
        //   2. The target is a vector (i.e., a 2-tensor with shape Nx1)
        //   3. Both targets have the same number of elements
        //   4. The number of elements in the target (N) is the same as the number of elements in the source (M)
        // Note: This is somewhat ugly [Jasha Droppo].
    
    protected:
    void CalculateAxisOffset()
    {
        if (m_offset < 0)
        {
            const auto& inputSampleLayout = Input(0)->GetSampleLayout();
            const auto& inputDims = inputSampleLayout.GetDims();
            size_t len = inputDims.size();
            m_offset = m_axis < 0 ? (len + 1 + m_axis) % (len + 1) : m_axis % (len + 1);
        }
    }
    
    template <class BidiIterator, class Allocator>
class match_results
{ 
private:
#ifndef BOOST_NO_STD_ALLOCATOR
   typedef          std::vector<sub_match<BidiIterator>, Allocator> vector_type;
#else
   typedef          std::vector<sub_match<BidiIterator> >           vector_type;
#endif
public: 
   typedef          sub_match<BidiIterator>                         value_type;
#if  !defined(BOOST_NO_STD_ALLOCATOR) && !(defined(BOOST_MSVC) && defined(_STLPORT_VERSION))
   typedef typename Allocator::const_reference                              const_reference;
#else
   typedef          const value_type&                                       const_reference;
#endif
   typedef          const_reference                                         reference;
   typedef typename vector_type::const_iterator                             const_iterator;
   typedef          const_iterator                                          iterator;
   typedef typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<
                                    BidiIterator>::difference_type          difference_type;
   typedef typename Allocator::size_type                                    size_type;
   typedef          Allocator                                               allocator_type;
   typedef typename BOOST_REGEX_DETAIL_NS::regex_iterator_traits<
                                    BidiIterator>::value_type               char_type;
   typedef          std::basic_string<char_type>                            string_type;
   typedef          BOOST_REGEX_DETAIL_NS::named_subexpressions                         named_sub_type;
    }
    
    
    {   // non-greedy, keep trying till we get a match:
   BidiIterator save_pos;
   do
   {
      while((position != last) && (count < rep->max) && !can_start(*position, rep->_map, mask_skip))
      {
         if(map[static_cast<unsigned char>(traits_inst.translate(*position, icase))])
         {
            ++position;
            ++count;
         }
         else
            return false;  // counldn't repeat even though it was the only option
      }
      if((rep->leading) && (rep->max == UINT_MAX))
         restart = position;
      pstate = rep->alt.p;
      save_pos = position;
      ++state_count;
      if(match_all_states())
         return true;
      if((count >= rep->max) || !m_can_backtrack)
         return false;
      position = save_pos;
      if(position == last)
         return false;
      if(map[static_cast<unsigned char>(traits_inst.translate(*position, icase))])
      {
         ++position;
         ++count;
      }
      else
      {
         return false;
      }
   }while(true);
#ifdef __BORLANDC__
#pragma option pop
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
}
    
    // make_regex_iterator:
template <class charT, class traits>
inline regex_iterator<const charT*, charT, traits> make_regex_iterator(const charT* p, const basic_regex<charT, traits>& e, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_iterator<const charT*, charT, traits>(p, p+traits::length(p), e, m);
}
template <class charT, class traits, class ST, class SA>
inline regex_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits> make_regex_iterator(const std::basic_string<charT, ST, SA>& p, const basic_regex<charT, traits>& e, regex_constants::match_flag_type m = regex_constants::match_default)
{
   return regex_iterator<typename std::basic_string<charT, ST, SA>::const_iterator, charT, traits>(p.begin(), p.end(), e, m);
}
    
    template <class OutputIterator, class charT, class Traits1, class Alloc1, class Traits2>
std::size_t regex_split(OutputIterator out,
                   std::basic_string<charT, Traits1, Alloc1>& s, 
                   const basic_regex<charT, Traits2>& e,
                   match_flag_type flags,
                   std::size_t max_split)
{
   typedef typename std::basic_string<charT, Traits1, Alloc1>::const_iterator  ci_t;
   //typedef typename match_results<ci_t>::allocator_type                        match_allocator;
   ci_t last = s.begin();
   std::size_t init_size = max_split;
   BOOST_REGEX_DETAIL_NS::split_pred<OutputIterator, charT, Traits1, Alloc1> pred(&last, &out, &max_split);
   ci_t i, j;
   i = s.begin();
   j = s.end();
   regex_grep(pred, i, j, e, flags);
   //
   // if there is still input left, do a final push as long as max_split
   // is not exhausted, and we're not splitting sub-expressions rather 
   // than whitespace:
   if(max_split && (last != s.end()) && (e.mark_count() == 0))
   {
      *out = std::basic_string<charT, Traits1, Alloc1>((ci_t)last, (ci_t)s.end());
      ++out;
      last = s.end();
      --max_split;
   }
   //
   // delete from the string everything that has been processed so far:
   s.erase(0, last - s.begin());
   //
   // return the number of new records pushed:
   return init_size - max_split;
}
    
    template <class BaseT>
struct regex_traits_wrapper 
   : public ::boost::BOOST_REGEX_DETAIL_NS::compute_wrapper_base<
               BaseT, 
               ::boost::BOOST_REGEX_DETAIL_NS::has_boost_extensions_tag<BaseT>::value
            >::type
{
   regex_traits_wrapper(){}
private:
   regex_traits_wrapper(const regex_traits_wrapper&);
   regex_traits_wrapper& operator=(const regex_traits_wrapper&);
};
    
    static const int kCbToGreenTable[256] = {
  2919680,  2897126,  2874572,  2852018,  2829464,  2806910,  2784356,  2761802,
  2739248,  2716694,  2694140,  2671586,  2649032,  2626478,  2603924,  2581370,
  2558816,  2536262,  2513708,  2491154,  2468600,  2446046,  2423492,  2400938,
  2378384,  2355830,  2333276,  2310722,  2288168,  2265614,  2243060,  2220506,
  2197952,  2175398,  2152844,  2130290,  2107736,  2085182,  2062628,  2040074,
  2017520,  1994966,  1972412,  1949858,  1927304,  1904750,  1882196,  1859642,
  1837088,  1814534,  1791980,  1769426,  1746872,  1724318,  1701764,  1679210,
  1656656,  1634102,  1611548,  1588994,  1566440,  1543886,  1521332,  1498778,
  1476224,  1453670,  1431116,  1408562,  1386008,  1363454,  1340900,  1318346,
  1295792,  1273238,  1250684,  1228130,  1205576,  1183022,  1160468,  1137914,
  1115360,  1092806,  1070252,  1047698,  1025144,  1002590,   980036,   957482,
   934928,   912374,   889820,   867266,   844712,   822158,   799604,   777050,
   754496,   731942,   709388,   686834,   664280,   641726,   619172,   596618,
   574064,   551510,   528956,   506402,   483848,   461294,   438740,   416186,
   393632,   371078,   348524,   325970,   303416,   280862,   258308,   235754,
   213200,   190646,   168092,   145538,   122984,   100430,    77876,    55322,
    32768,    10214,   -12340,   -34894,   -57448,   -80002,  -102556,  -125110,
  -147664,  -170218,  -192772,  -215326,  -237880,  -260434,  -282988,  -305542,
  -328096,  -350650,  -373204,  -395758,  -418312,  -440866,  -463420,  -485974,
  -508528,  -531082,  -553636,  -576190,  -598744,  -621298,  -643852,  -666406,
  -688960,  -711514,  -734068,  -756622,  -779176,  -801730,  -824284,  -846838,
  -869392,  -891946,  -914500,  -937054,  -959608,  -982162, -1004716, -1027270,
 -1049824, -1072378, -1094932, -1117486, -1140040, -1162594, -1185148, -1207702,
 -1230256, -1252810, -1275364, -1297918, -1320472, -1343026, -1365580, -1388134,
 -1410688, -1433242, -1455796, -1478350, -1500904, -1523458, -1546012, -1568566,
 -1591120, -1613674, -1636228, -1658782, -1681336, -1703890, -1726444, -1748998,
 -1771552, -1794106, -1816660, -1839214, -1861768, -1884322, -1906876, -1929430,
 -1951984, -1974538, -1997092, -2019646, -2042200, -2064754, -2087308, -2109862,
 -2132416, -2154970, -2177524, -2200078, -2222632, -2245186, -2267740, -2290294,
 -2312848, -2335402, -2357956, -2380510, -2403064, -2425618, -2448172, -2470726,
 -2493280, -2515834, -2538388, -2560942, -2583496, -2606050, -2628604, -2651158,
 -2673712, -2696266, -2718820, -2741374, -2763928, -2786482, -2809036, -2831590,
};
    
    const double* Srgb8ToLinearTable() {
  static const double* const kSrgb8ToLinearTable = NewSrgb8ToLinearTable();
  return kSrgb8ToLinearTable;
}
    
    #include 'guetzli/idct.h'
    
    
    {}  // namespace guetzli
    
      void JumpToByteBoundary() {
    while (put_bits <= 56) {
      int c = (put_buffer >> 56) & 0xff;
      EmitByte(c);
      put_buffer <<= 8;
      put_bits += 8;
    }
    if (put_bits < 64) {
      int padmask = 0xff >> (64 - put_bits);
      int c = ((put_buffer >> 56) & ~padmask) | padmask;
      EmitByte(c);
    }
    put_buffer = 0;
    put_bits = 64;
  }
    
    #include 'guetzli/jpeg_data.h'
    
    #include <algorithm>
#include <string.h>
    
    #include 'guetzli/jpeg_data.h'
    
    #endif  // GUETZLI_JPEG_DATA_READER_H_

    
    void BuildHuffmanCodeTable(const int* counts, const int* values,
                           HuffmanCodeTable* table) {
  int huffcode[256];
  int huffsize[256];
  int p = 0;
  for (int l = 1; l <= kJpegHuffmanMaxBitLength; ++l) {
    int i = counts[l];
    while (i--) huffsize[p++] = l;
  }
    }