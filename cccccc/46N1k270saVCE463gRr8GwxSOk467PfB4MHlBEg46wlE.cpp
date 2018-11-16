
        
        namespace {
    }
    
    
    {}  // namespace api
    
    template <>
struct Converter<base::trace_event::TraceConfig> {
  static bool FromV8(v8::Isolate* isolate,
                     v8::Local<v8::Value> val,
                     base::trace_event::TraceConfig* out) {
    Dictionary options;
    if (!ConvertFromV8(isolate, val, &options))
      return false;
    std::string category_filter, trace_options;
    if (!options.Get('categoryFilter', &category_filter) ||
        !options.Get('traceOptions', &trace_options))
      return false;
    *out = base::trace_event::TraceConfig(category_filter, trace_options);
    return true;
  }
};
    
    
    {  return mate::CreateHandle(isolate, new PowerMonitor(isolate)).ToV8();
}
    
    #endif  // ATOM_BROWSER_API_ATOM_API_TRAY_H_

    
      // Make the convinient methods visible:
  // https://isocpp.org/wiki/faq/templates#nondependent-name-lookup-members
  v8::Isolate* isolate() const { return Wrappable<T>::isolate(); }
  v8::Local<v8::Object> GetWrapper() const {
    return Wrappable<T>::GetWrapper();
  }
    
    // Godot TO Bullet
extern void G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void INVERT_G_TO_B(Vector3 const &inVal, btVector3 &outVal);
extern void G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void INVERT_G_TO_B(Basis const &inVal, btMatrix3x3 &outVal);
extern void G_TO_B(Transform const &inVal, btTransform &outVal);
    
    ConstraintBullet::ConstraintBullet() :
		space(NULL),
		constraint(NULL),
		disabled_collisions_between_bodies(true) {}
    
    #ifndef JOINT_BULLET_H
#define JOINT_BULLET_H
    
    	ClassDB::register_virtual_class<CSGShape>();
	ClassDB::register_virtual_class<CSGPrimitive>();
	ClassDB::register_class<CSGMesh>();
	ClassDB::register_class<CSGSphere>();
	ClassDB::register_class<CSGBox>();
	ClassDB::register_class<CSGCylinder>();
	ClassDB::register_class<CSGTorus>();
	ClassDB::register_class<CSGPolygon>();
	ClassDB::register_class<CSGCombiner>();
    
    template<>
void SetDataGradToBlob<mshadow::cpu, double>(caffeMemoryTypes memType,
                            std::vector<::caffe::Blob<double>*>::iterator blob,
                            std::vector<TBlob>::const_iterator itr) {
  double *data_ptr = reinterpret_cast<double*>((*itr).dptr_);
  if (memType == Data)
    (*blob)->set_cpu_data(data_ptr);
  else
    MXCAFFEBLOB(*blob, double)->set_cpu_diff(data_ptr);
}
    
    template <typename Dtype>
class LayerRegistry {
 public:
  static ::caffe::Layer<Dtype> * CreateLayer(const ::caffe::LayerParameter& param) {
    ::caffe::shared_ptr< ::caffe::Layer<Dtype> > ptr =
      ::caffe::LayerRegistry<Dtype>::CreateLayer(param);
    // avoid caffe::layer destructor, which deletes the weights layer owns
    new ::caffe::shared_ptr< ::caffe::Layer<Dtype> >(ptr);
    return ptr.get();
  }
};
    
        CHECK_EQ(in_data.size(), param_.num_data);
    CHECK_EQ(out_data.size(), param_.num_out);
    
    template<>
Operator* CreateOp<cpu>(CaffeOpParam param, int dtype) {
  Operator *op = NULL;
  switch (dtype) {
  case mshadow::kFloat32:
    op = new CaffeOp<cpu, float>(param);
    break;
  case mshadow::kFloat64:
    op = new CaffeOp<cpu, double>(param);
    break;
  case mshadow::kFloat16:
    LOG(FATAL) << 'float16 layer is not supported by caffe';
    break;
  default:
    LOG(FATAL) << 'Unsupported type ' << dtype;
  }
  return op;
}
    
    namespace mxnet {
namespace engine {
/*!
 * \brief ThreadedEngine using global thread pool across all devices.
 * The policy of this Engine:
 *  - Execute Async operation immediately if pushed from Pusher.
 *  - Use a common thread pool for normal operations on all devices.
 *  - Use special thread pool for copy operations.
 */
class ThreadedEnginePooled : public ThreadedEngine {
 public:
  ThreadedEnginePooled() {
    this->Start();
  }
    }
    }
    }
    
    namespace mxnet {
namespace io {
/*! \return the parameter of default augmenter */
std::vector<dmlc::ParamFieldInfo> ListDefaultAugParams();
std::vector<dmlc::ParamFieldInfo> ListDefaultDetAugParams();
}  // namespace io
}  // namespace mxnet
#endif  // MXNET_IO_IMAGE_AUGMENTER_H_

    
    /*!
 * \brief tblob batch
 *
 * data are stored in tblob before going into NDArray
 */
struct TBlobBatch {
 public:
  /*! \brief unique id for instance, can be NULL, sometimes is useful */
  unsigned *inst_index;
  /*! \brief number of instance */
  mshadow::index_t batch_size;
  /*! \brief number of padding elements in this batch,
       this is used to indicate the last elements in the batch are only padded up to match the batch, and should be discarded */
  mshadow::index_t num_batch_padd;
  /*! \brief content of dense data */
  std::vector<TBlob> data;
  /*! \brief extra data to be fed to the network */
  std::string extra_data;
  /*! \brief constructor */
  TBlobBatch(void) {
    inst_index = NULL;
    batch_size = 0; num_batch_padd = 0;
  }
  /*! \brief destructor */
  ~TBlobBatch() {
    delete[] inst_index;
  }
};  // struct TBlobBatch
    
    #include <mxnet/io.h>
#include <mxnet/base.h>
#include <dmlc/logging.h>
#include <mshadow/tensor.h>
#include <utility>
#include <vector>
#include <string>
#include './inst_vector.h'
#include './image_iter_common.h'
    
    When `num_parts` and `part_index` are provided, the data is split into `num_parts` partitions,
and the iterator only reads the `part_index`-th partition. However, the partitions are not
guaranteed to be even.
    
      // Fill database
  for (int i = 0; i < kCount; i++) {
    ASSERT_OK(db_->Put(WriteOptions(), Key(i), value));
  }
  ASSERT_OK(dbi->TEST_CompactMemTable());
    
      MemTable* mem = mem_;
  MemTable* imm = imm_;
  Version* current = versions_->current();
  mem->Ref();
  if (imm != nullptr) imm->Ref();
  current->Ref();
    
    void InternalFilterPolicy::CreateFilter(const Slice* keys, int n,
                                        std::string* dst) const {
  // We rely on the fact that the code in table.cc does not mind us
  // adjusting keys[].
  Slice* mkey = const_cast<Slice*>(keys);
  for (int i = 0; i < n; i++) {
    mkey[i] = ExtractUserKey(keys[i]);
    // TODO(sanjay): Suppress dups?
  }
  user_policy_->CreateFilter(keys, n, dst);
}
    
    // Attempt to parse an internal key from 'internal_key'.  On success,
// stores the parsed data in '*result', and returns true.
//
// On error, returns false, leaves '*result' in an undefined state.
bool ParseInternalKey(const Slice& internal_key, ParsedInternalKey* result);
    
    // Called on every log record (each one of which is a WriteBatch)
// found in a kDescriptorFile.
static void VersionEditPrinter(uint64_t pos, Slice record, WritableFile* dst) {
  std::string r = '--- offset ';
  AppendNumberTo(&r, pos);
  r += '; ';
  VersionEdit edit;
  Status s = edit.DecodeFrom(record);
  if (!s.ok()) {
    r += s.ToString();
    r.push_back('\n');
  } else {
    r += edit.DebugString();
  }
  dst->Append(r);
}
    
    enum RecordType {
  // Zero is reserved for preallocated files
  kZeroType = 0,
    }
    
      // Return type, or one of the preceding special values
  unsigned int ReadPhysicalRecord(Slice* result);
    
        // Copy data.
    Iterator* iter = NewTableIterator(t.meta);
    int counter = 0;
    for (iter->SeekToFirst(); iter->Valid(); iter->Next()) {
      builder->Add(iter->key(), iter->value());
      counter++;
    }
    delete iter;
    
    Status LoggerConfigParserPlugin::update(const std::string& /* source */,
                                        const ParserConfig& config) {
  rj::Document& doc = data_.doc();
    }
    
    namespace osquery {
    }
    
    TEST_F(DecoratorsConfigParserPluginTests, test_decorators_run_load_top_level) {
  // Re-enable the decorators, then update the config.
  // The 'load' decorator set should run every time the config is updated.
  FLAGS_disable_decorators = false;
  // enable top level decorations for the test
  FLAGS_decorations_top_level = true;
  Config::get().update(config_data_);
    }
    
    TEST_F(QueryTests, test_query_name_updated) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('will_update_query', query);
  EXPECT_TRUE(cf.isNewQuery());
  EXPECT_TRUE(cf.isNewQuery());
    }
    
      // Test operator upper bounds.
  EXPECT_FALSE(cl2.matches(1000));
  EXPECT_FALSE(cl2.matches(1001));
    
    TEST_F(EventsTests, test_fire_event) {
  auto pub = std::make_shared<BasicEventPublisher>();
  pub->setName('BasicPublisher');
  auto status = EventFactory::registerEventPublisher(pub);
  ASSERT_TRUE(status.ok());
    }
    
      do {
    if (es->ntstatus == ntstatus) {
      break;
    }
    es++;
  } while ((uint32_t)es->ntstatus != 0xffffffff);
    
    TEST_F(FakeCanClientTest, SendMessage) {
  std::vector<CanFrame> frames;
  frames.resize(FRAME_LEN);
  for (int32_t i = 0; i < FRAME_LEN; ++i) {
    frames[i].id = 1 & 0x3FF;
    frames[i].len = 8;
    frames[i].data[7] = 1 % 256;
    for (int32_t j = 0; j < 7; ++j) {
      frames[i].data[j] = j;
    }
  }
    }
    
      int32_t ret = bcan_recv(_dev_handler, _recv_frames, *frame_num);
  // don't log timeout
  if (ret == RX_TIMEOUT) {
    *frame_num = 0;
    return ErrorCode::OK;
  }
  if (ret < 0) {
    int ret_rece_error = bcan_get_status(_dev_handler);
    AERROR << 'receive message failed, error code:' << ret
           << 'receive error:' << ret_rece_error;
    return ErrorCode::CAN_CLIENT_ERROR_RECV_FAILED;
  }
  *frame_num = ret;
    
      // CanFrame can_frame[1];
  std::vector<CanFrame> frames;
  int32_t num = 0;
    
    #include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
    
    template <typename SensorType>
ErrorCode MessageManager<SensorType>::GetSensorData(
    SensorType *const sensor_data) {
  if (sensor_data == nullptr) {
    AERROR << 'Failed to get sensor_data due to nullptr.';
    return ErrorCode::CANBUS_ERROR;
  }
  std::lock_guard<std::mutex> lock(sensor_data_mutex_);
  sensor_data->CopyFrom(sensor_data_);
  return ErrorCode::OK;
}
    
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
    
    void Byte::set_value_high_4_bits(const uint8_t value) {
  set_value(value, 4, 4);
}
    
      /**
   * @brief Transform an integer with the size of 4 bytes to its hexadecimal
   *        represented by a string.
   * @param value The target integer to transform.
   * @return Hexadecimal representing the target integer.
   */
  static std::string byte_to_hex(const uint32_t value);
    
    TEST(ByteTest, SetValue) {
  unsigned char byte_value = 0x1A;
  Byte value(&byte_value);
  value.set_value(0x06, 3, 3);
  EXPECT_EQ(0x32, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 8);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 0, 10);
  EXPECT_EQ(0x06, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x06, 1, 7);
  EXPECT_EQ(0x0C, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, 1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
  value.set_value(0x1A);
  value.set_value(0x07, -1, 1);
  EXPECT_EQ(0x1A, value.get_byte());
}
    
      /**
  * @brief module stop function
  */
  void Stop() override;