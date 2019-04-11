
        
        TEST(MovableMessageTest, Noexcept) {
  EXPECT_TRUE(
      std::is_nothrow_move_constructible<protobuf_unittest::TestAllTypes>());
  EXPECT_TRUE(std::is_nothrow_move_assignable<protobuf_unittest::TestAllTypes>());
}
    
    #include <google/protobuf/stubs/common.h>
#include <gtest/gtest.h>
    
    
    {
    {
    {
}  // namespace internal
}  // namespace protobuf
}  // namespace google
    
    #ifdef _WIN32
#ifndef STDIN_FILENO
#define STDIN_FILENO 0
#endif
#ifndef STDOUT_FILENO
#define STDOUT_FILENO 1
#endif
#endif
    
        std::vector<std::pair<string,string>> option_pairs;
    ParseGeneratorParameter(parameter, &option_pairs);
    
    
    {
    {    cout << 'Is this a mobile, home, or work phone? ';
    string type;
    getline(cin, type);
    if (type == 'mobile') {
      phone_number->set_type(tutorial::Person::MOBILE);
    } else if (type == 'home') {
      phone_number->set_type(tutorial::Person::HOME);
    } else if (type == 'work') {
      phone_number->set_type(tutorial::Person::WORK);
    } else {
      cout << 'Unknown phone type.  Using default.' << endl;
    }
  }
  *person->mutable_last_updated() = TimeUtil::SecondsToTimestamp(time(NULL));
}
    
    #ifndef B2_TRIANGLE_H
#define B2_TRIANGLE_H
    
    		Image				*m_pimageSource;
		unsigned int		m_uiSourceH;
		unsigned int		m_uiSourceV;
		ErrorMetric			m_errormetric;
		ColorFloatRGBA		m_afrgbaSource[PIXELS];		// vertical scan
    
    		m_pblockParent = a_pblockParent;
    
      The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.
    
    
/** 16x32 multiplication, followed by a 15-bit shift right. Results fits in 32 bits */
#undef MULT16_32_Q15
static OPUS_INLINE opus_val32 MULT16_32_Q15_armv4(opus_val16 a, opus_val32 b)
{
  unsigned rd_lo;
  int rd_hi;
  __asm__(
      '#MULT16_32_Q15\n\t'
      'smull %0, %1, %2, %3\n\t'
      : '=&r'(rd_lo), '=&r'(rd_hi)
      : '%r'(b), 'r'(a<<16)
  );
  /*We intentionally don't OR in the high bit of rd_lo for speed.*/
  return rd_hi<<1;
}
#define MULT16_32_Q15(a, b) (MULT16_32_Q15_armv4(a, b))
    
            virtual Dictionary GetCheckpointState() const override;
        virtual void RestoreFromCheckpoint(const Dictionary& checkpoint) override;
    
    size_t DataReader::GetCurrentSamplePosition()
{
    // BUGBUG: composition of old readers is not supported.
    // Returning just for the last reader.
    return m_dataReaders[m_ioNames.back()]->GetCurrentSamplePosition();
}
    
    // TODO: can this be static?
template <class ElemType>
void Microsoft::MSR::CNTK::UpdateRunningAverage(ComputationNode<ElemType>& newInput,
                                                TensorView<ElemType>& runningAverage, size_t& runningCount)
{
    FrameRange fr(newInput.GetMBLayout());
    // Set gaps to zero, since we are reducing in time.
    newInput.MaskMissingValueColumnsToZero(fr);
    }
    
        template <class ElemType>
    MemRequestInfo<ElemType>* GetMemInfo(shared_ptr<Matrix<ElemType>> *pMatrixPtr)
    {
        vector<MemRequestInfo<ElemType>>& memInfoVec = GetMemRequestInfoVec<ElemType>();
        // iterate through the vector and find the pointer memInfo
        for (auto& memInfo : memInfoVec)
        {
            if (memInfo.pMatrixPtrs[0] == pMatrixPtr)
                return &memInfo;
        }
        return nullptr;
    }
    
    #include 'unicode/utypes.h'
    
        UBool      test(UScriptCode script, UErrorCode &status) const;
    ScriptSet &Union(const ScriptSet &other);
    ScriptSet &set(UScriptCode script, UErrorCode &status);
    ScriptSet &reset(UScriptCode script, UErrorCode &status);
    ScriptSet &intersect(const ScriptSet &other);
    ScriptSet &intersect(UScriptCode script, UErrorCode &status);
    UBool      intersects(const ScriptSet &other) const;  // Sets contain at least one script in commmon.
    UBool      contains(const ScriptSet &other) const;    // All set bits in other are also set in this.
    
    void SearchIterator::setAttribute(USearchAttribute       attribute,
                                  USearchAttributeValue  value,
                                  UErrorCode            &status)
{
    if (U_SUCCESS(status)) {
        switch (attribute)
        {
        case USEARCH_OVERLAP :
            m_search_->isOverlap = (value == USEARCH_ON ? TRUE : FALSE);
            break;
        case USEARCH_CANONICAL_MATCH :
            m_search_->isCanonicalMatch = (value == USEARCH_ON ? TRUE : FALSE);
            break;
        case USEARCH_ELEMENT_COMPARISON :
            if (value == USEARCH_PATTERN_BASE_WEIGHT_IS_WILDCARD || value == USEARCH_ANY_BASE_WEIGHT_IS_WILDCARD) {
                m_search_->elementComparisonType = (int16_t)value;
            } else {
                m_search_->elementComparisonType = 0;
            }
            break;
        default:
            status = U_ILLEGAL_ARGUMENT_ERROR;
        }
    }
    if (value == USEARCH_ATTRIBUTE_VALUE_COUNT) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
    }
}
    
    Format* SelectFormat::clone() const
{
    return new SelectFormat(*this);
}
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
        /**
     * Get maximum significant digits. 0 means no minimum.
     */
    int32_t getMin() const {
        return fMin;
    }
    
    int32_t 
SmallIntFormatter::estimateDigitCount(
        int32_t positiveValue, const IntDigitCountRange &range) {
    if (positiveValue >= gMaxFastInt) {
        return range.getMax();
    }
    return range.pin(gDigitCount[positiveValue]);
}
    
    static const UChar gZero[] = { 0x7A, 0x65, 0x72, 0x6F };
static const UChar gOne[] = { 0x6F, 0x6E, 0x65 };
static const UChar gTwo[] = { 0x74, 0x77, 0x6F };
static const UChar gFew[] = { 0x66, 0x65, 0x77 };
static const UChar gMany[] = { 0x6D, 0x61, 0x6E, 0x79 };
static const UChar gOther[] = { 0x6F, 0x74, 0x68, 0x65, 0x72 };
    
    /**
 * UnicodeFunctor API
 */
void StringReplacer::setData(const TransliterationRuleData* d) {
    data = d;
    int32_t i = 0;
    while (i<output.length()) {
        UChar32 c = output.char32At(i);
        UnicodeFunctor* f = data->lookup(c);
        if (f != NULL) {
            f->setData(data);
        }
        i += U16_LENGTH(c);
    }
}
    
    
  virtual ~Extension_shutdown_presult() throw();
    
    
    {};
    
    class ExtensionException;
    
    
    {
    {
    {  for (const auto& share_line : osquery::split(content, '\n')) {
    genNFSShare(share_line, results);
  }
  return results;
}
}
}

    
    /*
** This routine reads a line of text from FILE in, stores
** the text in memory obtained from malloc() and returns a pointer
** to the text.  NULL is returned at end of file, or if malloc()
** fails.
**
** If zLine is not NULL then it is a malloced buffer returned from
** a previous call to this routine that may be reused.
*/
static char* local_getline(char* zLine, FILE* in) {
  int nLine = ((zLine == nullptr) ? 0 : 100);
  int n = 0;
    }
    
    #include <osquery/core.h>
#include <osquery/utils/expected/expected.h>
#include <osquery/utils/status/status.h>
    
    namespace osquery {
namespace table_tests {
    }
    }
    
    class kernelExtensions : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};
    
    // Sanity check integration test for kernel_integrity
// Spec file: specs/linux/kernel_integrity.table
    
        /* Sets the Eye value of the Camera. 
     * 
     * @param eye The Eye value of the Camera.
     * @js NA
     */
    void setEye(const Vec3 &eye);
    void setEye(float x, float y, float z);
    /* Returns the Eye value of the Camera. 
     *
     * @return The Eye value of the Camera.
     * @js NA
     */
    const Vec3& getEye() const { return _eye; }
    /* Sets the Center value of the Camera. 
     *
     * @param center The Center value of the Camera.
     * @js NA
     */
    void setCenter(const Vec3 &center);
    /* Returns the Center value of the Camera. 
     *
     * @return The Center value of the Camera.
     * @js NA
     */
    const Vec3& getCenter() const { return _center; }
    /* Sets the Up value of the Camera. 
     *
     * @param up The Up value of the Camera.
     * @js NA
     */
    void setUp(const Vec3 &up);
    /* Returns the Up value of the Camera. 
     *
     * @return The Up value of the Camera.
     * @js NA
     */
    const Vec3& getUp() const { return _up; }
    
        /**
    @brief Create an action with duration, grid size.
    @param duration Specify the duration of the PageTurn3D action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @return If the creation success, return a pointer of PageTurn3D action; otherwise, return nil.
    */
    static PageTurn3D* create(float duration, const Size& gridSize);
    
    // implementation of SplitCols
    
    
    {    frame->autorelease();
    return frame;
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
    
    NS_CC_BEGIN