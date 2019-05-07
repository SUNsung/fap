
        
          v8::Local<v8::Value> URLRequest(v8::Isolate* isolate);
    
    #ifndef ATOM_BROWSER_API_TRACKABLE_OBJECT_H_
#define ATOM_BROWSER_API_TRACKABLE_OBJECT_H_
    
    
    {}  // namespace atom
    
    #include <map>
#include <string>
    
    bool AboutProtocolHandler::IsSafeRedirectTarget(const GURL& location) const {
  return false;
}
    
      // net::URLRequestJobFactory::ProtocolHandler:
  net::URLRequestJob* MaybeCreateJob(
      net::URLRequest* request,
      net::NetworkDelegate* network_delegate) const override;
  bool IsSafeRedirectTarget(const GURL& location) const override;
    
    #include 'base/files/file_util.h'
#include 'base/logging.h'
#include 'base/mac/mac_logging.h'
#include 'base/posix/eintr_wrapper.h'
#include 'base/process/launch.h'
#include 'base/strings/sys_string_conversions.h'
    
    #endif  // ATOM_BROWSER_UI_COCOA_ROOT_VIEW_MAC_H_

    
    /*! \brief Cuda runtime compile module. */
class CudaModule {
 private:
  /*! \brief Structure for holding internal info. */
  struct Chunk {
    /*!
     * \brief Constructs cuda module.
     * \param source cuda source code.
     * \param exports export symbols before mangling.
     */
    Chunk(const char* source,
          const std::vector<std::string>& options,
          const std::vector<std::string>& exports);
    /*! \brief deconstrutor */
    ~Chunk();
    /*!
     * \brief Get handle to cuda kernel from loaded module
     * \param mangled_name mangled kernel name
     * \param ctx context to run kernel on
     * \return loaded function handle
     */
    CUfunction GetFunction(const std::string& mangled_name, const Context& ctx);
    /*! \brief nvrtc program handle. */
    nvrtcProgram prog_;
    /*! \brief compiled cuda PTX */
    char* ptx_;
    /*! \brief lazily loaded cuda module */
    std::unordered_map<int, CUmodule> mod_;
    /*! \brief exported names */
    std::unordered_set<std::string> exports_;
  };
  /*! \brief pointer to Chunk */
  std::shared_ptr<Chunk> ptr_;
    }
    
    #include <dmlc/registry.h>
    
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
    
    template<>
void EvalClip<DEVICE>(const TBlob &src, const real_t &a_min, const real_t &a_max,
                             TBlob *ret, RunContext ctx) {
  typedef DEVICE xpu;
  using namespace mshadow::expr;
  mshadow::Stream<xpu> *s = ctx.get_stream<xpu>();
  CHECK_EQ(ret->type_flag_, src.type_flag_)
    << 'Only support input/output with the same data type';
  MSHADOW_TYPE_SWITCH(ret->type_flag_, DType, {
    ret->FlatTo2D<xpu, DType>(s)
      = F<ClipMax::mshadow_op>(
          F<ClipMin::mshadow_op>(src.FlatTo2D<xpu, DType>(s), scalar(DType(a_min))),
          scalar(DType(a_max)));
  });
}
    
       out = data / sqrt(data.shape[-1])
    
      virtual void Forward(const OpContext &ctx,
                       const std::vector<TBlob> &in_data,
                       const std::vector<OpReqType> &req,
                       const std::vector<TBlob> &out_data,
                       const std::vector<TBlob> &aux_args) {
    using namespace mshadow;
    using namespace mshadow::expr;
    CHECK_EQ(in_data.size(), 1U);
    CHECK_EQ(out_data.size(), 2U);
    typename DataType<DType>::ScaleType alpha = 1.0f;
    typename DataType<DType>::ScaleType beta = 0.0f;
    Stream<gpu> *s = ctx.get_stream<gpu>();
    Tensor<gpu, 4, DType> data = in_data[lrn_enum::kData].get<gpu, 4, DType>(s);
    Tensor<gpu, 4, DType> out = out_data[lrn_enum::kOut].get<gpu, 4, DType>(s);
    if (!init_cudnn_) {
      this->Init(s, in_data, out_data);
    }
    CHECK_EQ(s->dnn_handle_ownership_, mshadow::Stream<gpu>::OwnHandle);
    CUDNN_CALL(cudnnLRNCrossChannelForward(s->dnn_handle_,
                                           lrn_desc_,
                                           CUDNN_LRN_CROSS_CHANNEL_DIM1,
                                           &alpha,
                                           shape_desc_,
                                           data.dptr_,
                                           &beta,
                                           shape_desc_,
                                           out.dptr_));
  }
    
    #endif  // MXNET_OPERATOR_CUDNN_SPATIAL_TRANSFORMER_INL_H_

    
      for (auto& blob : in_data) {
    ptrs.push_back(reinterpret_cast<void*>(new NDArray(blob, ndctx.dev_id)));
    tags.push_back(0);
  }
  for (auto& blob : out_data) {
    ptrs.push_back(reinterpret_cast<void*>(new NDArray(blob, ndctx.dev_id)));
    tags.push_back(1);
  }
  for (auto& blob : in_grad) {
    NDArray* nd = new NDArray(blob, ndctx.dev_id);
    ptrs.push_back(reinterpret_cast<void*>(nd));
    ndvar.push_back(nd->var());
    tags.push_back(2);
  }
  std::sort(ndvar.begin(), ndvar.end());
  ndvar.resize(std::unique(ndvar.begin(), ndvar.end()) - ndvar.begin());
  for (auto& blob : out_grad) {
    ptrs.push_back(reinterpret_cast<void*>(new NDArray(blob, ndctx.dev_id)));
    tags.push_back(3);
  }
    
        switch (opCode)
    {
    case IDC_INV:
    case IDC_FE:
    case IDC_MCLEAR:
    case IDC_BACK:
    case IDC_EXP:
    case IDC_STORE:
    case IDC_MPLUS:
    case IDC_MMINUS:
        return true;
    }
    
    class IOpndCommand : public IExpressionCommand
{
public:
    virtual const std::shared_ptr<CalculatorVector<int>>& GetCommands() const = 0;
    virtual void AppendCommand(int command) = 0;
    virtual void ToggleSign() = 0;
    virtual void RemoveFromEnd() = 0;
    virtual bool IsNegative() const = 0;
    virtual bool IsSciFmt() const = 0;
    virtual bool IsDecimalPresent() const = 0;
    virtual const std::wstring& GetToken(wchar_t decimalSymbol) = 0;
    virtual void SetCommands(std::shared_ptr<CalculatorVector<int>> const& commands) = 0;
};
    
        // sub one from x
    (*px)->pq->sign *= -1;
    addnum(&((*px)->pp), (*px)->pq, BASEX);
    (*px)->pq->sign *= -1;
    
    CatmullRomTo* CatmullRomTo::clone() const
{
    // no copy constructor
    auto a = new (std::nothrow) CatmullRomTo();
    a->initWithDuration(this->_duration, this->_points->clone());
    a->autorelease();
    return a;
}
    
    EaseBezierAction* EaseBezierAction::reverse() const
{
    EaseBezierAction* reverseAction = EaseBezierAction::create(_inner->reverse());
    reverseAction->setBezierParamer(_p3,_p2,_p1,_p0);
    return reverseAction;
}
    
    // DeccelAmplitude
    
        /**
    @brief Get the amplitude of the effect.
    @return Return the amplitude of the effect.
    */
    float getAmplitude() const { return _amplitude; }
    /**
    @brief Set the amplitude to the effect.
    @param amplitude The value of amplitude will be set.
    */
    void setAmplitude(float amplitude) { _amplitude = amplitude; }
    
    /** @class Repeat
 * @brief Repeats an action a number of times.
 * To repeat an action forever use the RepeatForever action.
 */
class CC_DLL Repeat : public ActionInterval
{
public:
    /** Creates a Repeat action. Times is an unsigned integer between 1 and pow(2,30).
     *
     * @param action The action needs to repeat.
     * @param times The repeat times.
     * @return An autoreleased Repeat object.
     */
    static Repeat* create(FiniteTimeAction *action, unsigned int times);
    }
    
    void ActionManager::removeActionsByFlags(unsigned int flags, Node *target)
{
    if (flags == 0)
    {
        return;
    }
    CCASSERT(target != nullptr, 'target can't be nullptr!');
    if (target == nullptr)
    {
        return;
    }
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        // Override
    virtual ShatteredTiles3D* clone() const override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ShatteredTiles3D() {}
    virtual ~ShatteredTiles3D() {}
    
    
    {    frame->autorelease();
    return frame;
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
            /**
         * Move assignment.
         * Similar to Rectangle<T>(Rectangle<T>&& rectangle).
         * @param rectangle Rectangle to be moved.
         * @return The resulting Rectangle.
         */
        Rectangle<T>& operator=(Rectangle<T>&& rectangle);
    
    #include <openpose/pose/poseParameters.hpp>
#include <openpose/pose/poseParametersRender.hpp>
    
    
    {
    {        DELETE_COPY(PersonIdExtractor);
    };
}
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child1));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child1));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetWidth(root_child1));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetHeight(root_child1));
    
    namespace facebook {
    }
    
      const char* functionName() const { return m_functionName; }
  const char* fileName() const { return m_fileName; }
  int lineNumber() const { return m_lineNumber; }
    
    // JNI's NIO support has some awkward preconditions and error reporting. This
// class provides much more user-friendly access.
class FBEXPORT JByteBuffer : public JavaClass<JByteBuffer> {
 public:
  static constexpr const char* kJavaDescriptor = 'Ljava/nio/ByteBuffer;';
    }
    
    inline jobject JObject::self() const noexcept {
  return this_;
}