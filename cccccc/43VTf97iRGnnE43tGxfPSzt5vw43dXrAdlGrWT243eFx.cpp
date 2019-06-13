
        
            void operator() (const typename internal::VecTraits<T>::vec128 & v_src0,
                     const typename internal::VecTraits<T>::vec128 & v_src1,
                     typename internal::VecTraits<T>::vec128 & v_dst) const
    {
        typename internal::VecTraits<T>::vec128 v_min = internal::vminq(v_src0, v_src1);
        typename internal::VecTraits<T>::vec128 v_max = internal::vmaxq(v_src0, v_src1);
        v_dst = internal::vqsubq(v_max, v_min);
    }
    
    void bitwiseNot(const Size2D &size,
                const u8 *srcBase, ptrdiff_t srcStride,
                u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
        void operator() (const typename internal::VecTraits<T>::vec128 & v_src0, const typename internal::VecTraits<T>::vec128 & v_src1,
              typename internal::VecTraits<T>::unsign::vec128 & v_dst) const
    {
        v_dst = internal::vcgtq(v_src0, v_src1);
    }
    
    
    {} // namespace CAROTENE_NS

    
    #include 'common.hpp'
    
                uint32x4_t v_mask0 = vorrq_u32(vceqq_u32(v_src0, v_maxval4), vceqq_u32(v_src0, v_minval4));
            uint32x4_t v_mask1 = vorrq_u32(vceqq_u32(v_src1, v_maxval4), vceqq_u32(v_src1, v_minval4));
    
    #ifndef __ANDROID__
    u32 step_base = 16 / sizeof(T), step_base3 = step_base * 3;
    size_t roiw_base = size.width >= (step_base - 1) ? size.width - step_base + 1 : 0;
#endif
    u32 step_tail = 8 / sizeof(T), step_tail3 = step_tail * 3;
    size_t roiw_tail = size.width >= (step_tail - 1) ? size.width - step_tail + 1 : 0;
    
    
    {
    {
    {             vec128  vs = internal::vld1q( src + i);
             vec128 vr1 = internal::vld1q(rng1 + i);
             vec128 vr2 = internal::vld1q(rng2 + i);
            uvec128 vd1 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
                     vs = internal::vld1q( src + i + 16/sizeof(T));
                    vr1 = internal::vld1q(rng1 + i + 16/sizeof(T));
                    vr2 = internal::vld1q(rng2 + i + 16/sizeof(T));
            uvec128 vd2 = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            vnst(dst + i, vd1, vd2);
        }
        vtail<T, sizeof(T)>::inRange(src, rng1, rng2, dst, i, size.width);
        for( ; i < size.width; i++ )
            dst[i] = (u8)(-(rng1[i] <= src[i] && src[i] <= rng2[i]));
    }
}
    
    
    {
    {
    {            // make shift
            prevx = currx;
            currx = nextx;
        }
    }
#else
    (void)size;
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)border;
    (void)borderValue;
#endif
}
    
    
    {  Corrupt(kTableFile, 100, 1);
  Check(90, 99);
}
    
    
    {
    {    // Check false positive rate
    double rate = FalsePositiveRate();
    if (kVerbose >= 1) {
      fprintf(stderr, 'False positives: %5.2f%% @ length = %6d ; bytes = %6d\n',
              rate * 100.0, length, static_cast<int>(FilterSize()));
    }
    ASSERT_LE(rate, 0.02);  // Must not be over 2%
    if (rate > 0.0125)
      mediocre_filters++;  // Allowed, but not too often
    else
      good_filters++;
  }
  if (kVerbose >= 1) {
    fprintf(stderr, 'Filters: %d good, %d mediocre\n', good_filters,
            mediocre_filters);
  }
  ASSERT_LE(mediocre_filters, good_filters / 5);
}
    
    #endif /* #if !UCONFIG_NO_TRANSLITERATION */

    
    ScientificNumberFormatter::ScientificNumberFormatter(
        const ScientificNumberFormatter &other)
        : UObject(other),
          fPreExponent(other.fPreExponent),
          fDecimalFormat(NULL),
          fStyle(NULL),
          fStaticSets(other.fStaticSets) {
    fDecimalFormat = static_cast<DecimalFormat *>(
            other.fDecimalFormat->clone());
    fStyle = other.fStyle->clone();
}
    
    
ScriptSet &ScriptSet::set(UScriptCode script, UErrorCode &status) {
    if (U_FAILURE(status)) {
        return *this;
    }
    if (script < 0 || script >= (int32_t)sizeof(bits) * 8) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return *this;
    }
    uint32_t index = script / 32;
    uint32_t bit   = 1 << (script & 31);
    bits[index] |= bit;
    return *this;
}
    
    
    {
    {        if (matchlength > 0) {
            // if matchlength is 0 we are at the start of the iteration
            if (m_search_->isOverlap) {
                offset ++;
            }
            else {
                offset += matchlength;
            }
        }
        return handleNext(offset, status);
    }
    return USEARCH_DONE;
}
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
    
class SimpleDateFormatStaticSets : public UMemory
{
public:
    SimpleDateFormatStaticSets(UErrorCode &status);
    ~SimpleDateFormatStaticSets();
    
    static void    initSets(UErrorCode *status);
    static UBool   cleanup();
    
    static UnicodeSet *getIgnorables(UDateFormatField fieldIndex);
    
private:
    UnicodeSet *fDateIgnorables;
    UnicodeSet *fTimeIgnorables;
    UnicodeSet *fOtherIgnorables;
};
    
    /**
 * UnicodeFunctor API.  Cast 'this' to a UnicodeMatcher* pointer
 * and return the pointer.
 */
UnicodeMatcher* StringMatcher::toMatcher() const {
  StringMatcher  *nonconst_this = const_cast<StringMatcher *>(this);
  UnicodeMatcher *nonconst_base = static_cast<UnicodeMatcher *>(nonconst_this);
  
  return nonconst_base;
}