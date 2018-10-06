  const OpRegistrationData* op_reg_data;
  TF_RETURN_IF_ERROR(OpRegistry::Global()->LookUp(node.op(), &op_reg_data));
    
    #ifndef TENSORFLOW_PYTHON_FRAMEWORK_CPP_SHAPE_INFERENCE_H_
#define TENSORFLOW_PYTHON_FRAMEWORK_CPP_SHAPE_INFERENCE_H_
    
    namespace tensorflow {
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // Converts the given numpy ndarray to a (safe) TF_Tensor. The returned
// TF_Tensor in `out_tensor` may have its own Python reference to `ndarray`s
// data. After `out_tensor` is destroyed, this reference must (eventually) be
// decremented via ClearDecrefCache().
//
// `out_tensor` must be non-null. Caller retains ownership of `ndarray`.
Status PyArrayToTF_Tensor(PyObject* ndarray, Safe_TF_TensorPtr* out_tensor);
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    // Safe containers for an owned TF_Status. On destruction, the handle
// will be deleted by TF_DeleteStatus.
using Safe_TF_StatusPtr = std::unique_ptr<TF_Status, detail::TFStatusDeleter>;
Safe_TF_StatusPtr make_safe(TF_Status* status);
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#include 'tensorflow/python/util/kernel_registry.h'
    
    void Assembler::blr() {
  // The concept of a conditional return is not existent for upper layers.
  // Therefore no bclr is defined despite being possible.
  // Only blr is defined.
  BranchParams bp(BranchConditions::Always);
  EmitXLForm(19, bp.bo(), bp.bi(), (0 /*bh*/ & 0x3), 16, 0);
}
    
      static const APCCollection* fromHandle(const APCHandle* handle) {
    assertx(handle->checkInvariants());
    assertx(handle->kind() == APCKind::SharedCollection);
    static_assert(offsetof(APCCollection, m_handle) == 0, '');
    return reinterpret_cast<const APCCollection*>(handle);
  }
    
    #include <folly/ScopeGuard.h>
    
    #include <string>
#include <utility>
#include <vector>
    
    int InternalKeyComparator::Compare(const Slice& akey, const Slice& bkey) const {
  // Order by:
  //    increasing user key (according to user-supplied comparator)
  //    decreasing sequence number
  //    decreasing type (though sequence# should be enough to disambiguate)
  int r = user_comparator_->Compare(ExtractUserKey(akey), ExtractUserKey(bkey));
  if (r == 0) {
    const uint64_t anum = DecodeFixed64(akey.data() + akey.size() - 8);
    const uint64_t bnum = DecodeFixed64(bkey.data() + bkey.size() - 8);
    if (anum > bnum) {
      r = -1;
    } else if (anum < bnum) {
      r = +1;
    }
  }
  return r;
}
    
      struct KeyComparator {
    const InternalKeyComparator comparator;
    explicit KeyComparator(const InternalKeyComparator& c) : comparator(c) { }
    int operator()(const char* a, const char* b) const;
  };
  friend class MemTableIterator;
  friend class MemTableBackwardIterator;
    
    TEST(RecoveryTest, LogFileReuse) {
  if (!CanAppend()) {
    fprintf(stderr, 'skipping test because env does not support appending\n');
    return;
  }
  for (int i = 0; i < 2; i++) {
    ASSERT_OK(Put('foo', 'bar'));
    if (i == 0) {
      // Compact to ensure current log is empty
      CompactMemTable();
    }
    Close();
    ASSERT_EQ(1, NumLogs());
    uint64_t number = FirstLogFile();
    if (i == 0) {
      ASSERT_EQ(0, FileSize(LogName(number)));
    } else {
      ASSERT_LT(0, FileSize(LogName(number)));
    }
    Open();
    ASSERT_EQ(1, NumLogs());
    ASSERT_EQ(number, FirstLogFile()) << 'did not reuse log file';
    ASSERT_EQ('bar', Get('foo'));
    Open();
    ASSERT_EQ(1, NumLogs());
    ASSERT_EQ(number, FirstLogFile()) << 'did not reuse log file';
    ASSERT_EQ('bar', Get('foo'));
  }
}
    
    
    {REGISTER_INTERNAL(PrometheusMetricsConfigParserPlugin,
                  'config_parser',
                  'prometheus_targets');
}

    
        // Construct a config map, the typical output from `Config::genConfig`.
    config_data_['awesome'] = content_;
    Config::get().reset();
    clearDecorations('awesome');
    
    #include <gtest/gtest.h>
    
      const auto& parser = c.getParser('options')->getData();
  ASSERT_TRUE(parser.doc().HasMember('options'));
  EXPECT_TRUE(JSON::valueToBool(parser.doc()['options']['enable_monitor']));
    
    #include <osquery/query.h>
    
    #include <osquery/database.h>
#include <osquery/distributed.h>
#include <osquery/logger.h>
#include <osquery/registry_factory.h>
#include <osquery/sql.h>
#include <osquery/system.h>
    
    using INotifyEventContextRef = std::shared_ptr<INotifyEventContext>;
    
    
    {  Status genConfig(std::map<std::string, std::string>& config) {
    config['data'] = '{\'queries\':{}}';
    return Status(0, 'OK');
  }
};
    
    #if USE_ESD_CAN
  CANCardParameter can_card_parameter;
  can_card_parameter.set_brand(CANCardParameter::ESD_CAN);
  can_card_parameter.set_type(CANCardParameter::PCI_CARD);
  can_card_parameter.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    
    struct TestCanParam {
  CANCardParameter conf;
  bool is_first_agent = false;
  int32_t recv_cnt = 0;
  int32_t recv_err_cnt = 0;
  int32_t send_cnt = 0;
  int32_t send_err_cnt = 0;
  int32_t send_lost_cnt = 0;
  int32_t send_time = 0;
  int32_t recv_time = 0;
  CanClient *can_client = nullptr;
    }
    
      if (!is_started_) {
    AERROR << 'Esd can client has not been initiated! Please init first!';
    return ErrorCode::CAN_CLIENT_ERROR_SEND_FAILED;
  }
  for (size_t i = 0; i < frames.size() && i < MAX_CAN_SEND_FRAME_LEN; ++i) {
    send_frames_[i].id = frames[i].id;
    send_frames_[i].len = frames[i].len;
    std::memcpy(send_frames_[i].data, frames[i].data, frames[i].len);
  }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    bool HermesCanClient::Init(const CANCardParameter &parameter) {
  if (!parameter.has_channel_id()) {
    AERROR << 'Init CAN failed: parameter does not have channel id. The '
              'parameter is '
           << parameter.DebugString();
    return false;
  } else {
    _card_port = parameter.channel_id();
    return true;
  }
}
    
    bool SocketCanClientRaw::Init(const CANCardParameter &parameter) {
  if (!parameter.has_channel_id()) {
    AERROR << 'Init CAN failed: parameter does not have channel id. The '
              'parameter is '
           << parameter.DebugString();
    return false;
  }
    }
    
    #endif  // MODULES_DRIVERS_CANBUS_CAN_COMM_PROTOCOL_DATA_H_

    
    #endif  // MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_

    
    // System gflags
DEFINE_string(sensor_node_name, '', 'Sensor node name.');

    
    // System gflags
DECLARE_string(node_name);
DECLARE_string(canbus_driver_name);