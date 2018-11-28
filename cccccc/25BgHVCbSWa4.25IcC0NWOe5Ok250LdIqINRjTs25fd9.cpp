
        
        
    {	Vector3 getPivotInA();
	Vector3 getPivotInB();
};
#endif

    
    	ClassDB::register_virtual_class<CSGShape>();
	ClassDB::register_virtual_class<CSGPrimitive>();
	ClassDB::register_class<CSGMesh>();
	ClassDB::register_class<CSGSphere>();
	ClassDB::register_class<CSGBox>();
	ClassDB::register_class<CSGCylinder>();
	ClassDB::register_class<CSGTorus>();
	ClassDB::register_class<CSGPolygon>();
	ClassDB::register_class<CSGCombiner>();
    
    	ClassDB::bind_method(D_METHOD('get_connection_status'), &NetworkedMultiplayerPeer::get_connection_status);
	ClassDB::bind_method(D_METHOD('get_unique_id'), &NetworkedMultiplayerPeer::get_unique_id);
    
    #include 'modules/common/log.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/common/byte.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    using Clock = common::time::Clock;
using micros = common::time::micros;
using apollo::common::ErrorCode;
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  bool Init(const CANCardParameter &parameter) override;
    
    #include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/proto/can_card_parameter.pb.h'
    
    template <typename SensorType>
template <typename T>
T ProtocolData<SensorType>::BoundedValue(T lower, T upper, T val) {
  if (lower > upper) {
    return val;
  }
  if (val < lower) {
    return lower;
  }
  if (val > upper) {
    return upper;
  }
  return val;
}
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    using apollo::common::adapter::AdapterConfig;
using apollo::common::adapter::AdapterManager;
using apollo::common::monitor::MonitorMessageItem;
using apollo::common::Status;
using apollo::common::ErrorCode;
using apollo::common::time::Clock;
using apollo::drivers::canbus::CanClientFactory;
using apollo::drivers::canbus::CanClient;
using apollo::drivers::canbus::CanReceiver;
using apollo::drivers::canbus::SensorCanbusConf;
    
    // Canbus gflags
DEFINE_double(sensor_freq, 100,
              'Sensor feedback timer frequency -- 0 means event trigger.');