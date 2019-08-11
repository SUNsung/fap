
        
        
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    namespace caffe2 {
namespace {
    }
    }
    
    class GetIm2ColGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Col2Im',
        '',
        std::vector<string>{GO(0), I(0)},
        std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Im2Col, GetIm2ColGradient);
    
    /* Windows' io manager is going to be fully designed using IO completion
   ports. All of what we're doing here is basically make sure that
   Windows sockets are initialized in and out. */
    
    // must be included after winsock2.h
#include <mswsock.h>
    
    
    {  padded = gpr_leftpad('foo', '0', 5);
  GPR_ASSERT(0 == strcmp('00foo', padded));
  gpr_free(padded);
}
    
    #include <stddef.h>
    
    void StorageImpl::SharedIncrementRefCount(Storage::Handle handle) {
  CHECK_EQ(handle.ctx.dev_type, Context::kCPUShared);
  auto&& device = storage_managers_.at(Context::kCPUShared);
  auto manager = device.Get(0, []() {
      LOG(FATAL) << 'Cannot increment ref count before allocating any shared memory.';
      return nullptr;
    });
#if defined(ANDROID) || defined(__ANDROID__)
  LOG(FATAL) << 'Shared memory not implemented on Android';
#else
  dynamic_cast<storage::CPUSharedStorageManager*>(manager.get())->IncrementRefCount(handle);
#endif  // defined(ANDROID) || defined(__ANDROID__)
}
    
    
    {
    {}  // namespace op
}  // namespace mxnet

    
      if (argmax_h < 0) argmax_h = 0;
  if (argmax_w < 0) argmax_w = 0;
    
      mkldnn::memory::dims src_layer_tz = {T, N, I};
  mkldnn::memory::dims dst_layer_tz = {T, N, H};
  mkldnn::memory::dims weights_layer_tz = {L, 1, I, ngates, H};  //  ldigo
  mkldnn::memory::dims weights_iter_tz = {L, 1, H, ngates, H};  //  ldigo
  mkldnn::memory::dims bias_tz = {L, 1, ngates, H};
  mkldnn::memory::dims src_iter_tz = {L, 1, nstates, N, H};  //  ldsnc
  mkldnn::memory::dims dst_iter_tz = {L, 1, nstates, N, H};  //  ldsnc
  mkldnn::memory::dims weights_layer_r_tz = {1, 1, I, ngates, H};  //  ldigo for reorder
  mkldnn::memory::dims weights_iter_r_tz = {1, 1, H, ngates, H};  //  ldigo for reorder
    
    Additionally, when the parameter `axes` is specified, `idx` will be a
:math:`(d_1, d_2, ..., d_n, m)` array where `m` is the length of `axes`, and the following
equality will hold: :math:`idx[i_1, i_2, ..., i_n, j] = i_{axes[j]}`.
    
    #ifndef PLUGIN_CAFFE_CAFFE_COMMON_H_
#define PLUGIN_CAFFE_CAFFE_COMMON_H_
    
      // 2. Key-value pairs
  ASSERT_TRUE(parser.ParseKeyValuePair('booster = gbtree', &key, &value));
  ASSERT_EQ(key, 'booster');
  ASSERT_EQ(value, 'gbtree');
  ASSERT_TRUE(parser.ParseKeyValuePair('n_gpus = 2', &key, &value));
  ASSERT_EQ(key, 'n_gpus');
  ASSERT_EQ(value, '2');
  ASSERT_TRUE(parser.ParseKeyValuePair('monotone_constraints = (1,0,-1)',
                                       &key, &value));
  ASSERT_EQ(key, 'monotone_constraints');
  ASSERT_EQ(value, '(1,0,-1)');
  // whitespace should not matter
  ASSERT_TRUE(parser.ParseKeyValuePair('  objective=binary:logistic',
                                       &key, &value));
  ASSERT_EQ(key, 'objective');
  ASSERT_EQ(value, 'binary:logistic');
  ASSERT_TRUE(parser.ParseKeyValuePair('tree_method\t=\thist  ', &key, &value));
  ASSERT_EQ(key, 'tree_method');
  ASSERT_EQ(value, 'hist');
    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
    namespace xgboost {
TEST(GPUSet, Basic) {
  GPUSet devices = GPUSet::Empty();
  ASSERT_TRUE(devices.IsEmpty());
    }
    }
    
    
    { private:
  std::vector<T> data_h_;
};
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  if (cur_verbosity_ == LogVerbosity::kIgnore ||
      cur_verbosity_ <= global_verbosity_) {
    dmlc::CustomLogMessage::Log(log_stream_.str());
  }
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    
    {DMLC_REGISTER_DATA_PARSER(uint32_t, real_t, dense_libsvm,
  data::CreateDenseLibSVMParser<uint32_t __DMLC_COMMA real_t>);
}  // namespace dmlc

    
    void CmdInfo::PrintDocComments(StringBuffer &sb, const Array& info) {
  if (info[s_doc].isString()) {
    String doc = info[s_doc].toString();
    int space1 = 0; // best guess
    int space2 = 3; // best guess
    Variant matches1, matches2;
    Variant ret1 = preg_match('#^( *)/\\*#s', doc, &matches1);
    Variant ret2 = preg_match('#\n( *)\\*#s', doc, &matches2);
    if (!same(ret1, false) && !same(ret2, false) &&
        matches1.isArray() && matches2.isArray()) {
      // we have perfect doc comment blocks, so we can re-adjust spaces
      space1 = matches1.toCArrRef()[1].toString().size();
      space2 = matches2.toCArrRef()[1].toString().size();
    }
    String spaces = HHVM_FN(str_repeat)(' ', space2 - space1 - 1);
    sb.printf('%s%s\n', spaces.data(), doc.data());
  }
}
    
    //////  Handles both Attach/Launch commands from the debugger client. //////
struct LaunchAttachCommand : public VSCommand {
  VS_COMMAND_COMMON_IMPL(LaunchAttachCommand, CommandTarget::None, false);
};
    
    template<class V, bool CaseSensitive, class E>
NEVER_INLINE
void FixedStringMap<V,CaseSensitive,E>::add(const StringData* sd, const V& v) {
  assertx(sd->isStatic());
    }
    
    
    {}

    
    using Trace::RingBufferType;
using Trace::ringbufferName;
    
      align(*env.cb, &env.meta, Alignment::SmashMovq, AlignContext::Live);
  auto const imm = reinterpret_cast<uint64_t>(a->frontier());
  emitSmashableMovq(*env.cb, env.meta, (imm << 1) | 1, r64(i.d));
    
      static constexpr uint64_t MaxHashSize = uint64_t(1) << 32;
  static constexpr uint32_t MaxMask = MaxHashSize - 1;
  static constexpr uint32_t MaxSize = MaxMask - MaxMask / LoadScale;
  static constexpr uint32_t MaxMakeSize = 4 * SmallSize;
  static constexpr uint32_t MaxScale = MaxHashSize / LoadScale;
    
    //////////////////////////////////////////////////////////////////////
    
    /*
 * Wrapper to provide a KindOfArray interface to a NameValueTable.  This is
 * used to expose a NameValueTable to php code, particularly for $GLOBALS, but
 * also for some internal generated-bytecode initialization routines (86pinit,
 * 86sinit).
 *
 * Some differences compared to normal php arrays:
 *
 *   - Does not behave as if it has value semantics (i.e., no COW).
 *
 *   - Iteration order is not specified.
 *
 *   - Non-string keys are not really supported.  (Integers are converted to
 *     strings.)
 *
 *   - keys(),size() are O(N) operation. (This is because of kNamedLocalDataType
 *     support in the underlying NameValueTable.)
 *
 *   - Append/prepend operations are not supported.
 *
 *   - Strong iterators 'past the end' are not updated when new elements are
 *     added.  (Since iteration order is unspecified, this semantic would seem
 *     weird anyway.)
 *
 * This holds a pointer to a NameValueTable whose lifetime must be guaranteed
 * to outlast the lifetime of the GlobalsArray.  (The wrapper is
 * refcounted, as required by ArrayData, but the table pointed to is not.)
 */
struct GlobalsArray final : ArrayData,
                            type_scan::MarkCollectable<GlobalsArray> {
  explicit GlobalsArray(NameValueTable* tab);
  ~GlobalsArray() = delete;
    }
    
    /*
 * Class:     org_rocksdb_CompactionOptions
 * Method:    setMaxSubcompactions
 * Signature: (JI)V
 */
void Java_org_rocksdb_CompactionOptions_setMaxSubcompactions(
    JNIEnv*, jclass, jlong jhandle, jint jmax_subcompactions) {
  auto* compact_opts =
      reinterpret_cast<rocksdb::CompactionOptions*>(jhandle);
  compact_opts->max_subcompactions =
      static_cast<uint32_t>(jmax_subcompactions);
}
    
    /*
 * Class:     org_rocksdb_CompressionOptions
 * Method:    strategy
 * Signature: (J)I
 */
jint Java_org_rocksdb_CompressionOptions_strategy(
    JNIEnv*, jobject, jlong jhandle) {
  auto* opt = reinterpret_cast<rocksdb::CompressionOptions*>(jhandle);
  return static_cast<jint>(opt->strategy);
}
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    setSnapshotConsistency
 * Signature: (JZ)V
 */
void Java_org_rocksdb_IngestExternalFileOptions_setSnapshotConsistency(
    JNIEnv*, jobject, jlong jhandle, jboolean jsnapshot_consistency) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  options->snapshot_consistency = static_cast<bool>(jsnapshot_consistency);
}
    
    void build_column_family_descriptor_list(
    JNIEnv* env, jobject jcfds,
    std::vector<rocksdb::ColumnFamilyDescriptor>& cf_descs) {
  jmethodID add_mid = rocksdb::ListJni::getListAddMethodId(env);
  if (add_mid == nullptr) {
    // exception occurred accessing method
    return;
  }
    }
    
      //TODO(AR) could refactor to share code with rocksdb::HashMapJni::fromCppMap(env, tracked_files);
    
    
    {}  // namespace rocksdb

    
    #endif  // JAVA_ROCKSJNI_TABLE_FILTER_JNICALLBACK_H_

    
      // Check for a version restriction.
  version_.clear();
  if (obj.HasMember('version') && obj['version'].IsString()) {
    version_ = obj['version'].GetString();
  }
    
    #include <cstdlib>
    
      // This funcion should completely destroy db, so after next open
  // db should be fresh new
  // Implementation can expect that db is closed before
  // calling destroyDB and should crash/fail in case when db is still open
  virtual ExpectedSuccess<DatabaseError> destroyDB() = 0;
    
    ExpectedSuccess<RocksdbMigrationError> RocksdbMigration::dropDbMigration(
    const std::string& src_path, const std::string& dst_path) {
  auto dst_db = openDatabase(dst_path, true, true);
  if (dst_db) {
    return Success();
  }
  return dst_db.takeError();
}
    
    namespace osquery {
    }
    
    Status LoggerPlugin::call(const PluginRequest& request,
                          PluginResponse& response) {
  std::vector<StatusLogLine> intermediate_logs;
  if (request.count('string') > 0) {
    return this->logString(request.at('string'));
  } else if (request.count('snapshot') > 0) {
    return this->logSnapshot(request.at('snapshot'));
  } else if (request.count('init') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    this->setProcessName(request.at('init'));
    this->init(this->name(), intermediate_logs);
    return Status(0);
  } else if (request.count('status') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    return this->logStatus(intermediate_logs);
  } else if (request.count('event') > 0) {
    return this->logEvent(request.at('event'));
  } else if (request.count('action') && request.at('action') == 'features') {
    size_t features = 0;
    features |= (usesLogStatus()) ? LOGGER_FEATURE_LOGSTATUS : 0;
    features |= (usesLogEvent()) ? LOGGER_FEATURE_LOGEVENT : 0;
    return Status(static_cast<int>(features));
  } else {
    return Status(1, 'Unsupported call to logger plugin');
  }
}
    
      /**
   * @brief See the usesLogStatus method, log a Glog status.
   *
   * @param log A vector of parsed Glog log lines.
   * @return Status non-op indicating success or failure.
   */
  virtual Status logStatus(const std::vector<StatusLogLine>& log) {
    (void)log;
    return Status(1, 'Not enabled');
  }
    
      /// Use the SQL implementation to parse a query string and return details
  /// (name, type) about the columns.
  virtual Status getQueryColumns(const std::string& query,
                                 TableColumns& columns) const = 0;
    
    #include <gtest/gtest.h>
    
    Status Query::addNewResults(QueryDataTyped current_qd,
                            const uint64_t current_epoch,
                            uint64_t& counter,
                            DiffResults& dr,
                            bool calculate_diff) const {
  // The current results are 'fresh' when not calculating a differential.
  bool fresh_results = !calculate_diff;
  bool new_query = false;
  if (!isQueryNameInDatabase()) {
    // This is the first encounter of the scheduled query.
    fresh_results = true;
    LOG(INFO) << 'Storing initial results for new scheduled query: ' << name_;
    saveQuery(name_, query_);
  } else if (getPreviousEpoch() != current_epoch) {
    fresh_results = true;
    LOG(INFO) << 'New Epoch ' << current_epoch << ' for scheduled query '
              << name_;
  } else if (isNewQuery()) {
    // This query is 'new' in that the previous results may be invalid.
    new_query = true;
    LOG(INFO) << 'Scheduled query has been updated: ' + name_;
    saveQuery(name_, query_);
  }
    }
    
      QString getNamespaceSeparator() override;
    
      do {
    int chunk_size = qMin(ZLIB_CHUNK_SIZE, input_data_left);
    }
    
    QHash<int, QByteArray> ValueEditor::ExternalFormattersManager::roleNames()
    const {
  QHash<int, QByteArray> roles;
  roles[name] = 'name';
  roles[version] = 'version';
  roles[description] = 'description';
  roles[cmd] = 'cmd';
  return roles;
}
    
     signals:
  void rowsLoaded(int start, int count);
  void error(QString error);
  void totalRowCountChanged();
  void pageSizeChanged();
  void columnNamesChanged();
  void keyRenamed();
  void keyRemoved();
  void keyTTLChanged();