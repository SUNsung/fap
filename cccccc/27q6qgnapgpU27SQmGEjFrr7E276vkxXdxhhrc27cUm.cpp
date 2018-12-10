
        
        namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    // A CodeGenerator that captures the FileDescriptor it's passed as a
// FileDescriptorProto.
class DescriptorCapturingGenerator : public CodeGenerator {
 public:
  // Does not own file; file must outlive the Generator.
  explicit DescriptorCapturingGenerator(FileDescriptorProto* file)
      : file_(file) {}
    }
    
    int ImmutableExtensionLiteGenerator::GenerateRegistrationCode(
    io::Printer* printer) {
  printer->Print(
    'registry.add($scope$.$name$);\n',
    'scope', scope_,
    'name', UnderscoresToCamelCase(descriptor_));
  return 7;
}
    
      printer->Print('$comments$typedef$deprecated_attribute$ GPB_ENUM($name$) {\n',
                 'comments', enum_comments,
                 'deprecated_attribute', GetOptionalDeprecatedAttribute(descriptor_, descriptor_->file()),
                 'name', name_);
  printer->Indent();
    }
    
    #pragma once
    
      // Invoke compaction filter if needed.
  void InvokeFilterIfNeeded(bool* need_skip, Slice* skip_until);
    
    Status WriteBatchBase::DeleteRange(ColumnFamilyHandle* column_family,
                                   const SliceParts& begin_key,
                                   const SliceParts& end_key) {
  std::string begin_key_buf, end_key_buf;
  Slice begin_key_slice(begin_key, &begin_key_buf);
  Slice end_key_slice(end_key, &end_key_buf);
  return DeleteRange(column_family, begin_key_slice, end_key_slice);
}
    
    
    { private:
  // no copying allowed
  WriteControllerToken(const WriteControllerToken&) = delete;
  void operator=(const WriteControllerToken&) = delete;
};
    
      delay_token_2.reset();
  // 1000 used, 8240 left
  ASSERT_EQ(static_cast<uint64_t>(0), controller.GetDelay(&env, 1000u));
    
            *j = json::parse(str);
    
    #define CHECK_FLOAT_EQ(a, b, eps) CHECK(std::fabs((a) - (b)) <  (eps))
#define CHECK_FLOAT_NE(a, b, eps) CHECK(std::fabs((a) - (b)) >= (eps))
#define CHECK_FLOAT_GE(a, b, eps) CHECK((a) - (b) > -(eps))
#define CHECK_FLOAT_LE(a, b, eps) CHECK((b) - (a) > -(eps))
#define CHECK_FLOAT_GT(a, b, eps) CHECK((a) - (b) >  (eps))
#define CHECK_FLOAT_LT(a, b, eps) CHECK((b) - (a) >  (eps))
    
    
    {}  // end namespace benchmark

    
    #include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
      /**
   * @brief Start the fake CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Start() override;
    
    class FakeCanClientTest : public ::testing::Test {
 public:
  static const int32_t FRAME_LEN = 10;
    }
    
    #include <iostream>
    
    /*
TEST(HermesCanClient, send) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::HERMES_CAN);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
  HermesCanClient hermes_can;
  EXPECT_TRUE(hermes_can.Init(param));
    }
    
    using apollo::common::ErrorCode;
    
      /**
   * @brief Receive messages
   * @param frames The messages to receive.
   * @param frame_num The amount of messages to receive.
   * @return The status of the receiving action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                    int32_t *const frame_num) override;
    
      int32_t Start(bool is_blocked);
    
    template <typename SensorType>
void MessageManager<SensorType>::ResetSendMessages() {
  for (auto &protocol_data : send_protocol_data_) {
    if (protocol_data == nullptr) {
      AERROR << 'Invalid protocol data.';
    } else {
      protocol_data->Reset();
    }
  }
}
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    using ::apollo::canbus::ChassisDetail;
    
    /**
 * @class Byte
 * @brief The class of one byte, which is 8 bits.
 *        It includes some operations on one byte.
 */
class Byte {
 public:
  /**
   * @brief Constructor which takes a pointer to a one-byte unsigned integer.
   * @param value The pointer to a one-byte unsigned integer for construction.
   */
  explicit Byte(const uint8_t *value);
    }
    
    #include 'gtest/gtest.h'
    
    #include <cassert>
#include <climits>
    
      explicit VirtualExecutor(Executor& executor)
      : VirtualExecutor(getKeepAliveToken(executor)) {}
    
    template <typename T>
typename std::enable_if<std::is_arithmetic<T>::value, std::string>::type
prefixToStringLE(T prefix, uint64_t n = sizeof(T)) {
  DCHECK_GT(n, 0);
  DCHECK_LE(n, sizeof(T));
  prefix = Endian::little(prefix);
  std::string result;
  result.resize(n);
  memcpy(&result[0], &prefix, n);
  return result;
}
    
      // Check pointer equality considering wrapped aliased pointers.
  bool owners_eq(PackedPtr& p1, BasePtr* p2) {
    bool aliased1 = p1.extra() & ALIASED_PTR;
    if (aliased1) {
      auto p1a = CountedDetail::template get_shared_ptr_from_counted_base<T>(
          p1.get(), false);
      return CountedDetail::get_counted_base(p1a) == p2;
    }
    return p1.get() == p2;
  }
    
    template <class T, size_t kNumSlots = 64>
class CoreCachedWeakPtr {
 public:
  explicit CoreCachedWeakPtr(const CoreCachedSharedPtr<T, kNumSlots>& p) {
    for (auto slot : folly::enumerate(slots_)) {
      *slot = p.slots_[slot.index];
    }
  }
    }