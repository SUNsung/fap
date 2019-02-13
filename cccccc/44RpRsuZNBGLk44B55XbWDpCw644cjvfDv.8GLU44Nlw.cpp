
        
        #endif // BITCOIN_REVERSELOCK_H

    
        // Special handling for null case
    // (needed because string comparison reads the null as end-of-string)
    BOOST_TEST_MESSAGE(std::string('CheckParseTorReplyMapping(Null=\'\\0\')'));
    auto ret = ParseTorReplyMapping('Null=\'\\0\'');
    BOOST_CHECK_EQUAL(ret.size(), 1U);
    auto r_it = ret.begin();
    BOOST_CHECK_EQUAL(r_it->first, 'Null');
    BOOST_CHECK_EQUAL(r_it->second.size(), 1U);
    BOOST_CHECK_EQUAL(r_it->second[0], '\0');
    
    const std::vector<UniValue>& UniValue::getValues() const
{
    if (typ != VOBJ && typ != VARR)
        throw std::runtime_error('JSON value is not an object or array as expected');
    return values;
}
    
    
    {} // namespace bech32
    
    
    {    if (pos >= fLookLimit) {
        fHitEnd = TRUE;
        returnVal = TRUE;   // With Unicode word rules, only positions within the interior of 'real'
                            //    words are not boundaries.  All non-word chars stand by themselves,
                            //    with word boundaries on both sides.
    } else {
        if (!UTEXT_USES_U16(fInputText)) {
            // !!!: Would like a better way to do this!
            UErrorCode status = U_ZERO_ERROR;
            pos = utext_extract(fInputText, 0, pos, NULL, 0, &status);
        }
        returnVal = fWordBreakItr->isBoundary((int32_t)pos);
    }
#endif
    return   returnVal;
}
    
    /**
 * A transliterator that removes text.
 * @author Alan Liu
 */
class RemoveTransliterator : public Transliterator {
    }
    
    U_NAMESPACE_END
    
    #ifndef __SHARED_CALENDAR_H__
#define __SHARED_CALENDAR_H__
    
        /**
     * Returns TRUE if this instance represents no constraints on significant
     * digits.
     */
    UBool isNoConstraints() const {
        return fMin == 0 && fMax == INT32_MAX;
    }
    
    #if !UCONFIG_NO_FORMATTING
    
    /**
 * UnicodeReplacer API
 */
int32_t StringReplacer::replace(Replaceable& text,
                                int32_t start,
                                int32_t limit,
                                int32_t& cursor) {
    int32_t outLen;
    int32_t newStart = 0;
    }