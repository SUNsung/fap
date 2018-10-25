
        
        
    {
    {		virtual btCollisionAlgorithm *CreateCollisionAlgorithm(btCollisionAlgorithmConstructionInfo &ci, const btCollisionObjectWrapper *body0Wrap, const btCollisionObjectWrapper *body1Wrap) {
			void *mem = ci.m_dispatcher1->allocateCollisionAlgorithm(sizeof(GodotRayWorldAlgorithm));
			return new (mem) GodotRayWorldAlgorithm(m_world, ci.m_manifold, ci, body0Wrap, body1Wrap, true);
		}
	};
};
    
    
    {	_FORCE_INLINE_ void _set_physics_server(BulletPhysicsServer *p_physicsServer) { physicsServer = p_physicsServer; }
	_FORCE_INLINE_ BulletPhysicsServer *get_physics_server() const { return physicsServer; }
};
#endif

    
    class SliderJointBullet : public JointBullet {
	class btSliderConstraint *sliderConstraint;
    }
    
    
    {	id = 0;
}

    
    	ClassDB::bind_method(D_METHOD('set_refuse_new_connections', 'enable'), &NetworkedMultiplayerPeer::set_refuse_new_connections);
	ClassDB::bind_method(D_METHOD('is_refusing_new_connections'), &NetworkedMultiplayerPeer::is_refusing_new_connections);
    
    	struct File {
    }
    
            mutable size_t m_noiseInjectionSeed;
    
        template <typename V1ElemType>
    TensorView<V1ElemType>* NDArrayView::GetWritableTensorView()
    {
        if (IsReadOnly())
            InvalidArgument('NDArrayView::GetWritableTensorView: Cannot get a writable TensorView from a read-only NDArrayView.');
    }
    
    
    {    std::string GetCallStack(size_t skipLevels = 0, bool makeFunctionNamesStandOut = false);
};
    
        /* Sets the Eye value of the Camera. 
     * 
     * @param eye The Eye value of the Camera.
     * @js NA
     */
    void setEye(const Vec3 &eye);
    void setEye(float x, float y, float z);
    /* Returns the Eye value of the Camera. 
     *
     * @return The Eye value of the Camera.
     * @js NA
     */
    const Vec3& getEye() const { return _eye; }
    /* Sets the Center value of the Camera. 
     *
     * @param center The Center value of the Camera.
     * @js NA
     */
    void setCenter(const Vec3 &center);
    /* Returns the Center value of the Camera. 
     *
     * @return The Center value of the Camera.
     * @js NA
     */
    const Vec3& getCenter() const { return _center; }
    /* Sets the Up value of the Camera. 
     *
     * @param up The Up value of the Camera.
     * @js NA
     */
    void setUp(const Vec3 &up);
    /* Returns the Up value of the Camera. 
     *
     * @return The Up value of the Camera.
     * @js NA
     */
    const Vec3& getUp() const { return _up; }
    
        /** Returns a new copy of the array reversed. User is responsible for releasing this copy.
     *
     * @js NA
     * @return A new copy of the array reversed.
     */
    PointArray* reverse() const;
    
    // implementation of TiledGrid3DAction
    
    Ref* __CCCallFuncO::getObject() const
{
    return _object;
}
    
void __CCCallFuncO::setObject(Ref* obj)
{
    if (obj != _object)
    {
        CC_SAFE_RELEASE(_object);
        _object = obj;
        CC_SAFE_RETAIN(_object);
    }
}
    
    protected:
    bool    _flipX;
    
        float d1 = action1->getDuration();
    float d2 = action2->getDuration();
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        //
    // Overrides
    //
    virtual ProgressFromTo* clone() const override;
    virtual ProgressFromTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressFromTo() {}
    virtual ~ProgressFromTo() {}
    
    /**
@brief FadeOutBLTiles action.
@details Fades out the target node with many tiles from Top-Right to Bottom-Left.
 */
class CC_DLL FadeOutBLTiles : public FadeOutTRTiles
{
public:
    /** 
    * @brief Create the action with the grid size and the duration.
    * @param duration Specify the duration of the FadeOutBLTiles action. It's a value in seconds.
    * @param gridSize Specify the size of the grid.
    * @return If the creation success, return a pointer of FadeOutBLTiles action; otherwise, return nil.
    */
    static FadeOutBLTiles* create(float duration, const Size& gridSize);
    }
    
        /** array of AnimationFrames. */
    Vector<AnimationFrame*> _frames;
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    
    {// end of base_node group
/// @}
    
    
BOOST_FORCEINLINE void thread_fence(memory_order order) BOOST_NOEXCEPT
{
    BOOST_ATOMIC_DETAIL_COMPILER_BARRIER();
    if (order != memory_order_relaxed)
        msvc_arm_operations_base::hardware_full_fence();
    BOOST_ATOMIC_DETAIL_COMPILER_BARRIER();
}
    
    #if BOOST_ATOMIC_THREAD_FENCE > 0
BOOST_FORCEINLINE void atomic_thread_fence(memory_order order) BOOST_NOEXCEPT
{
    detail::thread_fence(order);
}
#else
BOOST_FORCEINLINE void atomic_thread_fence(memory_order) BOOST_NOEXCEPT
{
    detail::lockpool::thread_fence();
}
#endif