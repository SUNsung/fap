
        
        
    { private:
  DISALLOW_COPY_AND_ASSIGN(EventDisabler);
};
    
      std::unique_ptr<base::ListValue> preferences_;
    
    
    {}  // namespace chrome
    
    #include <map>
    
    
    {}  // namespace chrome
    
    void TtsPlatformImpl::clear_error() {
  error_ = std::string();
}
    
    void THDTensor_(_resize5d)(THDTensor *tensor, int64_t size0, int64_t size1, int64_t size2, int64_t size3, int64_t size4) {
  int64_t sizes[] = {size0, size1, size2, size3, size4};
  THDTensor_(_resize)(tensor, 2, sizes, nullptr);
}
    
    auto ${Storage}::fast_get(std::size_t ind) -> Scalar {
  if(${isCUDA})
    throw std::runtime_error('unsupported operation 'fast_get'');
  return static_cast<${ScalarType}>(${to_at_type}(storage->data[ind]));
}
    
    namespace at {
    }
    
    
  // NOTE: this function needs to be thread safe
  std::shared_ptr<context_type> createContext(
    const DataChannelGloo::Group& group,
    const std::string& prefix
  ) {
    /**
     * We currently only supports a single Infiniband interface. In other words,
     * if there are multiple Infiniband devices in the system, Gloo will detect
     * all of them and use the first device.
     *
     * TODO: This can be extended later to utilize multiple Infiniband devices
     *
     * For ethernet, _deviceList[0] will always have the default ethernet
     * device that is detected from the user's provided IP address and there
     * won't be multiple one device in _deviceList
     *
     * For Infiniband, _deviceList[0], which is the first found IB interfance,
     * will be used by all Gloo operations.
     */
    size_t curDevice = 0;
    auto context = std::make_shared<context_type>(
        group.mustGetGroupRank(_rank), group.size());
    prefix_store_type prefix_store(prefix, *group._store);
    context->connectFullMesh(prefix_store, _deviceList[curDevice]);
    return context;
  }
    
    #define THCPStorage TH_CONCAT_3(THCP,Real,Storage)
#define THCPStorageStr TH_CONCAT_STRING_3(torch.cuda.,Real,Storage)
#define THCPStorageClass TH_CONCAT_3(THCP,Real,StorageClass)
#define THCPStorage_(NAME) TH_CONCAT_4(THCP,Real,Storage_,NAME)
    
    #undef THStorage
#undef THStorage_
#undef THTensor
#undef THTensor_
    
      /// Get an option from the acceptor.
  /**
   * This function is used to get the current value of an option on the
   * acceptor.
   *
   * @param option The option value to be obtained from the acceptor.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @sa GettableSocketOption @n
   * boost::asio::socket_base::reuse_address
   *
   * @par Example
   * Getting the value of the SOL_SOCKET/SO_REUSEADDR option:
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::acceptor::reuse_address option;
   * boost::system::error_code ec;
   * acceptor.get_option(option, ec);
   * if (ec)
   * {
   *   // An error occurred.
   * }
   * bool is_set = option.get();
   * @endcode
   */
  template <typename GettableSocketOption>
  boost::system::error_code get_option(GettableSocketOption& option,
      boost::system::error_code& ec)
  {
    return this->get_service().get_option(
        this->get_implementation(), option, ec);
  }
    
    /// Provides waitable timer functionality.
/**
 * The basic_waitable_timer class template provides the ability to perform a
 * blocking or asynchronous wait for a timer to expire.
 *
 * A waitable timer is always in one of two states: 'expired' or 'not expired'.
 * If the wait() or async_wait() function is called on an expired timer, the
 * wait operation will complete immediately.
 *
 * Most applications will use one of the boost::asio::steady_timer,
 * boost::asio::system_timer or boost::asio::high_resolution_timer typedefs.
 *
 * @note This waitable timer functionality is for use with the C++11 standard
 * library's @c &lt;chrono&gt; facility, or with the Boost.Chrono library.
 *
 * @par Thread Safety
 * @e Distinct @e objects: Safe.@n
 * @e Shared @e objects: Unsafe.
 *
 * @par Examples
 * Performing a blocking wait (C++11):
 * @code
 * // Construct a timer without setting an expiry time.
 * boost::asio::steady_timer timer(io_service);
 *
 * // Set an expiry time relative to now.
 * timer.expires_from_now(std::chrono::seconds(5));
 *
 * // Wait for the timer to expire.
 * timer.wait();
 * @endcode
 *
 * @par 
 * Performing an asynchronous wait (C++11):
 * @code
 * void handler(const boost::system::error_code& error)
 * {
 *   if (!error)
 *   {
 *     // Timer expired.
 *   }
 * }
 *
 * ...
 *
 * // Construct a timer with an absolute expiry time.
 * boost::asio::steady_timer timer(io_service,
 *     std::chrono::steady_clock::now() + std::chrono::seconds(60));
 *
 * // Start an asynchronous wait.
 * timer.async_wait(handler);
 * @endcode
 *
 * @par Changing an active waitable timer's expiry time
 *
 * Changing the expiry time of a timer while there are pending asynchronous
 * waits causes those wait operations to be cancelled. To ensure that the action
 * associated with the timer is performed only once, use something like this:
 * used:
 *
 * @code
 * void on_some_event()
 * {
 *   if (my_timer.expires_from_now(seconds(5)) > 0)
 *   {
 *     // We managed to cancel the timer. Start new asynchronous wait.
 *     my_timer.async_wait(on_timeout);
 *   }
 *   else
 *   {
 *     // Too late, timer has already expired!
 *   }
 * }
 *
 * void on_timeout(const boost::system::error_code& e)
 * {
 *   if (e != boost::asio::error::operation_aborted)
 *   {
 *     // Timer was not cancelled, take necessary action.
 *   }
 * }
 * @endcode
 *
 * @li The boost::asio::basic_waitable_timer::expires_from_now() function
 * cancels any pending asynchronous waits, and returns the number of
 * asynchronous waits that were cancelled. If it returns 0 then you were too
 * late and the wait handler has already been executed, or will soon be
 * executed. If it returns 1 then the wait handler was successfully cancelled.
 *
 * @li If a wait handler is cancelled, the boost::system::error_code passed to
 * it contains the value boost::asio::error::operation_aborted.
 */
template <typename Clock,
    typename WaitTraits = boost::asio::wait_traits<Clock>,
    typename WaitableTimerService = waitable_timer_service<Clock, WaitTraits> >
class basic_waitable_timer
  : public basic_io_object<WaitableTimerService>
{
public:
  /// The clock type.
  typedef Clock clock_type;
    }
    
    #ifndef BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_READ_STREAM_FWD_HPP
    
    #include <boost/asio/detail/config.hpp>
    
    #include <boost/asio/detail/config.hpp>
    
    #include <boost/asio/detail/push_options.hpp>
    
        // Find the next context with the same key.
    Value* next_by_key() const
    {
      context* elem = next_;
      while (elem)
      {
        if (elem->key_ == key_)
          return elem->value_;
        elem = elem->next_;
      }
      return 0;
    }
    
    namespace boost {
namespace date_time {
    }
    }
    
    template <typename MutableBufferSequence>
class descriptor_read_op_base : public reactor_op
{
public:
  descriptor_read_op_base(int descriptor,
      const MutableBufferSequence& buffers, func_type complete_func)
    : reactor_op(&descriptor_read_op_base::do_perform, complete_func),
      descriptor_(descriptor),
      buffers_(buffers)
  {
  }
    }
    
    #ifndef BOOST_ASIO_DETAIL_EVENT_HPP
#define BOOST_ASIO_DETAIL_EVENT_HPP
    
    #include <boost/asio/detail/push_options.hpp>
    
    void dev_poll_reactor::run(bool block, op_queue<operation>& ops)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
    }
    
      typedef std::set< std::pair<int, uint64_t> > DeletedFileSet;
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      WritableFile* writable_file;
  ASSERT_OK(env_->NewWritableFile('/dir/f', &writable_file));
  ASSERT_OK(writable_file->Append('foo'));
  ASSERT_OK(writable_file->Append(write_data));
  delete writable_file;
    
    std::string Key2(int i) {
  return Key1(i) + '_xxx';
}
    
      // Check third filter (empty)
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'bar'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'box'));
  ASSERT_TRUE(! reader.KeyMayMatch(4100, 'hello'));
    
    std::string Histogram::ToString() const {
  std::string r;
  char buf[200];
  snprintf(buf, sizeof(buf),
           'Count: %.0f  Average: %.4f  StdDev: %.2f\n',
           num_, Average(), StandardDeviation());
  r.append(buf);
  snprintf(buf, sizeof(buf),
           'Min: %.4f  Median: %.4f  Max: %.4f\n',
           (num_ == 0.0 ? 0.0 : min_), Median(), max_);
  r.append(buf);
  r.append('------------------------------------------------------\n');
  const double mult = 100.0 / num_;
  double sum = 0;
  for (int b = 0; b < kNumBuckets; b++) {
    if (buckets_[b] <= 0.0) continue;
    sum += buckets_[b];
    snprintf(buf, sizeof(buf),
             '[ %7.0f, %7.0f ) %7.0f %7.3f%% %7.3f%% ',
             ((b == 0) ? 0.0 : kBucketLimit[b-1]),      // left
             kBucketLimit[b],                           // right
             buckets_[b],                               // count
             mult * buckets_[b],                        // percentage
             mult * sum);                               // cumulative percentage
    r.append(buf);
    }
    }
    
      std::string ToString() const;
    
    bool js_cocos2dx_physics3d_Physics3DComponent_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DComponent_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DComponent(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DComponent_syncNodeToPhysics(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DComponent_addToPhysicsWorld(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DComponent_syncPhysicsToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DComponent_getPhysics3DObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DComponent_setPhysics3DObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DComponent_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DComponent_setTransformInPhysics(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DComponent_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DComponent_getPhysics3DComponentName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DComponent_Physics3DComponent(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    // Implemented features:
//  [X] User texture binding. Use 'LPDIRECT3DTEXTURE9' as ImTextureID. Read the FAQ about ImTextureID in imgui.cpp.
    
            UINT uploadPitch = (width * 4 + D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u) & ~(D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u);
        UINT uploadSize = height * uploadPitch;
        desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
        desc.Alignment = 0;
        desc.Width = uploadSize;
        desc.Height = 1;
        desc.DepthOrArraySize = 1;
        desc.MipLevels = 1;
        desc.Format = DXGI_FORMAT_UNKNOWN;
        desc.SampleDesc.Count = 1;
        desc.SampleDesc.Quality = 0;
        desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
        desc.Flags = D3D12_RESOURCE_FLAG_NONE;
    
        ImGui_ImplGlfwGL3_CreateFontsTexture();
    
    void CreateRenderTarget()
{
    ID3D12Resource* pBackBuffer;
    for (UINT i = 0; i < NUM_BACK_BUFFERS; i++)
    {
        g_pSwapChain->GetBuffer(i, IID_PPV_ARGS(&pBackBuffer));
        g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, g_mainRenderTargetDescriptor[i]);
        g_mainRenderTargetResource[i] = pBackBuffer;
    }
}
    
        // Main loop
    while (true)
    {
        if (s3eDeviceCheckQuitRequest())
            break;
    }