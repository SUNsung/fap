
        
        
    {} // namespace folly
    
    #pragma once
    
      /**
   * Returns a double in [0, 1)
   */
  template <class RNG = ThreadLocalPRNG, class /* EnableIf */ = ValidRNG<RNG>>
  static double randDouble01(RNG&& rng) {
    return std::generate_canonical<double, std::numeric_limits<double>::digits>(
        rng);
  }
    
    
    {} // namespace folly

    
    
    {} // namespace folly
    
      // Theoretically conversion is representable in the output type,
  // but we normalize the input first, and normalization would trigger an
  // overflow.
  using hours_u64 = std::chrono::duration<uint64_t, std::ratio<3600>>;
  ts.tv_sec = std::numeric_limits<decltype(ts.tv_sec)>::max();
  ts.tv_nsec = 1000000000;
  EXPECT_THROW(to<hours_u64>(ts), std::range_error);
  // If we drop it back down to the normal range it should succeed
  ts.tv_nsec = 999999999;
  EXPECT_EQ(
      std::numeric_limits<decltype(ts.tv_sec)>::max() / 3600,
      to<hours_u64>(ts).count());
    
    /// Wrapper around the makeCompressionCounterHandler() extension point.
class CompressionCounter {
 public:
  CompressionCounter() {}
  CompressionCounter(
      folly::io::CodecType codecType,
      folly::StringPiece codecName,
      folly::Optional<int> level,
      CompressionCounterKey key,
      CompressionCounterType counterType) {
    initialize_ = [=]() {
      return makeCompressionCounterHandler(
          codecType, codecName, level, key, counterType);
    };
    DCHECK(!initialize_.hasAllocatedMemory());
  }
    }
    
    
    {
    {
    {
    {} // namespace detail
} // namespace compression
} // namespace io
} // namespace folly

    
      /**
   * windowSize is the base two logarithm of the window size (the size of the
   * history buffer). It should be in the range 9..15. Larger values of this
   * parameter result in better compression at the expense of memory usage.
   *
   * The default value is 15.
   *
   * NB: when inflating/uncompressing data, the windowSize must be greater than
   * or equal to the size used when deflating/compressing.
   */
  int windowSize;
    
        oldptr = takeOwnedBase(success);
    if (!owners_eq(oldptr, CountedDetail::get_counted_base(expected))) {
      expected = get_shared_ptr(oldptr, false);
      release_external(newptr);
      return false;
    }
    expectedptr = oldptr; // Need oldptr to release if failed
    if (ptr_.compare_exchange_weak(expectedptr, newptr, success, failure)) {
      if (oldptr.get()) {
        release_external(oldptr, -1);
      }
      return true;
    } else {
      if (oldptr.get()) {
        expected = get_shared_ptr(oldptr, false);
      } else {
        expected = SharedPtr(nullptr);
      }
      release_external(newptr);
      return false;
    }
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, desired, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    return compare_exchange_weak(expected, desired, success, failure);
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_strong(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto local_expected = expected;
    do {
      if (compare_exchange_weak(expected, n, success, failure)) {
        return true;
      }
    } while (local_expected == expected);
    
    #ifndef MODULES_DRIVERS_CANBUS_CAN_CLIENT_CAN_CLIENT_H_
#define MODULES_DRIVERS_CANBUS_CAN_CLIENT_CAN_CLIENT_H_
    
      const int32_t ret = canRead(dev_handler_, recv_frames_, frame_num, nullptr);
  // rx timeout not log
  if (ret == NTCAN_RX_TIMEOUT) {
    return ErrorCode::OK;
  }
  if (ret != NTCAN_SUCCESS) {
    AERROR << 'receive message failed, error code: ' << ret << ', '
           << GetErrorString(ret);
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
    
    bool FakeCanClient::Init(const CANCardParameter &param) { return true; }
    
    #include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    
    {  ::apollo::canbus::ChassisDetail chassis_detail;
  chassis_detail.set_car_type(::apollo::canbus::ChassisDetail::QIRUI_EQ_15);
  EXPECT_EQ(manager.GetSensorData(&chassis_detail), ErrorCode::OK);
  EXPECT_EQ(manager.GetSensorData(nullptr), ErrorCode::CANBUS_ERROR);
}
    
      /**
   * @brief Get a one-byte unsigned integer representing the consecutive bits
   *        from a specified position (from lowest) by a certain length.
   * @param start_pos The starting position (from lowest) of bits.
   * @param length The length of the selected consecutive bits.
   * @return The one-byte unsigned integer representing the selected bits.
   */
  uint8_t get_byte(const int32_t start_pos, const int32_t length) const;