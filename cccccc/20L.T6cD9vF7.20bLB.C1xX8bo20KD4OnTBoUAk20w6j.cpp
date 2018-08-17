
        
        He, Kaiming, et al. 'Mask R-CNN.' ICCV, 2017
)code' ADD_FILELINE)
.set_num_inputs(2)
.set_num_outputs(1)
.set_attr<nnvm::FListInputNames>('FListInputNames',
    [](const NodeAttrs& attrs) {
  return std::vector<std::string>{'data', 'rois'};
})
.set_attr<nnvm::FListOutputNames>('FListOutputNames',
    [](const NodeAttrs& attrs) {
  return std::vector<std::string>{'output'};
})
.set_attr_parser(ParamParser<ROIAlignParam>)
.set_attr<nnvm::FInferShape>('FInferShape', [](const nnvm::NodeAttrs& attrs,
      std::vector<TShape> *in_shape, std::vector<TShape> *out_shape){
  using namespace mshadow;
  const ROIAlignParam param = nnvm::get<ROIAlignParam>(attrs.parsed);
  CHECK_EQ(in_shape->size(), 2) << 'Input:[data, rois]';
  // data: [batch_size, c, h, w]
  TShape dshape = in_shape->at(roialign::kData);
  CHECK_EQ(dshape.ndim(), 4) << 'data should be a 4D tensor';
  // bbox: [num_rois, 5]
  TShape bshape = in_shape->at(roialign::kBox);
  CHECK_EQ(bshape.ndim(), 2) << 'bbox should be a 2D tensor of shape [batch, 5]';
  CHECK_EQ(bshape[1], 5) << 'bbox should be a 2D tensor of shape [batch, 5]';
  // out: [num_rois, c, pooled_h, pooled_w]
  out_shape->clear();
  out_shape->push_back(
       Shape4(bshape[0], dshape[1], param.pooled_size[0], param.pooled_size[1]));
  return true;
})
.set_attr<nnvm::FInferType>('FInferType', [](const nnvm::NodeAttrs& attrs,
      std::vector<int> *in_type, std::vector<int> *out_type) {
  CHECK_EQ(in_type->size(), 2);
  int dtype = (*in_type)[0];
  CHECK_EQ(dtype, (*in_type)[1]);
  CHECK_NE(dtype, -1) << 'Input must have specified type';
    }
    
    // Transfer only gradient to FGradient function
struct ElemwiseGradUseNone {
  const char *op_name;
  std::vector<nnvm::NodeEntry> operator()(const nnvm::NodePtr& n,
                                          const std::vector<nnvm::NodeEntry>& ograds) const {
    return MakeNonlossGradNode(op_name, n, ograds, {}, n->attrs.dict);
  }
};
    
    class LogUniformGenerator {
private:
  const int range_max_;
  const double log_range_max_;
  std::default_random_engine generator_;
  std::uniform_real_distribution<double> distribution_;
public:
  LogUniformGenerator(const int);
  std::unordered_set<long> draw(const size_t, int*);
};
    
    const SparsePage& SparsePageSource::Value() const {
  return *page_;
}
    
    // data
#include '../src/data/data.cc'
#include '../src/data/simple_csr_source.cc'
#include '../src/data/simple_dmatrix.cc'
#include '../src/data/sparse_page_raw_format.cc'
    
    TEST(Metric, RMSE) {
  xgboost::Metric * metric = xgboost::Metric::Create('rmse');
  ASSERT_STREQ(metric->Name(), 'rmse');
  EXPECT_NEAR(GetMetricEval(metric, {0, 1}, {0, 1}), 0, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric,
                            {0.1f, 0.9f, 0.1f, 0.9f},
                            {  0,   0,   1,   1}),
              0.6403f, 0.001f);
}
    
    namespace xgboost {
    }
    
    
    {  for (size_t i = 0; i < nindptr; ++i) {
    col_ptr_[i] = static_cast<size_t>(p_indptr[i]);
  }
  #pragma omp parallel for schedule(static)
  for (int64_t i = 0; i < static_cast<int64_t>(ndata); ++i) {
    indices_[i] = static_cast<unsigned>(p_indices[i]);
    data_[i] = static_cast<float>(p_data[i]);
  }
  DMatrixHandle handle;
  CHECK_CALL(XGDMatrixCreateFromCSCEx(BeginPtr(col_ptr_), BeginPtr(indices_),
                                      BeginPtr(data_), nindptr, ndata,
                                      nrow, &handle));
  ret = PROTECT(R_MakeExternalPtr(handle, R_NilValue, R_NilValue));
  R_RegisterCFinalizerEx(ret, _DMatrixFinalizer, TRUE);
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
          cbw.Write(buffer.data(), input.begin(), input.end());
    
    // Reads the Start of Scan (SOS) marker segment and fills in *scan_info with the
// parsed data.
bool ProcessSOS(const uint8_t* data, const size_t len, size_t* pos,
                JPEGData* jpg) {
  const size_t start_pos = *pos;
  VERIFY_LEN(3);
  size_t marker_len = ReadUint16(data, pos);
  int comps_in_scan = ReadUint8(data, pos);
  VERIFY_INPUT(comps_in_scan, 1, static_cast<int>(jpg->components.size()),
               COMPS_IN_SCAN);
    }
    
      // Returns true if the argument of the last Compare() call (or the baseline
  // image, if Compare() was not called yet) meets the image acceptance
  // criteria. The target_mul modifies the acceptance criteria used in this call
  // the following way:
  //    = 1.0 : the original acceptance criteria is used,
  //    < 1.0 : a more strict acceptance criteria is used,
  //    > 1.0 : a less strict acceptance criteria is used.
  virtual bool DistanceOK(double target_mul) const = 0;
    
    double Normal(double x, double sigma) {
  static const double kInvSqrt2Pi = 0.3989422804014327;
  return std::exp(-x * x / (2 * sigma * sigma)) * kInvSqrt2Pi / sigma;
}
    
    
    {}  // namespace guetzli

    
    #endif  // GUETZLI_DCT_DOUBLE_H_

    
    namespace guetzli {
    }
    
    
    {}  // namespace guetzli
    
    #include 'guetzli/gamma_correct.h'
    
      tmp0 = in[3 * stride];
  tmp1 = kIDCTMatrix[ 3] * tmp0;
  tmp2 = kIDCTMatrix[11] * tmp0;
  tmp3 = kIDCTMatrix[19] * tmp0;
  tmp4 = kIDCTMatrix[27] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    #include 'guetzli/jpeg_data.h'
    
      private:
    explicit DBWrapper();
    ~DBWrapper();
    
    namespace rocksdb {
    }
    
    #include 'rocksjni/statisticsjni.h'
    
    class CompactionFilterFactoryJniCallback : public JniCallback, public CompactionFilterFactory {
 public:
    CompactionFilterFactoryJniCallback(
        JNIEnv* env, jobject jcompaction_filter_factory);
    virtual std::unique_ptr<CompactionFilter> CreateCompactionFilter(
      const CompactionFilter::Context& context);
    virtual const char* Name() const;
    }
    
    /**
 * This class acts as a bridge between C++
 * and Java. The methods in this class will be
 * called back from the RocksDB storage engine (C++)
 * we then callback to the appropriate Java method
 * this enables Comparators to be implemented in Java.
 *
 * The design of this Comparator caches the Java Slice
 * objects that are used in the compare and findShortestSeparator
 * method callbacks. Instead of creating new objects for each callback
 * of those functions, by reuse via setHandle we are a lot
 * faster; Unfortunately this means that we have to
 * introduce independent locking in regions of each of those methods
 * via the mutexs mtx_compare and mtx_findShortestSeparator respectively
 */
class BaseComparatorJniCallback : public JniCallback, public Comparator {
 public:
    BaseComparatorJniCallback(
      JNIEnv* env, jobject jComparator,
      const ComparatorJniCallbackOptions* copt);
    virtual const char* Name() const;
    virtual int Compare(const Slice& a, const Slice& b) const;
    virtual void FindShortestSeparator(
      std::string* start, const Slice& limit) const;
    virtual void FindShortSuccessor(std::string* key) const;
    }
    
      std::mutex              mutex_;
  std::condition_variable cv_;
  // sync points that have been passed through
  std::unordered_set<std::string> cleared_points_;
  std::atomic<bool> enabled_;
  int num_callbacks_running_ = 0;
    
    void StatisticsImpl::histogramData(uint32_t histogramType,
                                   HistogramData* const data) const {
  MutexLock lock(&aggregate_lock_);
  getHistogramImplLocked(histogramType)->Data(data);
}
    
    Status CompactedDBImpl::Get(const ReadOptions& options, ColumnFamilyHandle*,
                            const Slice& key, PinnableSlice* value) {
  GetContext get_context(user_comparator_, nullptr, nullptr, nullptr,
                         GetContext::kNotFound, key, value, nullptr, nullptr,
                         nullptr, nullptr);
  LookupKey lkey(key, kMaxSequenceNumber);
  files_.files[FindFile(key)].fd.table_reader->Get(options, lkey.internal_key(),
                                                   &get_context, nullptr);
  if (get_context.State() == GetContext::kFound) {
    return Status::OK();
  }
  return Status::NotFound();
}