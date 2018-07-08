
        
        void RegisterShellMenu(std::wstring opt, wchar_t* keyBaseName)
{
	// First, get the paths we will use
    }
    
      /// Accept a new connection and obtain the endpoint of the peer
  /**
   * This function is used to accept a new connection from a peer into the
   * given socket, and additionally provide the endpoint of the remote peer.
   * The function call will block until a new connection has been accepted
   * successfully or an error occurs.
   *
   * @param peer The socket into which the new connection will be accepted.
   *
   * @param peer_endpoint An endpoint object which will receive the endpoint of
   * the remote peer.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @par Example
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::socket socket(io_service);
   * boost::asio::ip::tcp::endpoint endpoint;
   * acceptor.accept(socket, endpoint);
   * @endcode
   */
  template <typename SocketService>
  void accept(basic_socket<protocol_type, SocketService>& peer,
      endpoint_type& peer_endpoint)
  {
    boost::system::error_code ec;
    this->get_service().accept(this->get_implementation(),
        peer, &peer_endpoint, ec);
    boost::asio::detail::throw_error(ec, 'accept');
  }
    
      const boost::asio::detail::function<void()>& get_debug_check() const
  {
    return debug_check_;
  }
#endif // BOOST_ASIO_ENABLE_BUFFER_DEBUGGING
    
    
    {    return init.result.get();
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    namespace boost {
namespace date_time {
    }
    }
    
    #endif // BOOST_ASIO_DETAIL_DESCRIPTOR_WRITE_OP_HPP

    
      // Constructor for a full fenced block.
  explicit gcc_arm_fenced_block(full_t)
  {
    barrier();
  }
    
    #define BOOST_ASIO_DEFINE_HANDLER_PTR(op) \
  struct ptr \
  { \
    Handler* h; \
    void* v; \
    op* p; \
    ~ptr() \
    { \
      reset(); \
    } \
    void reset() \
    { \
      if (p) \
      { \
        p->~op(); \
        p = 0; \
      } \
      if (v) \
      { \
        boost_asio_handler_alloc_helpers::deallocate(v, sizeof(op), *h); \
        v = 0; \
      } \
    } \
  } \
  /**/
    
    #ifndef BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
#define BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP
    
      // Constructor.
  hash_map()
    : size_(0),
      buckets_(0),
      num_buckets_(0)
  {
  }
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_EPOLL_REACTOR_HPP
#define BOOST_ASIO_DETAIL_IMPL_EPOLL_REACTOR_HPP
    
    extern JSClass  *jsb_cocostudio_timeline_ActionTimeline_class;
extern JSObject *jsb_cocostudio_timeline_ActionTimeline_prototype;
    
    
    {        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, 'cc.SimpleAudioEngine:unloadEffect'); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_unloadEffect'', nullptr);
            return 0;
        }
        cobj->unloadEffect(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:unloadEffect',argc, 1);
    return 0;
    
    #endif // __cocos2dx_cocosdenshion_h__

    
    
    
    
    
    int register_all_cocos2dx_navmesh(lua_State* tolua_S);
    
    
    
        virtual void DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color);
    
    struct Value
{
    static Value fromYGValue(YGValue const & ygValue)
    {
        return Value(static_cast<int>(ygValue.unit), ygValue.value);
    }
    }
    
    bool Config::isExperimentalFeatureEnabled(int feature) const
{
    return YGConfigIsExperimentalFeatureEnabled(m_config, static_cast<YGExperimentalFeature>(feature));
}

    
    void Node::setMeasureFunc(nbind::cbFunction & measureFunc)
{
    m_measureFunc.reset(new nbind::cbFunction(measureFunc));
    }
    
    template<typename... ARGS>
inline void log(int level, const char* tag, const char* msg, ARGS... args) noexcept {
  __android_log_print(level, tag, msg, args...);
}
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
      bool operator==(const ProgramLocation& other) const {
    // Assumes that the strings are static
    return (m_functionName == other.m_functionName) && (m_fileName == other.m_fileName) && m_lineNumber == other.m_lineNumber;
  }
    
    
    { private:
  Function* func_;
};
    
    #endif  // BENCHMARK_API_INTERNAL_H

    
    #endif  // BENCHMARK_RE_H_
