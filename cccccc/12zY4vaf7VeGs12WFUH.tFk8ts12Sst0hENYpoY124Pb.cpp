
        
        static const char* kModuleName = '_api_implementation';
static const char kModuleDocstring[] =
'_api_implementation is a module that exposes compile-time constants that\n'
'determine the default API implementation to use for Python proto2.\n'
'\n'
'It complements api_implementation.py by setting defaults using compile-time\n'
'constants defined in C, such that one can set defaults at compilation\n'
'(e.g. with blaze flag --copt=-DPYTHON_PROTO2_CPP_IMPL_V2).';
    
    const Message* GetCProtoInsidePyProto(PyObject* msg) {
  return GetCProtoInsidePyProtoPtr(msg);
}
Message* MutableCProtoInsidePyProto(PyObject* msg) {
  return MutableCProtoInsidePyProtoPtr(msg);
}
    
      auto* message2_on_arena =
      Arena::CreateMessage<protobuf_unittest::TestAllTypes>(&arena);
    
    void WriteEnumDocComment(io::Printer* printer, const EnumDescriptor* enumDescriptor) {
    WriteDocCommentBody(printer, enumDescriptor);
}
void WriteEnumValueDocComment(io::Printer* printer, const EnumValueDescriptor* value) {
    WriteDocCommentBody(printer, value);
}
    
    // Returns the Pascal-cased last part of the proto file. For example,
// input of 'google/protobuf/foo_bar.proto' would result in 'FooBar'.
std::string GetFileNameBase(const FileDescriptor* descriptor) {
    std::string proto_file = descriptor->name();
    int lastslash = proto_file.find_last_of('/');
    std::string base = proto_file.substr(lastslash + 1);
    return UnderscoresToPascalCase(StripDotProto(base));
}
    
    // Generator options (used by csharp_generator.cc):
struct Options {
  Options() :
      file_extension('.cs'),
      base_namespace(''),
      base_namespace_specified(false),
      internal_access(false) {
  }
  // Extension of the generated file. Defaults to '.cs'
  string file_extension;
  // Base namespace to use to create directory hierarchy. Defaults to ''.
  // This option allows the simple creation of a conventional C# file layout,
  // where directories are created relative to a project-specific base
  // namespace. For example, in a project with a base namespace of PetShop, a
  // proto of user.proto with a C# namespace of PetShop.Model.Shared would
  // generate Model/Shared/User.cs underneath the specified --csharp_out
  // directory.
  //
  // If no base namespace is specified, all files are generated in the
  // --csharp_out directory, with no subdirectories created automatically.
  string base_namespace;
  // Whether the base namespace has been explicitly specified by the user.
  // This is required as the base namespace can be explicitly set to the empty
  // string, meaning 'create a full directory hierarchy, starting from the first
  // segment of the namespace.'
  bool base_namespace_specified;
  // Whether the generated classes should have accessibility level of 'internal'.
  // Defaults to false that generates 'public' classes.
  bool internal_access;
};
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    
    { protected:
  /*! \brief internal base score of the model */
  bst_float base_score_;
  /*! \brief objective function */
  std::unique_ptr<ObjFunction> obj_;
  /*! \brief The gradient booster used by the model*/
  std::unique_ptr<GradientBooster> gbm_;
  /*! \brief The evaluation metrics used to evaluate the model. */
  std::vector<std::unique_ptr<Metric> > metrics_;
};
    
    template<typename IndexType>
class DensifyParser : public dmlc::Parser<IndexType> {
 public:
  DensifyParser(dmlc::Parser<IndexType>* parser, uint32_t num_col)
      : parser_(parser), num_col_(num_col) {
  }
    }
    
    // Store 8 gradient pairs given vectors containing gradient and Hessian
inline void StoreGpair(xgboost::GradientPair* dst, const Float8& grad,
                       const Float8& hess) {
  float* ptr = reinterpret_cast<float*>(dst);
  __m256 gpair_low = _mm256_unpacklo_ps(grad.x, hess.x);
  __m256 gpair_high = _mm256_unpackhi_ps(grad.x, hess.x);
  _mm256_storeu_ps(ptr, _mm256_permute2f128_ps(gpair_low, gpair_high, 0x20));
  _mm256_storeu_ps(ptr + 8,
                   _mm256_permute2f128_ps(gpair_low, gpair_high, 0x31));
}
}  // namespace avx
#else
namespace avx {
/**
 * \struct  Float8
 *
 * \brief Fallback implementation not using AVX.
 */
    
    // comparator functions for sorting pairs in descending order
inline static bool CmpFirst(const std::pair<float, unsigned> &a,
                            const std::pair<float, unsigned> &b) {
  return a.first > b.first;
}
inline static bool CmpSecond(const std::pair<float, unsigned> &a,
                             const std::pair<float, unsigned> &b) {
  return a.second > b.second;
}
    
    #include <xgboost/data.h>
#include <algorithm>
#include <vector>
    
    #ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS
#endif
#ifndef GFLAGS
#include <cstdio>
int main() {
  fprintf(stderr, 'Please install gflags to run rocksdb tools\n');
  return 1;
}
#else
    
      std::atomic<int> total_stopped_;
  std::atomic<int> total_delayed_;
  std::atomic<int> total_compaction_pressure_;
  uint64_t bytes_left_;
  uint64_t last_refill_time_;
  // write rate set when initialization or by `DBImpl::SetDBOptions`
  uint64_t max_delayed_write_rate_;
  // current write rate
  uint64_t delayed_write_rate_;
    
    Status PosixMmapFile::Close() {
  Status s;
  size_t unused = limit_ - dst_;
    }
    
      // close db
  for (auto handle : handles) {
    delete handle;
  }
  delete db;
    
      // Do some reads and writes to key 'y'
  s = txn->GetForUpdate(read_options, 'y', &value);
  txn->Put('y', 'y');
    
    void DHTRoutingTableDeserializer::deserialize(const std::string& filename)
{
  A2_LOG_INFO(fmt('Loading DHT routing table from %s.', filename.c_str()));
  BufferedFile fp(filename.c_str(), BufferedFile::READ);
  if (!fp) {
    throw DL_ABORT_EX(
        fmt('Failed to load DHT routing table from %s', filename.c_str()));
  }
  char header[8];
  memset(header, 0, sizeof(header));
  // magic
  header[0] = 0xa1u;
  header[1] = 0xa2u;
  // format ID
  header[2] = 0x02u;
  // version
  header[6] = 0;
  header[7] = 0x03u;
    }
    
    
    {} // namespace aria2
    
    void DHTTaskFactoryImpl::setTaskQueue(DHTTaskQueue* taskQueue)
{
  taskQueue_ = taskQueue;
}
    
      std::chrono::seconds timeout_;
    
      virtual void executeTask() CXX11_OVERRIDE;
    
    template< bool Signed >
struct operations< 1u, Signed > :
    public msvc_x86_operations< typename make_storage_type< 1u, Signed >::type, operations< 1u, Signed > >
{
    typedef msvc_x86_operations< typename make_storage_type< 1u, Signed >::type, operations< 1u, Signed > > base_type;
    typedef typename base_type::storage_type storage_type;
    typedef typename make_storage_type< 1u, Signed >::aligned aligned_storage_type;
    }
    
      /**
   * @brief Constructor
   */
  CanFrame() : id(0), len(0), timestamp{0} {
    std::memset(data, 0, sizeof(data));
  }
    
      void WaitForFinish() {
    if (thread_send_ != nullptr && thread_send_->joinable()) {
      thread_send_->join();
      thread_send_.reset();
      AINFO << 'Send thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
    if (thread_recv_ != nullptr && thread_recv_->joinable()) {
      thread_recv_->join();
      thread_recv_.reset();
      AINFO << 'Recv thread stopped. conf:'
            << param_ptr_->conf.ShortDebugString();
    }
  }
    
    
    { private:
  NTCAN_HANDLE dev_handler_;
  CANCardParameter::CANChannelId port_;
  CMSG send_frames_[MAX_CAN_SEND_FRAME_LEN];
  CMSG recv_frames_[MAX_CAN_RECV_FRAME_LEN];
};
    
      /**
   * @brief Get the error string.
   * @param status The status to get the error string.
   */
  std::string GetErrorString(const int32_t status) override;
    
    using Clock = common::time::Clock;
using micros = common::time::micros;
using apollo::common::ErrorCode;
    
    TEST(SocketCanClientRawTest, simple_test) {
  CANCardParameter param;
  param.set_brand(CANCardParameter::SOCKET_CAN_RAW);
  param.set_channel_id(CANCardParameter::CHANNEL_ID_ZERO);
    }
    
    #include 'modules/drivers/canbus/can_comm/message_manager.h'
    
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
    
    #include 'modules/drivers/canbus/common/byte.h'
    
    #ifndef MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
#define MODULES_DRIVERS_CANBUS_COMMON_CANBUS_CONSTS_H_
    
    // data file
DECLARE_string(sensor_conf_file);