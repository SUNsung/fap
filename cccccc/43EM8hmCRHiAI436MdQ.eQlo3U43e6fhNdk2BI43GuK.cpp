
        
        DEFINE_string(adapter_config_filename, 'modules/canbus/conf/adapter.conf',
              'The adapter config file');
    
    double ClusterGeneralInfo701::lateral_dist(const std::uint8_t* bytes,
                                           int32_t length) const {
  Byte t0(bytes + 2);
  uint32_t x = t0.get_byte(0, 2);
    }
    
    
    {  int ret = x;
  return ret;
}
    
    #include <string>
#include <vector>
    
    class RouteSegmentsTest : public ::testing::Test {
 public:
  static void SetUpTestCase() {
    AINFO << 'map file: ' << FLAGS_test_map_file;
    if (hdmap_.LoadMapFromFile(FLAGS_test_map_file) != 0) {
      AERROR << 'Failed to load map: ' << FLAGS_test_map_file;
      CHECK(false);
    }
  }
    }