
        
        
    {  int ret = x;
  return ret;
}
    
    
    {  bool ret = (x == 0x1);
  return ret;
}
    
    namespace apollo {
namespace planning {
    }
    }
    
    using ::apollo::drivers::canbus::Byte;
    
    void Brakemotorrpt372::Parse(const std::uint8_t* bytes, int32_t length,
                             ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_brake_motor_rpt_3_72()->set_torque_output(
      torque_output(bytes, length));
  chassis->mutable_gem()->mutable_brake_motor_rpt_3_72()->set_torque_input(
      torque_input(bytes, length));
}
    
    #include 'modules/canbus/vehicle/gem/protocol/brake_rpt_6c.h'