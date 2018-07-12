
    {    // temporary solution, have to make something more precise
    corner = contour[min_idx];
    return;
}
    
    #ifndef OPENCV_CUDA_EMULATION_HPP_
#define OPENCV_CUDA_EMULATION_HPP_
    
    #ifndef OPENCV_CORE_HAL_INTERNAL_HPP
#define OPENCV_CORE_HAL_INTERNAL_HPP
    
    namespace folly {
    }
    
      BlockingQueueAddResult add(T item) override {
    queue_.enqueue(std::move(item));
    return sem_.post();
  }
    
    
    {    Node(T e, Node* n) : elem_(e), next_(n) {}
  };
    
    template <typename DigestT, typename ClockT>
BufferedDigest<DigestT, ClockT>::BufferedDigest(
    typename ClockT::duration bufferDuration,
    size_t bufferSize,
    size_t digestSize)
    : BufferedStat<DigestT, ClockT>(bufferDuration, bufferSize, digestSize),
      digest_(digestSize) {}
    
      std::vector<std::thread> threads;
  threads.reserve(nThreads);
  BENCHMARK_SUSPEND {
    for (size_t i = 0; i < nThreads; ++i) {
      threads.emplace_back([&]() {
        barrier->wait();
        for (size_t iter = 0; iter < iters; ++iter) {
          buffer->append(iter);
        }
        barrier->wait();
      });
    }
    barrier->wait();
  }
  barrier->wait();
    
      do {
    DCHECK(!queue_.empty());
    Func func = std::move(queue_.front());
    queue_.pop();
    lock.unlock();
    }
    
      static KeepAlive<SerialExecutor> create(
      KeepAlive<Executor> parent = getKeepAliveToken(getCPUExecutor().get()));
    
    DEFINE_FIND_STATIC_METHOD(KXlog_setLogLevel, KXlog, 'setLogLevel', '(I)V')
JNIEXPORT void JNICALL Java_com_tencent_mars_xlog_Xlog_setLogLevel
  (JNIEnv *, jclass, jint _log_level) {
	xlogger_SetLevel((TLogLevel)_log_level);
}
    
    class DumpCrashStack {
  public:
    DumpCrashStack() {}
    ~DumpCrashStack() {}
    }
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    {  private:
    void* object_;
};
    
        if (st.url_length + st.head_length > st.total_length) return __LINE__;
    
    
    {    void throw_exception( std::exception const & e ) {
        xfatal2(TSF'boost exception:%_', e.what());
        
#ifdef ANDROID
        char stack[4096] = {0};
        android_callstack(stack, sizeof(stack));
        xfatal2(TSF'%_', stack);
#endif
    }
}

    
    // true pass, false limit
bool CommFrequencyLimit::Check() {
    uint64_t now = ::gettickcount();
    if (!touch_times_.empty() && (now<touch_times_.front()) ) { //if user modify the time, amend it
    	xwarn2(TSF'Must be modified time.now=%_', now);
    	size_t size = touch_times_.size();
    	touch_times_.clear();
    	for (size_t i=0; i<size; ++i) {
    		touch_times_.push_back(now-1);
    	}
    }
    }
    
        template<typename T>
    T* _Service() {
        if (m_dependservices.end() != m_dependservices.find(T::ServiceName()))
            return (T*)m_dependservices[T::ServiceName()];
    }
    
    // Licensed under the MIT License (the 'License'); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT