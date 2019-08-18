
        
        /// no discovery queries, no platform restriction, fake version string
JSON getPackWithFakeVersion() {
  auto doc = getExamplePacksConfig();
  return JSON::newFromValue(doc.doc()['packs']['fake_version_pack']);
}
    
    
    {} // namespace osquery

    
    Error<DatabaseError> InMemoryDatabase::domainNotFoundError(
    const std::string& domain) const {
  return createError(DatabaseError::DomainNotFound)
         << 'Can't find domain: ' << domain;
}
    
      // This method bypass type validation and will silently update value
  // even if type was changed (e.g int->string)
  ExpectedSuccess<DatabaseError> putStringsUnsafe(
      const std::string& domain,
      const std::vector<std::pair<std::string, std::string>>& data) override;
    
        auto migration_result = iter->second(src_path, dst_path);
    if (migration_result) {
      int new_version = migration_result.take();
      if (new_version <= version) {
        return createError(RocksdbMigrationError::MigrationLogicError)
               << 'New version(' << version << ') is lower or same as old('
               << new_version << ')';
      }
      version = new_version;
    } else {
      return migration_result.takeError();
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
    
    void Plugin::setName(const std::string& name) {
  if (!name_.empty() && name != name_) {
    std::string error = 'Cannot rename plugin ' + name_ + ' to ' + name;
    throw std::runtime_error(error);
  }
    }
    
    
    {} // namespace osquery

    
    Status deserializeDiffResults(const rj::Value& doc, DiffResults& dr) {
  if (!doc.IsObject()) {
    return Status(1);
  }
    }