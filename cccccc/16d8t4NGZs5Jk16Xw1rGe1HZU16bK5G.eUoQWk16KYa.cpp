
        
        #include 'base/callback.h'
#include 'base/location.h'
#include 'base/single_thread_task_runner.h'
#include 'uv.h'  // NOLINT(build/include)
    
    
    {}  // namespace mate
    
    #include 'atom/browser/native_window_views.h'
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  auto controller = base::Unretained(TracingController::GetInstance());
  mate::Dictionary dict(context->GetIsolate(), exports);
  dict.SetMethod('getCategories',
                 base::Bind(&TracingController::GetCategories, controller));
  dict.SetMethod('startRecording',
                 base::Bind(&TracingController::StartTracing, controller));
  dict.SetMethod('stopRecording', &StopRecording);
  dict.SetMethod(
      'getTraceBufferUsage',
      base::Bind(&TracingController::GetTraceBufferUsage, controller));
}
    
    
    { private:
  int mkdir_recursive(const String& path, int mode);
};
    
    
    {#ifdef _MSC_VER
  // Need to normalize to Windows directory separators, as the underlying
  // system calls don't like unix path separators.
  for (int i = 0; i < pathlen; i++) {
    if (path[i] == '/') {
      path[i] = '\\';
    }
  }
#endif
  ret.setSize(pathlen);
  return ret;
}
    
    std::string expandUser(const std::string& path,
                       const std::string& sysUser = '');
/**
 * Makes sure there is ending slash by changing 'path/name' to 'path/name/'.
 */
std::string normalizeDir(const std::string &dirname);
    
    std::vector<std::string> PrometheusMetricsConfigParserPlugin::keys() const {
  return {kPrometheusParserRootKey};
}
    
    namespace osquery {
    }
    
    #ifndef WIN32
#include <sys/wait.h>
#endif
    
    TEST_F(QueryTests, test_query_name_updated) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('will_update_query', query);
  EXPECT_TRUE(cf.isNewQuery());
  EXPECT_TRUE(cf.isNewQuery());
    }
    
    namespace osquery {
    }
    
    CREATE_REGISTRY(DistributedPlugin, 'distributed');
    
      /// Only add the subscription, if it not already part of subscription list.
  Status addSubscription(const SubscriptionRef& subscription) override;
    
    
    {  // When the hex fails to decode the input value is returned as the result.
  auto decoded_fail = DecodeAuditPathValues('7');
  EXPECT_EQ(decoded_fail, '7');
}
    
      // Check if the passed range overlap with any running compactions.
  // REQUIRES: DB mutex held
  bool RangeOverlapWithCompaction(const Slice& smallest_user_key,
                                  const Slice& largest_user_key,
                                  int level) const;
    
      CompactionIterator(InternalIterator* input, const Comparator* cmp,
                     MergeHelper* merge_helper, SequenceNumber last_sequence,
                     std::vector<SequenceNumber>* snapshots,
                     SequenceNumber earliest_write_conflict_snapshot,
                     const SnapshotChecker* snapshot_checker, Env* env,
                     bool report_detailed_time, bool expect_valid_internal_key,
                     RangeDelAggregator* range_del_agg,
                     const Compaction* compaction = nullptr,
                     const CompactionFilter* compaction_filter = nullptr,
                     const std::atomic<bool>* shutting_down = nullptr,
                     const SequenceNumber preserve_deletes_seqnum = 0);
    
    #ifndef ROCKSDB_LITE
    
    #ifndef ROCKSDB_LITE
    
    
    {}  // namespace rocksdb
    
      // NewRandomAccessFile opens a file for random read access.
  virtual Status NewRandomAccessFile(const std::string& fname,
                                     unique_ptr<RandomAccessFile>* result,
                                     const EnvOptions& options) override {
    result->reset();
    if (options.use_mmap_reads) {
      return Status::InvalidArgument();
    }
    // Open file using underlying Env implementation
    std::unique_ptr<RandomAccessFile> underlying;
    auto status = EnvWrapper::NewRandomAccessFile(fname, &underlying, options);
    if (!status.ok()) {
      return status;
    }
    // Read prefix (if needed)
    AlignedBuffer prefixBuf;
    Slice prefixSlice;
    size_t prefixLength = provider_->GetPrefixLength();
    if (prefixLength > 0) {
      // Read prefix 
      prefixBuf.Alignment(underlying->GetRequiredBufferAlignment());
      prefixBuf.AllocateNewBuffer(prefixLength);
      status = underlying->Read(0, prefixLength, &prefixSlice, prefixBuf.BufferStart());
      if (!status.ok()) {
        return status;
      }
    }
    // Create cipher stream
    std::unique_ptr<BlockAccessCipherStream> stream;
    status = provider_->CreateCipherStream(fname, options, prefixSlice, &stream);
    if (!status.ok()) {
      return status;
    }
    (*result) = std::unique_ptr<RandomAccessFile>(new EncryptedRandomAccessFile(underlying.release(), stream.release(), prefixLength));
    return Status::OK();
  }
  
  // NewWritableFile opens a file for sequential writing.
  virtual Status NewWritableFile(const std::string& fname,
                                 unique_ptr<WritableFile>* result,
                                 const EnvOptions& options) override {
    result->reset();
    if (options.use_mmap_writes) {
      return Status::InvalidArgument();
    }
    // Open file using underlying Env implementation
    std::unique_ptr<WritableFile> underlying;
    Status status = EnvWrapper::NewWritableFile(fname, &underlying, options);
    if (!status.ok()) {
      return status;
    }
    // Initialize & write prefix (if needed)
    AlignedBuffer prefixBuf;
    Slice prefixSlice;
    size_t prefixLength = provider_->GetPrefixLength();
    if (prefixLength > 0) {
      // Initialize prefix 
      prefixBuf.Alignment(underlying->GetRequiredBufferAlignment());
      prefixBuf.AllocateNewBuffer(prefixLength);
      provider_->CreateNewPrefix(fname, prefixBuf.BufferStart(), prefixLength);
      prefixSlice = Slice(prefixBuf.BufferStart(), prefixLength);
      // Write prefix 
      status = underlying->Append(prefixSlice);
      if (!status.ok()) {
        return status;
      }
    }
    // Create cipher stream
    std::unique_ptr<BlockAccessCipherStream> stream;
    status = provider_->CreateCipherStream(fname, options, prefixSlice, &stream);
    if (!status.ok()) {
      return status;
    }
    (*result) = std::unique_ptr<WritableFile>(new EncryptedWritableFile(underlying.release(), stream.release(), prefixLength));
    return Status::OK();
  }
    
      virtual Status NewRandomAccessFile(const std::string& fname,
                                     unique_ptr<RandomAccessFile>* result,
                                     const EnvOptions& soptions) override;
    
      // When flush happens, it determines whether to trigger compaction. If
  // triggered_writes_stop is true, it will also set the retry flag of
  // compaction-task to true.
  void OnFlushCompleted(
      DB* db, const FlushJobInfo& info) override {
    CompactionTask* task = PickCompaction(db, info.cf_name);
    if (task != nullptr) {
      if (info.triggered_writes_stop) {
        task->retry_on_fail = true;
      }
      // Schedule compaction in a different thread.
      ScheduleCompaction(task);
    }
  }
    
      // destroy and open DB
  DB* db;
  Status s = DestroyDB(kDBPath, Options(db_opt, cf_descs[0].options));
  assert(s.ok());
  s = DB::Open(Options(db_opt, cf_descs[0].options), kDBPath, &db);
  assert(s.ok());
    
    #include <vector>
#include <string>
#include <memory>
    
    void DHTTaskExecutor::update()
{
  execTasks_.erase(std::remove_if(execTasks_.begin(), execTasks_.end(),
                                  std::mem_fn(&DHTTask::finished)),
                   execTasks_.end());
  int r;
  if (static_cast<size_t>(numConcurrent_) > execTasks_.size()) {
    r = numConcurrent_ - execTasks_.size();
  }
  else {
    r = 0;
  }
  while (r && !queue_.empty()) {
    std::shared_ptr<DHTTask> task = queue_.front();
    queue_.pop_front();
    task->startup();
    if (!task->finished()) {
      execTasks_.push_back(task);
      --r;
    }
  }
  A2_LOG_DEBUG(fmt('Executing %u Task(s). Queue has %u task(s).',
                   static_cast<unsigned int>(getExecutingTaskSize()),
                   static_cast<unsigned int>(getQueueSize())));
}
    
      void setLocalNode(const std::shared_ptr<DHTNode>& localNode);
    
      virtual void addPeriodicTask1(const std::shared_ptr<DHTTask>& task) = 0;
    
      // TODO handle exception thrown by this function.
  std::string generateToken(const unsigned char* infoHash,
                            const std::string& ipaddr, uint16_t port) const;
    
        static BOOST_FORCEINLINE bool compare_exchange_strong(
        storage_type volatile& storage, storage_type& expected, storage_type desired, memory_order, memory_order) BOOST_NOEXCEPT
    {
#if defined(__clang__)
        // Clang cannot allocate rax:rdx register pairs but it has sync intrinsics
        storage_type old_expected = expected;
        expected = __sync_val_compare_and_swap(&storage, old_expected, desired);
        return expected == old_expected;
#elif defined(BOOST_ATOMIC_DETAIL_NO_ASM_RAX_RDX_PAIRS)
        // GCC 4.4 can't allocate rax:rdx register pair either but it also doesn't support 128-bit __sync_val_compare_and_swap
        uint64_t const* p_desired = (uint64_t const*)&desired;
        bool success;
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq %[expected], %%rax\n\t'
            'movq 8+%[expected], %%rdx\n\t'
            'lock; cmpxchg16b %[dest]\n\t'
            'sete %[success]\n\t'
            'movq %%rax, %[expected]\n\t'
            'movq %%rdx, 8+%[expected]\n\t'
            : [dest] '+m' (storage), [expected] '+o' (expected), [success] '=q' (success)
            : 'b' (p_desired[0]), 'c' (p_desired[1])
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
        __asm__ __volatile__
        (
            'movq 0(%[expected]), %%rax\n\t'
            'movq 8(%[expected]), %%rdx\n\t'
            'lock; cmpxchg16b %[dest]\n\t'
            'sete %[success]\n\t'
            'movq %%rax, 0(%[expected])\n\t'
            'movq %%rdx, 8(%[expected])\n\t'
            : [dest] '+m' (storage), [success] '=q' (success)
            : 'b' (p_desired[0]), 'c' (p_desired[1]), [expected] 'r' (&expected)
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory', 'rax', 'rdx'
        );
#endif // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
    }
    
      void AddOtherAgent(CanAgent *agent) { other_agent_ = agent; }
    
      /**
   * @brief Send messages
   * @param frames The messages to send.
   * @param frame_num The amount of messages to send.
   * @return The status of the sending action which is defined by
   *         apollo::common::ErrorCode.
   */
  apollo::common::ErrorCode Send(const std::vector<CanFrame> &frames,
                                 int32_t *const frame_num) override;
    
    /**
 * @file
 * @brief Defines the FakeCanClient class which inherites CanClient.
 */
    
      /**
   * @brief Start the ESD CAN client.
   * @return The status of the start action which is defined by
   *         apollo::common::ErrorCode.
   */
  bool Init(const CANCardParameter &parameter) override;
    
    
    {  ::apollo::canbus::ChassisDetail chassis_detail;
  chassis_detail.set_car_type(::apollo::canbus::ChassisDetail::QIRUI_EQ_15);
  EXPECT_EQ(manager.GetSensorData(&chassis_detail), ErrorCode::OK);
  EXPECT_EQ(manager.GetSensorData(nullptr), ErrorCode::CANBUS_ERROR);
}
    
    
    {
    {
    {}  // namespace canbus
}  // namespace drivers
}  // namespace apollo

    
      /**
   * @brief Get a one-byte unsigned integer representing the lower 4 bits.
   * @return The one-byte unsigned integer representing the lower 4 bits.
   */
  uint8_t get_byte_low_4_bits() const;
    
    // Canbus gflags
DEFINE_double(sensor_freq, 100,
              'Sensor feedback timer frequency -- 0 means event trigger.');