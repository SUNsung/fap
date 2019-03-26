
        
        // This flag controls the style of death tests.  Valid values are 'threadsafe',
// meaning that the death test child process will re-execute the test binary
// from the start, running only a single death test, or 'fast',
// meaning that the child process will execute the test logic immediately
// after forking.
GTEST_DECLARE_string_(death_test_style);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10>
internal::ValueArray10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> Values(T1 v1,
    T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10) {
  return internal::ValueArray10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(v1,
      v2, v3, v4, v5, v6, v7, v8, v9, v10);
}
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_PRINTERS_H_

    
      // Reinterprets a bit pattern as a floating-point number.
  //
  // This function is needed to test the AlmostEquals() method.
  static RawType ReinterpretBits(const Bits bits) {
    FloatingPoint fp(0);
    fp.u_.bits_ = bits;
    return fp.u_.value_;
  }
    
      linked_ptr& operator=(linked_ptr const& ptr) {
    if (&ptr != this) {
      depart();
      copy(&ptr);
    }
    return *this;
  }
    
    #ifndef GTEST_SAMPLES_PRIME_TABLES_H_
#define GTEST_SAMPLES_PRIME_TABLES_H_
    
    #include <string.h>
    
      // Clears the queue.
  void Clear() {
    if (size_ > 0) {
      // 1. Deletes every node.
      QueueNode<E>* node = head_;
      QueueNode<E>* next = node->next();
      for (; ;) {
        delete node;
        node = next;
        if (node == NULL) break;
        next = node->next();
      }
    }
    }
    
            if (sequences.size() < numOfSequences)
            RuntimeError('The size of output buffer (%zu) is smaller than the number (%zu) of sequences.', sequences.size(), numOfSequences);
    
        auto& pMBLayout = minibatch.begin()->second.pMBLayout;
    // This is only allowed for old readers, which support a single layout for all inputs.
    for (const auto& iter : minibatch)
    {
        assert(iter.second.pMBLayout == pMBLayout);
        // TODO: This should be a runtime check, not an assert() that only runs in Debug.
        UNUSED(iter);
    }
    
        void OptimizedMemoryAllocation()
    {
        // MatrixPool is not templated, so we call both float and double versions here 
        OptimizedMemoryAllocationFunc<float>(); 
        OptimizedMemoryAllocationFunc<double>();
        OptimizedMemoryAllocationFunc<half>();
        return; 
    }
    
    //--------------------------------------------------------------------------------
//
//  groupCount()
//
//--------------------------------------------------------------------------------
int32_t RegexMatcher::groupCount() const {
    return fPattern->fGroupMap->size();
}
    
    UnicodeString &ScientificNumberFormatter::SuperscriptStyle::format(
        const UnicodeString &original,
        FieldPositionIterator &fpi,
        const UnicodeString &preExponent,
        const DecimalFormatStaticSets &staticSets,
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
            break;
        case UNUM_EXPONENT_SIGN_FIELD:
            {
                int32_t beginIndex = fp.getBeginIndex();
                int32_t endIndex = fp.getEndIndex();
                UChar32 aChar = original.char32At(beginIndex);
                if (staticSets.fMinusSigns->contains(aChar)) {
                    appendTo.append(
                            original,
                            copyFromOffset,
                            beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptMinusSign);
                } else if (staticSets.fPlusSigns->contains(aChar)) {
                    appendTo.append(
                           original,
                           copyFromOffset,
                           beginIndex - copyFromOffset);
                    appendTo.append(kSuperscriptPlusSign);
                } else {
                    status = U_INVALID_CHAR_FOUND;
                    return appendTo;
                }
                copyFromOffset = endIndex;
            }
            break;
        case UNUM_EXPONENT_FIELD:
            appendTo.append(
                    original,
                    copyFromOffset,
                    fp.getBeginIndex() - copyFromOffset);
            if (!copyAsSuperscript(
                    original,
                    fp.getBeginIndex(),
                    fp.getEndIndex(),
                    appendTo,
                    status)) {
              return appendTo;
            }
            copyFromOffset = fp.getEndIndex();
            break;
        default:
            break;
        }
    }
    appendTo.append(
            original, copyFromOffset, original.length() - copyFromOffset);
    return appendTo;
}
    
    U_NAMESPACE_BEGIN
    
    class BreakIterator;
    
    #include 'unicode/utypes.h'
#include 'sharedobject.h'
#include 'unicode/dtfmtsym.h'
    
        /**
     * Returns TRUE if this object is equal to rhs.
     */
    UBool equals(const SignificantDigitInterval &rhs) const {
        return ((fMax == rhs.fMax) && (fMin == rhs.fMin));
    }
    
        // Adjust the ruleDay to the monthLen, for non-leap year February 29 rule days.
    if (ruleDay > monthLen) {
        ruleDay = monthLen;
    }
    
    
U_NAMESPACE_END
    
    #endif  // !UCONFIG_NO_FORMATTING

    
        /**
     * @param keyword for example 'few' or 'other'
     * @return the index of the plural form corresponding to the keyword, or OTHER
     */
    static int32_t indexOrOtherIndexFromString(const char *keyword) {
        int32_t i = indexOrNegativeFromString(keyword);
        return i >= 0 ? i : OTHER;
    }
    
    #include 'gtest/gtest.h'
    
    double ObjectGeneralInfo60B::lateral_vel(const std::uint8_t* bytes,
                                         int32_t length) const {
  Byte t0(bytes + 5);
  int32_t x = t0.get_byte(0, 6);
    }
    
    unsigned int BaseMapMatrix::GetBinarySize() const { return 0; }
    
    
    {  EXPECT_EQ(bd, bd_golden);
}