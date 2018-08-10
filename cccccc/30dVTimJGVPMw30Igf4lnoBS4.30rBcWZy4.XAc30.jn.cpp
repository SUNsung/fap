
        
        // Generate param traits read methods.
#include 'ipc/param_traits_read_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC
    
      base::WaitableEvent done(false, false);
  BrowserThread::PostTask(
      BrowserThread::IO, FROM_HERE,
      base::Bind(&SetProxyConfigCallback, &done,
                 make_scoped_refptr(context_getter), config));
  done.Wait();
    
    Base::Base(int id,
           const base::WeakPtr<ObjectManager>& object_manager,
           const base::DictionaryValue& option,
	   const std::string& extension_id)
    : extension_id_(extension_id),
      id_(id),
      delay_destruction_(false),
      pending_destruction_(false),
      object_manager_(object_manager) {
}
    
    
    {}  // namespace nwapi
    
    namespace content {
class RenderView;
}
    
    
    {}  // namespace nwapi
    
     protected:
  ~NwObjAllocateIdFunction() override;
    
      // implement nw.Screen.stopMonitor()
  class NwScreenStopMonitorFunction : public NWSyncExtensionFunction {
  public:
    NwScreenStopMonitorFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
      Linear model(2, 8);
  SGD optimizer(model->parameters(), 0.1);
    
      /// Helper function to construct a vector of zero-d out variables, each the
  /// same shape as the variable at the corresponding index in the input
  /// container.
  template <typename ParameterContainer>
  std::vector<Tensor> zero_buffers_like(const ParameterContainer& parameters) {
    std::vector<Tensor> result;
    result.reserve(parameters.size());
    for (auto& parameter : parameters) {
      result.push_back(torch::zeros_like(parameter));
    }
    return result;
  }
    
    
    {  if (!at::isFloatingType(self.type().scalarType()) || self.dim() > 2 || self.dim() < 1) {
    std::ostringstream ss;
    REPR(ss) << ': expected a 1D or 2D tensor of floating types';
    AT_ERROR(ss.str());
  }
  Tensor input = self;
  if (self.dim() == 1) {
    input = input.unsqueeze(0);
  }
  int64_t batch = input.size(0);
  int64_t len = input.size(1);
  if (n_fft <= 0 || n_fft > len) {
    std::ostringstream ss;
    REPR(ss) << ': expected 0 < n_fft < ' << len
             << ', but got n_fft=' << win_length;
    AT_ERROR(ss.str());
  }
  if (hop_length <= 0) {
    std::ostringstream ss;
    REPR(ss) << ': expected hop_length > 0, but got hop_length=' << hop_length;
    throw std::runtime_error(ss.str());
  }
  if (win_length <= 0 || win_length > n_fft) {
    std::ostringstream ss;
    REPR(ss) << ': expected 0 < win_length <= n_fft, but got win_length='
             << win_length;
    AT_ERROR(ss.str());
  }
  if (window.defined() && (window.dim() != 1 || window.size(0) != win_length)) {
    std::ostringstream ss;
    REPR(ss) << ': expected a 1D window tensor of size equal to win_length='
             << win_length << ', but got window with size ' << window.sizes();
    AT_ERROR(ss.str());
  }
  #undef REPR
  auto window_ = window;
  if (win_length < n_fft) {
    // pad center
    window_ = at::zeros({n_fft}, self.options());
    auto left = (n_fft - win_length) / 2;
    if (window.defined()) {
      window_.narrow(0, left, win_length).copy_(window);
    } else {
      window_.narrow(0, left, win_length).fill_(1);
    }
  }
  int64_t n_frames = 1 + (len - n_fft) / hop_length;
  // time2col
  input = input.as_strided(
    {batch, n_frames, n_fft},
    {input.stride(0), hop_length * input.stride(1), input.stride(1)}
  );
  if (window_.defined()) {
    input = input.mul(window_);
  }
  // rfft and transpose to get (batch x fft_size x num_frames)
  auto out = input.rfft(1, normalized, onesided).transpose_(1, 2);
  if (self.dim() == 1) {
    return out.squeeze_(0);
  } else {
    return out;
  }
}
    
    
    { protected:
  bool should_output_softmax_ = false;
};
    
    template <typename T, class Context>
class BatchSparseToDenseOp : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  BatchSparseToDenseOp(const OperatorDef& operator_def, Workspace* ws)
      : Operator<Context>(operator_def, ws),
        OP_SINGLE_ARG(TIndex, 'dense_last_dim', dense_last_dim_, -1),
        OP_SINGLE_ARG(T, 'default_value', default_value_, static_cast<T>(0)) {}
  bool RunOnDevice() override;
    }
    
    bool THPWrapper_check(PyObject * obj)
{
  return (PyObject*)Py_TYPE(obj) == THPWrapperClass;
}
    
    template<typename T>
inline void __appendData(ByteArray& str, const T& arg,
    std::false_type is_generator, std::false_type is_tensor, std::false_type is_storage) {
  _appendType(str, type_traits<T>::type);
  _appendScalar<T>(str, arg);
}
    
    
    {
    { private:
  friend class TLSConfigTests;
};
}

    
      cm['num'].affinity = INTEGER_TYPE;
  cm['num'].add(Constraint(EQUALS, 'hello'));
    
    
    {  EXPECT_EQ(expected, toAsciiTime(&result));
}
    
    using namespace osquery;
    
    #include <benchmark/benchmark.h>
    
    #include <boost/algorithm/string/join.hpp>
    
     protected:
  Status internalSetup() override;
  Outcome internalSend(const Batch& batch) override;
  void initializeRecord(Record& record,
                        Aws::Utils::ByteBuffer& buffer) const override;
    
     protected:
  // These constructors are made available for subclasses to use, but
  // subclasses should expose appropriate constructors to their users.
  explicit BufferedLogForwarder(const std::string& service_name,
                                const std::string& name)
      : InternalRunnable(service_name),
        log_period_(kLogPeriod),
        max_log_lines_(kMaxLogLines),
        index_name_(name) {}
    
    // GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_IMPL_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
IMGUI_IMPL_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
IMGUI_IMPL_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

    
    IMGUI_IMPL_API bool     ImGui_Marmalade_Init(bool install_callbacks);
IMGUI_IMPL_API void     ImGui_Marmalade_Shutdown();
IMGUI_IMPL_API void     ImGui_Marmalade_NewFrame();
IMGUI_IMPL_API void     ImGui_Marmalade_RenderDrawData(ImDrawData* draw_data);
    
            // 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
        if (show_demo_window)
            ImGui::ShowDemoWindow(&show_demo_window);
    
    
    {    return 0;
}

    
    
    {} // namespace folly

    
      Atom<Node*> head_;
    
    #include <folly/synchronization/Hazptr.h>
    
    #include <string>
    
    ThreadWheelTimekeeper::~ThreadWheelTimekeeper() {
  eventBase_.runInEventBaseThreadAndWait([this]{
    wheelTimer_->cancelAll();
    eventBase_.terminateLoopSoon();
  });
  thread_.join();
}
    
    FOLLY_ALWAYS_INLINE void __builtin___clear_cache(char* begin, char* end) {
  if (folly::kIsArchAmd64) {
    // x86_64 doesn't require the instruction cache to be flushed after
    // modification.
  } else {
    // Default to flushing it for everything else, such as ARM.
    folly::portability::detail::call_flush_instruction_cache_self_pid(
        static_cast<void*>(begin), static_cast<size_t>(end - begin));
  }
}
    
    template <typename T>
FOLLY_ALWAYS_INLINE void hazptr_holder::reset(const T* ptr) noexcept {
  auto p = static_cast<hazptr_obj*>(const_cast<T*>(ptr));
  HAZPTR_DEBUG_PRINT(this << ' ' << ptr << ' p:' << p);
  DCHECK(hazptr_); // UB if *this is empty
  hazptr_->set(p);
}
    
    namespace detail {
// note that construct and destroy here are methods, not short names for
// the constructor and destructor
FOLLY_CREATE_MEMBER_INVOKE_TRAITS(AllocatorConstruct_, construct);
FOLLY_CREATE_MEMBER_INVOKE_TRAITS(AllocatorDestroy_, destroy);
    }
    
    ///////////////////////////////////
#endif // FOLLY_F14_VECTOR_INTRINSICS_AVAILABLE
///////////////////////////////////

    
        auto allf = collect(futures);
    
    using namespace folly;
    
    void AbstractAuthResolver::setUserDefinedCred(std::string user,
                                              std::string password)
{
  userDefinedUser_ = std::move(user);
  userDefinedPassword_ = std::move(password);
}
    
      // Check if socket is connected. If socket is not connected and
  // there are other addresses to try, command is created using
  // InitiateConnectionCommandFactory and it is pushed to
  // DownloadEngine and returns false. If no addresses left, DlRetryEx
  // exception is thrown.
  bool checkIfConnectionEstablished(const std::shared_ptr<SocketCore>& socket,
                                    const std::string& connectedHostname,
                                    const std::string& connectedAddr,
                                    uint16_t connectedPort);
    
    
    {  virtual void dropCache(int64_t len, int64_t offset) CXX11_OVERRIDE;
};
    
      virtual void setChangeOption(bool f) CXX11_OVERRIDE;
    
    namespace aria2 {
    }
    
      bool tryAsPKCS12(const std::string& certfile);