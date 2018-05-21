
        
        /* Map whose keys are pointers, but are compared by their dereferenced values.
 *
 * Differs from a plain std::map<const K*, T, DereferencingComparator<K*> > in
 * that methods that take a key for comparison take a K rather than taking a K*
 * (taking a K* would be confusing, since it's the value rather than the address
 * of the object for comparison that matters due to the dereferencing comparator).
 *
 * Objects pointed to by keys must not be modified in any way that changes the
 * result of DereferencingComparator.
 */
template <class K, class T>
class indirectmap {
private:
    typedef std::map<const K*, T, DereferencingComparator<const K*> > base;
    base m;
public:
    typedef typename base::iterator iterator;
    typedef typename base::const_iterator const_iterator;
    typedef typename base::size_type size_type;
    typedef typename base::value_type value_type;
    }
    
    void AppendInternalKey(std::string* result, const ParsedInternalKey& key) {
  result->append(key.user_key.data(), key.user_key.size());
  PutFixed64(result, PackSequenceAndType(key.sequence, key.type));
}
    
    static std::string MakeFileName(const std::string& name, uint64_t number,
                                const char* suffix) {
  char buf[100];
  snprintf(buf, sizeof(buf), '/%06llu.%s',
           static_cast<unsigned long long>(number),
           suffix);
  return name + buf;
}
    
    #include 'db/filename.h'
    
    #endif  // STORAGE_LEVELDB_DB_VERSION_EDIT_H_

    
    
    {  bool Overlaps(const char* smallest, const char* largest) {
    InternalKeyComparator cmp(BytewiseComparator());
    Slice s(smallest != NULL ? smallest : '');
    Slice l(largest != NULL ? largest : '');
    return SomeFileOverlapsRange(cmp, disjoint_sorted_files_, files_,
                                 (smallest != NULL ? &s : NULL),
                                 (largest != NULL ? &l : NULL));
  }
};
    
    namespace leveldb {
    }
    
        // Pretend at least one op was done in case we are running a benchmark
    // that does not call FinishedSingleOp().
    if (done_ < 1) done_ = 1;
    
     private:
    
      // Returns the TestResult that holds test properties recorded during
  // execution of SetUpTestCase and TearDownTestCase.
  const TestResult& ad_hoc_test_result() const { return ad_hoc_test_result_; }
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ', '
                            << e3 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2
                            << '\n' << e3 << ' evaluates to ' << v3;
}
    
    # endif
    
    // scripts/fuse_gtest.py depends on gtest's own header being #included
// *unconditionally*.  Therefore these #includes cannot be moved
// inside #if GTEST_HAS_PARAM_TEST.
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-linked_ptr.h'
#include 'gtest/internal/gtest-port.h'
#include 'gtest/gtest-printers.h'
    
      template <GTEST_4_TYPENAMES_(U)>
  tuple(const GTEST_4_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_) {}
    
    // AddRef<T>::type is T if T is a reference; otherwise it's T&.  This
// is the same as tr1::add_reference<T>::type.
template <typename T>
struct AddRef { typedef T& type; };  // NOLINT
template <typename T>
struct AddRef<T&> { typedef T& type; };  // NOLINT
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39>
struct Types39 {
  typedef T1 Head;
  typedef Types38<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28, T29,
      T30, T31, T32, T33, T34, T35, T36, T37, T38, T39> Tail;
};
    
    
// Step 2. Use the TEST macro to define your tests.
//
// TEST has two parameters: the test case name and the test name.
// After using the macro, you should define your test logic between a
// pair of braces.  You can use a bunch of macros to indicate the
// success or failure of a test.  EXPECT_TRUE and EXPECT_EQ are
// examples of such macros.  For a complete list, see gtest.h.
//
// <TechnicalDetails>
//
// In Google Test, tests are grouped into test cases.  This is how we
// keep test code organized.  You should put logically related tests
// into the same test case.
//
// The test case name and the test name should both be valid C++
// identifiers.  And you should not use underscore (_) in the names.
//
// Google Test guarantees that each test you define is run exactly
// once, but it makes no guarantee on the order the tests are
// executed.  Therefore, you should write your tests in such a way
// that their results don't depend on their order.
//
// </TechnicalDetails>
    
    extern const std::string NIL;
    
    
    {} // namespace aria2
    
      void tryReserved();
    
    
    {} // namespace aria2

    
    void AdaptiveFileAllocationIterator::allocateChunk()
{
  if (!allocator_) {
#ifdef HAVE_FALLOCATE
    try {
      A2_LOG_DEBUG('Testing file system supports fallocate.');
      if (offset_ < totalLength_) {
        int64_t len =
            std::min(totalLength_ - offset_, static_cast<int64_t>(4_k));
        stream_->allocate(offset_, len, false);
        offset_ += len;
      }
      A2_LOG_DEBUG('File system supports fallocate.');
      allocator_ = make_unique<FallocFileAllocationIterator>(stream_, offset_,
                                                             totalLength_);
    }
    catch (RecoverableException& e) {
      A2_LOG_DEBUG('File system does not support fallocate.');
      auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                              totalLength_);
      salloc->init();
      allocator_ = std::move(salloc);
    }
#else  // !HAVE_FALLOCATE
    auto salloc = make_unique<SingleFileAllocationIterator>(stream_, offset_,
                                                            totalLength_);
    salloc->init();
    allocator_ = std::move(salloc);
#endif // !HAVE_FALLOCATE
    allocator_->allocateChunk();
  }
  else {
    allocator_->allocateChunk();
  }
}
    
    public:
  AdaptiveFileAllocationIterator(BinaryStream* stream, int64_t offset,
                                 int64_t totalLength);
    
    void AnnounceList::announceFailure()
{
  if (currentTrackerInitialized_) {
    ++currentTracker_;
    if (currentTracker_ == std::end((*currentTier_)->urls)) {
      // force next event
      (*currentTier_)->nextEventIfAfterStarted();
      ++currentTier_;
      if (currentTier_ == std::end(tiers_)) {
        currentTrackerInitialized_ = false;
      }
      else {
        currentTracker_ = std::begin((*currentTier_)->urls);
      }
    }
  }
}
    
    namespace aria2 {
    }