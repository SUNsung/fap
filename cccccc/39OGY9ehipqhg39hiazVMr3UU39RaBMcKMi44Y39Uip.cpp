
        
        
    {  DISALLOW_COPY_AND_ASSIGN(Locker);
};
    
    namespace atom {
    }
    
    // MonitorFinder maps a RenderFrameHost to the display ID on which the widget
// is painting. This class operates on the IO thread while the RenderFrameHost
// is on the UI thread, so the value returned by GetMonitor() may be 0 until
// the information can be retrieved asynchronously.
class MonitorFinder : public base::RefCountedThreadSafe<MonitorFinder> {
 public:
  MonitorFinder(int process_id, int render_frame_id);
    }
    
    #include 'chrome/browser/speech/tts_platform.h'
    
    #if GTEST_HAS_PARAM_TEST
    
    // Factory interface for death tests.  May be mocked out for testing.
class DeathTestFactory {
 public:
  virtual ~DeathTestFactory() { }
  virtual bool Create(const char* statement, const RE* regex,
                      const char* file, int line, DeathTest** test) = 0;
};
    
      // Copy an existing linked_ptr<>, adding ourselves to the list of references.
  template <typename U> linked_ptr(linked_ptr<U> const& ptr) { copy(&ptr); }
  linked_ptr(linked_ptr const& ptr) {  // NOLINT
    assert(&ptr != this);
    copy(&ptr);
  }
    
      // Creates an ANSI string from the given wide string, allocating
  // memory using new. The caller is responsible for deleting the return
  // value using delete[]. Returns the ANSI string, or NULL if the
  // input is NULL.
  //
  // The returned string is created using the ANSI codepage (CP_ACP) to
  // match the behaviour of the ANSI versions of Win32 calls and the
  // C runtime.
  static const char* Utf16ToAnsi(LPCWSTR utf16_str);
#endif
    
      GTEST_DECLARE_TUPLE_AS_FRIEND_
    
    // #ifdef __GNUC__ is too general here.  It is possible to use gcc without using
// libstdc++ (which is where cxxabi.h comes from).
# if GTEST_HAS_CXXABI_H_
#  include <cxxabi.h>
# elif defined(__HP_aCC)
#  include <acxx_demangle.h>
# endif  // GTEST_HASH_CXXABI_H_
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    // A simple parser for the json db file. It requires the db file to have the
// exact form of [{'location': { 'latitude': 123, 'longitude': 456}, 'name':
// 'the name can be empty' }, { ... } ... The spaces will be stripped.
class Parser {
 public:
  explicit Parser(const std::string& db) : db_(db) {
    // Remove all spaces.
    db_.erase(
        std::remove_if(db_.begin(), db_.end(), isspace),
        db_.end());
    if (!Match('[')) {
      SetFailedAndReturnFalse();
    }
  }
    }
    
    std::vector<grpc::string_ref> SecureAuthContext::GetPeerIdentity() const {
  if (!ctx_) {
    return std::vector<grpc::string_ref>();
  }
  grpc_auth_property_iterator iter = grpc_auth_context_peer_identity(ctx_);
  std::vector<grpc::string_ref> identity;
  const grpc_auth_property* property = nullptr;
  while ((property = grpc_auth_property_iterator_next(&iter))) {
    identity.push_back(
        grpc::string_ref(property->value, property->value_length));
  }
  return identity;
}
    
    static void get_cpu_usage(unsigned long long* total_cpu_time,
                          unsigned long long* idle_cpu_time) {
#ifdef __linux__
  std::ifstream proc_stat('/proc/stat');
  proc_stat.ignore(5);
  std::string cpu_time_str;
  std::string first_line;
  std::getline(proc_stat, first_line);
  std::stringstream first_line_s(first_line);
  for (int i = 0; i < 10; ++i) {
    std::getline(first_line_s, cpu_time_str, ' ');
    *total_cpu_time += std::stol(cpu_time_str);
    if (i == 3) {
      *idle_cpu_time = std::stol(cpu_time_str);
    }
  }
#else
  gpr_log(GPR_INFO, 'get_cpu_usage(): Non-linux platform is not supported.');
#endif
}
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
    template<typename T> inline
dnnError_t dnnPoolingCreateBackward(
    dnnPrimitive_t* pPooling,
    dnnPrimitiveAttributes_t attributes,
    dnnAlgorithm_t op,
    const dnnLayout_t srcLayout,
    const size_t kernelSize[],
    const size_t kernelStride[],
    const int inputOffset[],
    const dnnBorder_t border_type);
    
        // add it to the network
    AddNodeToNetIfNotYet(newNode);
    
    PrefetchGPUDataTransferer::PrefetchGPUDataTransferer(int deviceId) : GranularGPUDataTransferer(deviceId, nullptr, nullptr, true)
{
     cudaStreamCreateWithFlags(&m_stream, cudaStreamNonBlocking) || 'cudaStreamCreateWithFlags failed (PrefetchGPUDataTransferer ctor)';
}
    
                shared_ptr<ComputationNode<ElemType>> runMeanNode = static_pointer_cast<ComputationNode<ElemType>>(runMeanParameterPtr);
            shared_ptr<ComputationNode<ElemType>> runStdNode  = static_pointer_cast<ComputationNode<ElemType>>(runStdParameterPtr);
    
    template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, float>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, double>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, float>(const ConfigParameters& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, double>(const ConfigParameters& config);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, float> (const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, double>(const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);

    
    /*static*/ class ProgressTracing
{
    bool m_enabled;
    bool m_tracingFlag;
    bool m_timestampFlag;        // TODO: What does this do? TODO: camelCase
    size_t m_totalNumberOfSteps; // total number of epochs in entire training run
    size_t m_currentStepOffset;  // current offset
    Timer m_progressTracingTimer;
    }
    
    // Compares two ASCII strings ignoring the case.
// TODO: Should switch to boost, boost::iequal should be used instead.
// TODO: we already have EqualCI() in Basics.h which does the same thing.
template<class TElement>
inline bool AreEqualIgnoreCase(
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement>>& s1,
    const std::basic_string<TElement, char_traits<TElement>, allocator<TElement> >& s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    }
    
    // ---------------------------------------------------------------------------
// const_array_ref -- same as array_ref for 'const' (read-only) pointers
// ---------------------------------------------------------------------------
    
        float4 operator&(const float4& other) const
    {
        return _mm_and_ps(v, other);
    }
    float4 operator|(const float4& other) const
    {
        return _mm_or_ps(v, other);
    }
    float4 operator+(const float4& other) const
    {
        return _mm_add_ps(v, other);
    }
    float4 operator-(const float4& other) const
    {
        return _mm_sub_ps(v, other);
    }
    float4 operator*(const float4& other) const
    {
        return _mm_mul_ps(v, other);
    }
    float4 operator/(const float4& other) const
    {
        return _mm_div_ps(v, other);
    }
    
      /// Set the timer's expiry time relative to now.
  /**
   * This function sets the expiry time. Any pending asynchronous wait
   * operations will be cancelled. The handler for each cancelled operation will
   * be invoked with the boost::asio::error::operation_aborted error code.
   *
   * @param expiry_time The expiry time to be used for the timer.
   *
   * @return The number of asynchronous operations that were cancelled.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @note If the timer has already expired when expires_from_now() is called,
   * then the handlers for asynchronous wait operations will:
   *
   * @li have already been invoked; or
   *
   * @li have been queued for invocation in the near future.
   *
   * These handlers can no longer be cancelled, and therefore are passed an
   * error code that indicates the successful completion of the wait operation.
   */
  std::size_t expires_from_now(const duration& expiry_time)
  {
    boost::system::error_code ec;
    std::size_t s = this->service.expires_from_now(
        this->implementation, expiry_time, ec);
    boost::asio::detail::throw_error(ec, 'expires_from_now');
    return s;
  }
    
    namespace boost {
namespace asio {
    }
    }
    
    template <typename CompletionCondition>
class base_from_completion_cond
{
protected:
  explicit base_from_completion_cond(CompletionCondition completion_condition)
    : completion_condition_(completion_condition)
  {
  }
    }
    
    #include <boost/asio/detail/config.hpp>
    
      // Constructor for a full fenced block.
  explicit gcc_arm_fenced_block(full_t)
  {
    barrier();
  }
    
    #ifndef BOOST_ASIO_DETAIL_IMPL_BUFFER_SEQUENCE_ADAPTER_IPP
#define BOOST_ASIO_DETAIL_IMPL_BUFFER_SEQUENCE_ADAPTER_IPP
    
    int poll_read(int d, state_type state, boost::system::error_code& ec)
{
  if (d == -1)
  {
    ec = boost::asio::error::bad_descriptor;
    return -1;
  }
    }
    
    void dev_poll_reactor::interrupt()
{
  interrupter_.interrupt();
}