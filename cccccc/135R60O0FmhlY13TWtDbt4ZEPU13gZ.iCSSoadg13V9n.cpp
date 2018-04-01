
        
        /// See FLAG_ALIAS, EXTENSION_FLAG_ALIAS%es are only available to extensions.
#define EXTENSION_FLAG_ALIAS(a, n) OSQUERY_FLAG_ALIAS(std::string, a, n, 0, 1)

    
    /**
 * @brief Create an osquery extension 'module', if an expression is true.
 *
 * This is a helper testing wrapper around CREATE_MODULE and DECLARE_MODULE.
 * It allows unit and integration tests to generate global construction code
 * that depends on data/variables available during global construction.
 *
 * And example use includes checking if a process environment variable is
 * defined. If defined the module is declared.
 */
#define CREATE_MODULE_IF(expr, name, version, min_sdk_version)                 \
  extern 'C' EXPORT_FUNCTION void initModule(void);                            \
  struct osquery_InternalStructCreateModule {                                  \
    osquery_InternalStructCreateModule(void) {                                 \
      if ((expr)) {                                                            \
        Registry::get().declareModule(                                         \
            name, version, min_sdk_version, OSQUERY_SDK_VERSION);              \
      }                                                                        \
    }                                                                          \
  };                                                                           \
  static osquery_InternalStructCreateModule osquery_internal_module_instance_;
    
      /**
   * @brief Daemon tools may want to continually spawn worker processes
   * and monitor their utilization.
   *
   * A daemon may call initWorkerWatcher to begin watching child daemon
   * processes until it-itself is unscheduled. The basic guarantee is that only
   * workers will return from the function.
   *
   * The worker-watcher will implement performance bounds on CPU utilization
   * and memory, as well as check for zombie/defunct workers and respawn them
   * if appropriate. The appropriateness is determined from heuristics around
   * how the worker exited. Various exit states and velocities may cause the
   * watcher to resign.
   *
   * @param name The name of the worker process.
   */
  void initWorkerWatcher(const std::string& name = '') const;
    
      std::stringstream result;
  CFDataGetBytes(cf_data, range, (UInt8*)buffer);
  for (CFIndex i = 0; i < range.length; ++i) {
    uint8_t byte = buffer[i];
    if (isprint(byte)) {
      result << byte;
    } else if (buffer[i] == 0) {
      result << ' ';
    } else {
      result << '%' << std::setfill('0') << std::setw(2) << std::hex
             << (int)byte;
    }
  }
    
    static inline bool ownerFromResult(const Row& row, long& uid, long& gid) {
  if (!safeStrtol(row.at('uid'), 10, uid) ||
      !safeStrtol(row.at('gid'), 10, gid)) {
    return false;
  }
  return true;
}
    
      double double2[2] = {1.0, 2.0};
  EXPECT_EQ(info.GetRoot(1), 0)
    << 'When no root_index is given, was expecting default value 0';
  info.SetInfo('root_index', double2, xgboost::kDouble, 2);
  EXPECT_EQ(info.GetRoot(1), 2.0f);
    
    TEST(Param, VectorIOStream) {
  std::vector<int> vals = {3, 2, 1};
  std::stringstream ss;
  std::vector<int> vals_in;
  
  ss << vals;
  EXPECT_EQ(ss.str(), '(3,2,1)');
    }
    
      // Copy constructor if different value type - use getters and setters to
  // perform conversion
  template <typename T2>
  XGBOOST_DEVICE bst_gpair_internal(const bst_gpair_internal<T2> &g) {
    SetGrad(g.GetGrad());
    SetHess(g.GetHess());
  }
    
    struct EvalGammaDeviance : public EvalEWiseBase<EvalGammaDeviance> {
  const char *Name() const override {
    return 'gamma-deviance';
  }
  inline bst_float EvalRow(bst_float label, bst_float pred) const {
    bst_float epsilon = 1.0e-9;
    bst_float tmp = label / (pred + epsilon);
    return tmp - std::log(tmp) - 1;
  }
  inline static bst_float GetFinal(bst_float esum, bst_float wsum) {
    return 2 * esum;
  }
};