
        
        ChannelArguments::~ChannelArguments() {
  grpc_core::ExecCtx exec_ctx;
  for (auto it = args_.begin(); it != args_.end(); ++it) {
    if (it->type == GRPC_ARG_POINTER) {
      it->value.pointer.vtable->destroy(it->value.pointer.p);
    }
  }
}
    
    SecureAuthContext::~SecureAuthContext() {
  if (take_ownership_) grpc_auth_context_release(ctx_);
}
    
    #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    #include <grpc/support/port_platform.h>
    
    void CensusClientCallData::OnDoneRecvTrailingMetadataCb(void* user_data,
                                                        grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  GPR_ASSERT(calld != nullptr);
  if (error == GRPC_ERROR_NONE) {
    GPR_ASSERT(calld->recv_trailing_metadata_ != nullptr);
    FilterTrailingMetadata(calld->recv_trailing_metadata_,
                           &calld->elapsed_time_);
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_trailing_metadata_,
                   GRPC_ERROR_REF(error));
}
    
    ::opencensus::stats::MeasureInt64 RpcClientSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcClientReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcClientReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcClientRoundtripLatency();
::opencensus::stats::MeasureDouble RpcClientServerLatency();
::opencensus::stats::MeasureInt64 RpcClientCompletedRpcs();
    
    void ProtoServerReflection::SetServiceList(
    const std::vector<grpc::string>* services) {
  services_ = services;
}
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, const grpc::string& value) {
  class StringOption final : public ServerBuilderOption {
   public:
    StringOption(const grpc::string& name, const grpc::string& value)
        : name_(name), value_(value) {}
    }
    }
    
    template <class T, typename = void>
struct GetTypeInfo {
	static const Variant::Type VARIANT_TYPE = Variant::NIL;
	static inline PropertyInfo get_class_info() {
		ERR_PRINT('GetTypeInfo fallback. Bug!');
		return PropertyInfo(); // Not 'Nil', this is an error
	}
};
    
    extern void UNSCALE_BT_BASIS(btTransform &scaledBasis);
#endif

    
    public:
	ConstraintBullet();
    
    
    {	virtual PhysicsServer::JointType get_type() const = 0;
};
#endif

    
    class PinJointBullet : public JointBullet {
	class btPoint2PointConstraint *p2pConstraint;
    }
    
    class BulletPhysicsServer;
    
    #include 'csg_gizmos.h'
#include 'csg_shape.h'
    
    public:
	Error pck_start(const String &p_file, int p_alignment);
	Error add_file(const String &p_file, const String &p_src);
	Error flush(bool p_verbose = false);
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    //////////////////////////////////////////////////////////////////////
    
    #include 'hphp/runtime/base/apc-handle.h'
    
    ///////////////////////////////////////////////////////////////////////////////
    
    template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done) {
  if (LIKELY(map.numSubMaps() == 1) ||
      done.load(std::memory_order_relaxed) ||
      done.exchange(true, std::memory_order_relaxed)) {
    return;
  }
    }