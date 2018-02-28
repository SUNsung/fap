
        
         private:
  void SetMean(const string& mean_file);
    
    
    { protected:
  /**
   * @param bottom input Blob vector (length 1)
   *   -# @f$ (N \times C \times H \times W) @f$
   *      the inputs @f$ x @f$
   * @param top output Blob vector (length 1)
   *   -# @f$ (N \times 1 \times K) @f$ or, if out_max_val
   *      @f$ (N \times 2 \times K) @f$ unless axis set than e.g.
   *      @f$ (N \times K \times H \times W) @f$ if axis == 1
   *      the computed outputs @f$
   *       y_n = \arg\max\limits_i x_{ni}
   *      @f$ (for @f$ K = 1 @f$).
   */
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  /// @brief Not implemented (non-differentiable function)
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom) {
    NOT_IMPLEMENTED;
  }
  bool out_max_val_;
  size_t top_k_;
  bool has_axis_;
  int axis_;
};
    
    #include <vector>
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    namespace caffe {
    }
    
    
    {  Dtype inner_scale_, outer_scale_;
};
    
    static int make_prefixes(struct ifaddrs* ifaddr, int family, int prefixlen) {
	char* prefix = NULL;
	if (family == AF_INET) {
		sockaddr_in* mask = new sockaddr_in;
		mask->sin_family = AF_INET;
		memset(&mask->sin_addr, 0, sizeof(in_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 32) {
			prefixlen = 32;
		}
		prefix = reinterpret_cast<char*>(&mask->sin_addr);
	} else if (family == AF_INET6) {
		sockaddr_in6* mask = new sockaddr_in6;
		mask->sin6_family = AF_INET6;
		memset(&mask->sin6_addr, 0, sizeof(in6_addr));
		ifaddr->ifa_netmask = reinterpret_cast<sockaddr*>(mask);
		if (prefixlen > 128) {
			prefixlen = 128;
		}
		prefix = reinterpret_cast<char*>(&mask->sin6_addr);
	} else {
		return -1;
	}
	for (int i = 0; i < (prefixlen / 8); i++) {
		*prefix++ = 0xFF;
	}
	char remainder = 0xff;
	remainder <<= (8 - prefixlen % 8);
	*prefix = remainder;
	return 0;
}
    
    // Starts a new scan.
int jpeg_decoder::init_scan()
{
  if (!locate_sos_marker())
    return JPGD_FALSE;
    }
    
    static const static_bookblock _resbook_16u_0={
  {
    {0},
    {0,0,&_16u0__p1_0},
    {0,0,&_16u0__p2_0},
    {0,0,&_16u0__p3_0},
    {0,0,&_16u0__p4_0},
    {0,0,&_16u0__p5_0},
    {&_16u0__p6_0,&_16u0__p6_1},
    {&_16u0__p7_0,&_16u0__p7_1,&_16u0__p7_2}
   }
};
static const static_bookblock _resbook_16u_1={
  {
    {0},
    {0,0,&_16u1__p1_0},
    {0,0,&_16u1__p2_0},
    {0,0,&_16u1__p3_0},
    {0,0,&_16u1__p4_0},
    {0,0,&_16u1__p5_0},
    {0,0,&_16u1__p6_0},
    {&_16u1__p7_0,&_16u1__p7_1},
    {&_16u1__p8_0,&_16u1__p8_1},
    {&_16u1__p9_0,&_16u1__p9_1,&_16u1__p9_2}
   }
};
static const static_bookblock _resbook_16u_2={
  {
    {0},
    {0,0,&_16u2_p1_0},
    {0,0,&_16u2_p2_0},
    {0,0,&_16u2_p3_0},
    {0,0,&_16u2_p4_0},
    {&_16u2_p5_0,&_16u2_p5_1},
    {&_16u2_p6_0,&_16u2_p6_1},
    {&_16u2_p7_0,&_16u2_p7_1},
    {&_16u2_p8_0,&_16u2_p8_1},
    {&_16u2_p9_0,&_16u2_p9_1,&_16u2_p9_2}
   }
};
    
        {&_44p5_p6_0,&_44p5_p6_1,&_44p5_p5_1},
    {&_44p5_p7_0,&_44p5_p7_1,&_44p5_p7_2,&_44p5_p7_3}
   }
};
static const static_bookblock _resbook_44p_6={
  {
    {0},
    {0,0,&_44p6_p1_0},
    {0,&_44p6_p2_0,0},
    
    /* mapping conventions:
   only one submap (this would change for efficient 5.1 support for example)*/
/* Four psychoacoustic profiles are used, one for each blocktype */
static const vorbis_info_mapping0 _map_nominal_u[2]={
  {1, {0,0,0,0,0,0}, {0}, {0}, 0,{0},{0}},
  {1, {0,0,0,0,0,0}, {1}, {1}, 0,{0},{0}}
};
    
    #endif /* _OS_H */

    
    #endif

    
    #ifndef DISABLE_FLOAT_API
static OPUS_INLINE opus_int16 FLOAT2INT16(float x)
{
   x = x*CELT_SIG_SCALE;
   x = MAX32(x, -32768);
   x = MIN32(x, 32767);
   return (opus_int16)float2int(x);
}
#endif /* DISABLE_FLOAT_API */
    
        /* First approximation */
    result = silk_SMULWB(a32_nrm, b32_inv);                                     /* Q: 29 + a_headrm - b_headrm  */
    
    
    {} // namespace boost
    
    #ifndef BOOST_ASIO_DETAIL_CALL_STACK_HPP
#define BOOST_ASIO_DETAIL_CALL_STACK_HPP
    
    
    {    // Make the upcall if required.
    if (owner)
    {
      fenced_block b(fenced_block::half);
      BOOST_ASIO_HANDLER_INVOCATION_BEGIN((handler.arg1_, handler.arg2_));
      boost_asio_handler_invoke_helpers::invoke(handler, handler.handler_);
      BOOST_ASIO_HANDLER_INVOCATION_END;
    }
  }
    
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
    
    class winrt_buffer_impl :
  public Microsoft::WRL::RuntimeClass<
    Microsoft::WRL::RuntimeClassFlags<
      Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
    ABI::Windows::Storage::Streams::IBuffer,
    Windows::Storage::Streams::IBufferByteAccess>
{
public:
  explicit winrt_buffer_impl(const boost::asio::const_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = boost::asio::buffer_size(b);
    capacity_ = boost::asio::buffer_size(b);
  }
    }
    
    int open(const char* path, int flags, boost::system::error_code& ec)
{
  errno = 0;
  int result = error_wrapper(::open(path, flags), ec);
  if (result >= 0)
    ec = boost::system::error_code();
  return result;
}
    
    template <typename Time_Traits>
std::size_t dev_poll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}
    
    extern JSClass  *jsb_cocos2d_NavMeshObstacle_class;
extern JSObject *jsb_cocos2d_NavMeshObstacle_prototype;
    
    bool js_cocos2dx_studio_ContourData_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_studio_ContourData_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_studio_ContourData(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_studio(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_studio_ContourData_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ContourData_addVertex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ContourData_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_studio_ContourData_ContourData(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    {        ok &= luaval_to_number(tolua_S, 2,&arg0, 'cc.SimpleAudioEngine:setBackgroundMusicVolume');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setBackgroundMusicVolume'', nullptr);
            return 0;
        }
        cobj->setBackgroundMusicVolume(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:setBackgroundMusicVolume',argc, 1);
    return 0;
    
    #ifdef __cplusplus
extern 'C' {
#endif
#include 'tolua++.h'
#ifdef __cplusplus
}
#endif
    
    
    
    
    
    #if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif
    
    
    
    
    
        GLfloat                glVertices[] = {
        aabb->lowerBound.x * mRatio, aabb->lowerBound.y * mRatio,
        aabb->upperBound.x * mRatio, aabb->lowerBound.y * mRatio,
        aabb->upperBound.x * mRatio, aabb->upperBound.y * mRatio,
        aabb->lowerBound.x * mRatio, aabb->upperBound.y * mRatio
    };
    
    #endif

    
    
    {} // namespace aria2
    
    private:
  std::string userDefinedUser_;
  std::string userDefinedPassword_;
    
      PeerConnection* peerConnection_;
    
    
    {} // namespace aria2
    
    protected:
  DownloadEngine* getDownloadEngine() { return e_; }
  // Called after content body is completely sent.
  virtual void afterSend(const std::shared_ptr<HttpServer>& httpServer,
                         DownloadEngine* e) = 0;
    
    bool AbstractOptionHandler::isHidden() const { return flags_ & FLAG_HIDDEN; }
    
      void setPeerStorage(const std::shared_ptr<PeerStorage>& peerStorage);
    
      void reconfigure(const std::vector<std::vector<std::string>>& announceList);
  void reconfigure(const std::string& url);
    
    
    {private:
  Session* session_;
  DownloadEventCallback callback_;
  void* userData_;
};