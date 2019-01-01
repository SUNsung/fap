
        
        REGISTER_CPU_OPERATOR(GivenTensorFill, GivenTensorFillOp<float, CPUContext>);
REGISTER_CPU_OPERATOR(
    GivenTensorDoubleFill,
    GivenTensorFillOp<double, CPUContext>);
REGISTER_CPU_OPERATOR(GivenTensorBoolFill, GivenTensorFillOp<bool, CPUContext>);
REGISTER_CPU_OPERATOR(GivenTensorIntFill, GivenTensorFillOp<int, CPUContext>);
REGISTER_CPU_OPERATOR(
    GivenTensorInt64Fill,
    GivenTensorFillOp<int64_t, CPUContext>);
REGISTER_CPU_OPERATOR(
    GivenTensorStringFill,
    GivenTensorFillOp<std::string, CPUContext>);
    
    #include <grpc/support/port_platform.h>
    
    #include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    
    {  // TODO: For performance:
  // uint8_t version;
  // uint8_t trace_id_field_id;
  uint8_t trace_id[::opencensus::trace::TraceId::kSize];
  // uint8_t span_id_field_id;
  uint8_t span_id[::opencensus::trace::SpanId::kSize];
  // uint8_t trace_options_field_id;
  uint8_t trace_options[::opencensus::trace::TraceOptions::kSize];
};
    
    #ifndef GRPC_CUSTOM_DEFAULT_THREAD_POOL
    
    #include 'src/core/lib/gprpp/thd.h'
#include 'src/cpp/server/thread_pool_interface.h'
    
    #include <utility>
    
    class MockMessageManager
    : public MessageManager<::apollo::canbus::ChassisDetail> {
 public:
  MockMessageManager() {
    AddRecvProtocolData<MockProtocolData, true>();
    AddSendProtocolData<MockProtocolData, true>();
  }
};
    
    #include 'modules/common/time/time.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
    
    {  int ret = x;
  return ret;
}
    
    /**
 * @file st_point.cpp
 **/
    
    class SpeedLimitTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    speed_limit_.Clear();
    for (int i = 0; i < 100; ++i) {
      std::pair<double, double> sp;
      sp.first = i * 1.0;
      sp.second = (i % 2 == 0) ? 5.0 : 10.0;
      speed_limit_.AppendSpeedLimit(sp.first, sp.second);
    }
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
    
      MatrixXd mat_golden(20, 10);
  // clang-format off
  mat_golden <<
   -1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    1,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, -1,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  1,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0, -1,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  1,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, -1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0, -1,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  1,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0, -1,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  1,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0, -1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0, -1,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  1,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0, -1,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  1,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0, -1,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  1;
  // clang-format on
  EXPECT_EQ(mat, mat_golden);
    
      kernel.AddReferenceLineKernelMatrix(index_list, pos_list, 10.0);