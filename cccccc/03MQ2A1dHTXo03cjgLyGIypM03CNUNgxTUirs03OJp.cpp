
        
        Usage:
\code
  using namespace Json;
  void writeToStdout(StreamWriter::Factory const& factory, Value const& value) {
    std::unique_ptr<StreamWriter> const writer(
      factory.newStreamWriter());
    writer->write(value, &std::cout);
    std::cout << std::endl;  // add lf and flush
  }
\endcode
*/
class JSON_API StreamWriter {
protected:
  std::ostream* sout_;  // not owned; will not delete
public:
  StreamWriter();
  virtual ~StreamWriter();
  /** Write Value into document as configured in sub-class.
      Do not take ownership of sout, but maintain a reference during function.
      \pre sout != NULL
      \return zero on success (For now, we always return zero, so check the stream instead.)
      \throw std::exception possibly, depending on configuration
   */
  virtual int write(Value const& root, std::ostream* sout) = 0;
    }
    
    #include <Python.h>
    
    TEST(AnyTest, TestPackAndUnpackAny) {
  // We can pack a Any message inside another Any message.
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  protobuf_unittest::TestAny message;
  message.mutable_any_value()->PackFrom(any);
    }
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/csharp/csharp_source_generator_base.h>
    
    #include <string>
    
    const Options* SourceGeneratorBase::options() {
  return this->options_;
}
    
    #include <google/protobuf/compiler/code_generator.h>
    
    namespace protobuf {
namespace compiler {
namespace java {
    }
    }
    }
    
    
    {    inline Status FileClose(int fd)
    {
        int ret = 0;
#ifdef _WIN32
        ret = _close(fd);
#else
        ret = close(fd);
#endif
        if (0 != ret)
        {
            return Status(SYSTEM, errno);
        }
        return Status::OK();
    }
}
    
        // Taken from ONNX
    REGISTER_OPERATOR_SCHEMA(Exp)
        .Description('Calculates the exponential of the given input tensor, element-wise. '
            'This operation can be done in an in-place fashion too, by providing the same '
            'input and output blobs.')
        .Input('input', 'input tensor', 'T')
        .Output('output', 'The exponential of the input tensor computed element-wise', 'T')
        .TypeConstraint('T', { 'tensor(float16)', 'tensor(float)', 'tensor(double)' },
            'Constrain input and output types to float tensors.');
    
        REGISTER_OPERATOR_SCHEMA(RNN)
        .Description(R'DOC(
            Computes an one-layer simple RNN. This operator is usually supported
            via some custom implementation such as CuDNN.
    
            try
        {
            // feature reader (we reinstantiate it for each block, i.e. we reopen the file actually)
            // if this is the first feature read ever, we explicitly open the first file to get the information such as feature dimension
            htkfeatreader reader;
    }
    
    // Describes exposed stream - a single stream of htk features.
void HTKDeserializer::InitializeStreams(const wstring& featureName, bool definesMbSize)
{
    StreamInformation stream;
    stream.m_id = 0;
    stream.m_name = featureName;
    stream.m_sampleLayout = NDShape({ m_dimension });
    stream.m_elementType = m_elementType;
    stream.m_storageFormat = StorageFormat::Dense;
    stream.m_definesMbSize = definesMbSize;
    m_streams.push_back(stream);
}
    
        auto& index = m_indices.back();
    // Build auxiliary for GetSequenceByKey.
    for (const auto& chunk : index->Chunks())
    {
        // Preparing chunk info that will be exposed to the outside.
        auto chunkId = static_cast<ChunkIdType>(m_chunks.size());
        for (uint32_t i = 0; i < chunk.NumberOfSequences(); ++i)
        {
            const auto& sequence = chunk[i];
            auto sequenceIndex = i;
            m_keyToChunkLocation.push_back(std::make_tuple(sequence.m_key, chunkId, sequenceIndex));
        }
    }
    
      static void validate(const boost::array<Elem, 2>& buffer_sequence)
  {
    boost::asio::buffer_cast<const void*>(buffer_sequence[0]);
    boost::asio::buffer_cast<const void*>(buffer_sequence[1]);
  }
    
      // Return a pointer to the beginning of the unread data.
  mutable_buffer data()
  {
    return boost::asio::buffer(buffer_) + begin_offset_;
  }
    
    
    {    // The next element in the stack.
    context* next_;
  };
    
    #endif // BOOST_ASIO_DETAIL_DATE_TIME_FWD_HPP

    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      // Constructor for a half fenced block.
  explicit gcc_arm_fenced_block(half_t)
  {
  }
    
    template <typename Handler>
inline void* allocate(std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  return ::operator new(s);
#else
  using boost::asio::asio_handler_allocate;
  return asio_handler_allocate(s, boost::asio::detail::addressof(h));
#endif
}
    
    template <typename Function, typename Context>
inline void invoke(Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
    #define BOOST_ASIO_COMPOSED_CONNECT_HANDLER_CHECK( \
    handler_type, handler, iter_type) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code, iter_type)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::two_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0), \
          static_cast<const iter_type*>(0))) == 1, \
      'ComposedConnectHandler type requirements not met') \
  \
  typedef boost::asio::detail::handler_type_requirements< \
      sizeof( \
        boost::asio::detail::argbyv( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>())) + \
      sizeof( \
        boost::asio::detail::lvref< \
          asio_true_handler_type>()( \
            boost::asio::detail::lvref<const boost::system::error_code>(), \
            boost::asio::detail::lvref<const iter_type>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
      // Get an iterator for the beginning of the map.
  const_iterator begin() const
  {
    return values_.begin();
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    std::size_t sync_read(int d, state_type state, buf* bufs,
    std::size_t count, bool all_empty, boost::system::error_code& ec)
{
  if (d == -1)
  {
    ec = boost::asio::error::bad_descriptor;
    return 0;
  }
    }
    
    // Header is checksum (4 bytes), length (2 bytes), type (1 byte).
static const int kHeaderSize = 4 + 2 + 1;
    
      void CheckInitialOffsetRecord(uint64_t initial_offset,
                                int expected_record_offset) {
    WriteInitialOffsetLog();
    reading_ = true;
    source_.contents_ = Slice(dest_.contents_);
    Reader* offset_reader = new Reader(&source_, &report_, true/*checksum*/,
                                       initial_offset);
    }
    
    #ifndef STORAGE_LEVELDB_DB_SNAPSHOT_H_
#define STORAGE_LEVELDB_DB_SNAPSHOT_H_
    
    class Issue178 { };
    
    Status Footer::DecodeFrom(Slice* input) {
  const char* magic_ptr = input->data() + kEncodedLength - 8;
  const uint32_t magic_lo = DecodeFixed32(magic_ptr);
  const uint32_t magic_hi = DecodeFixed32(magic_ptr + 4);
  const uint64_t magic = ((static_cast<uint64_t>(magic_hi) << 32) |
                          (static_cast<uint64_t>(magic_lo)));
  if (magic != kTableMagicNumber) {
    return Status::Corruption('not an sstable (bad magic number)');
  }
    }
    
    TEST(HASH, SignedUnsignedIssue) {
  const unsigned char data1[1] = {0x62};
  const unsigned char data2[2] = {0xc3, 0x97};
  const unsigned char data3[3] = {0xe2, 0x99, 0xa5};
  const unsigned char data4[4] = {0xe1, 0x80, 0xb9, 0x32};
  const unsigned char data5[48] = {
    0x01, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x18,
    0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
  };
    }
    
    
    {    // Compute (product % M) using the fact that ((x << 31) % M) == x.
    seed_ = static_cast<uint32_t>((product >> 31) + (product & M));
    // The first reduction may overflow by 1 bit, so we may need to
    // repeat.  mod == M is not possible; using > allows the faster
    // sign-bit-based test.
    if (seed_ > M) {
      seed_ -= M;
    }
    return seed_;
  }
  // Returns a uniformly distributed value in the range [0..n-1]
  // REQUIRES: n > 0
  uint32_t Uniform(int n) { return Next() % n; }
    
    static std::string IKey(const std::string& user_key,
                        uint64_t seq,
                        ValueType vt) {
  std::string encoded;
  AppendInternalKey(&encoded, ParsedInternalKey(user_key, seq, vt));
  return encoded;
}
    
    
    {  // No copying allowed
  Writer(const Writer&);
  void operator=(const Writer&);
};
    
      virtual bool Valid() const { return iter_.Valid(); }
  virtual void Seek(const Slice& k) { iter_.Seek(EncodeKey(&tmp_, k)); }
  virtual void SeekToFirst() { iter_.SeekToFirst(); }
  virtual void SeekToLast() { iter_.SeekToLast(); }
  virtual void Next() { iter_.Next(); }
  virtual void Prev() { iter_.Prev(); }
  virtual Slice key() const { return GetLengthPrefixedSlice(iter_.key()); }
  virtual Slice value() const {
    Slice key_slice = GetLengthPrefixedSlice(iter_.key());
    return GetLengthPrefixedSlice(key_slice.data() + key_slice.size());
  }
    
    enum NDK_CRASH_PARSER_STATE {
    EXPECTS_CRASH_DUMP,
    EXPECTS_CRASH_DUMP_HEADER,
    EXPECTS_CRASH_DUMP_CONTENT,
    EXPECTS_CRASH_DUMP_END,
};
    
    #include <vector>
#include <string>
    
    
    {        return NULL;
    }
    
    Test_Spy_Sample::~Test_Spy_Sample()
{
    SPY_DETACH_CLASS();
}
    
      private:
    int __TestFun1(int i);
    
    //
//  testspy_spy.cpp
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
    #define DEFINE_HAS_MEMBER(member_name) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <int> struct tester;\
        template <typename U> static yes_type test(tester<sizeof(&U::member_name)>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
    
#endif /* SCOP_JENV_H_ */
