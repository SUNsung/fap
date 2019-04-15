
    {  // Check if the optional_nested_message was actually moved (and not just
  // copied).
  EXPECT_EQ(nested, &message2.optional_nested_message());
  EXPECT_NE(nested, &message1.optional_nested_message());
}
    
    TEST(JavaDocCommentTest, Escaping) {
  EXPECT_EQ('foo /&#42; bar *&#47; baz', EscapeJavadoc('foo /* bar */ baz'));
  EXPECT_EQ('foo /&#42;&#47; baz', EscapeJavadoc('foo /*/ baz'));
  EXPECT_EQ('{&#64;foo}', EscapeJavadoc('{@foo}'));
  EXPECT_EQ('&lt;i&gt;&amp;&lt;/i&gt;', EscapeJavadoc('<i>&</i>'));
  EXPECT_EQ('foo&#92;u1234bar', EscapeJavadoc('foo\\u1234bar'));
  EXPECT_EQ('&#64;deprecated', EscapeJavadoc('@deprecated'));
}
    
    void MapLiteTestUtil::SetMapFields(unittest::TestMapLite* message) {
  MapTestUtilImpl::SetMapFields<unittest::MapEnumLite,
                                unittest::MAP_ENUM_BAR_LITE,
                                unittest::MAP_ENUM_BAZ_LITE>(message);
}
    
      {
    string str;
    StringByteSink sink(&str);
    limit_source.CopyTo(&sink, limit_source.Available());
    EXPECT_EQ('ello ', str);
    EXPECT_EQ(0, limit_source.Available());
    EXPECT_EQ(6, source.Available());
  }
    
    std::string ReadFile(const std::string& name) {
  std::ifstream file(name.c_str());
  GOOGLE_CHECK(file.is_open()) << 'Couldn't find file ''
      << name
      << '', please make sure you are running this command from the benchmarks'
      << ' directory.\n';
  return std::string((std::istreambuf_iterator<char>(file)),
                     std::istreambuf_iterator<char>());
}
    
    #endif  // CAFFE_LAYER_FACTORY_H_

    
      virtual inline const char* type() const { return 'BatchReindex'; }
  virtual inline int ExactNumBottomBlobs() const { return 2; }
  virtual inline int ExactNumTopBlobs() const { return 1; }
    
    namespace caffe {
    }
    
    
    {}  // namespace caffe
    
    #endif /* GRPC_INTERNAL_CPP_EXT_FILTERS_CENSUS_CLIENT_FILTER_H */

    
    #include 'opencensus/stats/stats.h'
#include 'src/cpp/ext/filters/census/grpc_plugin.h'
    
    
    {    buf[kVersionIdOffset] = kVersionId;
    buf[kServerElapsedTimeOffset] = kServerElapsedTimeField;
    absl::little_endian::Store64(&buf[kServerElapsedTimeOffset + kFieldIdSize],
                                 time);
    return kRpcServerStatsSize;
  }
    
    #include <grpc/support/port_platform.h>
    
    #include 'src/cpp/server/load_reporter/get_cpu_stats.h'
    
    // Given a map from type K to a set of value type V, removes the given key and
// the associated set, and returns the set. Returns an empty set if the key is
// not found.
template <typename K, typename V>
std::set<V> UnorderedMapOfSetExtract(std::unordered_map<K, std::set<V>>& map,
                                     const K& key) {
  auto it = map.find(key);
  if (it != map.end()) {
    auto set = std::move(it->second);
    map.erase(it);
    return set;
  }
  return {};
};
    
    bool InternalFilterPolicy::KeyMayMatch(const Slice& key, const Slice& f) const {
  return user_policy_->KeyMayMatch(ExtractUserKey(key), f);
}
    
    TEST(FormatTest, InternalKey_EncodeDecode) {
  const char* keys[] = { '', 'k', 'hello', 'longggggggggggggggggggggg' };
  const uint64_t seq[] = {
    1, 2, 3,
    (1ull << 8) - 1, 1ull << 8, (1ull << 8) + 1,
    (1ull << 16) - 1, 1ull << 16, (1ull << 16) + 1,
    (1ull << 32) - 1, 1ull << 32, (1ull << 32) + 1
  };
  for (int k = 0; k < sizeof(keys) / sizeof(keys[0]); k++) {
    for (int s = 0; s < sizeof(seq) / sizeof(seq[0]); s++) {
      TestKey(keys[k], seq[s], kTypeValue);
      TestKey('hello', 1, kTypeDeletion);
    }
  }
}
    
    // Return the name of the log file with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
std::string LogFileName(const std::string& dbname, uint64_t number);
    
        RecordType type;
    const bool end = (left == fragment_length);
    if (begin && end) {
      type = kFullType;
    } else if (begin) {
      type = kFirstType;
    } else if (end) {
      type = kLastType;
    } else {
      type = kMiddleType;
    }
    
        for (size_t i = 0; i < tables_.size(); i++) {
      // TODO(opt): separate out into multiple levels
      const TableInfo& t = tables_[i];
      edit_.AddFile(0, t.meta.number, t.meta.file_size,
                    t.meta.smallest, t.meta.largest);
    }
    
    static void UnrefEntry(void* arg1, void* arg2) {
  Cache* cache = reinterpret_cast<Cache*>(arg1);
  Cache::Handle* h = reinterpret_cast<Cache::Handle*>(arg2);
  cache->Release(h);
}
    
    struct FileMetaData {
  int refs;
  int allowed_seeks;          // Seeks allowed until compaction
  uint64_t number;
  uint64_t file_size;         // File size in bytes
  InternalKey smallest;       // Smallest internal key served by table
  InternalKey largest;        // Largest internal key served by table
    }
    
    // Compression flag. If true, compression is on. If false, compression
// is off.
static bool FLAGS_compression = true;
    
    namespace CNTK
{
    class ProgressWriter::Impl
    {
    public:
        Impl(size_t updateWriteFrequency, size_t firstUpdatesToWrite)
            : m_frequency(updateWriteFrequency), m_firstN(firstUpdatesToWrite),
            m_totalUpdates(0), m_totalSummaries(0)
        {
            Reset();
        }
    }
    }
    
        Trainer::Trainer(const FunctionPtr& model, const FunctionPtr& lossFunction, const FunctionPtr& evaluationFunction,
                     const std::vector<LearnerPtr>& parameterLearners,
                    const std::vector<ProgressWriterPtr>& progressWriters) 
        : Evaluator(evaluationFunction, progressWriters, false),
          m_model(model),
          m_lossFunction(lossFunction),
          m_parameterLearners(std::make_shared<Learners>(parameterLearners)),
          m_prevMinibatchNumSamples(0),
          m_distributed(false),
          m_aggregatedTrainingLossValue(std::make_shared<Accumulator>()),
          m_aggregatedTrainingEvalCriterionValue(),
          m_prevDistributedTotalNumSamples(0)
    {
        std::vector<Variable> combinedFunctionArgs;
        if (m_model) // model is optional, since it may not be adding any information on top of lossFunction
            combinedFunctionArgs = m_model->Outputs();
    }
    
    class Clock
{
public:
    static long long GetTimeStamp();
    static long long GetTicksPerSecond();
};
    
        virtual bool OutputUsedInComputingInputNodesGradients() const override
    {
        return false;
    }
    virtual bool InputUsedInComputingInputNodesGradients(size_t /*childIndex*/) const override
    {
        return false;
    }
    
    // -----------------------------------------------------------------------
// DiagonalLikeNode
// -----------------------------------------------------------------------
    
    private:
  APCCollection();
  ~APCCollection();
  static APCHandle::Pair WrapArray(APCHandle::Pair, CollectionType);
    
    void Config::SetParsedIni(IniSettingMap &ini, const std::string confStr,
                          const std::string &filename, bool constants_only,
                          bool is_system) {
  // if we are setting constants, we must be setting system settings
  if (constants_only) {
    assertx(is_system);
  }
  auto parsed_ini = IniSetting::FromStringAsMap(confStr, filename);
  for (ArrayIter iter(parsed_ini.toArray()); iter; ++iter) {
    // most likely a string, but just make sure that we are dealing
    // with something that can be converted to a string
    assertx(iter.first().isScalar());
    ini.set(iter.first().toString(), iter.second());
    if (constants_only) {
      IniSetting::FillInConstant(iter.first().toString().toCppString(),
                                 iter.second());
    } else if (is_system) {
      IniSetting::SetSystem(iter.first().toString().toCppString(),
                            iter.second());
    }
  }
}
    
    /**
 * Parts of the language can individually be made stricter, warning or
 * erroring when there's dangerous/unintuive usage; for example,
 * array_fill_keys() with non-int/string keys: Hack.Lang.StrictArrayFillKeys
 */
enum class HackStrictOption {
  OFF, // PHP5 behavior
  WARN,
  ON
};
    
    #endif

    
    template<typename F>
void logPerfWarning(folly::StringPiece event, F fillCols) {
  logPerfWarningImpl(event, 1, kDefaultPerfWarningRate, fillCols);
}
template<typename F>
void logPerfWarning(folly::StringPiece event, int64_t rate, F fillCols) {
  logPerfWarningImpl(event, 1, rate, fillCols);
}
    
    #include 'hphp/util/stack-trace.h'