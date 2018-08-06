
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #endif  // GOOGLE_CUDA

    
    
    {  EXPECT_THAT(model.GetOutput(), ElementsAreArray({0, 1}));
  EXPECT_THAT(model.GetOutputShape(), ElementsAreArray({1, 1, 2, 1}));
}
    
    #ifndef TENSORFLOW_COMMON_RUNTIME_SYCL_SYCL_DEVICE_CONTEXT_H_
#define TENSORFLOW_COMMON_RUNTIME_SYCL_SYCL_DEVICE_CONTEXT_H_
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
            for (size_t i = 0; i < numSequences; ++i)
        {
            MaskKind firstMaskEntry = maskBuffer[i * maxNumTimeSteps];
            if (firstMaskEntry == MaskKind::SequenceBegin)
                sequenceBeginIndices[i] = 0;
            else if (firstMaskEntry == MaskKind::Valid)
                sequenceBeginIndices[i] = Microsoft::MSR::CNTK::SentinelValueIndicatingUnspecifedSequenceBeginIdx;
            else
                LogicError('The first entry of a Value mask must be Valid or SequenceBegin');
    }
    
        // set the value to zero if less than threshold
    void setto0ifabsbelow(float threshold)
    {
        auto &us = *this;
    }
    
    
    {    mA.SwitchToMatrixType(MatrixType::DENSE, matrixFormatDense, false);
    BOOST_CHECK_EQUAL(MatrixType::DENSE, mA.GetMatrixType());
}
    
        // save model
    if (!useParallelTrain || m_mpi->CurrentNodeRank() == m_mpi->MainNodeRank())
        m_net->Save(newModelPath);
    
    template <class ConfigRecordType, typename ElemType>
bool TryGetNetworkFactory(const ConfigRecordType& config, function<ComputationNetworkPtr(DEVICEID_TYPE)>& createNetworkFn)
{
    DEVICEID_TYPE deviceId = DeviceFromConfig(config);
    }
    
    template <class _T>
class array_ref
{
    _T* data;
    size_t n;
    inline void check_index(size_t i) const
    {
        i;
        assert(i < n);
    }
    inline void check_ptr() const
    {
        n;
        data;
        assert(n == 0 || data != NULL);
    }
    }
    
                // allocate the matrix if we don't have one yet
            if (iterIn == matrices.end())
            {
                RuntimeError('No matrix data found for key '%ls', cannot continue', val.c_str());
            }
    
      /// Open the acceptor using the specified protocol.
  /**
   * This function opens the socket acceptor so that it will use the specified
   * protocol.
   *
   * @param protocol An object specifying which protocol is to be used.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @par Example
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * acceptor.open(boost::asio::ip::tcp::v4());
   * @endcode
   */
  void open(const protocol_type& protocol = protocol_type())
  {
    boost::system::error_code ec;
    this->get_service().open(this->get_implementation(), protocol, ec);
    boost::asio::detail::throw_error(ec, 'open');
  }
    
    template <typename Stream>
class buffered_stream;
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    #endif // BOOST_ASIO_DETAIL_HANDLER_INVOKE_HELPERS_HPP

    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
      explicit winrt_buffer_impl(const boost::asio::mutable_buffer& b)
  {
    bytes_ = const_cast<byte*>(boost::asio::buffer_cast<const byte*>(b));
    length_ = 0;
    capacity_ = boost::asio::buffer_size(b);
  }
    
    template <typename Time_Traits>
void dev_poll_reactor::schedule_timer(timer_queue<Time_Traits>& queue,
    const typename Time_Traits::time_type& time,
    typename timer_queue<Time_Traits>::per_timer_data& timer, wait_op* op)
{
  boost::asio::detail::mutex::scoped_lock lock(mutex_);
    }
    
    /**
 * @brief Iterate the discovered decorators for a given point type.
 *
 * The configuration maintains various sources, each may contain a set of
 * decorators. The source tracking is abstracted for the decorator iterator.
 *
 * @param point request execution of decorators for this given point.
 * @param time an optional time for points using intervals.
 * @param source restrict run to a specific config source.
 */
void runDecorators(DecorationPoint point,
                   size_t time = 0,
                   const std::string& source = '');
    
    
    {
    {  c.reset();
}
}

    
      void SetUp() override {
    fs::create_directories(perm_path_);
  }
    
      // Test existence checks based on flags.
  EXPECT_TRUE(cl.exists());
  EXPECT_TRUE(cl.exists(EQUALS));
  EXPECT_TRUE(cl.exists(EQUALS | LESS_THAN));
  EXPECT_FALSE(cl.exists(LESS_THAN));
    
      HRESULT hr = E_FAIL;
    
      // Mark the database as corrupted
  RocksDBDatabasePlugin::setCorrupted();
  printf('set corrupt\n');
  resetDatabase();
  printf('did reset\n');
    
    /**
 * @brief Pretty print a QueryData object
 *
 * This is a helper method which called osquery::beautify on the supplied
 * QueryData object and prints the results to stdout.
 *
 * @param results The QueryData object to print
 * @param columns The order of the keys (since maps are unordered)
 * @param lengths A mutable set of column lengths
 */
void prettyPrint(const QueryData& results,
                 const std::vector<std::string>& columns,
                 std::map<std::string, size_t>& lengths);
    
      std::string bad_line =
      R'('2016-03-22T21:17:01.701882+00:00','vagrant-ubuntu-trusty-64','6','cron',)';
  ec = pub.createEventContext();
  status = pub.populateEventContext(bad_line, ec);
  ASSERT_FALSE(status.ok());
  ASSERT_NE(std::string::npos, status.getMessage().find('fewer'));
    
    size_t KinesisLogForwarder::getInitialRetryDelay() const {
  return 3000U;
}
    
      // We should schedule destroyInstances() only after the singleton was
  // created. This will ensure it will be destroyed before singletons,
  // not managed by folly::Singleton, which were initialized in its
  // constructor
  SingletonVault::scheduleDestroyInstances();
    
    ssize_t pwrite(int fd, const void* buf, size_t count, off_t offset) {
  return wrapPositional(_write, fd, offset, buf, (unsigned int)count);
}
    
        jstring     (*NewString)(JNIEnv*, const jchar*, jsize);
    jsize       (*GetStringLength)(JNIEnv*, jstring);
    const jchar* (*GetStringChars)(JNIEnv*, jstring, jboolean*);
    void        (*ReleaseStringChars)(JNIEnv*, jstring, const jchar*);
    jstring     (*NewStringUTF)(JNIEnv*, const char*);
    jsize       (*GetStringUTFLength)(JNIEnv*, jstring);
    /* JNI spec says this returns const jbyte*, but that's inconsistent */
    const char* (*GetStringUTFChars)(JNIEnv*, jstring, jboolean*);
    void        (*ReleaseStringUTFChars)(JNIEnv*, jstring, const char*);
    jsize       (*GetArrayLength)(JNIEnv*, jarray);
    jobjectArray (*NewObjectArray)(JNIEnv*, jsize, jclass, jobject);
    jobject     (*GetObjectArrayElement)(JNIEnv*, jobjectArray, jsize);
    void        (*SetObjectArrayElement)(JNIEnv*, jobjectArray, jsize, jobject);
    
     public:
  using JniRet = typename detail::Convert<typename std::decay<R>::type>::jniType;
  static_assert(IsPlainJniReference<JniRet>(), 'T* must be a JNI reference');
  using JMethodBase::JMethodBase;
  JStaticMethod() noexcept {};
  JStaticMethod(const JStaticMethod& other) noexcept = default;
    
    /* static */ Config * Config::create(void)
{
    return new Config();
}
    
     private:
    
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
    
    // Keeps a thread-local reference to the current thread's JNIEnv.
struct Environment {
  // May be null if this thread isn't attached to the JVM
  FBEXPORT static JNIEnv* current();
  static void initialize(JavaVM* vm);
    }
    
    namespace facebook {
    }