
        
        static int kImplVersion = -1;  // -1 means 'Unspecified by compiler flags'.
    
      /* Iteration over fields.  The order is undefined. */
  class field_iterator
      : public std::iterator<std::forward_iterator_tag, FieldDef*> {
   public:
    explicit field_iterator(MessageDef* md);
    static field_iterator end(MessageDef* md);
    }
    
    
    {  for (int i = 0; i < parts.size(); i++) {
    string::size_type equals_pos = parts[i].find_first_of('=');
    std::pair<string, string> value;
    if (equals_pos == string::npos) {
      value.first = parts[i];
      value.second = '';
    } else {
      value.first = parts[i].substr(0, equals_pos);
      value.second = parts[i].substr(equals_pos + 1);
    }
    output->push_back(value);
  }
}
    
      GenerateFile(file, &printer, &cli_options);
    
    FieldGeneratorBase* CreateFieldGenerator(const FieldDescriptor* descriptor,
                                         int fieldOrdinal,
                                         const Options* options) {
  switch (descriptor->type()) {
    case FieldDescriptor::TYPE_GROUP:
    case FieldDescriptor::TYPE_MESSAGE:
      if (descriptor->is_repeated()) {
        if (descriptor->is_map()) {
          return new MapFieldGenerator(descriptor, fieldOrdinal, options);
        } else {
          return new RepeatedMessageFieldGenerator(descriptor, fieldOrdinal, options);
        }
      } else {
        if (IsWrapperType(descriptor)) {
          if (descriptor->containing_oneof()) {
            return new WrapperOneofFieldGenerator(descriptor, fieldOrdinal, options);
          } else {
            return new WrapperFieldGenerator(descriptor, fieldOrdinal, options);
          }
        } else {
          if (descriptor->containing_oneof()) {
            return new MessageOneofFieldGenerator(descriptor, fieldOrdinal, options);
          } else {
            return new MessageFieldGenerator(descriptor, fieldOrdinal, options);
          }
        }
      }
    case FieldDescriptor::TYPE_ENUM:
      if (descriptor->is_repeated()) {
        return new RepeatedEnumFieldGenerator(descriptor, fieldOrdinal, options);
      } else {
        if (descriptor->containing_oneof()) {
          return new EnumOneofFieldGenerator(descriptor, fieldOrdinal, options);
        } else {
          return new EnumFieldGenerator(descriptor, fieldOrdinal, options);
        }
      }
    default:
      if (descriptor->is_repeated()) {
        return new RepeatedPrimitiveFieldGenerator(descriptor, fieldOrdinal, options);
      } else {
        if (descriptor->containing_oneof()) {
          return new PrimitiveOneofFieldGenerator(descriptor, fieldOrdinal, options);
        } else {
          return new PrimitiveFieldGenerator(descriptor, fieldOrdinal, options);
        }
      }
  }
}
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <sstream>
    
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
    
    
    {  // We declare (but don't implement) this to prevent the compiler
  // from implementing the assignment operator.
  void operator=(const Message&);
};
    
     private:
  std::vector<TestPartResult> array_;
    
    // Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT4.
// Don't use this in your code.
#define GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, #v4, v1, v2, v3, v4), \
                on_failure)
    
      // Returns a copy of the FilePath with the case-insensitive extension removed.
  // Example: FilePath('dir/file.exe').RemoveExtension('EXE') returns
  // FilePath('dir/file'). If a case-insensitive extension is not
  // found, returns a copy of the original FilePath.
  FilePath RemoveExtension(const char* extension) const;
    
      // Leave whatever circle we're part of.  Returns true if we were the
  // last member of the circle.  Once this is done, you can join() another.
  bool depart()
      GTEST_LOCK_EXCLUDED_(g_linked_ptr_mutex) {
    MutexLock lock(&g_linked_ptr_mutex);
    }
    
      // Compares two C strings, ignoring case.  Returns true iff they
  // have the same content.
  //
  // Unlike strcasecmp(), this function can handle NULL argument(s).
  // A NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool CaseInsensitiveCStringEquals(const char* lhs,
                                           const char* rhs);
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13>
struct Types13 {
  typedef T1 Head;
  typedef Types12<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> Tail;
};
    
    #include 'sample1.h'
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
      // Set should work when the input pointer is the same as the one
  // already in the MyString object.
  s.Set(s.c_string());
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
    
      // D'tor.  Clears the queue.
  ~Queue() { Clear(); }
    
    
    {/*!
 * \brief define compatible keywords in g++
 *  Used to support g++-4.6 and g++4.7
 */
#if DMLC_USE_CXX11 && defined(__GNUC__) && !defined(__clang_version__)
#if __GNUC__ == 4 && __GNUC_MINOR__ < 8
#define override
#define final
#endif
#endif
}  // namespace xgboost
#endif  // XGBOOST_BASE_H_

    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
    namespace xgboost {
namespace obj {
    }
    }
    
    // array to help compression of decompression.
template<typename DType>
class CompressArray {
 public:
  // the data content.
  std::vector<DType> data;
  // Decompression helper
  // number of chunks
  inline int num_chunk() const {
    CHECK_GT(raw_chunks_.size(), 1);
    return static_cast<int>(raw_chunks_.size() - 1);
  }
  // raw bytes
  inline size_t RawBytes() const {
    return raw_chunks_.back() * sizeof(DType);
  }
  // encoded bytes
  inline size_t EncodedBytes() const {
    return encoded_chunks_.back() +
        (encoded_chunks_.size() + raw_chunks_.size()) * sizeof(bst_uint);
  }
  // load the array from file.
  inline void Read(dmlc::SeekStream* fi);
  // run decode on chunk_id
  inline void Decompress(int chunk_id);
  // Compression helper
  // initialize the compression chunks
  inline void InitCompressChunks(const std::vector<bst_uint>& chunk_ptr);
  // initialize the compression chunks
  inline void InitCompressChunks(size_t chunk_size, size_t max_nchunk);
  // run decode on chunk_id, level = -1 means default.
  inline void Compress(int chunk_id, bool use_hc);
  // save the output buffer into file.
  inline void Write(dmlc::Stream* fo);
    }
    
      void Write(const void* dptr, size_t size) override {
    LOG(FATAL) << 'Not implemented';
  }
    
    /*!
 * \brief perform numerically safe logsum
 * \param x left input operand
 * \param y right input operand
 * \return  log(exp(x) + exp(y))
 */
inline float LogSum(float x, float y) {
  if (x < y) {
    return y + std::log(std::exp(x - y) + 1.0f);
  } else {
    return x + std::log(std::exp(y - x) + 1.0f);
  }
}
    
            switch (cas_common_order(success_order, failure_order))
        {
        case memory_order_relaxed:
            old_val = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_COMPARE_EXCHANGE8_RELAXED(&storage, desired, previous));
            break;
        case memory_order_consume:
        case memory_order_acquire:
            old_val = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_COMPARE_EXCHANGE8_ACQUIRE(&storage, desired, previous));
            break;
        case memory_order_release:
            old_val = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_COMPARE_EXCHANGE8_RELEASE(&storage, desired, previous));
            break;
        case memory_order_acq_rel:
        case memory_order_seq_cst:
        default:
            old_val = static_cast< storage_type >(BOOST_ATOMIC_INTERLOCKED_COMPARE_EXCHANGE8(&storage, desired, previous));
            break;
        }
        expected = old_val;
    
    
    {    BOOST_FORCEINLINE bool operator! () const BOOST_NOEXCEPT
    {
        return data[0] == 0 && data[1] == 0;
    }
};
    
    DHTResponseMessage::DHTResponseMessage(
    const std::shared_ptr<DHTNode>& localNode,
    const std::shared_ptr<DHTNode>& remoteNode,
    const std::string& transactionID)
    : DHTAbstractMessage(localNode, remoteNode, transactionID)
{
}
    
    #include 'DHTNode.h'
#include 'DlAbortEx.h'
#include 'DHTConstants.h'
#include 'bittorrent_helper.h'
#include 'Logger.h'
#include 'a2netcompat.h'
#include 'util.h'
#include 'TimeA2.h'
#include 'fmt.h'
#include 'File.h'
#include 'LogFactory.h'
#include 'BufferedFile.h'
    
    namespace aria2 {
    }
    
      virtual std::shared_ptr<DHTTask>
  createPeerLookupTask(const std::shared_ptr<DownloadContext>& ctx,
                       uint16_t tcpPort,
                       const std::shared_ptr<PeerStorage>& peerStorage) = 0;
    
      void setRoutingTable(DHTRoutingTable* routingTable);
    
    
    {  virtual void addImmediateTask(const std::shared_ptr<DHTTask>& task) = 0;
};
    
    namespace aria2 {
    }
    
    std::vector<DNSCache::AddrEntry>::iterator
DNSCache::CacheEntry::find(const std::string& addr)
{
  for (auto i = addrEntries_.begin(), eoi = addrEntries_.end(); i != eoi; ++i) {
    if ((*i).addr_ == addr) {
      return i;
    }
  }
  return addrEntries_.end();
}
    
    #include 'modules/drivers/canbus/can_client/can_client_factory.h'
    
      /**
   * @brief Receive messages
   * @param frames The messages to receive.
   * @param frame_num The amount of messages to receive.
   * @return The status of the receiving action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Receive(std::vector<CanFrame> *const frames,
                                    int32_t *const frame_num) override;
    
    #include 'modules/common/log.h'
#include 'modules/common/macro.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/can_client.h'
#include 'modules/drivers/canbus/can_comm/message_manager.h'
#include 'modules/drivers/canbus/common/canbus_consts.h'
    
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
    
    using apollo::common::ErrorCode;
    
    TEST(ByteTest, ByteToString) {
  unsigned char value = 0x34;
  EXPECT_EQ('34', Byte::byte_to_hex(value));
  EXPECT_EQ('00110100', Byte::byte_to_binary(value));
  uint32_t int_value = 0xE13A;
  EXPECT_EQ('E13A', Byte::byte_to_hex(int_value));
}