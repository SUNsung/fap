
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // TODO(zongheng): this should be a general functor that powers SparseAdd and
// ScatterNd ops.  It should be moved to its own head file, once the other ops
// are implemented.
template <typename Device, typename T, typename Index, int NDIMS,
          scatter_op::UpdateOp op>
struct ScatterNdFunctor {
  // Returns -1 on success or a nonnegative i s.t. indices[i] is a bad index.
  Index operator()(const Device& d, typename TTypes<Index>::ConstMatrix indices,
                   typename TTypes<T>::ConstFlat updates,
                   typename TTypes<T, NDIMS>::Tensor out);
};
    
    #endif  // TENSORFLOW_PLATFORM_PREFETCH_H_

    
    void SYCLDeviceContext::CopyCPUTensorToDevice(const Tensor *cpu_tensor,
                                              Device *device,
                                              Tensor *device_tensor,
                                              StatusCallback done) const {
  const int64 total_bytes = cpu_tensor->TotalBytes();
  if (total_bytes > 0) {
    const void *src_ptr = DMAHelper::base(cpu_tensor);
    void *dst_ptr = DMAHelper::base(device_tensor);
    switch (cpu_tensor->dtype()) {
      case DT_FLOAT:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<float *>(dst_ptr), static_cast<const float *>(src_ptr),
            total_bytes);
        break;
      case DT_DOUBLE:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<double *>(dst_ptr),
            static_cast<const double *>(src_ptr), total_bytes);
        break;
      case DT_INT32:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int32 *>(dst_ptr), static_cast<const int32 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int64 *>(dst_ptr), static_cast<const int64 *>(src_ptr),
            total_bytes);
        break;
      case DT_HALF:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<Eigen::half *>(dst_ptr),
            static_cast<const Eigen::half *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX64:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<float> *>(dst_ptr),
            static_cast<const std::complex<float> *>(src_ptr), total_bytes);
        break;
      case DT_COMPLEX128:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<std::complex<double> *>(dst_ptr),
            static_cast<const std::complex<double> *>(src_ptr), total_bytes);
        break;
      case DT_INT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int8 *>(dst_ptr), static_cast<const int8 *>(src_ptr),
            total_bytes);
        break;
      case DT_INT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<int16 *>(dst_ptr), static_cast<const int16 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT8:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint8 *>(dst_ptr), static_cast<const uint8 *>(src_ptr),
            total_bytes);
        break;
      case DT_UINT16:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<uint16 *>(dst_ptr),
            static_cast<const uint16 *>(src_ptr), total_bytes);
        break;
      case DT_BOOL:
        device->eigen_sycl_device()->memcpyHostToDevice(
            static_cast<bool *>(dst_ptr), static_cast<const bool *>(src_ptr),
            total_bytes);
        break;
      default:
        assert(false && 'unsupported type');
    }
  }
  device->eigen_sycl_device()->synchronize();
  done(Status::OK());
}
    
    #include 'tensorflow/core/lib/strings/strcat.h'
    
    template <typename T, typename IntType>
void ConcatGPUSlice(
    const Eigen::GpuDevice& gpu_device,
    const std::vector<std::unique_ptr<typename TTypes<T, 2>::ConstMatrix>>&
        inputs_flat,
    typename TTypes<T, 2>::Matrix* output) {
  Eigen::array<IntType, 2> offset{0, 0};
  for (int i = 0; i < inputs_flat.size(); ++i) {
    Eigen::array<IntType, 2> size;
    size[0] = inputs_flat[i]->dimension(0);
    size[1] = inputs_flat[i]->dimension(1);
    if (std::is_same<IntType, int32>::value) {
      To32Bit(*output).slice(offset, size).device(gpu_device) =
          To32Bit(*inputs_flat[i]);
    } else {
      output->slice(offset, size).device(gpu_device) = *inputs_flat[i];
    }
    }
    }
    
    // CUDA failed
// Since the outer code sometimes does not recover properly, as an option we log and die right away.
// This is needed for our GCD farm which has intermittent CUDA errors that sometimes cause the DBN tool, when running with MPI, to hang instead of terminating.
static void cudafail(const char* msg)
{
    // TODO: get from an env variable
    bool dieoncudafailure = false;
    if (!dieoncudafailure)
    {
        RuntimeError('%s', msg);
    }
    fprintf(stderr, '%s\n', msg);
    fprintf(stderr, 'cudafail: terminating\n'), fflush(stderr);
#ifdef WIN32
    TerminateProcess(GetCurrentProcess(), EXIT_FAILURE); // fail the hard way to ensure it won't hang elsewhere
#else
    exit(1);
#endif
}
    
                // push the statistics results of mean and variance of bn nodes into mpi updating vector
            std::vector<Matrix<ElemType>*> learnParamsValues(2, nullptr);
    
    using namespace std;
using namespace Microsoft::MSR;
using namespace Microsoft::MSR::CNTK;
    
    struct SourceFile // content of one source file  (only in this header because TextLocation's private member uses it)
{
    /*const*/ wstring path;                     // where it came from
    /*const*/ vector<wstring> lines;            // source code lines
    SourceFile(wstring location, wstring text); // from string, e.g. command line
    SourceFile(wstring path);                   // from file
};
    
    // ParseCommandLine - parse the command line parameters
// argc - count of arguments
// argv - array of argument parameters
// config - config to return
std::string ConfigParameters::ParseCommandLine(int argc, wchar_t* argv[], ConfigParameters& config)
{
    config.SetName(std::string('global'));
    }
    
    namespace Microsoft { namespace MSR { namespace CNTK {
    }
    }
    }
    
    bool js_cocos2dx_builder_CCBAnimationManager_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_builder_CCBAnimationManager_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_builder_CCBAnimationManager(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_builder(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_builder_CCBAnimationManager_moveAnimationsFromNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForSoundChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setBaseValue(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getLastCompletedSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_actionForCallbackChannel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getKeyframeCallbacks(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackControlEvents(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRunningSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getRootNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setDelegate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceDuration(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_addDocumentCallbackNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_runAnimationsForSequenceNamed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getSequenceId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setCallFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_setSequences(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_debug(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_getDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_builder_CCBAnimationManager_CCBAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
    
    extern JSClass  *jsb_cocos2d_NavMesh_class;
extern JSObject *jsb_cocos2d_NavMesh_prototype;
    
    bool js_cocos2dx_physics3d_PhysicsSprite3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_PhysicsSprite3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_PhysicsSprite3D(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_PhysicsSprite3D_syncNodeToPhysics(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_syncPhysicsToNode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_getPhysicsObj(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_setSyncFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_PhysicsSprite3D_PhysicsSprite3D(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
    
    
    
    {        ok &= luaval_to_number(tolua_S, 2,&arg0, 'cc.PhysicsJointRotarySpring:setDamping');
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_setDamping'', nullptr);
            return 0;
        }
        cobj->setDamping(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.PhysicsJointRotarySpring:setDamping',argc, 1);
    return 0;
    
    #define	RAND_LIMIT	32767
#define DRAW_STRING_NEW_LINE 25
    
    
    {
    {			float minX = -6.0f;
			float maxX = 0.0f;
			float minY = 4.0f;
			float maxY = 6.0f;
			
			for (int32 i = 0; i < 400; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position = b2Vec2(RandomFloat(minX,maxX),RandomFloat(minY,maxY));
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&shape, 0.01f);
			}
		}
		
		{
			b2PolygonShape shape;
			shape.SetAsBox(1.5f, 1.5f);
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-40.0f,5.0f);
			bd.bullet = true;
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&shape, 1.0f);
			body->SetLinearVelocity(b2Vec2(150.0f, 0.0f));
		}
	}
    
    			b2Transform xf2;
			xf2.q.Set(-0.3524f * b2_pi);
			xf2.p = -xf2.q.GetXAxis();
    
    			b2PolygonShape box;
			box.SetAsBox(10.0f, 0.25f);
			body->CreateFixture(&box, 1.0f);
    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
    /*!
 * \brief global random engine
 */
typedef CustomGlobalRandomEngine GlobalRandomEngine;
    
        const bst_uint nfeature = static_cast<bst_uint>(gmat.cut->row_ptr.size() - 1);
    const size_t nrow = gmat.row_ptr.size() - 1;
    
    /*! \brief High precision gradient statistics pair with integer backed
 * storage. Operators are associative where floating point versions are not
 * associative. */
typedef detail::bst_gpair_internal<int64_t> bst_gpair_integer;
    
    SparsePage::Writer::~Writer() {
  for (auto& queue : qworkers_) {
    // use nullptr to signal termination.
    std::shared_ptr<SparsePage> sig(nullptr);
    queue.Push(std::move(sig));
  }
  for (auto& thread : workers_) {
    thread->join();
  }
}
    
    /*! \brief match error */
struct EvalMultiLogLoss : public EvalMClassBase<EvalMultiLogLoss> {
  const char* Name() const override {
    return 'mlogloss';
  }
  inline static bst_float EvalRow(int label,
                                  const bst_float *pred,
                                  size_t nclass) {
    const bst_float eps = 1e-16f;
    size_t k = static_cast<size_t>(label);
    if (pred[k] > eps) {
      return -std::log(pred[k]);
    } else {
      return -std::log(eps);
    }
  }
};
    
    	printer->Print(vars, 'type $Service$_$Method$Server interface { \n');
	printer->Indent();
	if (genSend) {
		printer->Print(vars, 'Send(* $Response$) error\n');
	}
	if (genRecv) {
		printer->Print(vars, 'Recv() (* $Request$, error)\n');
	}
	if (genSendAndClose) {
		printer->Print(vars, 'SendAndClose(* $Response$) error\n');
	}
	printer->Print(vars, '$grpc$.ServerStream\n');
	printer->Outdent();
	printer->Print('}\n\n');
    
    ::grpc::ClientReader< flatbuffers::grpc::Message<Monster>>* MonsterStorage::Stub::RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::grpc::Message<Stat>& request) {
  return ::grpc::internal::ClientReaderFactory< flatbuffers::grpc::Message<Monster>>::Create(channel_.get(), rpcmethod_Retrieve_, context, request);
}
    
    
    {  virtual void Print(const std::map<grpc::string, grpc::string> &vars,
                     const char *template_string) = 0;
  virtual void Print(const char *string) = 0;
  virtual void Indent() = 0;
  virtual void Outdent() = 0;
};
    
      // Start the server. Lock to change the variable we're changing.
  wait_for_server.lock();
  server_instance = builder.BuildAndStart().release();
  wait_for_server.unlock();
  server_instance_cv.notify_one();