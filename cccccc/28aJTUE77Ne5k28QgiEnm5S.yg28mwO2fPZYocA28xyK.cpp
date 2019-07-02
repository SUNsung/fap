
        
        AuthPropertyIterator::AuthPropertyIterator(
    const grpc_auth_property* property, const grpc_auth_property_iterator* iter)
    : property_(property),
      ctx_(iter->ctx),
      index_(iter->index),
      name_(iter->name) {}
    
    namespace grpc {
    }
    
    void CensusClientCallData::StartTransportStreamOpBatch(
    grpc_call_element* elem, TransportStreamOpBatch* op) {
  if (op->send_initial_metadata() != nullptr) {
    census_context* ctxt = op->get_census_context();
    GenerateClientContext(
        qualified_method_, &context_,
        (ctxt == nullptr) ? nullptr : reinterpret_cast<CensusContext*>(ctxt));
    size_t tracing_len = TraceContextSerialize(context_.Context(), tracing_buf_,
                                               kMaxTraceContextLen);
    if (tracing_len > 0) {
      GRPC_LOG_IF_ERROR(
          'census grpc_filter',
          grpc_metadata_batch_add_tail(
              op->send_initial_metadata()->batch(), &tracing_bin_,
              grpc_mdelem_from_slices(
                  GRPC_MDSTR_GRPC_TRACE_BIN,
                  grpc_slice_from_copied_buffer(tracing_buf_, tracing_len))));
    }
    grpc_slice tags = grpc_empty_slice();
    // TODO: Add in tagging serialization.
    size_t encoded_tags_len = StatsContextSerialize(kMaxTagsLen, &tags);
    if (encoded_tags_len > 0) {
      GRPC_LOG_IF_ERROR(
          'census grpc_filter',
          grpc_metadata_batch_add_tail(
              op->send_initial_metadata()->batch(), &stats_bin_,
              grpc_mdelem_from_slices(GRPC_MDSTR_GRPC_TAGS_BIN, tags)));
    }
  }
    }
    
    #include <grpc/support/port_platform.h>
    
    namespace grpc {
namespace load_reporter {
    }
    }
    
    private:
  void parse(Object *tree);
    
      int duration;                      // 0
    
      // Return the various authorization parameters.  These are only
  // valid after authorize has returned true.
  virtual int getPermissionFlags() = 0;
  virtual GBool getOwnerPasswordOk() = 0;
  virtual Guchar *getFileKey() = 0;
  virtual int getFileKeyLength() = 0;
  virtual int getEncVersion() = 0;
  virtual int getEncRevision() = 0;
  virtual CryptAlgorithm getEncAlgorithm() = 0;
    
          // Test write entire array
      std::vector<unsigned char> buffer(
        CompressedBufferWriter::CalculateBufferSize(input.size(),
          alphabet_size));
    
     public:
  /*! \brief virtual destructor */
  virtual ~LinearUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(
      const std::vector<std::pair<std::string, std::string> >& args) = 0;
    
    /*!
 * \brief Registry entry for Metric factory functions.
 *  The additional parameter const char* param gives the value after @, can be null.
 *  For example, metric map@3, then: param == '3'.
 */
struct MetricReg
    : public dmlc::FunctionRegEntryBase<MetricReg,
                                        std::function<Metric* (const char*)> > {
};
    
    #include <dmlc/parameter.h>
#include '../common/common.h'
    
      // try all possible enum values
  kwargs['foo'] = 'bar';
  param.Init(kwargs);
  ASSERT_EQ(param.foo, Foo::kBar);
  kwargs['foo'] = 'frog';
  param.Init(kwargs);
  ASSERT_EQ(param.foo, Foo::kFrog);
  kwargs['foo'] = 'cat';
  param.Init(kwargs);
  ASSERT_EQ(param.foo, Foo::kCat);
  kwargs['foo'] = 'dog';
  param.Init(kwargs);
  ASSERT_EQ(param.foo, Foo::kDog);
    
    TEST(Linear, coordinate) {
  auto mat = xgboost::CreateDMatrix(10, 10, 0);
  auto lparam = xgboost::CreateEmptyGenericParam(0, 0);
  auto updater = std::unique_ptr<xgboost::LinearUpdater>(
      xgboost::LinearUpdater::Create('coord_descent', &lparam));
  updater->Init({{'eta', '1.'}});
  xgboost::HostDeviceVector<xgboost::GradientPair> gpair(
      (*mat)->Info().num_row_, xgboost::GradientPair(-5, 1.0));
  xgboost::gbm::GBLinearModel model;
  model.param.num_feature = (*mat)->Info().num_col_;
  model.param.num_output_group = 1;
  model.LazyInitModel();
  updater->Update(&gpair, (*mat).get(), &model, gpair.Size());
    }
    
      /**
   * @brief the distributed work ID of a carve
   *
   * This value should be used by the TLS endpoints where carve data is
   * aggregated, to tie together a distributed query with the carve data
   */
  std::string requestId_;
    
    TEST_F(ConfigTests, test_get_scheduled_queries) {
  std::vector<std::string> query_names;
  get().addPack('unrestricted_pack', '', getUnrestrictedPack().doc());
  get().scheduledQueries(
      ([&query_names](std::string name, const ScheduledQuery& query) {
        query_names.push_back(std::move(name));
      }));
    }
    
      // We should execute the query if the SDK platform is specifed.
  fpack.platform_ = kSDKPlatform;
  EXPECT_TRUE(fpack.checkPlatform());
  // But not if something other than the SDK platform is speciifed.
  fpack.platform_ = (kSDKPlatform == 'darwin') ? 'linux' : 'darwin';
  EXPECT_FALSE(fpack.checkPlatform());
    
      // This function designed to write batch of data as one operation and get
  // as much performance as possbile. Because of this, db may not guarantee
  // data consistency or atomic nature of operation
  // Please see actual function implementation for details and limitations
  virtual ExpectedSuccess<DatabaseError> putStringsUnsafe(
      const std::string& domain,
      const std::vector<std::pair<std::string, std::string>>& data) = 0;
    
    template <typename StorageType>
std::vector<std::string> InMemoryStorage<StorageType>::getKeys(
    const std::string& prefix) const {
  std::vector<std::string> result;
  for (const auto& iter : storage_) {
    if (boost::starts_with(iter.first, prefix)) {
      result.push_back(iter.first);
    }
  }
  return result;
}
    
      assert(db_ == nullptr && 'can't destroy db while it in use');
  if (db_ != nullptr) {
    // Try to recover in case if db was open
    close();
  }
    
    std::string RocksdbMigration::randomOutputPath() {
  auto path = fs::path(OSQUERY_HOME);
  boost::uuids::uuid uuid = boost::uuids::random_generator()();
  path.append('migration');
  path.append(boost::uuids::to_string(uuid));
  return path.string();
}
    
    int Flag::createAlias(const std::string& alias, const FlagDetail& flag) {
  instance().aliases_.insert(std::make_pair(alias, flag));
  return 0;
}
    
      /** @brief Virtual method which should implement custom logging.
   *
   *  LoggerPlugin::logString should be implemented by a subclass of
   *  LoggerPlugin which needs to log a string in a custom way.
   *
   *  @return an instance of osquery::Status which indicates the success or
   *  failure of the operation.
   */
  virtual Status logString(const std::string& s) = 0;
    
      /**
   * @brief Attach a table at runtime.
   *
   * The SQL implementation plugin may need to manage how virtual tables are
   * attached at run time. In the case of SQLite where a single DB object is
   * managed, tables are enumerated and attached during initialization.
   */
  virtual Status attach(const std::string& /*name*/) {
    return Status::success();
  }
    
    
    {}  //  namespace rocksdb

    
    class MyFilter : public rocksdb::CompactionFilter {
 public:
  bool Filter(int level, const rocksdb::Slice& key,
              const rocksdb::Slice& existing_value, std::string* new_value,
              bool* value_changed) const override {
    fprintf(stderr, 'Filter(%s)\n', key.ToString().c_str());
    ++count_;
    assert(*value_changed == false);
    return false;
  }
    }
    
    #endif  // ROCKSDB_LITE

    
    
    {  // close DB
  for (auto* handle : handles) {
    delete handle;
  }
  delete db;
}

    
    // Move all L0 files to target_level skipping compaction.
// This operation succeeds only if the files in L0 have disjoint ranges; this
// is guaranteed to happen, for instance, if keys are inserted in sorted
// order. Furthermore, all levels between 1 and target_level must be empty.
// If any of the above condition is violated, InvalidArgument will be
// returned.
Status PromoteL0(DB* db, ColumnFamilyHandle* column_family,
                 int target_level = 1);
    
    // PersistentCache
//
// Persistent cache interface for caching IO pages on a persistent medium. The
// cache interface is specifically designed for persistent read cache.
class PersistentCache {
 public:
  typedef std::vector<std::map<std::string, double>> StatsType;
    }
    
    class DB;
    
    // Returns the current memory usage of the specified DB instances.
class MemoryUtil {
 public:
  enum UsageType : int {
    // Memory usage of all the mem-tables.
    kMemTableTotal = 0,
    // Memory usage of those un-flushed mem-tables.
    kMemTableUnFlushed = 1,
    // Memory usage of all the table readers.
    kTableReadersTotal = 2,
    // Memory usage by Cache.
    kCacheTotal = 3,
    kNumUsageTypes = 4
  };
    }
    
    /*
 * Class:     org_rocksdb_Checkpoint
 * Method:    dispose
 * Signature: (J)V
 */
void Java_org_rocksdb_Checkpoint_disposeInternal(JNIEnv* /*env*/,
                                                 jobject /*jobj*/,
                                                 jlong jhandle) {
  auto* checkpoint = reinterpret_cast<rocksdb::Checkpoint*>(jhandle);
  assert(checkpoint != nullptr);
  delete checkpoint;
}
    
    #include 'coroutine_channel.h'
    
    using swoole::coroutine::Channel;
    
        swServer_add_port(&serv, SW_SOCK_UDP, '0.0.0.0', 9502);
    swServer_add_port(&serv, SW_SOCK_TCP6, '::', 9503);
    swServer_add_port(&serv, SW_SOCK_UDP6, '::', 9504);
    
    
    {    private:
        redisAsyncContext * m_ctx;
        QSocketNotifier * m_read;
        QSocketNotifier * m_write;
};
    
    static pid_t create_server()
{
    pid_t pid;
    swoole_shell_exec('php server/tcp.php', &pid, 1);
    sleep(1); // wait 1s
    return pid;
}
    
        unlink(sock1_path);
    unlink(sock2_path);
    
    
    
        //listen EPOLLOUT event
    if (reactor->set(reactor, fd, SW_EVENT_TCP | SW_EVENT_WRITE | SW_EVENT_READ) < 0
            && (errno == EBADF || errno == ENOENT))
    {
        goto _close_fd;
    }
    
            // ------------------------------ Comparison operators ------------------------------ //
        /**
         * Less comparison operator.
         * @param point Point<T> to be compared.
         * @result Whether the instance satisfies the condition with respect to point.
         */
        inline bool operator<(const Point<T>& point) const
        {
            return area() < point.area();
        }
    
        template<typename T>
    std::string Point<T>::toString() const
    {
        try
        {
            return '[' + std::to_string(x) + ', ' + std::to_string(y) + ']';
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return '';
        }
    }
    
        template<typename T>
    Rectangle<T>::Rectangle(const Rectangle<T>& rectangle)
    {
        try
        {
            x = rectangle.x;
            y = rectangle.y;
            width = rectangle.width;
            height = rectangle.height;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
        }
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        //
    // Overrides
    //
    virtual ProgressTo* clone() const override;
    virtual ProgressTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    ProgressTo() {}
    virtual ~ProgressTo() {}
    
    
#include '2d/CCComponentContainer.h'
#include '2d/CCComponent.h'
#include '2d/CCNode.h'
    
    /// @endcond
#endif

    
    #include '2d/CCFont.h'