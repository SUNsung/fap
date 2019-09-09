
        
        TEST(Converter, UnknownType) {
  using namespace caffe2::testing;
  caffe2::NetDef net;
  NetMutator(&net)
      .newOp('NeverSeen', {'X'}, {'X'})
      .setDeviceOptionName('device_' + c10::to_string(rand() % 2));
  auto nn = caffe2::convertToNNModule(net);
  auto new_netdef = caffe2::convertToCaffe2Proto(nn);
}
    
    <details>
    
    #include 'caffe2/core/context.h'
#include 'caffe2/core/logging.h'
#include 'caffe2/core/operator.h'
#include 'caffe2/utils/math.h'
    
    // All pre-2.1 values are the same, so we treat them all as v2.0.x
// Versions pre-2.1 store version_range_ts in their metainfo
template <>
const block_magic_t
    reql_btree_version_magic_t<cluster_version_t::v2_0>::value =
        { { 's', 'u', 'p', 'e' } };
    
        {
        txn_t txn(&cache_conn, write_durability_t::HARD, 1);
        {
            buf_lock_t sb_lock(&txn, SUPERBLOCK_ID, alt_create_t::create);
            real_superblock_t superblock(std::move(sb_lock));
            btree_slice_t::init_real_superblock(
                &superblock, std::vector<char>(), binary_blob_t());
        }
        txn.commit();
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8>
internal::ValueArray8<T1, T2, T3, T4, T5, T6, T7, T8> Values(T1 v1, T2 v2,
    T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8) {
  return internal::ValueArray8<T1, T2, T3, T4, T5, T6, T7, T8>(v1, v2, v3, v4,
      v5, v6, v7, v8);
}
    
    // scripts/fuse_gtest.py depends on gtest's own header being #included
// *unconditionally*.  Therefore these #includes cannot be moved
// inside #if GTEST_HAS_PARAM_TEST.
#include 'gtest/internal/gtest-internal.h'
#include 'gtest/internal/gtest-param-util.h'
#include 'gtest/internal/gtest-param-util-generated.h'
    
    // This helper class can be used to mock out Google Test failure reporting
// so that we can test Google Test or code that builds on Google Test.
//
// An object of this class appends a TestPartResult object to the
// TestPartResultArray object given in the constructor whenever a Google Test
// failure is reported. It can either intercept only failures that are
// generated in the same thread that created this object or it can intercept
// all generated failures. The scope of this mock object can be controlled with
// the second argument to the two arguments constructor.
class GTEST_API_ ScopedFakeTestPartResultReporter
    : public TestPartResultReporterInterface {
 public:
  // The two possible mocking modes of this object.
  enum InterceptMode {
    INTERCEPT_ONLY_CURRENT_THREAD,  // Intercepts only thread local failures.
    INTERCEPT_ALL_THREADS           // Intercepts all failures.
  };
    }
    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
  const T31 v31_;
  const T32 v32_;
  const T33 v33_;
  const T34 v34_;
  const T35 v35_;
  const T36 v36_;
  const T37 v37_;
  const T38 v38_;
  const T39 v39_;
  const T40 v40_;
  const T41 v41_;
};
    
    #include <string.h>
#include <string>
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21>
struct Templates21 {
  typedef TemplateSel<T1> Head;
  typedef Templates20<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21> Tail;
};
    
      virtual std::shared_ptr<DHTTask> createBucketRefreshTask() = 0;
    
      void setMessageDispatcher(DHTMessageDispatcher* dispatcher);
    
    void DHTTaskQueueImpl::addPeriodicTask1(const std::shared_ptr<DHTTask>& task)
{
  periodicTaskQueue1_.addTask(task);
}
    
      std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port,
                            const unsigned char* secret) const;
    
    DHTTokenUpdateCommand::~DHTTokenUpdateCommand() = default;
    
      typedef std::set<std::shared_ptr<CacheEntry>,
                   DerefLess<std::shared_ptr<CacheEntry>>>
      CacheEntrySet;
  CacheEntrySet entries_;
    
    NcclComm::NcclComm(int /*deviceId*/, const MPIWrapperPtr& /*mpi*/) { }
    
    class ConfigRecord : public Object, public IConfigRecord // all configuration arguments to class construction, resolved into ConfigValuePtrs
{
    function<void(const std::wstring &)> failfn; // function to call in case of failure due to this value
    // change to ContextInsensitiveMap<ConfigValuePtr>
    std::map<std::wstring, ConfigValuePtr> members;
    IConfigRecordPtr parentScope; // we look up the chain
    ConfigRecord()
    {
    } // forbidden (private) to instantiate without a scope
public:
    // --- creation phase
    }
    
            nodeParamCount = 1;
        nodeParamStart = 0;
    
    template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, half>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, float>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, double>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, half>(const ConfigParameters& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, float>(const ConfigParameters& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, double>(const ConfigParameters& config);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, half> (const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, float> (const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, double>(const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);

    
    // -----------------------------------------------------------------------
// BinaryElementWiseNode (operand1, operand2)
//
// binary elementwise operations that are implemented with the tensor lib
//
// Derived clases only need to override ForwardProp() and BackpropTo().
// -----------------------------------------------------------------------
    
    
// CreateNetwork - create a network based on the network description
// networkDescription - network description
template <typename ElemType>
void CNTKEvalBase<ElemType>::CreateNetwork(const std::string& networkDescription)
{
    ConfigParameters config;
    config.Parse(networkDescription);
    }
    
            /**
         * Move constructor.
         * It destroys the original Rectangle to be moved.
         * @param rectangle Rectangle to be moved.
         */
        Rectangle<T>(Rectangle<T>&& rectangle);
    
    
    {    template Rectangle<char> recenter(const Rectangle<char>& rectangle, const char newWidth, const char newHeight);
    template Rectangle<signed char> recenter(const Rectangle<signed char>& rectangle, const signed char newWidth, const signed char newHeight);
    template Rectangle<short> recenter(const Rectangle<short>& rectangle, const short newWidth, const short newHeight);
    template Rectangle<int> recenter(const Rectangle<int>& rectangle, const int newWidth, const int newHeight);
    template Rectangle<long> recenter(const Rectangle<long>& rectangle, const long newWidth, const long newHeight);
    template Rectangle<long long> recenter(const Rectangle<long long>& rectangle, const long long newWidth, const long long newHeight);
    template Rectangle<unsigned char> recenter(const Rectangle<unsigned char>& rectangle, const unsigned char newWidth, const unsigned char newHeight);
    template Rectangle<unsigned short> recenter(const Rectangle<unsigned short>& rectangle, const unsigned short newWidth, const unsigned short newHeight);
    template Rectangle<unsigned int> recenter(const Rectangle<unsigned int>& rectangle, const unsigned int newWidth, const unsigned int newHeight);
    template Rectangle<unsigned long> recenter(const Rectangle<unsigned long>& rectangle, const unsigned long newWidth, const unsigned long newHeight);
    template Rectangle<unsigned long long> recenter(const Rectangle<unsigned long long>& rectangle, const unsigned long long newWidth, const unsigned long long newHeight);
    template Rectangle<float> recenter(const Rectangle<float>& rectangle, const float newWidth, const float newHeight);
    template Rectangle<double> recenter(const Rectangle<double>& rectangle, const double newWidth, const double newHeight);
    template Rectangle<long double> recenter(const Rectangle<long double>& rectangle, const long double newWidth, const long double newHeight);
}
