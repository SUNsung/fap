
        
        #include <cstdio>    // for FILE
#include 'strngs.h'  // for STRING
    
    
    {}  // namespace tesseract
    
      // Returns the x,y means as an FCOORD.
  FCOORD mean_point() const;
    
      // Connects this and other, discarding any existing connections.
  void Connect(DoublePtr* other) {
    other->Disconnect();
    Disconnect();
    other->other_end_ = this;
    other_end_ = other;
  }
  // Disconnects this and other, making OtherEnd() return nullptr for both.
  void Disconnect() {
    if (other_end_ != nullptr) {
      other_end_->other_end_ = nullptr;
      other_end_ = nullptr;
    }
  }
  // Returns the pointer to the other end of the double pointer.
  DoublePtr* OtherEnd() const {
    return other_end_;
  }
    
      // Get the value of the top (smallest, defined by operator< ) element.
  const Pair& PeekTop() const {
    return heap_[0];
  }
  // Get the value of the worst (largest, defined by operator< ) element.
  const Pair& PeekWorst() const { return heap_[IndexOfWorst()]; }
    
    // A useful base class to facilitate the common operation of sorting a vector
// of owned pointer data using a separate key. This class owns its data pointer,
// deleting it when it has finished with it, and providing copy constructor and
// operator= that have move semantics so that the data does not get copied and
// only a single instance of KDPtrPair holds a specific data pointer.
template <typename Key, typename Data>
class KDPtrPair {
 public:
  KDPtrPair() : data_(nullptr) {}
  KDPtrPair(Key k, Data* d) : data_(d), key_(k) {}
  // Copy constructor steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  KDPtrPair(KDPtrPair& src) : data_(src.data_), key_(src.key_) {
    src.data_ = nullptr;
  }
  // Destructor deletes data, assuming it is the sole owner.
  ~KDPtrPair() {
    delete this->data_;
    this->data_ = nullptr;
  }
  // Operator= steals the pointer from src and nulls it in src, thereby
  // moving the (single) ownership of the data.
  void operator=(KDPtrPair& src) {
    delete this->data_;
    this->data_ = src.data_;
    src.data_ = nullptr;
    this->key_ = src.key_;
  }
    }
    
    
    { protected:
  // Outputs the integer formed by reversing the bits of the input integer. Only
  // the lowest num_bits_ bits of the input integer are reversed.
  int GetBinaryReversedInteger(int in_val) const {
    int bit_pos = num_bits_;
    int out_val = 0;
    while(bit_pos--) {
      // Set the value of the last bit.
      out_val |= (in_val & 0x1);
      if (bit_pos > 0) {
        // Left-shift output value to prepare for storing the next bit.
        out_val <<= 1;
      }
      // Right-shift input value to prepare for retrieving the next bit.
      in_val >>= 1;
    }
    return out_val;
  }
  int N_;
  // Next number to be considered for reversal and output.
  int next_num_;
  // number of bits required to represent the numbers of the sequence
  int num_bits_;
};
    
    // Feature distance calculator designed to provide a fast distance calculation
// based on set difference between a given feature set and many other feature
// sets in turn.
// Representation of a feature set as an array of bools that are sparsely
// true, and companion arrays that allow fast feature set distance
// calculations with allowance of offsets in position.
// Init is expensive, so for greatest efficiency, to re-initialize for a new
// feature set, use Set(..., false) on the SAME feature set as was used to
// setup with Set(..., true), to return to its initialized state before
// reuse with Set(..., true) on a new feature set.
class IntFeatureDist {
 public:
  IntFeatureDist();
  ~IntFeatureDist();
    }
    
     private:
  grpc::string Ip4ToPackedString(const char* ip_str) {
    struct in_addr ip4;
    GPR_ASSERT(inet_pton(AF_INET, ip_str, &ip4) == 1);
    return grpc::string(reinterpret_cast<const char*>(&ip4), sizeof(ip4));
  }
    
    #include <grpc/support/log.h>
    
    void ClearConfigErrorCalled() { g_config_error_function_called = false; }
    
    #ifndef NDEBUG
#define GRPC_COMBINER_DEBUG_ARGS \
  , const char *file, int line, const char *reason
#define GRPC_COMBINER_REF(combiner, reason) \
  grpc_combiner_ref((combiner), __FILE__, __LINE__, (reason))
#define GRPC_COMBINER_UNREF(combiner, reason) \
  grpc_combiner_unref((combiner), __FILE__, __LINE__, (reason))
#else
#define GRPC_COMBINER_DEBUG_ARGS
#define GRPC_COMBINER_REF(combiner, reason) grpc_combiner_ref((combiner))
#define GRPC_COMBINER_UNREF(combiner, reason) grpc_combiner_unref((combiner))
#endif
    
    static inline std::shared_ptr<::grpc::Channel> CreateChannel(
    const grpc::string& target,
    const std::shared_ptr<ChannelCredentials>& creds) {
  return ::grpc_impl::CreateChannelImpl(target, creds);
}
    
    #endif  // GRPCPP_SUPPORT_CHANNEL_ARGUMENTS_H

    
    #include 'src/core/lib/iomgr/iomgr.h'
#include 'src/proto/grpc/testing/duplicate/echo_duplicate.grpc.pb.h'
#include 'src/proto/grpc/testing/echo.grpc.pb.h'
#include 'test/core/util/port.h'
#include 'test/core/util/test_config.h'
#include 'test/cpp/end2end/test_service_impl.h'
#include 'test/cpp/util/byte_buffer_proto_helper.h'
    
    
    {  EXPECT_EQ(send_response_.message(), recv_response_.message());
  EXPECT_TRUE(recv_status_.ok());
}
    
      void RecvThreadFunc() {
    using common::ErrorCode;
    using common::time::AsInt64;
    using common::time::Clock;
    using common::time::micros;
    AINFO << 'Receive thread starting...';
    TestCanParam *param = param_ptr();
    CanClient *client = param->can_client;
    int64_t start = 0;
    std::vector<CanFrame> buf;
    }
    
    class Crosswalk : public TrafficRule {
 public:
  explicit Crosswalk(const TrafficRuleConfig& config);
  virtual ~Crosswalk() = default;
    }
    
    #include 'modules/common/time/time.h'
#include 'modules/map/hdmap/hdmap_util.h'
#include 'modules/planning/common/planning_context.h'
#include 'modules/planning/common/planning_gflags.h'
#include 'modules/planning/proto/planning_internal.pb.h'
#include 'modules/planning/tasks/task_factory.h'
    
        // fill back results
    FillResults(object_center, dimension_hwl, rotation_y, camera2world_pose,
                theta_ray, obj);
    
    #include 'modules/planning/scenarios/scenario.h'
    
    #define protected public
#define private public
#include 'modules/planning/scenarios/park/valet_parking/valet_parking_scenario.h'
    
    #include <string>
#include <vector>
    
      ObstacleDetectorInitOptions init_options;
  init_options.root_dir = FLAGS_detector_root;
  init_options.conf_file = FLAGS_detector_conf;