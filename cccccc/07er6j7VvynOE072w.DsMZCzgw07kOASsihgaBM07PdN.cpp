
        
        #include <QComboBox>
#include <QVariant>
    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    'movq $0xfffffffffffff,%%r15\n'
    }
    
        secp256k1_pubkey_load(ctx, &pt, point);
    secp256k1_scalar_set_b32(&s, scalar, &overflow);
    if (overflow || secp256k1_scalar_is_zero(&s)) {
        ret = 0;
    } else {
        unsigned char x[32];
        unsigned char y[1];
        secp256k1_sha256_t sha;
    }
    
    namespace caffe {
    }
    
    #define REGISTER_LAYER_CLASS(type)                                             \
  template <typename Dtype>                                                    \
  shared_ptr<Layer<Dtype> > Creator_##type##Layer(const LayerParameter& param) \
  {                                                                            \
    return shared_ptr<Layer<Dtype> >(new type##Layer<Dtype>(param));           \
  }                                                                            \
  REGISTER_LAYER_CREATOR(type, Creator_##type##Layer)
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    
    { private:
  struct pair_sort_first {
    bool operator()(const std::pair<int, int> &left,
                    const std::pair<int, int> &right) {
      return left.first < right.first;
    }
  };
  void check_batch_reindex(int initial_num, int final_num,
                           const Dtype* ridx_data);
};
    
    #include 'caffe/layers/lrn_layer.hpp'
#include 'caffe/layers/power_layer.hpp'
    
    #include 'caffe/layers/softmax_layer.hpp'
    
    #include 'modules/common/time/time.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
#include 'modules/drivers/radar/conti_radar/protocol/const_vars.h'
    
    
    {  int ret = x;
  return ret;
}
    
    namespace apollo {
namespace drivers {
namespace conti_radar {
    }
    }
    }
    
      Byte t1(bytes + 4);
  int32_t t = t1.get_byte(7, 1);
    
    
    {  int ret = x * 2;
  return ret;
}
    
    namespace apollo {
namespace hdmap {
DEFINE_string(test_map_file,
              'modules/map/data/sunnyvale_loop/base_map_test.bin',
              'The test map file');
DEFINE_string(
    test_routing_file,
    'modules/map/pnc_map/testdata/sample_sunnyvale_loop_routing.pb.txt',
    'The test map file');
    }
    }
    
    DiscretizedTrajectory BackupTrajectoryGenerator::GenerateTrajectory(
    const std::vector<PathPoint>& discretized_ref_points) {
  while (trajectory_pair_pqueue_.size() > 1) {
    auto top_pair = trajectory_pair_pqueue_.top();
    trajectory_pair_pqueue_.pop();
    DiscretizedTrajectory trajectory = TrajectoryCombiner::Combine(
        discretized_ref_points, *top_pair.first, *top_pair.second,
        init_relative_time_);
    if (!ptr_collision_checker_->InCollision(trajectory)) {
      return trajectory;
    }
  }
  auto top_pair = trajectory_pair_pqueue_.top();
  return TrajectoryCombiner::Combine(
      discretized_ref_points, *top_pair.first, *top_pair.second,
      init_relative_time_);
}
    
    TEST(TestPiecewiseLinearKernel, add_third_order_derivative_matrix) {
  PiecewiseLinearKernel kernel(10, 0.1);
  const double init_derivative = 5.0;
  const double init_second_derivative = 2.0;
    }
    
    Spline1dSeg::Spline1dSeg(const std::vector<double>& params) {
  SetSplineFunc(PolynomialXd(params));
}
    
      const LaneGraph &lane_graph =
      ObstacleClusters::GetLaneGraph(start_s, length, lane);
  EXPECT_EQ(1, lane_graph.lane_sequence_size());
  EXPECT_EQ(3, lane_graph.lane_sequence(0).lane_segment_size());
  EXPECT_EQ('l9', lane_graph.lane_sequence(0).lane_segment(0).lane_id());
  EXPECT_EQ('l18', lane_graph.lane_sequence(0).lane_segment(1).lane_id());
  EXPECT_EQ('l21', lane_graph.lane_sequence(0).lane_segment(2).lane_id());
    
    const TopoNode* NodeWithRange::GetTopoNode() const { return topo_node_; }
    
    TEST_F(GemMessageManagerTest, GetSendProtocols) {
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Accelcmd67::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Brakecmd6b::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Globalcmd69::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Headlightcmd76::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Horncmd78::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Shiftcmd65::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Steeringcmd6d::ID) !=
              nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Turncmd63::ID) != nullptr);
  EXPECT_TRUE(manager_.GetMutableProtocolDataById(Wipercmd90::ID) != nullptr);
}