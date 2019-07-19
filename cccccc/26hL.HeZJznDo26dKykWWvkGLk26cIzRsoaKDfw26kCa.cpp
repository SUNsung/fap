
        
              union RawDistance raw_distance;
      raw_distance.bytes[0] = raw->blocks[i].data[k];
      raw_distance.bytes[1] = raw->blocks[i].data[k + 1];
    
    TEST(CyberNodeTest, create_reader) {
  EXPECT_TRUE(apollo::cyber::OK());
  apollo::cyber::proto::Chatter chat;
  apollo::cyber::PyNode node('listener');
  pr = node.create_reader('channel/chatter', chat.GetTypeName());
  EXPECT_EQ('apollo.cyber.proto.Chatter', chat.GetTypeName());
  EXPECT_NE(pr, nullptr);
  pr->register_func(cbfun);
  delete pr;
  pr = nullptr;
}
    
    
    {
    {}  // namespace planning
}  // namespace apollo

    
      void SendThreadFunc() {
    using common::ErrorCode;
    using common::time::AsInt64;
    using common::time::Clock;
    using common::time::micros;
    AINFO << 'Send thread starting...';
    TestCanParam *param = param_ptr();
    CanClient *client = param->can_client;
    std::vector<CanFrame> frames;
    frames.resize(MAX_CAN_SEND_FRAME_LEN);
    }
    
    /**
 * @brief Cross product between two 2-D vectors from the common start point,
 *        and end at two other points.
 * @param start_point The common start point of two vectors in 2-D.
 * @param end_point_1 The end point of the first vector.
 * @param end_point_2 The end point of the second vector.
 *
 * @return The cross product result.
 */
double CrossProd(const Vec2d &start_point, const Vec2d &end_point_1,
                 const Vec2d &end_point_2);
    
    /**
 * @file
 **/
    
    void TrafficLightUnprotectedLeftTurnScenario::Init() {
  if (init_) {
    return;
  }
    }
    
    
    {
    {
    {
    {}  // namespace traffic_light
}  // namespace scenario
}  // namespace planning
}  // namespace apollo
