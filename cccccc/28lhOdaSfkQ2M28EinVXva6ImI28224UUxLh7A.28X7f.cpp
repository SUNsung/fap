
        
        const AuthProperty AuthPropertyIterator::operator*() {
  return std::pair<grpc::string_ref, grpc::string_ref>(
      property_->name,
      grpc::string_ref(property_->value, property_->value_length));
}
    
    #include <grpc/grpc_security.h>
#include 'src/core/lib/channel/channel_args.h'
    
    namespace grpc {
    }
    
    // Deserialize incoming server stats. Returns the number of bytes deserialized.
size_t ServerStatsDeserialize(const char* buf, size_t buf_size,
                              uint64_t* server_elapsed_time);
    
    namespace grpc {
    }
    
    ThreadPoolInterface* CreateDefaultThreadPool() { return g_ctp_impl(); }
    
    class DynamicThreadPool final : public ThreadPoolInterface {
 public:
  explicit DynamicThreadPool(int reserve_threads);
  ~DynamicThreadPool();
    }
    
    void Assembler::cmpli(uint16_t bf, bool l, const Reg64& ra, Immed imm) {
  assert(imm.fits(HPHP::sz::word) && 'Immediate is too big');
  EmitDForm(10, rn((bf << 2) | (uint16_t)l), rn(ra), imm.w());
}
    
    
    {  req::ptr<File> open(const String& filename, const String& mode, int options,
                      const req::ptr<StreamContext>& context) override;
};
    
    #include 'hphp/runtime/base/runtime-option.h'
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    #include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    
    {  for (int i = 0; i < conti_radar->contiobs_size(); ++i) {
    if (conti_radar->contiobs(i).obstacle_id() == obj_id) {
      auto obs = conti_radar->mutable_contiobs(i);
      obs->set_longitude_dist_rms(
          LINEAR_RMS[longitude_dist_rms(bytes, length)]);
      obs->set_lateral_dist_rms(LINEAR_RMS[lateral_dist_rms(bytes, length)]);
      obs->set_longitude_vel_rms(LINEAR_RMS[longitude_vel_rms(bytes, length)]);
      obs->set_lateral_vel_rms(LINEAR_RMS[lateral_vel_rms(bytes, length)]);
      obs->set_longitude_accel_rms(
          LINEAR_RMS[longitude_accel_rms(bytes, length)]);
      obs->set_lateral_accel_rms(LINEAR_RMS[lateral_accel_rms(bytes, length)]);
      obs->set_oritation_angle_rms(
          ANGLE_RMS[oritation_angle_rms(bytes, length)]);
      obs->set_probexist(PROBOFEXIST[probexist(bytes, length)]);
      obs->set_meas_state(meas_state(bytes, length));
      break;
    }
  }
}
    
    
    {  switch (x) {
    case 0x0:
      return RCS_THRESHOLD_STANDARD;
    case 0x1:
      return RCS_THRESHOLD_HIGH_SENSITIVITY;
    default:
      return RCS_THRESHOLD_ERROR;
  }
}
    
    void BackupTrajectoryGenerator::GenerateTrajectory1dPairs(
    const State& init_s, const State& init_d) {
  std::vector<std::shared_ptr<Curve1d>> lon_trajectories;
  std::array<double, 5> dds_condidates = {-0.1, -1.0, -2.0, -3.0, -4.0};
  for (const auto dds : dds_condidates) {
    lon_trajectories.emplace_back(
        new ConstantDecelerationTrajectory1d(init_s[0], init_s[1], dds));
  }
    }
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
    #include 'modules/canbus/vehicle/gem/protocol/accel_cmd_67.h'
#include 'modules/canbus/vehicle/gem/protocol/accel_rpt_68.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_cmd_6b.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_1_70.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_2_71.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_motor_rpt_3_72.h'
#include 'modules/canbus/vehicle/gem/protocol/brake_rpt_6c.h'
#include 'modules/canbus/vehicle/gem/protocol/date_time_rpt_83.h'
#include 'modules/canbus/vehicle/gem/protocol/global_cmd_69.h'
#include 'modules/canbus/vehicle/gem/protocol/global_rpt_6a.h'
#include 'modules/canbus/vehicle/gem/protocol/headlight_cmd_76.h'
#include 'modules/canbus/vehicle/gem/protocol/headlight_rpt_77.h'
#include 'modules/canbus/vehicle/gem/protocol/horn_cmd_78.h'
#include 'modules/canbus/vehicle/gem/protocol/horn_rpt_79.h'
#include 'modules/canbus/vehicle/gem/protocol/lat_lon_heading_rpt_82.h'
#include 'modules/canbus/vehicle/gem/protocol/parking_brake_status_rpt_80.h'
#include 'modules/canbus/vehicle/gem/protocol/shift_cmd_65.h'
#include 'modules/canbus/vehicle/gem/protocol/shift_rpt_66.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_cmd_6d.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_motor_rpt_1_73.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_motor_rpt_2_74.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_motor_rpt_3_75.h'
#include 'modules/canbus/vehicle/gem/protocol/steering_rpt_1_6e.h'
#include 'modules/canbus/vehicle/gem/protocol/turn_cmd_63.h'
#include 'modules/canbus/vehicle/gem/protocol/turn_rpt_64.h'
#include 'modules/canbus/vehicle/gem/protocol/vehicle_speed_rpt_6f.h'
#include 'modules/canbus/vehicle/gem/protocol/wheel_speed_rpt_7a.h'
#include 'modules/canbus/vehicle/gem/protocol/wiper_cmd_90.h'
#include 'modules/canbus/vehicle/gem/protocol/wiper_rpt_91.h'
#include 'modules/canbus/vehicle/gem/protocol/yaw_rate_rpt_81.h'