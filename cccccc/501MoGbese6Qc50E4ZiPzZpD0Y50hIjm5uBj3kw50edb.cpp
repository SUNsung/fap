
        
        
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    REGISTER_CPU_OPERATOR(
    MergeSingleMapFeatureTensors,
    MergeSingleMapFeatureTensorsOp<CPUContext>);
OPERATOR_SCHEMA(MergeSingleMapFeatureTensors)
    .SetDoc(
        'Merge given single-feature tensors with map features into one '
        'multi-feature tensor.' +
        doc)
    .NumInputs([](int n) { return n >= 4 && n % 4 == 0; })
    .NumOutputs(5)
    .Input(0, 'in1_lengths', '.lengths')
    .Input(1, 'in1_keys', '.keys')
    .Input(2, 'in1_values', '.values')
    .Input(3, 'in1_presence', '.presence')
    .Output(0, 'out_lengths', '.lengths')
    .Output(1, 'out_keys', '.keys')
    .Output(2, 'out_values_lengths', '.values.lengths')
    .Output(3, 'out_values_keys', '.values.keys')
    .Output(4, 'out_values_values', '.values.values')
    .Arg('feature_ids', 'feature ids');
    
      FlexibleTopKOp(const OperatorDef& operator_def, Workspace* ws)
      : Operator<Context>(operator_def, ws) {}
    
    /// Root key to retrieve Kafka topic configurations.
const std::string kKafkaTopicParserRootKey('kafka_topics');
    
    REGISTER_INTERNAL(LoggerConfigParserPlugin, 'config_parser', 'logger');
    
    #include <osquery/core.h>
    
    /**
 * @brief Thread-safe watched child process state manager.
 *
 * The Watcher instance is separated from the WatcherRunner thread to allow
 * signals and osquery-introspection to monitor the autoloaded extensions
 * and optional worker stats. A child-process change signal may indicate an
 * autoloaded extension ended. Tables may also report on the historic worker
 * or extension utilizations.
 *
 * Though not critical, it is preferred to remove the extension's broadcasted
 * routes quickly. Locking access to the extensions list between signals and
 * the WatcherRunner thread allows osquery to tearDown registry changes before
 * attempting to respawn an extension process.
 */
class Watcher : private boost::noncopyable {
 public:
  /// Instance accessor
  static Watcher& get() {
    static Watcher instance;
    return instance;
  }
    }
    
    
    {  if (console_reporter->ReportContext(context) &&
      (!file_reporter || file_reporter->ReportContext(context))) {
    flushStreams(console_reporter);
    flushStreams(file_reporter);
    for (const auto& benchmark : benchmarks) {
      std::vector<BenchmarkReporter::Run> reports =
          RunBenchmark(benchmark, &complexity_reports);
      console_reporter->ReportRuns(reports);
      if (file_reporter) file_reporter->ReportRuns(reports);
      flushStreams(console_reporter);
      flushStreams(file_reporter);
    }
  }
  console_reporter->Finalize();
  if (file_reporter) file_reporter->Finalize();
  flushStreams(console_reporter);
  flushStreams(file_reporter);
}
    
    namespace benchmark {
namespace internal {
    }
    }
    
    typedef void(AbortHandlerT)();
    
    std::string FormatKV(std::string const& key, std::string const& value) {
  return StringPrintF('\'%s\': \'%s\'', key.c_str(), value.c_str());
}
    
    class SCOPED_CAPABILITY MutexLock {
  typedef std::unique_lock<std::mutex> MutexLockImp;
    }