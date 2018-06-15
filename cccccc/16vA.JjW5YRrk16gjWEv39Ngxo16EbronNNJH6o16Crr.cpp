
        
            // check that the points are infront of the center of perspectivity
    for (int k = 0; k < sols.cols; ++k)
    {
        cv::Mat cam_points = C_est[k] * pp + cv::repeat(t_est[k], 1, pp.cols);
        cv::Mat cam_points_k = cam_points.row(2);
    }
    
    void compose_motion(InputArray _om1, InputArray _T1, InputArray _om2, InputArray _T2,
                    Mat& om3, Mat& T3, Mat& dom3dom1, Mat& dom3dT1, Mat& dom3dom2,
                    Mat& dom3dT2, Mat& dT3dom1, Mat& dT3dT1, Mat& dT3dom2, Mat& dT3dT2);
    
    #ifndef OPENCV_CUDA_EMULATION_HPP_
#define OPENCV_CUDA_EMULATION_HPP_
    
    #undef cv_hal_gemm32f
#define cv_hal_gemm32f lapack_gemm32f
#undef cv_hal_gemm64f
#define cv_hal_gemm64f lapack_gemm64f
#undef cv_hal_gemm32fc
#define cv_hal_gemm32fc lapack_gemm32fc
#undef cv_hal_gemm64fc
#define cv_hal_gemm64fc lapack_gemm64fc
    
    # if !GTEST_OS_WINDOWS
// Tests that an exit code describes an exit due to termination by a
// given signal.
class GTEST_API_ KilledBySignal {
 public:
  explicit KilledBySignal(int signum);
  bool operator()(int exit_status) const;
 private:
  const int signum_;
};
# endif  // !GTEST_OS_WINDOWS
    
    // When the compiler sees expression IsContainerTest<C>(0), if C is an
// STL-style container class, the first overload of IsContainerTest
// will be viable (since both C::iterator* and C::const_iterator* are
// valid types and NULL can be implicitly converted to them).  It will
// be picked over the second overload as 'int' is a perfect match for
// the type of argument 0.  If C::iterator or C::const_iterator is not
// a valid type, the first overload is not viable, and the second
// overload will be picked.  Therefore, we can determine whether C is
// a container class by checking the type of IsContainerTest<C>(0).
// The value of the expression is insignificant.
//
// Note that we look for both C::iterator and C::const_iterator.  The
// reason is that C++ injects the name of a class as a member of the
// class itself (e.g. you can refer to class iterator as either
// 'iterator' or 'iterator::iterator').  If we look for C::iterator
// only, for example, we would mistakenly think that a class named
// iterator is an STL container.
//
// Also note that the simpler approach of overloading
// IsContainerTest(typename C::const_iterator*) and
// IsContainerTest(...) doesn't work with Visual Age C++ and Sun C++.
typedef int IsContainer;
template <class C>
IsContainer IsContainerTest(int /* dummy */,
                            typename C::iterator* /* it */ = NULL,
                            typename C::const_iterator* /* const_it */ = NULL) {
  return 0;
}
    
    
$for j [[
  const ParamGenerator<T$j> g$(j)_;
    
    template <GTEST_7_TYPENAMES_(T)>
class GTEST_7_TUPLE_(T) {
 public:
  template <int k> friend class gtest_internal::Get;
    }
    
    // AddRef<T>::type is T if T is a reference; otherwise it's T&.  This
// is the same as tr1::add_reference<T>::type.
template <typename T>
struct AddRef { typedef T& type; };  // NOLINT
template <typename T>
struct AddRef<T&> { typedef T& type; };  // NOLINT
    
      // Returns true iff n is a prime number.
  virtual bool IsPrime(int n) const = 0;
    
    #include <boost/asio/detail/config.hpp>
#include <cstddef>
#include <boost/asio/basic_io_object.hpp>
#include <boost/asio/detail/handler_type_requirements.hpp>
#include <boost/asio/detail/throw_error.hpp>
#include <boost/asio/error.hpp>
#include <boost/asio/wait_traits.hpp>
#include <boost/asio/waitable_timer_service.hpp>
    
    #include <boost/asio/impl/buffered_read_stream.hpp>
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #include <boost/asio/detail/push_options.hpp>
    
    #include <boost/asio/detail/config.hpp>
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #endif // defined(__GNUC__) && defined(__arm__)
    
    template <typename Function, typename Context>
inline void invoke(Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
    // Older versions of gcc have difficulty compiling the sizeof expressions where
// we test the handler type requirements. We'll disable checking of handler type
// requirements for those compilers, but otherwise enable it by default.
#if !defined(BOOST_ASIO_DISABLE_HANDLER_TYPE_REQUIREMENTS)
# if !defined(__GNUC__) || (__GNUC__ >= 4)
#  define BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS 1
# endif // !defined(__GNUC__) || (__GNUC__ >= 4)
#endif // !defined(BOOST_ASIO_DISABLE_HANDLER_TYPE_REQUIREMENTS)
    
      // The type of a non-const iterator over the hash map.
  typedef typename std::list<value_type>::iterator iterator;
    
      op_queue_[op_type].enqueue_operation(descriptor, op);
  ::pollfd& ev = add_pending_event_change(descriptor);
  ev.events = POLLERR | POLLHUP;
  switch (op_type)
  {
  case read_op: ev.events |= POLLIN; break;
  case write_op: ev.events |= POLLOUT; break;
  case except_op: ev.events |= POLLPRI; break;
  default: break;
  }
  interrupter_.interrupt();
    
        void ReleaseStringUTFChars(jstring string, const char* utf)
    { functions->ReleaseStringUTFChars(this, string, utf); }
    
    // TODO(t10737622): Improve on-device symbolification
void getStackTraceSymbols(vector<StackTraceElement>& symbols,
                          const vector<InstructionPointer>& trace) {
  symbols.clear();
  symbols.reserve(trace.size());
    }
    
    int Node::getPositionType(void) const
{
    return YGNodeStyleGetPositionType(m_node);
}
    
    template<typename... ARGS>
inline void logf(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_FATAL, tag, msg, args...);
}
    
    // Keeps a thread-local reference to the current thread's JNIEnv.
struct Environment {
  // May be null if this thread isn't attached to the JVM
  FBEXPORT static JNIEnv* current();
  static void initialize(JavaVM* vm);
    }
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }
    
    template <typename T>
inline bool operator!=(const RefPtr<T>& ref, std::nullptr_t ptr) {
  return ref.get() != ptr;
}