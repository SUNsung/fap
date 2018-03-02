
        
        /**
 * @brief An EventPublisher will define a SubscriptionContext for
 * EventSubscriber%s to use.
 *
 * Most EventPublisher%s will require specific information for interacting with
 * an OS to receive events. The SubscriptionContext contains information the
 * EventPublisher will use to register OS API callbacks, create
 * subscriptioning/listening handles, etc.
 *
 * Linux `inotify` should implement a SubscriptionContext that subscribes
 * filesystem events based on a filesystem path. `libpcap` will subscribe on
 * networking protocols at various stacks. Process creation may subscribe on
 * process name, parent pid, etc.
 */
struct SubscriptionContext : private boost::noncopyable {};
    
    #include <osquery/config.h>
#include <osquery/database.h>
    
    namespace errc = boost::system::errc;
namespace fs = boost::filesystem;
namespace pt = boost::property_tree;
    
    ModuleHandle platformModuleOpen(const std::string& path) {
  return ::dlopen(path.c_str(), RTLD_NOW | RTLD_LOCAL);
}
    
    #include <folly/Range.h>
#include <folly/experimental/io/FsUtil.h>
#include <folly/portability/Unistd.h>
    
    class File;
class LogWriter;
    
    bool LogCategoryConfig::operator==(const LogCategoryConfig& other) const {
  return level == other.level &&
      inheritParentLevel == other.inheritParentLevel &&
      handlers == other.handlers;
}
    
      LogConfig() = default;
  explicit LogConfig(
      HandlerConfigMap handlerConfigs,
      CategoryConfigMap catConfigs)
      : handlerConfigs_{std::move(handlerConfigs)},
        categoryConfigs_{std::move(catConfigs)} {}