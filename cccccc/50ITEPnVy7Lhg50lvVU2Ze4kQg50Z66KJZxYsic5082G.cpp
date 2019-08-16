
        
        
    {
    {} // namespace nn
} // namespace torch

    
    REGISTER_CPU_OPERATOR(
    SubGradient,
    BinaryElementwiseGradientOp<
        NumericTypes,
        CPUContext,
        SubFunctor<CPUContext>>);
    
    namespace caffe2 {
    }
    
    #include 'hdf5.h'
#include 'hdf5_hl.h'
    
    #include 'caffe/blob.hpp'
#include 'caffe/common.hpp'
#include 'caffe/layers/hdf5_output_layer.hpp'
#include 'caffe/proto/caffe.pb.h'
#include 'caffe/util/hdf5.hpp'
#include 'caffe/util/io.hpp'
    
    namespace caffe {
    }
    
      // True iff a request to stop early was received.
  bool requested_early_exit_;
    
    template <typename Dtype>
void PoolingLayer<Dtype>::Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {
  CHECK_EQ(4, bottom[0]->num_axes()) << 'Input must have 4 axes, '
      << 'corresponding to (num, channels, height, width)';
  channels_ = bottom[0]->channels();
  height_ = bottom[0]->height();
  width_ = bottom[0]->width();
  if (global_pooling_) {
    kernel_h_ = bottom[0]->height();
    kernel_w_ = bottom[0]->width();
  }
  switch (round_mode_) {
  case PoolingParameter_RoundMode_CEIL:
    pooled_height_ = static_cast<int>(ceil(static_cast<float>(
        height_ + 2 * pad_h_ - kernel_h_) / stride_h_)) + 1;
    pooled_width_ = static_cast<int>(ceil(static_cast<float>(
        width_ + 2 * pad_w_ - kernel_w_) / stride_w_)) + 1;
    break;
  case PoolingParameter_RoundMode_FLOOR:
    pooled_height_ = static_cast<int>(floor(static_cast<float>(
        height_ + 2 * pad_h_ - kernel_h_) / stride_h_)) + 1;
    pooled_width_ = static_cast<int>(floor(static_cast<float>(
        width_ + 2 * pad_w_ - kernel_w_) / stride_w_)) + 1;
    break;
  default:
    LOG(FATAL) << 'Unknown rounding mode.';
  }
  if (pad_h_ || pad_w_) {
    // If we have padding, ensure that the last pooling starts strictly
    // inside the image (instead of at the padding); otherwise clip the last.
    if ((pooled_height_ - 1) * stride_h_ >= height_ + pad_h_) {
      --pooled_height_;
    }
    if ((pooled_width_ - 1) * stride_w_ >= width_ + pad_w_) {
      --pooled_width_;
    }
    CHECK_LT((pooled_height_ - 1) * stride_h_, height_ + pad_h_);
    CHECK_LT((pooled_width_ - 1) * stride_w_, width_ + pad_w_);
  }
  top[0]->Reshape(bottom[0]->num(), channels_, pooled_height_,
      pooled_width_);
  if (top.size() > 1) {
    top[1]->ReshapeLike(*top[0]);
  }
  // If max pooling, we will initialize the vector index part.
  if (this->layer_param_.pooling_param().pool() ==
      PoolingParameter_PoolMethod_MAX && top.size() == 1) {
    max_idx_.Reshape(bottom[0]->num(), channels_, pooled_height_,
        pooled_width_);
  }
  // If stochastic pooling, we will initialize the random index part.
  if (this->layer_param_.pooling_param().pool() ==
      PoolingParameter_PoolMethod_STOCHASTIC) {
    rand_idx_.Reshape(bottom[0]->num(), channels_, pooled_height_,
      pooled_width_);
  }
}
    
    /* Pair (label, confidence) representing a prediction. */
typedef std::pair<string, float> Prediction;
    
    /// @brief Fills a Blob with constant or randomly-generated data.
template <typename Dtype>
class Filler {
 public:
  explicit Filler(const FillerParameter& param) : filler_param_(param) {}
  virtual ~Filler() {}
  virtual void Fill(Blob<Dtype>* blob) = 0;
 protected:
  FillerParameter filler_param_;
};  // class Filler
    
    
    {	return cmderOptions;
}
    
      Status GetFileModificationTime(const std::string& fname,
                                 uint64_t* file_mtime) override {
    PERF_TIMER_GUARD(env_get_file_modification_time_nanos);
    return EnvWrapper::GetFileModificationTime(fname, file_mtime);
  }
    
    #include <chrono>
#include <condition_variable>
#include <functional>
#include <mutex>
    
    Status WriteBatchBase::SingleDelete(const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return SingleDelete(key_slice);
}
    
    class DB;
    
    // Returns an Env that translates paths such that the root directory appears to
// be chroot_dir. chroot_dir should refer to an existing directory.
Env* NewChrootEnv(Env* base_env, const std::string& chroot_dir);
    
    // This is an example interface of external-compaction algorithm.
// Compaction algorithm can be implemented outside the core-RocksDB
// code by using the pluggable compaction APIs that RocksDb provides.
class Compactor : public EventListener {
 public:
  // Picks and returns a compaction task given the specified DB
  // and column family.  It is the caller's responsibility to
  // destroy the returned CompactionTask.  Returns 'nullptr'
  // if it cannot find a proper compaction task.
  virtual CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) = 0;
    }
    
      // Put key-value
  s = db->Put(WriteOptions(), 'key1', 'value');
  assert(s.ok());
  std::string value;
  // get value
  s = db->Get(ReadOptions(), 'key1', &value);
  assert(s.ok());
  assert(value == 'value');
    
    #include 'rocksdb/db.h'
    
    // Simple RAII wrapper class for Snapshot.
// Constructing this object will create a snapshot.  Destructing will
// release the snapshot.
class ManagedSnapshot {
 public:
  explicit ManagedSnapshot(DB* db);
    }
    
    #ifdef LUA
#include <string>
#include <vector>
    
      if ((mode & PF_READ) == PF_READ) {
    access_mask |= GENERIC_READ;
  }
    
    TEST_F(CertificatesTablesTest, test_service) {
  LPCWSTR input = L'RpcSs\\My'; // This service should always exist
  std::string storeLocation = 'Services';
  std::string serviceNameOrUserId, sid, storeName;
  ServiceNameMap cache;
    }
    
    /**
* @brief Windows helper function used by to convert a binary SID struct into a
* string.
*
* @returns string representation of the binary SID struct.
*/
std::string psidToString(PSID sid);
    
    
    {
    {        // Common schema, normalizing group information with POSIX:
        auto rid = getRidFromSid(sidPtr);
        r['gid'] = BIGINT(rid);
        r['gid_signed'] = INTEGER(rid);
        r['groupname'] = wstringToString(lginfo[i].lgrpi1_name);
        results.push_back(r);
      } else {
        // If LookupAccountNameW failed to find a SID, don't add a row to the
        // table.
        LOG(WARNING)
            << 'Failed to find a SID from LookupAccountNameW for group: '
            << lginfo[i].lgrpi1_name;
      }
    }
    
    
    {
    {} // namespace table_tests
} // namespace osquery

    
    
    {
    {
    {
    {        auto doc = JSON::newFromValue(obj[key]);
        parser_config.emplace(std::make_pair(key, std::move(doc)));
      }
    }
    // The config parser plugin will receive a copy of each property tree for
    // each top-level-config key. The parser may choose to update the config's
    // internal state
    parser->update(source, parser_config);
  }
}
    
      /**
   * @brief Map a function across the set of scheduled queries
   *
   * @param predicate is a function which accepts two parameters, the name of
   * the query and the ScheduledQuery struct of the queries data. predicate
   * will be called on each currently scheduled query.
   *
   * @param blacklisted [optional] return blacklisted queries if true.
   *
   * @code{.cpp}
   *   std::map<std::string, ScheduledQuery> queries;
   *   Config::get().scheduledQueries(
   *      ([&queries](std::string name, const ScheduledQuery& query) {
   *        queries[name] = query;
   *      }));
   * @endcode
   */
  void scheduledQueries(
      std::function<void(std::string name, const ScheduledQuery& query)>
          predicate,
      bool blacklisted = false) const;
    
    
    {  // Try again, this time requesting scheduled queries.
  query_names.clear();
  bool blacklisted = false;
  get().scheduledQueries(([&blacklisted, &query_names, &query_name](
                              std::string name, const ScheduledQuery& query) {
                           if (name == query_name) {
                             // Only populate the query we've blacklisted.
                             query_names.push_back(std::move(name));
                             blacklisted = query.blacklisted;
                           }
                         }),
                         true);
  ASSERT_EQ(query_names.size(), std::size_t{1});
  EXPECT_EQ(query_names[0], query_name);
  EXPECT_TRUE(blacklisted);
}
    
    
namespace osquery {
    }
    
    #include <osquery/core/database/database.h>
#include <osquery/utils/conversions/tryto.h>
    
     private:
  bool is_open_ = false;