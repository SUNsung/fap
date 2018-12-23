
        
        #endif  // TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_BFLOAT16_H_

    
    
    {}  // namespace tensorflow

    
    void add(const Size2D &size,
         const u8 * src0Base, ptrdiff_t src0Stride,
         const s16 * src1Base, ptrdiff_t src1Stride,
         s16 *dstBase, ptrdiff_t dstStride,
         CONVERT_POLICY policy)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
            const s32* ln0 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const s32* ln1 = internal::getRowPtr(srcBase, srcStride, i);
        const s32* ln2 = internal::getRowPtr(srcBase, srcStride, i + 1);
        const s32* ln3 = idx_rp2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp2) : tmp;
    
    template <bool L2gradient, bool externalSobel>
inline void Canny3x3(const Size2D &size, s32 cn,
                     const u8 * srcBase, ptrdiff_t srcStride,
                     u8 * dstBase, ptrdiff_t dstStride,
                     s16 * dxBase, ptrdiff_t dxStride,
                     s16 * dyBase, ptrdiff_t dyStride,
                     f64 low_thresh, f64 high_thresh,
                     Margin borderMargin)
{
    s32 low, high;
    prepareThresh<L2gradient>(low_thresh, high_thresh, low, high);
    }
    
        for (size_t y = 0; y < size.height; ++y)
    {
        const type * src0 = internal::getRowPtr(src0Base, src0Stride, y);
        const type * src1 = internal::getRowPtr(src1Base, src1Stride, y);
        u8 * dst = internal::getRowPtr(dstBase, dstStride, y);
        size_t x = 0;
    }
    
    #if !defined(__aarch64__) && defined(__GNUC__) && __GNUC__ == 4 &&  __GNUC_MINOR__ < 6 && !defined(__clang__)
CVT_FUNC(f32, s16, 8,
     register float32x4_t vhalf asm ('q0') = vdupq_n_f32(0.5f);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         __asm__ (
             'vld1.32 {d2-d3}, [%[src]]                               \n\t'
             'vadd.f32 q2, q1, q0                                     \n\t'
             'vcvt.s32.f32 q3, q2                                     \n\t'
             'vqmovn.s32 d8, q3                                       \n\t'
             'vst1.16 {d8}, [%[dst]]                                  \n\t'
             : /*no output*/
             : [src] 'r' (_src + i),
               [dst] 'r' (_dst + i),
               'w' (vhalf)
             : 'd2','d3','d4','d5','d6','d7','d8'
         );
         __asm__ (
             'vld1.32 {d2-d3}, [%[src]]                               \n\t'
             'vadd.f32 q2, q1, q0                                     \n\t'
             'vcvt.s32.f32 q3, q2                                     \n\t'
             'vqmovn.s32 d8, q3                                       \n\t'
             'vst1.16 {d8}, [%[dst]]                                  \n\t'
             : /*no output*/
             : [src] 'r' (_src + i + 4),
               [dst] 'r' (_dst + i + 4),
               'w' (vhalf)
             : 'd2','d3','d4','d5','d6','d7','d8'
         );
     }
})
#else
CVT_FUNC(f32, s16, 8,
     float32x4_t vhalf = vdupq_n_f32(0.5f);,
{
     for (size_t i = 0; i < w; i += 8)
     {
         internal::prefetch(_src + i);
         float32x4_t vline_f32 = vld1q_f32(_src + i);
    }
    }
    
                v_dst.val[0] = vcombine(vget_high(v_src.val[0]), vget_low(v_src.val[0]));
            v_dst.val[1] = vcombine(vget_high(v_src.val[1]), vget_low(v_src.val[1]));
            v_dst.val[2] = vcombine(vget_high(v_src.val[2]), vget_low(v_src.val[2]));
    
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
    
    ScriptSet &ScriptSet::parseScripts(const UnicodeString &scriptString, UErrorCode &status) {
    resetAll();
    if (U_FAILURE(status)) {
        return *this;
    }
    UnicodeString oneScriptName;
    for (int32_t i=0; i<scriptString.length();) {
        UChar32 c = scriptString.char32At(i);
        i = scriptString.moveIndex32(i, 1);
        if (!u_isUWhiteSpace(c)) {
            oneScriptName.append(c);
            if (i < scriptString.length()) {
                continue;
            }
        }
        if (oneScriptName.length() > 0) {
            char buf[40];
            oneScriptName.extract(0, oneScriptName.length(), buf, sizeof(buf)-1, US_INV);
            buf[sizeof(buf)-1] = 0;
            int32_t sc = u_getPropertyValueEnum(UCHAR_SCRIPT, buf);
            if (sc == UCHAR_INVALID_CODE) {
                status = U_ILLEGAL_ARGUMENT_ERROR;
            } else {
                this->set((UScriptCode)sc, status);
            }
            if (U_FAILURE(status)) {
                return *this;
            }
            oneScriptName.remove();
        }
    }
    return *this;
}
    
        UBool      test(UScriptCode script, UErrorCode &status) const;
    ScriptSet &Union(const ScriptSet &other);
    ScriptSet &set(UScriptCode script, UErrorCode &status);
    ScriptSet &reset(UScriptCode script, UErrorCode &status);
    ScriptSet &intersect(const ScriptSet &other);
    ScriptSet &intersect(UScriptCode script, UErrorCode &status);
    UBool      intersects(const ScriptSet &other) const;  // Sets contain at least one script in commmon.
    UBool      contains(const ScriptSet &other) const;    // All set bits in other are also set in this.
    
    void SearchIterator::setMatchLength(int32_t length)
{
    m_search_->matchedLength = length;
}
    
    U_NAMESPACE_BEGIN
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
    
    UnicodeSet *SimpleDateFormatStaticSets::getIgnorables(UDateFormatField fieldIndex)
{
    UErrorCode status = U_ZERO_ERROR;
    umtx_initOnce(gSimpleDateFormatStaticSetsInitOnce, &smpdtfmt_initSets, status);
    if (U_FAILURE(status)) {
        return NULL;
    }
    
    switch (fieldIndex) {
        case UDAT_YEAR_FIELD:
        case UDAT_MONTH_FIELD:
        case UDAT_DATE_FIELD:
        case UDAT_STANDALONE_DAY_FIELD:
        case UDAT_STANDALONE_MONTH_FIELD:
            return gStaticSets->fDateIgnorables;
            
        case UDAT_HOUR_OF_DAY1_FIELD:
        case UDAT_HOUR_OF_DAY0_FIELD:
        case UDAT_MINUTE_FIELD:
        case UDAT_SECOND_FIELD:
        case UDAT_HOUR1_FIELD:
        case UDAT_HOUR0_FIELD:
            return gStaticSets->fTimeIgnorables;
            
        default:
            return gStaticSets->fOtherIgnorables;
    }
}
    
    #endif  // !UCONFIG_NO_FORMATTING

    
    /**
 * Destructor
 */
StringMatcher::~StringMatcher() {
}