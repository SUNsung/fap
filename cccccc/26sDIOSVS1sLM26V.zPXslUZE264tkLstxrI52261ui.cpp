
        
            void operator() (const typename internal::VecTraits<T>::vec64 & v_src0,
                     const typename internal::VecTraits<T>::vec64 & v_src1,
                     typename internal::VecTraits<T>::vec64 & v_dst) const
    {
        v_dst = internal::vqadd(v_src0, v_src1);
    }
    
        void operator() (const uint8x8_t & v_src0, const uint8x8_t & v_src1,
                     uint8x8_t & v_dst) const
    {
        v_dst = vand_u8(v_src0, v_src1);
    }
    
    #ifdef CAROTENE_NEON
    
    namespace CAROTENE_NS {
    }
    
            for (; j < roiw16; j += 16)
        {
            internal::prefetch(src + j);
            uint8x16_t v_src = vld1q_u8(src + j);
            int16x8_t v_dst0 = vreinterpretq_s16_u16(vmovl_u8(vget_low_u8(v_src)));
            int16x8_t v_dst1 = vreinterpretq_s16_u16(vmovl_u8(vget_high_u8(v_src)));
    }
    
            if (s[0] < 0 || s[1] < 0)//saturate in case of overflow ~ 8GB of non-zeros...
        {
            return 0x7fFFffFF;
        }
        result += (s[0] += s[1]);
        if (s[0] < 0 || result < 0)
        {
            return 0x7fFFffFF;
        }
    
    void fillMinMaxLocs(const Size2D & size,
                    const u16 * srcBase, ptrdiff_t srcStride,
                    u16 minVal, size_t * minLocPtr, s32 & minLocCount, s32 minLocCapacity,
                    u16 maxVal, size_t * maxLocPtr, s32 & maxLocCount, s32 maxLocCapacity)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    size_t roiw16 = size.width >= 15 ? size.width - 15 : 0;
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
    #include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
    
        deleteLinkedList(head);
    
                    if( stack.size() == 0 )
                    return false;
    
    
int main() {
    }
    
            stack<TreeNode*> stack;
        TreeNode* cur = root;
        while(cur != NULL || !stack.empty()){
    }
    
    
    {    return 0;
}

    
            vector<int> res;
        if(root == NULL)
            return res;
    
            case URX_STO_INP_LOC:
            {
                U_ASSERT(opValue >= 0 && opValue < fFrameSize);
                fp->fExtra[opValue] = fp->fInputIdx;
            }
            break;
    
    UnicodeString &ScientificNumberFormatter::MarkupStyle::format(
        const UnicodeString &original,
        FieldPositionIterator &fpi,
        const UnicodeString &preExponent,
        const DecimalFormatStaticSets & /*unusedDecimalFormatSets*/,
        UnicodeString &appendTo,
        UErrorCode &status) const {
    if (U_FAILURE(status)) {
        return appendTo;
    }
    FieldPosition fp;
    int32_t copyFromOffset = 0;
    while (fpi.next(fp)) {
        switch (fp.getField()) {
        case UNUM_EXPONENT_SYMBOL_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            copyFromOffset = fp.getEndIndex();
            appendTo.append(preExponent);
            appendTo.append(fBeginMarkup);
            break;
        case UNUM_EXPONENT_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getEndIndex() - copyFromOffset);
            copyFromOffset = fp.getEndIndex();
            appendTo.append(fEndMarkup);
            break;
        default:
            break;
        }
    }
    appendTo.append(
            original, copyFromOffset, original.length() - copyFromOffset);
    return appendTo;
}
    
    // SharedBreakIterator encapsulates a shared BreakIterator. Because
// BreakIterator has mutable semantics, clients must ensure that all uses
// of a particular shared BreakIterator is protected by the same mutex
// ensuring that only one thread at a time gets access to that shared
// BreakIterator. Clients can accomplish this by creating a mutex for all
// uses of break iterator within a particular class. Then objects of that
// class may then freely share break iterators among themselves. However,
// these shared break iterators must never be exposed outside of that class.
class U_I18N_API SharedBreakIterator : public SharedObject {
public:
    SharedBreakIterator(BreakIterator *biToAdopt);
    virtual ~SharedBreakIterator();
    }
    
    #include 'utypeinfo.h'  // for 'typeid' to work
    
        case UDAT_DOW_LOCAL_FIELD:
        if (gotNumber) // i.e., e or ee
        {
            // [We computed 'value' above.]
            cal.set(UCAL_DOW_LOCAL, value);
            return pos.getIndex();
        }
        // else for eee-eeeee fall through to handling of EEE-EEEEE
        // fall through, do not break here
        U_FALLTHROUGH;
    case UDAT_DAY_OF_WEEK_FIELD:
        {
            // Want to be able to parse both short and long forms.
            // Try count == 4 (EEEE) wide first:
            int32_t newStart = 0;
            if(getBooleanAttribute(UDAT_PARSE_MULTIPLE_PATTERNS_FOR_MATCH, status) || count == 4) {
                if ((newStart = matchString(text, start, UCAL_DAY_OF_WEEK,
                                          fSymbols->fWeekdays, fSymbols->fWeekdaysCount, NULL, cal)) > 0)
                    return newStart;
            }
            // EEEE wide failed, now try EEE abbreviated
            if(getBooleanAttribute(UDAT_PARSE_MULTIPLE_PATTERNS_FOR_MATCH, status) || count == 3) {
                if ((newStart = matchString(text, start, UCAL_DAY_OF_WEEK,
                                       fSymbols->fShortWeekdays, fSymbols->fShortWeekdaysCount, NULL, cal)) > 0)
                    return newStart;
            }
            // EEE abbreviated failed, now try EEEEEE short
            if(getBooleanAttribute(UDAT_PARSE_MULTIPLE_PATTERNS_FOR_MATCH, status) || count == 6) {
                if ((newStart = matchString(text, start, UCAL_DAY_OF_WEEK,
                                       fSymbols->fShorterWeekdays, fSymbols->fShorterWeekdaysCount, NULL, cal)) > 0)
                    return newStart;
            }
            // EEEEEE short failed, now try EEEEE narrow
            if(getBooleanAttribute(UDAT_PARSE_MULTIPLE_PATTERNS_FOR_MATCH, status) || count == 5) {
                if ((newStart = matchString(text, start, UCAL_DAY_OF_WEEK,
                                       fSymbols->fNarrowWeekdays, fSymbols->fNarrowWeekdaysCount, NULL, cal)) > 0)
                    return newStart;
            }
            if (!getBooleanAttribute(UDAT_PARSE_ALLOW_NUMERIC, status) || patternCharIndex == UDAT_DAY_OF_WEEK_FIELD)
                return newStart;
            // else we allowing parsing as number, below
        }
        break;
    
        // are we comparing different lengths?
    int32_t minLength = getLength();
    int32_t targetLength = target.getLength();
    if (minLength < targetLength) {
        result = UCOL_LESS;
    } else if (minLength == targetLength) {
        result = UCOL_EQUAL;
    } else {
        minLength = targetLength;
        result = UCOL_GREATER;
    }
    
        /**
     * Sets U_ILLEGAL_ARGUMENT_ERROR if the keyword is not a plural form.
     *
     * @param keyword for example 'few' or 'other'
     * @return the plural form corresponding to the keyword
     */
    static Form fromString(const char *keyword, UErrorCode &errorCode) {
        return static_cast<Form>(indexFromString(keyword, errorCode));
    }
    
    /**
 * UnicodeReplacer API
 */
int32_t StringMatcher::replace(Replaceable& text,
                               int32_t start,
                               int32_t limit,
                               int32_t& /*cursor*/) {
    
    int32_t outLen = 0;
    
    // Copy segment with out-of-band data
    int32_t dest = limit;
    // If there was no match, that means that a quantifier
    // matched zero-length.  E.g., x (a)* y matched 'xy'.
    if (matchStart >= 0) {
        if (matchStart != matchLimit) {
            text.copy(matchStart, matchLimit, dest);
            outLen = matchLimit - matchStart;
        }
    }
    
    text.handleReplaceBetween(start, limit, UnicodeString()); // delete original text
    
    return outLen;
}