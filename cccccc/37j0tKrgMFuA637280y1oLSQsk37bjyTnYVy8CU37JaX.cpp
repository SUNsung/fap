
        
          static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
     private:
  atom::RenderProcessPreferences preferences_;
    
    namespace atom {
    }
    
    #include <string>
    
    namespace atom {
    }
    
    URLRequestAboutJob::URLRequestAboutJob(net::URLRequest* request,
                                       net::NetworkDelegate* network_delegate)
    : net::URLRequestJob(request, network_delegate), weak_ptr_factory_(this) {}
    
    class URLRequestAboutJob : public net::URLRequestJob {
 public:
  URLRequestAboutJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    ```
    
    
    {          return out;
        });
OPERATOR_SCHEMA(Float16ConstantFill)
    .NumInputs(0)
    .NumOutputs(1)
    .TensorInferenceFunction(Float16FillerTensorInference)
    .Arg('value', 'The value for the elements of the output tensor.')
    .Arg('shape', 'The shape of the output tensor.')
    .Output(
        0,
        'output',
        'Output tensor of constant values specified by 'value'');
    
    OPERATOR_SCHEMA(Im2Col)
    .NumInputs(1)
    .NumOutputs(1)
    .SetDoc('The Im2Col operator from Matlab.')
    .TensorInferenceFunction(
        [](const OperatorDef& def, const vector<TensorShape>& in) {
          ArgumentHelper helper(def);
          auto pad = helper.GetSingleArgument<int>('pad', 0);
          auto kernel_h = helper.GetSingleArgument<int>(
              'kernel_h', helper.GetSingleArgument<int>('kernel', 0));
          auto kernel_w = helper.GetSingleArgument<int>(
              'kernel_w', helper.GetSingleArgument<int>('kernel', 0));
          auto dilation_h = helper.GetSingleArgument<int>(
              'dilation_h', helper.GetSingleArgument<int>('dilation', 1));
          auto dilation_w = helper.GetSingleArgument<int>(
              'dilation_w', helper.GetSingleArgument<int>('dilation', 1));
          auto stride_h = helper.GetSingleArgument<int>(
              'stride_h', helper.GetSingleArgument<int>('stride', 1));
          auto stride_w = helper.GetSingleArgument<int>(
              'stride_w', helper.GetSingleArgument<int>('stride', 1));
          auto order = StringToStorageOrder(
              helper.GetSingleArgument<string>('order', 'NCHW'));
    }
    
    template <typename T, class Context>
class BernoulliJSDOp final : public Operator<Context> {
 public:
  USE_SIMPLE_CTOR_DTOR(BernoulliJSDOp);
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  bool RunOnDevice() override;
};
    
      grpc_error* Init(grpc_call_element* elem,
                   const grpc_call_element_args* args) override;
    
    MeasureDouble RpcServerServerLatency() {
  static const auto measure = MeasureDouble::Register(
      kRpcServerServerLatencyMeasureName,
      'Time between first byte of request received to last byte of response '
      'sent, or terminal error',
      kUnitMilliseconds);
  return measure;
}
    
    ::opencensus::stats::MeasureInt64 RpcServerSentMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerSentBytesPerRpc();
::opencensus::stats::MeasureInt64 RpcServerReceivedMessagesPerRpc();
::opencensus::stats::MeasureDouble RpcServerReceivedBytesPerRpc();
::opencensus::stats::MeasureDouble RpcServerServerLatency();
::opencensus::stats::MeasureInt64 RpcServerCompletedRpcs();
    
    #ifndef GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_SERVER_FILTER_H
#define GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_SERVER_FILTER_H
    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    #include <grpc/support/log.h>
    
    
    {  virtual void printTo(std::ostream& out) const;
};
    
      // Get an integral value, 0 or 1, for whether a syscall table pointer is modified.
  auto f1 = osquery::readFile(kKernelSyscallAddrModifiedPath, content);
  if (f1.ok()) {
    boost::trim(content);
    syscall_addr_modified = content;
  } else {
    VLOG(1) << 'Cannot read file: ' << kKernelSyscallAddrModifiedPath;
    return results;
  }
    
      STDMETHODIMP RegisterOutputCallbacks::QueryInterface(
      THIS_ _In_ REFIID InterfaceId, _Out_ PVOID* Interface) {
    *Interface = nullptr;
    if (IsEqualIID(InterfaceId, __uuidof(IUnknown)) ||
        IsEqualIID(InterfaceId, __uuidof(IDebugOutputCallbacks))) {
      *Interface = (IDebugOutputCallbacks*)this;
      AddRef();
      return S_OK;
    } else {
      return E_NOINTERFACE;
    }
  }
    
    
    {
    {struct mei_version {
  uint32_t important_details[7];
  uint16_t major;
  uint16_t minor;
  uint16_t hotfix;
  uint16_t build;
  uint16_t r_major;
  uint16_t r_minor;
  uint16_t r_hotfix;
  uint16_t r_build;
  uint16_t codes[6];
};
}
}

    
    Expected<EbpfTracepoint, LinuxProbesControl::Error> createTracepointForSyscall(
    syscall::EventType type, PerfEventCpuMap const& cpu_map) {
  auto program_exp = genLinuxProgram(BPF_PROG_TYPE_TRACEPOINT, cpu_map, type);
  if (program_exp.isError()) {
    return createError(LinuxProbesControl::Error::SystemEbpf,
                       'could not load program to track syscall ',
                       program_exp.takeError())
           << to<std::string>(type);
  }
  auto tracing_path_exp = toTracingPath(type);
  if (tracing_path_exp.isError()) {
    return createError(LinuxProbesControl::Error::InvalidArgument,
                       '',
                       tracing_path_exp.takeError());
  }
  auto sys_event_exp = tracing::NativeEvent::load(tracing_path_exp.take());
  if (sys_event_exp.isError()) {
    return createError(LinuxProbesControl::Error::SystemNativeEvent,
                       'could not enable linux event for ',
                       sys_event_exp.takeError())
           << to<std::string>(type);
  }
  auto tracepoint_exp =
      events::EbpfTracepoint::load(sys_event_exp.take(), program_exp.take());
  if (tracepoint_exp.isError()) {
    return createError(
               LinuxProbesControl::Error::SystemTracepoint,
               'could not attach tracing prograp to the native event of ',
               tracepoint_exp.takeError())
           << to<std::string>(type);
  }
  return tracepoint_exp.take();
}