
        
        AT_API CUDAStream createCUDAStreamWithOptions(int32_t flags, int32_t priority);
    
    /// A variant of `DeviceGuard` that augments it with an understanding of CUDA
/// streams. This guard can not only set and reset the current CUDA device, but
/// also set and reset the current CUDA stream. It is important to note that
/// because a CUDA stream is intrinsically associated with the CUDA device to
/// which it is bound, setting the CUDA stream *also* sets the current CUDA
/// device to that of the stream.
struct CUDAGuard {
  /// Default constructor, does nothing and causes no change in the current
  /// stream or device until `set_stream` or `set_device` is called.
  CUDAGuard() = default;
    }
    
    In cuDNN 7, a new function, cudnnRestoreDropoutDescriptor was added, which
forgoes the expensive initialization process, and can initialize the
descriptor with a pre-initialized state CUDA tensor.  This is great, because
it means we can simply pass in the state tensor and then initialize the
descriptor internally.  Unfortunately, this function is not available in
cuDNN 6.
    
    #include <unordered_map>
#include <mutex>
    
      virtual void cuFFTClearPlanCache() const {
    AT_ERROR('Cannot access cuFFT plan cache without ATen_cuda library. ', CUDA_HELP);
  }
    
    // Name of function in python module and name used for error messages by
// at::check* functions.
const char* cudnn_relu_name = 'cudnn_relu';
    
    /*!
 * \brief protected MXNet C API call, report R error if happens.
 * \param func Expression to call.
 */
#define MX_CALL(func)                                              \
  {                                                                \
    int e = (func);                                                \
    if (e != 0) {                                                  \
      throw Rcpp::exception(MXGetLastError());                     \
    }                                                              \
  }
/*!
 * \brief set seed to the random number generator
 * \param seed the seed to set.
 */
void SetSeed(int seed);
    
        for (size_t i = 0; i < grad_reqs.size(); ++i) {
      if (Rcpp::as<std::string>(grad_reqs[i]) != 'null'
          && Rcpp::as<std::string>(grad_reqs[i]) != 'write'
          && Rcpp::as<std::string>(grad_reqs[i]) != 'add') {
        RLOG_FATAL << 'grad_req must be one of 'null', 'write' or 'add'';
      }
    }
    
    
    {
    {
    {  /*! \return a new Object that is moved from current one */
  inline Executor* CreateMoveObject() {
    Executor *moved = new Executor();
    *moved = *this;
    out_arrays_ = nullptr;
    arg_arrays_ = nullptr;
    grad_arrays_ = nullptr;
    aux_arrays_ = nullptr;
    return moved;
  }
  /*!
   * \brief Clone src into a new space.
   * \param src source list of arrays to clone.
   * \return A cloned list of arrays under same context.
   */
  static Rcpp::List CloneArray(const Rcpp::List& src);
  /*!
   * \brief Copy arrays from to to
   * \param array_name The name of the array, used for error message.
   * \param from source list to copy from.
   * \param to target list to copy to.
   * \param match_name whether to use name to match the input, instead of index.
   * \param skip_null Whether null is allowed, when there is NULL in the array, simply ignore.
   */
  static void UpdateArray(const char* array_name,
                          const Rcpp::List& from, Rcpp::List *to,
                          bool match_name, bool skip_null);
  /*! \brief output arrays of Executor */
  Rcpp::List *out_arrays_;
  /*! \brief argument arrays of Executor */
  Rcpp::List *arg_arrays_;
  /*! \brief gradient arrays of Executor */
  Rcpp::List *grad_arrays_;
  /*! \brief auxiliary arrays of Executor */
  Rcpp::List *aux_arrays_;
  /*! \brief internal executor handle */
  ExecutorHandle handle_;
};
}  // namespace R
}  // namespace mxnet
    
    /*!
 * \brief Resiger a storage and dispatch mode inference function based on
 *        storage types of the inputs and outputs, and the dev_mask for the operator.
 *
 * \note Register under 'FInferStorageType'
 */
using FInferStorageType = std::function<bool (const NodeAttrs& attrs,
                                              const int dev_mask,
                                              DispatchMode* dispatch_mode,
                                              std::vector<int>* in_attrs,
                                              std::vector<int>* out_attrs)>;
    
      OpStatePtr GetCachedOpState(const Context& ctx);
  bool SetForwardGraph(
      GraphInfo* info,
      const bool recording,
      const std::vector<NDArray*>& inputs);
  bool SetBackwardGraph(
      GraphInfo* info,
      const std::vector<OpReqType>& reqs,
      const std::vector<NDArray*>& inputs,
      bool detect_inplace_addto = false);
  OpStatePtr DynamicForward(
      const Context& default_ctx,
      const std::vector<NDArray*>& inputs,
      const std::vector<NDArray*>& outputs);
  void DynamicBackward(
      const bool retain_graph,
      const OpStatePtr& op_state,
      const std::vector<NDArray*>& inputs,
      const std::vector<OpReqType>& reqs,
      const std::vector<NDArray*>& outputs);
  void StaticAllocMemory(
      const OpStatePtr& state_ptr,
      bool recording,
      bool keep_fwd);
  void StaticInitExec(
      const OpStatePtr& state_ptr,
      bool recording,
      bool keep_fwd);
  void StaticRunOps(
      const Context& default_ctx,
      const nnvm::Graph& g,
      const OpStatePtr& state_ptr,
      const std::vector<NDArray *> &state_arrays,
      size_t start_nid,
      size_t end_nid);
  OpStatePtr StaticForward(
      const Context& default_ctx,
      const std::vector<NDArray*>& inputs,
      const std::vector<NDArray*>& outputs);
  void StaticBackward(
      const bool retain_graph,
      const OpStatePtr& state_ptr,
      const std::vector<NDArray*>& inputs,
      const std::vector<OpReqType>& reqs,
      const std::vector<NDArray*>& outputs);
    
            if (!same_lhs_rhs) {
          rhs_row = Tensor<cpu, 1, DType>(lhs_row.dptr_ + nr_cols, Shape1(nr_cols));
          OpBase::FillDense<DType>(s, rhs_row.shape_.Size(), DType(0), req, rhs_row.dptr_);
        } else {
          rhs_row = lhs_row;
        }
    
    /*! \brief Binary launch, with FComputeEx for prefer dense */
#define MXNET_OPERATOR_REGISTER_BINARY_WITH_SPARSE_CPU_PD(__name$, __kernel$)              \
  MXNET_OPERATOR_REGISTER_BINARY(__name$)                                               \
  .set_attr<FInferStorageType>('FInferStorageType',                                     \
    ElemwiseBinaryOp::PreferDenseStorageType<true, true, true>)                         \
  .set_attr<FCompute>('FCompute<cpu>', ElemwiseBinaryOp::Compute<cpu, __kernel$>)       \
  .set_attr<FComputeEx>('FComputeEx<cpu>', ElemwiseBinaryOp::ComputeEx<cpu, __kernel$>) \
  .set_attr<FResourceRequest>('FResourceRequest',  /* For Sparse CSR */ \
    [](const NodeAttrs& attrs) { \
      return std::vector<ResourceRequest>{ResourceRequest::kTempSpace};})
    
    
    {
    {
    {
    {
    {          num_threads = mxnet_op::get_num_threads<cpu>(nnr);
          dim_t seg_len = (nnr + num_threads - 1) / num_threads;
          if (trans_lhs) {
            mxnet_op::Kernel<DotCsrTransDnsRspByRowBlocks, cpu>::Launch(s, num_threads,
              data_out.dptr<DType>(), prefix_sum, row_idx_out, data_l.dptr<DType>(),
              indptr_l.dptr<IType>(), col_idx_l.dptr<CType>(), data_r.dptr<DType>(),
              seg_len, lhs.shape()[0], nnr, ret->shape()[1]);
          } else {
            LOG(FATAL) << 'DotCsrDnsRspImpl has not implemented dot(csr, dns)=rsp yet.';
          }
        });
      });
    });
  });
}
    
    
// Declare enumeration of input order to make code more intuitive.
// These enums are only visible within this header
namespace roialign {
enum ROIAlignOpInputs {kData, kBox};
enum ROIAlignOpOutputs {kOut};
}  // roialign
    
    bool js_cocos2dx_physics3d_Physics3DWorld_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_physics3d_Physics3DWorld_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_physics3d_Physics3DWorld(JSContext *cx, JS::HandleObject global);
void register_all_cocos2dx_physics3d(JSContext* cx, JS::HandleObject obj);
bool js_cocos2dx_physics3d_Physics3DWorld_setGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_stepSimulate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_needCollisionChecking(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_collisionChecking(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_setGhostPairCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removeAllPhysics3DObjects(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_isDebugDrawEnabled(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removeAllPhysics3DConstraints(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_getGravity(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removePhysics3DConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_addPhysics3DObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_setDebugDrawEnable(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_removePhysics3DObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_getPhysicsObject(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_addPhysics3DConstraint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_debugDraw(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_sweepShape(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_cocos2dx_physics3d_Physics3DWorld_Physics3DWorld(JSContext *cx, uint32_t argc, jsval *vp);
    
    
    
        argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;
    }
    
    extern TestEntry g_testEntries[];
// This is called when a joint in the world is implicitly destroyed
// because an attached body is destroyed. This gives us a chance to
// nullify the mouse joint.
class DestructionListener : public b2DestructionListener
{
public:
	void SayGoodbye(b2Fixture* fixture) { B2_NOT_USED(fixture); }
	void SayGoodbye(b2Joint* joint);
    }
    
    
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
    
    	enum
	{
		e_count = 30
	};
    
    enum NDK_CRASH_PARSER_STATE {
    EXPECTS_CRASH_DUMP,
    EXPECTS_CRASH_DUMP_HEADER,
    EXPECTS_CRASH_DUMP_CONTENT,
    EXPECTS_CRASH_DUMP_END,
};
    
    #endif
    
        void RemoveSpy(void* _this) {
        m_thismap.erase(_this);
    }