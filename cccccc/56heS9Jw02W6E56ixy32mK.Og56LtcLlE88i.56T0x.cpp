
        
        bool Reader::decodeString(Token& token, std::string& decoded) {
  decoded.reserve(token.end_ - token.start_ - 2);
  Location current = token.start_ + 1; // skip '''
  Location end = token.end_ - 1;       // do not include '''
  while (current != end) {
    Char c = *current++;
    if (c == ''')
      break;
    else if (c == '\\') {
      if (current == end)
        return addError('Empty escape sequence in string', token, current);
      Char escape = *current++;
      switch (escape) {
      case ''':
        decoded += ''';
        break;
      case '/':
        decoded += '/';
        break;
      case '\\':
        decoded += '\\';
        break;
      case 'b':
        decoded += '\b';
        break;
      case 'f':
        decoded += '\f';
        break;
      case 'n':
        decoded += '\n';
        break;
      case 'r':
        decoded += '\r';
        break;
      case 't':
        decoded += '\t';
        break;
      case 'u': {
        unsigned int unicode;
        if (!decodeUnicodeCodePoint(token, current, end, unicode))
          return false;
        decoded += codePointToUTF8(unicode);
      } break;
      default:
        return addError('Bad escape sequence in string', token, current);
      }
    } else {
      decoded += c;
    }
  }
  return true;
}
    
    PyObject* NewFileExtensionsByName(const FileDescriptor* descriptor);
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EnumGenerator);
};
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_REPEATED_ENUM_FIELD_H__
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_JAVA_GENERATOR_H__
    
    #include <google/protobuf/compiler/java/java_context.h>
#include <google/protobuf/compiler/java/java_enum_field.h>
#include <google/protobuf/compiler/java/java_extension.h>
#include <google/protobuf/compiler/java/java_extension_lite.h>
#include <google/protobuf/compiler/java/java_field.h>
#include <google/protobuf/compiler/java/java_helpers.h>
#include <google/protobuf/compiler/java/java_message.h>
#include <google/protobuf/compiler/java/java_message_lite.h>
#include <google/protobuf/compiler/java/java_service.h>
    
    static void THDTensor_(_set)(THDTensor *self, THDStorage *storage,
                             ptrdiff_t storageOffset, int nDimension,
                             int64_t *size, int64_t *stride) {
  /* storage */
  if (self->storage != storage) {
    if (self->storage)
      THDStorage_(free)(self->storage);
    }
    }
    
    template<> AT_API Half convert(float f);
template<> AT_API float convert(Half f);
template<> AT_API Half convert(double f);
template<> AT_API double convert(Half f);
template<> AT_API Half convert(int64_t f);
template<> AT_API int64_t convert(Half f);
    
    using namespace at;
    
    #undef THPTensorStatelessType
#undef THPTensorStateless
#undef THPTensorType
    
    #include 'generic/Storage.h'
#include <TH/THGenerateAllTypes.h>
    
    using THDGeneratorPtrTypes = map_to_ptr<std::add_const, THDGeneratorTypes>::type;
using THDTensorPtrTypes = map_to_ptr<std::add_const, THDTensorTypes>::type;
using THDStoragePtrTypes = map_to_ptr<std::add_const, THDStorageTypes>::type;
    
    //////////////////////////////////////////////////////////////////////
    
      // set interleave for early code. we'll then force interleave for a few
  // regions, and switch to local for the threads
  numa_set_interleave_mask(numa_all_nodes_ptr);
    
    void emitSSwitch(IRGS& env, const ImmVector& iv) {
  const int numCases = iv.size() - 1;
    }
    
      // Return the set of clusters that are left, which are the ones that
  // didn't get merged (so their first func is its original func).
  std::vector<Cluster> sortedClusters;
  for (auto func : sortedFuncs) {
    auto cluster = funcCluster[func];
    if (!cluster || cluster->targets.empty()) continue;
    if (cluster->targets[0] != func) continue;
    sortedClusters.emplace_back(std::move(*cluster));
    cluster->targets.clear();
  }
    
    bool get_embedded_data(const char* section, embedded_data* desc,
                       const std::string& filename /*= '' */) {
  auto const fname = filename.empty() ? current_executable_path() : filename;
    }
    
    namespace HPHP {
    }
    
        Matrix<float> mBdense(c_deviceIdZero);
    mBdense.AssignTruncateBottomOf(Matrix<float>::RandomUniform(dim1, dim2, c_deviceIdZero, -5.0f, 0.4f, IncrementCounter()), 0);
    Matrix<float> mBsparse(mBdense.DeepClone());
    
    /// Copies a limited number of bytes from a source buffer to a target buffer.
/**
 * @param target A modifiable buffer representing the memory region to which
 * the bytes will be copied.
 *
 * @param source A non-modifiable buffer representing the memory region from
 * which the bytes will be copied.
 *
 * @param max_bytes_to_copy The maximum number of bytes to be copied.
 *
 * @returns The number of bytes copied.
 *
 * @note The number of bytes copied is the lesser of:
 *
 * @li @c buffer_size(target)
 *
 * @li @c buffer_size(source)
 *
 * @li @c max_bytes_to_copy
 *
 * This function is implemented in terms of @c memcpy, and consequently it
 * cannot be used to copy between overlapping memory regions.
 */
inline std::size_t buffer_copy(const mutable_buffers_1& target,
    const const_buffers_1& source, std::size_t max_bytes_to_copy)
{
  return buffer_copy(buffer(target, max_bytes_to_copy), source);
}
    
    
    {
    {} // namespace asio
} // namespace boost
    
    template <typename CompletionCondition>
class base_from_completion_cond
{
protected:
  explicit base_from_completion_cond(CompletionCondition completion_condition)
    : completion_condition_(completion_condition)
  {
  }
    }
    
      static void validate(const std::array<Elem, 2>& buffer_sequence)
  {
    boost::asio::buffer_cast<const void*>(buffer_sequence[0]);
    boost::asio::buffer_cast<const void*>(buffer_sequence[1]);
  }
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #if defined(BOOST_ASIO_HAS_DEV_POLL)