
        
            http://www.apache.org/licenses/LICENSE-2.0
    
    
    {}  // namespace tensorflow
    
    void ImportNumpy() {
  import_array1();
}
    
    namespace tensorflow {
    }
    
    #ifndef TENSORFLOW_STREAM_EXECUTOR_HOST_OR_DEVICE_SCALAR_H_
#define TENSORFLOW_STREAM_EXECUTOR_HOST_OR_DEVICE_SCALAR_H_
    
    bool UvTaskRunner::PostDelayedTask(const base::Location& from_here,
                                   base::OnceClosure task,
                                   base::TimeDelta delay) {
  auto* timer = new uv_timer_t;
  timer->data = this;
  uv_timer_init(loop_, timer);
  uv_timer_start(timer, UvTaskRunner::OnTimeout, delay.InMilliseconds(), 0);
  tasks_[timer] = std::move(task);
  return true;
}
    
    namespace atom {
    }
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
    #if defined(OS_POSIX)
// The 'magic' file descriptor that the relauncher process' write side of the
// pipe shows up on. Chosen to avoid conflicting with stdin, stdout, and
// stderr.
extern const int kRelauncherSyncFD;
#endif
    
      base::LaunchOptions options;
  options.new_process_group = true;  // detach
  options.fds_to_remap.push_back(std::make_pair(devnull.get(), STDERR_FILENO));
  options.fds_to_remap.push_back(std::make_pair(devnull.get(), STDOUT_FILENO));