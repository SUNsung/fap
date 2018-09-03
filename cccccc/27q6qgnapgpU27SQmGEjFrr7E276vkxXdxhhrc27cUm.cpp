
        
        Optional<PlatformKind> swift::platformFromString(StringRef Name) {
  if (Name == '*')
    return PlatformKind::none;
  return llvm::StringSwitch<Optional<PlatformKind>>(Name)
#define AVAILABILITY_PLATFORM(X, PrettyName) .Case(#X, PlatformKind::X)
#include 'swift/AST/PlatformKinds.def'
      .Case('macOS', PlatformKind::OSX)
      .Case('macOSApplicationExtension', PlatformKind::OSXApplicationExtension)
      .Default(Optional<PlatformKind>());
}
    
    bool CacheImpl::getAndRetain(const void *Key, void **Value_out) {
  int Ret = cache_get_and_retain(static_cast<cache_t*>(Impl),
                                 const_cast<void*>(Key), Value_out);
  return Ret == 0;
}
    
      std::size_t capacity = End - Allocated;
  std::size_t requiredCapacity = capacity + needed;
  do {
    capacity = 2 * capacity + 16;
  } while (capacity < requiredCapacity);
    
    std::pair<bool, bool> LangOptions::setTarget(llvm::Triple triple) {
  clearAllPlatformConditionValues();
    }
    
    // Ternary predicate assertion macros.
#define EXPECT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_FATAL_FAILURE_)
    
    #if GTEST_HAS_DEATH_TEST
    
      template <typename T>
  operator ParamGenerator<T>() const {
    const T array[] = {static_cast<T>(v1_), static_cast<T>(v2_),
        static_cast<T>(v3_), static_cast<T>(v4_), static_cast<T>(v5_),
        static_cast<T>(v6_), static_cast<T>(v7_), static_cast<T>(v8_),
        static_cast<T>(v9_), static_cast<T>(v10_), static_cast<T>(v11_),
        static_cast<T>(v12_), static_cast<T>(v13_), static_cast<T>(v14_),
        static_cast<T>(v15_), static_cast<T>(v16_), static_cast<T>(v17_),
        static_cast<T>(v18_), static_cast<T>(v19_), static_cast<T>(v20_),
        static_cast<T>(v21_), static_cast<T>(v22_), static_cast<T>(v23_)};
    return ValuesIn(array);
  }
    
    #ifndef GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
#define GTEST_INCLUDE_GTEST_INTERNAL_GTEST_STRING_H_
    
      GTEST_DECLARE_TUPLE_AS_FRIEND_
    
    // Tests the Set method.
TEST(MyString, Set) {
  MyString s;
    }
    
    #include <folly/test/DeterministicSchedule.h>
    
    
    {  dynamic d4 = dynamic::object('C', 'C++');
  auto i4 = convertTo<std::pair<std::string, folly::fbstring>>(d4);
  EXPECT_EQ(i4.first, 'C');
  EXPECT_EQ(i4.second, 'C++');
}
    
    // this test makes sure that the coroutine is destroyed properly
TEST(Expected, CoroutineCleanedUp) {
  int count_dest = 0;
  auto r = [&]() -> Expected<int, Err> {
    SCOPE_EXIT {
      ++count_dest;
    };
    auto x = co_await Expected<int, Err>(makeUnexpected(Err::badder()));
    ADD_FAILURE() << 'Should not be resuming';
    co_return x;
  }();
  EXPECT_FALSE(r.hasValue());
  EXPECT_EQ(1, count_dest);
}
    
    #include <boost/random.hpp>
    
    void BENCHFUN(pushBack)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.push_back(obj); }
  });
}
    
      {
    Lock lock(f, std::defer_lock);
    EXPECT_TRUE(lock.try_lock());
  }
    
    struct Const {
  void test() const;
};
    
    TEST(CanClientFactoryTest, CreateCanClient) {
  auto *can_factory = CanClientFactory::instance();
  EXPECT_TRUE(can_factory != nullptr);
    }
    
    /**
 * @file
 * @brief Defines the EsdCanClient class which inherits CanClient.
 */
    
    #include <cstring>
    
      if (_card_port > MAX_CAN_PORT || _card_port < 0) {
    AERROR << 'can port number [' << _card_port << '] is out of the range [0,'
           << MAX_CAN_PORT << ']';
    return ErrorCode::CAN_CLIENT_ERROR_BASE;
  }
  // open device
  int32_t ret = bcan_open(_card_port, 0,
                          5,  // 5ms for rx timeout
                          5,  // 5ms for tx timeout
                          &_dev_handler);
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    const char HEX[] = '0123456789ABCDEF';
    
      /**
   * @brief Set the bit on a specified position to zero.
   * @param pos The position of the bit to be set to zero.
   */
  void set_bit_0(const int32_t pos);
    
     private:
  void PublishSensorData();
  void OnTimer(const ros::TimerEvent &event);
  void DataTrigger();
  common::Status OnError(const std::string &error_msg);
  void RegisterCanClients();
    
    // System gflags
DECLARE_string(sensor_node_name);