
        
        StringRef swift::platformString(PlatformKind platform) {
  switch (platform) {
  case PlatformKind::none:
    return '*';
#define AVAILABILITY_PLATFORM(X, PrettyName)                                   \
  case PlatformKind::X:                                                        \
    return #X;
#include 'swift/AST/PlatformKinds.def'
  }
  llvm_unreachable('bad PlatformKind');
}
    
    void CacheImpl::destroy() {
  cache_destroy(static_cast<cache_t*>(Impl));
}

    
        {
      Out << Indent;
      if (childKind == ChildKind::Root) {
        Out << '+- ';
      } else if (childKind == ChildKind::Left) {
        Out << '/- ';
      } else if (childKind == ChildKind::Right) {
        Out << '\\- ';
      } else if (childKind == ChildKind::Further) {
        Out << '\\-> ';
      }
      PrintNodeData(Out, node);
      Out << '\n';
    }
    
        // If this is a skippable suffix, skip it and keep looking.
    if (nameWordRevIter == nameWordRevIterBegin) {
      if (auto withoutSuffix = skipTypeSuffix(typeName.Name)) {
        typeName.Name = *withoutSuffix;
        typeWords = camel_case::getWords(typeName.Name);
        typeWordRevIter = typeWords.rbegin();
        typeWordRevIterEnd = typeWords.rend();
        continue;
      }
    }
    
    /// The list of known CF types.  We use 'constexpr' to verify that this is
/// emitted as a constant.  Note that this is expected to be sorted in
/// quasi-lexicographic order.
static constexpr const llvm::StringLiteral KnownCFTypes[] = {
#define CF_TYPE(NAME) #NAME,
#define NON_CF_TYPE(NAME)
#include 'SortedCFDatabase.def'
};
const size_t NumKnownCFTypes = sizeof(KnownCFTypes) / sizeof(*KnownCFTypes);
    
    #include <grpc/impl/codegen/grpc_types.h>
#include <grpc/support/log.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/resource_quota.h>
#include 'src/core/lib/channel/channel_args.h'
#include 'src/core/lib/iomgr/exec_ctx.h'
#include 'src/core/lib/iomgr/socket_mutator.h'
    
      CensusClientCallData()
      : recv_trailing_metadata_(nullptr),
        initial_on_done_recv_trailing_metadata_(nullptr),
        initial_on_done_recv_message_(nullptr),
        elapsed_time_(0),
        recv_message_(nullptr),
        recv_message_count_(0),
        sent_message_count_(0) {
    memset(&stats_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&tracing_bin_, 0, sizeof(grpc_linked_mdelem));
    memset(&path_, 0, sizeof(grpc_slice));
    memset(&on_done_recv_trailing_metadata_, 0, sizeof(grpc_closure));
    memset(&on_done_recv_message_, 0, sizeof(grpc_closure));
  }
    
    namespace grpc {
    }
    
    
    {}  // namespace
    
    /*!
 * \file graph_attr_types.h
 * \brief Data structures that can appear in graph attributes.
 */
#ifndef MXNET_GRAPH_ATTR_TYPES_H_
#define MXNET_GRAPH_ATTR_TYPES_H_
    
    /*!
 * \brief Shape inference function to get the correct shape given source shapes.
 * \param lhs The shape of left operand.
 * \param rhs The shape of right operand.
 * \param env The Environment arguments.
 * \return The inferred result shape.
 */
typedef TShape (*BinaryShapeFunction)(const TShape& lhs,
                                      const TShape& rhs,
                                      const EnvArguments& env);
/*!
 * \brief Gradient function that takes only output gradient and computes gradient wrt to input.
 *  We support total gradient as a whole to make it easy to combine a few ops.
 * \param out_grad the gradient wrt to output of the function.
 * \param env The Environment arguments.
 * \param lhs_grad The container to store result of lhs gradient.
 * \param rhs_grad The container to store result of lhs gradient.
 * \param req_lhs_grad The requirement to store the lhs_grad
 * \param req_rhs_grad The requirement to store the rhs_grad
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryGradFunctionT0)(const OutputGrad& out_grad,
                                     const EnvArguments& env,
                                     TBlob* lhs_grad,
                                     TBlob* rhs_grad,
                                     OpReqType req_lhs_grad,
                                     OpReqType req_rhs_grad,
                                     RunContext ctx);
/*!
 * \brief Gradient function that takes inputs of function anod computes gradient wrt to input.
 * \param out_grad the gradient wrt to output of the function.
 * \param lhs The left operand to the function.
 * \param rhs The right operand to the function.
 * \param env The Environment arguments.
 * \param lhs_grad The container to store result of lhs gradient.
 * \param rhs_grad The container to store result of lhs gradient.
 * \param req_lhs_grad The requirement to store the lhs_grad
 * \param req_rhs_grad The requirement to store the rhs_grad
 * \param ctx Runtime context to execute the function.
 */
typedef void (*BinaryGradFunctionT1)(const OutputGrad& out_grad,
                                     const Input0& lhs,
                                     const Input1& rhs,
                                     const EnvArguments& env,
                                     TBlob* lhs_grad,
                                     TBlob* rhs_grad,
                                     OpReqType req_lhs_grad,
                                     OpReqType req_rhs_grad,
                                     RunContext ctx);
    
    TShape Vector2TShape(const std::vector<int> &vec_int) {
  std::vector<mshadow::index_t> vec;
  for (uint32_t i = 0; i < vec_int.size(); ++i)
    vec.push_back(vec_int[i]);
  // 0-dim represents scalar in caffe
  if (vec_int.size() == 0)
    vec.push_back(1);
  return {vec.begin(), vec.end()};
}
    
    
    {  /*! \brief milliseconds spent in Next() */
  std::atomic<uint64_t> next_time_;
};  // class CaffeDataIterWrapper
    
    MXNET_REGISTER_OP_PROPERTY(CaffeLoss, CaffeLossProp)
.describe('Caffe loss layer')
.add_arguments(CaffeLossParam::__FIELDS__());
    
    /*!
 * Copyright (c) 2016 by Contributors
 * \file caffe_op.cc
 * \brief caffe operator
 * \author Haoran Wang
*/
#include './caffe_op-inl.h'
namespace mxnet {
namespace op {
    }
    }
    
    /*!
 * \brief Thread pool.
 */
class ThreadPool {
 public:
  /*! \brief Signal event upon destruction, even for exceptions (RAII) */
  struct SetReadyOnDestroy {
    explicit inline SetReadyOnDestroy(const std::shared_ptr<dmlc::ManualEvent>& event)
      : event_(event) {
    }
    inline ~SetReadyOnDestroy() {
      if (event_) {
        event_->signal();
      }
    }
    std::shared_ptr<dmlc::ManualEvent>  event_;
  };
    }
    
      ~ThreadedEnginePooled() noexcept(false) {
    StopNoWait();
  }
    
    Graph DetectInplaceAddTo(Graph g) {
  nnvm::StorageVector storage_id =
      g.MoveCopyAttr<nnvm::StorageVector>('storage_id');
  std::vector<int> storage_inplace_index =
      g.MoveCopyAttr<std::vector<int> >('storage_inplace_index');
  static const Op* ewise_plus_op = Op::Get('_grad_add');
  auto& idx = g.indexed_graph();
  // reference cont.
  std::vector<int> ref_count(idx.num_node_entries(), 0);
  std::vector<int> addto_entry(idx.num_node_entries(), 0);
  std::vector<int> skip_plus_node(idx.num_nodes(), 0);
    }
    
    class TBlobContainer : public TBlob {
 public:
  TBlobContainer(void)
    : TBlob(), tensor_container_(nullptr) {}
  ~TBlobContainer() {
    if (tensor_container_) {
      release();
    }
  }
  void resize(const TShape &shape, int type_flag) {
    if (tensor_container_) {
      CHECK_EQ(this->type_flag_, type_flag);
      this->shape_ = shape;
      resize();
    } else {
      this->type_flag_ = type_flag;
      this->shape_ = shape;
      create();
    }
  }
    }
    
    // This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];
    
    namespace {
// For non-dense Range, intermediate values are powers of kRangeMultiplier.
static const int kRangeMultiplier = 8;
// The size of a benchmark family determines is the number of inputs to repeat
// the benchmark on. If this is 'large' then warn the user during configuration.
static const size_t kMaxFamilySize = 100;
}  // end namespace
    
    
    {    printed_header_ = true;
  } else {
    // check that all the current counters are saved in the name set
    for (const auto& run : reports) {
      for (const auto& cnt : run.counters) {
        CHECK(user_counter_names_.find(cnt.first) != user_counter_names_.end())
              << 'All counters must be present in each run. '
              << 'Counter named \'' << cnt.first
              << '\' was not in a run after being added to the header';
      }
    }
  }
    
    #define RELEASE_SHARED(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(release_shared_capability(__VA_ARGS__))
    
    #include 'benchmark/benchmark.h'
#include 'timers.h'
    
      /**
   * @brief Destructor
   */
  virtual ~CanClient() = default;
    
      CanAgent agent_a(param_ptr_a.get());
  CanAgent agent_b(param_ptr_b.get());
  agent_a.AddOtherAgent(&agent_b);
  agent_b.AddOtherAgent(&agent_a);
  if (!agent_a.Start()) {
    AERROR << 'Agent a start failed.';
    return -1;
  }
  if (FLAGS_only_one_send) {
    agent_b.is_receiving(true);
    agent_b.is_sending_finish(true);
  } else {
    if (!agent_b.Start()) {
      AERROR << 'Agent b start failed.';
      return -1;
    }
  }
    
    TEST_F(FakeCanClientTest, SendMessage) {
  std::vector<CanFrame> frames;
  frames.resize(FRAME_LEN);
  for (int32_t i = 0; i < FRAME_LEN; ++i) {
    frames[i].id = 1 & 0x3FF;
    frames[i].len = 8;
    frames[i].data[7] = 1 % 256;
    for (int32_t j = 0; j < 7; ++j) {
      frames[i].data[j] = j;
    }
  }
    }
    
      if (ret != ErrorCode::OK) {
    AERROR << 'Open device error code: ' << ret
           << ', channel id: ' << _card_port;
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  AERROR << 'Open device succ code: ' << ret << ', channel id: ' << _card_port;
    
    // Synchronous transmission of CAN messages
ErrorCode SocketCanClientRaw::Send(const std::vector<CanFrame> &frames,
                                   int32_t *const frame_num) {
  CHECK_NOTNULL(frame_num);
  CHECK_EQ(frames.size(), static_cast<size_t>(*frame_num));
    }
    
    TEST(SocketCanClientRawTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::SOCKET_CAN_RAW);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);
    
    class MockMessageManager
    : public MessageManager<::apollo::canbus::ChassisDetail> {
 public:
  MockMessageManager() {
    AddRecvProtocolData<MockProtocolData, true>();
    AddSendProtocolData<MockProtocolData, true>();
  }
};
    
      /**
   * @brief Reset the lower 4 bits as the lower 4 bits of a specified one-byte
   *        unsigned integer.
   * @param value The one-byte unsigned integer whose lower 4 bits are used to
   *        set this Byte's lower 4 bits.
   */
  void set_value_low_4_bits(const uint8_t value);
    
    TEST(ByteTest, CopyConstructor) {
  unsigned char byte_value = 0xFF;
  Byte value(&byte_value);
  Byte another_value(value);
  EXPECT_EQ(another_value.to_hex_string(), value.to_hex_string());
  EXPECT_EQ(another_value.to_binary_string(), value.to_binary_string());
}
    
    #endif  // MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_

    
    // System gflags
DEFINE_string(sensor_node_name, '', 'Sensor node name.');
