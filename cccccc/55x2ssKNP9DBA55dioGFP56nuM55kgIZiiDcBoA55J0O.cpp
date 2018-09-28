
        
        namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    io::ZeroCopyOutputStream* GeneratorContext::OpenForInsert(
    const string& filename, const string& insertion_point) {
  GOOGLE_LOG(FATAL) << 'This GeneratorContext does not support insertion.';
  return NULL;  // make compiler happy
}
    
    TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    #include <google/protobuf/stubs/common.h>
namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    const OneofGeneratorInfo* Context::GetOneofGeneratorInfo(
    const OneofDescriptor* oneof) const {
  const OneofGeneratorInfo* result =
      FindOrNull(oneof_generator_info_map_, oneof);
  if (result == NULL) {
    GOOGLE_LOG(FATAL) << 'Can not find OneofGeneratorInfo for oneof: '
               << oneof->name();
  }
  return result;
}
    
      // If line ends in an opening brace, make it '{ ... }' so it looks nice.
  if (!result.empty() && result[result.size() - 1] == '{') {
    result.append(' ... }');
  }
    
    // ===================================================================
    
    void ImmutableMapFieldGenerator::
GenerateMembers(io::Printer* printer) const {
  printer->Print(
      variables_,
      'private static final class $capitalized_name$DefaultEntryHolder {\n'
      '  static final com.google.protobuf.MapEntry<\n'
      '      $type_parameters$> defaultEntry =\n'
      '          com.google.protobuf.MapEntry\n'
      '          .<$type_parameters$>newDefaultInstance(\n'
      '              $descriptor$\n'
      '              $key_wire_type$,\n'
      '              $key_default_value$,\n'
      '              $value_wire_type$,\n'
      '              $value_default_value$);\n'
      '}\n');
  printer->Print(
      variables_,
      'private com.google.protobuf.MapField<\n'
      '    $type_parameters$> $name$_;\n'
      'private com.google.protobuf.MapField<$type_parameters$>\n'
      'internalGet$capitalized_name$() {\n'
      '  if ($name$_ == null) {\n'
      '    return com.google.protobuf.MapField.emptyMapField(\n'
      '        $map_field_parameter$);\n'
      '  }\n'
      '  return $name$_;\n'
      '}\n');
  if (GetJavaType(ValueField(descriptor_)) == JAVATYPE_ENUM) {
    printer->Print(
        variables_,
        'private static final\n'
        'com.google.protobuf.Internal.MapAdapter.Converter<\n'
        '    java.lang.Integer, $value_enum_type$> $name$ValueConverter =\n'
        '        com.google.protobuf.Internal.MapAdapter.newEnumConverter(\n'
        '            $value_enum_type$.internalGetValueMap(),\n'
        '            $unrecognized_value$);\n');
    printer->Print(
        variables_,
        'private static final java.util.Map<$boxed_key_type$, '
        '$value_enum_type$>\n'
        'internalGetAdapted$capitalized_name$Map(\n'
        '    java.util.Map<$boxed_key_type$, $boxed_value_type$> map) {\n'
        '  return new com.google.protobuf.Internal.MapAdapter<\n'
        '      $boxed_key_type$, $value_enum_type$, java.lang.Integer>(\n'
        '          map, $name$ValueConverter);\n'
        '}\n');
  }
  GenerateMapGetters(printer);
}
    
      vars['default_name'] = GPBGenericValueFieldName(descriptor_);
  if (descriptor_->is_repeated()) {
    vars['default'] = 'nil';
  } else {
    vars['default'] = DefaultValue(descriptor_);
  }
  string type = GetCapitalizedType(descriptor_);
  vars['extension_type'] = string('GPBDataType') + type;
    
    // Converts a streamable value to an std::string.  A NULL pointer is
// converted to '(null)'.  When the input value is a ::string,
// ::std::string, ::wstring, or ::std::wstring object, each NUL
// character in it is replaced with '\\0'.
template <typename T>
std::string StreamableToString(const T& streamable) {
  return (Message() << streamable).GetString();
}
    
    namespace testing {
    }
    
    // Unary predicate assertion macros.
#define EXPECT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_NONFATAL_FAILURE_)
#define EXPECT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_NONFATAL_FAILURE_)
#define ASSERT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_FATAL_FAILURE_)
#define ASSERT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_FATAL_FAILURE_)
    
      // Non-static methods
    
      bool operator==(T* p) const { return value_ == p; }
  bool operator!=(T* p) const { return value_ != p; }
  template <typename U>
  bool operator==(linked_ptr<U> const& ptr) const {
    return value_ == ptr.get();
  }
  template <typename U>
  bool operator!=(linked_ptr<U> const& ptr) const {
    return value_ != ptr.get();
  }
    
      // Returns true iff the given string ends with the given suffix, ignoring
  // case. Any string is considered to end with an empty suffix.
  static bool EndsWithCaseInsensitive(
      const std::string& str, const std::string& suffix);
    
      template <GTEST_9_TYPENAMES_(U)>
  tuple& operator=(const GTEST_9_TUPLE_(U)& t) {
    return CopyFrom(t);
  }
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
        // Nesterov's accelerated SGDLearnerBase descent. 
    class LearnerNesterov : public LearnerMomentumSGD
    {
    public:
    }
    
        template <typename V1ElemType>
    TensorView<V1ElemType>* NDArrayView::GetWritableTensorView()
    {
        if (IsReadOnly())
            InvalidArgument('NDArrayView::GetWritableTensorView: Cannot get a writable TensorView from a read-only NDArrayView.');
    }
    
    // Rand based on Mersenne Twister.
// We use our own distribution in order to match baselines between different operating systems,
// because uniform_distribution is not guaranteed to provide the same numbers on different platforms.
// TODO: Switching to Boost would eliminate this problem.
static inline size_t RandMT(const size_t begin, const size_t end, std::mt19937_64& rng)
{
    const size_t randomNumber = rng();
    return begin + randomNumber % (end - begin);
}
    
    /*! \brief small eps gap for minimum split decision. */
const bst_float kRtEps = 1e-6f;
    
    #include <dmlc/registry.h>
#include <xgboost/base.h>
#include <xgboost/data.h>
#include <functional>
#include <string>
#include <utility>
#include <vector>
#include '../../src/gbm/gblinear_model.h'
#include '../../src/common/host_device_vector.h'
    
      /**
   * \fn  virtual void Predictor::PredictInstance( const SparsePage::Inst&
   * inst, std::vector<bst_float>* out_preds, const gbm::GBTreeModel& model,
   * unsigned ntree_limit = 0, unsigned root_index = 0) = 0;
   *
   * \brief online prediction function, predict score for one instance at a time
   * NOTE: use the batch prediction interface if possible, batch prediction is
   * usually more efficient than online prediction This function is NOT
   * threadsafe, make sure you only call from one thread.
   *
   * \param           inst        The instance to predict.
   * \param [in,out]  out_preds   The output preds.
   * \param           model       The model to predict from
   * \param           ntree_limit (Optional) The ntree limit.
   * \param           root_index  (Optional) Zero-based index of the root.
   */
    
    /*!
 * \brief Registry entry for tree updater.
 */
struct TreeUpdaterReg
    : public dmlc::FunctionRegEntryBase<TreeUpdaterReg,
                                        std::function<TreeUpdater* ()> > {
};
    
    
    {    for (size_t i = 0; i < batch.size; ++i) {
      offset_[i + 1] = (i + 1) * num_col_;
      Row<IndexType> row = batch[i];
      for (uint32_t j = 0; j < num_col_; ++j) {
        dense_index_[i * num_col_ + j] = j;
      }
      for (unsigned k = 0; k < row.length; ++k) {
        uint32_t index = row.get_index(k);
        CHECK_LT(index, num_col_)
            << 'Featuere index larger than num_col';
        dense_value_[i * num_col_ + index]  = row.get_value(k);
      }
    }
    out_ = batch;
    out_.index = dmlc::BeginPtr(dense_index_);
    out_.value = dmlc::BeginPtr(dense_value_);
    out_.offset = dmlc::BeginPtr(offset_);
    return true;
  }
    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi_) {
    fi_.open(fname);
    if (fi_.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator() {
    fi_.close();
  }
    }
    
    #ifndef XGBOOST_COMMON_IO_H_
#define XGBOOST_COMMON_IO_H_
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
        // Check for WSI support
    VkBool32 res;
    vkGetPhysicalDeviceSurfaceSupportKHR(g_PhysicalDevice, g_QueueFamily, wd->Surface, &res);
    if (res != VK_TRUE)
    {
        fprintf(stderr, 'Error no WSI support on physical device 0\n');
        exit(-1);
    }
    
    //---- Avoid multiple STB libraries implementations, or redefine path/filenames to prioritize another version
// By default the embedded implementations are declared static and not available outside of imgui cpp files.
//#define IMGUI_STB_TRUETYPE_FILENAME   'my_folder/stb_truetype.h'
//#define IMGUI_STB_RECT_PACK_FILENAME  'my_folder/stb_rect_pack.h'
//#define IMGUI_DISABLE_STB_TRUETYPE_IMPLEMENTATION
//#define IMGUI_DISABLE_STB_RECT_PACK_IMPLEMENTATION
    
    static int InputTextCallback(ImGuiInputTextCallbackData* data)
{
    InputTextCallback_UserData* user_data = (InputTextCallback_UserData*)data->UserData;
    if (data->EventFlag == ImGuiInputTextFlags_CallbackResize)
    {
        // Resize string callback
        std::string* str = user_data->Str;
        IM_ASSERT(data->Buf == str->c_str());
        str->resize(data->BufTextLen);
        data->Buf = (char*)str->c_str();
    }
    else if (user_data->ChainCallback)
    {
        // Forward to user callback, if any
        data->UserData = user_data->ChainCallbackUserData;
        return user_data->ChainCallback(data);
    }
    return 0;
}
    
    
    {    printf('DestroyContext()\n');
    ImGui::DestroyContext();
    return 0;
}

    
    int main(int, char**)
{
    // Create application window
    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T('ImGui Example'), NULL };
    RegisterClassEx(&wc);
    HWND hwnd = CreateWindow(_T('ImGui Example'), _T('Dear ImGui DirectX11 Example'), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);
    }
    
        if (g_pd3dDevice->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, g_frameContext[0].CommandAllocator, NULL, IID_PPV_ARGS(&g_pd3dCommandList)) != S_OK ||
        g_pd3dCommandList->Close() != S_OK)
        return E_FAIL;
    
        // Backup the DX9 state
    IDirect3DStateBlock9* d3d9_state_block = NULL;
    if (g_pd3dDevice->CreateStateBlock(D3DSBT_ALL, &d3d9_state_block) < 0)
        return;
    
    
    {    return true;
}
    
      const InternalKeyComparator internal_comparator_;
  std::vector<std::unique_ptr<IntTblPropCollectorFactory>>
      int_tbl_prop_collector_factories_;
    
      // push all files to the highest level L2. This
  // means that all keys should pass at least once
  // via the compaction filter
  cfilter_count = 0;
  dbfull()->TEST_CompactRange(0, nullptr, nullptr, handles_[1]);
  ASSERT_EQ(cfilter_count, 100000);
  cfilter_count = 0;
  dbfull()->TEST_CompactRange(1, nullptr, nullptr, handles_[1]);
  ASSERT_EQ(cfilter_count, 100000);
  ASSERT_EQ(NumTableFilesAtLevel(0, 1), 0);
  ASSERT_EQ(NumTableFilesAtLevel(1, 1), 0);
  ASSERT_NE(NumTableFilesAtLevel(2, 1), 0);
    
      RateLimiter* low_pri_rate_limiter() { return low_pri_rate_limiter_.get(); }
    
    class TimeSetEnv : public EnvWrapper {
 public:
  explicit TimeSetEnv() : EnvWrapper(nullptr) {}
  uint64_t now_micros_ = 6666;
  virtual uint64_t NowNanos() override { return now_micros_ * std::milli::den; }
};
    
      // Map from filenames to MemFile objects, representing a simple file system.
  typedef std::map<std::string, MemFile*> FileSystem;
  port::Mutex mutex_;
  FileSystem file_map_;  // Protected by mutex_.
    
      // Sync + corrupt => no change
  ASSERT_OK(writable_file->Fsync());
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    void BENCHFUN(pushBack)(int iters, int initialSize) {
  BenchmarkSuspender braces;
  auto const obj = randomObject<VECTOR::value_type>();
  VECTOR v(initialSize, obj);
  braces.dismissing([&]() {
    FOR_EACH_RANGE (i, 0, iters) { v.push_back(obj); }
  });
}
    
    BENCHMARK_RELATIVE(format_long_string_unsafe, iters) {
  BenchmarkSuspender suspender;
  auto const& longString = getLongString();
  while (iters--) {
    fbstring out;
    suspender.dismissing([&] { format(&out, longString); });
  }
}
    
    
    {  FLAGS_minloglevel = prev;
}
    
    
    {void Executor::keepAliveRelease() {
  LOG(FATAL) << __func__ << '() should not be called for folly::Executor types '
             << 'which do not override keepAliveAcquire()';
}
} // namespace folly

    
      tv = to<struct timeval>(seconds(987654321012LL));
  EXPECT_EQ(987654321012, tv.tv_sec);
  EXPECT_EQ(0, tv.tv_usec);
    
    #pragma once
    
        // Check if we need to push a batch from local -> global
    auto batchcount = EXTERNAL_OFFSET / 2;
    if (get_local_count(newlocal) > batchcount) {
      CountedDetail::inc_shared_count(newlocal.get(), batchcount);
      putOwnedBase(newlocal.get(), batchcount, order);
    }
    
        std::shared_ptr<DHTNode> localNode;
    
    
    {} // namespace aria2

    
      std::shared_ptr<DHTNode> newNode_;
    
      uint32_t temp32;
  uint64_t temp64;
  // time
  if (version == 2) {
    READ_CHECK(fp, &temp32, sizeof(temp32));
    serializedTime_.setTimeFromEpoch(ntohl(temp32));
    // 4bytes reserved
    readBytes(fp, buf, buf.size(), 4);
  }
  else {
    READ_CHECK(fp, &temp64, sizeof(temp64));
    serializedTime_.setTimeFromEpoch(ntoh64(temp64));
  }
    
        DHTRoutingTableDeserializer deserializer(family);
    const std::string& dhtFile = e->getOption()->get(
        family == AF_INET ? PREF_DHT_FILE_PATH : PREF_DHT_FILE_PATH6);
    try {
      deserializer.deserialize(dhtFile);
      localNode = deserializer.getLocalNode();
    }
    catch (RecoverableException& e) {
      A2_LOG_ERROR_EX(
          fmt('Exception caught while loading DHT routing table from %s',
              dhtFile.c_str()),
          e);
    }
    if (!localNode) {
      localNode = std::make_shared<DHTNode>();
    }
    
    #include <memory>
    
    
    {} // namespace aria2

    
    class DHTTokenTracker {
private:
  static const size_t SECRET_SIZE = 4;
    }
    
    
    {  void print() {
    AINFO << 'conf: ' << conf.ShortDebugString()
          << ', total send: ' << send_cnt + send_err_cnt << '/'
          << FLAGS_agent_mutual_send_frames << ', send_ok: ' << send_cnt
          << ' , send_err_cnt: ' << send_err_cnt
          << ', send_lost_cnt: ' << send_lost_cnt << ', recv_cnt: ' << recv_cnt
          << ', send_time: ' << send_time << ', recv_time: ' << recv_time;
  }
};
    
    bool FakeCanClient::Init(const CANCardParameter &param) { return true; }
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
    namespace apollo {
namespace drivers {
namespace canbus {
    }
    }
    }
    
    // (SUM(input))^0xFF
template <typename SensorType>
uint8_t ProtocolData<SensorType>::CalculateCheckSum(const uint8_t *input,
                                                    const uint32_t length) {
  return std::accumulate(input, input + length, 0) ^ 0xFF;
}
    
      sensor_message_manager_.reset(new canbus::MessageManager<SensorType>());
  if (sensor_message_manager_ == nullptr) {
    return OnError('Failed to create message manager.');
  }
  AINFO << 'Sensor message manager is successfully created.';