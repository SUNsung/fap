
        
          ClientConfig client_config;
  client_config.set_client_type(ASYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1000);
  client_config.set_client_channels(8);
  client_config.set_async_client_threads(8);
  client_config.set_rpc_type(STREAMING);
  client_config.mutable_load_params()->mutable_poisson()->set_offered_load(
      1000.0 / grpc_test_slowdown_factor());
    
    #include <signal.h>
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list);
    
    SecureAuthContext::SecureAuthContext(grpc_auth_context* ctx,
                                     bool take_ownership)
    : ctx_(ctx), take_ownership_(take_ownership) {}
    
    String RigidBody::get_configuration_warning() const {
    }
    
    	switch (p_param) {
		case PhysicsServer::BODY_PARAM_BOUNCE: {
    }
    }
    
    	real_t kinematic_safe_margin;
	real_t _inv_mass;
	Vector3 _inv_inertia; // Relative to the principal axes of inertia
    
    	switch (p_state) {
		case Physics2DServer::BODY_STATE_TRANSFORM: {
    }
    }
    
    
    {
    {		contact_count++;
	}
}
    
    	bool body_test_motion(RID p_body, const Transform2D &p_from, const Vector2 &p_motion, bool p_infinite_inertia, real_t p_margin = 0.001, MotionResult *r_result = NULL, bool p_exclude_raycast_shapes = true) {
    }
    
    	//fix
	virtual void body_add_collision_exception(RID p_body, RID p_body_b) = 0;
	virtual void body_remove_collision_exception(RID p_body, RID p_body_b) = 0;
	virtual void body_get_collision_exceptions(RID p_body, List<RID> *p_exceptions) = 0;
    
    		if (data.parent && !data.toplevel_active) {
    }
    
    	sun_angle_max = p_angle;
	_queue_update();
}
float ProceduralSky::get_sun_angle_max() const {
    
      static Status InsertInto(const WriteBatch* batch, MemTable* memtable);
    
      // Open database.  Disable compression since it affects the creation
  // of layers and the code below is trying to test against a very
  // specific scenario.
  leveldb::DB* db;
  leveldb::Options db_options;
  db_options.create_if_missing = true;
  db_options.compression = leveldb::kNoCompression;
  ASSERT_OK(leveldb::DB::Open(db_options, dbpath, &db));
    
    class SCOPED_LOCKABLE MutexLock {
 public:
  explicit MutexLock(port::Mutex *mu) EXCLUSIVE_LOCK_FUNCTION(mu)
      : mu_(mu)  {
    this->mu_->Lock();
  }
  ~MutexLock() UNLOCK_FUNCTION() { this->mu_->Unlock(); }
    }
    
      /// Construct, passing the specified argument to initialise the next layer.
  template <typename Arg>
  explicit buffered_read_stream(Arg& a)
    : next_layer_(a),
      storage_(default_buffer_size)
  {
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    template <typename CompletionCondition>
class base_from_completion_cond
{
protected:
  explicit base_from_completion_cond(CompletionCondition completion_condition)
    : completion_condition_(completion_condition)
  {
  }
    }
    
      static void init_native_buffer(WSABUF& buf,
      const boost::asio::const_buffer& buffer)
  {
    buf.buf = const_cast<char*>(boost::asio::buffer_cast<const char*>(buffer));
    buf.len = static_cast<ULONG>(boost::asio::buffer_size(buffer));
  }
#else // defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
  // The maximum number of buffers to support in a single operation.
  enum { max_buffers = 64 < max_iov_len ? 64 : max_iov_len };
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
typedef null_fenced_block fenced_block;
#elif defined(__MACH__) && defined(__APPLE__)
typedef macos_fenced_block fenced_block;
#elif defined(__sun)
typedef solaris_fenced_block fenced_block;
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
typedef gcc_arm_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
typedef gcc_hppa_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
typedef gcc_x86_fenced_block fenced_block;
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
typedef gcc_sync_fenced_block fenced_block;
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
typedef win_fenced_block fenced_block;
#else
typedef null_fenced_block fenced_block;
#endif
    
    #include <boost/asio/detail/config.hpp>
    
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
    
        if (result != 0
        && (ec == boost::asio::error::would_block
          || ec == boost::asio::error::try_again))
    {
      // According to UNIX Network Programming Vol. 1, it is possible for
      // close() to fail with EWOULDBLOCK under certain circumstances. What
      // isn't clear is the state of the descriptor after this error. The one
      // current OS where this behaviour is seen, Windows, says that the socket
      // remains open. Therefore we'll put the descriptor back into blocking
      // mode and have another attempt at closing it.
#if defined(__SYMBIAN32__)
      int flags = ::fcntl(d, F_GETFL, 0);
      if (flags >= 0)
        ::fcntl(d, F_SETFL, flags & ~O_NONBLOCK);
#else // defined(__SYMBIAN32__)
      ioctl_arg_type arg = 0;
      ::ioctl(d, FIONBIO, &arg);
#endif // defined(__SYMBIAN32__)
      state &= ~non_blocking;
    }
    
    template <typename Time_Traits>
void dev_poll_reactor::schedule_timer(timer_queue<Time_Traits>& queue,
    const typename Time_Traits::time_type& time,
    typename timer_queue<Time_Traits>::per_timer_data& timer, wait_op* op)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
    }
    
    class PredictionQuerier {
 public:
  explicit PredictionQuerier(
      const std::vector<const Obstacle*>& obstacles,
      const std::shared_ptr<std::vector<common::PathPoint>>&
      ptr_reference_line);
    }
    
    void Obstacle::SetTheta(const PerceptionObstacle& perception_obstacle,
                        Feature* feature) {
  double theta = 0.0;
  if (perception_obstacle.has_theta()) {
    theta = perception_obstacle.theta();
  }
  feature->set_theta(theta);
    }
    
      /**
   * @brief Getter of the width
   * @return The width of the box taken perpendicularly to the heading
   */
  double width() const { return width_; }
    
    bool MultiCamerasProjection::Init() {
  if (!GetProtoFromFile(FLAGS_traffic_light_multi_camera_projection_config,
                        &config_)) {
    AERROR << 'Cannot get config proto from file: '
           << FLAGS_traffic_light_multi_camera_projection_config;
    return false;
  }
  // Read camera names from config file
  const std::string &single_projection_name =
      config_.multi_camera_projection_config().single_projection();
    }
    
    TEST_F(DecisionTest, mix) {
  std::vector<int> color_list = {3, 3, 3, 0, 0, 0, 3, 0, 3, 1, 0, 1, 0, 1,
                                 0, 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3};
  std::vector<int> gt_list = {3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 1, 1, 1, 1,
                              1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3};
  ReviseOption option(100);
  for (size_t i = 0; i < color_list.size(); ++i) {
    std::vector<LightPtr> light;
    light.emplace_back(new Light);
    light[0]->status.color = TLColor(color_list[i]);
    reviser_->Revise(option, &light);
    option.ts += 0.1;
    ASSERT_TRUE(light[0]->status.color == TLColor(gt_list[i]));
  }
}
    
    
    {
    {
    {}  // namespace traffic_light
}  // namespace perception
}  // namespace apollo

    
      /**
   * @brief: rectify light region from image or part of it
   * @param  const Image&: input image
   * @param  const RectifyOption&: rectify options
   * @param  Lights
   * @return  bool
   */
  bool Rectify(const Image &image, const RectifyOption &option,
               std::vector<LightPtr> *lights) override;
    
    ConsoleReporter::OutputOptions GetOutputOptions(bool force_no_color = false);
    
    struct LeastSq {
  LeastSq() : coef(0.0), rms(0.0), complexity(oNone) {}
    }
    
      const CPUInfo &info = context.cpu_info;
  Out << 'Run on (' << info.num_cpus << ' X '
      << (info.cycles_per_second / 1000000.0) << ' MHz CPU '
      << ((info.num_cpus > 1) ? 's' : '') << ')\n';
  if (info.caches.size() != 0) {
    Out << 'CPU Caches:\n';
    for (auto &CInfo : info.caches) {
      Out << '  L' << CInfo.level << ' ' << CInfo.type << ' '
          << (CInfo.size / 1000) << 'K';
      if (CInfo.num_sharing != 0)
        Out << ' (x' << (info.num_cpus / CInfo.num_sharing) << ')';
      Out << '\n';
    }
  }