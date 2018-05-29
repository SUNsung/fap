
        
          void makePath(const std::string& path, const InArgs& in);
  void addPathInArg(const std::string& path,
                    const InArgs& in,
                    InArgs::const_iterator& itInArg,
                    PathArgument::Kind kind);
  void invalidPath(const std::string& path, int location);
    
    #ifndef GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_CONTAINERS_H__
#define GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_CONTAINERS_H__
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_CPP_GENERATOR_H__

    
    #ifndef GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
#define GOOGLE_PROTOBUF_COMPILER_CSHARP_OPTIONS_H__
    
    void RepeatedEnumFieldGenerator::WriteToString(io::Printer* printer) {
  printer->Print(variables_,
    'PrintField(\'$descriptor_name$\', $name$_, writer);\n');
}
    
    void RepeatedPrimitiveFieldGenerator::GenerateParsingCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.AddEntriesFrom(input, _repeated_$name$_codec);\n');
}
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedPrimitiveFieldGenerator);
};
    
    #include <google/protobuf/compiler/java/java_generator_factory.h>
    
    int main() {
  THLongStorage *storage1 = THLongStorage_newWithSize(STORAGE_SIZE);
  int64_t *data = storage1->data;
  for (int64_t i = 0; i < STORAGE_SIZE; i++)
    data[i] = i;
  std::vector<int64_t> vec(VEC_SIZE, 7);  // VEC_SIZE sevens
  std::unique_ptr<RPCMessage> msg_ptr =
    packMessage(1, 1.0f, 100l, -12, LLONG_MAX, storage1, vec);
  auto &msg = *msg_ptr;
    }
    
    #include <map>
    
    const int SHUTDOWN_TIMEOUT = 2000; // 2s
    
    #include <memory>
    
    namespace routeguide {
class Feature;
    }
    
            bool wasDataRead = trainSetDataReader.GetMinibatch(inputMatrices); // fill in the minibatch data into the Input nodes' buffers directly
        // If this returns false, the matrices may contain garbage or not sized to 0 columns.
        // On the other hand, if it returns a 0-column matrix, that would be a perfectly cromulent minibatch (in case of data parallelism with distributed reading).
        // If a passed matrix does not match a reader section, that is an error.
    
                shared_ptr<ComputationNode<ElemType>> runMeanNode = static_pointer_cast<ComputationNode<ElemType>>(runMeanParameterPtr);
            shared_ptr<ComputationNode<ElemType>> runStdNode  = static_pointer_cast<ComputationNode<ElemType>>(runStdParameterPtr);
    
    template <class ConfigRecordType, typename ElemType>
function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory(const ConfigRecordType& config)
{
    function<ComputationNetworkPtr(DEVICEID_TYPE)> createNetworkFn;
    bool gotIt = TryGetNetworkFactory<ConfigRecordType, ElemType>(config, createNetworkFn);
    if (!gotIt)
        RuntimeError('No network builder found in the config file. NDLNetworkBuilder, SimpleNetworkBuilder, or BrainScriptNetworkBuilder must be specified');
    else
        return createNetworkFn;
}
    
    
    {private:
    size_t sourceFileAsIndex; // source file is remembered in the value struct as an index into the static sourceFileMap[]
    // the meaning of the 'sourceFile' index is global, stored in this static map
    static vector<SourceFile> sourceFileMap;
};
    
    
    {
    {
    {}}}

    
    template <class _T>
class array_ref
{
    _T* data;
    size_t n;
    inline void check_index(size_t i) const
    {
        i;
        assert(i < n);
    }
    inline void check_ptr() const
    {
        n;
        data;
        assert(n == 0 || data != NULL);
    }
    }
    
        // construct from a single float, copy to all components
    float4(float f)
        : v(_mm_load1_ps(&f))
    {
    }
    // float4 (float f) : v (_mm_set_ss (f)) {}  // code seems more complex than _mm_load1_ps()
    
      /// Sets the non-blocking mode of the acceptor.
  /**
   * @param mode If @c true, the acceptor's synchronous operations will fail
   * with boost::asio::error::would_block if they are unable to perform the
   * requested operation immediately. If @c false, synchronous operations will
   * block until complete.
   *
   * @param ec Set to indicate what error occurred, if any.
   *
   * @note The non-blocking mode has no effect on the behaviour of asynchronous
   * operations. Asynchronous operations will never fail with the error
   * boost::asio::error::would_block.
   */
  boost::system::error_code non_blocking(
      bool mode, boost::system::error_code& ec)
  {
    return this->get_service().non_blocking(
        this->get_implementation(), mode, ec);
  }
    
      /// Constructor.
  /**
   * This constructor creates a timer without setting an expiry time. The
   * expires_at() or expires_from_now() functions must be called to set an
   * expiry time before the timer can be waited on.
   *
   * @param io_service The io_service object that the timer will use to dispatch
   * handlers for any asynchronous operations performed on the timer.
   */
  explicit basic_waitable_timer(boost::asio::io_service& io_service)
    : basic_io_object<WaitableTimerService>(io_service)
  {
  }
    
    /// Adds buffering to the read-related operations of a stream.
/**
 * The buffered_read_stream class template can be used to add buffering to the
 * synchronous and asynchronous read operations of a stream.
 *
 * @par Thread Safety
 * @e Distinct @e objects: Safe.@n
 * @e Shared @e objects: Unsafe.
 *
 * @par Concepts:
 * AsyncReadStream, AsyncWriteStream, Stream, SyncReadStream, SyncWriteStream.
 */
template <typename Stream>
class buffered_read_stream
  : private noncopyable
{
public:
  /// The type of the next layer.
  typedef typename remove_reference<Stream>::type next_layer_type;
    }
    
    
    {
    {} // namespace asio
} // namespace boost
    
    #ifndef BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_WRITE_STREAM_FWD_HPP
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    #include <boost/asio/detail/push_options.hpp>
    
    template<class T, class TimeSystem>
class base_time;
    
      descriptor_write_op(int descriptor,
      const ConstBufferSequence& buffers, Handler& handler)
    : descriptor_write_op_base<ConstBufferSequence>(
        descriptor, buffers, &descriptor_write_op::do_complete),
      handler_(BOOST_ASIO_MOVE_CAST(Handler)(handler))
  {
  }
    
    #endif // BOOST_ASIO_DETAIL_IMPL_DEV_POLL_REACTOR_HPP
