
        
          void wait(int n = 1) {
    std::unique_lock<std::mutex> lock(m_);
    while (n_ < n) {
      cv_.wait(lock);
    }
    n_ -= n;
  }
    
    <details>
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    
    {  ::apollo::canbus::ChassisDetail chassis_detail;
  chassis_detail.set_car_type(::apollo::canbus::ChassisDetail::QIRUI_EQ_15);
  EXPECT_EQ(manager.GetSensorData(&chassis_detail), ErrorCode::OK);
  EXPECT_EQ(manager.GetSensorData(nullptr), ErrorCode::CANBUS_ERROR);
}
    
    int ClusterQualityInfo702::longitude_vel_rms(const std::uint8_t* bytes,
                                             int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(1, 5);
    }
    
    #include 'modules/drivers/radar/conti_radar/protocol/object_list_status_60a.h'
    
    #include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
        auto it_lower = std::lower_bound(
        speed_limit_.speed_limit_points().begin(),
        speed_limit_.speed_limit_points().end(), s,
        [](const std::pair<double, double>& point, const double curr_s) {
          return point.first < curr_s;
        });