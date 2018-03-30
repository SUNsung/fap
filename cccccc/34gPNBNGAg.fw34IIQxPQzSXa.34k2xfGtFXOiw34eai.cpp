
        
        namespace message_descriptor {
PyObject* NewMessageFieldsByName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByCamelcaseName(const Descriptor* descriptor);
PyObject* NewMessageFieldsByNumber(const Descriptor* descriptor);
PyObject* NewMessageFieldsSeq(const Descriptor* descriptor);
    }
    
    // Convert a Python object to a FileDescriptorProto pointer.
// Handles all kinds of Python errors, which are simply logged.
static bool GetFileDescriptorProto(PyObject* py_descriptor,
                                   FileDescriptorProto* output) {
  if (py_descriptor == NULL) {
    if (PyErr_ExceptionMatches(PyExc_KeyError)) {
      // Expected error: item was simply not found.
      PyErr_Clear();
    } else {
      GOOGLE_LOG(ERROR) << 'DescriptorDatabase method raised an error';
      PyErr_Print();
    }
    return false;
  }
  if (py_descriptor == Py_None) {
    return false;
  }
  const Descriptor* filedescriptor_descriptor =
      FileDescriptorProto::default_instance().GetDescriptor();
  CMessage* message = reinterpret_cast<CMessage*>(py_descriptor);
  if (PyObject_TypeCheck(py_descriptor, &CMessage_Type) &&
      message->message->GetDescriptor() == filedescriptor_descriptor) {
    // Fast path: Just use the pointer.
    FileDescriptorProto* file_proto =
        static_cast<FileDescriptorProto*>(message->message);
    *output = *file_proto;
    return true;
  } else {
    // Slow path: serialize the message. This allows to use databases which
    // use a different implementation of FileDescriptorProto.
    ScopedPyObjectPtr serialized_pb(
        PyObject_CallMethod(py_descriptor, 'SerializeToString', NULL));
    if (serialized_pb == NULL) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    char* str;
    Py_ssize_t len;
    if (PyBytes_AsStringAndSize(serialized_pb.get(), &str, &len) < 0) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      PyErr_Print();
      return false;
    }
    FileDescriptorProto file_proto;
    if (!file_proto.ParseFromArray(str, len)) {
      GOOGLE_LOG(ERROR)
          << 'DescriptorDatabase method did not return a FileDescriptorProto';
      return false;
    }
    *output = file_proto;
    return true;
  }
}
    
    #include <Python.h>
    
    
    {  ASSERT_TRUE(message.ParseFromString(data));
  EXPECT_TRUE(message.has_any_value());
  ASSERT_TRUE(message.any_value().UnpackTo(&any));
  ASSERT_TRUE(any.UnpackTo(&submessage));
  EXPECT_EQ(12345, submessage.int32_value());
}
    
      void Generate(io::Printer* printer);
    
      virtual void GenerateCloningCode(io::Printer* printer);
  virtual void GenerateFreezingCode(io::Printer* printer);
  virtual void GenerateMembers(io::Printer* printer);
  virtual void GenerateMergingCode(io::Printer* printer);
  virtual void GenerateParsingCode(io::Printer* printer);
  virtual void GenerateSerializationCode(io::Printer* printer);
  virtual void GenerateSerializedSizeCode(io::Printer* printer);
    
     private:
  const FileDescriptor* descriptor_;
  const Options *options_;
    
    // Author: kenton@google.com (Kenton Varda)
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
    void ShowErrorAndExit(DWORD ec, const wchar_t * func, int line)
{
	wchar_t * buffer;
	if (FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL, ec, 0, (LPWSTR)&buffer, 0, NULL) == 0)
	{
		buffer = L'Unknown error. FormatMessage failed.';
	}
    }
    
    /// Copies bytes from a source buffer sequence to a target buffer.
/**
 * @param target A modifiable buffer representing the memory region to which
 * the bytes will be copied.
 *
 * @param source A non-modifiable buffer sequence representing the memory
 * regions from which the bytes will be copied.
 *
 * @returns The number of bytes copied.
 *
 * @note The number of bytes copied is the lesser of:
 *
 * @li @c buffer_size(target)
 *
 * @li @c buffer_size(source)
 *
 * This function is implemented in terms of @c memcpy, and consequently it
 * cannot be used to copy between overlapping memory regions.
 */
template <typename ConstBufferSequence>
std::size_t buffer_copy(const mutable_buffer& target,
    const ConstBufferSequence& source)
{
  std::size_t total_bytes_copied = 0;
    }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
# include <boost/asio/detail/null_fenced_block.hpp>
#elif defined(__MACH__) && defined(__APPLE__)
# include <boost/asio/detail/macos_fenced_block.hpp>
#elif defined(__sun)
# include <boost/asio/detail/solaris_fenced_block.hpp>
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
# include <boost/asio/detail/gcc_arm_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
# include <boost/asio/detail/gcc_hppa_fenced_block.hpp>
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
# include <boost/asio/detail/gcc_x86_fenced_block.hpp>
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
# include <boost/asio/detail/gcc_sync_fenced_block.hpp>
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
# include <boost/asio/detail/win_fenced_block.hpp>
#else
# include <boost/asio/detail/null_fenced_block.hpp>
#endif
    
    // Calls to asio_handler_allocate and asio_handler_deallocate must be made from
// a namespace that does not contain any overloads of these functions. The
// boost_asio_handler_alloc_helpers namespace is defined here for that purpose.
namespace boost_asio_handler_alloc_helpers {
    }
    
    template <typename Handler, typename Arg1>
auto one_arg_handler_test(Handler h, Arg1* a1)
  -> decltype(
    sizeof(Handler(static_cast<const Handler&>(h))),
    ((h)(*a1)),
    char(0));
    
    void buffer_sequence_adapter_base::init_native_buffer(
    buffer_sequence_adapter_base::native_buffer_type& buf,
    const boost::asio::mutable_buffer& buffer)
{
  std::memset(&buf, 0, sizeof(native_buffer_type));
  Microsoft::WRL::ComPtr<IInspectable> insp
    = Microsoft::WRL::Make<winrt_buffer_impl>(buffer);
  buf = reinterpret_cast<Windows::Storage::Streams::IBuffer^>(insp.Get());
}
    
      // Write the pending event registration changes to the /dev/poll descriptor.
  std::size_t events_size = sizeof(::pollfd) * pending_event_changes_.size();
  if (events_size > 0)
  {
    errno = 0;
    int result = ::write(dev_poll_fd_,
        &pending_event_changes_[0], events_size);
    if (result != static_cast<int>(events_size))
    {
      boost::system::error_code ec = boost::system::error_code(
          errno, boost::asio::error::get_system_category());
      for (std::size_t i = 0; i < pending_event_changes_.size(); ++i)
      {
        int descriptor = pending_event_changes_[i].fd;
        for (int j = 0; j < max_ops; ++j)
          op_queue_[j].cancel_operations(descriptor, ops, ec);
      }
    }
    pending_event_changes_.clear();
    pending_event_change_index_.clear();
  }
    
    
    {  __android_log_print(ANDROID_LOG_INFO, 'FlatBufferSample',
      'FlatBuffer successfully created and verified.');
}

    
    
    {}  // namespace flatbuffers

    
    // Vector accessors.
// Note: if you try to access outside of bounds, you get a Null value back
// instead. Normally this would be an assert, but since this is 'dynamically
// typed' data, you may not want that (someone sends you a 2d vector and you
// wanted 3d).
// The Null converts seamlessly into a default value for any other type.
// TODO(wvo): Could introduce an #ifdef that makes this into an assert?
inline Reference Vector::operator[](size_t i) const {
  auto len = size();
  if (i >= len) return Reference(nullptr, 1, NullPackedType());
  auto packed_type = (data_ + len * byte_width_)[i];
  auto elem = data_ + i * byte_width_;
  return Reference(elem, byte_width_, packed_type);
}
    
    	// NewClient
	printer->Print(vars, 'func New$Service$Client(cc *$grpc$.ClientConn) $Service$Client {\n');
	printer->Indent();
	printer->Print(vars, 'return &$ServiceUnexported$Client{cc}');
	printer->Outdent();
	printer->Print('\n}\n\n');
    
    // Return the source of the generated service file.
grpc::string GenerateServiceSource(grpc_generator::File* file,
                                   const grpc_generator::Service* service,
                                   grpc_java_generator::Parameters* parameters);
    
    struct IterationVisitor {
  // These mark the scope of a table or struct.
  virtual void StartSequence() {}
  virtual void EndSequence() {}
  // Called for each field regardless of wether it is present or not.
  // If not present, val == nullptr. set_idx is the index of all set fields.
  virtual void Field(size_t /*field_idx*/, size_t /*set_idx*/,
                     ElementaryType /*type*/, bool /*is_vector*/,
                     const TypeTable * /*type_table*/, const char * /*name*/,
                     const uint8_t * /*val*/) {}
  // Called for a value that is actually present, after a field, or as part
  // of a vector.
  virtual void UType(uint8_t, const char *) {}
  virtual void Bool(bool) {}
  virtual void Char(int8_t, const char *) {}
  virtual void UChar(uint8_t, const char *) {}
  virtual void Short(int16_t, const char *) {}
  virtual void UShort(uint16_t, const char *) {}
  virtual void Int(int32_t, const char *) {}
  virtual void UInt(uint32_t, const char *) {}
  virtual void Long(int64_t) {}
  virtual void ULong(uint64_t) {}
  virtual void Float(float) {}
  virtual void Double(double) {}
  virtual void String(const String *) {}
  virtual void Unknown(const uint8_t *) {}  // From a future version.
  // These mark the scope of a vector.
  virtual void StartVector() {}
  virtual void EndVector() {}
  virtual void Element(size_t /*i*/, ElementaryType /*type*/,
                       const TypeTable * /*type_table*/,
                       const uint8_t * /*val*/) {}
  virtual ~IterationVisitor() {}
};
    
    bool DirExists(const char *name) {
  // clang-format off
  #ifdef _WIN32
    #define flatbuffers_stat _stat
    #define FLATBUFFERS_S_IFDIR _S_IFDIR
  #else
    #define flatbuffers_stat stat
    #define FLATBUFFERS_S_IFDIR S_IFDIR
  #endif
  // clang-format on
  struct flatbuffers_stat file_info;
  if (flatbuffers_stat(name, &file_info) != 0) return false;
  return (file_info.st_mode & FLATBUFFERS_S_IFDIR) != 0;
}