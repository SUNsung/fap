
        
        template <typename T>
class WithParamInterface {
 public:
  typedef T ParamType;
  virtual ~WithParamInterface() {}
    }
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38>
struct Templates38 {
  typedef TemplateSel<T1> Head;
  typedef Templates37<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38> Tail;
};
    
        private:
        NarratorAnnouncementHostFactory() {}
    
    
    {
    {    private:
        Windows::UI::Xaml::UIElement^ m_host;
    };
}
    
            private:
    
    namespace CalculatorApp
{
    constexpr int64_t WINEVENT_KEYWORD_RESPONSE_TIME = 0x1000000000000;
    }
    
                void SetSourceCurrencyCode(Platform::String^ sourceCurrencyCode) override;
            void SetResponseLanguage(Platform::String^ responseLanguage) override;
    
                // store history in app data functions
            Platform::String^ SerializeHistoryItem(_In_ std::shared_ptr<CalculationManager::HISTORYITEM> const &item);
            void SaveHistory();
    
        /*virtual*/ NDArrayViewPtr Value::Data() const
    {
        if (!m_data)
        {
            RuntimeError('This Value object is invalid and can no longer be accessed. This usually happens when a temporary Value object returned by the CNTK library'
                          ' is not cloned and accessed later after it has been erased by the library. The Value objects created inside and returned by the library from APIs '
                          'like Forward, Backward etc. are temporary and are only guaranteed to be valid until the next Forward/Backward call. If you want to access the Values '
                          'later, you must explicitly clone them.');
        }
    }
    
                // Validate that each of the dynamic axes are unique
            std::unordered_set<Axis> uniqueDynamicAxis;
            for (auto& currentDynamicAxis : dynamicAxes)
            {
                auto retVal = uniqueDynamicAxis.insert(currentDynamicAxis);
                if (!retVal.second)
                    InvalidArgument('Dynamic axis named %S is specified more than once for Variable '%S'', currentDynamicAxis.Name().c_str(), AsString().c_str());
            }
    
        // InputValue must not resize its inputs because that might destroy it. It should already have the correct size.
    virtual void UpdateFunctionMBSize() override
    {
        // don't touch our values
        // But take the opportunity for an additional check. Why not.
        if (Value().GetNumRows() != GetSampleLayout().GetNumElements())
            LogicError('UpdateFunctionMBSize: m_value not matching m_sampleLayout');
    }
    
    
    {        if (aliasInfo.releaseCount == aliasInfo.totalCount)
        {
            RequestRelease((shared_ptr<Matrix<ElemType>>*)aliasInfo.pMatrixPtr);
            aliasInfo.pMatrixPtr = nullptr;
        }
    }
    
        // a count of how many sequnces are packed for a particular frame.
    // reset to zero, and compute from current layout information
    // this information is useful when creating the tensor descriptors for CuDNN.
    numSequencesForFrame2.resize(maxSeqLength);
    fill(numSequencesForFrame2.begin(), numSequencesForFrame2.end(), 0L);
    
    #include <dmlc/omp.h>
#include <xgboost/logging.h>
#include <algorithm>
#include '../common/math.h'
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
      /*!
   * \brief generate predictions for given feature matrix
   * \param dmat feature matrix
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees, this parameter is only valid for gbtree, but not for gblinear
   */
  virtual void PredictBatch(DMatrix* dmat,
                            HostDeviceVector<bst_float>* out_preds,
                            unsigned ntree_limit = 0) = 0;
  /*!
   * \brief online prediction function, predict score for one instance at a time
   *  NOTE: use the batch prediction interface if possible, batch prediction is usually
   *        more efficient than online prediction
   *        This function is NOT threadsafe, make sure you only call from one thread
   *
   * \param inst the instance you want to predict
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction
   * \param root_index the root index
   * \sa Predict
   */
  virtual void PredictInstance(const SparsePage::Inst& inst,
                       std::vector<bst_float>* out_preds,
                       unsigned ntree_limit = 0,
                       unsigned root_index = 0) = 0;
  /*!
   * \brief predict the leaf index of each tree, the output will be nsample * ntree vector
   *        this is only valid in gbtree predictor
   * \param dmat feature matrix
   * \param out_preds output vector to hold the predictions
   * \param ntree_limit limit the number of trees used in prediction, when it equals 0, this means
   *    we do not limit number of trees, this parameter is only valid for gbtree, but not for gblinear
   */
  virtual void PredictLeaf(DMatrix* dmat,
                           std::vector<bst_float>* out_preds,
                           unsigned ntree_limit = 0) = 0;
    
      for (const auto &batch : (*dmat)->GetRowBatches()) {
    ASSERT_EQ(batch[0][0].fvalue, 0.0f);
    ASSERT_EQ(batch[0][1].fvalue, -4.0f);
    ASSERT_EQ(batch[2][0].fvalue, 3.0f);
    ASSERT_EQ(batch[2][1].fvalue, 0.0f);
  }
    
    struct ImFontBuildSrcGlyphFT
{
    GlyphInfo           Info;
    uint32_t            Codepoint;
    unsigned char*      BitmapData;         // Point within one of the dst_tmp_bitmap_buffers[] array
};
    
    // Use if you want to reset your rendering device without losing ImGui state.
IMGUI_IMPL_API void     ImGui_ImplDX9_InvalidateDeviceObjects();
IMGUI_IMPL_API bool     ImGui_ImplDX9_CreateDeviceObjects();

    
    
    {    return 0;
}

    
    IMGUI_IMPL_API bool     ImGui_ImplOpenGL2_Init();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_NewFrame();
IMGUI_IMPL_API void     ImGui_ImplOpenGL2_RenderDrawData(ImDrawData* draw_data);
    
    // [Win32] Our example includes a copy of glfw3.lib pre-compiled with VS2010 to maximize ease of testing and compatibility with old VS compilers.
// To link with VS2010-era libraries, VS2015+ requires linking with legacy_stdio_definitions.lib, which we do using this pragma.
// Your own project should not be affected, as you are likely to link with a newer binary of GLFW that is adequate for your version of Visual Studio.
#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, 'legacy_stdio_definitions')
#endif
    
    
    {    InputTextCallback_UserData cb_user_data;
    cb_user_data.Str = str;
    cb_user_data.ChainCallback = callback;
    cb_user_data.ChainCallbackUserData = user_data;
    return InputTextWithHint(label, hint, (char*)str->c_str(), str->capacity() + 1, flags, InputTextCallback, &cb_user_data);
}

    
        // Decide GL+GLSL versions
#if __APPLE__
    // GL 3.2 Core + GLSL 150
    const char* glsl_version = '#version 150';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG); // Always required on Mac
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
#else
    // GL 3.0 + GLSL 130
    const char* glsl_version = '#version 130';
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
#endif
    
    //
// NOTE: Converting these macros into Templates is desirable, but please see
// issue #16159 [https://github.com/cocos2d/cocos2d-x/pull/16159] for further info
//
#define EASERATE_TEMPLATE_IMPL(CLASSNAME, TWEEN_FUNC) \
CLASSNAME* CLASSNAME::create(cocos2d::ActionInterval *action, float rate) \
{ \
    CLASSNAME *ease = new (std::nothrow) CLASSNAME(); \
    if (ease) \
    { \
        if (ease->initWithAction(action, rate)) \
            ease->autorelease(); \
        else \
            CC_SAFE_RELEASE_NULL(ease); \
    } \
    return ease; \
} \
CLASSNAME* CLASSNAME::clone() const \
{ \
    if(_inner) return CLASSNAME::create(_inner->clone(), _rate); \
    return nullptr; \
} \
void CLASSNAME::update(float time) { \
    _inner->update(TWEEN_FUNC(time, _rate)); \
} \
EaseRateAction* CLASSNAME::reverse() const { \
    return CLASSNAME::create(_inner->reverse(), 1.f / _rate); \
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    void ToggleVisibility::update(float time)
{
    ActionInstant::update(time);
    _target->setVisible(!_target->isVisible());
}
    
        if (action && action->initWithDuration(duration, gridSize))
    {
        action->autorelease();
        return action;
    }
    
    ActionTween* ActionTween::create(float duration, const std::string& key, float from, float to)
{
    ActionTween* ret = new (std::nothrow) ActionTween();
    if (ret && ret->initWithDuration(duration, key, from, to))
    {
        ret->autorelease();
        return ret;
    }
    
    delete ret;
    return nullptr;
}
    
            if ( frameNames.empty() )
        {
            CCLOG('cocos2d: AnimationCache: Animation '%s' found in dictionary without any frames - cannot add to animation cache.', anim.first.c_str());
            continue;
        }
    
    // AtlasNode - RGBA protocol
    
    
    {    //real rect is the size that is in scale with the texture file
    Rect getRealRect(const Rect& rect);
    
    Image* _image;
    unsigned char * _data;
    std::string _filename;
    unsigned int _width;
    unsigned int _height;
    float _scaleFactor;
    unsigned int _threshold;
};