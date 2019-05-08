
        
        
    {            return handlePrev(matchindex, status); 
        }
    
    U_NAMESPACE_END
    
    SharedBreakIterator::SharedBreakIterator(
        BreakIterator *biToAdopt) : ptr(biToAdopt) { }
    
    #include 'smallintformatter.h'
    
    
U_NAMESPACE_END
    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the plural form corresponding to the keyword, or OTHER
     */
    static Form orOtherFromString(const UnicodeString &keyword) {
        return static_cast<Form>(indexOrOtherIndexFromString(keyword));
    }