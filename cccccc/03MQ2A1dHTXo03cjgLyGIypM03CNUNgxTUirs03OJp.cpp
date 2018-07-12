
        
        class ObjectManager;
    
    // Tell browser to delete a object.
// function DeallocateObject(id);
v8::Handle<v8::Value> DeallocateObject(int routing_id,
                                       int object_id);
    
    base::string16 MenuDelegate::GetLabelForCommandId(int command_id) const {
  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  return item->label_;
}
    
    namespace nw {
    }
    
    void Menu::UpdateKeys(views::FocusManager *focus_manager){
  if (focus_manager == NULL){
    return ;
  } else {
    focus_manager_ = focus_manager;
    for(auto* item : menu_items_) {
      item->UpdateKeys(focus_manager);
    }
  }
}
    
    namespace nw {
    }
    
     protected:
  ~NwClipboardReadAvailableTypesFunction() override;
    
    
    {  DECLARE_EXTENSION_FUNCTION('nw.Obj.callObjectMethodAsync', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwObjCallObjectMethodAsyncFunction);
};
    
    namespace extensions {
    }
    
    void ComputeJacobians(InputArrayOfArrays objectPoints, InputArrayOfArrays imagePoints,
                      const IntrinsicParams& param,  InputArray omc, InputArray Tc,
                      const int& check_cond, const double& thresh_cond, Mat& JJ2_inv, Mat& ex3);
    
    #endif /* OPENCV_CUDA_WARP_REDUCE_HPP__ */

    
    
    {}
    
            LOGPRINTF(stderr, 'Estimating Statistics --> %ls\n', bnNode->GetName().c_str());
    
    using namespace std;
using namespace Microsoft::MSR::ScriptableObjects;
    
    template <class _T>
class const_array_ref
{
    const _T* data;
    size_t n;
    inline void check_index(size_t i) const
    {
        i;
        assert(i < n);
    }
    inline void check_ptr() const
    {
        n;
        data;
        assert(n == 0 || data != NULL);
    }
    }
    
    using namespace std;
using namespace ScriptableObjects;
    
        auto process = PlatformProcess::launchWorker(
        kProcessTestExecPath.c_str(),
        static_cast<int>(kExpectedWorkerArgsCount),
        &argv[0]);
    for (size_t i = 0; i < argv.size(); i++) {
      delete[] argv[i];
    }
    
    TEST_F(TablesTests, test_constraint) {
  auto constraint = Constraint(EQUALS);
  constraint.expr = 'none';
    }
    
    Status WmiResultItem::GetUnsignedShort(const std::string& name,
                                       unsigned short& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
    }
    
     private:
  void setName(const std::string& name) {
    name_ = name;
  }
    
     public:
  bool shouldFire(const FSEventsSubscriptionContextRef& sc,
                  const FSEventsEventContextRef& ec) const override;
    
    
/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromMat
 * Signature: ([FIIF)J
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromMat
  (JNIEnv *jenv, jclass jcls, jfloatArray jdata, jint jnrow, jint jncol, jfloat jmiss, jlongArray jout) {
  DMatrixHandle result;
  jfloat* data = jenv->GetFloatArrayElements(jdata, 0);
  bst_ulong nrow = (bst_ulong)jnrow;
  bst_ulong ncol = (bst_ulong)jncol;
  jint ret = (jint) XGDMatrixCreateFromMat((float const *)data, nrow, ncol, jmiss, &result);
  setHandle(jenv, jout, result);
  //release
  jenv->ReleaseFloatArrayElements(jdata, data, 0);
  return ret;
}
    
    void DMatrix::SaveToLocalFile(const std::string& fname) {
  data::SimpleCSRSource source;
  source.CopyFrom(this);
  std::unique_ptr<dmlc::Stream> fo(dmlc::Stream::Create(fname.c_str(), 'w'));
  source.SaveBinary(fo.get());
}
    
    
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
    // logistic loss, but predict un-transformed margin
struct LogisticRaw : public LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    predt = common::Sigmoid(predt);
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
    static T PredTransform(T x) { return x; }
  template <typename T>
    static T FirstOrderGradient(T predt, T label) {
    predt = common::Sigmoid(predt);
    return predt - label;
  }
  template <typename T>
    static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    predt = common::Sigmoid(predt);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static const char* DefaultEvalMetric() { return 'auc'; }
};
    
    /*!
 * \brief Registry entry for linear updater.
 */
struct LinearUpdaterReg
    : public dmlc::FunctionRegEntryBase<LinearUpdaterReg,
                                        std::function<LinearUpdater*()> > {};
    
      // Sets the coordinates of the current macro-block for the purpose of
  // CompareBlock() calls.
  virtual void SwitchBlock(int block_x, int block_y,
                           int factor_x, int factor_y) = 0;
    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    namespace guetzli {
    }
    
    enum JPEGReadError {
  JPEG_OK = 0,
  JPEG_SOI_NOT_FOUND,
  JPEG_SOF_NOT_FOUND,
  JPEG_UNEXPECTED_EOF,
  JPEG_MARKER_BYTE_NOT_FOUND,
  JPEG_UNSUPPORTED_MARKER,
  JPEG_WRONG_MARKER_SIZE,
  JPEG_INVALID_PRECISION,
  JPEG_INVALID_WIDTH,
  JPEG_INVALID_HEIGHT,
  JPEG_INVALID_NUMCOMP,
  JPEG_INVALID_SAMP_FACTOR,
  JPEG_INVALID_START_OF_SCAN,
  JPEG_INVALID_END_OF_SCAN,
  JPEG_INVALID_SCAN_BIT_POSITION,
  JPEG_INVALID_COMPS_IN_SCAN,
  JPEG_INVALID_HUFFMAN_INDEX,
  JPEG_INVALID_QUANT_TBL_INDEX,
  JPEG_INVALID_QUANT_VAL,
  JPEG_INVALID_MARKER_LEN,
  JPEG_INVALID_SAMPLING_FACTORS,
  JPEG_INVALID_HUFFMAN_CODE,
  JPEG_INVALID_SYMBOL,
  JPEG_NON_REPRESENTABLE_DC_COEFF,
  JPEG_NON_REPRESENTABLE_AC_COEFF,
  JPEG_INVALID_SCAN,
  JPEG_OVERLAPPING_SCANS,
  JPEG_INVALID_SCAN_ORDER,
  JPEG_EXTRA_ZERO_RUN,
  JPEG_DUPLICATE_DRI,
  JPEG_DUPLICATE_SOF,
  JPEG_WRONG_RESTART_MARKER,
  JPEG_DUPLICATE_COMPONENT_ID,
  JPEG_COMPONENT_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_NOT_FOUND,
  JPEG_HUFFMAN_TABLE_ERROR,
  JPEG_QUANT_TABLE_NOT_FOUND,
  JPEG_EMPTY_DHT,
  JPEG_EMPTY_DQT,
  JPEG_OUT_OF_BAND_COEFF,
  JPEG_EOB_RUN_TOO_LONG,
  JPEG_IMAGE_TOO_LARGE,
};
    
    #endif  // GUETZLI_JPEG_HUFFMAN_DECODE_H_

    
      DBWrapper* db_wrapper = ObjectWrap::Unwrap<DBWrapper>(args.This());
  rocksdb::Slice begin  = *v8::String::Utf8Value(args[0]->ToString());
  rocksdb::Slice end    = *v8::String::Utf8Value(args[1]->ToString());
  Local<Object> options = args[2]->ToObject();
  std::string cf        = *v8::String::Utf8Value(args[3]->ToString());
    
    TEST_F(MockEnvTest, Corrupt) {
  const std::string kGood = 'this is a good string, synced to disk';
  const std::string kCorrupted = 'this part may be corrupted';
  const std::string kFileName = '/dir/f';
  unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(kFileName, &writable_file, soptions_));
  ASSERT_OK(writable_file->Append(kGood));
  ASSERT_TRUE(writable_file->GetFileSize() == kGood.size());
    }
    
    
unsigned int XXH32_intermediateDigest (void* state);
/*
This function does the same as XXH32_digest(), generating a 32-bit hash,
but preserve memory context.
This way, it becomes possible to generate intermediate hashes, and then continue feeding data with XXH32_update().
To free memory context, use XXH32_digest(), or free().
*/
    
      /// Return (list: key)[first..last] (inclusive)
  /// May throw RedisListException
  std::vector<std::string> Range(const std::string& key,
                                 int32_t first, int32_t last);
    
    #include 'rocksjni/statisticsjni.h'
    
    #include <jni.h>
#include <memory>
    
    
    {
    {    start->assign(result_start.get());
  }
  releaseJniEnv(attached_thread);
}
    
    void SyncPoint::Data::Process(const std::string& point, void* cb_arg) {
  if (!enabled_) {
    return;
  }
    }
    
    #include 'port/port.h'
#include 'util/random.h'
    
    
    {  OutputOptions output_options_;
  size_t name_field_width_;
  UserCounters prev_counters_;
  bool printed_header_;
};
    
    
    {
    {      // See how much iterations should be increased by
      // Note: Avoid division by zero with max(seconds, 1ns).
      double multiplier = min_time * 1.4 / std::max(seconds, 1e-9);
      // If our last run was at least 10% of FLAGS_benchmark_min_time then we
      // use the multiplier directly. Otherwise we use at most 10 times
      // expansion.
      // NOTE: When the last run was at least 10% of the min time the max
      // expansion should be 14x.
      bool is_significant = (seconds / min_time) > 0.1;
      multiplier = is_significant ? multiplier : std::min(10.0, multiplier);
      if (multiplier <= 1.0) multiplier = 2.0;
      double next_iters = std::max(multiplier * iters, iters + 1.0);
      if (next_iters > kMaxIterations) {
        next_iters = kMaxIterations;
      }
      VLOG(3) << 'Next iters: ' << next_iters << ', ' << multiplier << '\n';
      iters = static_cast<int>(next_iters + 0.5);
    }
  }
  // Calculate additional statistics
  auto stat_reports = ComputeStats(reports);
  if ((b.complexity != oNone) && b.last_benchmark_instance) {
    auto additional_run_stats = ComputeBigO(*complexity_reports);
    stat_reports.insert(stat_reports.end(), additional_run_stats.begin(),
                        additional_run_stats.end());
    complexity_reports->clear();
  }
    
    // Parses a string for a bool flag, in the form of either
// '--flag=value' or '--flag'.
//
// In the former case, the value is taken as true if it passes IsTruthyValue().
//
// In the latter case, the value is taken as true.
//
// On success, stores the value of the flag in *value, and returns
// true.  On failure, returns false without changing *value.
bool ParseBoolFlag(const char* str, const char* flag, bool* value);
    
      LeastSq best_fit;
    
    // This data structure will contain the result returned by MinimalLeastSq
//   - coef        : Estimated coeficient for the high-order term as
//                   interpolated from data.
//   - rms         : Normalized Root Mean Squared Error.
//   - complexity  : Scalability form (e.g. oN, oNLogN). In case a scalability
//                   form has been provided to MinimalLeastSq this will return
//                   the same value. In case BigO::oAuto has been selected, this
//                   parameter will return the best fitting curve detected.
    
      std::string walltime_value = LocalDateTimeString();
  out << indent << FormatKV('date', walltime_value) << ',\n';
    
    double BenchmarkReporter::Run::GetAdjustedRealTime() const {
  double new_time = real_accumulated_time * GetTimeUnitMultiplier(time_unit);
  if (iterations != 0) new_time /= static_cast<double>(iterations);
  return new_time;
}
    
    namespace benchmark {
#ifdef BENCHMARK_OS_WINDOWS
// Window's Sleep takes milliseconds argument.
void SleepForMilliseconds(int milliseconds) { Sleep(milliseconds); }
void SleepForSeconds(double seconds) {
  SleepForMilliseconds(static_cast<int>(kNumMillisPerSecond * seconds));
}
#else   // BENCHMARK_OS_WINDOWS
void SleepForMicroseconds(int microseconds) {
  struct timespec sleep_time;
  sleep_time.tv_sec = microseconds / kNumMicrosPerSecond;
  sleep_time.tv_nsec = (microseconds % kNumMicrosPerSecond) * kNumNanosPerMicro;
  while (nanosleep(&sleep_time, &sleep_time) != 0 && errno == EINTR)
    ;  // Ignore signals and wait for the full interval to elapse.
}
    }