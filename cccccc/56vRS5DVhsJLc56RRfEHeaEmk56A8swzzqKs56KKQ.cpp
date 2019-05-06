
        
        
    {}  // namespace caffe
    
    
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
    
      virtual inline int ExactNumBottomBlobs() const { return 3; }
  virtual inline const char* type() const { return 'ContrastiveLoss'; }
  /**
   * Unlike most loss layers, in the ContrastiveLossLayer we can backpropagate
   * to the first two inputs.
   */
  virtual inline bool AllowForceBackward(const int bottom_index) const {
    return bottom_index != 2;
  }
    
      // algorithms for forward and backwards convolutions
  cudnnConvolutionFwdAlgo_t *fwd_algo_;
  cudnnConvolutionBwdFilterAlgo_t *bwd_filter_algo_;
  cudnnConvolutionBwdDataAlgo_t *bwd_data_algo_;
    
    int32 remainder(int32 x, int32 modulus);
int32 TriangulatePolygon(float32* xv, float32* yv, int32 vNum, b2Triangle* results);
bool IsEar(int32 i, float32* xv, float32* yv, int32 xvLength); //Not for external use
int32 PolygonizeTriangles(b2Triangle* triangulated, int32 triangulatedLength, b2Polygon* polys, int32 polysLength);
int32 DecomposeConvex(b2Polygon* p, b2Polygon* results, int32 maxPolys);
//void DecomposeConvexAndAddTo(b2Polygon* p, b2Body* bd, b2FixtureDef* prototype);
    
    //Constructor automatically fixes orientation to ccw
b2Triangle::b2Triangle(float32 x1, float32 y1, float32 x2, float32 y2, float32 x3, float32 y3){
	x = new float32[3];
	y = new float32[3];
	float32 dx1 = x2-x1;
	float32 dx2 = x3-x1;
	float32 dy1 = y2-y1;
	float32 dy2 = y3-y1;
	float32 cross = dx1*dy2-dx2*dy1;
	bool ccw = (cross>0);
	if (ccw){
		x[0] = x1; x[1] = x2; x[2] = x3;
		y[0] = y1; y[1] = y2; y[2] = y3;
	} else{
		x[0] = x1; x[1] = x3; x[2] = x2;
		y[0] = y1; y[1] = y3; y[2] = y2;
	}
}
    
b2Triangle::b2Triangle(){
	x = new float32[3];
	y = new float32[3];
}
    
    
    
    		inline Block4x4Encoding * GetEncoding(void)
		{
			return m_pencoding;
		}
    
    	// ----------------------------------------------------------------------------------------------------
	//
    
    	// ################################################################################
	// Block4x4EncodingBits_A8
	// Encoding bits for the A portion of RGBA8
	// ################################################################################
    
    #endif

    
    #define SHR16(a, shift) SHR16_(a, shift, __FILE__, __LINE__)
static OPUS_INLINE short SHR16_(int a, int shift, char *file, int line)
{
   int res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(shift))
   {
      fprintf (stderr, 'SHR16: inputs are not short: %d >> %d in %s: line %d\n', a, shift, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a>>shift;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'SHR16: output is not short: %d in %s: line %d\n', res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips++;
   return res;
}
#define SHL16(a, shift) SHL16_(a, shift, __FILE__, __LINE__)
static OPUS_INLINE short SHL16_(int a, int shift, char *file, int line)
{
   int res;
   if (!VERIFY_SHORT(a) || !VERIFY_SHORT(shift))
   {
      fprintf (stderr, 'SHL16: inputs are not short: %d %d in %s: line %d\n', a, shift, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   res = a<<shift;
   if (!VERIFY_SHORT(res))
   {
      fprintf (stderr, 'SHL16: output is not short: %d in %s: line %d\n', res, file, line);
#ifdef FIXED_DEBUG_ASSERT
      celt_assert(0);
#endif
   }
   celt_mips++;
   return res;
}
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
    GC_T:
            if (fp->fInputIdx >= fActiveLimit)         goto GC_Done;
            U16_NEXT(inputBuf, fp->fInputIdx, fActiveLimit, c);
            if (sets[URX_GC_T]->contains(c))       goto GC_T;
            U16_PREV(inputBuf, 0, fp->fInputIdx, c);
            goto GC_Extend;
    
    static UBool copyAsSuperscript(
        const UnicodeString &s,
        int32_t beginIndex,
        int32_t endIndex,
        UnicodeString &result,
        UErrorCode &status) {
    if (U_FAILURE(status)) {
        return FALSE;
    }
    for (int32_t i = beginIndex; i < endIndex;) {
        UChar32 c = s.char32At(i);
        int32_t digit = u_charDigitValue(c);
        if (digit < 0) {
            status = U_INVALID_CHAR_FOUND;
            return FALSE;
        }
        result.append(kSuperscriptDigits[digit]);
        i += U16_LENGTH(c);
    }
    return TRUE;
}
    
    SearchIterator::SearchIterator(const SearchIterator &other)
    : UObject(other)
{   
    m_breakiterator_            = other.m_breakiterator_;
    m_text_                     = other.m_text_;
    m_search_                   = (USearch *)uprv_malloc(sizeof(USearch));   
    m_search_->breakIter        = other.m_search_->breakIter;
    m_search_->isCanonicalMatch = other.m_search_->isCanonicalMatch;
    m_search_->isOverlap        = other.m_search_->isOverlap;
    m_search_->elementComparisonType = other.m_search_->elementComparisonType;
    m_search_->matchedIndex     = other.m_search_->matchedIndex;
    m_search_->matchedLength    = other.m_search_->matchedLength;
    m_search_->text             = other.m_search_->text;
    m_search_->textLength       = other.m_search_->textLength;
}
    
    UBool
SelectFormat::operator==(const Format& other) const {
    if (this == &other) {
        return TRUE;
    }
    if (!Format::operator==(other)) {
        return FALSE;
    }
    const SelectFormat& o = (const SelectFormat&)other;
    return msgPattern == o.msgPattern;
}
    
    U_NAMESPACE_BEGIN
    
    #endif
    
    U_NAMESPACE_BEGIN
    
    U_NAMESPACE_END
    
    /**
 * A representation an acceptable range of digit counts for integers.
 */
class U_I18N_API IntDigitCountRange : public UMemory {
public:
    /**
     * No constraints: 0 up to INT32_MAX
     */
    IntDigitCountRange() : fMin(0), fMax(INT32_MAX) { }
    IntDigitCountRange(int32_t min, int32_t max);
    int32_t pin(int32_t digitCount) const;
    int32_t getMax() const { return fMax; }
    int32_t getMin() const { return fMin; }
private:
    int32_t fMin;
    int32_t fMax;
};
    
    #if !UCONFIG_NO_FORMATTING
    
    #endif   // #if !UCONFIG_NO_FORMATTING
#endif   // SMPDTFST_H

    
    int32_t StandardPlural::indexOrNegativeFromString(const char *keyword) {
    switch (*keyword++) {
    case 'f':
        if (uprv_strcmp(keyword, 'ew') == 0) {
            return FEW;
        }
        break;
    case 'm':
        if (uprv_strcmp(keyword, 'any') == 0) {
            return MANY;
        }
        break;
    case 'o':
        if (uprv_strcmp(keyword, 'ther') == 0) {
            return OTHER;
        } else if (uprv_strcmp(keyword, 'ne') == 0) {
            return ONE;
        }
        break;
    case 't':
        if (uprv_strcmp(keyword, 'wo') == 0) {
            return TWO;
        }
        break;
    case 'z':
        if (uprv_strcmp(keyword, 'ero') == 0) {
            return ZERO;
        }
        break;
    default:
        break;
    }
    return -1;
}
    
        for (int32_t i=0; i<output.length(); ++i) {
        if (hasCursor && i == cursor) {
            ICU_Utility::appendToRule(rule, (UChar)0x007C /*|*/, TRUE, escapeUnprintable, quoteBuf);
        }
        UChar c = output.charAt(i); // Ok to use 16-bits here
    }