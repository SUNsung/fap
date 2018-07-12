
        
        TEST_F(BaseTest, HasFoo) {
  // This is an ordinary non-parameterized test.
}
    
    #define EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter::INTERCEPT_ALL_THREADS, \
          &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17>
class ValueArray17 {
 public:
  ValueArray17(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16,
      T17 v17) : v1_(v1), v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7),
      v8_(v8), v9_(v9), v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14),
      v15_(v15), v16_(v16), v17_(v17) {}
    }
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10>
struct Types10 {
  typedef T1 Head;
  typedef Types9<T2, T3, T4, T5, T6, T7, T8, T9, T10> Tail;
};
    
    
    {    // You can generate a failure in any event handler except
    // OnTestPartResult. Just use an appropriate Google Test assertion to do
    // it.
    EXPECT_LE(difference, 0) << 'Leaked ' << difference << ' unit(s) of Water!';
  }
    
    /* Set of callbacks used to receive callbacks from bidirectional stream. */
typedef struct bidirectional_stream_callback {
  /* Invoked when the stream is ready for reading and writing.
   * Consumer may call bidirectional_stream_read() to start reading data.
   * Consumer may call bidirectional_stream_write() to start writing
   * data.
   */
  void (*on_stream_ready)(bidirectional_stream* stream);
    }
    
    #include <memory>
    
    
    {
    {}  // namespace testing
}  // namespace grpc
    
    grpc::string SecureAuthContext::GetPeerIdentityPropertyName() const {
  if (!ctx_) {
    return '';
  }
  const char* name = grpc_auth_context_peer_identity_property_name(ctx_);
  return name == nullptr ? '' : name;
}
    
    #include <gtest/gtest.h>
    
      // Proto2 Python
  google::protobuf::compiler::python::Generator py_generator;
  cli.RegisterGenerator('--python_out', &py_generator,
                        'Generate Python source file.');
    
    
    {
    {            // get the average mean and variance across all the workers
            for (auto& parameter : learnParamsValues)
            {
                (*parameter) /= (ElemType)m_mpi->NumNodesInUse();
            }
        }
    }
    
    template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, float>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ScriptableObjects::IConfigRecord, double>(const ScriptableObjects::IConfigRecord& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, float>(const ConfigParameters& config);
template function<ComputationNetworkPtr(DEVICEID_TYPE)> GetNetworkFactory<ConfigParameters, double>(const ConfigParameters& config);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, float> (const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);
template ComputationNetworkPtr GetModelFromConfig<ConfigParameters, double>(const ConfigParameters& config, const wstring&, vector<wstring>& outputNodeNamesVector);

    
    // The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DATAWRITER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DATAWRITER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef _WIN32
#if defined(DATAWRITER_EXPORTS)
#define DATAWRITER_API __declspec(dllexport)
#elif defined(DATAWRITER_LOCAL)
#define DATAWRITER_API
#else
#define DATAWRITER_API __declspec(dllimport)
#endif
#else
#define DATAWRITER_API
#endif
    
    class latticesource
{
    const msra::lattices::archive numlattices, denlattices;
    int verbosity;
    }
    
      typename BufferSequence::const_iterator iter = b.begin();
  typename BufferSequence::const_iterator end = b.end();
  for (; iter != end; ++iter)
    total_buffer_size += detail::buffer_size_helper(*iter);
    
    
    {} // namespace boost
    
    #endif // BOOST_ASIO_DETAIL_ATOMIC_COUNT_HPP

    
      static void init_native_buffer(WSABUF& buf,
      const boost::asio::mutable_buffer& buffer)
  {
    buf.buf = boost::asio::buffer_cast<char*>(buffer);
    buf.len = static_cast<ULONG>(boost::asio::buffer_size(buffer));
  }
    
    #include <boost/asio/detail/push_options.hpp>
    
    #endif // BOOST_ASIO_DETAIL_DESCRIPTOR_READ_OP_HPP

    
      static void do_complete(io_service_impl* owner, operation* base,
      const boost::system::error_code& /*ec*/,
      std::size_t /*bytes_transferred*/)
  {
    // Take ownership of the handler object.
    descriptor_write_op* o(static_cast<descriptor_write_op*>(base));
    ptr p = { boost::asio::detail::addressof(o->handler_), o, o };
    }
    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
typedef null_fenced_block fenced_block;
#elif defined(__MACH__) && defined(__APPLE__)
typedef macos_fenced_block fenced_block;
#elif defined(__sun)
typedef solaris_fenced_block fenced_block;
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
typedef gcc_arm_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
typedef gcc_hppa_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
typedef gcc_x86_fenced_block fenced_block;
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
typedef gcc_sync_fenced_block fenced_block;
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
typedef win_fenced_block fenced_block;
#else
typedef null_fenced_block fenced_block;
#endif
    
    inline std::size_t calculate_hash_value(void* p)
{
  return reinterpret_cast<std::size_t>(p)
    + (reinterpret_cast<std::size_t>(p) >> 3);
}
    
    #include <boost/asio/detail/push_options.hpp>
    
    
    {  bool earliest = queue.enqueue_timer(time, timer, op);
  io_service_.work_started();
  if (earliest)
    interrupter_.interrupt();
}
    
      timer_queues_.get_all_timers(ops);
    
    
    
    
    
        argc = lua_gettop(tolua_S) - 1;
    
    void Test::MouseUp(const b2Vec2& p)
{
	if (m_mouseJoint)
	{
		m_world->DestroyJoint(m_mouseJoint);
		m_mouseJoint = nullptr;
	}
	
	if (m_bombSpawning)
	{
		CompleteBombSpawn(p);
	}
}
    
    
    {
    {			float minX = -6.0f;
			float maxX = 0.0f;
			float minY = 4.0f;
			float maxY = 6.0f;
			
			for (int32 i = 0; i < 400; ++i)
			{
				b2BodyDef bd;
				bd.type = b2_dynamicBody;
				bd.position = b2Vec2(RandomFloat(minX,maxX),RandomFloat(minY,maxY));
				b2Body* body = m_world->CreateBody(&bd);
				body->CreateFixture(&shape, 0.01f);
			}
		}
		
		{
			b2PolygonShape shape;
			shape.SetAsBox(1.5f, 1.5f);
			b2BodyDef bd;
			bd.type = b2_dynamicBody;
			bd.position.Set(-40.0f,5.0f);
			bd.bullet = true;
			b2Body* body = m_world->CreateBody(&bd);
			body->CreateFixture(&shape, 1.0f);
			body->SetLinearVelocity(b2Vec2(150.0f, 0.0f));
		}
	}
    
    #ifndef BRIDGE_H
#define BRIDGE_H
    
    			b2EdgeShape edge;
    
    		for (int32 i = 0; i < 2; ++i)
		{
			b2Vec2 vertices[3];
			vertices[0].Set(-0.5f, 0.0f);
			vertices[1].Set(0.5f, 0.0f);
			vertices[2].Set(0.0f, 1.5f);
    }
    
    			bd.position.Set(230.0f, 1.5f);
			body = m_world->CreateBody(&bd);
			body->CreateFixture(&box, 0.5f);
    
    // Used to encapsulate a particular instance of an opened database.
//
// This object should not be used directly in C++; it exists solely to provide
// a mapping from a JavaScript object to a C++ code that can use the RocksDB
// API.
class DBWrapper : public node::ObjectWrap {
  public:
    static void Init(Handle<Object> exports);
    }
    
    
    {#if defined (__cplusplus)
}  // namespace rocksdb
#endif

    
    
    {  /// The backend rocksdb database.
  /// Map : key --> list
  ///       where a list is a sequence of elements
  ///       and an element is a 4-byte integer (n), followed by n bytes of data
  std::unique_ptr<DB> db_;
};
    
      // when we know more data has been written to the file. we can use this
  // function to force the reader to look again in the file.
  // Also aligns the file position indicator to the start of the next block
  // by reading the rest of the data from the EOF position to the end of the
  // block that was partially read.
  void UnmarkEOF();
    
      jint result =
    env->CallIntMethod(m_jcallback_obj, m_jCompareMethodId, m_jSliceA,
      m_jSliceB);
    
    
    {      struct flock f;
      memset(&f, 0, sizeof(f));
      f.l_type = (F_WRLCK);
      f.l_whence = SEEK_SET;
      f.l_start = 0;
      f.l_len = 0; // Lock/unlock entire file
      int value = fcntl(fd, F_SETLK, &f);
      if( value == -1 ){
        if( lock_expected ){
          exit_val = EXIT_SUCCESS;
        }
      } else {
        if( ! lock_expected ){
          exit_val = EXIT_SUCCESS;
        }
      }
      close(fd); // lock is released for child process
      exit(exit_val);
    } else if (pid > 0) {
      // parent process
      int status;
      while (-1 == waitpid(pid, &status, 0));
      if (!WIFEXITED(status) || WEXITSTATUS(status) != 0) {
        // child process exited with non success status
        return false;
      } else {
        return true;
      }
    } else {
      fprintf( stderr, 'Fork failed\n' );
      return false;
    }
    return false;
    
    bool SyncPoint::Data::PredecessorsAllCleared(const std::string& point) {
  for (const auto& pred : predecessors_[point]) {
    if (cleared_points_.count(pred) == 0) {
      return false;
    }
  }
  return true;
}
    
    
// The DoNotOptimize(...) function can be used to prevent a value or
// expression from being optimized away by the compiler. This function is
// intended to add little to no overhead.
// See: https://youtu.be/nXaxk27zwlk?t=2441
#ifndef BENCHMARK_HAS_NO_INLINE_ASSEMBLY
template <class Tp>
inline BENCHMARK_ALWAYS_INLINE void DoNotOptimize(Tp const& value) {
  // Clang doesn't like the 'X' constraint on `value` and certain GCC versions
  // don't like the 'g' constraint. Attempt to placate them both.
#if defined(__clang__)
  asm volatile('' : : 'g'(value) : 'memory');
#else
  asm volatile('' : : 'i,r,m'(value) : 'memory');
#endif
}
// Force the compiler to flush pending writes to global memory. Acts as an
// effective read/write barrier
inline BENCHMARK_ALWAYS_INLINE void ClobberMemory() {
  asm volatile('' : : : 'memory');
}
#elif defined(_MSC_VER)
template <class Tp>
inline BENCHMARK_ALWAYS_INLINE void DoNotOptimize(Tp const& value) {
  internal::UseCharPointer(&reinterpret_cast<char const volatile&>(value));
  _ReadWriteBarrier();
}
    
    // Information kept per benchmark we may want to run
struct Benchmark::Instance {
  std::string name;
  Benchmark* benchmark;
  ReportMode report_mode;
  std::vector<int> arg;
  TimeUnit time_unit;
  int range_multiplier;
  bool use_real_time;
  bool use_manual_time;
  BigO complexity;
  BigOFunc* complexity_lambda;
  UserCounters counters;
  const std::vector<Statistics>* statistics;
  bool last_benchmark_instance;
  int repetitions;
  double min_time;
  size_t iterations;
  int threads;  // Number of concurrent threads to us
};
    
      va_end(args_cp);
    
    // Returns true if the string matches the flag.
bool IsFlag(const char* str, const char* flag);
    
      if (run.bytes_per_second > 0.0) {
    Out << run.bytes_per_second;
  }
  Out << ',';
  if (run.items_per_second > 0.0) {
    Out << run.items_per_second;
  }
  Out << ',';
  if (!run.report_label.empty()) {
    // Field with embedded double-quote characters must be doubled and the field
    // delimited with double-quotes.
    std::string label = run.report_label;
    ReplaceAll(&label, '\'', '\'\'');
    Out << '\'' << label << '\'';
  }
  Out << ',,';  // for error_occurred and error_message
    
      if (info.scaling_enabled) {
    Out << '***WARNING*** CPU scaling is enabled, the benchmark '
           'real time measurements may be noisy and will incur extra '
           'overhead.\n';
  }