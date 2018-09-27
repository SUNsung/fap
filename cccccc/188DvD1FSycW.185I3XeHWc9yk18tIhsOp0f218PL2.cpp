// static
void UvTaskRunner::OnTimeout(uv_timer_t* timer) {
  UvTaskRunner* self = static_cast<UvTaskRunner*>(timer->data);
  if (!ContainsKey(self->tasks_, timer))
    return;
    }
    
      // base::SingleThreadTaskRunner:
  bool PostDelayedTask(const base::Location& from_here,
                       base::OnceClosure task,
                       base::TimeDelta delay) override;
  bool RunsTasksInCurrentSequence() const override;
  bool PostNonNestableDelayedTask(const base::Location& from_here,
                                  base::OnceClosure task,
                                  base::TimeDelta delay) override;
    
      view_.reset(
      NativeBrowserView::Create(api_web_contents_->managed_web_contents()));
    
      static void BuildPrototype(v8::Isolate* isolate,
                             v8::Local<v8::FunctionTemplate> prototype);
    
     protected:
  explicit LabelButton(const std::string& text);
  ~LabelButton() override;
    
    namespace api {
    }
    
    
    {}  // namespace api
    
    
    {  mate::Dictionary dict(isolate, exports);
  dict.Set('net', Net::Create(isolate));
  dict.Set('Net', Net::GetConstructor(isolate)->GetFunction());
}
    
    
    {/*! \brief typedef the factory function of data iterator */
typedef std::function<IIterator<DataBatch> *()> DataIteratorFactory;
/*!
 * \brief Registry entry for DataIterator factory functions.
 */
struct DataIteratorReg
    : public dmlc::FunctionRegEntryBase<DataIteratorReg,
                                        DataIteratorFactory> {
};
//--------------------------------------------------------------
// The following part are API Registration of Iterators
//--------------------------------------------------------------
/*!
 * \brief Macro to register Iterators
 *
 * \code
 * // example of registering a mnist iterator
 * REGISTER_IO_ITE(MNISTIter)
 * .describe('Mnist data iterator')
 * .set_body([]() {
 *     return new PrefetcherIter(new MNISTIter());
 *   });
 * \endcode
 */
#define MXNET_REGISTER_IO_ITER(name)                                    \
  DMLC_REGISTRY_REGISTER(::mxnet::DataIteratorReg, DataIteratorReg, name)
}  // namespace mxnet
#endif  // MXNET_IO_H_

    
    
    { private:
  // destructor
  ~SimpleOpRegistry();
  /*! \brief internal registry map */
  std::map<std::string, SimpleOpRegEntry*> fmap_;
};
    
    #define MXCAFFEBLOB(__object$, __type$) \
  (static_cast<mxnet::op::caffe::CaffeBlobFriend<__type$> *>(__object$))
    
    template <typename Dtype>
class LayerRegistry {
 public:
  static ::caffe::Layer<Dtype> * CreateLayer(const ::caffe::LayerParameter& param) {
    ::caffe::shared_ptr< ::caffe::Layer<Dtype> > ptr =
      ::caffe::LayerRegistry<Dtype>::CreateLayer(param);
    // avoid caffe::layer destructor, which deletes the weights layer owns
    new ::caffe::shared_ptr< ::caffe::Layer<Dtype> >(ptr);
    return ptr.get();
  }
};
    
    
    {  Engine::Get()->PushSync([=](RunContext ctx){
      ndout.CheckAndAlloc();
      cv::Mat buf(ndsrc.shape()[0], ndsrc.shape()[1],
                  dims[2] == 3 ? CV_8UC3 : CV_8U, ndsrc.data().dptr_);
      cv::Mat dst(h, w, dims[2] == 3 ? CV_8UC3 : CV_8U, ndout.data().dptr_);
      cv::resize(buf, dst, cv::Size(w, h), 0, 0, interpolation);
      CHECK(!dst.empty());
    }, ndout.ctx(), {ndsrc.var()}, {ndout.var()});
  NDArray *tmp = new NDArray();
  *tmp = ndout;
  *out = tmp;
  API_END();
}
    
    template <std::size_t kNumGpus, std::size_t kStreams>
RunContext StreamManager<kNumGpus, kStreams>::GetRunContext(
    Context const& ctx) {
  RunContext ret;
  switch (ctx.dev_mask()) {
    case cpu::kDevMask:
      ret = RunContext{ctx, nullptr};
      break;
    case gpu::kDevMask: {
#if MXNET_USE_CUDA
      std::size_t use_counter;
      CUDA_CALL(cudaSetDevice(ctx.dev_id));
      {
        std::lock_guard<std::mutex> lock{mutex_};
        auto&& counter = gpu_cnt_.at(ctx.dev_id);
        if (counter == -1) {
          for (auto&& i : gpu_streams_.at(ctx.dev_id)) {
            i = mshadow::NewStream<gpu>(true, MXNET_USE_CUDNN != 0, ctx.dev_id);
          }
          counter = 0;
        }
        use_counter = counter;
        counter = (counter + 1) % kStreams;
      }
      ret = RunContext{ctx, gpu_streams_.at(ctx.dev_id).at(use_counter)};
      break;
#else
      LOG(FATAL) << MXNET_GPU_NOT_ENABLED_ERROR;
#endif  // MXNET_USE_CUDA
    default:
      LOG(FATAL) << 'Not Reached';
    }
  }
  return ret;
}
    
      // Each thread goes through the following states:
  //    (1) initializing
  //    (2) waiting for others to be initialized
  //    (3) running
  //    (4) done
    
    #ifndef STORAGE_LEVELDB_DB_DB_IMPL_H_
#define STORAGE_LEVELDB_DB_DB_IMPL_H_
    
    void InternalKeyComparator::FindShortestSeparator(
      std::string* start,
      const Slice& limit) const {
  // Attempt to shorten the user portion of the key
  Slice user_start = ExtractUserKey(*start);
  Slice user_limit = ExtractUserKey(limit);
  std::string tmp(user_start.data(), user_start.size());
  user_comparator_->FindShortestSeparator(&tmp, user_limit);
  if (tmp.size() < user_start.size() &&
      user_comparator_->Compare(user_start, tmp) < 0) {
    // User key has become shorter physically, but larger logically.
    // Tack on the earliest possible number to the shortened user key.
    PutFixed64(&tmp, PackSequenceAndType(kMaxSequenceNumber,kValueTypeForSeek));
    assert(this->Compare(*start, tmp) < 0);
    assert(this->Compare(tmp, limit) < 0);
    start->swap(tmp);
  }
}
    
    #include <stdio.h>
#include 'leveldb/comparator.h'
#include 'leveldb/db.h'
#include 'leveldb/filter_policy.h'
#include 'leveldb/slice.h'
#include 'leveldb/table_builder.h'
#include 'util/coding.h'
#include 'util/logging.h'
    
    #include 'db/db_impl.h'
#include 'db/filename.h'
#include 'db/version_set.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
#include 'util/testharness.h'
#include 'util/testutil.h'
    
        // Create builder.
    std::string copy = TableFileName(dbname_, next_file_number_++);
    WritableFile* file;
    Status s = env_->NewWritableFile(copy, &file);
    if (!s.ok()) {
      return;
    }
    TableBuilder* builder = new TableBuilder(options_, file);
    
    // We want to make sure that with a single writer and multiple
// concurrent readers (with no synchronization other than when a
// reader's iterator is created), the reader always observes all the
// data that was present in the skip list when the iterator was
// constructor.  Because insertions are happening concurrently, we may
// also observe new values that were inserted since the iterator was
// constructed, but we should never miss any values that were present
// at iterator construction time.
//
// We generate multi-part keys:
//     <key,gen,hash>
// where:
//     key is in range [0..K-1]
//     gen is a generation number for key
//     hash is hash(key,gen)
//
// The insertion code picks a random key, sets gen to be 1 + the last
// generation number inserted for that key, and sets hash to Hash(key,gen).
//
// At the beginning of a read, we snapshot the last inserted
// generation number for each key.  We then iterate, including random
// calls to Next() and Seek().  For every key we encounter, we
// check that it is either expected given the initial snapshot or has
// been concurrently added since the iterator started.
class ConcurrentTest {
 private:
  static const uint32_t K = 4;
    }
    
    /*!
 * \brief Macro to register linear updater.
 */
#define XGBOOST_REGISTER_LINEAR_UPDATER(UniqueId, Name)                        \
  static DMLC_ATTRIBUTE_UNUSED ::xgboost::LinearUpdaterReg&                    \
      __make_##LinearUpdaterReg##_##UniqueId##__ =                             \
          ::dmlc::Registry< ::xgboost::LinearUpdaterReg>::Get()->__REGISTER__( \
              Name)
    
      /**
   * \fn  virtual void Predictor::Init(const std::vector<std::pair<std::string,
   * std::string> >&cfg ,const std::vector<std::shared_ptr<DMatrix> > &cache);
   *
   * \brief Configure and register input matrices in prediction cache.
   *
   * \param cfg   The configuration.
   * \param cache Vector of DMatrix's to be used in prediction.
   */
    
    inline Float8 pow2n(Float8 const& n) {
  const float pow2_23 = 8388608.0;  // 2^23
  const float bias = 127.0;         // bias in exponent
  Float8 a =
      n + Float8(bias + pow2_23);  // put n + bias in least significant bits
  __m256i b = _mm256_castps_si256(a.x);
    }
    
    namespace xgboost {
namespace common {
/*!
 * \brief calculate the sigmoid of the input.
 * \param x input parameter
 * \return the transformed value.
 */
XGBOOST_DEVICE inline float Sigmoid(float x) {
  return 1.0f / (1.0f + expf(-x));
}
    }
    }
    
      MetaInfo& Info() override {
    return source_->info;
  }
    
    namespace xgboost {
namespace tree {
// List of files that will be force linked in static links.
DMLC_REGISTRY_LINK_TAG(updater_colmaker);
DMLC_REGISTRY_LINK_TAG(updater_skmaker);
DMLC_REGISTRY_LINK_TAG(updater_refresh);
DMLC_REGISTRY_LINK_TAG(updater_prune);
DMLC_REGISTRY_LINK_TAG(updater_fast_hist);
DMLC_REGISTRY_LINK_TAG(updater_histmaker);
DMLC_REGISTRY_LINK_TAG(updater_sync);
#ifdef XGBOOST_USE_CUDA
DMLC_REGISTRY_LINK_TAG(updater_gpu);
DMLC_REGISTRY_LINK_TAG(updater_gpu_hist);
#endif
}  // namespace tree
}  // namespace xgboost

    
      port::Mutex* GetMutex() {
    return &mu_;
  }
    
    Compaction* ColumnFamilyData::CompactRange(
    const MutableCFOptions& mutable_cf_options, int input_level,
    int output_level, uint32_t output_path_id, uint32_t max_subcompactions,
    const InternalKey* begin, const InternalKey* end,
    InternalKey** compaction_end, bool* conflict) {
  auto* result = compaction_picker_->CompactRange(
      GetName(), mutable_cf_options, current_->storage_info(), input_level,
      output_level, output_path_id, max_subcompactions, begin, end,
      compaction_end, conflict);
  if (result != nullptr) {
    result->SetInputVersion(current_);
  }
  return result;
}
    
    #include 'db/compaction.h'
#include 'db/compaction_iteration_stats.h'
#include 'db/merge_helper.h'
#include 'db/pinned_iterators_manager.h'
#include 'db/range_del_aggregator.h'
#include 'db/snapshot_checker.h'
#include 'options/cf_options.h'
#include 'rocksdb/compaction_filter.h'
    
    // Skip x if floor(x/10) is even, use range skips. Requires that keys are
// zero-padded to length 10.
class SkipEvenFilter : public CompactionFilter {
 public:
  virtual Decision FilterV2(int /*level*/, const Slice& key,
                            ValueType /*value_type*/,
                            const Slice& /*existing_value*/,
                            std::string* /*new_value*/,
                            std::string* skip_until) const override {
    cfilter_count++;
    int i = std::stoi(key.ToString());
    if (i / 10 % 2 == 0) {
      char key_str[100];
      snprintf(key_str, sizeof(key_str), '%010d', i / 10 * 10 + 10);
      *skip_until = key_str;
      ++cfilter_skips;
      return Decision::kRemoveAndSkipUntil;
    }
    return Decision::kKeep;
  }
    }
    
    class DBEncryptionTest : public DBTestBase {
 public:
  DBEncryptionTest() : DBTestBase('/db_encryption_test') {}
};
    
    
    {}  //  namespace rocksdb

    
      friend class WriteControllerToken;
  friend class StopWriteToken;
  friend class DelayWriteToken;
  friend class CompactionPressureToken;
    
      // close db
  for (auto handle : handles) {
    delete handle;
  }
  delete db;
    
    // Example structure that describes a compaction task.
struct CompactionTask {
  CompactionTask(
      DB* _db, Compactor* _compactor,
      const std::string& _column_family_name,
      const std::vector<std::string>& _input_file_names,
      const int _output_level,
      const CompactionOptions& _compact_options,
      bool _retry_on_fail)
          : db(_db),
            compactor(_compactor),
            column_family_name(_column_family_name),
            input_file_names(_input_file_names),
            output_level(_output_level),
            compact_options(_compact_options),
            retry_on_fail(_retry_on_fail) {}
  DB* db;
  Compactor* compactor;
  const std::string& column_family_name;
  std::vector<std::string> input_file_names;
  int output_level;
  CompactionOptions compact_options;
  bool retry_on_fail;
};