
        
            void NDArrayView::SetValue(int8_t value)
    {
        if (IsSparse())
            LogicError('NDArrayView::SetValue: Setting a NDArrayView contents to a scalar is only allowed for objects with dense storage format.');
    }
    
    #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
#include 'Learner.h'
#include 'PerformanceProfiler.h'
#include 'CompositeFunction.h'
#include 'Serialization.h'
    
        std::string m_name; // lock name
    HANDLE m_handle;
    
        double ElapsedSeconds();
    
    
    {        // ensure none of the specified inputs reference back into the cloned set
        // The function we extract must be separable.
        for (let& input : inputNodes)
            for (let& node : ComputationNodeBase::EnumerateNodes(vector<ComputationNodeBasePtr>{input})) // check all indirect inputs of each specified input
            {
                let iter = dependentSet.find(input);
                if (iter != dependentSet.end() && *iter != input)
                    InvalidArgument('CloneFunction: specified function input %ls recursively depends on %ls inside the function.', input->NodeDescription().c_str(), node->NodeDescription().c_str());
            }
    }
    
    // -----------------------------------------------------------------------
// (deprecated) PerDimMeanVarNormalizationNode (feature, mean, invStdDev)
// Computes
//   output = (feature - mean) .* invStdDev
// where mean and invStdDev are meant to be single elements while features
// is minibatch data.
// Deprecated since it can be trivially expressed in BrainScript.
// -----------------------------------------------------------------------
    
        fPattern          = NULL; // will be set later
    fPatternString    = NULL; // may be set later
    fCompiledPat      = new UVector64(fDeferredStatus);
    fGroupMap         = new UVector32(fDeferredStatus);
    fSets             = new UVector(fDeferredStatus);
    fInitialChars     = new UnicodeSet;
    fInitialChars8    = new Regex8BitSet;
    fNamedCaptureMap  = uhash_open(uhash_hashUnicodeString,     // Key hash function
                                   uhash_compareUnicodeString,  // Key comparator function
                                   uhash_compareLong,           // Value comparator function
                                   &fDeferredStatus);
    if (U_FAILURE(fDeferredStatus)) {
        return;
    }
    if (fCompiledPat == NULL  || fGroupMap == NULL || fSets == NULL ||
            fInitialChars == NULL || fInitialChars8 == NULL || fNamedCaptureMap == NULL) {
        fDeferredStatus = U_MEMORY_ALLOCATION_ERROR;
        return;
    }
    
    void
FixedSortKeyByteSink::AppendBeyondCapacity(const char *bytes, int32_t /*n*/, int32_t length) {
    // buffer_ != NULL && bytes != NULL && n > 0 && appended_ > capacity_
    // Fill the buffer completely.
    int32_t available = capacity_ - length;
    if (available > 0) {
        uprv_memcpy(buffer_ + length, bytes, available);
    }
}
    
    #endif /* !UCONFIG_NO_FORMATTING */

    
        /**
     * Returns TRUE if this class can format positiveValue using
     * the given range of digit counts.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UBool canFormat(
            int32_t positiveValue, const IntDigitCountRange &range);
    
    U_NAMESPACE_BEGIN
    
    /**
 * UnicodeFunctor API.  Cast 'this' to a UnicodeMatcher* pointer
 * and return the pointer.
 */
UnicodeMatcher* StringMatcher::toMatcher() const {
  StringMatcher  *nonconst_this = const_cast<StringMatcher *>(this);
  UnicodeMatcher *nonconst_base = static_cast<UnicodeMatcher *>(nonconst_this);
  
  return nonconst_base;
}
    
    
    {};