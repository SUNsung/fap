
        
        #ifndef CONTENT_NW_SRC_API_APP_APP_H_
#define CONTENT_NW_SRC_API_APP_APP_H_
    
    void Base::CallSync(const std::string& method,
                    const base::ListValue& arguments,
                    base::ListValue* result) {
  NOTREACHED() << 'Uncatched callAsync in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    v8::Handle<v8::Value> AllocateId(int routing_id) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  v8::EscapableHandleScope scope(isolate);
    }
    
    namespace ui {
    }
    
    bool NwAppSetProxyConfigFunction::RunNWSync(base::ListValue* response, std::string* error) {
  net::ProxyConfigWithAnnotation config;
  std::unique_ptr<nwapi::nw__app::SetProxyConfig::Params> params(
      nwapi::nw__app::SetProxyConfig::Params::Create(*args_));
  EXTENSION_FUNCTION_VALIDATE(params.get());
    }
    
     protected:
  ~NwAppQuitFunction() override;
    
    class NwClipboardReadAvailableTypesFunction : public NWSyncExtensionFunction {
 public:
  NwClipboardReadAvailableTypesFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    bool NwObjCallObjectMethodFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    uint64_t GetOutgoingDataSize(const grpc_call_final_info* final_info) {
  return final_info->stats.transport_stream_stats.outgoing.data_bytes;
}
    
    
    {}  // namespace grpc

    
      enum FieldIdValue {
    kServerElapsedTimeField = 0,
  };
    
    // Force InitProtoReflectionServerBuilderPlugin() to be called at static
// initialization time.
struct StaticProtoReflectionPluginInitializer {
  StaticProtoReflectionPluginInitializer() {
    InitProtoReflectionServerBuilderPlugin();
  }
} static_proto_reflection_plugin_initializer;
    
        // Finish and check for builder errors
    s = builder->Finish();
    if (s.ok()) {
      meta->file_size = builder->FileSize();
      assert(meta->file_size > 0);
    }
    delete builder;
    
      // Release mutex while we're actually doing the compaction work
  mutex_.Unlock();
    
    struct MTThread {
  MTState* state;
  int id;
};
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    TEST(FormatTest, InternalKeyShortSeparator) {
  // When user keys are same
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 99, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 101, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeValue)));
  ASSERT_EQ(IKey('foo', 100, kTypeValue),
            Shorten(IKey('foo', 100, kTypeValue),
                    IKey('foo', 100, kTypeDeletion)));
    }
    
    #include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
      fname = LogFileName('foo', 192);
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(192, number);
  ASSERT_EQ(kLogFile, type);
    
    // Header is checksum (4 bytes), length (2 bytes), type (1 byte).
static const int kHeaderSize = 4 + 2 + 1;
    
      std::vector<uint64_t> GetFiles(FileType t) {
    std::vector<std::string> filenames;
    ASSERT_OK(env_->GetChildren(dbname_, &filenames));
    std::vector<uint64_t> result;
    for (size_t i = 0; i < filenames.size(); i++) {
      uint64_t number;
      FileType type;
      if (ParseFileName(filenames[i], &number, &type) && type == t) {
        result.push_back(number);
      }
    }
    return result;
  }
    
    
    {REGISTER_INTERNAL(PrometheusMetricsConfigParserPlugin,
                  'config_parser',
                  'prometheus_targets');
}

    
      fpack.platform_ = 'bad_value';
  EXPECT_FALSE(fpack.checkPlatform());
    
    void Initializer::platformSetup() {
  // Initialize the COM libraries utilized by Windows WMI calls.
  auto ret = ::CoInitializeEx(0, COINIT_MULTITHREADED);
  if (ret != S_OK) {
    ::CoUninitialize();
  }
}
    
    static const int kCrToGreenTable[256] = {
  5990656,  5943854,  5897052,  5850250,  5803448,  5756646,  5709844,  5663042,
  5616240,  5569438,  5522636,  5475834,  5429032,  5382230,  5335428,  5288626,
  5241824,  5195022,  5148220,  5101418,  5054616,  5007814,  4961012,  4914210,
  4867408,  4820606,  4773804,  4727002,  4680200,  4633398,  4586596,  4539794,
  4492992,  4446190,  4399388,  4352586,  4305784,  4258982,  4212180,  4165378,
  4118576,  4071774,  4024972,  3978170,  3931368,  3884566,  3837764,  3790962,
  3744160,  3697358,  3650556,  3603754,  3556952,  3510150,  3463348,  3416546,
  3369744,  3322942,  3276140,  3229338,  3182536,  3135734,  3088932,  3042130,
  2995328,  2948526,  2901724,  2854922,  2808120,  2761318,  2714516,  2667714,
  2620912,  2574110,  2527308,  2480506,  2433704,  2386902,  2340100,  2293298,
  2246496,  2199694,  2152892,  2106090,  2059288,  2012486,  1965684,  1918882,
  1872080,  1825278,  1778476,  1731674,  1684872,  1638070,  1591268,  1544466,
  1497664,  1450862,  1404060,  1357258,  1310456,  1263654,  1216852,  1170050,
  1123248,  1076446,  1029644,   982842,   936040,   889238,   842436,   795634,
   748832,   702030,   655228,   608426,   561624,   514822,   468020,   421218,
   374416,   327614,   280812,   234010,   187208,   140406,    93604,    46802,
        0,   -46802,   -93604,  -140406,  -187208,  -234010,  -280812,  -327614,
  -374416,  -421218,  -468020,  -514822,  -561624,  -608426,  -655228,  -702030,
  -748832,  -795634,  -842436,  -889238,  -936040,  -982842, -1029644, -1076446,
 -1123248, -1170050, -1216852, -1263654, -1310456, -1357258, -1404060, -1450862,
 -1497664, -1544466, -1591268, -1638070, -1684872, -1731674, -1778476, -1825278,
 -1872080, -1918882, -1965684, -2012486, -2059288, -2106090, -2152892, -2199694,
 -2246496, -2293298, -2340100, -2386902, -2433704, -2480506, -2527308, -2574110,
 -2620912, -2667714, -2714516, -2761318, -2808120, -2854922, -2901724, -2948526,
 -2995328, -3042130, -3088932, -3135734, -3182536, -3229338, -3276140, -3322942,
 -3369744, -3416546, -3463348, -3510150, -3556952, -3603754, -3650556, -3697358,
 -3744160, -3790962, -3837764, -3884566, -3931368, -3978170, -4024972, -4071774,
 -4118576, -4165378, -4212180, -4258982, -4305784, -4352586, -4399388, -4446190,
 -4492992, -4539794, -4586596, -4633398, -4680200, -4727002, -4773804, -4820606,
 -4867408, -4914210, -4961012, -5007814, -5054616, -5101418, -5148220, -5195022,
 -5241824, -5288626, -5335428, -5382230, -5429032, -5475834, -5522636, -5569438,
 -5616240, -5663042, -5709844, -5756646, -5803448, -5850250, -5897052, -5943854,
};
    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    #endif  // GUETZLI_ENTROPY_ENCODE_H_

    
    #include 'guetzli/jpeg_data.h'
    
    
    {  tmp0 = in[7 * stride];
  tmp1 = kIDCTMatrix[ 7] * tmp0;
  tmp2 = kIDCTMatrix[15] * tmp0;
  tmp3 = kIDCTMatrix[23] * tmp0;
  tmp4 = kIDCTMatrix[31] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
}
    
      // Writes the given byte to the output, writes an extra zero if byte is 0xff.
  void EmitByte(int byte) {
    if (pos < len) {
      data[pos++] = byte;
    } else {
      overflow = true;
    }
    if (byte == 0xff) {
      EmitByte(0);
    }
  }
    
    bool JPEGData::Is444() const {
  return (components.size() == 3 &&
          max_h_samp_factor == 1 &&
          max_v_samp_factor == 1 &&
          components[0].h_samp_factor == 1 &&
          components[0].v_samp_factor == 1 &&
          components[1].h_samp_factor == 1 &&
          components[1].v_samp_factor == 1 &&
          components[2].h_samp_factor == 1 &&
          components[2].v_samp_factor == 1);
}
    
    // Output callback function with associated data.
struct JPEGOutput {
  JPEGOutput(JPEGOutputHook cb, void* data) : cb(cb), data(data) {}
  bool Write(const uint8_t* buf, size_t len) const {
    return (len == 0) || (cb(data, buf, len) == len);
  }
 private:
  JPEGOutputHook cb;
  void* data;
};
    
    #include 'modules/drivers/canbus/can_client/hermes_can/hermes_can_client.h'
#include 'gtest/gtest.h'
    
    /**
 * @class MessageManager
 *
 * @brief message manager manages protocols. It supports parse and can get
 * protocol data by message id.
 */
template <typename SensorType>
class MessageManager {
 public:
  /*
  * @brief constructor function
  */
  MessageManager() {}
  /*
   * @brief destructor function
   */
  virtual ~MessageManager() = default;
    }
    
    template <typename SensorType>
void ProtocolData<SensorType>::Parse(const uint8_t *bytes, int32_t length,
                                     SensorType *sensor_data) const {}
    
    #ifndef MODULES_DRIVERS_CANBUS_SENSOR_GFLAGS_H_
#define MODULES_DRIVERS_CANBUS_SENSOR_GFLAGS_H_
    
        static BOOST_FORCEINLINE void store(storage_type volatile& storage, storage_type v, memory_order) BOOST_NOEXCEPT
    {
        uint64_t const* p_value = (uint64_t const*)&v;
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %[dest], %%rax\n\t'
            'movq 8+%[dest], %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b %[dest]\n\t'
            'jne 1b\n\t'
            : [dest] '=o' (storage)
            : 'b' (p_value[0]), 'c' (p_value[1])
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'rax', 'rdx', 'memory'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq 0(%[dest]), %%rax\n\t'
            'movq 8(%[dest]), %%rdx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg16b 0(%[dest])\n\t'
            'jne 1b\n\t'
            :
            : 'b' (p_value[0]), 'c' (p_value[1]), [dest] 'r' (&storage)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'rax', 'rdx', 'memory'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
    }
    
        struct aligned
    {
        BOOST_ALIGNMENT(2) type value;
    }