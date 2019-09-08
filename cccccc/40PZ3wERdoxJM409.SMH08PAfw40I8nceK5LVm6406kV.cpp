
        
        /// <summary>
/// Initializes the singleton application object.  This is the first line of authored code
/// executed, and as such is the logical equivalent of main() or WinMain().
/// </summary>
App::App()
{
    InitializeComponent();
    Suspending += ref new SuspendingEventHandler(this, &App::OnSuspending);
}
    
    // Include the resource key ID from above into this vector to load it into memory for the engine to use
inline constexpr std::array<std::wstring_view, 120> g_sids = { SIDS_PLUS_MINUS,
                                                               SIDS_C,
                                                               SIDS_CE,
                                                               SIDS_BACKSPACE,
                                                               SIDS_DECIMAL_SEPARATOR,
                                                               SIDS_EMPTY_STRING,
                                                               SIDS_AND,
                                                               SIDS_OR,
                                                               SIDS_XOR,
                                                               SIDS_LSH,
                                                               SIDS_RSH,
                                                               SIDS_DIVIDE,
                                                               SIDS_MULTIPLY,
                                                               SIDS_PLUS,
                                                               SIDS_MINUS,
                                                               SIDS_MOD,
                                                               SIDS_YROOT,
                                                               SIDS_POW_HAT,
                                                               SIDS_INT,
                                                               SIDS_ROL,
                                                               SIDS_ROR,
                                                               SIDS_NOT,
                                                               SIDS_SIN,
                                                               SIDS_COS,
                                                               SIDS_TAN,
                                                               SIDS_SINH,
                                                               SIDS_COSH,
                                                               SIDS_TANH,
                                                               SIDS_LN,
                                                               SIDS_LOG,
                                                               SIDS_SQRT,
                                                               SIDS_XPOW2,
                                                               SIDS_XPOW3,
                                                               SIDS_NFACTORIAL,
                                                               SIDS_RECIPROCAL,
                                                               SIDS_DMS,
                                                               SIDS_CUBEROOT,
                                                               SIDS_POWTEN,
                                                               SIDS_PERCENT,
                                                               SIDS_SCIENTIFIC_NOTATION,
                                                               SIDS_PI,
                                                               SIDS_EQUAL,
                                                               SIDS_MC,
                                                               SIDS_MR,
                                                               SIDS_MS,
                                                               SIDS_MPLUS,
                                                               SIDS_MMINUS,
                                                               SIDS_EXP,
                                                               SIDS_OPEN_PAREN,
                                                               SIDS_CLOSE_PAREN,
                                                               SIDS_0,
                                                               SIDS_1,
                                                               SIDS_2,
                                                               SIDS_3,
                                                               SIDS_4,
                                                               SIDS_5,
                                                               SIDS_6,
                                                               SIDS_7,
                                                               SIDS_8,
                                                               SIDS_9,
                                                               SIDS_A,
                                                               SIDS_B,
                                                               SIDS_C,
                                                               SIDS_D,
                                                               SIDS_E,
                                                               SIDS_F,
                                                               SIDS_FRAC,
                                                               SIDS_SIND,
                                                               SIDS_COSD,
                                                               SIDS_TAND,
                                                               SIDS_ASIND,
                                                               SIDS_ACOSD,
                                                               SIDS_ATAND,
                                                               SIDS_SINR,
                                                               SIDS_COSR,
                                                               SIDS_TANR,
                                                               SIDS_ASINR,
                                                               SIDS_ACOSR,
                                                               SIDS_ATANR,
                                                               SIDS_SING,
                                                               SIDS_COSG,
                                                               SIDS_TANG,
                                                               SIDS_ASING,
                                                               SIDS_ACOSG,
                                                               SIDS_ATANG,
                                                               SIDS_ASINH,
                                                               SIDS_ACOSH,
                                                               SIDS_ATANH,
                                                               SIDS_POWE,
                                                               SIDS_POWTEN2,
                                                               SIDS_SQRT2,
                                                               SIDS_SQR,
                                                               SIDS_CUBE,
                                                               SIDS_CUBERT,
                                                               SIDS_FACT,
                                                               SIDS_RECIPROC,
                                                               SIDS_DEGREES,
                                                               SIDS_NEGATE,
                                                               SIDS_RSH,
                                                               SIDS_DIVIDEBYZERO,
                                                               SIDS_DOMAIN,
                                                               SIDS_UNDEFINED,
                                                               SIDS_POS_INFINITY,
                                                               SIDS_NEG_INFINITY,
                                                               SIDS_ABORTED,
                                                               SIDS_NOMEM,
                                                               SIDS_TOOMANY,
                                                               SIDS_OVERFLOW,
                                                               SIDS_NORESULT,
                                                               SIDS_INSUFFICIENT_DATA,
                                                               SIDS_ERR_UNK_CH,
                                                               SIDS_ERR_UNK_FN,
                                                               SIDS_ERR_UNEX_NUM,
                                                               SIDS_ERR_UNEX_CH,
                                                               SIDS_ERR_UNEX_SZ,
                                                               SIDS_ERR_MISMATCH_CLOSE,
                                                               SIDS_ERR_UNEX_END,
                                                               SIDS_ERR_SG_INV_ERROR,
                                                               SIDS_ERR_INPUT_OVERFLOW,
                                                               SIDS_ERR_OUTPUT_OVERFLOW };

    
    void CCalcEngine::InitChopNumbers()
{
    // these rat numbers are set only once and then never change regardless of
    // base or precision changes
    assert(m_chopNumbers.size() >= 4);
    m_chopNumbers[0] = Rational{ rat_qword };
    m_chopNumbers[1] = Rational{ rat_dword };
    m_chopNumbers[2] = Rational{ rat_word };
    m_chopNumbers[3] = Rational{ rat_byte };
    }
    
    /*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterEvalOneIter
 * Signature: (JI[J[Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterEvalOneIter
  (JNIEnv *jenv, jclass jcls, jlong jhandle, jint jiter, jlongArray jdmats, jobjectArray jevnames, jobjectArray jout) {
  BoosterHandle handle = (BoosterHandle) jhandle;
  std::vector<DMatrixHandle> dmats;
  std::vector<std::string> evnames;
  std::vector<const char*> evchars;
    }
    
    // common regressions
// linear regression
struct LinearSquareLoss {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return true; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    return 1.0f;
  }
  template <typename T>
  static T PredTransform(T x) { return x; }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) { return T(1.0f); }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() { return ''; }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
      void Write(const SparsePage& page, dmlc::Stream* fo) override {
    const auto& offset_vec = page.offset.HostVector();
    const auto& data_vec = page.data.HostVector();
    CHECK(page.offset.Size() != 0 && offset_vec[0] == 0);
    CHECK_EQ(offset_vec.back(), page.data.Size());
    fo->Write(offset_vec);
    if (page.data.Size() != 0) {
      fo->Write(dmlc::BeginPtr(data_vec), page.data.Size() * sizeof(Entry));
    }
  }
    
    #include <xgboost/data.h>
#include <dmlc/io.h>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <memory>
#include <functional>
    
    
    {
    {// use R's PRNG to replacd
CustomGlobalRandomEngine::result_type
CustomGlobalRandomEngine::operator()() {
  return static_cast<result_type>(
      std::floor(unif_rand() * CustomGlobalRandomEngine::max()));
}
}  // namespace common
}  // namespace xgboost

    
    
    {template<typename IndexType, typename DType = real_t>
Parser<IndexType> *
CreateDenseLibSVMParser(const std::string& path,
                        const std::map<std::string, std::string>& args,
                        unsigned part_index,
                        unsigned num_parts) {
  CHECK_NE(args.count('num_col'), 0) << 'expect num_col in dense_libsvm';
  return new DensifyParser<IndexType>(
            Parser<IndexType>::Create(path.c_str(), part_index, num_parts, 'libsvm'),
           uint32_t(atoi(args.at('num_col').c_str())));
}
}  // namespace data
    
    namespace xgboost {
namespace common {
/*!
 * \brief experimental wsummary
 * \tparam DType type of data content
 * \tparam RType type of rank
 */
template<typename DType, typename RType>
struct WQSummary {
  /*! \brief an entry in the sketch summary */
  struct Entry {
    /*! \brief minimum rank */
    RType rmin;
    /*! \brief maximum rank */
    RType rmax;
    /*! \brief maximum weight */
    RType wmin;
    /*! \brief the value of data */
    DType value;
    // constructor
    XGBOOST_DEVICE Entry() {}  // NOLINT
    // constructor
    XGBOOST_DEVICE Entry(RType rmin, RType rmax, RType wmin, DType value)
        : rmin(rmin), rmax(rmax), wmin(wmin), value(value) {}
    /*!
     * \brief debug function,  check Valid
     * \param eps the tolerate level for violating the relation
     */
    inline void CheckValid(RType eps = 0) const {
      CHECK(rmin >= 0 && rmax >= 0 && wmin >= 0) << 'nonneg constraint';
      CHECK(rmax- rmin - wmin > -eps) <<  'relation constraint: min/max';
    }
    /*! \return rmin estimation for v strictly bigger than value */
    XGBOOST_DEVICE inline RType RMinNext() const {
      return rmin + wmin;
    }
    /*! \return rmax estimation for v strictly smaller than value */
    XGBOOST_DEVICE inline RType RMaxPrev() const {
      return rmax - wmin;
    }
  };
  /*! \brief input data queue before entering the summary */
  struct Queue {
    // entry in the queue
    struct QEntry {
      // value of the instance
      DType value;
      // weight of instance
      RType weight;
      // default constructor
      QEntry() = default;
      // constructor
      QEntry(DType value, RType weight)
          : value(value), weight(weight) {}
      // comparator on value
      inline bool operator<(const QEntry &b) const {
        return value < b.value;
      }
    };
    // the input queue
    std::vector<QEntry> queue;
    // end of the queue
    size_t qtail;
    // push data to the queue
    inline void Push(DType x, RType w) {
      if (qtail == 0 || queue[qtail - 1].value != x) {
        queue[qtail++] = QEntry(x, w);
      } else {
        queue[qtail - 1].weight += w;
      }
    }
    inline void MakeSummary(WQSummary *out) {
      std::sort(queue.begin(), queue.begin() + qtail);
      out->size = 0;
      // start update sketch
      RType wsum = 0;
      // construct data with unique weights
      for (size_t i = 0; i < qtail;) {
        size_t j = i + 1;
        RType w = queue[i].weight;
        while (j < qtail && queue[j].value == queue[i].value) {
          w += queue[j].weight; ++j;
        }
        out->data[out->size++] = Entry(wsum, wsum + w, w, queue[i].value);
        wsum += w; i = j;
      }
    }
  };
  /*! \brief data field */
  Entry *data;
  /*! \brief number of elements in the summary */
  size_t size;
  // constructor
  WQSummary(Entry *data, size_t size)
      : data(data), size(size) {}
  /*!
   * \return the maximum error of the Summary
   */
  inline RType MaxError() const {
    RType res = data[0].rmax - data[0].rmin - data[0].wmin;
    for (size_t i = 1; i < size; ++i) {
      res = std::max(data[i].RMaxPrev() - data[i - 1].RMinNext(), res);
      res = std::max(data[i].rmax - data[i].rmin - data[i].wmin, res);
    }
    return res;
  }
  /*!
   * \brief query qvalue, start from istart
   * \param qvalue the value we query for
   * \param istart starting position
   */
  inline Entry Query(DType qvalue, size_t &istart) const { // NOLINT(*)
    while (istart < size && qvalue > data[istart].value) {
      ++istart;
    }
    if (istart == size) {
      RType rmax = data[size - 1].rmax;
      return Entry(rmax, rmax, 0.0f, qvalue);
    }
    if (qvalue == data[istart].value) {
      return data[istart];
    } else {
      if (istart == 0) {
        return Entry(0.0f, 0.0f, 0.0f, qvalue);
      } else {
        return Entry(data[istart - 1].RMinNext(),
                     data[istart].RMaxPrev(),
                     0.0f, qvalue);
      }
    }
  }
  /*! \return maximum rank in the summary */
  inline RType MaxRank() const {
    return data[size - 1].rmax;
  }
  /*!
   * \brief copy content from src
   * \param src source sketch
   */
  inline void CopyFrom(const WQSummary &src) {
    size = src.size;
    std::memcpy(data, src.data, sizeof(Entry) * size);
  }
  inline void MakeFromSorted(const Entry* entries, size_t n) {
    size = 0;
    for (size_t i = 0; i < n;) {
      size_t j = i + 1;
      // ignore repeated values
      for (; j < n && entries[j].value == entries[i].value; ++j) {}
      data[size++] = Entry(entries[i].rmin, entries[i].rmax, entries[i].wmin,
                           entries[i].value);
      i = j;
    }
  }
  /*!
   * \brief debug function, validate whether the summary
   *  run consistency check to check if it is a valid summary
   * \param eps the tolerate error level, used when RType is floating point and
   *        some inconsistency could occur due to rounding error
   */
  inline void CheckValid(RType eps) const {
    for (size_t i = 0; i < size; ++i) {
      data[i].CheckValid(eps);
      if (i != 0) {
        CHECK(data[i].rmin >= data[i - 1].rmin + data[i - 1].wmin) << 'rmin range constraint';
        CHECK(data[i].rmax >= data[i - 1].rmax + data[i].wmin) << 'rmax range constraint';
      }
    }
  }
  /*!
   * \brief set current summary to be pruned summary of src
   *        assume data field is already allocated to be at least maxsize
   * \param src source summary
   * \param maxsize size we can afford in the pruned sketch
   */
    }
    }
    }
    
      /**
   * @brief Update the internal config data.
   *
   * @param config A map of domain or namespace to config data.
   * @return If the config changes were applied.
   */
  Status update(const std::map<std::string, std::string>& config);
    
    #include <cstdlib>
    
    #pragma once
    
    
    {  std::vector<rocksdb::ColumnFamilyDescriptor> descriptors;
  for (const auto& column : column_families) {
    descriptors.push_back(
        rocksdb::ColumnFamilyDescriptor(column, handle.options));
  }
  std::vector<rocksdb::ColumnFamilyHandle*> column_family_handles;
  rocksdb::DB* db = nullptr;
  auto status = rocksdb::DB::Open(
      handle.options, path, descriptors, &column_family_handles, &db);
  if (status.IsInvalidArgument()) {
    return createError(RocksdbMigrationError::InvalidArgument)
           << status.ToString();
  }
  if (!status.ok()) {
    return createError(RocksdbMigrationError::FailToOpen) << status.ToString();
  }
  handle.db_handle = std::unique_ptr<rocksdb::DB>(db);
  for (const auto& ptr : column_family_handles) {
    handle.handles[ptr->GetName()] =
        std::unique_ptr<rocksdb::ColumnFamilyHandle>(ptr);
  }
  return std::move(handle);
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
 * @brief Superclass for the pluggable logging facilities.
 *
 * In order to make the logging of osquery results and inline debug, warning,
 * error status easy to integrate into your environment, we take advantage of
 * a plugin interface which allows you to integrate osquery with your internal
 * large-scale logging infrastructure.
 *
 * You may use flume, splunk, syslog, scribe, etc. In order to use your
 * specific upstream logging systems, one simply needs to create a custom
 * subclass of LoggerPlugin. That subclass should at least implement the
 * LoggerPlugin::logString method.
 *
 * Consider the following example:
 *
 * @code{.cpp}
 *   class TestLoggerPlugin : public LoggerPlugin {
 *    public:
 *     osquery::Status logString(const std::string& s) {
 *       int i = 0;
 *       internal::logStringToFlume(s, i);
 *       std::string message;
 *       if (i == 0) {
 *         message = 'OK';
 *       } else {
 *         message = 'Failed';
 *       }
 *       return osquery::Status(i, message);
 *     }
 *  };
 *
 *  REGISTER(TestLoggerPlugin, 'logger', 'test');
 * @endcode
 */
class LoggerPlugin : public Plugin {
 public:
  /// The LoggerPlugin PluginRequest action router.
  Status call(const PluginRequest& request, PluginResponse& response) override;
    }
    
    
    {  name_ = name;
}
    
    
    {  EXPECT_TRUE(db->putString(kPersistentSettings, 'test_key_string', 'string'));
  auto string_value = db->getString(kPersistentSettings, 'test_key_string');
  EXPECT_TRUE(string_value);
  EXPECT_EQ(string_value.take(), 'string');
}
    
    Status deserializeDiffResults(const rj::Value& doc, DiffResults& dr) {
  if (!doc.IsObject()) {
    return Status(1);
  }
    }