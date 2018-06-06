
        
        namespace xla {
    }
    
      double ComputeDualLoss(const double current_dual, const double example_label,
                         const double example_weight) const final {
    // For binary classification, there are 2 conjugate functions, one per
    // label value (-1 and 1).
    const double y_alpha = current_dual * example_label;  // y \alpha
    if (y_alpha < 0 || y_alpha > 1.0) {
      return std::numeric_limits<double>::max();
    }
    return (-y_alpha + 0.5 * gamma * current_dual * current_dual) *
           example_weight;
  }
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {
    {}  // namespace port
}  // namespace tensorflow
    
    namespace tensorflow {
    }
    
      // TODO(josh11b): Implement serializing and restoring the state.  Need
  // to create TextLineReaderState proto to store ReaderBaseState,
  // line_number_, and input_buffer_->Tell().
    
    The input audio has one row of the tensor for each channel in the audio file.
Each channel contains audio samples starting at the beginning of the audio and
having `1/samples_per_second` time between them. The output file will contain
all of the audio channels contained in the tensor.
    
    TEST(GrpcChannelTest, HostPorts) {
  GrpcChannelSpec spec;
  TF_EXPECT_OK(spec.AddHostPortsJob(
      'mnist', {'a:1', 'b:2', 'c:3', 'd:4', 'e:5', 'f:6'}));
  ChannelCreationFunction channel_func =
      ConvertToChannelCreationFunction(NewHostPortGrpcChannel);
  std::unique_ptr<GrpcChannelCache> cc(NewGrpcChannelCache(spec, channel_func));
    }
    
    
    {
    {    std::map<string, const NodeDef*> node_lookup;
    MapNamesToNodes(result, &node_lookup);
    EXPECT_EQ('', node_lookup.at('mul_node1')->device());
    EXPECT_EQ('', node_lookup.at('add_node2')->device());
  }
};
    
    namespace tensorflow {
    }
    
    // Cwise binary ops
//
// TODO(zhifengc): This can be arrange as a function in the standard
// library.
Status GradForBinaryCwise(FunctionDef* g, std::vector<FDH::Node> body) {
  // clang-format off
  std::vector<FDH::Node> nodes = {
    {{'sx'}, 'Shape', {'x'}},
    {{'sy'}, 'Shape', {'y'}},
  };
  nodes.insert(nodes.end(), body.begin(), body.end());
  std::vector<FDH::Node> reshapes = {
    {{'rx', 'ry'}, 'BroadcastGradientArgs', {'sx', 'sy'}},
    {{'sum_gx'}, 'Sum', {'gx', 'rx'}},
    {{'dx'}, 'Reshape', {'sum_gx', 'sx'}},
    {{'sum_gy'}, 'Sum', {'gy', 'ry'}},
    {{'dy'}, 'Reshape', {'sum_gy', 'sy'}},
  };
  nodes.insert(nodes.end(), reshapes.begin(), reshapes.end());
    }
    
        // On the 1st send (i == 0), gating is disabled, so data should be sent.
    // On the 2nd send (i == 1), gating is enabled, and the server has enabled
    //   the watch key in the previous send (READ_WRITE), so data should be
    //   sent. In this iteration, the server response with a EventReply proto to
    //   unblock the debug node.
    // On the 3rd send (i == 2), gating is enabled, but the server has disabled
    //   the watch key in the previous send, so data should not be sent.
    const bool enable_gated_grpc = (i != 0);
    TF_ASSERT_OK(DebugIO::PublishDebugTensor(kDebugNodeKey, tensor, wall_time,
                                             urls, enable_gated_grpc));
    
    #endif  // TENSORFLOW_DEBUG_GRPC_TESTLIB_H_

    
    #include 'tensorflow/core/platform/types.h'
    
    #endif  // ATOM_BROWSER_NET_URL_REQUEST_ASYNC_ASAR_JOB_H_

    
      // ui::EventRewriter:
  ui::EventRewriteStatus RewriteEvent(
      const ui::Event& event,
      std::unique_ptr<ui::Event>* rewritten_event) override;
  ui::EventRewriteStatus NextDispatchEvent(
      const ui::Event& last_event,
      std::unique_ptr<ui::Event>* new_event) override;
    
    #endif  // CHROME_BROWSER_EXTENSIONS_GLOBAL_SHORTCUT_LISTENER_WIN_H_

    
    // MonitorFinder maps a RenderFrameHost to the display ID on which the widget
// is painting. This class operates on the IO thread while the RenderFrameHost
// is on the UI thread, so the value returned by GetMonitor() may be 0 until
// the information can be retrieved asynchronously.
class MonitorFinder : public base::RefCountedThreadSafe<MonitorFinder> {
 public:
  MonitorFinder(int process_id, int render_frame_id);
    }
    
      /// Close the acceptor.
  /**
   * This function is used to close the acceptor. Any asynchronous accept
   * operations will be cancelled immediately.
   *
   * A subsequent call to open() is required before the acceptor can again be
   * used to again perform socket accept operations.
   *
   * @throws boost::system::system_error Thrown on failure.
   */
  void close()
  {
    boost::system::error_code ec;
    this->get_service().close(this->get_implementation(), ec);
    boost::asio::detail::throw_error(ec, 'close');
  }
    
    /// Copies bytes from a source buffer to a target buffer.
/**
 * @param target A modifiable buffer representing the memory region to which
 * the bytes will be copied.
 *
 * @param source A modifiable buffer representing the memory region from which
 * the bytes will be copied. The contents of the source buffer will not be
 * modified.
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
inline std::size_t buffer_copy(const mutable_buffer& target,
    const mutable_buffers_1& source)
{
  return buffer_copy(target, const_buffer(source));
}
    
      /// Copy data from the internal buffer to the specified target buffer, without
  /// removing the data from the internal buffer. Returns the number of bytes
  /// copied.
  template <typename MutableBufferSequence>
  std::size_t peek_copy(const MutableBufferSequence& buffers)
  {
    return boost::asio::buffer_copy(buffers, storage_.data(), storage_.size());
  }
    
    template <typename Buffer>
class buffer_sequence_adapter<Buffer, boost::asio::const_buffers_1>
  : buffer_sequence_adapter_base
{
public:
  explicit buffer_sequence_adapter(
      const boost::asio::const_buffers_1& buffer_sequence)
  {
    init_native_buffer(buffer_, Buffer(buffer_sequence));
    total_buffer_size_ = boost::asio::buffer_size(buffer_sequence);
  }
    }
    
    #include <boost/asio/detail/config.hpp>
#include <boost/asio/detail/noncopyable.hpp>
#include <boost/asio/detail/tss_ptr.hpp>
    
    template <typename Handler>
inline void deallocate(void* p, std::size_t s, Handler& h)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  ::operator delete(p);
#else
  using boost::asio::asio_handler_deallocate;
  asio_handler_deallocate(p, s, boost::asio::detail::addressof(h));
#endif
}
    
    class winrt_buffer_impl :
  public Microsoft::WRL::RuntimeClass<
    Microsoft::WRL::RuntimeClassFlags<
      Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
    ABI::Windows::Storage::Streams::IBuffer,
    Windows::Storage::Streams::IBufferByteAccess>
{
public:
  explicit winrt_buffer_impl(const boost::asio::const_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = boost::asio::buffer_size(b);
    capacity_ = boost::asio::buffer_size(b);
  }
    }
    
      if (result >= 0)
  {
    ec = boost::system::error_code();
    if (value)
      state |= user_set_non_blocking;
    else
    {
      // Clearing the user-set non-blocking mode always overrides any
      // internally-set non-blocking flag. Any subsequent asynchronous
      // operations will need to re-enable non-blocking I/O.
      state &= ~(user_set_non_blocking | internal_non_blocking);
    }
    return true;
  }
    
    #include <boost/asio/detail/push_options.hpp>
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }