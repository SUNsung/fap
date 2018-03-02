
        
        
    {// Enable LOG(CONSOLE) for print messages to console.
#define LOG_CONSOLE ::xgboost::ConsoleLogger()
// Enable LOG(TRACKER) for print messages to tracker
#define LOG_TRACKER ::xgboost::TrackerLogger()
}  // namespace xgboost.
#endif  // XGBOOST_LOGGING_H_

    
    namespace rocksdb {
    }
    
    // @lint-ignore TXT4 T25377293 Grandfathered in
#endif  // JAVA_ROCKSJNI_STATISTICSJNI_H_
    
    /**
 * @brief create a new directory handler
 * @details [long description]
 *
 * @param name [description]
 * @param result [description]
 *
 * @return [description]
 */
Status EnvLibrados::NewDirectory(
  const std::string& name,
  std::unique_ptr<Directory>* result)
{
  LOG_DEBUG('[IN]%s\n', name.c_str());
  std::string fid, dir, file;
  /* just want to get dir name */
  split(name + '/tmp', &dir, &file);
  Status s;
    }
    
      using DB::CompactRange;
  virtual Status CompactRange(const CompactRangeOptions& options,
                              ColumnFamilyHandle* column_family,
                              const Slice* begin, const Slice* end) override {
    return db_->CompactRange(options, column_family, begin, end);
  }
    
      // Decide column family (i.e. the time window) to put into
  ColumnFamilyHandle* column_family;
  s = FindColumnFamily(timestamp, &column_family, true /*create_if_missing*/);
  if (!s.ok()) {
    return s;
  }
    
    TEST_F(YogaTest_HadOverflowTests, no_overflow_no_wrap_and_flex_children) {
  const YGNodeRef child0 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child0, 80);
  YGNodeStyleSetHeight(child0, 40);
  YGNodeStyleSetMargin(child0, YGEdgeTop, 10);
  YGNodeStyleSetMargin(child0, YGEdgeBottom, 10);
  YGNodeInsertChild(root, child0, 0);
  const YGNodeRef child1 = YGNodeNewWithConfig(config);
  YGNodeStyleSetWidth(child1, 80);
  YGNodeStyleSetHeight(child1, 40);
  YGNodeStyleSetMargin(child1, YGEdgeBottom, 5);
  YGNodeStyleSetFlexShrink(child1, 1);
  YGNodeInsertChild(root, child1, 1);
    }
    
        YGConfigRef m_config;
    
        Size(void)
    : width(0.0)
    , height(0.0)
    {
    }
    
      /**
   * This runs the closure in a scope with fbjni's classloader. This should be
   * the same classloader as the rest of the application and thus anything
   * running in the closure will have access to the same classes as in a normal
   * java-create thread.
   */
  static void WithClassLoader(std::function<void()>&& runnable);
    
      template <typename ...Args>
  void initialize(Args&&... arguments) {
    FBASSERT(!m_instance);
    m_instance = new T(std::forward<Args>(arguments)...);
  }