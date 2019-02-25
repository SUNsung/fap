
        
            UText **destText = (UText **)uprv_malloc(sizeof(UText*)*destCapacity);
    if (destText == NULL) {
        status = U_MEMORY_ALLOCATION_ERROR;
        return 0;
    }
    int32_t i;
    for (i = 0; i < destCapacity; i++) {
        destText[i] = utext_openUnicodeString(NULL, &dest[i], &status);
    }
    
    #include 'unicode/utypes.h'
    
    void SearchIterator::setMatchNotFound() 
{
    setMatchStart(USEARCH_DONE);
    setMatchLength(0);
    UErrorCode status = U_ZERO_ERROR;
    // by default no errors should be returned here since offsets are within 
    // range.
    if (m_search_->isForwardSearching) {
        setOffset(m_search_->textLength, status);
    }
    else {
        setOffset(0, status);
    }
}
    
    #include 'unicode/messagepattern.h'
#include 'unicode/rbnf.h'
#include 'unicode/selfmt.h'
#include 'unicode/uchar.h'
#include 'unicode/ucnv_err.h'
#include 'unicode/umsg.h'
#include 'unicode/ustring.h'
#include 'unicode/utypes.h'
#include 'cmemory.h'
#include 'messageimpl.h'
#include 'patternprops.h'
#include 'selfmtimpl.h'
#include 'uassert.h'
#include 'ustrfmt.h'
#include 'util.h'
#include 'uvector.h'
    
    U_NAMESPACE_END
    
    #ifndef __SHARED_BREAKITERATOR_H__
#define __SHARED_BREAKITERATOR_H__
    
    #ifndef __SHARED_DATEFORMATSYMBOLS_H__
#define __SHARED_DATEFORMATSYMBOLS_H__
    
        /**
     * Make this instance have no limit on significant digits.
     */
    void clear() {
        fMin = 0;
        fMax = INT32_MAX;
    }
    
    int32_t
IntDigitCountRange::pin(int32_t digitCount) const {
    return digitCount < fMin ? fMin : (digitCount < fMax ? digitCount : fMax);
}
    
    std::unique_ptr<WriteControllerToken> WriteController::GetDelayToken(
    uint64_t write_rate) {
  total_delayed_++;
  // Reset counters.
  last_refill_time_ = 0;
  bytes_left_ = 0;
  set_delayed_write_rate(write_rate);
  return std::unique_ptr<WriteControllerToken>(new DelayWriteToken(this));
}
    
    struct PosixMemoryMappedFileBuffer : public MemoryMappedFileBuffer {
  PosixMemoryMappedFileBuffer(void* _base, size_t _length)
      : MemoryMappedFileBuffer(_base, _length) {}
  virtual ~PosixMemoryMappedFileBuffer();
};
    
      const char* Name() const override { return 'MyFilter'; }
    
    
    { private:
  uint32_t number_success_backup;
  uint32_t number_fail_backup;
};