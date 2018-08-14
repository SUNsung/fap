#define CreateThenReturnRID(owner, ridData) \
	RID rid = owner.make_rid(ridData);      \
	ridData->set_self(rid);                 \
	ridData->_set_physics_server(this);     \
	return rid;
    
    	virtual void set_active(bool p_active) {
		active = p_active;
	}
    
    void RigidBodyBullet::apply_torque(const Vector3 &p_torque) {
	btVector3 btTorq;
	G_TO_B(p_torque, btTorq);
	if (Vector3() != p_torque)
		btBody->activate();
	btBody->applyTorque(btTorq);
}
    
    void PhysicsMaterial::set_bounce(real_t p_val) {
	bounce = p_val;
	emit_changed();
}
    
    	_FORCE_INLINE_ real_t computed_friction() const {
		return rough ? -friction : friction;
	}
    
    		real_t depth = c.normal.dot(global_A - global_B);
    
    	_FORCE_INLINE_ void _update_transform_dependant();
    
    		real_t jtMax = friction * c.acc_normal_impulse;
		real_t jt = -vt * c.mass_tangent;
		real_t jtOld = c.acc_tangent_impulse;
		c.acc_tangent_impulse = CLAMP(jtOld + jt, -jtMax, jtMax);
    
    
    {	body->add_central_force(p_force);
	body->wakeup();
};
    
    
    {	Physics2DServerSW();
	~Physics2DServerSW();
};
    
    	FUNC2(body_remove_shape, RID, int);
	FUNC1(body_clear_shapes, RID);
    
    		int hs = get_constant('hseparation', 'Tree');
    
    	void _edit_set(const String &p_name, const Variant &p_value, bool p_refresh_all, const String &p_changed_field);
    
    template<typename T> inline
dnnError_t dnnReLUCreateBackward(
    dnnPrimitive_t* pRelu,
    dnnPrimitiveAttributes_t attributes,
    const dnnLayout_t diffLayout,
    const dnnLayout_t dataLayout,
    T negativeSlope);
    
        size_t locate(size_t i, size_t j) const
    {
        assert(i < nrows && j < ncols);
        return j * nrows + i;
    } // matrix in column-wise storage
    
    template <class ElemType>
void PostComputingActions<ElemType>::BatchNormalizationStatistics(IDataReader * dataReader, const vector<wstring>& evalNodeNames, 
    const wstring newModelPath, const size_t mbSize, const int iters)
{
    // since the mean and variance of bn will be modified in statistics,
    // training mode will make it work. And there is no back prop, other parameters
    // are fixed during computing.
    ScopedNetworkOperationMode modeGuard(m_net, NetworkOperationMode::training);
    }
    
    public:
    // DataWriter Constructor
    // config - [in] configuration parameters for the datareader
    template <class ConfigRecordType>
    DataWriter(const ConfigRecordType& config);
    // constructor from Scripting
    DataWriter(const ScriptableObjects::IConfigRecordPtr configp)
        : DataWriter(*configp)
    {
    }
    virtual ~DataWriter();
    
        // emit the trace message for global progress
    // 'currentStep' will be offset by m_currentStepOffset.
    // This only prints of enough time (10s) has elapsed since last print, and the return value is 'true' if it did print.
    static bool TraceProgressPercentage(size_t epochNumber, double mbProg /*0..100*/, bool isTimerPaced)
    {
        auto& us = GetStaticInstance();
        if (!us.m_enabled)
        {
            return false;
        }
    }
    
        bool haslattice(std::wstring key) const
    {
#ifdef NONUMLATTICEMMI
        return denlattices.haslattice(key);
#else
        return numlattices.haslattice(key) && denlattices.haslattice(key);
#endif
    }
    
    namespace guetzli {
    }
    
    #include 'guetzli/jpeg_data_decoder.h'
    
    // Mimic libjpeg's heuristics to guess jpeg color space.
// Requires that the jpg has 3 components.
bool HasYCbCrColorSpace(const JPEGData& jpg);
    
    #include 'guetzli/jpeg_data.h'