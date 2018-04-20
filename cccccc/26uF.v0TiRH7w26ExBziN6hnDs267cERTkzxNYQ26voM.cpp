
        
        
    {
    {}  // namespace testing
}  // namespace grpc
    
    std::unique_ptr<ScenarioResult> RunScenario(
    const grpc::testing::ClientConfig& client_config, size_t num_clients,
    const grpc::testing::ServerConfig& server_config, size_t num_servers,
    int warmup_seconds, int benchmark_seconds, int spawn_local_worker_count,
    const grpc::string& qps_server_target_override,
    const grpc::string& credential_type, bool run_inproc);
    
    namespace grpc_node_generator {
    }
    
    // Data pertaining to configuration of the generator with respect to anything
// that may be used internally at Google.
struct GeneratorConfiguration {
  GeneratorConfiguration();
  grpc::string grpc_package_root;
  // TODO(https://github.com/grpc/grpc/issues/8622): Drop this.
  grpc::string beta_package_root;
  // TODO(https://github.com/google/protobuf/issues/888): Drop this.
  grpc::string import_prefix;
};
    
    UsageTimer::Result UsageTimer::Mark() const {
  Result s = Sample();
  Result r;
  r.wall = s.wall - start_.wall;
  r.user = s.user - start_.user;
  r.system = s.system - start_.system;
  r.total_cpu_time = s.total_cpu_time - start_.total_cpu_time;
  r.idle_cpu_time = s.idle_cpu_time - start_.idle_cpu_time;
    }
    
    template <typename C>
struct compare_less_equal : detail::cmp_pred<C, ordering::gt, 1> {
  using detail::cmp_pred<C, ordering::gt, 1>::cmp_pred;
};
    
    // Pass the key as folly::dynamic, without conversion
//
// folly::dynamic, folly::dynamic (no conversion of value, either)
template <typename Fn> EnableForArgTypes<Fn, folly::dynamic, folly::dynamic>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k, v);
}
// folly::dynamic, int64_t
template <typename Fn> EnableForArgTypes<Fn, folly::dynamic, int64_t>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k, v.asInt());
}
// folly::dynamic, bool
template <typename Fn> EnableForArgTypes<Fn, folly::dynamic, bool>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k, v.asBool());
}
// folly::dynamic, double
template <typename Fn> EnableForArgTypes<Fn, folly::dynamic, double>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k, v.asDouble());
}
// folly::dynamic, std::string
template <typename Fn> EnableForArgTypes<Fn, folly::dynamic, std::string>
invokeForKeyValue(Fn fn, const folly::dynamic& k, const folly::dynamic& v) {
  fn(k, v.asString());
}
    
    
    {  std::array<AtomicBlockType, N> data_;
};
    
    using InstructionPointer = const void*;
    
    /* static */ void Config::destroy(Config * node)
{
    delete node;
}
    
     private:
    
    #pragma once
    
    template<typename... ARGS>
inline void logi(const char* tag, const char* msg, ARGS... args) noexcept {
  log(ANDROID_LOG_INFO, tag, msg, args...);
}
    
      static void OnThreadExit(void *obj) {
    if (NULL != obj) {
      delete (T*)obj;
    }
  }