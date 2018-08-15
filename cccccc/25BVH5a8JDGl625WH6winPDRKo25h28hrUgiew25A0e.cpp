
        
        // Used to print a pointer that is neither a char pointer nor a member
// pointer, when the user doesn't define PrintTo() for it.  (A member
// variable pointer or member function pointer doesn't really point to
// a location in the address space.  Their representation is
// implementation-defined.  Therefore they will be printed as raw
// bytes.)
template <typename T>
void DefaultPrintTo(IsNotContainer /* dummy */,
                    true_type /* is a pointer */,
                    T* p, ::std::ostream* os) {
  if (p == NULL) {
    *os << 'NULL';
  } else {
    // C++ doesn't allow casting from a function pointer to any object
    // pointer.
    //
    // IsTrue() silences warnings: 'Condition is always true',
    // 'unreachable code'.
    if (IsTrue(ImplicitlyConvertible<T*, const void*>::value)) {
      // T is not a function type.  We just call << to print p,
      // relying on ADL to pick up user-defined << for their pointer
      // types, if any.
      *os << p;
    } else {
      // T is a function type, so '*os << p' doesn't do what we want
      // (it just prints p as bool).  We want to print p as a const
      // void*.  However, we cannot cast it to const void* directly,
      // even using reinterpret_cast, as earlier versions of gcc
      // (e.g. 3.4.5) cannot compile the cast when p is a function
      // pointer.  Casting to UInt64 first solves the problem.
      *os << reinterpret_cast<const void*>(
          reinterpret_cast<internal::UInt64>(p));
    }
  }
}
    
    // INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
//
// Expands to the namespace name that the type-parameterized tests for
// the given type-parameterized test case are defined in.  The exact
// name of the namespace is subject to change without notice.
# define GTEST_CASE_NAMESPACE_(TestCaseName) \
  gtest_case_##TestCaseName##_
    
      // Returns the standard listener responsible for the default XML output
  // controlled by the --gtest_output=xml flag.  Can be removed from the
  // listeners list by users who want to shut down the default XML output
  // controlled by this flag and substitute it with custom one.  Note that
  // removing this object from the listener list with Release transfers its
  // ownership to the caller and makes this function return NULL the next
  // time.
  TestEventListener* default_xml_generator() const {
    return default_xml_generator_;
  }
    
      // Returns true if FilePath ends with a path separator, which indicates that
  // it is intended to represent a directory. Returns false otherwise.
  // This does NOT check that a directory (or file) actually exists.
  bool IsDirectory() const;
    
    // The relation between an NativeArray object (see below) and the
// native array it represents.
enum RelationToSource {
  kReference,  // The NativeArray references the native array.
  kCopy        // The NativeArray makes a copy of the native array and
               // owns the copy.
};
    
    namespace testing {
namespace internal {
    }
    }
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
  const T31 v31_;
  const T32 v32_;
  const T33 v33_;
  const T34 v34_;
  const T35 v35_;
  const T36 v36_;
  const T37 v37_;
  const T38 v38_;
  const T39 v39_;
  const T40 v40_;
  const T41 v41_;
};
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23>
struct Types23 {
  typedef T1 Head;
  typedef Types22<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23> Tail;
};
    
    ///////////////////////////////////////////////////////////////////////////////
    
        Node(T v, Node* n) : value_(v), next_(n) {}
    
      T take() override {
    T item;
    while (!queue_.try_dequeue(item)) {
      sem_.wait();
    }
    return item;
  }
    
    #include <glog/logging.h>
    
    /*
 * A QuantileEstimator that keeps values for nWindows * windowDuration (see
 * constructor). Values are buffered for windowDuration.
 */
template <typename ClockT = std::chrono::steady_clock>
class SlidingWindowQuantileEstimator {
 public:
  using TimePoint = typename ClockT::time_point;
    }
    
    
    {  EXPECT_THROW(std::move(f).get(), std::runtime_error);
  EXPECT_EQ(2, count);
}
    
      Future<Unit>().then(std::bind(
      [](Promise<int>& p2) mutable { p2.setValue(123); },
      std::move(promise)));
    
      TestExecutor executor(4);
  // size of implicit promise is at least the size of the return.
  using LargeReturn = array<uint64_t, 16000>;
  auto func = [&executor](size_t retryNum) -> Future<LargeReturn> {
    return via(&executor).then([retryNum] {
      return retryNum < 10000
          ? makeFuture<LargeReturn>(
                make_exception_wrapper<std::runtime_error>('keep trying'))
          : makeFuture<LargeReturn>(LargeReturn());
    });
  };