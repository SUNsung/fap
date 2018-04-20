
        
        template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24>
internal::ValueArray24<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24> Values(T1 v1, T2 v2,
    T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11, T12 v12,
    T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19, T20 v20,
    T21 v21, T22 v22, T23 v23, T24 v24) {
  return internal::ValueArray24<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24>(v1, v2,
      v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18,
      v19, v20, v21, v22, v23, v24);
}
    
    #endif  // GTEST_INCLUDE_GTEST_GTEST_PRED_IMPL_H_

    
      // Many linked_ptr operations may change p.link_ for some linked_ptr
  // variable p in the same circle as this object.  Therefore we need
  // to prevent two such operations from occurring concurrently.
  //
  // Note that different types of linked_ptr objects can coexist in a
  // circle (e.g. linked_ptr<Base>, linked_ptr<Derived1>, and
  // linked_ptr<Derived2>).  Therefore we must use a single mutex to
  // protect all linked_ptr objects.  This can create serious
  // contention in production code, but is acceptable in a testing
  // framework.
    
     private:
  // No implementation - assignment is unsupported.
  void operator=(const ValueArray38& other);
    
    typedef struct _stat StatStruct;
    
    // The following family of struct and struct templates are used to
// represent type lists.  In particular, TypesN<T1, T2, ..., TN>
// represents a type list with N types (T1, T2, ..., and TN) in it.
// Except for Types0, every struct in the family has two member types:
// Head for the first type in the list, and Tail for the rest of the
// list.
    
    
    {    return true;
  }
    
    template <typename T, typename Less>
constexpr T const&
constexpr_clamp(T const& v, T const& lo, T const& hi, Less less) {
  return less(v, lo) ? lo : less(hi, v) ? hi : v;
}
template <typename T>
constexpr T const& constexpr_clamp(T const& v, T const& lo, T const& hi) {
  return constexpr_clamp(v, lo, hi, constexpr_less<T>{});
}
    
      /**
   * Get the pointer to the end of the buffer.
   *
   * Note that this is the pointer to the very end of the usable buffer,
   * not the end of valid data within the buffer.  Use the tail() method to
   * get a pointer to the end of the data within the buffer.
   */
  const uint8_t* bufferEnd() const {
    return buf_ + capacity_;
  }
    
    
void testAllocSize(uint32_t requestedCapacity) {
  unique_ptr<IOBuf> iobuf(IOBuf::create(requestedCapacity));
  EXPECT_GE(iobuf->capacity(), requestedCapacity);
}
    
    template <typename C>
struct compare_less_equal : detail::cmp_pred<C, ordering::gt, 1> {
  using detail::cmp_pred<C, ordering::gt, 1>::cmp_pred;
};
    
    #include <folly/Portability.h>
#include <folly/lang/Align.h>
    
    #include <sys/stat.h>
#include <sys/types.h>
#include <cstddef>
#include <string>
#include <utility>
#include <vector>
    
        // Make a guess at how many lines will be in the message, just to make an
    // initial buffer allocation.  If the guess is too small then the string
    // will reallocate and grow as necessary, it will just be slightly less
    // efficient than if we had guessed enough space.
    size_t numLinesGuess = 4;
    buffer.reserve(((header.size() + 1) * numLinesGuess) + msgData.size());