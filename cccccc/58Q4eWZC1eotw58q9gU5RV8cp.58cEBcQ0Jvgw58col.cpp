
        
        #endif  // CAFFE_DATA_TRANSFORMER_HPP_

    
      virtual inline const char* type() const { return 'AbsVal'; }
  virtual inline int ExactNumBottomBlobs() const { return 1; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
     protected:
  /// @copydoc BNLLLayer
  virtual void Forward_cpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void Forward_gpu(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
    
      /**
   * @brief Computes the error gradient w.r.t. the concatenate inputs.
   *
   * @param top output Blob vector (length 1), providing the error gradient with
   *        respect to the outputs
   *   -# @f$ (KN \times C \times H \times W) @f$ if axis == 0, or
   *      @f$ (N \times KC \times H \times W) @f$ if axis == 1:
   *      containing error gradients @f$ \frac{\partial E}{\partial y} @f$
   *      with respect to concatenated outputs @f$ y @f$
   * @param propagate_down see Layer::Backward.
   * @param bottom input Blob vector (length K), into which the top gradient
   *        @f$ \frac{\partial E}{\partial y} @f$ is deconcatenated back to the
   *        inputs @f$
   *        \left[ \begin{array}{cccc}
   *          \frac{\partial E}{\partial x_1} &
   *          \frac{\partial E}{\partial x_2} &
   *          ... &
   *          \frac{\partial E}{\partial x_K}
   *        \end{array} \right] =
   *        \frac{\partial E}{\partial y}
   *        @f$
   */
  virtual void Backward_cpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
  virtual void Backward_gpu(const vector<Blob<Dtype>*>& top,
      const vector<bool>& propagate_down, const vector<Blob<Dtype>*>& bottom);
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    //////////////////////////////////////////////////////////////////////
    
    Object APCCollection::createObject() const {
  if (m_arrayHandle->isTypedValue()) {
    Variant local(m_arrayHandle->toLocal());
    assertx(local.isArray());
    return Object::attach(
      collections::alloc(m_colType, local.getArrayData())
    );
  }
    }
    
    namespace HPHP {
    }
    
      const char* data = filename.data();
  int data_len = filename.length();
  bool base64 = false;
  if (strncmp(data, 'data:', sizeof('data:') - 1)) {
    return nullptr;
  }
  data += sizeof('data:') - 1;
  data_len -= sizeof('data:') - 1;
    
    inline int ExecutionContext::getPageletTasksStarted() const {
  return m_pageletTasksStarted;
}
    
        bool isPHP = false;
    const char *p = strrchr(ename, '.');
    if (p) {
      isPHP = (strncmp(p + 1, 'php', 3) == 0);
    } else {
      try {
        std::string line;
        std::ifstream fin(fe.c_str());
        if (std::getline(fin, line)) {
          if (line[0] == '#' && line[1] == '!' &&
              line.find('php') != std::string::npos) {
            isPHP = true;
          }
        }
      } catch (...) {
        Logger::Error('FileUtil::find(): unable to read %s', fe.c_str());
      }
    }
    
      if (length <= 0 || length > data.size()) {
    length = data.size();
  }
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
      size_t Read(void* dptr, size_t size) override {
    size_t nbuffer = buffer_.length() - buffer_ptr_;
    if (nbuffer == 0) return strm_->Read(dptr, size);
    if (nbuffer < size) {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, nbuffer);
      buffer_ptr_ += nbuffer;
      return nbuffer + strm_->Read(reinterpret_cast<char*>(dptr) + nbuffer,
                                   size - nbuffer);
    } else {
      std::memcpy(dptr, dmlc::BeginPtr(buffer_) + buffer_ptr_, size);
      buffer_ptr_ += size;
      return size;
    }
  }
    
    
    {    inline size_t Size() const {
      return end - begin;
    }
  };
  /* \brief specifies how to split a rowset into two */
  struct Split {
    std::vector<size_t> left;
    std::vector<size_t> right;
  };
    
    // logistic loss for binary classification task
struct LogisticClassification : public LogisticRegression {
  static const char* DefaultEvalMetric() { return 'error'; }
};
    
     private:
  // try to prune off current leaf
  inline int TryPruneLeaf(RegTree &tree, int nid, int depth, int npruned) { // NOLINT(*)
    if (tree[nid].IsRoot()) return npruned;
    int pid = tree[nid].Parent();
    RegTree::NodeStat &s = tree.Stat(pid);
    ++s.leaf_child_cnt;
    if (s.leaf_child_cnt >= 2 && param_.NeedPrune(s.loss_chg, depth - 1)) {
      // need to be pruned
      tree.ChangeToLeaf(pid, param_.learning_rate * s.base_weight);
      // tail recursion
      return this->TryPruneLeaf(tree, pid, depth - 1, npruned + 2);
    } else {
      return npruned;
    }
  }
  /*! \brief do pruning of a tree */
  inline void DoPrune(RegTree &tree) { // NOLINT(*)
    int npruned = 0;
    // initialize auxiliary statistics
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      tree.Stat(nid).leaf_child_cnt = 0;
    }
    for (int nid = 0; nid < tree.param.num_nodes; ++nid) {
      if (tree[nid].IsLeaf()) {
        npruned = this->TryPruneLeaf(tree, nid, tree.GetDepth(nid), npruned);
      }
    }
    if (!param_.silent) {
      LOG(INFO) << 'tree pruning end, ' << tree.param.num_roots << ' roots, '
                << tree.NumExtraNodes() << ' extra nodes, ' << npruned
                << ' pruned nodes, max_depth=' << tree.MaxDepth();
    }
  }
    
          cbw.Write(buffer.data(), input.begin(), input.end());
    
    TEST(Expected, CoroutineSuccess) {
  auto r0 = []() -> Expected<int, Err> {
    auto x = co_await f1();
    EXPECT_EQ(7, x);
    auto y = co_await f2(x);
    EXPECT_EQ(2.0 * 7, y);
    auto z = co_await f3(x, y);
    EXPECT_EQ(int(2.0 * 7 + 7), *z);
    co_return* z;
  }();
  EXPECT_TRUE(r0.hasValue());
  EXPECT_EQ(21, *r0);
}
    
    BENCHMARK_RELATIVE(format_long_string_safe, iters) {
  BenchmarkSuspender suspender;
  auto const& longString = getLongString();
  while (iters--) {
    fbstring out;
    suspender.dismissing([&] { format(&out, '{}', longString); });
  }
}
    
    static std::string
getStr(const std::vector<uint8_t>& v, size_t& pos, const size_t len) {
  CHECK_GE(len, 1);
  std::string res;
  res.resize(len - 1);
  for (size_t i = 0; i < len - 1; i++) {
    CHECK_NE(v[pos + i], 0);
    res[i] = char(v[pos + i]);
  }
  CHECK_EQ(0, v[pos + len - 1]);
  pos += len;
  return res;
}
    
    inline std::system_error makeSystemErrorExplicit(int err, const char* msg) {
  // TODO: The C++ standard indicates that std::generic_category() should be
  // used for POSIX errno codes.
  //
  // We should ideally change this to use std::generic_category() instead of
  // std::system_category().  However, undertaking this change will require
  // updating existing call sites that currently catch exceptions thrown by
  // this code and currently expect std::system_category.
  return std::system_error(err, std::system_category(), msg);
}
    
    exception_wrapper exception_wrapper::from_exception_ptr(
    std::exception_ptr const& ptr) noexcept {
  if (!ptr) {
    return exception_wrapper();
  }
  try {
    std::rethrow_exception(ptr);
  } catch (std::exception& e) {
    return exception_wrapper(std::current_exception(), e);
  } catch (...) {
    return exception_wrapper(std::current_exception());
  }
}
    
      /**
   * Returns a random uint32_t
   */
  static uint32_t rand32() {
    return rand32(ThreadLocalPRNG());
  }
    
    
    {} // namespace std

    
    #if FOLLY_HAVE_LIBZ
    
    /**
 * This class creates core-local caches for a given shared_ptr, to
 * mitigate contention when acquiring/releasing it.
 *
 * It has the same thread-safety guarantees as shared_ptr: it is safe
 * to concurrently call get(), but reset()s must be synchronized with
 * reads and other resets().
 *
 * @author Giuseppe Ottaviano <ott@fb.com>
 */
template <class T, size_t kNumSlots = 64>
class CoreCachedSharedPtr {
 public:
  explicit CoreCachedSharedPtr(const std::shared_ptr<T>& p = nullptr) {
    reset(p);
  }
    }
    
      if (!apollo::common::util::GetProtoFromFile(FLAGS_can_client_conf_file_a,
                                              &can_client_conf_a)) {
    AERROR << 'Unable to load canbus conf file: '
           << FLAGS_can_client_conf_file_a;
    return 1;
  } else {
    AINFO << 'Conf file is loaded: ' << FLAGS_can_client_conf_file_a;
  }
  AINFO << can_client_conf_a.ShortDebugString();
  auto client_a = can_client_factory->CreateObject(can_client_conf_a.brand());
  if (!client_a || !client_a->Init(can_client_conf_a) ||
      client_a->Start() != ErrorCode::OK) {
    AERROR << 'Create can client a failed.';
    return 1;
  }
  param_ptr_a->can_client = client_a.get();
  param_ptr_a->is_first_agent = true;
  param_ptr_a->conf = can_client_conf_a;
    
    
    {  // Synchronous transmission of CAN messages
  int32_t ret = canWrite(dev_handler_, send_frames_, frame_num, nullptr);
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'send message failed, error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  return ErrorCode::OK;
}
    
    
    { private:
  NTCAN_HANDLE dev_handler_;
  CANCardParameter::CANChannelId port_;
  CMSG send_frames_[MAX_CAN_SEND_FRAME_LEN];
  CMSG recv_frames_[MAX_CAN_RECV_FRAME_LEN];
};
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    #include 'modules/drivers/canbus/can_comm/can_sender.h'
    
    #ifndef MODULES_DRIVERS_CANBUS_CAN_COMM_PROTOCOL_DATA_H_
#define MODULES_DRIVERS_CANBUS_CAN_COMM_PROTOCOL_DATA_H_
    
    TEST(ByteTest, SetGetHighLowBit) {
  unsigned char byte_value = 0x37;
  Byte value(&byte_value);
  value.set_value_high_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x07, value.get_byte_low_4_bits());
  value.set_value_low_4_bits(0x0B);
  EXPECT_EQ(0x0B, value.get_byte_high_4_bits());
  EXPECT_EQ(0x0B, value.get_byte_low_4_bits());
}
    
    DEFINE_string(adapter_config_filename, 'modules/canbus/conf/adapter.conf',
              'The adapter config file');
    
    // System gflags
DECLARE_string(sensor_node_name);