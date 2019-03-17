
        
            assert(info.name.size() < (2 << 10) && 'name failed sanity check');
    
    using namespace swift::sys;
using llvm::StringRef;
    
    #undef VERB
#undef DIRECTIONAL_PREPOSITION
#undef PREPOSITION

    
        // Try adding an 'e' and look for that as a verb.
    if (possibleVerb.back() != 'e') {
      SmallString<16> possibleVerbWithE;
      possibleVerbWithE += possibleVerb;
      possibleVerbWithE += 'e';
      if (getPartOfSpeech(possibleVerbWithE) == PartOfSpeech::Verb)
        return PartOfSpeech::Gerund;
    }
    
    
    {  return loc;
}
    
    void LinkJobAction::anchor() {}
    
    static internal::GrpcLibraryInitializer g_gli_initializer;
ChannelCredentials::ChannelCredentials() { g_gli_initializer.summon(); }
    
    // A CallData class will be created for every grpc call within a channel. It is
// used to store data and methods specific to that call. CensusClientCallData is
// thread-compatible, however typically only 1 thread should be interacting with
// a call at a time.
class CensusClientCallData : public CallData {
 public:
  // Maximum size of trace context is sent on the wire.
  static constexpr uint32_t kMaxTraceContextLen = 64;
  // Maximum size of tags that are sent on the wire.
  static constexpr uint32_t kMaxTagsLen = 2048;
    }
    
    #include <grpc/status.h>
#include 'absl/memory/memory.h'
#include 'absl/strings/string_view.h'
#include 'absl/strings/strip.h'
#include 'opencensus/trace/span.h'
#include 'opencensus/trace/span_context.h'
#include 'opencensus/trace/trace_params.h'
#include 'src/core/lib/slice/slice_internal.h'
#include 'src/cpp/common/channel_filter.h'
#include 'src/cpp/ext/filters/census/rpc_encoding.h'
    
    namespace grpc {
    }
    
      // implementation of ServerReflectionInfo(stream ServerReflectionRequest) rpc
  // in ServerReflection service
  Status ServerReflectionInfo(
      ServerContext* context,
      ServerReaderWriter<reflection::v1alpha::ServerReflectionResponse,
                         reflection::v1alpha::ServerReflectionRequest>* stream)
      override;
    
    bool ProtoServerReflectionPlugin::has_async_methods() const {
  if (reflection_service_) {
    return reflection_service_->has_async_methods();
  }
  return false;
}
    
        virtual void UpdateArguments(ChannelArguments* args) override {
      args->SetInt(name_, value_);
    }
    virtual void UpdatePlugins(
        std::vector<std::unique_ptr<ServerBuilderPlugin>>* plugins) override {}
    
    void DynamicThreadPool::ThreadFunc() {
  for (;;) {
    // Wait until work is available or we are shutting down.
    std::unique_lock<std::mutex> lock(mu_);
    if (!shutdown_ && callbacks_.empty()) {
      // If there are too many threads waiting, then quit this thread
      if (threads_waiting_ >= reserve_threads_) {
        break;
      }
      threads_waiting_++;
      cv_.wait(lock);
      threads_waiting_--;
    }
    // Drain callbacks before considering shutdown to ensure all work
    // gets completed.
    if (!callbacks_.empty()) {
      auto cb = callbacks_.front();
      callbacks_.pop();
      lock.unlock();
      cb();
    } else if (shutdown_) {
      break;
    }
  }
}
    
    #include 'src/core/lib/gprpp/thd.h'
#include 'src/cpp/server/thread_pool_interface.h'
    
    
    {
    {}}
    
    void Config::Bind(HackStrictOption& loc, const IniSettingMap& ini,
                  const Hdf& config, const std::string& name /* = '' */,
                  HackStrictOption def) {
  // Currently this doens't bind to ini_get since it is hard to thread through
  // an enum
  loc = GetHackStrictOption(ini, config, name, def);
}
    
    #endif // HPHP_DATA_STREAM_WRAPPER_H

    
    PlainDirectory::PlainDirectory(const String& path) {
  m_dir = ::opendir(path.data());
}
    
      req::ptr<Directory> opendir(const String& path) override;
    
    
    {  auto glob = HHVM_FN(glob)(String(path_str, path_len, CopyString));
  if (!glob.isArray()) {
    return nullptr;
  }
  return req::make<ArrayDirectory>(glob.toArray());
}
    
    template<typename AHM>
void checkAHMSubMaps(const AHM& map, folly::StringPiece mapName,
                     std::atomic<bool>& done) {
  if (LIKELY(map.numSubMaps() == 1) ||
      done.load(std::memory_order_relaxed) ||
      done.exchange(true, std::memory_order_relaxed)) {
    return;
  }
    }
    
      bool Next() override {
    if (!parser_->Next()) return false;
    const RowBlock<IndexType>& batch = parser_->Value();
    LOG(INFO) << batch.size;
    dense_index_.resize(num_col_ * batch.size);
    dense_value_.resize(num_col_ * batch.size);
    std::fill(dense_value_.begin(), dense_value_.end(), 0.0);
    offset_.resize(batch.size + 1);
    offset_[0] = 0;
    }
    
      /*! \brief return corresponding element set given the node_id */
  inline const Elem& operator[](unsigned node_id) const {
    const Elem& e = elem_of_each_node_[node_id];
    CHECK(e.begin != nullptr)
        << 'access element that is not in the set';
    return e;
  }
  // clear up things
  inline void Clear() {
    row_indices_.clear();
    elem_of_each_node_.clear();
  }
  // initialize node id 0->everything
  inline void Init() {
    CHECK_EQ(elem_of_each_node_.size(), 0U);
    }
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    
    {
    {
    {      // Test write Symbol
      std::vector<unsigned char> buffer2(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
      for (int i = 0; i < input.size(); i++) {
        cbw.WriteSymbol(buffer2.data(), input[i], i);
      }
      CompressedIterator<int> ci2(buffer.data(), alphabet_size);
      std::vector<int> output2(input.size());
      for (int i = 0; i < input.size(); i++) {
        output2[i] = ci2[i];
      }
      ASSERT_TRUE(input == output2);
    }
  }
}
    
    
    {
    {bool SimpleDMatrix::SingleColBlock() const { return true; }
}  // namespace data
}  // namespace xgboost

    
    
    // exception type_error.304
    try
    {
        // use at() on a non-array type
        json str = 'I am a string';
        str.at(0) = 'Another string';
    }
    catch (json::type_error& e)
    {
        std::cout << e.what() << '\n';
    }
    
    #include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    DEFINE_string(adapter_config_filename, 'modules/canbus/conf/adapter.conf',
              'The adapter config file');
    
    int ClusterGeneralInfo701::obstacle_id(const std::uint8_t* bytes,
                                       int32_t length) const {
  Byte t0(bytes);
  uint32_t x = t0.get_byte(0, 8);
    }
    
    double ObjectGeneralInfo60B::lateral_dist(const std::uint8_t* bytes,
                                          int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 3);
    }
    
    #include 'glog/logging.h'
    
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
    
      const LaneGraph &lane_graph =
      ObstacleClusters::GetLaneGraph(start_s, length, lane);
  EXPECT_EQ(1, lane_graph.lane_sequence_size());
  EXPECT_EQ(3, lane_graph.lane_sequence(0).lane_segment_size());
  EXPECT_EQ('l9', lane_graph.lane_sequence(0).lane_segment(0).lane_id());
  EXPECT_EQ('l18', lane_graph.lane_sequence(0).lane_segment(1).lane_id());
  EXPECT_EQ('l21', lane_graph.lane_sequence(0).lane_segment(2).lane_id());
    
    
    {  double ret = x * 0.001000;
  return ret;
}
    
      Byte t3(bytes + 7);
  t = t3.get_byte(0, 8);
  x <<= 8;
  x |= t;
    
    namespace apollo {
namespace canbus {
namespace gem {
    }
    }
    }
    
    void Brakemotorrpt372::Parse(const std::uint8_t* bytes, int32_t length,
                             ChassisDetail* chassis) const {
  chassis->mutable_gem()->mutable_brake_motor_rpt_3_72()->set_torque_output(
      torque_output(bytes, length));
  chassis->mutable_gem()->mutable_brake_motor_rpt_3_72()->set_torque_input(
      torque_input(bytes, length));
}
    
    // config detail: {'name': 'commanded_value', 'offset': 0.0, 'precision': 0.001,
// 'len': 16, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 23,
// 'type': 'double', 'order': 'motorola', 'physical_unit': '%'}
double Brakerpt6c::commanded_value(const std::uint8_t* bytes,
                                   int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 8);
    }