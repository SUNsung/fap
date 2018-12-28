
        
        ChannelCredentials::~ChannelCredentials() {}
    
    AuthPropertyIterator AuthPropertyIterator::operator++(int) {
  AuthPropertyIterator tmp(*this);
  operator++();
  return tmp;
}
    
    
    {}  // namespace grpc

    
    const ViewDescriptor& ServerReceivedBytesPerRpcHour() {
  const static ViewDescriptor descriptor =
      HourDescriptor()
          .set_name('grpc.io/server/received_bytes_per_rpc/hour')
          .set_measure(kRpcServerReceivedBytesPerRpcMeasureName)
          .set_aggregation(BytesDistributionAggregation())
          .add_column(ServerMethodTagKey());
  return descriptor;
}
    
    
    {  const protobuf::DescriptorPool* descriptor_pool_;
  const std::vector<string>* services_;
};
    
    void ProtoServerReflectionPlugin::ChangeArguments(const grpc::string& name,
                                                  void* value) {}
    
    #include 'src/cpp/server/load_reporter/get_cpu_stats.h'
    
    void ConstraintBullet::destroy_internal_constraint() {
	space->remove_constraint(this);
}
    
    /**
 * @brief Config plugin registry.
 *
 * This creates an osquery registry for 'config' which may implement
 * ConfigPlugin. A ConfigPlugin's call API should make use of a genConfig
 * after reading JSON data in the plugin implementation.
 */
CREATE_REGISTRY(ConfigPlugin, 'config');
    
      /**
   * @brief Reset the configuration state, reserved for testing only.
   */
  void reset();
    
    /// Remove these ATC tables from the registry and database
Status ATCConfigParserPlugin::removeATCTables(
    const std::set<std::string>& detach_tables) {
  auto registry_table = RegistryFactory::get().registry('table');
  std::set<std::string> failed_tables;
  for (const auto& table : detach_tables) {
    if (registry_table->exists(table)) {
      std::string value;
      if (getDatabaseValue(
              kPersistentSettings, kDatabaseKeyPrefix + table, value)
              .ok()) {
        registry_table->remove(table);
        PluginResponse resp;
        Registry::call(
            'sql', 'sql', {{'action', 'detatch'}, {'table', table}}, resp);
        LOG(INFO) << 'Removed ATC table: ' << table;
      } else {
        failed_tables.insert(table);
      }
    }
    deleteDatabaseValue(kPersistentSettings, kDatabaseKeyPrefix + table);
  }
  if (failed_tables.empty()) {
    return Status();
  }
  return Status(
      1, 'Attempted to remove non ATC tables: ' + join(failed_tables, ', '));
}
    
    Status LoggerConfigParserPlugin::update(const std::string& /* source */,
                                        const ParserConfig& config) {
  rj::Document& doc = data_.doc();
    }
    
        bool is_custom = name.find('custom_') == 0;
    if (!is_custom && Flag::getType(name).empty()) {
      LOG(WARNING) << 'Cannot set unknown or invalid flag: ' << name;
      continue;
    }
    
    TEST_F(OptionsConfigParserPluginTests, test_get_option) {
  Config c;
  auto s = c.update(getTestConfigMap('test_parse_items.conf'));
  EXPECT_TRUE(s.ok());
  EXPECT_EQ(s.toString(), 'OK');
    }