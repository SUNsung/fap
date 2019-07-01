
        
        TEST(StatusOr, TestValueConst) {
  const int kI = 4;
  const StatusOr<int> thing(kI);
  EXPECT_EQ(kI, thing.ValueOrDie());
}
    
    namespace google {
namespace protobuf {
namespace util {
    }
    }
    }
    
        if (dataset.message_name() == 'benchmarks.proto3.GoogleMessage1') {
      message = new benchmarks::proto3::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage1') {
      message = new benchmarks::proto2::GoogleMessage1;
    } else if (dataset.message_name() == 'benchmarks.proto2.GoogleMessage2') {
      message = new benchmarks::proto2::GoogleMessage2;
    } else if (dataset.message_name() ==
        'benchmarks.google_message3.GoogleMessage3') {
      message = new benchmarks::google_message3::GoogleMessage3;
    } else if (dataset.message_name() ==
        'benchmarks.google_message4.GoogleMessage4') {
      message = new benchmarks::google_message4::GoogleMessage4;
    } else {
      std::cerr << 'Unknown message type: ' << dataset.message_name();
      exit(1);
    }
    
    REGISTER_CPU_OPERATOR(EnforceFinite, EnforceFiniteOp<CPUContext>);
    
    op = core.CreateOperator(
    'FindDuplicateElements',
    ['data'],
    ['indices'],
)
    
    ```
    
    
    {          return out;
        })
    .Input(0, 'X', '4-tensor in NCHW or NHWC.')
    .Output(
        0,
        'Y',
        '4-tensor. For NCHW: N x (C x kH x kW) x outH x outW.'
        'For NHWC: N x outH x outW x (kH x kW x C');
    
    
    {} // namespace caffe2
    
    void CensusClientCallData::OnDoneRecvMessageCb(void* user_data,
                                               grpc_error* error) {
  grpc_call_element* elem = reinterpret_cast<grpc_call_element*>(user_data);
  CensusClientCallData* calld =
      reinterpret_cast<CensusClientCallData*>(elem->call_data);
  CensusChannelData* channeld =
      reinterpret_cast<CensusChannelData*>(elem->channel_data);
  GPR_ASSERT(calld != nullptr);
  GPR_ASSERT(channeld != nullptr);
  // Stream messages are no longer valid after receiving trailing metadata.
  if ((*calld->recv_message_) != nullptr) {
    calld->recv_message_count_++;
  }
  GRPC_CLOSURE_RUN(calld->initial_on_done_recv_message_, GRPC_ERROR_REF(error));
}
    
    
    {  TraceContextEncoding() = delete;
  TraceContextEncoding(const TraceContextEncoding&) = delete;
  TraceContextEncoding(TraceContextEncoding&&) = delete;
  TraceContextEncoding operator=(const TraceContextEncoding&) = delete;
  TraceContextEncoding operator=(TraceContextEncoding&&) = delete;
};
    
    
    {    if (!status.ok()) {
      FillErrorResponse(status, response.mutable_error_response());
    }
    response.set_valid_host(request.host());
    response.set_allocated_original_request(
        new ServerReflectionRequest(request));
    stream->Write(response);
  }
    
    std::unique_ptr<ServerBuilderOption> MakeChannelArgumentOption(
    const grpc::string& name, int value) {
  class IntOption final : public ServerBuilderOption {
   public:
    IntOption(const grpc::string& name, int value)
        : name_(name), value_(value) {}
    }
    }
    
    #endif  // GRPC_INTERNAL_CPP_UTIL_CORE_STATS_H

    
    namespace {
    }
    
    #include <osquery/core/database/database.h>
#include <osquery/utils/conversions/tryto.h>
    
      virtual Expected<int32_t, DatabaseError> getInt32(const std::string& domain,
                                                    const std::string& key);
  virtual Expected<std::string, DatabaseError> getString(
      const std::string& domain, const std::string& key) = 0;
    
    Expected<int, RocksdbMigrationError> RocksdbMigration::getVersion(
    const DatabaseHandle& db) {
  rocksdb::ReadOptions options;
  options.verify_checksums = true;
  auto handle_iter = db.handles.find('configurations');
  if (handle_iter != db.handles.end()) {
    // Try to get new version first
    // Version stored as string value to help analyze db by tools
    std::string version_str;
    }
    }
    
    namespace osquery {
    }
    
      /**
   * @brief Optionally handle snapshot query results separately from events.
   *
   * If a logger plugin wants to write snapshot query results (potentially
   * large amounts of data) to a specific sink it should implement logSnapshot.
   * Otherwise the serialized log item data will be forwarded to logString.
   *
   * @param s A special log item will complete results from a query.
   * @return log status
   */
  virtual Status logSnapshot(const std::string& s) {
    return logString(s);
  }
    
    Status WriteBatchBase::Merge(ColumnFamilyHandle* column_family,
                             const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
    #pragma once
    
      static void CompactFiles(void* arg) {
    std::unique_ptr<CompactionTask> task(
        reinterpret_cast<CompactionTask*>(arg));
    assert(task);
    assert(task->db);
    Status s = task->db->CompactFiles(
        task->compact_options,
        task->input_file_names,
        task->output_level);
    printf('CompactFiles() finished with status %s\n', s.ToString().c_str());
    if (!s.ok() && !s.IsIOError() && task->retry_on_fail) {
      // If a compaction task with its retry_on_fail=true failed,
      // try to schedule another compaction in case the reason
      // is not an IO error.
      CompactionTask* new_task = task->compactor->PickCompaction(
          task->db, task->column_family_name);
      task->compactor->ScheduleCompaction(new_task);
    }
  }
    
    #include 'rocksdb/utilities/lua/rocks_lua_custom_library.h'
    
    
    {
    {  // Returns the approximate memory usage of different types in the input
  // list of DBs and Cache set.  For instance, in the output map
  // usage_by_type, usage_by_type[kMemTableTotal] will store the memory
  // usage of all the mem-tables from all the input rocksdb instances.
  //
  // Note that for memory usage inside Cache class, we will
  // only report the usage of the input 'cache_set' without
  // including those Cache usage inside the input list 'dbs'
  // of DBs.
  static Status GetApproximateMemoryUsageByType(
      const std::vector<DB*>& dbs,
      const std::unordered_set<const Cache*> cache_set,
      std::map<MemoryUtil::UsageType, uint64_t>* usage_by_type);
};
}  // namespace rocksdb
#endif  // !ROCKSDB_LITE

    
    /*
 * Class:     org_rocksdb_BackupableDBOptions
 * Method:    maxBackgroundOperations
 * Signature: (J)I
 */
jint Java_org_rocksdb_BackupableDBOptions_maxBackgroundOperations(
    JNIEnv* /*env*/, jobject /*jobj*/, jlong jhandle) {
  auto* bopt = reinterpret_cast<rocksdb::BackupableDBOptions*>(jhandle);
  return static_cast<jint>(bopt->max_background_operations);
}