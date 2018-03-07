
        
        
    {  return ret;
}
    
    
    {  default:
    mpz_clear(gmpDataA);
    mpz_clear(gmpDataB);
    mpz_clear(gmpReturn);
    raise_warning(cs_GMP_INVALID_ROUNDING_MODE, 'gmp_div_q');
    return false;
  }
    
    
    {
    {}}

    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
      std::size_t count() const
  {
    return 1;
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef null_event event;
#elif defined(BOOST_ASIO_WINDOWS)
typedef win_event event;
#elif defined(BOOST_ASIO_HAS_PTHREADS)
typedef posix_event event;
#elif defined(BOOST_ASIO_HAS_STD_MUTEX_AND_CONDVAR)
typedef std_event event;
#endif
    
    #include <boost/asio/detail/push_options.hpp>
    
    #if defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
      // Read some data.
  for (;;)
  {
    // Try to complete the operation without blocking.
    errno = 0;
    signed_size_type bytes = error_wrapper(::readv(
          d, bufs, static_cast<int>(count)), ec);
    }