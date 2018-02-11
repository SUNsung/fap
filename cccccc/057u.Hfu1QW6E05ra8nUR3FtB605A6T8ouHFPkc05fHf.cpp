
        
        DEFINE_string(backend, 'lmdb', 'The backend for storing the result');
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #endif  // CAFFE_CUDNN_CONV_LAYER_HPP_

    
    #endif  // CAFFE_CUDNN_TANH_LAYER_HPP_

    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
      virtual inline const char* type() const { return 'Exp'; }
    
    #include <d3d11.h>
#pragma comment (lib, 'd3d11.lib')
    
    CvStereoBMState* cvCreateStereoBMState( int /*preset*/, int numberOfDisparities )
{
    CvStereoBMState* state = (CvStereoBMState*)cvAlloc( sizeof(*state) );
    if( !state )
        return 0;
    }
    
    
    {
    {
    {            static __device__ __forceinline__ int atomicMax(int* address, int val)
            {
                return ::atomicMax(address, val);
            }
            static __device__ __forceinline__ float atomicMax(float* address, float val)
            {
            #if __CUDA_ARCH__ >= 120
                int* address_as_i = (int*) address;
                int old = *address_as_i, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_i, assumed,
                        __float_as_int(::fmaxf(val, __int_as_float(assumed))));
                } while (assumed != old);
                return __int_as_float(old);
            #else
                (void) address;
                (void) val;
                return 0.0f;
            #endif
            }
            static __device__ __forceinline__ double atomicMax(double* address, double val)
            {
            #if __CUDA_ARCH__ >= 130
                unsigned long long int* address_as_ull = (unsigned long long int*) address;
                unsigned long long int old = *address_as_ull, assumed;
                do {
                    assumed = old;
                    old = ::atomicCAS(address_as_ull, assumed,
                        __double_as_longlong(::fmax(val, __longlong_as_double(assumed))));
                } while (assumed != old);
                return __longlong_as_double(old);
            #else
                (void) address;
                (void) val;
                return 0.0;
            #endif
            }
        };
    }; //struct Emulation
}}} // namespace cv { namespace cuda { namespace cudev
    
    
    {} // namespace
    
    private:
  std::atomic<int> m_refCount;
  int m_timeoutSeconds;
    
      if ((option & (ONIG_OPTION_MULTILINE | ONIG_OPTION_SINGLELINE)) ==
      (ONIG_OPTION_MULTILINE | ONIG_OPTION_SINGLELINE)) {
    if (len_left > 0) {
      --len_left;
      *(p++) = 'p';
    }
    ++len_req;
  } else {
    if ((option & ONIG_OPTION_MULTILINE) != 0) {
      if (len_left > 0) {
        --len_left;
        *(p++) = 'm';
      }
      ++len_req;
    }
    }
    
      /**
   * Sub-class handles a request by implementing this function.
   */
  virtual void handleRequest(Transport* transport) = 0;
    
      bool ret = true;
  bitmask* run_nodes = numa_get_run_node_mask();
  bitmask* mem_nodes = numa_get_mems_allowed();
  for (int i = 0; i <= max_node; i++) {
    if (!numa_bitmask_isbitset(run_nodes, i) ||
        !numa_bitmask_isbitset(mem_nodes, i)) {
      // Only deal with the case of a contiguous set of nodes where we can
      // run/allocate memory on each node.
      ret = false;
      break;
    }
    numa_node_set |= (uint32_t)1 << i;
    numa_num_nodes++;
  }
  numa_bitmask_free(run_nodes);
  numa_bitmask_free(mem_nodes);
    
    void ThriftBuffer::read(std::vector<std::string> &data) {
  int32_t size;
  read(size);
  data.resize(size);
  for (int i = 0; i < size; i++) {
    read(data[i]);
  }
}
    
    // Store the snappy compression of 'input[0,input_length-1]' in *output.
// Returns false if snappy is not supported by this port.
extern bool Snappy_Compress(const char* input, size_t input_length,
                            std::string* output);
    
    
    {}  // namespace leveldb
    
    // Snapshots are kept in a doubly-linked list in the DB.
// Each SnapshotImpl corresponds to a particular sequence number.
class SnapshotImpl : public Snapshot {
 public:
  SequenceNumber number_;  // const after creation
    }
    
    
    {
    {    if (!s.ok()) {
      assert(table == NULL);
      delete file;
      // We do not cache error results so that if the error is transient,
      // or somebody repairs the file, we recover automatically.
    } else {
      TableAndFile* tf = new TableAndFile;
      tf->file = file;
      tf->table = table;
      *handle = cache_->Insert(key, tf, 1, &DeleteEntry);
    }
  }
  return s;
}
    
      VersionEdit edit;
  for (int i = 0; i < 4; i++) {
    TestEncodeDecode(edit);
    edit.AddFile(3, kBig + 300 + i, kBig + 400 + i,
                 InternalKey('foo', kBig + 500 + i, kTypeValue),
                 InternalKey('zoo', kBig + 600 + i, kTypeDeletion));
    edit.DeleteFile(4, kBig + 700 + i);
    edit.SetCompactPointer(i, InternalKey('x', kBig + 900 + i, kTypeValue));
  }
    
    TEST(FindFileTest, MultipleNullBoundaries) {
  Add('150', '200');
  Add('200', '250');
  Add('300', '350');
  Add('400', '450');
  ASSERT_TRUE(! Overlaps(NULL, '149'));
  ASSERT_TRUE(! Overlaps('451', NULL));
  ASSERT_TRUE(Overlaps(NULL, NULL));
  ASSERT_TRUE(Overlaps(NULL, '150'));
  ASSERT_TRUE(Overlaps(NULL, '199'));
  ASSERT_TRUE(Overlaps(NULL, '200'));
  ASSERT_TRUE(Overlaps(NULL, '201'));
  ASSERT_TRUE(Overlaps(NULL, '400'));
  ASSERT_TRUE(Overlaps(NULL, '800'));
  ASSERT_TRUE(Overlaps('100', NULL));
  ASSERT_TRUE(Overlaps('200', NULL));
  ASSERT_TRUE(Overlaps('449', NULL));
  ASSERT_TRUE(Overlaps('450', NULL));
}
    
    // Print histogram of operation timings
static bool FLAGS_histogram = false;
    
      virtual Status GetFileSize(const std::string& fname, uint64_t* file_size) {
    MutexLock lock(&mutex_);
    if (file_map_.find(fname) == file_map_.end()) {
      return Status::IOError(fname, 'File not found');
    }
    }
    
    namespace {
class EmptyIterator : public Iterator {
 public:
  EmptyIterator(const Status& s) : status_(s) { }
  virtual bool Valid() const { return false; }
  virtual void Seek(const Slice& target) { }
  virtual void SeekToFirst() { }
  virtual void SeekToLast() { }
  virtual void Next() { assert(false); }
  virtual void Prev() { assert(false); }
  Slice key() const { assert(false); return Slice(); }
  Slice value() const { assert(false); return Slice(); }
  virtual Status status() const { return status_; }
 private:
  Status status_;
};
}  // namespace
    
     private:
  void Update() {
    valid_ = iter_->Valid();
    if (valid_) {
      key_ = iter_->key();
    }
  }
    
    memory_resource* get_default_resource();
void set_default_resource(memory_resource*);
memory_resource* new_delete_resource();
    
    /**
 * Get the path to the current executable.
 *
 * Note that this is not reliable and not recommended in general; it may not be
 * implemented on your platform (in which case it will throw), the executable
 * might have been moved or replaced while running, and applications comprising
 * of multiple executables should use some form of configuration system to
 * find the other executables rather than relying on relative paths from one
 * to another.
 *
 * So this should only be used for tests, logging, or other innocuous purposes.
 */
path executable_path();
    
    #include <iostream>
#include <stdexcept>
    
    
    {
    {  /**
   * The I/O thread.
   *
   * This should come last, since all other member variables need to be
   * constructed before the I/O thread starts.
   */
  std::thread ioThread_;
};
} // namespace folly

    
      std::shared_ptr<LogWriter> createWriter() override {
    // Get the output file to use
    if (path_.empty()) {
      throw std::invalid_argument('no path specified for file handler');
    }
    return fileWriterFactory_.createWriter(
        File{path_, O_WRONLY | O_APPEND | O_CREAT});
  }
    
    namespace folly {
    }
    
      // Update all of the values in xlogLevels_
  for (auto* levelPtr : xlogLevels_) {
    levelPtr->store(newEffectiveLevel, std::memory_order_release);
  }
    
    void LogConfig::update(const LogConfig& other) {
  // Update handlerConfigs_ with all of the entries from the other LogConfig.
  // Any entries already present in our handlerConfigs_ are replaced wholesale.
  for (const auto& entry : other.handlerConfigs_) {
    if (entry.second.type.hasValue()) {
      // This is a complete LogHandlerConfig that should be inserted
      // or completely replace an existing handler config with this name.
      auto result = handlerConfigs_.insert(entry);
      if (!result.second) {
        result.first->second = entry.second;
      }
    } else {
      // This config is updating an existing LogHandlerConfig rather than
      // completely replacing it.
      auto iter = handlerConfigs_.find(entry.first);
      if (iter == handlerConfigs_.end()) {
        throw std::invalid_argument(to<std::string>(
            'cannot update configuration for unknown log handler \'',
            entry.first,
            '\''));
      }
      iter->second.update(entry.second);
    }
  }
    }
    
    #include <stdexcept>
    
    /**
 * LogHandler represents a generic API for processing log messages.
 *
 * LogHandlers have an associated log level.  The LogHandler will discard any
 * messages below its log level.  This allows specific LogHandlers to perform
 * additional filtering of messages even if the messages were enabled at the
 * LogCategory level.  For instance, a single LogCategory may have two
 * LogHandlers attached, one that logs locally to a file, and one that sends
 * messages to a remote logging service.  The local LogHandler may be
 * configured to record all messages, but the remote LogHandler may want to
 * only process ERROR messages and above, even when debug logging is enabled
 * for this LogCategory.
 *
 * By default the LogHandler level is set to LogLevel::NONE, which means that
 * all log messages will be processed.
 */
class LogHandler {
 public:
  virtual ~LogHandler() = default;
    }