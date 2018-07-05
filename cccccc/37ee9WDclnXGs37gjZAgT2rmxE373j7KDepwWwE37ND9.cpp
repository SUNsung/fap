
        
        namespace tensorflow {
namespace {
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace internal {
template <typename T>
struct functor_traits<scalar_sigmoid_fast_derivative_op<T> > {
  enum {
    Cost = NumTraits<T>::AddCost * 2 + NumTraits<T>::MulCost,
    PacketAccess = packet_traits<T>::HasAdd && packet_traits<T>::HasMul &&
                   packet_traits<T>::HasNegate
  };
};
}  // namespace internal
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    namespace tensorflow {
#define IsSameAddrSp DeviceNameUtils::IsSameAddressSpace
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Status ReadGroundTruthFile(const string& file_name,
                           std::vector<std::pair<string, int64>>* result) {
  std::ifstream file(file_name);
  if (!file) {
    return tensorflow::errors::NotFound('Ground truth file '', file_name,
                                        '' not found.');
  }
  result->clear();
  string line;
  while (std::getline(file, line)) {
    std::vector<string> pieces = tensorflow::str_util::Split(line, ',');
    if (pieces.size() != 2) {
      continue;
    }
    float timestamp;
    if (!tensorflow::strings::safe_strtof(pieces[1].c_str(), &timestamp)) {
      return tensorflow::errors::InvalidArgument(
          'Wrong number format at line: ', line);
    }
    string label = pieces[0];
    auto timestamp_int64 = static_cast<int64>(timestamp);
    result->push_back({label, timestamp_int64});
  }
  std::sort(result->begin(), result->end(),
            [](const std::pair<string, int64>& left,
               const std::pair<string, int64>& right) {
              return left.second < right.second;
            });
  return Status::OK();
}
    
    class PyDescriptorDatabase : public DescriptorDatabase {
 public:
  explicit PyDescriptorDatabase(PyObject* py_database);
  ~PyDescriptorDatabase();
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
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_SOURCE_GENERATOR_BASE_H__
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace java {
namespace {
    }
    }
    }
    }
    }
    
    struct InternalFieldData {
  uint32_t data;
};
    
    void DeserializeInternalFields(v8::Local<v8::Object> holder, int index,
                               v8::StartupData payload, void* data) {
  DCHECK_EQ(data, nullptr);
  if (payload.raw_size == 0) {
    holder->SetAlignedPointerInInternalField(index, nullptr);
    return;
  }
  InternalFieldData* embedder_field = new InternalFieldData{0};
  memcpy(embedder_field, payload.data, payload.raw_size);
  holder->SetAlignedPointerInInternalField(index, embedder_field);
  deserialized_data.push_back(embedder_field);
}
    
    
    {  Deno* d = deno_new(NULL, MessagesFromJS);
  bool r = deno_execute(d, 'deno_main.js', 'denoMain();');
  if (!r) {
    printf('Error! %s\n', deno_last_exception(d));
    exit(1);
  }
  deno_delete(d);
}

    
    namespace deno {
    }
    
    /** Returns the benchmark Reporter instance.
 *
 * The returned instance will take care of generating reports for all the actual
 * reporters configured via the 'enable_*_reporter' command line flags (see
 * benchmark_config.cc). */
std::shared_ptr<Reporter> GetReporter();
    
    #include 'src/compiler/config.h'
#include 'src/compiler/generator_helpers.h'
    
    
    {  // Get all comments (leading, leading_detached, trailing) and print them as a
  // docstring. Any leading space of a line will be removed, but the line
  // wrapping will not be changed.
  void PrintAllComments(std::vector<grpc::string> comments,
                        grpc_generator::Printer* out);
};
    
    
    {
    {}  // namespace
}  // namespace grpc
    
    #endif  // TEST_QPS_TIMER_H

    
      // Proto2 Python
  google::protobuf::compiler::python::Generator py_generator;
  cli.RegisterGenerator('--python_out', &py_generator,
                        'Generate Python source file.');
    
    template <typename Stream>
class buffered_write_stream;
    
    template<class T, std::size_t N>
class array;
    
    
    {  static void init_native_buffer(iovec& iov,
      const boost::asio::const_buffer& buffer)
  {
    init_iov_base(iov.iov_base, const_cast<void*>(
          boost::asio::buffer_cast<const void*>(buffer)));
    iov.iov_len = boost::asio::buffer_size(buffer);
  }
#endif // defined(BOOST_ASIO_WINDOWS) || defined(__CYGWIN__)
};
    
    #ifndef BOOST_ASIO_DETAIL_BUFFERED_STREAM_STORAGE_HPP
#define BOOST_ASIO_DETAIL_BUFFERED_STREAM_STORAGE_HPP
    
    #include <boost/asio/detail/pop_options.hpp>
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    #define BOOST_ASIO_RESOLVE_HANDLER_CHECK( \
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
      'ResolveHandler type requirements not met') \
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
    
    
    {private:
  byte* bytes_;
  UINT32 length_;
  UINT32 capacity_;
};
    
      /**
   * Finds the last occurrence of any character not in `that` in this string,
   *   starting at offset `pos`
   * \note Equivalent to `find_last_not_of(that.data(), pos, that.size())`
   */
  template <std::size_t M>
  constexpr std::size_t find_last_not_of(
      const BasicFixedString<Char, M>& that,
      std::size_t pos) const noexcept(false) {
    return 0u == size_
        ? npos
        : detail::fixedstring::find_last_not_of_(
              data_,
              that.data_,
              folly::constexpr_min(
                  detail::fixedstring::checkOverflow(pos, size_), size_ - 1u),
              that.size_);
  }
    
    
    {  bool cas(T& u, T& v) {
    Node* n = new Node(v);
    hazptr_holder<Atom> hptr;
    Node* p;
    while (true) {
      p = hptr.get_protected(node_);
      if (p->val_ != u) {
        delete n;
        return false;
      }
      if (node_.compare_exchange_weak(
              p, n, std::memory_order_relaxed, std::memory_order_release)) {
        break;
      }
    }
    hptr.reset();
    p->retire();
    return true;
  }
};
    
    /**
 * This function tries to reallocate a buffer of which only the first
 * currentSize bytes are used. The problem with using realloc is that
 * if currentSize is relatively small _and_ if realloc decides it
 * needs to move the memory chunk to a new buffer, then realloc ends
 * up copying data that is not used. It's generally not a win to try
 * to hook in to realloc() behavior to avoid copies - at least in
 * jemalloc, realloc() almost always ends up doing a copy, because
 * there is little fragmentation / slack space to take advantage of.
 */
FOLLY_MALLOC_CHECKED_MALLOC FOLLY_MALLOC_NOINLINE inline void* smartRealloc(
    void* p,
    const size_t currentSize,
    const size_t currentCapacity,
    const size_t newCapacity) {
  assert(p);
  assert(currentSize <= currentCapacity &&
         currentCapacity < newCapacity);
    }
    
    void SerialExecutor::add(Func func) {
  {
    std::lock_guard<std::mutex> lock(mutex_);
    queue_.push(std::move(func));
  }
  parent_->add([keepAlive = getKeepAliveToken(this)] { keepAlive->run(); });
}
    
    FOLLY_ALWAYS_INLINE int __builtin_ffsll(long long x) {
  unsigned long index;
  return int(_BitScanForward64(&index, (unsigned long long)x) ? index + 1 : 0);
}
    
    
    {  EXPECT_EQ(1, estimates.quantiles[0].second);
  EXPECT_EQ(2.0 - 0.5, estimates.quantiles[1].second);
  EXPECT_EQ(50.375, estimates.quantiles[2].second);
  EXPECT_EQ(100.0 - 0.5, estimates.quantiles[3].second);
  EXPECT_EQ(100, estimates.quantiles[4].second);
}