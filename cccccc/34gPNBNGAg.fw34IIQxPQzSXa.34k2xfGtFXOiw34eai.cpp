
        
        void leveldb_writebatch_iterate(
    leveldb_writebatch_t* b,
    void* state,
    void (*put)(void*, const char* k, size_t klen, const char* v, size_t vlen),
    void (*deleted)(void*, const char* k, size_t klen)) {
  class H : public WriteBatch::Handler {
   public:
    void* state_;
    void (*put_)(void*, const char* k, size_t klen, const char* v, size_t vlen);
    void (*deleted_)(void*, const char* k, size_t klen);
    virtual void Put(const Slice& key, const Slice& value) {
      (*put_)(state_, key.data(), key.size(), value.data(), value.size());
    }
    virtual void Delete(const Slice& key) {
      (*deleted_)(state_, key.data(), key.size());
    }
  };
  H handler;
  handler.state_ = state;
  handler.put_ = put;
  handler.deleted_ = deleted;
  b->rep.Iterate(&handler);
}
    
    #include 'db/db_iter.h'
    
    // Level-0 compaction is started when we hit this many files.
static const int kL0_CompactionTrigger = 4;
    
    // Return the name of the current file.  This file contains the name
// of the current manifest file.  The result will be prefixed with
// 'dbname'.
extern std::string CurrentFileName(const std::string& dbname);
    
    Status TableCache::Get(const ReadOptions& options,
                       uint64_t file_number,
                       uint64_t file_size,
                       const Slice& k,
                       void* arg,
                       void (*saver)(void*, const Slice&, const Slice&)) {
  Cache::Handle* handle = NULL;
  Status s = FindTable(file_number, file_size, &handle);
  if (s.ok()) {
    Table* t = reinterpret_cast<TableAndFile*>(cache_->Value(handle))->table;
    s = t->InternalGet(options, k, arg, saver);
    cache_->Release(handle);
  }
  return s;
}
    
      std::string DebugString() const;
    
    int main(int argc, char** argv) {
  return leveldb::test::RunAllTests();
}

    
        if (bytes_ > 0) {
      char rate[100];
      snprintf(rate, sizeof(rate), '%6.1f MB/s',
               (bytes_ / 1048576.0) / (finish - start_));
      if (!message_.empty()) {
        message_  = std::string(rate) + ' ' + message_;
      } else {
        message_ = rate;
      }
    }
    
    TEST_F(UnicharcompressTest, DoesChinese) {
  LOG(INFO) << 'Testing chi_tra';
  LoadUnicharset('chi_tra.unicharset');
  ExpectCorrect('chi_tra');
  LOG(INFO) << 'Testing chi_sim';
  LoadUnicharset('chi_sim.unicharset');
  ExpectCorrect('chi_sim');
}
    
    const ICOORD *dirtab = (ICOORD *) idirtab;
    
    
    {}  // namespace tesseract.
    
      // Adds a character sample to this sample set.
  // If the unichar is not already in the local unicharset, it is added.
  // Returns the unichar_id of the added sample, from the local unicharset.
  int AddSample(const char* unichar, TrainingSample* sample);
  // Adds a character sample to this sample set with the given unichar_id,
  // which must correspond to the local unicharset (in this).
  void AddSample(int unichar_id, TrainingSample* sample);
    
      int NumOutputs() const {
    return network_->NumOutputs();
  }
  int training_iteration() const {
    return training_iteration_;
  }
  int sample_iteration() const {
    return sample_iteration_;
  }
  double learning_rate() const {
    return learning_rate_;
  }
  LossType OutputLossType() const {
    if (network_ == nullptr) return LT_NONE;
    StaticShape shape;
    shape = network_->OutputShape(shape);
    return shape.loss_type();
  }
  bool SimpleTextOutput() const { return OutputLossType() == LT_SOFTMAX; }
  bool IsIntMode() const { return (training_flags_ & TF_INT_MODE) != 0; }
  // True if recoder_ is active to re-encode text to a smaller space.
  bool IsRecoding() const {
    return (training_flags_ & TF_COMPRESS_UNICHARSET) != 0;
  }
  // Returns true if the network is a TensorFlow network.
  bool IsTensorFlow() const { return network_->type() == NT_TENSORFLOW; }
  // Returns a vector of layer ids that can be passed to other layer functions
  // to access a specific layer.
  GenericVector<STRING> EnumerateLayers() const {
    ASSERT_HOST(network_ != nullptr && network_->type() == NT_SERIES);
    Series* series = static_cast<Series*>(network_);
    GenericVector<STRING> layers;
    series->EnumerateLayers(nullptr, &layers);
    return layers;
  }
  // Returns a specific layer from its id (from EnumerateLayers).
  Network* GetLayer(const STRING& id) const {
    ASSERT_HOST(network_ != nullptr && network_->type() == NT_SERIES);
    ASSERT_HOST(id.length() > 1 && id[0] == ':');
    Series* series = static_cast<Series*>(network_);
    return series->GetLayer(&id[1]);
  }
  // Returns the learning rate of the layer from its id.
  float GetLayerLearningRate(const STRING& id) const {
    ASSERT_HOST(network_ != nullptr && network_->type() == NT_SERIES);
    if (network_->TestFlag(NF_LAYER_SPECIFIC_LR)) {
      ASSERT_HOST(id.length() > 1 && id[0] == ':');
      Series* series = static_cast<Series*>(network_);
      return series->LayerLearningRate(&id[1]);
    } else {
      return learning_rate_;
    }
  }
  // Multiplies the all the learning rate(s) by the given factor.
  void ScaleLearningRate(double factor) {
    ASSERT_HOST(network_ != nullptr && network_->type() == NT_SERIES);
    learning_rate_ *= factor;
    if (network_->TestFlag(NF_LAYER_SPECIFIC_LR)) {
      GenericVector<STRING> layers = EnumerateLayers();
      for (int i = 0; i < layers.size(); ++i) {
        ScaleLayerLearningRate(layers[i], factor);
      }
    }
  }
  // Multiplies the learning rate of the layer with id, by the given factor.
  void ScaleLayerLearningRate(const STRING& id, double factor) {
    ASSERT_HOST(network_ != nullptr && network_->type() == NT_SERIES);
    ASSERT_HOST(id.length() > 1 && id[0] == ':');
    Series* series = static_cast<Series*>(network_);
    series->ScaleLayerLearningRate(&id[1], factor);
  }
    
    #include 'test/cpp/qps/benchmark_config.h'
#include 'test/cpp/qps/driver.h'
#include 'test/cpp/qps/report.h'
#include 'test/cpp/qps/server.h'
#include 'test/cpp/util/test_config.h'
#include 'test/cpp/util/test_credentials_provider.h'
    
    namespace grpc {
namespace {
    }
    }
    
      // Increment the query count by 1
  void Incr();
    
    grpc::string DescribeService(const grpc::protobuf::ServiceDescriptor* service) {
  grpc::string result;
  if (service->options().deprecated()) {
    result.append('DEPRECATED\n');
  }
  result.append('filename: ' + service->file()->name() + '\n');
    }
    
    void CoreStatsToProto(const grpc_stats_data& core, Stats* proto) {
  for (int i = 0; i < GRPC_STATS_COUNTER_COUNT; i++) {
    Metric* m = proto->add_metrics();
    m->set_name(grpc_stats_counter_name[i]);
    m->set_count(core.counters[i]);
  }
  for (int i = 0; i < GRPC_STATS_HISTOGRAM_COUNT; i++) {
    Metric* m = proto->add_metrics();
    m->set_name(grpc_stats_histogram_name[i]);
    Histogram* h = m->mutable_histogram();
    for (int j = 0; j < grpc_stats_histo_buckets[i]; j++) {
      Bucket* b = h->add_buckets();
      b->set_start(grpc_stats_histo_bucket_boundaries[i][j]);
      b->set_count(core.histograms[grpc_stats_histo_start[i] + j]);
    }
  }
}
    
    /*
 * JNI 1.2+ initialization.  (As of 1.6, the pre-1.2 structures are no
 * longer supported.)
 */
typedef struct JavaVMOption {
    const char* optionString;
    void*       extraInfo;
} JavaVMOption;
    
      const std::string& libraryName() const noexcept { return libraryName_; }
    
    #pragma once
    
    #define ASSERT_BUF_SIZE 4096
static char sAssertBuf[ASSERT_BUF_SIZE];
static AssertHandler gAssertHandler;
    
    
    {  // There are subtle issues with calling the next functions directly. It is
  // much better to always use a ThreadScope to manage attaching/detaching for
  // you.
  FBEXPORT static JNIEnv* ensureCurrentThreadIsAttached();
  FBEXPORT static void detachCurrentThread();
};
    
    
    {}

    
    namespace facebook {
#define ENABLE_FBASSERT 1
    }