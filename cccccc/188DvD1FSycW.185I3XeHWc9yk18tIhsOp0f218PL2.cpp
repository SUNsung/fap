
        
        void AutoUpdater::OnCheckingForUpdate() {
  Emit('checking-for-update');
}
    
    
    {}  // namespace api
    
    #include 'atom/browser/api/event_emitter.h'
#include 'atom/browser/mac/in_app_purchase.h'
#include 'atom/browser/mac/in_app_purchase_observer.h'
#include 'atom/browser/mac/in_app_purchase_product.h'
#include 'native_mate/handle.h'
    
    namespace atom {
    }
    
    void Event::SetSenderAndMessage(content::RenderFrameHost* sender,
                                IPC::Message* message) {
  DCHECK(!sender_);
  DCHECK(!message_);
  sender_ = sender;
  message_ = message;
    }
    
    
    {}  // namespace api
    
    namespace atom {
    }
    
    Delegate* AutoUpdater::delegate_ = nullptr;
    
    CollationElementIterator *
RuleBasedCollator::createCollationElementIterator(const UnicodeString& source) const {
    UErrorCode errorCode = U_ZERO_ERROR;
    if(!initMaxExpansions(errorCode)) { return NULL; }
    CollationElementIterator *cei = new CollationElementIterator(source, this, errorCode);
    if(U_FAILURE(errorCode)) {
        delete cei;
        return NULL;
    }
    return cei;
}
    
    #include 'unicode/scientificnumberformatter.h'
#include 'unicode/dcfmtsym.h'
#include 'unicode/fpositer.h'
#include 'unicode/utf16.h'
#include 'unicode/uniset.h'
#include 'decfmtst.h'
#include 'unicode/decimfmt.h'
    
    UnicodeString &ScriptSet::displayScripts(UnicodeString &dest) const {
    UBool firstTime = TRUE;
    for (int32_t i = nextSetBit(0); i >= 0; i = nextSetBit(i + 1)) {
        if (!firstTime) {
            dest.append((UChar)0x20);
        }
        firstTime = FALSE;
        const char *scriptName = uscript_getShortName((UScriptCode(i)));
        dest.append(UnicodeString(scriptName, -1, US_INV));
    }
    return dest;
}
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    #include 'unicode/uobject.h'
#include 'unicode/utypes.h'
    
         case UDAT_YEAR_NAME_FIELD:
        if (fSymbols->fShortYearNames != NULL && value <= fSymbols->fShortYearNamesCount) {
            // the Calendar YEAR field runs 1 through 60 for cyclic years
            _appendSymbol(appendTo, value - 1, fSymbols->fShortYearNames, fSymbols->fShortYearNamesCount);
            break;
        }
        // else fall through to numeric year handling, do not break here
        U_FALLTHROUGH;
    
    StringMatcher::StringMatcher(const UnicodeString& theString,
                             int32_t start,
                             int32_t limit,
                             int32_t segmentNum,
                             const TransliterationRuleData& theData) :
    data(&theData),
    segmentNumber(segmentNum),
    matchStart(-1),
    matchLimit(-1)
{
    theString.extractBetween(start, limit, pattern);
}
    
        /**
     * Implement UnicodeMatcher
     * @param text the text to be matched
     * @param offset on input, the index into text at which to begin
     * matching.  On output, the limit of the matched text.  The
     * number of matched characters is the output value of offset
     * minus the input value.  Offset should always point to the
     * HIGH SURROGATE (leading code unit) of a pair of surrogates,
     * both on entry and upon return.
     * @param limit the limit index of text to be matched.  Greater
     * than offset for a forward direction match, less than offset for
     * a backward direction match.  The last character to be
     * considered for matching will be text.charAt(limit-1) in the
     * forward direction or text.charAt(limit+1) in the backward
     * direction.
     * @param incremental  if TRUE, then assume further characters may
     * be inserted at limit and check for partial matching.  Otherwise
     * assume the text as given is complete.
     * @return a match degree value indicating a full match, a partial
     * match, or a mismatch.  If incremental is FALSE then
     * U_PARTIAL_MATCH should never be returned.
     */
    virtual UMatchDegree matches(const Replaceable& text,
                                 int32_t& offset,
                                 int32_t limit,
                                 UBool incremental);
    
    /**
 * Implement UnicodeFunctor
 */
UnicodeReplacer* StringReplacer::toReplacer() const {
  return const_cast<StringReplacer *>(this);
}
    
    TEST(Expected, CoroutineException) {
  EXPECT_THROW(
      ([]() -> Expected<int, Err> {
        auto x = co_await throws();
        ADD_FAILURE();
        co_return x;
      }()),
      Exn);
}
    
    #pragma once
    
      /**
   * Returns a secure double in [0, 1)
   */
  static double secureRandDouble01() {
    SecureRNG<uint64_t> srng;
    return randDouble01(srng);
  }
    
    
    {} // namespace folly

    
    
    {} // namespace folly

    
      // Test a non-canonical value with tv_usec larger than 1 second
  tv.tv_sec = 5;
  tv.tv_usec = 3219876;
  EXPECT_EQ(8219876000LL, to<nanoseconds>(tv).count());
  EXPECT_EQ(8219876us, to<microseconds>(tv));
  EXPECT_EQ(8219ms, to<milliseconds>(tv));
  EXPECT_EQ(8s, to<seconds>(tv));
  EXPECT_EQ(
      createTimePoint<system_clock>(nanoseconds(8219876000LL)),
      to<system_clock::time_point>(tv));
  EXPECT_EQ(
      createTimePoint<steady_clock>(nanoseconds(8219876000LL)),
      to<steady_clock::time_point>(tv));
    
    template <template <typename> class Atom = std::atomic>
struct counted_ptr_base {
 protected:
  static intrusive_shared_count<Atom>* getRef(void* pt) {
    char* p = (char*)pt;
    p -= sizeof(intrusive_shared_count<Atom>);
    return (intrusive_shared_count<Atom>*)p;
  }
};
    
    TEST_F(SparseByteSetTest, each_random) {
  mt19937 rng;
  uniform_int_distribution<uint16_t> dist{lims::min(), lims::max()};
  set<uint8_t> added;
  while (added.size() <= lims::max()) {
    auto c = uint8_t(dist(rng));
    EXPECT_EQ(added.count(c), s.contains(c));
    EXPECT_EQ(!added.count(c), s.add(c));
    added.insert(c);
    EXPECT_TRUE(added.count(c)); // sanity
    EXPECT_TRUE(s.contains(c));
  }
}
