
        
                // cross two lines
        Point2f origin1 = quad_corners[0];
        Point2f dir1 = quad_corners[1] - quad_corners[0];
        Point2f origin2 = quad_corners[2];
        Point2f dir2 = quad_corners[3] - quad_corners[2];
        double angle = acos(dir1.dot(dir2)/(norm(dir1)*norm(dir2)));
        if(cvIsNaN(angle) || cvIsInf(angle) || angle < 0.5 || angle > CV_PI - 0.5) continue;
    
    //! @endcond
    
    int lapack_LU32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, int* info);
int lapack_LU64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, int* info);
int lapack_Cholesky32f(float* a, size_t a_step, int m, float* b, size_t b_step, int n, bool* info);
int lapack_Cholesky64f(double* a, size_t a_step, int m, double* b, size_t b_step, int n, bool* info);
int lapack_SVD32f(float* a, size_t a_step, float* w, float* u, size_t u_step, float* vt, size_t v_step, int m, int n, int flags);
int lapack_SVD64f(double* a, size_t a_step, double* w, double* u, size_t u_step, double* vt, size_t v_step, int m, int n, int flags);
int lapack_QR32f(float* src1, size_t src1_step, int m, int n, int k, float* src2, size_t src2_step, float* dst, int* info);
int lapack_QR64f(double* src1, size_t src1_step, int m, int n, int k, double* src2, size_t src2_step, double* dst, int* info);
int lapack_gemm32f(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64f(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm32fc(const float* src1, size_t src1_step, const float* src2, size_t src2_step,
                   float alpha, const float* src3, size_t src3_step, float beta, float* dst, size_t dst_step,
                   int m, int n, int k, int flags);
int lapack_gemm64fc(const double* src1, size_t src1_step, const double* src2, size_t src2_step,
                   double alpha, const double* src3, size_t src3_step, double beta, double* dst, size_t dst_step,
                   int m, int n, int k, int flags);
    
        static void* GetProcAddress (const char* name)
    {
        static void* h = NULL;
        if (!h)
        {
            h = dlopen('libclAmdBlas.so', RTLD_LAZY | RTLD_GLOBAL);
            if (!h)
                return NULL;
        }
    }
    
      /// Get a reference to the lowest layer.
  lowest_layer_type& lowest_layer()
  {
    return next_layer_.lowest_layer();
  }
    
    template <typename Stream>
class buffered_read_stream;
    
    #ifndef BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
#define BOOST_ASIO_DETAIL_ARRAY_FWD_HPP
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
// Nothing to include.
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <atomic>
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <boost/detail/atomic_count.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
    
    {private:
  Handler handler_;
};
    
    #if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)
    
      // Dispatch the waiting events.
  for (int i = 0; i < num_events; ++i)
  {
    int descriptor = events[i].fd;
    if (descriptor == interrupter_.read_descriptor())
    {
      interrupter_.reset();
    }
    else
    {
      bool more_reads = false;
      bool more_writes = false;
      bool more_except = false;
    }
    }
    
      gen::byLine('/proc/mounts') | gen::eachAs<StringPiece>() |
      [&](StringPiece line) {
        parts.clear();
        split(' ', line, parts);
        // device path fstype options uid gid
        if (parts.size() != 6) {
          throw std::runtime_error('Invalid /proc/mounts line');
        }
        if (parts[2] != 'hugetlbfs') {
          return; // we only care about hugetlbfs
        }
    }
    
    
    {} // namespace folly

    
    #include <folly/experimental/logging/LogHandlerFactory.h>
    
    std::shared_ptr<LogWriter> FileWriterFactory::createWriter(File file) {
  // Determine whether we should use ImmediateFileWriter or AsyncFileWriter
  if (async_) {
    auto asyncWriter = make_shared<AsyncFileWriter>(std::move(file));
    if (maxBufferSize_.hasValue()) {
      asyncWriter->setMaxBufferSize(maxBufferSize_.value());
    }
    return asyncWriter;
  } else {
    if (maxBufferSize_.hasValue()) {
      throw std::invalid_argument(to<string>(
          'the \'max_buffer_size\' option is only valid for async file '
          'handlers'));
    }
    return make_shared<ImmediateFileWriter>(std::move(file));
  }
}
    
    bool LogCategoryConfig::operator!=(const LogCategoryConfig& other) const {
  return !(*this == other);
}
    
    
    {  /**
   * An optional list of LogHandler names to use for this category.
   *
   * When applying config changes to an existing LogCategory, the existing
   * LogHandler list will be left unchanged if this field is unset.
   */
  Optional<std::vector<std::string>> handlers;
};
    
    namespace folly {
    }
    
    LogHandlerConfig::LogHandlerConfig(Optional<StringPiece> t, Options opts)
    : type{t.hasValue() ? Optional<string>{t->str()} : Optional<string>{}},
      options{std::move(opts)} {}
    
    
    {} // namespace folly

    
        // C++ mappings of API methods
    static Persistent<v8::Function> constructor;
    static Handle<Value> Open(const Arguments& args);
    static Handle<Value> New(const Arguments& args);
    static Handle<Value> Get(const Arguments& args);
    static Handle<Value> Put(const Arguments& args);
    static Handle<Value> Delete(const Arguments& args);
    static Handle<Value> Dump(const Arguments& args);
    static Handle<Value> WriteBatch(const Arguments& args);
    static Handle<Value> CreateColumnFamily(const Arguments& args);
    static Handle<Value> CompactRange(const Arguments& args);
    static Handle<Value> Close(const Arguments& args);
    
      virtual bool Merge(const Slice& key,
                     const Slice* existing_value,
                     const Slice& value,
                     std::string* new_value,
                     Logger* logger) const override;
    
      // start from k2 this time.
  for (it->Seek(k2); it->Valid(); it->Next()) {
    res = it->value().ToString();
    if (first) {
      ASSERT_EQ(res, 'v1,v2,v3,v4');
      first = false;
    } else {
      ASSERT_EQ(res, 'a1,a2,a3,a4');
    }
  }
    
    
    {  /// The backend rocksdb database.
  /// Map : key --> list
  ///       where a list is a sequence of elements
  ///       and an element is a 4-byte integer (n), followed by n bytes of data
  std::unique_ptr<DB> db_;
};
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    newIngestExternalFileOptions
 * Signature: (ZZZZ)J
 */
jlong Java_org_rocksdb_IngestExternalFileOptions_newIngestExternalFileOptions__ZZZZ(
    JNIEnv* env, jclass jcls, jboolean jmove_files,
    jboolean jsnapshot_consistency, jboolean jallow_global_seqno,
    jboolean jallow_blocking_flush) {
  auto* options = new rocksdb::IngestExternalFileOptions();
  options->move_files = static_cast<bool>(jmove_files);
  options->snapshot_consistency = static_cast<bool>(jsnapshot_consistency);
  options->allow_global_seqno = static_cast<bool>(jallow_global_seqno);
  options->allow_blocking_flush = static_cast<bool>(jallow_blocking_flush);
  return reinterpret_cast<jlong>(options);
}
    
    #include <assert.h>
#include 'rocksjni/jnicallback.h'
#include 'rocksjni/portal.h'
    
    void FlushJob::ReportStartedFlush() {
  ThreadStatusUtil::SetColumnFamily(cfd_, cfd_->ioptions()->env,
                                    db_options_.enable_thread_tracking);
  ThreadStatusUtil::SetThreadOperation(ThreadStatus::OP_FLUSH);
  ThreadStatusUtil::SetThreadOperationProperty(
      ThreadStatus::COMPACTION_JOB_ID,
      job_context_->job_id);
  IOSTATS_RESET(bytes_written);
}
    
    TEST_P(DBWriteTest, IOErrorOnWALWritePropagateToWriteThreadFollower) {
  constexpr int kNumThreads = 5;
  std::unique_ptr<FaultInjectionTestEnv> mock_env(
      new FaultInjectionTestEnv(Env::Default()));
  Options options = GetOptions();
  options.env = mock_env.get();
  Reopen(options);
  std::atomic<int> ready_count{0};
  std::atomic<int> leader_count{0};
  std::vector<port::Thread> threads;
  mock_env->SetFilesystemActive(false);
  // Wait until all threads linked to write threads, to make sure
  // all threads join the same batch group.
  SyncPoint::GetInstance()->SetCallBack(
      'WriteThread::JoinBatchGroup:Wait', [&](void* arg) {
        ready_count++;
        auto* w = reinterpret_cast<WriteThread::Writer*>(arg);
        if (w->state == WriteThread::STATE_GROUP_LEADER) {
          leader_count++;
          while (ready_count < kNumThreads) {
            // busy waiting
          }
        }
      });
  SyncPoint::GetInstance()->EnableProcessing();
  for (int i = 0; i < kNumThreads; i++) {
    threads.push_back(port::Thread(
        [&](int index) {
          // All threads should fail.
          ASSERT_FALSE(Put('key' + ToString(index), 'value').ok());
        },
        i));
  }
  for (int i = 0; i < kNumThreads; i++) {
    threads[i].join();
  }
  ASSERT_EQ(1, leader_count);
  // Close before mock_env destruct.
  Close();
}
    
        method(setPadding);
    method(setPaddingPercent);
    
    template<typename... ARGS>
inline void logi(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_INFO, tag, msg, args...);
}
    
    // This allows storing the assert message before the current process terminates due to a crash
typedef void (*AssertHandler)(const char* message);
void setAssertHandler(AssertHandler assertHandler);
    
      std::string name('world');
    
    #include <iostream>
#include <memory>
#include <string>
    
      static const char *FlatBuffersGeneratedWarning();
    
    // Get a field, if you know it's a struct.
inline const Struct *GetFieldStruct(const Table &table,
                                    const reflection::Field &field) {
  // TODO: This does NOT check if the field is a table or struct, but we'd need
  // access to the schema to check the is_struct flag.
  assert(field.type()->base_type() == reflection::Obj);
  return table.GetStruct<const Struct *>(field.offset());
}
    
      flatbuffers::FlatCompiler::InitParams params;
  params.generators = generators;
  params.num_generators = sizeof(generators) / sizeof(generators[0]);
  params.warn_fn = Warn;
  params.error_fn = Error;
    
    bool FileExistsRaw(const char *name) {
  std::ifstream ifs(name);
  return ifs.good();
}