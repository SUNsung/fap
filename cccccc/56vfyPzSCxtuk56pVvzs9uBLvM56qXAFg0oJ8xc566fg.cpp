
        
          for (unsigned i = 0; i < iter; ++i) {
    FB_LOG_EVERY_MS(INFO, -1) << 'every -1ms';
  }
    
    void compareBenchmarkResults(const std::string& base, const std::string& test) {
  printResultComparison(resultsFromFile(base), resultsFromFile(test));
}
    
    #include <exception>
#include <string>
#include <type_traits>
    
    template <class UIntType, size_t w, size_t s, size_t r>
struct StateSize<std::subtract_with_carry_engine<UIntType, w, s, r>> {
  // [rand.eng.sub]: r * ceil(w / 32)
  using type = std::integral_constant<size_t, r*((w + 31) / 32)>;
};
    
    //////////////////////////////////////////////////////////////////////
    
    using UriTuple = std::tuple<
    const std::string&,
    const std::string&,
    const std::string&,
    const std::string&,
    uint16_t,
    const std::string&,
    const std::string&,
    const std::string&>;
    
      Format format;
    
    
    {    res = canFormatError(ntstatus, NTCAN_ERROR_FORMAT_LONG, sz_error_text,
                         sizeof(sz_error_text) - 1);
    if (NTCAN_SUCCESS == res) {
      snprintf(reinterpret_cast<char *>(str_buf), ERROR_BUF_SIZE, '%s - %s',
               es->str, sz_error_text);
    } else {
      snprintf(reinterpret_cast<char *>(str_buf), ERROR_BUF_SIZE, '%s(0x%08x)',
               es->str, ntstatus);
    }
  }
#else
  snprintf(reinterpret_cast<char *>(str_buf), ERROR_BUF_SIZE, '%s(0x%08x)',
           es->str, ntstatus);
#endif /* of NTCAN_ERROR_FORMAT_LONG */
    
      /**
   * @brief Get the error string.
   * @param status The status to get the error string.
   */
  std::string GetErrorString(const int32_t status) override;
    
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
    
    #include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    
    {  ::apollo::canbus::ChassisDetail chassis_detail;
  chassis_detail.set_car_type(::apollo::canbus::ChassisDetail::QIRUI_EQ_15);
  EXPECT_EQ(manager.GetSensorData(&chassis_detail), ErrorCode::OK);
  EXPECT_EQ(manager.GetSensorData(nullptr), ErrorCode::CANBUS_ERROR);
}
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
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
    
    /**
 * @namespace apollo::drivers::canbus
 * @brief apollo::drivers::canbus
 */
namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    
    {  return Status::OK();
}
    
    // Canbus gflags
DEFINE_double(sensor_freq, 100,
              'Sensor feedback timer frequency -- 0 means event trigger.');
    
    // data file
DECLARE_string(sensor_conf_file);