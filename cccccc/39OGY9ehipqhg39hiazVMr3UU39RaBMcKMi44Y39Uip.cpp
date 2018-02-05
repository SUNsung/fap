
        
        void SyntaxASTMap::dumpSyntaxMap() const {
  for (const auto &SyntaxAndSemaNode : SyntaxMap) {
    auto SyntaxNode = SyntaxAndSemaNode.getFirst();
    auto SemanticNode = SyntaxAndSemaNode.getSecond();
    }
    }
    
    
    {  // The length of the transcoded string in UTF-16 code points.
  Length = toPtr - &buffer[0];
  return Length;
}

    
      friend class llvm::PointerLikeTypeTraits<ConcreteDeclRef>;
    
      /// Treat all warnings as errors
  bool WarningsAsErrors = false;
    
    #endif

    
    // Find the file which defines an extension extending the given message type
// with the given field number.
// Python DescriptorDatabases are not required to implement this method.
bool PyDescriptorDatabase::FindFileContainingExtension(
    const string& containing_type, int field_number,
    FileDescriptorProto* output) {
  ScopedPyObjectPtr py_method(
      PyObject_GetAttrString(py_database_, 'FindFileContainingExtension'));
  if (py_method == NULL) {
    // This method is not implemented, returns without error.
    PyErr_Clear();
    return false;
  }
  ScopedPyObjectPtr py_descriptor(
      PyObject_CallFunction(py_method.get(), 's#i', containing_type.c_str(),
                            containing_type.size(), field_number));
  return GetFileDescriptorProto(py_descriptor.get(), output);
}
    
    TEST(AnyTest, TestIs) {
  protobuf_unittest::TestAny submessage;
  submessage.set_int32_value(12345);
  google::protobuf::Any any;
  any.PackFrom(submessage);
  ASSERT_TRUE(any.ParseFromString(any.SerializeAsString()));
  EXPECT_TRUE(any.Is<protobuf_unittest::TestAny>());
  EXPECT_FALSE(any.Is<google::protobuf::Any>());
    }
    
      void WriteIntroduction(io::Printer* printer);
  void WriteDescriptor(io::Printer* printer);
  void WriteGeneratedCodeInfo(const Descriptor* descriptor,
                              io::Printer* printer,
                              bool last);
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
    #include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/compiler/plugin.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
    
      void SendEcho() {
    EchoRequest send_request;
    EchoResponse recv_response;
    ClientContext cli_ctx;
    cli_ctx.set_wait_for_ready(true);
    send_request.set_message('Hello');
    Status recv_status = stub_->Echo(&cli_ctx, send_request, &recv_response);
    EXPECT_EQ(send_request.message(), recv_response.message());
    EXPECT_TRUE(recv_status.ok());
  }
    
    
    {  // Client request should succeed.
  SendRpc(1);
}
    
    // In some distros, gflags is in the namespace google, and in some others,
// in gflags. This hack is enabling us to find both.
namespace google {}
namespace gflags {}
using namespace google;
using namespace gflags;
    
    /* Returns true if the |stream| was successfully started and is now done
 * (succeeded, canceled, or failed).
 * Returns false if the |stream| stream is not yet started or is in progress.
 */
GRPC_SUPPORT_EXPORT
bool bidirectional_stream_is_done(bidirectional_stream* stream);
    
    static int zlib_body(z_stream* zs, grpc_slice_buffer* input,
                     grpc_slice_buffer* output,
                     int (*flate)(z_stream* zs, int flush)) {
  int r;
  int flush;
  size_t i;
  grpc_slice outbuf = GRPC_SLICE_MALLOC(OUTPUT_BLOCK_SIZE);
  const uInt uint_max = ~(uInt)0;
    }
    
    int grpc_byte_buffer_reader_next(grpc_byte_buffer_reader* reader,
                                 grpc_slice* slice) {
  switch (reader->buffer_in->type) {
    case GRPC_BB_RAW: {
      grpc_slice_buffer* slice_buffer;
      slice_buffer = &reader->buffer_out->data.raw.slice_buffer;
      if (reader->current.index < slice_buffer->count) {
        *slice = grpc_slice_ref_internal(
            slice_buffer->slices[reader->current.index]);
        reader->current.index += 1;
        return 1;
      }
      break;
    }
  }
  return 0;
}
    
    static void test_compression_enable_disable_algorithm(void) {
  grpc_compression_options options;
  grpc_compression_algorithm algorithm;
    }
    
      /// Perform an IO control command on the acceptor.
  /**
   * This function is used to execute an IO control command on the acceptor.
   *
   * @param command The IO control command to be performed on the acceptor.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @sa IoControlCommand @n
   * boost::asio::socket_base::non_blocking_io
   *
   * @par Example
   * Getting the number of bytes ready to read:
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::acceptor::non_blocking_io command(true);
   * socket.io_control(command);
   * @endcode
   */
  template <typename IoControlCommand>
  void io_control(IoControlCommand& command)
  {
    boost::system::error_code ec;
    this->get_service().io_control(this->get_implementation(), command, ec);
    boost::asio::detail::throw_error(ec, 'io_control');
  }
    
    #ifndef BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
#define BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
    
    #include <boost/asio/detail/config.hpp>
    
      static bool do_perform(reactor_op* base)
  {
    descriptor_write_op_base* o(static_cast<descriptor_write_op_base*>(base));
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    template <typename Time_Traits>
std::size_t epoll_reactor::cancel_timer(timer_queue<Time_Traits>& queue,
    typename timer_queue<Time_Traits>::per_timer_data& timer,
    std::size_t max_cancelled)
{
  mutex::scoped_lock lock(mutex_);
  op_queue<operation> ops;
  std::size_t n = queue.cancel_timer(timer, ops, max_cancelled);
  lock.unlock();
  io_service_.post_deferred_completions(ops);
  return n;
}
    
    #include <folly/experimental/hazptr/debug.h>
    
      enum class State {
    UNINITIALIZED,
    INITIALIZED,
    PENDING,
    COMPLETED,
    CANCELED,
  };
    
    #include <folly/Exception.h>
    
    /**
 * Get the path to the current executable.
 *
 * Note that this is not reliable and not recommended in general; it may not be
 * implemented on your platform (in which case it will throw), the executable
 * might have been moved or replaced while running, and applications comprising
 * of multiple executables should use some form of configuration system to
 * find the other executables rather than relying on relative paths from one
 * to another.
 *
 * So this should only be used for tests, logging, or other innocuous purposes.
 */
path executable_path();
    
    namespace {
// We cannot use EXPECT_EQ(a, b) due to a bug in gtest 1.6.0: gtest wants
// to print path as a container even though it has operator<< defined,
// and as path is a container of path, this leads to infinite
// recursion.
void expectPathEq(const path& a, const path& b) {
  EXPECT_TRUE(a == b) << 'expected path=' << a << '\nactual path=' << b;
}
} // namespace
    
      void writeMessage(folly::StringPiece buffer, uint32_t flags = 0) override;
  void writeMessage(std::string&& buffer, uint32_t flags = 0) override;
    
    
    {  std::string path_;
  FileWriterFactory fileWriterFactory_;
};
    
    /**
 * FileHandlerFactory is a LogHandlerFactory that constructs log handlers
 * that write to a file.
 *
 * Note that FileHandlerFactory allows opening and appending to arbitrary files
 * based on the handler options.  This may make it unsafe to use
 * FileHandlerFactory in some contexts: for instance, a setuid binary should
 * generally avoid registering the FileHandlerFactory if they allow log
 * handlers to be configured via command line parameters, since otherwise this
 * may allow non-root users to append to files that they otherwise would not
 * have write permissions for.
 */
class FileHandlerFactory : public LogHandlerFactory {
 public:
  StringPiece getType() const override {
    return 'file';
  }
    }
    
    void Node::setMarginPercent(int edge, double margin)
{
    YGNodeStyleSetMarginPercent(m_node, static_cast<YGEdge>(edge), margin);
}
    
    #include <nbind/api.h>
#include <nbind/BindDefiner.h>
    
    TEST(YogaTest, computed_layout_margin) {
  const YGNodeRef root = YGNodeNew();
  YGNodeStyleSetWidth(root, 100);
  YGNodeStyleSetHeight(root, 100);
  YGNodeStyleSetMarginPercent(root, YGEdgeStart, 10);
    }
    
      YGNodeCalculateLayout(root, 100, 100, YGDirectionLTR);
    
      ASSERT_FLOAT_EQ(45, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetHeight(root_child0));
    
      ASSERT_FLOAT_EQ(0, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(0, YGNodeLayoutGetHeight(root_child0));
    
      const YGNodeRef root_child2 = YGNodeNewWithConfig(config);
  YGNodeStyleSetHeight(root_child2, 10);
  YGNodeInsertChild(root, root_child2, 2);
  YGNodeCalculateLayout(root, YGUndefined, YGUndefined, YGDirectionLTR);
    
      ASSERT_FLOAT_EQ(10, YGNodeLayoutGetLeft(root_child0));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetTop(root_child0));
  ASSERT_FLOAT_EQ(80, YGNodeLayoutGetWidth(root_child0));
  ASSERT_FLOAT_EQ(10, YGNodeLayoutGetHeight(root_child0));