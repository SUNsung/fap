
        
        void Clear() {
  std::lock_guard<std::mutex> lg(g_mutex);
  if (GetState() == STATE_SHUTDOWN || GetState() == STATE_UNINITIALIZED) {
    return;
  }
  TaskManager::CleanUp();
  TimingWheel::CleanUp();
  scheduler::CleanUp();
  service_discovery::TopologyManager::CleanUp();
  transport::Transport::CleanUp();
  StopLogger();
  SetState(STATE_SHUTDOWN);
}
    
      common::SLPoint GetStopSL(const ObjectStop& stop_decision,
                            const ReferenceLine& reference_line) const;
    
      // 7
  chassis_.set_fuel_range_m(0);
  // 8
  if (chassis_detail.gem().has_accel_rpt_68() &&
      chassis_detail.gem().accel_rpt_68().has_output_value()) {
    chassis_.set_throttle_percentage(
        static_cast<float>(chassis_detail.gem().accel_rpt_68().output_value()));
  } else {
    chassis_.set_throttle_percentage(0);
  }
  // 9
  if (chassis_detail.gem().has_brake_rpt_6c() &&
      chassis_detail.gem().brake_rpt_6c().has_output_value()) {
    chassis_.set_brake_percentage(
        static_cast<float>(chassis_detail.gem().brake_rpt_6c().output_value()));
  } else {
    chassis_.set_brake_percentage(0);
  }
    
    
    { protected:
  std::unique_ptr<PullOverScenario> scenario_;
};
    
    class StageParkingTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    config_.set_stage_type(ScenarioConfig::VALET_PARKING_PARKING);
  }
    }
    
    
    {  EXPECT_EQ(expect, real);
}