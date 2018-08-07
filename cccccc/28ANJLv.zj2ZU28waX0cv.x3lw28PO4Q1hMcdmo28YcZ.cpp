
        
        #endif  // GOOGLE_CUDA

    
      // Grad[X] = scale * rsqrt[Var[X] + epsilon] * 1/N * I6.
  auto grad_activation = add_binary(activation_shape, HloOpcode::kMultiply,
                                    scale_times_rsqrt_var_add_epsilon, i6);
  auto tuple =
      HloInstruction::CreateTuple({grad_activation, grad_scale, grad_beta});
  if (batch_norm->has_sharding()) {
    const HloSharding& sharding = batch_norm->sharding();
    int64 instruction_count_after = computation_->instruction_count();
    CHECK_EQ(instruction_count_after,
             instruction_count_before + added_instructions.size());
    HloSharding activation_sharding =
        sharding.GetAsShapeTree(batch_norm->shape()).element({0});
    auto unique_device = batch_norm->sharding_unique_device();
    HloSharding default_sharding =
        unique_device.has_value()
            ? HloSharding::AssignDevice(unique_device.value())
            : HloSharding::Replicate();
    for (HloInstruction* inst : added_instructions) {
      if (ShapeUtil::Equal(inst->shape(), activation_shape)) {
        inst->set_sharding(activation_sharding);
      } else {
        inst->set_sharding(default_sharding);
      }
    }
    tuple->set_sharding(sharding);
  }
    
      // Publish metadata about the debugged Session::Run() call.
  //
  // See the doc string of DebuggerStateInterface::PublishDebugMetadata() for
  // details.
  Status PublishDebugMetadata(const int64 global_step,
                              const int64 session_run_count,
                              const int64 executor_step_count,
                              const std::vector<string>& input_names,
                              const std::vector<string>& output_names,
                              const std::vector<string>& target_names) override;
    
      partial_run_mgr_.ExecutorDone(step_id, param.executor_status);
  partial_run_mgr_.PartialRunDone(step_id,
                                  [this](Status status) { set_status(status); },
                                  param.partial_run_status);
    
    // A pass which performs constant folding in order to avoid unnecessary
// computation on constants.
class HloConstantFolding : public HloPassInterface {
 public:
  tensorflow::StringPiece name() const override { return 'constant_folding'; }
    }
    
    
    {
    {    std::map<string, const NodeDef*> node_lookup;
    MapNamesToNodes(result, &node_lookup);
    EXPECT_EQ('', node_lookup.at('mul_node1')->device());
    EXPECT_EQ('', node_lookup.at('add_node2')->device());
  }
};
    
    // TODO: Enable GPU support for angle op after resolving
// build failures on GPU (See #10643 for context).
#if 0 && GOOGLE_CUDA
REGISTER_COMPLEX(GPU, float, complex64);
REGISTER_COMPLEX(GPU, double, complex128);
#endif
    
    extern JSClass  *jsb_cocos2d_NavMeshObstacle_class;
extern JSObject *jsb_cocos2d_NavMeshObstacle_prototype;
    
    #endif // __cocos2dx_physics3d_h__
#endif //#if CC_USE_3D_PHYSICS && CC_ENABLE_BULLET_INTEGRATION

    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect'', nullptr);
        return 0;
    }
#endif
    
    	void Step(Settings* settings)
	{
		// Drive the kinematic body.
		if (m_platform->GetType() == b2_kinematicBody)
		{
			b2Vec2 p = m_platform->GetTransform().p;
			b2Vec2 v = m_platform->GetLinearVelocity();
    }
    }
    
    				b2Vec2 anchor(-15.0f + 2.0f * i, 15.0f);
				jd.Initialize(prevBody, body, anchor);
				m_world->CreateJoint(&jd);
    
    Benchmark* Benchmark::Repetitions(int n) {
  CHECK(n > 0);
  repetitions_ = n;
  return this;
}
    
        // print the header
    for (auto B = elements.begin(); B != elements.end();) {
      Out << *B++;
      if (B != elements.end()) Out << ',';
    }
    for (auto B = user_counter_names_.begin(); B != user_counter_names_.end();) {
      Out << ',\'' << *B++ << '\'';
    }
    Out << '\n';