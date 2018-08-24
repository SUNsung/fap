
        
        template <class Context>
class ExtendTensorOp final : public Operator<Context> {
 public:
  USE_OPERATOR_CONTEXT_FUNCTIONS;
  ExtendTensorOp(const OperatorDef& operator_def, Workspace* ws)
      : Operator<Context>(operator_def, ws),
        growthPct_(OperatorBase::GetSingleArgument<int>('growthPct', 40)) {}
    }
    
    
    {  vector<int> y_shape(in[0].dims().begin(), in[0].dims().end());
  CAFFE_ENFORCE_LE(canonical_axis + 1, y_shape.size());
  y_shape.resize(canonical_axis + 1);
  y_shape[canonical_axis] = N;
  out[0] = CreateTensorShape(y_shape, in[0].data_type());
  return out;
}
    
    
    {
    {    return SingleGradientDef(
        'MergeSingleMapFeatureTensorsGradient',
        '',
        input_blob_names,
        output_blob_names);
  }
};
    
      template <typename T>
  bool DoRunWithType() {
    const auto& data = Input(0);
    CAFFE_ENFORCE(data.ndim() == 1, 'data should be 1-D.');
    }
    
    ```
    
    #include 'caffe2/core/common_omp.h'
#include 'caffe2/core/context.h'
#include 'caffe2/core/logging.h'
#include 'caffe2/core/operator.h'
    
        PrintEnv();
    SharedState shared(this);
    std::vector<ThreadState*> threads(num_threads_);
    for (uint32_t i = 0; i < num_threads_; i++) {
      threads[i] = new ThreadState(i, &shared);
      env->StartThread(ThreadBody, threads[i]);
    }
    {
      MutexLock l(shared.GetMutex());
      while (!shared.AllInitialized()) {
        shared.GetCondVar()->Wait();
      }
      // Record start time
      uint64_t start_time = env->NowMicros();
    }
    
    #ifndef ROCKSDB_LITE
#include 'db/compacted_db_impl.h'
#include 'db/db_impl.h'
#include 'db/version_set.h'
#include 'table/get_context.h'
    
      using DBImpl::Put;
  virtual Status Put(const WriteOptions& /*options*/,
                     ColumnFamilyHandle* /*column_family*/,
                     const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Merge;
  virtual Status Merge(const WriteOptions& /*options*/,
                       ColumnFamilyHandle* /*column_family*/,
                       const Slice& /*key*/, const Slice& /*value*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::Delete;
  virtual Status Delete(const WriteOptions& /*options*/,
                        ColumnFamilyHandle* /*column_family*/,
                        const Slice& /*key*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  virtual Status Write(const WriteOptions& /*options*/,
                       WriteBatch* /*updates*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
  using DBImpl::CompactRange;
  virtual Status CompactRange(const CompactRangeOptions& /*options*/,
                              ColumnFamilyHandle* /*column_family*/,
                              const Slice* /*begin*/,
                              const Slice* /*end*/) override {
    return Status::NotSupported('Not supported in compacted db mode.');
  }
    
    #pragma once
    
    
    {   private:
    const Compaction* compaction_;
  };
    
    int DBImpl::IsFileDeletionsEnabled() const {
  return !disable_delete_obsolete_files_;
}
    
    #include 'rocksdb/env.h'
#include 'util/filename.h'
    
      uint64_t sleep_debt = 0;
  uint64_t time_since_last_refill = 0;
  if (last_refill_time_ != 0) {
    if (last_refill_time_ > time_now) {
      sleep_debt = last_refill_time_ - time_now;
    } else {
      time_since_last_refill = time_now - last_refill_time_;
      bytes_left_ +=
          static_cast<uint64_t>(static_cast<double>(time_since_last_refill) /
                                kMicrosPerSecond * delayed_write_rate_);
      if (time_since_last_refill >= kRefillInterval &&
          bytes_left_ > num_bytes) {
        // If refill interval already passed and we have enough bytes
        // return without extra sleeping.
        last_refill_time_ = time_now;
        bytes_left_ -= num_bytes;
        return 0;
      }
    }
  }
    
    class StopWriteToken : public WriteControllerToken {
 public:
  explicit StopWriteToken(WriteController* controller)
      : WriteControllerToken(controller) {}
  virtual ~StopWriteToken();
};
    
      env.now_micros_ += 100u;  // sleep credit 100
  // 1000 used, 7240 left
  ASSERT_EQ(static_cast<uint64_t>(0), controller.GetDelay(&env, 1000u));
    
    class PosixRandomRWFile : public RandomRWFile {
 public:
  explicit PosixRandomRWFile(const std::string& fname, int fd,
                             const EnvOptions& options);
  virtual ~PosixRandomRWFile();
    }
    
    Status MockEnv::RenameFile(const std::string& src, const std::string& dest) {
  auto s = NormalizePath(src);
  auto t = NormalizePath(dest);
  MutexLock lock(&mutex_);
  if (file_map_.find(s) == file_map_.end()) {
    return Status::IOError(s, 'File not found');
  }
    }
    
      virtual Status NewDirectory(const std::string& name,
                              unique_ptr<Directory>* result) override;
    
    #ifdef OS_LINUX
#ifndef FALLOC_FL_KEEP_SIZE
#include <linux/falloc.h>
#endif
#endif
    
    std::string kDBPath = '/tmp/rocksdb_column_families_example';