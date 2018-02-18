
        
        
    {  ret += ')';
  return ret;
}
    
    int64_t TimeStamp::Current() {
  return time(0);
}
    
    #include 'hphp/runtime/vm/jit/abi.h'
#include 'hphp/runtime/vm/jit/arg-group.h'
#include 'hphp/runtime/vm/jit/fixup.h'
#include 'hphp/runtime/vm/jit/phys-reg-saver.h'
#include 'hphp/runtime/vm/jit/vasm-gen.h'
#include 'hphp/runtime/vm/jit/vasm-instr.h'
#include 'hphp/runtime/vm/jit/vasm-reg.h'
    
    // Check if we should stop due to flow control, breakpoints, and signals.
bool DebuggerProxy::checkFlowBreak(CmdInterrupt &cmd) {
  TRACE(2, 'DebuggerProxy::checkFlowBreak\n');
  // If there is an outstanding Ctrl-C from the client, go ahead and break now.
  // Note: this stops any flow control command we might have in-flight.
  if (m_signum == CmdSignal::SignalBreak) {
    Lock lock(m_signalMutex);
    if (m_signum == CmdSignal::SignalBreak) {
      m_signum = CmdSignal::SignalNone;
      m_flow.reset();
      return true;
    }
  }
    }
    
      /**
   * Query if a task is finished. This is non-blocking and can be called as
   * many times as desired.
   */
  static int64_t TaskStatus(const Resource& task);
    
    struct IRGS;
    
    Vlabel Vunit::makeBlock(AreaIndex area, uint64_t weight) {
  auto i = blocks.size();
  blocks.emplace_back(area, weight);
  return Vlabel{i};
}
    
    inline void initNuma() {}
inline constexpr int next_numa_node(std::atomic_int& curr_node) { return 0; }
inline constexpr int num_numa_nodes() { return 1; }
inline void numa_interleave(void* start, size_t size) {}
inline void numa_bind_to(void* start, size_t size, int node) {}
inline constexpr bool numa_node_allowed(int node) { return true; }
    
    void ThriftBuffer::read(char *data, int len) {
  auto const avail = m_pEnd - m_p;
  if (avail < 0) not_reached();
    }
    
    #include 'hphp/runtime/vm/resumable.h'
    
    #include 'src/core/lib/compression/compression_internal.h'
    
    std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
    class WorkerServiceImpl;
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
    
    {  // The data in the buffer.
  detail::buffered_stream_storage storage_;
};
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
// Nothing to include.
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <atomic>
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <boost/detail/atomic_count.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
      std::size_t check_for_completion(
      const boost::system::error_code& ec,
      std::size_t total_transferred)
  {
    return detail::adapt_completion_condition_result(
        completion_condition_(ec, total_transferred));
  }
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
    // Calls to asio_handler_allocate and asio_handler_deallocate must be made from
// a namespace that does not contain any overloads of these functions. The
// boost_asio_handler_alloc_helpers namespace is defined here for that purpose.
namespace boost_asio_handler_alloc_helpers {
    }
    
    #define BOOST_ASIO_BUFFERED_HANDSHAKE_HANDLER_CHECK( \
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
      'BufferedHandshakeHandler type requirements not met') \
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
    
    void buffer_sequence_adapter_base::init_native_buffer(
    buffer_sequence_adapter_base::native_buffer_type& buf,
    const boost::asio::mutable_buffer& buffer)
{
  std::memset(&buf, 0, sizeof(native_buffer_type));
  Microsoft::WRL::ComPtr<IInspectable> insp
    = Microsoft::WRL::Make<winrt_buffer_impl>(buffer);
  buf = reinterpret_cast<Windows::Storage::Streams::IBuffer^>(insp.Get());
}
    
    #include <boost/asio/detail/push_options.hpp>
    
      // Returns an aggregate distance or similarity value between the baseline
  // image and the image in the last Compare() call (or the baseline image, if
  // Compare() was not called yet).
  // The interpretation of this aggregate value depends on the comparator used.
  virtual float distmap_aggregate() const = 0;
    
    std::vector<float> YUV420ToRGB(const std::vector<std::vector<float> >& yuv420,
                               const int width, const int height) {
  std::vector<std::vector<float> > yuv;
  yuv.push_back(yuv420[0]);
  std::vector<float> u = Upsample2x2(yuv420[1], width, height);
  std::vector<float> v = Upsample2x2(yuv420[2], width, height);
  yuv.push_back(Blur(u, width, height));
  yuv.push_back(Blur(v, width, height));
  return YUVToRGB(yuv);
}
    
    #include 'guetzli/output_image.h'
    
    // Decodes the parsed jpeg coefficients into an RGB image.
// There can be only either 1 or 3 image components, in either case, an RGB
// output image will be generated.
// Only YUV420 and YUV444 sampling factors are supported.
// Vector will be empty if a decoding error occurred.
std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg);
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     JPEGData* jpg) {
  static const int quant[3 * kDCTBlockSize] = {
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  };
  return EncodeRGBToJpeg(rgb, w, h, quant, jpg);
}
    
        printer->Print(vars, '// Generated by the gRPC C++ plugin.\n');
    printer->Print(vars,
                   '// If you make any local change, they will be lost.\n');
    printer->Print(vars, '// source: $filename$\n\n');
    
      // Appends the given text to the generated code as well as a newline
  // character.  Any text within {{ and }} delimeters is replaced by values
  // previously stored in the CodeWriter by calling SetValue above.  The newline
  // will be suppressed if the text ends with the \\ character.
  void operator+=(std::string text);
    
    int main(int /*argc*/, const char * /*argv*/ []) {
  // Build up a serialized buffer algorithmically:
  flatbuffers::FlatBufferBuilder builder;
    }
    
    std::string BaseGenerator::LastNamespacePart(const Namespace &ns) {
  if (!ns.components.empty())
    return ns.components.back();
  else
    return std::string('');
}
    
      bool any_generator = false;
  bool print_make_rules = false;
  bool raw_binary = false;
  bool schema_binary = false;
  bool grpc_enabled = false;
  std::vector<std::string> filenames;
  std::list<std::string> include_directories_storage;
  std::vector<const char *> include_directories;
  std::vector<const char *> conform_include_directories;
  std::vector<bool> generator_enabled(params_.num_generators, false);
  size_t binary_files_from = std::numeric_limits<size_t>::max();
  std::string conform_to_schema;