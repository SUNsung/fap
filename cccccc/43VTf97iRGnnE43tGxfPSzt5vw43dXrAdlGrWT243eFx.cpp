
        
          XGBOOST_DEVICE GradientPairInternal() : grad_(0), hess_(0) {}
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
    // Forward declarations
namespace xgboost {
class TreeUpdater;
}
    
    #include <dmlc/registry.h>
#include <functional>
#include <vector>
#include <utility>
#include <string>
#include './base.h'
#include './data.h'
#include './tree_model.h'
#include '../../src/common/host_device_vector.h'
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
    namespace xgboost {
namespace gbm {
/*! \brief model parameters */
struct GBTreeModelParam : public dmlc::Parameter<GBTreeModelParam> {
  /*! \brief number of trees */
  int num_trees;
  /*! \brief number of roots */
  int num_roots;
  /*! \brief number of features to be used by trees */
  int num_feature;
  /*! \brief pad this space, for backward compatibility reason.*/
  int pad_32bit;
  /*! \brief deprecated padding space. */
  int64_t num_pbuffer_deprecated;
  /*!
   * \brief how many output group a single instance can produce
   *  this affects the behavior of number of output we have:
   *    suppose we have n instance and k group, output will be k * n
   */
  int num_output_group;
  /*! \brief size of leaf vector needed in tree */
  int size_leaf_vector;
  /*! \brief reserved parameters */
  int reserved[32];
  /*! \brief constructor */
  GBTreeModelParam() {
    std::memset(this, 0, sizeof(GBTreeModelParam));
    static_assert(sizeof(GBTreeModelParam) == (4 + 2 + 2 + 32) * sizeof(int),
                  '64/32 bit compatibility issue');
  }
  // declare parameters, only declare those that need to be set.
  DMLC_DECLARE_PARAMETER(GBTreeModelParam) {
    DMLC_DECLARE_FIELD(num_output_group)
        .set_lower_bound(1)
        .set_default(1)
        .describe(
            'Number of output groups to be predicted,'
            ' used for multi-class classification.');
    DMLC_DECLARE_FIELD(num_roots).set_lower_bound(1).set_default(1).describe(
        'Tree updater sequence.');
    DMLC_DECLARE_FIELD(num_feature)
        .set_lower_bound(0)
        .describe('Number of features used for training and prediction.');
    DMLC_DECLARE_FIELD(size_leaf_vector)
        .set_lower_bound(0)
        .set_default(0)
        .describe('Reserved option for vector tree.');
  }
};
    }
    }
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    
    {
    {    // Eject all bytes
    int tmp_bytes =
        static_cast<int>(std::ceil(static_cast<float>(stored_bits) / 8));
    for (int j = 0; j < tmp_bytes; j++) {
      int shift_bits = static_cast<int>(stored_bits) - (j + 1) * 8;
      if (shift_bits >= 0) {
        buffer[buffer_position] =
            static_cast<CompressedByteT>(tmp >> shift_bits);
      } else {
        buffer[buffer_position] =
            static_cast<CompressedByteT>(tmp << std::abs(shift_bits));
      }
      buffer_position++;
    }
  }
};
    
    /**
 * @class CanClientFactory
 * @brief CanClientFactory inherites apollo::common::util::Facotory.
 */
class CanClientFactory
    : public apollo::common::util::Factory<CANCardParameter::CANCardBrand,
                                           CanClient> {
 public:
  /**
   * @brief Register the CAN clients of all brands. This function call the
   *        Function apollo::common::util::Factory::Register() for all of the
   *        CAN clients.
   */
  void RegisterCanClients();
    }
    
      void RecvThreadFunc() {
    using common::time::Clock;
    using common::time::AsInt64;
    using common::time::micros;
    using common::ErrorCode;
    AINFO << 'Receive thread starting...';
    TestCanParam *param = param_ptr();
    CanClient *client = param->can_client;
    int64_t start = 0;
    std::vector<CanFrame> buf;
    }
    
    /**
 * @class EsdCanClient
 * @brief The class which defines a ESD CAN client which inherits CanClient.
 */
class EsdCanClient : public CanClient {
 public:
  /**
   * @brief Initialize the ESD CAN client by specified CAN card parameters.
   * @param parameter CAN card parameters to initialize the CAN client.
   * @return If the initialization is successful.
   */
  bool Init(const CANCardParameter &parameter) override;
    }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
    /**
 * @class FakeCanClient
 * @brief The class which defines a fake CAN client which inherits CanClient.
 *        This fake CAN client is used for testing.
 */
class FakeCanClient : public CanClient {
 public:
  /// Interval of sleeping
  static const int32_t USLEEP_INTERVAL = 10000;
    }
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
      AINFO << 'The canbus conf file is loaded: ' << FLAGS_sensor_conf_file;
  ADEBUG << 'Canbus_conf:' << canbus_conf_.ShortDebugString();
    
    
    {  std::atomic<int> refCount{0};
};
    
    namespace folly {
    }
    
    
    {  std::string arguments;
  ASSERT_TRUE(getTracepointArguments(
      'folly', 'test_static_tracepoint_many_arg_types', 0, arguments));
  std::array<int, 8> expected{{
      sizeof(uint32_t),
      sizeof(uint32_t),
      sizeof(bool),
      sizeof(char),
      sizeof(short),
      sizeof(long),
      sizeof(float),
      sizeof(double),
  }};
  checkTracepointArguments(arguments, expected);
}
    
    
    {void Executor::keepAliveRelease() {
  LOG(FATAL) << __func__ << '() should not be called for folly::Executor types '
             << 'which do not override keepAliveAcquire()';
}
} // namespace folly

    
    namespace folly {
    }
    
      // Test for overflow.
  if (std::numeric_limits<decltype(tv.tv_sec)>::max() >=
      std::numeric_limits<int64_t>::max()) {
    // Use our own type alias here rather than std::chrono::nanoseconds
    // to ensure we have 64-bit rep type.
    using nsec_i64 = std::chrono::duration<int64_t, std::nano>;
    tv.tv_sec = std::numeric_limits<decltype(tv.tv_sec)>::max();
    tv.tv_usec = std::numeric_limits<decltype(tv.tv_usec)>::max();
    EXPECT_THROW(to<nsec_i64>(tv), std::range_error);
    }
    
    using namespace std;
using namespace folly;