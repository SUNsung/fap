template <typename Generator1, typename Generator2, typename Generator3,
    typename Generator4, typename Generator5, typename Generator6>
internal::CartesianProductHolder6<Generator1, Generator2, Generator3,
    Generator4, Generator5, Generator6> Combine(
    const Generator1& g1, const Generator2& g2, const Generator3& g3,
        const Generator4& g4, const Generator5& g5, const Generator6& g6) {
  return internal::CartesianProductHolder6<Generator1, Generator2, Generator3,
      Generator4, Generator5, Generator6>(
      g1, g2, g3, g4, g5, g6);
}
    
    // Range() returns generators providing sequences of values in a range.
//
// Synopsis:
// Range(start, end)
//   - returns a generator producing a sequence of values {start, start+1,
//     start+2, ..., }.
// Range(start, end, step)
//   - returns a generator producing a sequence of values {start, start+step,
//     start+step+step, ..., }.
// Notes:
//   * The generated sequences never include end. For example, Range(1, 5)
//     returns a generator producing a sequence {1, 2, 3, 4}. Range(1, 9, 2)
//     returns a generator producing {1, 3, 5, 7}.
//   * start and end must have the same type. That type may be any integral or
//     floating-point type or a user defined type satisfying these conditions:
//     * It must be assignable (have operator=() defined).
//     * It must have operator+() (operator+(int-compatible type) for
//       two-operand version).
//     * It must have operator<() defined.
//     Elements in the resulting sequences will also have that type.
//   * Condition start < end must be satisfied in order for resulting sequences
//     to contain any elements.
//
template <typename T, typename IncrementT>
internal::ParamGenerator<T> Range(T start, T end, IncrementT step) {
  return internal::ParamGenerator<T>(
      new internal::RangeGenerator<T, IncrementT>(start, end, step));
}
    
      // The c'tor sets this object as the test part result reporter used
  // by Google Test.  The 'result' parameter specifies where to report the
  // results. This reporter will only catch failures generated in the current
  // thread. DEPRECATED
  explicit ScopedFakeTestPartResultReporter(TestPartResultArray* result);
    
    namespace internal {
    }
    
      const std::string& string() const { return pathname_; }
  const char* c_str() const { return pathname_.c_str(); }
    
    // Protects copying of all linked_ptr objects.
GTEST_API_ GTEST_DECLARE_STATIC_MUTEX_(g_linked_ptr_mutex);
    
    template <typename T, size_t N>
internal::ParamGenerator<T> ValuesIn(const T (&array)[N]);
    
      bool check_for_leaks = false;
  if (argc > 1 && strcmp(argv[1], '--check_for_leaks') == 0 )
    check_for_leaks = true;
  else
    printf('%s\n', 'Run this program with --check_for_leaks to enable '
           'custom leak checking in the tests.');
    
    
// This sample shows how to write a simple unit test for a function,
// using Google C++ testing framework.
//
// Writing a unit test using Google C++ testing framework is easy as 1-2-3:
    
    // This is unlike folly::ThreadCachedInt in that the full value
// is never rounded up globally and cached, it only supports readFull.
//
// folly/experimental/TLRefCount is similar, but does not support a
// waitForZero, and is not reset-able.
//
// Note that the RCU implementation is completely abstracted from the
// counter implementation, a rseq implementation can be dropped in
// if the kernel supports it.
    
    template <class Then>
decltype(auto) if_constexpr(std::true_type, Then then) {
  return then(Identity{});
}
    
    //  Essentially, two versions of this file: one with an SSE42 implementation
//  and one with a fallback implementation. We determine which version to use by
//  testing for the presence of the required headers.
//
//  TODO: Maybe this should be done by the build system....
#if !FOLLY_SSE_PREREQ(4, 2)
namespace folly {
namespace detail {
size_t qfind_first_byte_of_sse42(
    const StringPieceLite haystack,
    const StringPieceLite needles) {
  return qfind_first_byte_of_nosse(haystack, needles);
}
} // namespace detail
} // namespace folly
#else
#include <cstdint>
#include <limits>
#include <string>
    
    
    {
    {size_t qfind_first_byte_of_sse42(
    const StringPieceLite haystack,
    const StringPieceLite needles);
} // namespace detail
} // namespace folly

    
    TEST(allocate_sys_buffer, compiles) {
  auto buf = allocate_sys_buffer(256);
  //  Freed at the end of the scope.
}
    
    
    {     private:
      Optional<Pop> pop_;
    };