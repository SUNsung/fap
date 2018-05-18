
        
        namespace boost {
namespace asio {
    }
    }
    
    template <typename Stream>
class buffered_write_stream;
    
      std::size_t check_for_completion(
      const boost::system::error_code& ec,
      std::size_t total_transferred)
  {
    return detail::adapt_completion_condition_result(
        completion_condition_(ec, total_transferred));
  }
    
    #endif // BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP

    
    
    {    return descriptor_ops::non_blocking_read(o->descriptor_,
        bufs.buffers(), bufs.count(), o->ec_, o->bytes_transferred_);
  }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #endif // BOOST_ASIO_DETAIL_FUNCTION_HPP

    
    #include <boost/asio/detail/push_options.hpp>
    
    
    {  return false;
}
    
    #include 'guetzli/jpeg_data.h'
    
    #endif  // GUETZLI_JPEG_DATA_READER_H_

    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
    #endif  // GUETZLI_PREPROCESS_DOWNSAMPLE_H_
