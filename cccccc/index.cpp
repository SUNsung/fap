
        
        void OurReader::skipCommentTokens(Token& token) {
  if (features_.allowComments_) {
    do {
      readToken(token);
    } while (token.type_ == tokenComment);
  } else {
    readToken(token);
  }
}
    
    namespace google {
namespace protobuf {
namespace python {
    }
    }
    }
    
    PyObject* NewMessageEnumsByName(const Descriptor* descriptor);
PyObject* NewMessageEnumsSeq(const Descriptor* descriptor);
PyObject* NewMessageEnumValuesByName(const Descriptor* descriptor);
    
    
    {
    {
    {}  // namespace cpp
}  // namespace compiler
}  // namespace protobuf
    
    
    
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
    
    RepeatedPrimitiveFieldGenerator::RepeatedPrimitiveFieldGenerator(
    const FieldDescriptor* descriptor, int fieldOrdinal, const Options *options)
    : FieldGeneratorBase(descriptor, fieldOrdinal, options) {
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
      // implements CodeGenerator ----------------------------------------
  bool Generate(const FileDescriptor* file,
                const string& parameter,
                GeneratorContext* context,
                string* error) const;
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
    #endif

    
    Variant HHVM_FUNCTION(xhprof_sample_disable) {
  return s_profiler_factory->stop();
}
    
    #include 'hphp/runtime/vm/jit/abi.h'
#include 'hphp/runtime/vm/jit/arg-group.h'
#include 'hphp/runtime/vm/jit/fixup.h'
#include 'hphp/runtime/vm/jit/phys-reg-saver.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
    
      if (!stream) {
    if (unreadable_info(ms, sb.st_mode, inname) == -1)
      goto done;
    rv = 0;
    goto done;
  }
    
    #if defined(__powerpc64__)
    
      /// Determine the amount of data that may be read without blocking.
  std::size_t in_avail(boost::system::error_code& ec)
  {
    ec = boost::system::error_code();
    return storage_.size();
  }
    
    template <typename Stream>
class buffered_read_stream;
    
    #include <boost/asio/detail/pop_options.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    // With C++0x we can use a combination of enhanced SFINAE and static_assert to
// generate better template error messages. As this technique is not yet widely
// portable, we'll only enable it for tested compilers.
#if !defined(BOOST_ASIO_DISABLE_HANDLER_TYPE_REQUIREMENTS_ASSERT)
# if defined(__GNUC__)
#  if ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 5)) || (__GNUC__ > 4)
#   if defined(__GXX_EXPERIMENTAL_CXX0X__)
#    define BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS_ASSERT 1
#   endif // defined(__GXX_EXPERIMENTAL_CXX0X__)
#  endif // ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 5)) || (__GNUC__ > 4)
# endif // defined(__GNUC__)
# if defined(BOOST_ASIO_MSVC)
#  if (_MSC_VER >= 1600)
#   define BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS_ASSERT 1
#  endif // (_MSC_VER >= 1600)
# endif // defined(BOOST_ASIO_MSVC)
# if defined(__clang__)
#  if __has_feature(__cxx_static_assert__)
#   define BOOST_ASIO_ENABLE_HANDLER_TYPE_REQUIREMENTS_ASSERT 1
#  endif // __has_feature(cxx_static_assert)
# endif // defined(__clang__)
#endif // !defined(BOOST_ASIO_DISABLE_HANDLER_TYPE_REQUIREMENTS)
    
    #endif // BOOST_ASIO_DETAIL_IMPL_DESCRIPTOR_OPS_IPP

    
    void dev_poll_reactor::move_descriptor(socket_type,
    dev_poll_reactor::per_descriptor_data&,
    dev_poll_reactor::per_descriptor_data&)
{
}
    
    #include <folly/experimental/hazptr/debug.h>
    
    /**
 * Return the mount point for the requested huge page size.
 * 0 = use smallest available.
 * Returns nullptr if the requested huge page size is not available.
 */
const HugePageSize* getHugePageSize(size_t size = 0);
    
    size_t AsyncFileWriter::getMaxBufferSize() const {
  auto data = data_.lock();
  return data->maxBufferBytes;
}
    
        // Make a guess at how many lines will be in the message, just to make an
    // initial buffer allocation.  If the guess is too small then the string
    // will reallocate and grow as necessary, it will just be slightly less
    // efficient than if we had guessed enough space.
    size_t numLinesGuess = 4;
    buffer.reserve(((header.size() + 1) * numLinesGuess) + msgData.size());
    
    /**
 * LogHandler represents a generic API for processing log messages.
 *
 * LogHandlers have an associated log level.  The LogHandler will discard any
 * messages below its log level.  This allows specific LogHandlers to perform
 * additional filtering of messages even if the messages were enabled at the
 * LogCategory level.  For instance, a single LogCategory may have two
 * LogHandlers attached, one that logs locally to a file, and one that sends
 * messages to a remote logging service.  The local LogHandler may be
 * configured to record all messages, but the remote LogHandler may want to
 * only process ERROR messages and above, even when debug logging is enabled
 * for this LogCategory.
 *
 * By default the LogHandler level is set to LogLevel::NONE, which means that
 * all log messages will be processed.
 */
class LogHandler {
 public:
  virtual ~LogHandler() = default;
    }