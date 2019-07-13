
        
        SEXP XGDMatrixSetInfo_R(SEXP handle, SEXP field, SEXP array) {
  R_API_BEGIN();
  int len = length(array);
  const char *name = CHAR(asChar(field));
  if (!strcmp('group', name)) {
    std::vector<unsigned> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = static_cast<unsigned>(INTEGER(array)[i]);
    }
    CHECK_CALL(XGDMatrixSetGroup(R_ExternalPtrAddr(handle), BeginPtr(vec), len));
  } else {
    std::vector<float> vec(len);
    #pragma omp parallel for schedule(static)
    for (int i = 0; i < len; ++i) {
      vec[i] = REAL(array)[i];
    }
    CHECK_CALL(XGDMatrixSetFloatInfo(R_ExternalPtrAddr(handle),
                                   CHAR(asChar(field)),
                                   BeginPtr(vec), len));
  }
  R_API_END();
  return R_NilValue;
}
    
    namespace xgboost {
namespace data {
    }
    }
    
      void GetGradient(const HostDeviceVector<bst_float>& preds,
                   const MetaInfo& info,
                   int iter,
                   HostDeviceVector<GradientPair>* out_gpair) override {
    CHECK_EQ(preds.Size(), info.labels_.Size()) << 'label size predict size not match';
    const auto& preds_h = preds.HostVector();
    out_gpair->Resize(preds_h.size());
    std::vector<GradientPair>& gpair = out_gpair->HostVector();
    // quick consistency when group is not available
    std::vector<unsigned> tgptr(2, 0); tgptr[1] = static_cast<unsigned>(info.labels_.Size());
    const std::vector<unsigned> &gptr = info.group_ptr_.size() == 0 ? tgptr : info.group_ptr_;
    CHECK(gptr.size() != 0 && gptr.back() == info.labels_.Size())
        << 'group structure not consistent with #rows';
    }
    
    // c_api
#include '../src/c_api/c_api.cc'
#include '../src/c_api/c_api_error.cc'

    
    /*!
 * \brief Input stream that support additional PeekRead
 *  operation, besides read.
 */
class PeekableInStream : public dmlc::Stream {
 public:
  explicit PeekableInStream(dmlc::Stream* strm)
      : strm_(strm), buffer_ptr_(0) {}
    }
    
      template<typename Derived>
  inline void PredLoopSpecalize(
      DMatrix* p_fmat,
      std::vector<bst_float>* out_preds,
      int num_group,
      unsigned tree_begin,
      unsigned tree_end) {
    const MetaInfo& info = p_fmat->Info();
    const int nthread = omp_get_max_threads();
    CHECK_EQ(num_group, model_.param.num_output_group);
    InitThreadTemp(nthread);
    std::vector<bst_float>& preds = *out_preds;
    CHECK_EQ(model_.param.size_leaf_vector, 0)
        << 'size_leaf_vector is enforced to 0 so far';
    CHECK_EQ(preds.size(), p_fmat->Info().num_row_ * num_group);
    // start collecting the prediction
    auto* self = static_cast<Derived*>(this);
    for (const auto &batch : p_fmat->GetRowBatches()) {
      constexpr int kUnroll = 8;
      const auto nsize = static_cast<bst_omp_uint>(batch.Size());
      const bst_omp_uint rest = nsize % kUnroll;
      #pragma omp parallel for schedule(static)
      for (bst_omp_uint i = 0; i < nsize - rest; i += kUnroll) {
        const int tid = omp_get_thread_num();
        RegTree::FVec& feats = thread_temp_[tid];
        int64_t ridx[kUnroll];
        SparsePage::Inst inst[kUnroll];
        for (int k = 0; k < kUnroll; ++k) {
          ridx[k] = static_cast<int64_t>(batch.base_rowid + i + k);
        }
        for (int k = 0; k < kUnroll; ++k) {
          inst[k] = batch[i + k];
        }
        for (int k = 0; k < kUnroll; ++k) {
          for (int gid = 0; gid < num_group; ++gid) {
            const size_t offset = ridx[k] * num_group + gid;
            preds[offset] +=
                self->PredValue(inst[k], gid, info.GetRoot(ridx[k]),
                                &feats, tree_begin, tree_end);
          }
        }
      }
      for (bst_omp_uint i = nsize - rest; i < nsize; ++i) {
        RegTree::FVec& feats = thread_temp_[0];
        const auto ridx = static_cast<int64_t>(batch.base_rowid + i);
        const SparsePage::Inst inst = batch[i];
        for (int gid = 0; gid < num_group; ++gid) {
          const size_t offset = ridx * num_group + gid;
          preds[offset] +=
              self->PredValue(inst, gid, info.GetRoot(ridx),
                              &feats, tree_begin, tree_end);
        }
      }
    }
  }
    
      /*!
   * \brief Get configuration arguments currently stored by the learner
   * \return Key-value pairs representing configuration arguments
   */
  virtual const std::map<std::string, std::string>& GetConfigurationArguments() const = 0;
    
    Status WriteBatchBase::SingleDelete(ColumnFamilyHandle* column_family,
                                    const SliceParts& key) {
  std::string key_buf;
  Slice key_slice(key, &key_buf);
  return SingleDelete(column_family, key_slice);
}
    
    class WriteCallback {
 public:
  virtual ~WriteCallback() {}
    }
    
    #include <rocksdb/compaction_filter.h>
#include <rocksdb/db.h>
#include <rocksdb/merge_operator.h>
#include <rocksdb/options.h>
    
    
    {  return 0;
}

    
      // Attempt to read a key using the snapshot.  This will fail since
  // the previous write outside this txn conflicts with this read.
  read_options.snapshot = snapshot;
  s = txn->GetForUpdate(read_options, 'abc', &value);
  assert(s.IsBusy());
    
    // Returns the current memory usage of the specified DB instances.
class MemoryUtil {
 public:
  enum UsageType : int {
    // Memory usage of all the mem-tables.
    kMemTableTotal = 0,
    // Memory usage of those un-flushed mem-tables.
    kMemTableUnFlushed = 1,
    // Memory usage of all the table readers.
    kTableReadersTotal = 2,
    // Memory usage by Cache.
    kCacheTotal = 3,
    kNumUsageTypes = 4
  };
    }