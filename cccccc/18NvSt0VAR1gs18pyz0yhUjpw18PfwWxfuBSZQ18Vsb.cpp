
        
          /// Perform an IO control command on the acceptor.
  /**
   * This function is used to execute an IO control command on the acceptor.
   *
   * @param command The IO control command to be performed on the acceptor.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @sa IoControlCommand @n
   * boost::asio::socket_base::non_blocking_io
   *
   * @par Example
   * Getting the number of bytes ready to read:
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::acceptor::non_blocking_io command(true);
   * socket.io_control(command);
   * @endcode
   */
  template <typename IoControlCommand>
  void io_control(IoControlCommand& command)
  {
    boost::system::error_code ec;
    this->get_service().io_control(this->get_implementation(), command, ec);
    boost::asio::detail::throw_error(ec, 'io_control');
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    class ptime;
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #ifndef BOOST_ASIO_DETAIL_FUNCTION_HPP
#define BOOST_ASIO_DETAIL_FUNCTION_HPP
    
    #endif // BOOST_ASIO_DETAIL_HASH_MAP_HPP

    
    /**
 * @brief Access the internal storage of the Decorator parser.
 *
 * The decoration set is a map of column name to value. It contains the opaque
 * set of decoration point results.
 *
 * Decorations are applied to log items before they are sent to the downstream
 * logging APIs: logString, logSnapshot, etc.
 *
 * @param results the output parameter to write decorations.
 */
void getDecorations(std::map<std::string, std::string>& results);
    
    class RocksDBDatabasePluginTests : public DatabasePluginTests {
 protected:
  std::string name() override {
    return 'rocksdb';
  }
};
    
    /**
 * @brief Generate the separator string for query results
 *
 * @param lengths The data returned from computeQueryDataLengths
 * @param columns The order of the keys (since maps are unordered)
 *
 * @return A string, with a newline, representing your separator
 */
std::string generateToken(const std::map<std::string, size_t>& lengths,
                          const std::vector<std::string>& columns);
    
    /**
 * @brief Subscriptioning details for UdevEventPublisher events.
 *
 */
struct UdevSubscriptionContext : public SubscriptionContext {
  /// The hardware event action, add/remove/change.
  udev_event_action action;
    }
    
        double width;
    double height;
    
        Size(double width, double height)
    : width(width)
    , height(height)
    {
    }
    
    
    {}

    
    FBEXPORT void assertInternal(const char* formatstr, ...) __attribute__((noreturn));
    
    
    {  uint8_t* getDirectBytes() const;
  size_t getDirectSize() const;
};