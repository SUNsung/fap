
        
        #define THPDoubleStorage_Check(obj) \
    PyObject_IsInstance(obj, THPDoubleStorageClass)
#define THPFloatStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPHalfStorage_Check(obj) \
    PyObject_IsInstance(obj, THPFloatStorageClass)
#define THPLongStorage_Check(obj) \
    PyObject_IsInstance(obj, THPLongStorageClass)
#define THPIntStorage_Check(obj) \
    PyObject_IsInstance(obj, THPIntStorageClass)
#define THPShortStorage_Check(obj) \
    PyObject_IsInstance(obj, THPShortStorageClass)
#define THPCharStorage_Check(obj) \
    PyObject_IsInstance(obj, THPCharStorageClass)
#define THPByteStorage_Check(obj) \
    PyObject_IsInstance(obj, THPByteStorageClass)
    
    
void unregister_fd(int fd) {
  pollfds.erase(
    std::remove_if(pollfds.begin(), pollfds.end(),
        [fd](const struct pollfd &pfd) { return pfd.fd == fd; }),
    pollfds.end());
  client_sessions.erase(fd);
}
    
    void THDTensor_(cauchy)(THDTensor *self, THDGenerator *_generator, double median,
                        double sigma) {
  masterCommandChannel->sendMessage(
    packMessage(Functions::tensorCauchy, self, _generator, median, sigma),
    THDState::s_current_worker
  );
}
    
    
    {  // For fragments
  kFirstType = 2,
  kMiddleType = 3,
  kLastType = 4
};
static const int kMaxRecordType = kLastType;
    
      // Check that the file exists.
  ASSERT_TRUE(env_->FileExists('/dir/f'));
  ASSERT_OK(env_->GetFileSize('/dir/f', &file_size));
  ASSERT_EQ(0, file_size);
  ASSERT_OK(env_->GetChildren('/dir', &children));
  ASSERT_EQ(1, children.size());
  ASSERT_EQ('f', children[0]);
    
    const int kNumKeys = 1100000;
    
    #include 'leveldb/env.h'
#include 'port/port.h'
#include 'table/block.h'
#include 'util/coding.h'
#include 'util/crc32c.h'
    
    #endif  // STORAGE_LEVELDB_UTIL_HISTOGRAM_H_

    
    LookupKey::LookupKey(const Slice& user_key, SequenceNumber s) {
  size_t usize = user_key.size();
  size_t needed = usize + 13;  // A conservative estimate
  char* dst;
  if (needed <= sizeof(space_)) {
    dst = space_;
  } else {
    dst = new char[needed];
  }
  start_ = dst;
  dst = EncodeVarint32(dst, usize + 8);
  kstart_ = dst;
  memcpy(dst, user_key.data(), usize);
  dst += usize;
  EncodeFixed64(dst, PackSequenceAndType(s, kValueTypeForSeek));
  dst += 8;
  end_ = dst;
}
    
      // Finish building the block and return a slice that refers to the
  // block contents.  The returned slice will remain valid for the
  // lifetime of this builder or until Reset() is called.
  Slice Finish();
    
    
    {
    {} // namespace exception_tracer
} // namespace folly

    
    class OrderingTest : public testing::Test {};
    
    template <typename T>
void SingletonHolder<T>::createInstance() {
  if (creating_thread_.load(std::memory_order_acquire) ==
        std::this_thread::get_id()) {
    detail::singletonWarnCreateCircularDependencyAndAbort(type());
  }
    }
    
        std::lock_guard<std::mutex> lg(entry.mutex);
    if (entry.state == State::Living) {
      return;
    }
    
      // folly::Init() will automatically initialize the logging settings based on
  // the FOLLY_INIT_LOGGING_CONFIG declaration above and the --logging command
  // line flag.
  auto init = folly::Init(&argc, &argv);
    
    std::string fbLogFatalCheck() {
  folly::Logger logger('some.category');
  FB_LOG(logger, FATAL) << 'we always crash';
  // This function mostly exists to make sure the compiler does not warn
  // about a missing return statement here.
}
    
    void SerialExecutor::add(Func func) {
  {
    std::lock_guard<std::mutex> lock(mutex_);
    queue_.push(std::move(func));
  }
  parent_->add([keepAlive = getKeepAliveToken(this)] { keepAlive->run(); });
}
    
      using UniquePtr = std::unique_ptr<SerialExecutor, Deleter>;
  [[deprecated('Replaced by create')]]
  static UniquePtr createUnique(
      std::shared_ptr<Executor> parent = getCPUExecutor());
    
    FOLLY_ALWAYS_INLINE int __builtin_clzll(unsigned long long x) {
  unsigned long index;
  return int(_BitScanReverse64(&index, x) ? 63 - index : 64);
}
    
      /**
   * Class representing various options: file descriptor behavior, and
   * whether to use $PATH for searching for the executable,
   *
   * By default, we don't use $PATH, file descriptors are closed if
   * the close-on-exec flag is set (fcntl FD_CLOEXEC) and inherited
   * otherwise.
   */
  class Options {
    friend class Subprocess;
   public:
    Options() {}  // E.g. https://gcc.gnu.org/bugzilla/show_bug.cgi?id=58328
    }
    
    class ServiceBase {
  public:
    virtual ~ServiceBase() {}
    void DependServices(const TServicesMap& _dependservices) { m_dependservices = _dependservices;}
    const char* ServiceName() const { return m_servicename.c_str();}
    }
    
    
    {  private:
//    int m_t;
};