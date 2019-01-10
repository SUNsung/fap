
        
        REGISTER_CPU_OPERATOR(
    MergeSingleMapFeatureTensorsGradient,
    MergeSingleListOrMapFeatureTensorsGradientOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleMapFeatureTensorsGradient)
    .SetDoc(
        'Explode given multi-feature tensors with map features into '
        'multiple single-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 3 && n % 2 == 1; })
    .NumOutputs([](int n) { return n >= 1; })
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_presence', '.presence')
    .Input(2, 'out_values_values_grad', '.values.values_grad')
    .Output(0, 'in1_values_grad', '.values_grad');
REGISTER_GRADIENT(
    MergeSingleMapFeatureTensors,
    GetMergeSingleMapFeatureTensorsGradient);
    
    namespace caffe2 {
namespace {
    }
    }
    
    OPERATOR_SCHEMA(GivenTensorStringFill)
    .NumInputs(0, 1)
    .NumOutputs(1)
    .AllowInplace({{0, 0}})
    .Arg(
        'values',
        'The value for the elements of the output tensor.',
        true /* required */)
    .Arg(
        'shape',
        'The shape of the output tensor.'
        'Cannot set the shape argument and pass in an input at the same time.')
    .Arg(
        'extra_shape',
        'The additional dimensions appended at the end of the shape indicated'
        'by the input blob.'
        'Cannot set the extra_shape argument when there is no input blob.')
    .Arg(
        'input_as_shape',
        '1D tensor containing the desired output shape. First input must be in CPU context.')
    .TensorInferenceFunction(
        FillerTensorInference<TensorProto_DataType_STRING>);
    
    template <>
void GluOp<float, CPUContext>::ComputeGlu(
    const int M,
    const int split_dim,
    const int N,
    const float* Xdata,
    float* Ydata) {
  const int xStride = 2 * split_dim * N;
  const int yStride = split_dim * N;
  for (int i = 0; i < M; ++i) {
    const int idx = i * xStride;
    const int idy = i * yStride;
    for (int j = 0; j < split_dim; ++j) {
      const int jN = j * N;
      const int jdx1 = idx + jN;
      const int jdx2 = idx + (j + split_dim) * N;
      const int jdy = idy + jN;
      for (int k = 0; k < N; ++k) {
        const float x1 = Xdata[jdx1 + k];
        const float x2 = Xdata[jdx2 + k];
        Ydata[jdy + k] = x1 * sigmoid(x2);
      }
    }
  }
}
    
    
    {		*a_ppaucEncodingBits = image.GetEncodingBits();
		*a_puiEncodingBitsBytes = image.GetEncodingBitsBytes();
		*a_puiExtendedWidth = image.GetExtendedWidth();
		*a_puiExtendedHeight = image.GetExtendedHeight();
		*a_piEncodingTime_ms = image.GetEncodingTimeMs();
	}
    
    		Data data;
    
    		m_boolMostLikelyFlip = (fTopGrayErrorSum + fBottomGrayErrorSum) < (fLeftGrayErrorSum + fRightGrayErrorSum);
    
      /* The next level is to group blue strings into style-specific sets. */
    
    /* For input in Q24 domain */
opus_int32 silk_LPC_inverse_pred_gain_Q24(          /* O    Returns inverse prediction gain in energy domain, Q30       */
    const opus_int32            *A_Q24,             /* I    Prediction coefficients [order]                             */
    const opus_int              order               /* I    Prediction order                                            */
);
    
    /*!
 * \brief The result holder of storage type of each NodeEntry in the graph.
 * \note Stored under graph.attrs['storage_type'], provided by Pass 'InferStorageType'
 *
 * \code
 *  Graph g = ApplyPass(src_graph, 'InferStorageType');
 *  const StorageVector& stypes = g.GetAttr<StorageTypeVector>('storage_type');
 *  // get storage type by entry id
 *  int entry_type = stypes[g.indexed_graph().entry_id(my_entry)];
 * \endcode
 *
 * \sa FInferStorageType
 */
using StorageTypeVector = std::vector<int>;
    
    
    {  /*! \brief MNISTCass iter params */
  CaffeDataParam param_;
  /*! \brief Shape scalar values */
  index_t batch_size_, channels_, width_, height_;
  /*! \brief Caffe data layer */
  boost::shared_ptr<caffe::Layer<Dtype> >  caffe_data_layer_;
  /*! \brief batch data blob */
  mxnet::TBlob batch_data_;
  /*! \brief batch label blob */
  mxnet::TBlob batch_label_;
  /*! \brief Output blob data for this iteration */
  TBlobBatch out_;
  /*! \brief Bottom and top connection-point blob data */
  std::vector<::caffe::Blob<Dtype>*> bottom_, top_;
  /*! \brief Cleanup these blobs on exit */
  std::list<std::unique_ptr<::caffe::Blob<Dtype>>> cleanup_blobs_;
  /*! \brief type flag of the tensor blob */
  const int type_flag_;
  /*! \brief Blobs done so far */
  std::atomic<size_t>  loc_;
};  // class CaffeDataIter
    
      mx_uint dims[3] = {h, w, ndsrc.shape()[2]};
  NDArray ndout(TShape(dims, dims+3), Context::CPU(), true, mshadow::kUint8);
    
    #include <dmlc/registry.h>
    
        outimg_.Resize(data.shape_);
    float contrast =
        rand_uniform(rnd_) * param_.max_random_contrast * 2 - param_.max_random_contrast + 1;
    float illumination =
        rand_uniform(rnd_) * param_.max_random_illumination * 2 - param_.max_random_illumination;
    bool flip = (param_.rand_mirror && coin_flip(rnd_)) || param_.mirror;
    
        /**
     * Destructor.
     */
    virtual ~RemoveTransliterator();
    
    void
FixedSortKeyByteSink::AppendBeyondCapacity(const char *bytes, int32_t /*n*/, int32_t length) {
    // buffer_ != NULL && bytes != NULL && n > 0 && appended_ > capacity_
    // Fill the buffer completely.
    int32_t available = capacity_ - length;
    if (available > 0) {
        uprv_memcpy(buffer_ + length, bytes, available);
    }
}
    
    void ScientificNumberFormatter::getPreExponent(
        const DecimalFormatSymbols &dfs, UnicodeString &preExponent) {
    preExponent.append(dfs.getConstSymbol(
            DecimalFormatSymbols::kExponentMultiplicationSymbol));
    preExponent.append(dfs.getConstSymbol(DecimalFormatSymbols::kOneDigitSymbol));
    preExponent.append(dfs.getConstSymbol(DecimalFormatSymbols::kZeroDigitSymbol));
}
    
    int32_t ScriptSet::nextSetBit(int32_t fromIndex) const {
    // TODO: Wants a better implementation.
    if (fromIndex < 0) {
        return -1;
    }
    UErrorCode status = U_ZERO_ERROR;
    for (int32_t scriptIndex = fromIndex; scriptIndex < (int32_t)sizeof(bits)*8; scriptIndex++) {
        if (test((UScriptCode)scriptIndex, status)) {
            return scriptIndex;
        }
    }
    return -1;
}
    
    U_NAMESPACE_BEGIN
    
    // public methods ----------------------------------------------------
    
    #ifndef __SHARED_BREAKITERATOR_H__
#define __SHARED_BREAKITERATOR_H__
    
    /**
 * Return true if this zone has the same rules and offset as another zone.
 * @param other the TimeZone object to be compared with
 * @return true if the given zone has the same rules and offset as this one
 */
UBool 
SimpleTimeZone::hasSameRules(const TimeZone& other) const
{
    if (this == &other) return TRUE;
    if (typeid(*this) != typeid(other)) return FALSE;
    SimpleTimeZone *that = (SimpleTimeZone*)&other;
    return rawOffset     == that->rawOffset &&
        useDaylight     == that->useDaylight &&
        (!useDaylight
         // Only check rules if using DST
         || (dstSavings     == that->dstSavings &&
             startMode      == that->startMode &&
             startMonth     == that->startMonth &&
             startDay       == that->startDay &&
             startDayOfWeek == that->startDayOfWeek &&
             startTime      == that->startTime &&
             startTimeMode  == that->startTimeMode &&
             endMode        == that->endMode &&
             endMonth       == that->endMonth &&
             endDay         == that->endDay &&
             endDayOfWeek   == that->endDayOfWeek &&
             endTime        == that->endTime &&
             endTimeMode    == that->endTimeMode &&
             startYear      == that->startYear));
}
    
    int32_t 
SmallIntFormatter::estimateDigitCount(
        int32_t positiveValue, const IntDigitCountRange &range) {
    if (positiveValue >= gMaxFastInt) {
        return range.getMax();
    }
    return range.pin(gDigitCount[positiveValue]);
}
    
    SimpleDateFormatStaticSets *gStaticSets = NULL;
UInitOnce gSimpleDateFormatStaticSetsInitOnce = U_INITONCE_INITIALIZER;
    
    #include 'unicode/uniset.h'
#include 'unicode/utf16.h'
#include 'strrepl.h'
#include 'rbt_data.h'
#include 'util.h'
    
    
    {  s = setDatabaseValue(kCarveDbDomain, kCarverDBPrefix + guid, out);
  if (!s.ok()) {
    VLOG(1) << 'Failed to update status of carve in database ' << guid;
  }
}
    
     protected:
  void SetUp() override {
    Initializer::platformSetup();
    registryAndPluginInit();
    }
    
    std::vector<std::string> FeatureVectorsConfigParserPlugin::keys() const {
  return {kFeatureVectorsRootKey};
}
    
    namespace osquery {
    }
    
    #include <osquery/config/config.h>
    
    Status PrometheusMetricsConfigParserPlugin::update(const std::string& source,
                                                   const ParserConfig& config) {
  auto prometheus_targets = config.find(kPrometheusParserRootKey);
  if (prometheus_targets != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(prometheus_targets->second.doc(), obj);
    data_.add(kPrometheusParserRootKey, obj);
  }
    }
    
    #include <osquery/config/config.h>
#include <osquery/config/tests/test_utils.h>
#include <osquery/database.h>
#include <osquery/filesystem/filesystem.h>
#include <osquery/registry.h>
#include <osquery/registry_interface.h>
#include <osquery/system.h>
    
    class TLSConfigPlugin;
    
      const std::string kConfigTestNonBlacklistQuery{'pack_unrestricted_pack_process_heartbeat'};
    
        /** 
    @brief Initializes an action with duration.
    @param duration Specify the duration of the FlipX3D action. It's a value in seconds.
    @return If the initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration);
    
        if (element)
    {
        if (element->actions != nullptr)
        {
            auto limit = element->actions->num;
            for (int i = 0; i < limit; ++i)
            {
                Action *action = static_cast<Action*>(element->actions->arr[i]);
    }
    }
    }
    
        /**
     * Use k to loop. Because _tilesCount is unsigned int,
     * and i is used later for int.
     */
    for (unsigned int k = 0; k < _tilesCount; ++k)
    {
        _tilesOrder[k] = k;
    }
    
    NS_CC_BEGIN
    
    void AtlasNode::setBlendFunc(const BlendFunc &blendFunc)
{
    _blendFunc = blendFunc;
}
    
    static unsigned short quadIndices9[]={
    0+4*0,1+4*0,2+4*0, 3+4*0,2+4*0,1+4*0,
    0+4*1,1+4*1,2+4*1, 3+4*1,2+4*1,1+4*1,
    0+4*2,1+4*2,2+4*2, 3+4*2,2+4*2,1+4*2,
    0+4*3,1+4*3,2+4*3, 3+4*3,2+4*3,1+4*3,
    0+4*4,1+4*4,2+4*4, 3+4*4,2+4*4,1+4*4,
    0+4*5,1+4*5,2+4*5, 3+4*5,2+4*5,1+4*5,
    0+4*6,1+4*6,2+4*6, 3+4*6,2+4*6,1+4*6,
    0+4*7,1+4*7,2+4*7, 3+4*7,2+4*7,1+4*7,
    0+4*8,1+4*8,2+4*8, 3+4*8,2+4*8,1+4*8,
};
    
    #include 'check.h'
#include 'colorprint.h'
#include 'commandlineflags.h'
#include 'complexity.h'
#include 'counter.h'
#include 'internal_macros.h'
#include 'log.h'
#include 'mutex.h'
#include 're.h'
#include 'statistics.h'
#include 'string_util.h'
#include 'timers.h'
    
    
    {
    {}  // end namespace internal
}  // end namespace benchmark
    
      LeastSq result;
  result.complexity = oLambda;
    
    void JSONReporter::PrintRunData(Run const& run) {
  std::string indent(6, ' ');
  std::ostream& out = GetOutputStream();
  out << indent << FormatKV('name', run.benchmark_name) << ',\n';
  if (run.error_occurred) {
    out << indent << FormatKV('error_occurred', run.error_occurred) << ',\n';
    out << indent << FormatKV('error_message', run.error_message) << ',\n';
  }
  if (!run.report_big_o && !run.report_rms) {
    out << indent << FormatKV('iterations', run.iterations) << ',\n';
    out << indent
        << FormatKV('real_time', run.GetAdjustedRealTime())
        << ',\n';
    out << indent
        << FormatKV('cpu_time', run.GetAdjustedCPUTime());
    out << ',\n'
        << indent << FormatKV('time_unit', GetTimeUnitString(run.time_unit));
  } else if (run.report_big_o) {
    out << indent
        << FormatKV('cpu_coefficient', run.GetAdjustedCPUTime())
        << ',\n';
    out << indent
        << FormatKV('real_coefficient', run.GetAdjustedRealTime())
        << ',\n';
    out << indent << FormatKV('big_o', GetBigOString(run.complexity)) << ',\n';
    out << indent << FormatKV('time_unit', GetTimeUnitString(run.time_unit));
  } else if (run.report_rms) {
    out << indent
        << FormatKV('rms', run.GetAdjustedCPUTime());
  }
  if (run.bytes_per_second > 0.0) {
    out << ',\n'
        << indent
        << FormatKV('bytes_per_second', run.bytes_per_second);
  }
  if (run.items_per_second > 0.0) {
    out << ',\n'
        << indent
        << FormatKV('items_per_second', run.items_per_second);
  }
  for(auto &c : run.counters) {
    out << ',\n'
        << indent
        << FormatKV(c.first, c.second);
  }
  if (!run.report_label.empty()) {
    out << ',\n' << indent << FormatKV('label', run.report_label);
  }
  out << '\n';
}
    
          // regerror returns the number of bytes necessary to null terminate
      // the string, so we move that when assigning to error.
      CHECK_NE(needed, 0);
      error->assign(errbuf, needed - 1);
    
    namespace benchmark {
    }
    
    
    {} // namespace
    
    
    {void Executor::keepAliveRelease() {
  LOG(FATAL) << __func__ << '() should not be called for folly::Executor types '
             << 'which do not override keepAliveAcquire()';
}
} // namespace folly

    
    
    {} // namespace std

    
      ~VirtualExecutor() override {
    joinKeepAlive();
  }
    
    enum class CompressionCounterKey {
  BYTES_BEFORE_COMPRESSION = 0,
  BYTES_AFTER_COMPRESSION = 1,
  BYTES_BEFORE_DECOMPRESSION = 2,
  BYTES_AFTER_DECOMPRESSION = 3,
  COMPRESSIONS = 4,
  DECOMPRESSIONS = 5,
  COMPRESSION_MILLISECONDS = 6,
  DECOMPRESSION_MILLISECONDS = 7,
};
    
        oldptr = takeOwnedBase(success);
    if (!owners_eq(oldptr, CountedDetail::get_counted_base(expected))) {
      expected = get_shared_ptr(oldptr, false);
      release_external(newptr);
      return false;
    }
    expectedptr = oldptr; // Need oldptr to release if failed
    if (ptr_.compare_exchange_weak(expectedptr, newptr, success, failure)) {
      if (oldptr.get()) {
        release_external(oldptr, -1);
      }
      return true;
    } else {
      if (oldptr.get()) {
        expected = get_shared_ptr(oldptr, false);
      } else {
        expected = SharedPtr(nullptr);
      }
      release_external(newptr);
      return false;
    }
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_weak(
        expected, desired, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_weak(
      SharedPtr& expected,
      SharedPtr&& desired,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    return compare_exchange_weak(expected, desired, success, failure);
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order mo = std::memory_order_seq_cst) noexcept {
    return compare_exchange_strong(
        expected, n, mo, detail::default_failure_memory_order(mo));
  }
  bool compare_exchange_strong(
      SharedPtr& expected,
      const SharedPtr& n,
      std::memory_order success,
      std::memory_order failure) /* noexcept */ {
    auto local_expected = expected;
    do {
      if (compare_exchange_weak(expected, n, success, failure)) {
        return true;
      }
    } while (local_expected == expected);
    
      ~AtomicCoreCachedSharedPtr() {
    auto slots = slots_.load(std::memory_order_acquire);
    // Delete of AtomicCoreCachedSharedPtr must be synchronized, no
    // need for stlots->retire().
    if (slots) {
      delete slots;
    }
  }
    
      template <typename T>
  static counted_ptr<T, Atom> get_shared_ptr_from_counted_base(
      counted_base* base,
      bool inc = true) {
    auto res = counted_ptr<T, Atom>(counted_shared_tag(), (T*)(base));
    if (!inc) {
      release_shared<T>(base, 1);
    }
    return res;
  }