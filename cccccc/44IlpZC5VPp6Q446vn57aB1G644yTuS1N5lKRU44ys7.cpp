
        
          // During the first Compute(), resource is either created or looked up using
  // shared_name. In the latter case, the resource found should be verified if
  // it is compatible with this op's configuration. The verification may fail in
  // cases such as two graphs asking queues of the same shared name to have
  // inconsistent capacities.
  virtual Status VerifyResource(T* resource) { return Status::OK(); }
    
          case ACTION_PIPE:
        while (dup2(child_pipe_[i], i) < 0) {
          if (!retry(errno)) {
            _exit(1);
          }
        }
        close(child_pipe_[i]);
        child_pipe_[i] = -1;
        break;
    
    /**
 * \ingroup CXX11_NeuralNetworks_Module
 * \brief Template functor to clip the magnitude of the first scalar.
 *
 * \sa class CwiseBinaryOp, MatrixBase::Clip
 */
template <typename Scalar>
struct scalar_clip_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_clip_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Scalar
  operator()(const Scalar& a, const Scalar& b) const {
    return numext::mini(numext::maxi(a, -b), b);
  }
  template <typename Packet>
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE const Packet
  packetOp(const Packet& a, const Packet& b) const {
    return internal::pmin(internal::pmax(a, internal::pnegate(b)), b);
  }
};
    
    #endif  // TENSORFLOW_COMMON_RUNTIME_SYCL_SYCL_DEVICE_CONTEXT_H_

    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    #include <memory>
#include 'tensorflow/core/framework/reader_base.h'
#include 'tensorflow/core/framework/reader_op_kernel.h'
#include 'tensorflow/core/lib/core/errors.h'
#include 'tensorflow/core/lib/io/record_reader.h'
#include 'tensorflow/core/lib/strings/strcat.h'
#include 'tensorflow/core/platform/env.h'
    
    template <class T>
class DynamicStitchOpImplBase : public OpKernel {
 public:
  explicit DynamicStitchOpImplBase(OpKernelConstruction* c,
                                   const string& op_name)
      : OpKernel(c) {
    // Compute expected input signature
    const DataType dt = DataTypeToEnum<T>::v();
    const int n = c->num_inputs() / 2;
    DataTypeVector expected;
    for (int i = 0; i < n; i++) {
      expected.push_back(DT_INT32);
    }
    for (int i = 0; i < n; i++) {
      expected.push_back(dt);
    }
    OP_REQUIRES_OK(c, c->MatchSignature(expected, {dt}));
    OP_REQUIRES(c, c->num_inputs() > 0,
                errors::InvalidArgument(op_name + ': Must have some inputs'));
    OP_REQUIRES(c, c->num_inputs() % 2 == 0,
                errors::InvalidArgument(
                    op_name + ': Must have even number of arguments'));
  }
    }
    
    #undef REGISTER_GPU
    
        D3D_FEATURE_LEVEL featureLevels[] =
    {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0,
    };
    UINT numFeatureLevels = ARRAYSIZE(featureLevels);
    
    #include 'precomp.hpp'
    
                static __device__ __forceinline__ int atomicMin(int* address, int val)
            {
                return ::atomicMin(address, val);
            }
            static __device__ __forceinline__ float atomicMin(float* address, float val)
            {
            #if __CUDA_ARCH__ >= 120
                int* address_as_i = (int*) address;
                int old = *address_as_i, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_i, assumed,
                        __float_as_int(::fminf(val, __int_as_float(assumed))));
                } while (assumed != old);
                return __int_as_float(old);
            #else
                (void) address;
                (void) val;
                return 0.0f;
            #endif
            }
            static __device__ __forceinline__ double atomicMin(double* address, double val)
            {
            #if __CUDA_ARCH__ >= 130
                unsigned long long int* address_as_ull = (unsigned long long int*) address;
                unsigned long long int old = *address_as_ull, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_ull, assumed,
                        __double_as_longlong(::fmin(val, __longlong_as_double(assumed))));
                } while (assumed != old);
                return __longlong_as_double(old);
            #else
                (void) address;
                (void) val;
                return 0.0;
            #endif
            }
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
    #if defined(_WIN32)
#include <windows.h>
    
      /// Cancels one asynchronous operation that is waiting on the timer.
  /**
   * This function forces the completion of one pending asynchronous wait
   * operation against the timer. Handlers are cancelled in FIFO order. The
   * handler for the cancelled operation will be invoked with the
   * boost::asio::error::operation_aborted error code.
   *
   * Cancelling the timer does not change the expiry time.
   *
   * @return The number of asynchronous operations that were cancelled. That is,
   * either 0 or 1.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @note If the timer has already expired when cancel_one() is called, then
   * the handlers for asynchronous wait operations will:
   *
   * @li have already been invoked; or
   *
   * @li have been queued for invocation in the near future.
   *
   * These handlers can no longer be cancelled, and therefore are passed an
   * error code that indicates the successful completion of the wait operation.
   */
  std::size_t cancel_one()
  {
    boost::system::error_code ec;
    std::size_t s = this->service.cancel_one(this->implementation, ec);
    boost::asio::detail::throw_error(ec, 'cancel_one');
    return s;
  }
    
    namespace boost {
namespace asio {
    }
    }
    
    #include <boost/asio/detail/addressof.hpp>
#include <boost/asio/detail/bind_handler.hpp>
#include <boost/asio/detail/buffer_sequence_adapter.hpp>
#include <boost/asio/detail/descriptor_ops.hpp>
#include <boost/asio/detail/fenced_block.hpp>
#include <boost/asio/detail/reactor_op.hpp>
    
    #include <boost/asio/detail/config.hpp>
    
    
#define BOOST_ASIO_WRITE_HANDLER_CHECK( \
    handler_type, handler) \
  \
  typedef BOOST_ASIO_HANDLER_TYPE(handler_type, \
      void(boost::system::error_code, std::size_t)) \
    asio_true_handler_type; \
  \
  BOOST_ASIO_HANDLER_TYPE_REQUIREMENTS_ASSERT( \
      sizeof(boost::asio::detail::two_arg_handler_test( \
          boost::asio::detail::clvref< \
            asio_true_handler_type>(), \
          static_cast<const boost::system::error_code*>(0), \
          static_cast<const std::size_t*>(0))) == 1, \
      'WriteHandler type requirements not met') \
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
            boost::asio::detail::lvref<const std::size_t>()), \
        char(0))> BOOST_ASIO_UNUSED_TYPEDEF
    
      // We now have a FlatBuffer that can be stored on disk or sent over a network.
    
    // A common interface for objects having comments in the source.
// Return formatted comments to be inserted in generated code.
struct CommentHolder {
  virtual ~CommentHolder() {}
  virtual grpc::string GetLeadingComments(const grpc::string prefix) const = 0;
  virtual grpc::string GetTrailingComments(const grpc::string prefix) const = 0;
  virtual std::vector<grpc::string> GetAllComments() const = 0;
};
    
      std::string GetUsageString(const char *program_name) const;
    
    struct ToStringVisitor : public IterationVisitor {
  std::string s;
  void StartSequence() { s += '{ '; }
  void EndSequence() { s += ' }'; }
  void Field(size_t /*field_idx*/, size_t set_idx, ElementaryType /*type*/,
             bool /*is_vector*/, const TypeTable * /*type_table*/,
             const char *name, const uint8_t *val) {
    if (!val) return;
    if (set_idx) s += ', ';
    if (name) {
      s += name;
      s += ': ';
    }
  }
  template<typename T> void Named(T x, const char *name) {
    if (name)
      s += name;
    else
      s += NumToString(x);
  }
  void UType(uint8_t x, const char *name) { Named(x, name); }
  void Bool(bool x) { s += x ? 'true' : 'false'; }
  void Char(int8_t x, const char *name) { Named(x, name); }
  void UChar(uint8_t x, const char *name) { Named(x, name); }
  void Short(int16_t x, const char *name) { Named(x, name); }
  void UShort(uint16_t x, const char *name) { Named(x, name); }
  void Int(int32_t x, const char *name) { Named(x, name); }
  void UInt(uint32_t x, const char *name) { Named(x, name); }
  void Long(int64_t x) { s += NumToString(x); }
  void ULong(uint64_t x) { s += NumToString(x); }
  void Float(float x) { s += NumToString(x); }
  void Double(double x) { s += NumToString(x); }
  void String(const struct String *str) {
    EscapeString(str->c_str(), str->size(), &s, true);
  }
  void Unknown(const uint8_t *) { s += '(?)'; }
  void StartVector() { s += '[ '; }
  void EndVector() { s += ' ]'; }
  void Element(size_t i, ElementaryType /*type*/,
               const TypeTable * /*type_table*/, const uint8_t * /*val*/) {
    if (i) s += ', ';
  }
};
    
      // Modify any parsing / output options used by the other functions.
  void SetOptions(const IDLOptions &opts) { opts_ = opts; }
    
      // Create a FlatBuffer's `vector` from the `std::vector`.
  std::vector<flatbuffers::Offset<Weapon>> weapons_vector;
  weapons_vector.push_back(sword);
  weapons_vector.push_back(axe);
  auto weapons = builder.CreateVector(weapons_vector);
    
    
    {  std::string &code = *code_ptr;
  if (config != nullptr && config->first_line != nullptr) {
    code += std::string(prefix) + std::string(config->first_line) + '\n';
  }
  std::string line_prefix =
      std::string(prefix) +
      ((config != nullptr && config->content_line_prefix != nullptr)
           ? config->content_line_prefix
           : '///');
  for (auto it = dc.begin(); it != dc.end(); ++it) {
    code += line_prefix + *it + '\n';
  }
  if (config != nullptr && config->last_line != nullptr) {
    code += std::string(prefix) + std::string(config->last_line) + '\n';
  }
}
    
      for (auto file_it = filenames.begin(); file_it != filenames.end();
       ++file_it) {
    auto &filename = *file_it;
    std::string contents;
    if (!flatbuffers::LoadFile(filename.c_str(), true, &contents))
      Error('unable to load file: ' + filename);
    }
    
    #include 'flatbuffers/flatc.h'
    
      virtual void onChokingEvent(const BtChokingEvent& event) CXX11_OVERRIDE {}
    
    AbstractProxyRequestCommand::AbstractProxyRequestCommand(
    cuid_t cuid, const std::shared_ptr<Request>& req,
    const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
    DownloadEngine* e, const std::shared_ptr<Request>& proxyRequest,
    const std::shared_ptr<SocketCore>& s)
    : AbstractCommand(cuid, req, fileEntry, requestGroup, e, s),
      proxyRequest_(proxyRequest),
      httpConnection_(std::make_shared<HttpConnection>(
          cuid, s, std::make_shared<SocketRecvBuffer>(s)))
{
  setTimeout(std::chrono::seconds(getOption()->getAsInt(PREF_CONNECT_TIMEOUT)));
  disableReadCheckSocket();
  setWriteCheckSocket(getSocket());
}
    
    class HttpConnection;
class SocketCore;
    
    void AnnounceTier::nextEvent()
{
  switch (event) {
  case STARTED:
    event = DOWNLOADING;
    break;
  case STARTED_AFTER_COMPLETION:
    event = SEEDING;
    break;
  case STOPPED:
    event = HALTED;
    break;
  case COMPLETED:
    event = SEEDING;
    break;
  default:
    break;
  }
}
    
    
    {} // namespace aria2
    
    #include 'Notifier.h'
    
    AuthConfig::~AuthConfig() = default;