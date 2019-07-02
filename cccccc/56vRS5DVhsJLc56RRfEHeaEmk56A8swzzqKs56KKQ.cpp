
        
        SECP256K1_INLINE static void secp256k1_fe_sqr_inner(uint64_t *r, const uint64_t *a) {
/**
 * Registers: rdx:rax = multiplication accumulator
 *            r9:r8   = c
 *            rcx:rbx = d
 *            r10-r14 = a0-a4
 *            r15     = M (0xfffffffffffff)
 *            rdi     = r
 *            rsi     = a / t?
 */
  uint64_t tmp1, tmp2, tmp3;
__asm__ __volatile__(
    'movq 0(%%rsi),%%r10\n'
    'movq 8(%%rsi),%%r11\n'
    'movq 16(%%rsi),%%r12\n'
    'movq 24(%%rsi),%%r13\n'
    'movq 32(%%rsi),%%r14\n'
    'movq $0xfffffffffffff,%%r15\n'
    }
    
    double UniValue::get_real() const
{
    if (typ != VNUM)
        throw std::runtime_error('JSON value is not a number as expected');
    double retval;
    if (!ParseDouble(getValStr(), &retval))
        throw std::runtime_error('JSON double out of range');
    return retval;
}
    
    public:
    static const size_t OUTPUT_SIZE = 20;
    
    
    {
    {        : '+r'(s), '+r'(chunk), '+r'(blocks), '=r'(a), '=r'(b), '=r'(c), '=r'(d), /* e = chunk */ '=r'(f), '=r'(g), '=r'(h), '=r'(y0), '=r'(y1), '=r'(y2), '=r'(tbl), '+m'(inp_end), '+m'(inp), '+m'(xfer)
        : 'm'(K256), 'm'(FLIP_MASK), 'm'(SHUF_00BA), 'm'(SHUF_DC00)
        : 'cc', 'memory', 'xmm0', 'xmm1', 'xmm2', 'xmm3', 'xmm4', 'xmm5', 'xmm6', 'xmm7', 'xmm8', 'xmm9', 'xmm10', 'xmm11', 'xmm12'
   );
}
}
    
    namespace c10d {
namespace test {
    }
    }
    
    
    {} // namespace
    
    const std::string doc = R'DOC(
  Single-feature representation:
  - scalar features:
    <feature full name> T
  - list features:
    <feature full name>.lengths int32
    <feature full name>.values T
  - map features:
    <feature full name>.lengths int32
    <feature full name>.keys K
    <feature full name>.values V
    
    </details>
    
    class GetCol2ImGradient : public GradientMakerBase {
  using GradientMakerBase::GradientMakerBase;
  vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'Im2Col', '', std::vector<string>{GO(0)}, std::vector<string>{GI(0)});
  }
};
REGISTER_GRADIENT(Col2Im, GetCol2ImGradient);
    
    #include 'Rational.h'
    
    // Gets the number in memory for UI to keep it persisted and set it again to a different instance
// of CCalcEngine. Otherwise it will get destructed with the CalcEngine
unique_ptr<Rational> CCalcEngine::PersistedMemObject()
{
    return move(m_memoryValue);
}
    
    NarratorAnnouncement ^ CalculatorAnnouncement::GetHistoryClearedAnnouncement(String ^ announcement)
{
    return ref new NarratorAnnouncement(
        announcement, CalculatorActivityIds::HistoryCleared, AutomationNotificationKind::ItemRemoved, AutomationNotificationProcessing::MostRecent);
}
    
    using namespace CalculatorApp::Common::Automation;
using namespace Platform;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Automation;
using namespace Windows::UI::Xaml::Automation::Peers;
    
    
    {
    {    private:
        INarratorAnnouncementHost ^ m_announcementHost;
    };
}

    
    /**
 * @brief Entry point for docker_volume_labels table.
 */
QueryData genVolumeLabels(QueryContext& context) {
  return getLabels(context,
                   'volume', // Docker object type
                   'name', // Look for 'name' column in context
                   'Name', // Volume primary key is 'Name'
                   '/volumes', // All volumes URL
                   'Volumes', // Volume array is under 'Volumes' child node
                   true, // Supports 'filters' in query string
                   false); // Does not supports 'all' in query string
}
    
    #include <osquery/utils/system/system.h>
#include <osquery/utils/system/time.h>
    
    
    {/**
 * @brief Start a file carve of the given paths
 *
 * @return A status returning if the carves were started successfully
 */
Status carvePaths(const std::set<std::string>& paths);
} // namespace osquery

    
      enum class RestoreConfigError { DatabaseError = 1 };
  /**
   * @brief restoreConfigBackup retrieve backed up config
   * @return config persisted int the database
   */
  static Expected<std::map<std::string, std::string>,
                  Config::RestoreConfigError>
  restoreConfigBackup();
    
    
    {  int total_packs = 0;
  // Expect the config to have recorded a pack for the inline and non-inline.
  get().packs([&total_packs](const Pack& pack) { total_packs++; });
  EXPECT_EQ(total_packs, 2);
  rf.registry('config')->remove('test');
}
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::putRawBytes(
    const std::string& domain,
    const std::string& key,
    const std::string& value) {
  auto handle = getHandle(domain);
  if (handle) {
    std::shared_ptr<Handle> handle_ptr = handle.take();
    return putRawBytesInternal(handle_ptr.get(), key, value);
  }
  return handle.takeError();
}
    
    
    {} // namespace osquery

    
    std::map<std::string, FlagInfo> Flag::flags() {
  std::vector<flags::CommandLineFlagInfo> info;
  flags::GetAllFlags(&info);
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
   * @brief Optionally handle each published event via the logger.
   *
   * It is possible to skip the database representation of event subscribers
   * and instead forward each added event to the active logger plugin.
   */
  virtual Status logEvent(const std::string& /*s*/) {
    return Status(1, 'Not enabled');
  }
    
    PluginResponse tableRowsToPluginResponse(const TableRows& rows) {
  PluginResponse result;
  for (const auto& row : rows) {
    result.push_back(static_cast<Row>(*row));
  }
  return result;
}
    
      /// Use the SQL implementation to parse a query string and return details
  /// (name, type) about the columns.
  virtual Status getQueryColumns(const std::string& query,
                                 TableColumns& columns) const = 0;