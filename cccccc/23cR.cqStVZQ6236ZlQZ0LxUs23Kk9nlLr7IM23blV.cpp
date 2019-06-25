
        
                case IDC_OR:
            result |= rhs;
            break;
    
    class ISerializeCommandVisitor;
    
      JSON tree;
  s = tree.fromString(carve);
  if (!s.ok()) {
    VLOG(1) << 'Failed to parse carve entries: ' << s.what();
    return;
  }
    
      /*
   * If the initial configuration includes a non-0 refresh, start an
   * additional service that sleeps and periodically regenerates the
   * configuration.
   */
  if (!FLAGS_config_check && !started_thread_ && getRefresh() > 0) {
    Dispatcher::addService(refresh_runner_);
    started_thread_ = true;
  }
    
    #include <osquery/utils/json/json.h>
    
    Expected<std::string, DatabaseError> Database::getStringOr(
    const std::string& domain,
    const std::string& key,
    const std::string& default_value) {
  auto result = getString(domain, key);
  if (!result && result.getError() == DatabaseError::KeyNotFound) {
    return default_value;
  }
  return result;
}
    
      Expected<std::vector<std::string>, DatabaseError> getKeys(
      const std::string& domain, const std::string& prefix = '') override;
    
      RocksdbDatabase(std::string name) = delete;
  explicit RocksdbDatabase(std::string name, std::string path)
      : Database(std::move(name)), path_(std::move(path)){};
  ~RocksdbDatabase() override {}
    
    void Plugin::setName(const std::string& name) {
  if (!name_.empty() && name != name_) {
    std::string error = 'Cannot rename plugin ' + name_ + ' to ' + name;
    throw std::runtime_error(error);
  }
    }
    
    namespace osquery {
    }
    
    #include <boost/filesystem.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>