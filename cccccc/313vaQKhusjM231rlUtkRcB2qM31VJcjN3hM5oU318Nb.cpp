U_NAMESPACE_BEGIN
    
    ScientificNumberFormatter *ScientificNumberFormatter::createMarkupInstance(
        const Locale &locale,
        const UnicodeString &beginMarkup,
        const UnicodeString &endMarkup,
        UErrorCode &status) {
    return createInstance(
            static_cast<DecimalFormat *>(
                    DecimalFormat::createScientificInstance(locale, status)),
            new MarkupStyle(beginMarkup, endMarkup),
            status);
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
    
    //-------------------------------------------------------------------------------
//
//  ScriptSet - A bit set representing a set of scripts.
//
//              This class was originally used exclusively with script sets appearing
//              as part of the spoof check whole script confusable binary data. Its
//              use has since become more general, but the continued use to wrap
//              prebuilt binary data does constrain the design.
//
//-------------------------------------------------------------------------------
class U_I18N_API ScriptSet: public UMemory {
  public:
    ScriptSet();
    ScriptSet(const ScriptSet &other);
    ~ScriptSet();
    }
    
    #if !UCONFIG_NO_BREAK_ITERATION
    
    #ifndef __SHARED_NUMBERFORMAT_H__
#define __SHARED_NUMBERFORMAT_H__
    
    U_NAMESPACE_END
    
    
    {    /**
     * Formats positiveValue using the given range of digit counts.
     * Always uses standard digits '0' through '9'. Formatted value is
     * left padded with '0' as necessary to achieve minimum digit count.
     * Does not produce any grouping separators or trailing decimal point.
     * Calling format to format a value with a particular digit count range
     * when canFormat indicates that the same value and digit count range
     * cannot be formatted results in undefined behavior.
     *
     * @param positiveValue the value to format
     * @param range the acceptable range of digit counts.
     */
    static UnicodeString &format(
            int32_t positiveValue,
            const IntDigitCountRange &range,
            UnicodeString &appendTo);
    
};
    
    #include <osquery/config/config.h>
#include <osquery/config/parsers/feature_vectors.h>
#include <osquery/registry_factory.h>
    
    
    {/// KafkaTopicsConfigParserPlugin extracts, updates, and parses Kafka topic
/// configurations from Osquery's configurations.
class KafkaTopicsConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override;
  Status update(const std::string& source, const ParserConfig& config) override;
};
} // namespace osquery

    
    
    {  return Status();
}
    
    std::map<std::string, std::string> getTestConfigMap(const std::string& file) {
  std::string content;
  auto const filepath = getTestConfigDirectory() / file;
  auto status = readFile(filepath, content);
  EXPECT_TRUE(status.ok())
      << 'Could not read file: ' << boost::io::quoted(filepath.string())
      << ', because: ' << status.what();
  std::map<std::string, std::string> config;
  config['awesome'] = content;
  return config;
}
    
    Expected<int32_t, DatabaseError> Database::getInt32(const std::string& domain,
                                                    const std::string& key) {
  Expected<std::string, DatabaseError> string_value = getString(domain, key);
  if (string_value) {
    auto value = tryTo<int32_t>(*string_value);
    if (value) {
      return *value;
    } else {
      return createError(DatabaseError::FailToReadData,
                         'Failed to convert string to int',
                         value.takeError());
    }
  } else {
    return string_value.takeError();
  }
}
    
    
    {    // Ensure the database results version is up to date before proceeding
    if (!upgradeDatabase()) {
      LOG(ERROR) << 'Failed to upgrade database';
      auto retcode = (isWorker()) ? EXIT_CATASTROPHIC : EXIT_FAILURE;
      requestShutdown(retcode);
    }
  }