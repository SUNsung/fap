
        
          /// Accept a new connection.
  /**
   * This function is used to accept a new connection from a peer into the
   * given socket. The function call will block until a new connection has been
   * accepted successfully or an error occurs.
   *
   * @param peer The socket into which the new connection will be accepted.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @par Example
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::soocket socket(io_service);
   * boost::system::error_code ec;
   * acceptor.accept(socket, ec);
   * if (ec)
   * {
   *   // An error occurred.
   * }
   * @endcode
   */
  template <typename Protocol1, typename SocketService>
  boost::system::error_code accept(
      basic_socket<Protocol1, SocketService>& peer,
      boost::system::error_code& ec,
      typename enable_if<is_convertible<Protocol, Protocol1>::value>::type* = 0)
  {
    return this->get_service().accept(this->get_implementation(),
        peer, static_cast<endpoint_type*>(0), ec);
  }
    
    #include <boost/asio/detail/config.hpp>
#include <cstddef>
#include <boost/asio/async_result.hpp>
#include <boost/asio/buffered_read_stream_fwd.hpp>
#include <boost/asio/buffer.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_resize_guard.hpp>
#include <boost/asio/detail/buffered_stream_storage.hpp>
#include <boost/asio/detail/noncopyable.hpp>
#include <boost/asio/detail/type_traits.hpp>
#include <boost/asio/error.hpp>
#include <boost/asio/io_service.hpp>
    
    
    {
    {} // namespace asio
} // namespace boost
    
    template<class T, std::size_t N>
class array;
    
      static bool do_perform(reactor_op* base)
  {
    descriptor_read_op_base* o(static_cast<descriptor_read_op_base*>(base));
    }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #if !defined(BOOST_ASIO_WINDOWS_RUNTIME)
    
    #endif // BOOST_ASIO_DETAIL_FENCED_BLOCK_HPP

    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {  pollfd fds;
  fds.fd = d;
  fds.events = POLLIN;
  fds.revents = 0;
  int timeout = (state & user_set_non_blocking) ? 0 : -1;
  errno = 0;
  int result = error_wrapper(::poll(&fds, 1, timeout), ec);
  if (result == 0)
    ec = (state & user_set_non_blocking)
      ? boost::asio::error::would_block : boost::system::error_code();
  else if (result > 0)
    ec = boost::system::error_code();
  return result;
}
    
    
    {  bool earliest = queue.enqueue_timer(time, timer, op);
  io_service_.work_started();
  if (earliest)
    interrupter_.interrupt();
}
    
    #include <boost/asio/detail/push_options.hpp>
    
    #include 'jsapi.h'
#include 'jsfriendapi.h'
    
    
    
    
#endif // __cocos2dx_physics_h__
#endif //#if CC_USE_PHYSICS

    
    #include 'Test.h'
#include 'GLES-Render.h'
    
    	static Test* Create()
	{
		return new Car;
	}