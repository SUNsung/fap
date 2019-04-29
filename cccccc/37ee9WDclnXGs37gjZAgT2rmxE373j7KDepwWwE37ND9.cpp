
        
        #define TEGRA_ABSDIFF(src1, sz1, src2, sz2, dst, sz, w, h) \
( \
    CAROTENE_NS::isSupportedConfiguration() ? \
    CAROTENE_NS::absDiff(CAROTENE_NS::Size2D(w, h), \
                     src1, sz1, \
                     src2, sz2, \
                     dst, sz), \
    CV_HAL_ERROR_OK \
    : CV_HAL_ERROR_NOT_IMPLEMENTED \
)
    
        void minMaxVals(const Size2D &size,
                    const s32 *srcBase, ptrdiff_t srcStride,
                    s32 * minVal, s32 * maxVal);
    
            //horizontal convolution (2 lines from previous iteration)
        if (i > 0)
        {
            f32* dstb = internal::getRowPtr(dstBase, dstStride, i-1);
            x = 0;
            for (; x <= colsn - 4; x += 4)
            {
                internal::prefetch(laneA + x + cn);
                internal::prefetch(laneB + x + cn);
box3x3f32_horiz:
                float32x4_t lane0a = vld1q_f32(laneA + x - cn);
                float32x4_t lane2a = vld1q_f32(laneA + x + cn);
                float32x4_t lane1a = vld1q_f32(laneA + x);
    }
    }
    
    #define  VROW_LINE(type, n) const type * src##n = internal::getRowPtr(src##n##Base, src##n##Stride, i);
#define  PREF_LINE(type, n) internal::prefetch(src##n + sj);
#define VLD1Q_LINE(type, n) v_dst.val[n] = vld1q_##type(src##n + sj);
#define  PRLD_LINE(type, n) internal::prefetch(src##n + sj); v_dst.val[n] = vld1q_##type(src##n + sj);
#define  VLD1_LINE(type, n) v_dst.val[n] = vld1_##type(src##n + sj);
#define   SLD_LINE(type, n) dst[dj + n] = src##n[sj];
    
                v_src0 = internal::vld1q(src0 + x);
            v_src1 = internal::vld1q(src1 + x);
            op(v_src0, v_src1, v_dst);
            internal::vst1q(dst + x, v_dst);
            x+=16;
        }
        if( x + 8 < width)
        {
            vec64  v_src0, v_src1;
            uvec64 v_dst;
    
    template <typename T>
inline T *getRowPtr(T *base, ptrdiff_t stride, size_t row)
{
    char *baseRaw = const_cast<char *>(reinterpret_cast<const char *>(base));
    return reinterpret_cast<T *>(baseRaw + ptrdiff_t(row) * stride);
}
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const s16 * src = internal::getRowPtr(srcBase, srcStride, i);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
    #include <limits>
    
    
    {} // namespace
    
    #include <string>
#include <vector>
    
    
<details>
    
    OPERATOR_SCHEMA(Floor)
    .NumInputs(1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .SetDoc(R'DOC(
Element-wise application of the floor function ($y=floor(x)$) to the input
tensor `X`. Output tensor shape is the same as the input tensor. This
operator can be used in an in-place fashion by using the same input blob as the
output blob.
    
    #include 'b2Triangle.h'
#include 'b2Polygon.h'
    
    #ifndef B2_TRIANGLE_H
#define B2_TRIANGLE_H
    
    		m_fError = -1.0f;
    
    #ifndef FASTLZ_H
#define FASTLZ_H
    
    #   define S_MUL(a,b) ( (a)*(b) )
#define C_MUL(m,a,b) \
    do{ (m).r = (a).r*(b).r - (a).i*(b).i;\
        (m).i = (a).r*(b).i + (a).i*(b).r; }while(0)
#define C_MULC(m,a,b) \
    do{ (m).r = (a).r*(b).r + (a).i*(b).i;\
        (m).i = (a).i*(b).r - (a).r*(b).i; }while(0)
    
    /* This appears to be the same speed as C99's fabsf() but it's more portable. */
#define ABS16(x) ((float)fabs(x))
#define ABS32(x) ((float)fabs(x))
    
    
    {    return;
}
    
            int res = 1;
        int index = nextDifferentCharacterIndex(nums, 1);
        int i = 1;
        while(index < nums.size()){
            res ++;
            nums[i++] = nums[index];
            index = nextDifferentCharacterIndex(nums, index + 1);
        }
    
    
    {    return 0;
}
    
    
    {
    {        ListNode* tail = head->next;
        ListNode* ret = reverse(head->next, index - 1, left);
        tail->next = head;
        return ret;
    }
};
    
            stack<TreeNode*> stack;
        stack.push(root);
        while(!stack.empty()){
            TreeNode* curNode = stack.top();
            stack.pop();
            res.push_back(curNode->val);
    }
    
    
void print_vec(const vector<int>& vec){
    for(int e: vec)
        cout << e << ' ';
    cout << endl;
}
    
      const dmlc::RowBlock<IndexType>& Value() const override {
    return out_;
  }
    
     private:
  StreamBufferReader reader_;
  int tmp_ch;
  int num_prev;
  unsigned char buf_prev[2];
  // whether we need to do strict check
  static const bool kStrictCheck = false;
};
/*! \brief the stream that write to base64, note we take from file pointers */
class Base64OutStream: public dmlc::Stream {
 public:
  explicit Base64OutStream(dmlc::Stream *fp) : fp(fp) {
    buf_top = 0;
  }
  virtual void Write(const void *ptr, size_t size) {
    using base64::EncodeTable;
    size_t tlen = size;
    const unsigned char *cptr = static_cast<const unsigned char*>(ptr);
    while (tlen) {
      while (buf_top < 3  && tlen != 0) {
        buf[++buf_top] = *cptr++; --tlen;
      }
      if (buf_top == 3) {
        // flush 4 bytes out
        PutChar(EncodeTable[buf[1] >> 2]);
        PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
        PutChar(EncodeTable[((buf[2] << 2) | (buf[3] >> 6)) & 0x3F]);
        PutChar(EncodeTable[buf[3] & 0x3F]);
        buf_top = 0;
      }
    }
  }
  virtual size_t Read(void *ptr, size_t size) {
    LOG(FATAL) << 'Base64OutStream do not support read';
    return 0;
  }
  /*!
   * \brief finish writing of all current base64 stream, do some post processing
   * \param endch character to put to end of stream, if it is EOF, then nothing will be done
   */
  inline void Finish(char endch = EOF) {
    using base64::EncodeTable;
    if (buf_top == 1) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[(buf[1] << 4) & 0x3F]);
      PutChar('=');
      PutChar('=');
    }
    if (buf_top == 2) {
      PutChar(EncodeTable[buf[1] >> 2]);
      PutChar(EncodeTable[((buf[1] << 4) | (buf[2] >> 4)) & 0x3F]);
      PutChar(EncodeTable[(buf[2] << 2) & 0x3F]);
      PutChar('=');
    }
    buf_top = 0;
    if (endch != EOF) PutChar(endch);
    this->Flush();
  }
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    
    {/*!
 * \brief Macro to register objective function.
 *
 * \code
 * // example of registering a objective
 * XGBOOST_REGISTER_OBJECTIVE(LinearRegression, 'reg:linear')
 * .describe('Linear regression objective')
 * .set_body([]() {
 *     return new RegLossObj(LossType::kLinearSquare);
 *   });
 * \endcode
 */
#define XGBOOST_REGISTER_OBJECTIVE(UniqueId, Name)                      \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::ObjFunctionReg &              \
  __make_ ## ObjFunctionReg ## _ ## UniqueId ## __ =                    \
      ::dmlc::Registry< ::xgboost::ObjFunctionReg>::Get()->__REGISTER__(Name)
}  // namespace xgboost
#endif  // XGBOOST_OBJECTIVE_H_

    
    template<typename DType>
inline void CompressArray<DType>::Write(dmlc::Stream* fo) {
  encoded_chunks_.clear();
  encoded_chunks_.push_back(0);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    encoded_chunks_.push_back(encoded_chunks_.back() + out_buffer_[i].length());
  }
  fo->Write(raw_chunks_);
  fo->Write(encoded_chunks_);
  for (const std::string& buf : out_buffer_) {
    fo->Write(dmlc::BeginPtr(buf), buf.length());
  }
}
    
        const auto ngroup = static_cast<bst_omp_uint>(gptr.size() - 1);
    #pragma omp parallel
    {
      // parall construct, declare random number generator here, so that each
      // thread use its own random number generator, seed by thread id and current iteration
      common::RandomEngine rnd(iter * 1111 + omp_get_thread_num());
    }
    
    float SimpleDMatrix::GetColDensity(size_t cidx) {
  size_t column_size = 0;
  // Use whatever version of column batches already exists
  if (sorted_column_page_) {
    auto batch = this->GetSortedColumnBatches();
    column_size = (*batch.begin())[cidx].size();
  } else {
    auto batch = this->GetColumnBatches();
    column_size = (*batch.begin())[cidx].size();
  }
    }
    
    
    {    return ret;
}
    
    
    {    delete ret;
    return nullptr;
}
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual Place* reverse() const override;
    virtual Place* clone() const override;
    
CC_CONSTRUCTOR_ACCESS:
    Place(){}
    virtual ~Place(){}
    
    NS_CC_BEGIN
    
    
    {    for (int i = 0; i < _gridSize.width; ++i)
    {
        for ( int j = 0; j < _gridSize.height; ++j)
        {
            tileArray->position.set((float)i, (float)j);
            tileArray->startPosition.set((float)i, (float)j);
            tileArray->delta = getDelta(Size(i, j));
            ++tileArray;
        }
    }
}
    
        /** 
    * @brief Initializes the action with grid size, random seed and duration.
    * @param duration Specify the duration of the ShuffleTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @param seed Specify the random seed.
    * @return If the Initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, unsigned int seed);
    
    void ActionTween::startWithTarget(Node *target)
{
    CCASSERT(dynamic_cast<ActionTweenDelegate*>(target), 'target must implement ActionTweenDelegate');
    ActionInterval::startWithTarget(target);
    _delta = _to - _from;
}
    
     @since v0.99.2
 */
class CC_DLL ActionTween : public ActionInterval
{
public:
    /** 
     * @brief Create and initializes the action with the property name (key), and the from and to parameters.
     * @param duration The duration of the ActionTween. It's a value in seconds.
     * @param key The key of property which should be updated.
     * @param from The value of the specified property when the action begin.
     * @param to The value of the specified property when the action end.
     * @return If the creation success, return a pointer of ActionTween; otherwise, return nil.
     */
    static ActionTween* create(float duration, const std::string& key, float from, float to);
    }
    
    
    {}
    
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
    
    private:
    void parseVersion1(const ValueMap& animations);
    void parseVersion2(const ValueMap& animations);