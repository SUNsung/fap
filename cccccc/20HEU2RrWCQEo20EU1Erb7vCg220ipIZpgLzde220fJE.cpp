
        
        #include <folly/Optional.h>
    
    void ThriftBuffer::flush() {
  *m_p = '\0';
  String data(m_buf, m_p - m_buf, CopyString);
  m_p = m_buf;
  flushImpl(data);
}
    
    //////////////////////////////////////////////////////////////////////
    
    /*
 * Returns an IR block corresponding to the given bytecode offset. If the block
 * starts with a DefLabel expecting a StkPtr, this function will return an
 * intermediate block that passes the current sp.
 */
Block* getBlock(IRGS& env, Offset offset);
    
    /*
 * Emit machine code for env. Returns folly::none if the global translation
 * limit has been reached, generates an interp request if vunit is null or
 * codegen fails. If optDst is set it must be a thread local view and the
 * code lock will not be acquired while writing to it.
 *
 * The resulting translation will not yet be live.
 */
folly::Optional<TransMetaInfo> emitTranslation(
  TransEnv env,
  OptView optDst = folly::none
);
    
    static void RunSynchronousUnaryPingPong() {
  gpr_log(GPR_INFO, 'Running Synchronous Unary Ping Pong');
    }
    
      const auto result =
      RunScenario(client_config, 1, server_config, 1, WARMUP, BENCHMARK, -2, '',
                  kInsecureCredentialsType, false);
    
    #include <signal.h>
    
    void ParseDb(const std::string& db, std::vector<Feature>* feature_list);
    
    #include <utility>
    
    namespace grpc_python_generator {
    }
    
    class MetricsServiceImpl final : public MetricsService::Service {
 public:
  grpc::Status GetAllGauges(ServerContext* context, const EmptyMessage* request,
                            ServerWriter<GaugeResponse>* writer) override;
    }
    
    void test_broadcast(std::shared_ptr<thd::DataChannel> data_channel) {
  for (std::size_t dest = 0; dest < data_channel->getNumProcesses(); ++dest) {
    if (data_channel->getRank() == dest) {
      auto float_tensor = buildTensor<float>({1, 2, 3, 4, 5}, 10.123);
      data_channel->broadcast(*float_tensor, dest);
    } else {
      auto float_tensor = buildTensor<float>({1, 2, 3, 4, 5}, -1.0);
      data_channel->broadcast(*float_tensor, dest);
      ASSERT_TENSOR_VALUE(float, *float_tensor, 10.123)
    }
  }
}
    
    ${Storage}::${Storage}(Context* context,
  void * data, std::size_t size, const std::function<void(void*)> & deleter)
  : storage(${THStorage}_newWithDataAndAllocator(${state,}
     static_cast<${THScalarType}*>(data), size,
     &storage_deleter,
     new std::function<void(void*)>(deleter)
    )),
    context(context) {
    ${THStorage}_clearFlag(${state,} storage, TH_STORAGE_RESIZABLE);
}
    
    CUDAGenerator::CUDAGenerator(Context * context_)
  : context(context_)
{
  // there's no reason to call THCRandom_init, because it is called
  // during THCudaInit, which is called before this initializer
  generator = THCRandom_getGenerator(context->thc_state);
}
    
    void THCRandom_manualSeedAll(THCState* state, uint64_t seed)
{
  THCRNGState* rng_state = THCState_getRngState(state);
  int currentDevice;
  THCudaCheck(cudaGetDevice(&currentDevice));
  for (int i = 0; i < rng_state->num_devices; ++i) {
    THCudaCheck(cudaSetDevice(i));
    THCRandom_manualSeed(state, seed);
  }
  THCudaCheck(cudaSetDevice(currentDevice));
}
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    
    {  static std::size_t check_for_completion(
      const boost::system::error_code& ec,
      std::size_t total_transferred)
  {
    return transfer_all_t()(ec, total_transferred);
  }
};
    
    template <typename ConstBufferSequence>
class descriptor_write_op_base : public reactor_op
{
public:
  descriptor_write_op_base(int descriptor,
      const ConstBufferSequence& buffers, func_type complete_func)
    : reactor_op(&descriptor_write_op_base::do_perform, complete_func),
      descriptor_(descriptor),
      buffers_(buffers)
  {
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
    
    // Calls to asio_handler_allocate and asio_handler_deallocate must be made from
// a namespace that does not contain any overloads of these functions. The
// boost_asio_handler_alloc_helpers namespace is defined here for that purpose.
namespace boost_asio_handler_alloc_helpers {
    }
    
    
    {private:
  byte* bytes_;
  UINT32 length_;
  UINT32 capacity_;
};
    
    
    {  pollfd fds;
  fds.fd = d;
  fds.events = POLLOUT;
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
    
        if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_end'', nullptr);
            return 0;
        }
        CocosDenshion::SimpleAudioEngine::end();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d\n ', 'cc.SimpleAudioEngine:end',argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,'#ferror in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_end'.',&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
    
    
    
    
    
    
    
    
    
        glDrawArrays(GL_LINE_LOOP, 0, vertexCount);
    
    	b2Fixture* fixtureA = contact->GetFixtureA();
	b2Fixture* fixtureB = contact->GetFixtureB();
    
    
    {	b2Vec2 viewCenter;
	float32 hz;
	int32 velocityIterations;
	int32 positionIterations;
	int32 drawShapes;
	int32 drawJoints;
	int32 drawAABBs;
	int32 drawContactPoints;
	int32 drawContactNormals;
	int32 drawContactImpulse;
	int32 drawFrictionImpulse;
	int32 drawCOMs;
	int32 drawStats;
	int32 drawProfile;
	int32 enableWarmStarting;
	int32 enableContinuous;
	int32 enableSubStepping;
	int32 enableSleep;
	int32 pause;
	int32 singleStep;
};
    
    class ApplyForce : public Test
{
public:
	ApplyForce()
	{
		m_world->SetGravity(b2Vec2(0.0f, 0.0f));
    }
    }
    
    
    {		body2->SetAngularVelocity(m_angularVelocity);
		body2->SetLinearVelocity(velocity2);
	}
    
    
    {
    {				prevBody = body;
			}
		}
    
    // Print (and its template specialization below for pointers) generate text
// for a single FlatBuffer value into JSON format.
// The general case for scalars:
template<typename T>
bool Print(T val, Type type, int /*indent*/, Type * /*union_type*/,
           const IDLOptions &opts, std::string *_text) {
  std::string &text = *_text;
  if (type.enum_def && opts.output_enum_identifiers) {
    auto enum_val = type.enum_def->ReverseLookup(static_cast<int64_t>(val));
    if (enum_val) {
      text += '\'';
      text += enum_val->name;
      text += '\'';
      return true;
    }
  }
    }
    
      int num_greetings = 10;
  greeter.SayManyHellos(name, num_greetings, [](const std::string &message) {
    std::cerr << 'Greeter received: ' << message << std::endl;
  });
    
    
    {  // Package name for the service
  grpc::string package_name;
};
    
    #endif  // FLATC_H_

    
    template<typename T> const char *EnumName(T tval, const TypeTable *type_table) {
  if (!type_table || !type_table->names) return nullptr;
  auto i = LookupEnum(static_cast<int32_t>(tval), type_table->values,
                      type_table->num_elems);
  if (i >= 0 && i < static_cast<int32_t>(type_table->num_elems)) {
    return type_table->names[i];
  }
  return nullptr;
}