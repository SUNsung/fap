
        
        #include <memory>
    
    
    {}  // namespace grpc_node_generator
    
    SecureAuthContext::~SecureAuthContext() {
  if (take_ownership_) grpc_auth_context_release(ctx_);
}
    
    int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

    
    #include <string>
    
      // Proto2 Python
  google::protobuf::compiler::python::Generator py_generator;
  cli.RegisterGenerator('--python_out', &py_generator,
                        'Generate Python source file.');
    
    This pointer must be provided as 'void* state' parameter for XXH32_update().
XXH32_update() can be called as many times as necessary.
The user must provide a valid (allocated) input.
The function returns an error code, with 0 meaning OK, and any other value meaning there is an error.
Note that 'len' is type 'int', which means it is limited to 2^31-1.
If your data is larger, it is recommended to chunk your data into blocks
of size for example 2^30 (1GB) to avoid any 'int' overflow issue.
    
    
    {   private:
     const std::set<uint32_t> m_ignore_histograms;
 };
    
    SyncPoint* SyncPoint::GetInstance() {
  static SyncPoint sync_point;
  return &sync_point;
}
    
         using Logger::SetInfoLogLevel;
     using Logger::GetInfoLogLevel;
     // Write an entry to the log file with the specified format.
     virtual void Logv(const char* format, va_list ap);
     // Write an entry to the log file with the specified log level
     // and format.  Any log with level under the internal log level
     // of *this (see @SetInfoLogLevel and @GetInfoLogLevel) will not be
     // printed.
     virtual void Logv(const InfoLogLevel log_level,
         const char* format, va_list ap);
    
    
    {
    {    std::lock_guard<std::mutex> guard(w->StateMutex());
    assert(w->state.load(std::memory_order_relaxed) != new_state);
    w->state.store(new_state, std::memory_order_relaxed);
    w->StateCV().notify_one();
  }
}
    
    class AbstractDiskWriter : public DiskWriter {
private:
  std::string filename_;
    }
    
    class AbstractProxyResponseCommand : public AbstractCommand {
private:
  std::shared_ptr<HttpConnection> httpConnection_;
    }
    
    #include <algorithm>
    
    class AnnounceList {
public:
private:
  std::deque<std::shared_ptr<AnnounceTier>> tiers_;
  std::deque<std::shared_ptr<AnnounceTier>>::iterator currentTier_;
  std::deque<std::string>::iterator currentTracker_;
  bool currentTrackerInitialized_;
    }
    
    AnnounceTier::~AnnounceTier() = default;
    
    
    {private:
  Session* session_;
  DownloadEventCallback callback_;
  void* userData_;
};
    
      // certfile can contain multiple certificates.
  virtual bool addTrustedCACertFile(const std::string& certfile) CXX11_OVERRIDE;
    
    #include <vector>
#include <string>
#include <memory>
    
    #define CALL_STATIC_TYPE_METHOD(_jtype, _jname)                             \
    _jtype CallStatic##_jname##Method(jclass clazz, jmethodID methodID,     \
        ...)                                                                \
    {                                                                       \
        _jtype result;                                                      \
        va_list args;                                                       \
        va_start(args, methodID);                                           \
        result = functions->CallStatic##_jname##MethodV(this, clazz,        \
                    methodID, args);                                        \
        va_end(args);                                                       \
        return result;                                                      \
    }
#define CALL_STATIC_TYPE_METHODV(_jtype, _jname)                            \
    _jtype CallStatic##_jname##MethodV(jclass clazz, jmethodID methodID,    \
        va_list args)                                                       \
    { return functions->CallStatic##_jname##MethodV(this, clazz, methodID,  \
        args); }
#define CALL_STATIC_TYPE_METHODA(_jtype, _jname)                            \
    _jtype CallStatic##_jname##MethodA(jclass clazz, jmethodID methodID,    \
        jvalue* args)                                                       \
    { return functions->CallStatic##_jname##MethodA(this, clazz, methodID,  \
        args); }
    
      /**
   * The offset within the current function
   */
  int functionOffset() const noexcept {
    auto absoluteSymbol = static_cast<const char*>(functionAddress_);
    auto absoluteabsoluteProgramCounter =
        static_cast<const char*>(absoluteProgramCounter_);
    return absoluteabsoluteProgramCounter - absoluteSymbol;
  }
    
        method(getPositionType);
    method(getPosition);
    
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