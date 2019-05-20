
        
        U_NAMESPACE_END
    
    
    
        // for 'ee' or 'e', use local numeric day-of-the-week
    // for 'EEEEEE' or 'eeeeee', write out the short day-of-the-week name
    // for 'EEEEE' or 'eeeee', write out the narrow day-of-the-week name
    // for 'EEEE' or 'eeee', write out the wide day-of-the-week name
    // for 'EEE' or 'EE' or 'E' or 'eee', write out the abbreviated day-of-the-week name
    case UDAT_DOW_LOCAL_FIELD:
        if ( count < 3 ) {
            zeroPaddingNumber(currentNumberFormat,appendTo, value, count, maxIntCount);
            break;
        }
        // fall through to EEEEE-EEE handling, but for that we don't want local day-of-week,
        // we want standard day-of-week, so first fix value to work for EEEEE-EEE.
        value = cal.get(UCAL_DAY_OF_WEEK, status);
        if (U_FAILURE(status)) {
            return;
        }
        // fall through, do not break here
        U_FALLTHROUGH;
    case UDAT_DAY_OF_WEEK_FIELD:
        if (count == 5) {
            _appendSymbol(appendTo, value, fSymbols->fNarrowWeekdays,
                          fSymbols->fNarrowWeekdaysCount);
            capContextUsageType = DateFormatSymbols::kCapContextUsageDayNarrow;
        } else if (count == 4) {
            _appendSymbol(appendTo, value, fSymbols->fWeekdays,
                          fSymbols->fWeekdaysCount);
            capContextUsageType = DateFormatSymbols::kCapContextUsageDayFormat;
        } else if (count == 6) {
            _appendSymbol(appendTo, value, fSymbols->fShorterWeekdays,
                          fSymbols->fShorterWeekdaysCount);
            capContextUsageType = DateFormatSymbols::kCapContextUsageDayFormat;
        } else {
            _appendSymbol(appendTo, value, fSymbols->fShortWeekdays,
                          fSymbols->fShortWeekdaysCount);
            capContextUsageType = DateFormatSymbols::kCapContextUsageDayFormat;
        }
        break;
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or OTHER
     */
    static int32_t indexOrOtherIndexFromString(const char *keyword) {
        int32_t i = indexOrNegativeFromString(keyword);
        return i >= 0 ? i : OTHER;
    }
    
        /**
     * Implement UnicodeFunctor
     */
    virtual void setData(const TransliterationRuleData*);