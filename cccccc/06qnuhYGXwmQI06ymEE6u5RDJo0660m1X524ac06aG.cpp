
        
        Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #include 'tensorflow/core/framework/op.h'
#include 'tensorflow/core/framework/op_kernel.h'
    
    
    {}  // namespace tensorflow

    
    #include 'tensorflow/c/c_api.h'
#include 'tensorflow/c/tf_status_helper.h'
#include 'tensorflow/core/framework/tensor.h'
#include 'tensorflow/python/lib/core/safe_ptr.h'
    
    #endif  // TENSORFLOW_PYTHON_LIB_CORE_NDARRAY_TENSOR_BRIDGE_H_

    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    namespace stream_executor {
    }
    
    port::StatusOr<StreamExecutor*> ExecutorCache::Get(
    const StreamExecutorConfig& config) {
  Entry* entry = nullptr;
  {
    tf_shared_lock lock{mutex_};
    auto it = cache_.find(config.ordinal);
    if (it != cache_.end()) {
      entry = &it->second;
    } else {
      return port::Status(port::error::NOT_FOUND,
                          port::Printf('No executors registered for ordinal %d',
                                       config.ordinal));
    }
  }
  tf_shared_lock lock{entry->configurations_mutex};
  if (entry->configurations.empty()) {
    return port::Status(
        port::error::NOT_FOUND,
        port::Printf('No executors registered for ordinal %d', config.ordinal));
  }
  for (const auto& iter : entry->configurations) {
    if (iter.first.plugin_config == config.plugin_config &&
        iter.first.device_options == config.device_options) {
      VLOG(2) << 'hit in cache for device ordinal ' << config.ordinal;
      return iter.second.get();
    }
  }
  return port::Status(port::error::NOT_FOUND,
                      'No executor found with a matching config.');
}
    
    
    {    // Vector of cached {config, executor} pairs.
    std::vector<
        std::pair<StreamExecutorConfig, std::unique_ptr<StreamExecutor>>>
        configurations GUARDED_BY(configurations_mutex);
  };
    
    // Generate param traits log methods.
#include 'ipc/param_traits_log_macros.h'
namespace IPC {
#include 'content/nw/src/common/common_message_generator.h'
}  // namespace IPC

    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    void Menu::Call(const std::string& method,
                const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  if (method == 'Append') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    Append(object_manager()->GetApiObject<MenuItem>(object_id));
  } else if (method == 'Insert') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Insert(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Remove') {
    int object_id = 0;
    arguments.GetInteger(0, &object_id);
    int pos = 0;
    arguments.GetInteger(1, &pos);
    Remove(object_manager()->GetApiObject<MenuItem>(object_id), pos);
  } else if (method == 'Popup') {
    int x = 0;
    arguments.GetInteger(0, &x);
    int y = 0;
    arguments.GetInteger(1, &y);
    content::WebContents* web_contents = content::WebContents::FromRenderFrameHost(rvh);
    DCHECK(web_contents);
    zoom::ZoomController* zoom_controller = zoom::ZoomController::FromWebContents(web_contents);
    }
    }
    
    
    {  *icon = item->icon_;
  return true;
}
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12>
internal::ValueArray12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
    T12> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12) {
  return internal::ValueArray12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12);
}
    
    # define TYPED_TEST_P(CaseName, TestName) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  template <typename gtest_TypeParam_> \
  class TestName : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  static bool gtest_##TestName##_defined_ GTEST_ATTRIBUTE_UNUSED_ = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).AddTestName(\
          __FILE__, __LINE__, #CaseName, #TestName); \
  } \
  template <typename gtest_TypeParam_> \
  void GTEST_CASE_NAMESPACE_(CaseName)::TestName<gtest_TypeParam_>::TestBody()
    
      // An enumeration of the three reasons that a test might be aborted.
  enum AbortReason {
    TEST_ENCOUNTERED_RETURN_STATEMENT,
    TEST_THREW_EXCEPTION,
    TEST_DID_NOT_DIE
  };
    
    // This overload is used when k >= 1.
template <typename T, typename U, size_t N>
inline bool ArrayEq(const T(&lhs)[N], const U(&rhs)[N]) {
  return internal::ArrayEq(lhs, N, rhs);
}
    
      bool operator==(T* p) const { return value_ == p; }
  bool operator!=(T* p) const { return value_ != p; }
  template <typename U>
  bool operator==(linked_ptr<U> const& ptr) const {
    return value_ == ptr.get();
  }
  template <typename U>
  bool operator!=(linked_ptr<U> const& ptr) const {
    return value_ != ptr.get();
  }
    
     private:
  // No implementation - assignment is unsupported.
  void operator=(const ValueArray47& other);
    
    template <GTEST_6_TYPENAMES_(T)>
inline GTEST_6_TUPLE_(T) make_tuple(const T0& f0, const T1& f1, const T2& f2,
    const T3& f3, const T4& f4, const T5& f5) {
  return GTEST_6_TUPLE_(T)(f0, f1, f2, f3, f4, f5);
}
    
      void operator delete(void* block, size_t /* allocation_size */) {
    allocated_--;
    free(block);
  }
    
    // Tests the c'tor that accepts a C string.
TEST(MyString, ConstructorFromCString) {
  const MyString s(kHelloString);
  EXPECT_EQ(0, strcmp(s.c_string(), kHelloString));
  EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
            s.Length());
}
    
    class StopWriteToken : public WriteControllerToken {
 public:
  explicit StopWriteToken(WriteController* controller)
      : WriteControllerToken(controller) {}
  virtual ~StopWriteToken();
};
    
      // Always pick a compaction which includes all files whenever possible.
  CompactionTask* PickCompaction(
      DB* db, const std::string& cf_name) override {
    ColumnFamilyMetaData cf_meta;
    db->GetColumnFamilyMetaData(&cf_meta);
    }
    
      int ret = system('rm -rf /tmp/rocksmergetest');
  if (ret != 0) {
    fprintf(stderr, 'Error deleting /tmp/rocksmergetest, code: %d\n', ret);
    return ret;
  }
  rocksdb::Options options;
  options.create_if_missing = true;
  options.merge_operator.reset(new MyMerge);
  options.compaction_filter = &filter;
  status = rocksdb::DB::Open(options, '/tmp/rocksmergetest', &raw_db);
  assert(status.ok());
  std::unique_ptr<rocksdb::DB> db(raw_db);
    
    namespace {
// A dummy compaction filter
class DummyCompactionFilter : public CompactionFilter {
 public:
  virtual ~DummyCompactionFilter() {}
  virtual bool Filter(int level, const Slice& key, const Slice& existing_value,
                      std::string* new_value, bool* value_changed) const {
    return false;
  }
  virtual const char* Name() const { return 'DummyCompactionFilter'; }
};
    }
    
     private:
  void Init(
      const std::string& lua_script,
      const std::vector<std::shared_ptr<RocksLuaCustomLibrary>>& libraries) {
    if (lua_state_) {
      luaL_openlibs(lua_state_);
      for (const auto& library : libraries) {
        luaL_openlib(lua_state_, library->Name(), library->Lib(), 0);
        library->CustomSetup(lua_state_);
      }
      luaL_dostring(lua_state_, lua_script.c_str());
    }
  }
    
    #include 'rocksdb/cache.h'
#include 'rocksdb/db.h'
    
    /*
 * Class:     org_rocksdb_BackupableDBOptions
 * Method:    shareTableFiles
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_BackupableDBOptions_shareTableFiles(JNIEnv* /*env*/,
                                                              jobject /*jobj*/,
                                                              jlong jhandle) {
  auto* bopt = reinterpret_cast<rocksdb::BackupableDBOptions*>(jhandle);
  return bopt->share_table_files;
}