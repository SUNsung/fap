
        
        #endif  // ATOM_BROWSER_UNRESPONSIVE_SUPPRESSOR_H_

    
      // Returns whether current process is browser process, currently we detect it
  // by checking whether current has used V8 Lock, but it might be a bad idea.
  static inline bool IsBrowserProcess() { return v8::Locker::IsActive(); }
    
    #ifndef ATOM_COMMON_API_REMOTE_CALLBACK_FREER_H_
#define ATOM_COMMON_API_REMOTE_CALLBACK_FREER_H_
#include 'atom/common/api/object_life_monitor.h'
#include 'content/public/browser/web_contents_observer.h'
    
    #ifndef ATOM_COMMON_DRAGGABLE_REGION_H_
#define ATOM_COMMON_DRAGGABLE_REGION_H_
    
      // A new background contents was opened by script. The source is the parent
  // profile and the details are BackgroundContentsOpenedDetails.
  NOTIFICATION_BACKGROUND_CONTENTS_OPENED,
    
     private:
  // The following methods are implemented by platform-specific implementations
  // of this class.
  //
  // Start/StopListening are called when transitioning between zero and nonzero
  // registered accelerators. StartListening will be called after
  // RegisterAcceleratorImpl and StopListening will be called after
  // UnregisterAcceleratorImpl.
  //
  // For RegisterAcceleratorImpl, implementations return false if registration
  // did not complete successfully.
  virtual void StartListening() = 0;
  virtual void StopListening() = 0;
  virtual bool RegisterAcceleratorImpl(const ui::Accelerator& accelerator) = 0;
  virtual void UnregisterAcceleratorImpl(
      const ui::Accelerator& accelerator) = 0;
    
    using namespace std;
    
    static PyObject* recursive_to_list(
    char* data, IntList sizes, IntList strides, int64_t dim,
    ScalarType scalarType, int64_t elementSize)
{
  int64_t ndim = sizes.size();
  if (dim == ndim) {
    return torch::utils::load_scalar(data, scalarType);
  }
  auto n = sizes[dim];
  auto list = THPObjectPtr(PyList_New(n));
  if (!list) throw python_error();
  for (int64_t i = 0; i < n; i++) {
    PyObject* obj = recursive_to_list(data, sizes, strides, dim + 1, scalarType, elementSize);
    if (!obj) throw python_error();
    PyList_SET_ITEM(list.get(), i, obj);
    data += strides[dim] * elementSize;
  }
  return list.release();
}
    
    #define THCPDoubleStorage_CData(obj)  (obj)->cdata
#define THCPFloatStorage_CData(obj)   (obj)->cdata
#define THCPLongStorage_CData(obj)    (obj)->cdata
#define THCPIntStorage_CData(obj)     (obj)->cdata
#define THCPShortStorage_CData(obj)   (obj)->cdata
#define THCPCharStorage_CData(obj)    (obj)->cdata
#define THCPByteStorage_CData(obj)    (obj)->cdata
    
    #endif
    
    #endif

    
      std::unique_ptr<ManagerServerSocket> srv_socket;
  try {
    char tmpfile[L_tmpnam];
    if (std::tmpnam(tmpfile) == NULL)
      throw std::runtime_error('could not generate a random filename for manager socket');
    // TODO: better strategy for generating tmp names
    // TODO: retry on collisions - this can easily fail
    srv_socket.reset(new ManagerServerSocket(std::string(tmpfile)));
    register_fd(srv_socket->socket_fd);
    print_init_message(tmpfile);
    DEBUG('opened socket %s', tmpfile);
  } catch(...) {
    print_init_message('ERROR');
    throw;
  }
    
    
    {  THDTensor_(free)(ra_);
}
    
    #endif  // COMPONENTS_GRPC_SUPPORT_INCLUDE_BIDIRECTIONAL_STREAM_H_

    
      ClientConfig client_config;
  client_config.set_client_type(SYNC_CLIENT);
  client_config.set_outstanding_rpcs_per_channel(1);
  client_config.set_client_channels(1);
  client_config.set_rpc_type(UNARY);
  client_config.mutable_load_params()->mutable_closed_loop();
    
    namespace routeguide {
    }
    
    #include <utility>
    
    void SecureAuthContext::AddProperty(const grpc::string& key,
                                    const grpc::string_ref& value) {
  if (!ctx_) return;
  grpc_auth_context_add_property(ctx_, key.c_str(), value.data(), value.size());
}
    
    static void get_resource_usage(double* utime, double* stime) {
#ifdef __linux__
  struct rusage usage;
  getrusage(RUSAGE_SELF, &usage);
  *utime = time_double(&usage.ru_utime);
  *stime = time_double(&usage.ru_stime);
#else
  *utime = 0;
  *stime = 0;
#endif
}
    
    #include <map>
#include <mutex>
    
    struct gpr_subprocess;
    
    #include <yoga/Yoga.h>
    
    
    {
    {
    {  return out;
}
}
}

    
    #pragma once
    
    
    {} // namespace facebook

    
    private:
  void ref() {
    ++m_refcount;
  }
    
    #include <fb/visibility.h>
    
    template <typename T>
inline bool operator!=(std::nullptr_t ptr, const RefPtr<T>& ref) {
  return ref.get() != ptr;
}
    
    
    {  pthread_key_t m_key;
  CleanupFunction m_cleanup;
};
    
    namespace benchmark {
namespace internal {
// The arraysize(arr) macro returns the # of elements in an array arr.
// The expression is a compile-time constant, and therefore can be
// used in defining new arrays, for example.  If you use arraysize on
// a pointer by mistake, you will get a compile-time error.
//
    }
    }
    
      // REQUIRES: timer is not running
  double manual_time_used() {
    CHECK(!running_);
    return manual_time_used_;
  }
    
    Benchmark* Benchmark::ThreadPerCpu() {
  thread_counts_.push_back(CPUInfo::Get().num_cpus);
  return this;
}
    
    // Return a vector containing the bigO and RMS information for the specified
// list of reports. If 'reports.size() < 2' an empty vector is returned.
std::vector<BenchmarkReporter::Run> ComputeBigO(
    const std::vector<BenchmarkReporter::Run>& reports);
    
    void Finish(UserCounters *l, double cpu_time, double num_threads) {
  for (auto &c : *l) {
    c.second.value = Finish(c.second, cpu_time, num_threads);
  }
}
    
    #define VLOG(x)                                                               \
  (::benchmark::internal::GetLogInstanceForLevel(x) << '-- LOG(' << x << '):' \
                                                                         ' ')
    
    #define RELEASE(...) \
  THREAD_ANNOTATION_ATTRIBUTE__(release_capability(__VA_ARGS__))