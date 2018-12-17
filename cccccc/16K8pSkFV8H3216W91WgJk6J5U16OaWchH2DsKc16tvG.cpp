
        
        
//--------------------------------------------------------------------------
//
//   Clone
//
//--------------------------------------------------------------------------
RegexPattern  *RegexPattern::clone() const {
    RegexPattern  *copy = new RegexPattern(*this);
    return copy;
}
    
    
#ifndef SELFMTIMPL
#define SELFMTIMPL
    
    // Called by TimeZone::createDefault(), then clone() inside a Mutex - be careful.
SimpleTimeZone &
SimpleTimeZone::operator=(const SimpleTimeZone &right)
{
    if (this != &right)
    {
        TimeZone::operator=(right);
        rawOffset      = right.rawOffset;
        startMonth     = right.startMonth;
        startDay       = right.startDay;
        startDayOfWeek = right.startDayOfWeek;
        startTime      = right.startTime;
        startTimeMode  = right.startTimeMode;
        startMode      = right.startMode;
        endMonth       = right.endMonth;
        endDay         = right.endDay;
        endDayOfWeek   = right.endDayOfWeek;
        endTime        = right.endTime;
        endTimeMode    = right.endTimeMode;
        endMode        = right.endMode;
        startYear      = right.startYear;
        dstSavings     = right.dstSavings;
        useDaylight    = right.useDaylight;
        clearTransitionRules();
    }
    return *this;
}
    
    SimpleDateFormatStaticSets::SimpleDateFormatStaticSets(UErrorCode &status)
: fDateIgnorables(NULL),
  fTimeIgnorables(NULL),
  fOtherIgnorables(NULL)
{
    fDateIgnorables  = new UnicodeSet(UNICODE_STRING('[-,./[:whitespace:]]', 20), status);
    fTimeIgnorables  = new UnicodeSet(UNICODE_STRING('[-.:[:whitespace:]]', 19),  status);
    fOtherIgnorables = new UnicodeSet(UNICODE_STRING('[:whitespace:]', 14),       status);
    }
    
    /**
 * An object that matches a fixed input string, implementing the
 * UnicodeMatcher API.  This object also implements the
 * UnicodeReplacer API, allowing it to emit the matched text as
 * output.  Since the match text may contain flexible match elements,
 * such as UnicodeSets, the emitted text is not the match pattern, but
 * instead a substring of the actual matched text.  Following
 * convention, the output text is the leftmost match seen up to this
 * point.
 *
 * A StringMatcher may represent a segment, in which case it has a
 * positive segment number.  This affects how the matcher converts
 * itself to a pattern but does not otherwise affect its function.
 *
 * A StringMatcher that is not a segment should not be used as a
 * UnicodeReplacer.
 */
class StringMatcher : public UnicodeFunctor, public UnicodeMatcher, public UnicodeReplacer {
    }
    
        if (hasCursor) {
        // Adjust the cursor for positions outside the key.  These
        // refer to code points rather than code units.  If cursorPos
        // is within the output string, then use newStart, which has
        // already been set above.
        if (cursorPos < 0) {
            newStart = start;
            int32_t n = cursorPos;
            // Outside the output string, cursorPos counts code points
            while (n < 0 && newStart > 0) {
                newStart -= U16_LENGTH(text.char32At(newStart-1));
                ++n;
            }
            newStart += n;
        } else if (cursorPos > output.length()) {
            newStart = start + outLen;
            int32_t n = cursorPos - output.length();
            // Outside the output string, cursorPos counts code points
            while (n > 0 && newStart < text.length()) {
                newStart += U16_LENGTH(text.char32At(newStart));
                --n;
            }
            newStart += n;
        } else {
            // Cursor is within output string.  It has been set up above
            // to be relative to start.
            newStart += start;
        }
    }