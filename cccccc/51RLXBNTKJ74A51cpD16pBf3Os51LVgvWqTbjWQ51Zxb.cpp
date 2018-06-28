
        
        void PartialRunMgr::PartialRunDone(int step_id, StatusCallback done,
                                   const Status& status) {
  Status callback_status;
  {
    mutex_lock l(mu_);
    auto run_it = step_id_to_partial_run_.find(step_id);
    if (run_it == step_id_to_partial_run_.end()) {
      return;
    }
    run_it->second->final_status.Update(status);
    if (!run_it->second->executor_done) {
      // If we found the partial_run, we set the final callback to call only
      // when the executor is completely done.
      run_it->second->final_callback = std::move(done);
      return;
    }
    callback_status = run_it->second->final_status;
  }
  // Otherwise we call the callback immediately.
  done(callback_status);
  mutex_lock l(mu_);
  step_id_to_partial_run_.erase(step_id);
}
    
    /** scalar_sigmoid_fast_derivative_op
  * \ingroup CXX11_NeuralNetworks_Module
  * \brief Template functor to compute the fast derivative of a sigmoid
  *
  * Input should be the backpropagated gradient.
  *
  * \sa class CwiseUnaryOp, Cwise::sigmoid_fast_derivative()
  */
template <typename T>
struct scalar_sigmoid_fast_derivative_op {
  EIGEN_EMPTY_STRUCT_CTOR(scalar_sigmoid_fast_derivative_op)
  EIGEN_DEVICE_FUNC EIGEN_STRONG_INLINE T operator()(const T& y) const {
    const T one = T(1);
    return (one - y) * y;
  }
    }
    
    // Prefetching support
//
// Defined behavior on some of the uarchs:
// PREFETCH_HINT_T0:
//   prefetch to all levels of the hierarchy (except on p4: prefetch to L2)
// PREFETCH_HINT_NTA:
//   p4: fetch to L2, but limit to 1 way (out of the 8 ways)
//   core: skip L2, go directly to L1
//   k8 rev E and later: skip L2, can go to either of the 2-ways in L1
enum PrefetchHint {
  PREFETCH_HINT_T0 = 3,  // More temporal locality
  PREFETCH_HINT_T1 = 2,
  PREFETCH_HINT_T2 = 1,  // Less temporal locality
  PREFETCH_HINT_NTA = 0  // No temporal locality
};
template <PrefetchHint hint>
void prefetch(const void* x);
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    
    {}  // namespace tensorflow
    
    class RemoveDeviceTest : public ::testing::Test {
 protected:
  void TestRemoveDevice() {
    GraphDef graph_def;
    }
    }
    
    
    {inline void AddTraceEvent(const TraceEvent &event, string *json) {
  Appendf(json, R'({'pid':%u,'tid':%u,'ts':%.5f,)', event.device_id(),
          event.resource_id(), event.timestamp_ps() / kPicosPerMicro);
  AppendEscapedName(json, event.name());
  StrAppend(json, ',');
  if (event.duration_ps() > 0) {
    Appendf(json, R'('ph':'X','dur':%.5f},)',
            event.duration_ps() / kPicosPerMicro);
  } else {
    StrAppend(json, R'('ph':'i','s':'t'},)');
  }
}
    
      // Size of the buffer used for caching the data read from source file.
  int64 input_buffer_size = 256 << 10;
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    // These are all common classes it's handy to reference with no namespace.
using tensorflow::Flag;
using tensorflow::Status;
using tensorflow::Tensor;
using tensorflow::int32;
using tensorflow::string;
    
     private:
  // Size of padded input to weight matrices = ni_ + no_ for 1-D operation
  // and ni_ + 2 * no_ for 2-D operation. Note that there is a phantom 1 input
  // for the bias that makes the weight matrices of size [na + 1][no].
  int32_t na_;
  // Number of internal states. Equal to no_ except for a softmax LSTM.
  // ns_ is NOT serialized, but is calculated from gate_weights_.
  int32_t ns_;
  // Number of additional feedback states. The softmax types feed back
  // additional output information on top of the ns_ internal states.
  // In the case of a binary-coded (EMBEDDED) softmax, nf_ < no_.
  int32_t nf_;
  // Flag indicating 2-D operation.
  bool is_2d_;
    
    // CALL ONLY from a signal handler! Writes a crash image to stderr.
void signal_exit(int signal_code) {
  tprintf('Received signal %d!\n', signal_code);
#ifdef __linux__
#ifndef ANDROID
  int thread_id = syscall(SYS_gettid) % kMaxNumThreadPixes;
#else
  int thread_id = gettid() % kMaxNumThreadPixes;
#endif
  if (global_crash_pixes[thread_id] != nullptr) {
    fprintf(stderr, 'Crash caused by image with resolution %d\n',
            pixGetYRes(global_crash_pixes[thread_id]));
    fprintf(stderr, '<Cut here>\n');
    pixWriteStreamPng(stderr, global_crash_pixes[thread_id], 0.0);
    fprintf(stderr, '\n<End cut>\n');
  }
  // Raise an uncaught signal, so as to get a useful stack trace.
  raise(SIGILL);
#else
  abort();
#endif
}
    
      /// Return the id of the T object.
  /// This method NEEDS a compare_callback to be passed to
  /// set_compare_callback.
  int get_id(T object) const;
    
    #define YG_NODE_STYLE_PROPERTY(type, name, paramName)                               \
  WIN_EXPORT void YGNodeStyleSet##name(const YGNodeRef node, const type paramName); \
  WIN_EXPORT type YGNodeStyleGet##name(const YGNodeRef node);
    
    template <typename R, typename... Args>
struct jmethod_traits_from_cxx<R(Args...)> : jmethod_traits<detail::jni_sig_from_cxx<R(Args...)>> {
};
    
    // TODO(t10737622): Improve on-device symbolification
void getStackTraceSymbols(vector<StackTraceElement>& symbols,
                          const vector<InstructionPointer>& trace) {
  symbols.clear();
  symbols.reserve(trace.size());
    }
    
    
    {};

    
     public: // Dirtiness accessors
    
    void assertInternal(const char* formatstr ...) {
    va_list va_args;
    va_start(va_args, formatstr);
    vsnprintf(sAssertBuf, sizeof(sAssertBuf), formatstr, va_args);
    va_end(va_args);
    if (gAssertHandler != NULL) {
        gAssertHandler(sAssertBuf);
    }
    FBLOG(LOG_FATAL, 'fbassert', '%s', sAssertBuf);
    // crash at this specific address so that we can find our crashes easier
    *(int*)0xdeadb00c = 0;
    // let the compiler know we won't reach the end of the function
     __builtin_unreachable();
}
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
    namespace facebook {
    }