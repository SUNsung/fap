
        
          std::string toStyledString() const;
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    
    {}  // namespace google
#endif  // GOOGLE_PROTOBUF_COMPILER_JAVA_MESSAGE_H__

    
      std::vector<rocksdb::ColumnFamilyDescriptor> families;
    
    namespace rocksdb {
    }
    
    #include 'util/sync_point.h'
#include 'util/sync_point_impl.h'
    
      // Timestamp of oldest key
  std::atomic<uint64_t> oldest_key_time_;
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }
    
    struct ComparatorJniCallbackOptions {
  // Use adaptive mutex, which spins in the user space before resorting
  // to kernel. This could reduce context switch when the mutex is not
  // heavily contended. However, if the mutex is hot, we could end up
  // wasting spin time.
  // Default: false
  bool use_adaptive_mutex;
    }
    
      std::mutex              mutex_;
  std::condition_variable cv_;
  // sync points that have been passed through
  std::unordered_set<std::string> cleared_points_;
  std::atomic<bool> enabled_;
  int num_callbacks_running_ = 0;
    
      pthread_key_t k = TlsAlloc();
  if (TLS_OUT_OF_INDEXES == k) {
    return ENOMEM;
  }
    
    void HistogramStat::Add(uint64_t value) {
  // This function is designed to be lock free, as it's in the critical path
  // of any operation. Each individual value is atomic and the order of updates
  // by concurrent threads is tolerable.
  const size_t index = bucketMapper.IndexForValue(value);
  assert(index < num_buckets_);
  buckets_[index].store(buckets_[index].load(std::memory_order_relaxed) + 1,
                        std::memory_order_relaxed);
    }