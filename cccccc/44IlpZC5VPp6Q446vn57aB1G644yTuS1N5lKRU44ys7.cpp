
        
          // Does this device use tilingPatternFill()?  If this returns false,
  // tiling pattern fills will be reduced to a series of other drawing
  // operations.
  virtual GBool useTilingPatternFill() { return gTrue; }
    
      // skip leading whitespace and comments
  comment = gFalse;
  while (1) {
    if ((c = getChar()) == EOF) {
      buf[0] = '\0';
      *length = 0;
      return gFalse;
    }
    if (comment) {
      if (c == '\x0a' || c == '\x0d') {
	comment = gFalse;
      }
    } else if (c == '%') {
      comment = gTrue;
    } else if (specialChars[c] != 1) {
      break;
    }
  }
    
    Object *Parser::getObj(Object *obj, Guchar *fileKey,
           CryptAlgorithm encAlgorithm, int keyLength,
           int objNum, int objGen) {
  std::set<int> fetchOriginatorNums;
  return getObj(obj, fileKey, encAlgorithm, keyLength, objNum, objGen, &fetchOriginatorNums);
}
    
    //------------------------------------------------------------------------
// Parser
//------------------------------------------------------------------------
    
        Object *put(const Ref &ref);
    Object *lookup(const Ref &ref, Object *obj);
    
    //------------------------------------------------------------------------
// ProfileData
//------------------------------------------------------------------------
    
    MediaWindowParameters::~MediaWindowParameters() {
}
    
    #include 'CachedFile.h'
    
                    (*pCounter)++;
                if ((uint64_t)*pCounter >= (uint32_t)maxCount && maxCount != -1) {
                    // The loop has matched the maximum permitted number of times.
                    //   Break out of here with no action.  Matching will
                    //   continue with the following pattern.
                    U_ASSERT(*pCounter == maxCount);
                    break;
                }
    
        ScriptSet &setAll();
    ScriptSet &resetAll();
    int32_t countMembers() const;
    int32_t hashCode() const;
    int32_t nextSetBit(int32_t script) const;
    
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
    
    SharedBreakIterator::~SharedBreakIterator() {
  delete ptr;
}
    
    
/**
 * A formatter for small, positive integers.
 */
class U_I18N_API SmallIntFormatter : public UMemory {
public:
    /**
     * Estimates the actual digit count needed to format positiveValue
     * using the given range of digit counts.
     * Returns a value that is at least the actual digit count needed.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static int32_t estimateDigitCount(
            int32_t positiveValue, const IntDigitCountRange &range);
    }