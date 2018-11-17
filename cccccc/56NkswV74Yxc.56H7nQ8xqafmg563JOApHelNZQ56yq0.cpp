
        
        scoped_refptr<TracingController::TraceDataEndpoint> GetTraceDataEndpoint(
    const base::FilePath& path,
    const CompletionCallback& callback) {
  base::FilePath result_file_path = path;
  if (result_file_path.empty() && !base::CreateTemporaryFile(&result_file_path))
    LOG(ERROR) << 'Creating temporary file failed';
    }
    
    template <>
struct Converter<in_app_purchase::Transaction> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const in_app_purchase::Transaction& val) {
    mate::Dictionary dict = mate::Dictionary::CreateEmpty(isolate);
    dict.SetHidden('simple', true);
    dict.Set('transactionIdentifier', val.transactionIdentifier);
    dict.Set('transactionDate', val.transactionDate);
    dict.Set('originalTransactionIdentifier',
             val.originalTransactionIdentifier);
    dict.Set('transactionState', val.transactionState);
    dict.Set('errorCode', val.errorCode);
    dict.Set('errorMessage', val.errorMessage);
    dict.Set('payment', val.payment);
    return dict.GetHandle();
  }
};
    
    namespace api {
    }
    
    class RenderProcessPreferences
    : public mate::Wrappable<RenderProcessPreferences> {
 public:
  static mate::Handle<RenderProcessPreferences> ForAllWebContents(
      v8::Isolate* isolate);
    }
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
    namespace content {
class RenderFrameHost;
}
    
    namespace mxnet {
/*!
 * \brief iterator type
 * \tparam DType data type
 */
template<typename DType>
class IIterator : public dmlc::DataIter<DType> {
 public:
  /*!
   * \brief set the parameters and init iter
   * \param kwargs key-value pairs
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) = 0;
  /*! \brief reset the iterator */
  virtual void BeforeFirst(void) = 0;
  /*! \brief move to next item */
  virtual bool Next(void) = 0;
  /*! \brief get current data */
  virtual const DType &Value(void) const = 0;
  /*! \brief constructor */
  virtual ~IIterator(void) {}
  /*! \brief store the name of each data, it could be used for making NDArrays */
  std::vector<std::string> data_names;
  /*! \brief set data name to each attribute of data */
  inline void SetDataName(const std::string data_name) {
    data_names.push_back(data_name);
  }
};  // class IIterator
    }
    
    /*! \brief Ouput value of the function to the function */
struct OutputValue : GradFunctionArgument {};
/*! \brief Gradient of output value */
struct OutputGrad : GradFunctionArgument {};
    
    #ifndef MXNET_RTC_H_
#define MXNET_RTC_H_
#include './base.h'
#if MXNET_USE_CUDA && MXNET_ENABLE_CUDA_RTC
#include <nvrtc.h>
#include <cuda.h>
    
    /**!
 * \brief Workaround for missing functions in ::caffe::Layer
 * \warning Do not add or override any virtual functions in this class
 * @tparam Dtype
 */
template <typename Dtype>
class CaffeLayerFriend : public ::caffe::Layer<Dtype> {
  explicit CaffeLayerFriend(const ::caffe::LayerParameter& param) = delete;
 public:
  inline void SetPhase(::caffe::Phase p) {
    this->phase_ = p;
  }
};
    
     protected:
  void PushToExecute(OprBlock *opr_block, bool pusher_thread) override {
    if (opr_block->opr->prop == FnProperty::kAsync && pusher_thread) {
      DoExecute(opr_block);
    } else {
      DoPushToQueue(opr_block);
    }
  }
    
      virtual ~BatchLoader(void) {
    delete base_;
  }
    
    namespace CNTK
{
    CNTK_API const std::wstring Learner::MinibatchSizeKey = L'MinibatchSize';
    ///
    /// A special value that can be used for the minibatchSize to indicate that the reference minibatch size is not specified.
    ///
    CNTK_API const size_t Learner::IgnoredMinibatchSize = TrainingParameterSchedule<double>::IgnoredMinibatchSize;
    }
    
        void NDMask::CopyFrom(const NDMask& source)
    {
        if (source.Shape() != Shape())
            InvalidArgument('NDMask::CopyFrom: The source mask's shape '%S' must be same as this NDMask's shape '%S'.', source.Shape().AsString().c_str(), Shape().AsString().c_str());
    }
    
        private:
        bool ShouldWriteUpdate(size_t update) const
        {
            if (m_frequency == 0)
            {
                // Geometric schedule - write at every 2^(i) steps, with i = 1, 2, 3, ...
                return ((update + 1) & update) == 0;
            }
    }
    
            if (evaluationFunction)
        {
            auto evalArgs = GetCombinedEvalFunctionArgs();
            combinedFunctionArgs.insert(combinedFunctionArgs.end(), evalArgs.begin(), evalArgs.end());
    }
    
        template <typename ElementType>
    /*static*/  ValuePtr Value::CreateSequence(const NDShape& sampleShape, size_t sequenceLength, const SparseIndexType* colStarts, const SparseIndexType* rowIndices, const ElementType* nonZeroValues, size_t numNonZeroValues, bool sequenceStartFlag, const DeviceDescriptor& device, bool readOnly/* = false*/)
    {
        auto sequenceShape = sampleShape.AppendShape({sequenceLength});
        auto sequenceData = MakeSharedObject<NDArrayView>(AsDataType<ElementType>(), sequenceShape, colStarts, rowIndices, nonZeroValues, numNonZeroValues, device, readOnly);
        return Create(sampleShape, {sequenceData}, {sequenceStartFlag}, device, readOnly, false);
    }
    
        // Releases the mutex
    void Release()
    {
        assert(m_handle != NULL);
        int rc = 0;
        rc = ::ReleaseMutex(m_handle);
        if ((rc == RELEASEMUTEX_ERROR) && !std::uncaught_exception())
        {
            RuntimeError('Mutex Release: Failed to release mutex %s: %d', m_name.c_str(), ::GetLastError());
        }
        rc = ::CloseHandle(m_handle);
        if ((rc == CLOSEHANDLE_ERROR) && !std::uncaught_exception())
        {
            RuntimeError('Mutex Release: Failed to close handler %s: %d', m_name.c_str(), ::GetLastError());
        }
        m_handle = NULL;
    }
    
    
    {
    {        // pass on some global option    --TODO: Why is this not done inside each reader??
        size_t nbrUttPerMinibatch = config(L'nbruttsineachrecurrentiter', (size_t) 1);
        m_dataReaders[ioName]->SetNumParallelSequences(nbrUttPerMinibatch);
    }
}
    
    template <class OutputIterator, class BidirectionalIterator, class traits, class charT, class Formatter>
OutputIterator regex_replace(OutputIterator out,
                         BidirectionalIterator first,
                         BidirectionalIterator last,
                         const basic_regex<charT, traits>& e, 
                         Formatter fmt, 
                         match_flag_type flags = match_default)
{
   regex_iterator<BidirectionalIterator, charT, traits> i(first, last, e, flags);
   regex_iterator<BidirectionalIterator, charT, traits> j;
   if(i == j)
   {
      if(!(flags & regex_constants::format_no_copy))
         out = BOOST_REGEX_DETAIL_NS::copy(first, last, out);
   }
   else
   {
      BidirectionalIterator last_m(first);
      while(i != j)
      {
         if(!(flags & regex_constants::format_no_copy))
            out = BOOST_REGEX_DETAIL_NS::copy(i->prefix().first, i->prefix().second, out); 
         out = i->format(out, fmt, flags, e);
         last_m = (*i)[0].second;
         if(flags & regex_constants::format_first_only)
            break;
         ++i;
      }
      if(!(flags & regex_constants::format_no_copy))
         out = BOOST_REGEX_DETAIL_NS::copy(last_m, last, out);
   }
   return out;
}
    
    template <class BidiIterator, class charT, class traits>
bool regex_search(BidiIterator first, BidiIterator last, 
                  const basic_regex<charT, traits>& e, 
                  match_flag_type flags = match_default)
{
   if(e.flags() & regex_constants::failbit)
      return false;
    }
    
    
    {} // namespace boost
    
    
    {} // namespace BOOST_REGEX_DETAIL_NS
    
        Size winSize = Director::getInstance()->getWinSize();
    _fullScreenSize.set(winSize.width, winSize.height);
    _halfScreenSize = _fullScreenSize * 0.5f;
    _offsetX=xOffset;
    _offsetY=yOffset;
    _halfScreenSize.x += _offsetX;
    _halfScreenSize.y += _offsetY;
    
    if (_boundarySet)
    {
        _leftBoundary = -((rect.origin.x+rect.size.width) - _fullScreenSize.x);
        _rightBoundary = -rect.origin.x ;
        _topBoundary = -rect.origin.y;
        _bottomBoundary = -((rect.origin.y+rect.size.height) - _fullScreenSize.y);
    }
    
    
    {    /** Reverse the current control point array inline, without generating a new one.
     * @js NA
     */
    void reverseInline();
    /**
     * @js NA
     * @lua NA
     */
    virtual PointArray* clone() const;
    /**
     * @js NA
     */
    const std::vector<Vec2>& getControlPoints() const;
    /**
     * @js NA
     */
    void setControlPoints(std::vector<Vec2> controlPoints);
private:
    /** Array that contains the control points. */
    std::vector<Vec2> _controlPoints;
};
    
    Vec3 Grid3DAction::getVertex(const Vec2& position) const
{
    Grid3D *g = (Grid3D*)_gridNodeTarget->getGrid();
    return g->getVertex(position);
}
    
        if (action)
    {
        if (action->initWithDuration(duration, gridSize, position, radius, waves, amplitude))
        {
            action->autorelease();
        }
        else
        {
            CC_SAFE_RELEASE_NULL(action);
        }
    }
    
    bool CallFuncN::initWithFunction(const std::function<void (Node *)> &func)
{
    _functionN = func;
    return true;
}
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
    
                // We scale z here to avoid the animation being
            // too much bigger than the screen due to perspective transform
    
    ActionTween *ActionTween::clone() const
{
    return ActionTween::create(_duration, _key, _from, _to);
}
    
    http://www.cocos2d-x.org