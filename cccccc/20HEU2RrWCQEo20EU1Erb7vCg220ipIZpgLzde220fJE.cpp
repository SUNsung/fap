
        
        // EnableIf<condition>::type is void when 'Cond' is true, and
// undefined when 'Cond' is false.  To use SFINAE to make a function
// overload only apply when a particular expression is true, add
// 'typename EnableIf<expression>::type* = 0' as the last parameter.
template<bool> struct EnableIf;
template<> struct EnableIf<true> { typedef void type; };  // NOLINT
    
    
$for j [[
  const ParamGenerator<T$j> g$(j)_;
    
      // Converts a wide C string to a String using the UTF-8 encoding.
  // NULL will be converted to '(null)'.  If an error occurred during
  // the conversion, '(failed to convert from wide string)' is
  // returned.
  static std::string ShowWideCString(const wchar_t* wide_c_str);
    
    #endif  // GTEST_SAMPLES_PRIME_TABLES_H_

    
      /// Constructor.
  /**
   * This constructor creates a timer without setting an expiry time. The
   * expires_at() or expires_from_now() functions must be called to set an
   * expiry time before the timer can be waited on.
   *
   * @param io_service The io_service object that the timer will use to dispatch
   * handlers for any asynchronous operations performed on the timer.
   */
  explicit basic_waitable_timer(boost::asio::io_service& io_service)
    : basic_io_object<WaitableTimerService>(io_service)
  {
  }
    
    // Standard library components can't be forward declared, so we'll have to
// include the array header. Fortunately, it's fairly lightweight and doesn't
// add significantly to the compile time.
#if defined(BOOST_ASIO_HAS_STD_ARRAY)
# include <array>
#endif // defined(BOOST_ASIO_HAS_STD_ARRAY)
    
    #endif // BOOST_ASIO_DETAIL_CALL_STACK_HPP

    
    namespace boost {
namespace date_time {
    }
    }
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #include <boost/asio/detail/config.hpp>
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
# include <boost/asio/detail/null_fenced_block.hpp>
#elif defined(__MACH__) && defined(__APPLE__)
# include <boost/asio/detail/macos_fenced_block.hpp>
#elif defined(__sun)
# include <boost/asio/detail/solaris_fenced_block.hpp>
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
# include <boost/asio/detail/gcc_arm_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
# include <boost/asio/detail/gcc_hppa_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
# include <boost/asio/detail/gcc_x86_fenced_block.hpp>
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
# include <boost/asio/detail/gcc_sync_fenced_block.hpp>
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
# include <boost/asio/detail/win_fenced_block.hpp>
#else
# include <boost/asio/detail/null_fenced_block.hpp>
#endif
    
      // Re-initialise the hash from the values already contained in the list.
  void rehash(std::size_t num_buckets)
  {
    if (num_buckets == num_buckets_)
      return;
    num_buckets_ = num_buckets;
    BOOST_ASIO_ASSERT(num_buckets_ != 0);
    }
    
    int dev_poll_reactor::register_internal_descriptor(int op_type,
    socket_type descriptor, per_descriptor_data&, reactor_op* op)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
    }
    
    double Node::getComputedLeft(void) const
{
    return YGNodeLayoutGetLeft(m_node);
}
    
        void setMaxWidth(double maxWidth);
    void setMaxWidthPercent(double maxWidth);
    void setMaxHeight(double maxHeight);
    void setMaxHeightPercent(double maxHeight);
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetPadding(root, YGEdgeLeft));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetPadding(root, YGEdgeRight));
    
    
    {  YGNodeFreeRecursive(root);
}

    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root));
  ASSERT_FLOAT_EQ(20, YGNodeLayoutGetWidth(root));
  ASSERT_FLOAT_EQ(20, YGNodeLayoutGetHeight(root));
    
    
    {} // namespace facebook

    
    
    {  // There are subtle issues with calling the next functions directly. It is
  // much better to always use a ThreadScope to manage attaching/detaching for
  // you.
  FBEXPORT static JNIEnv* ensureCurrentThreadIsAttached();
  FBEXPORT static void detachCurrentThread();
};
    
    template <typename T>
inline bool operator==(std::nullptr_t ptr, const RefPtr<T>& ref) {
  return ref.get() == ptr;
}