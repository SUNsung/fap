
        
            bst_uint newsize = std::max(bst_uint(lower_.size()), bst_uint(std::max(leftid, rightid) + 1u));
    
    #include <cstdint>
#include <rabit/c_api.h>
#include <xgboost/c_api.h>
#include <xgboost/base.h>
#include <xgboost/logging.h>
#include './xgboost4j.h'
#include <cstring>
#include <vector>
#include <string>
    
      const MetaInfo& Info() const override;
    
      // Loop over the batches and count the records
  int64_t batch_count = 0;
  int64_t row_count = 0;
  for (const auto &batch : dmat->GetRowBatches()) {
    batch_count++;
    row_count += batch.Size();
  }
  EXPECT_GE(batch_count, 2);
  EXPECT_EQ(row_count, dmat->Info().num_row_);
    
    // objectives
#include '../src/objective/objective.cc'
#include '../src/objective/regression_obj.cc'
#include '../src/objective/multiclass_obj.cc'
#include '../src/objective/rank_obj.cc'
#include '../src/objective/hinge.cc'
    
    TEST(Transform, DeclareUnifiedTest(Basic)) {
  const size_t size {256};
  std::vector<bst_float> h_in(size);
  std::vector<bst_float> h_out(size);
  InitializeRange(h_in.begin(), h_in.end());
  std::vector<bst_float> h_sol(size);
  InitializeRange(h_sol.begin(), h_sol.end());
    }
    
    
    {  // thread temp data
  // used to hold temporal sketch
  std::vector<std::vector<SketchEntry> > thread_sketch_;
  // used to hold statistics
  std::vector<std::vector<SKStats> > thread_stats_;
  // node statistics
  std::vector<SKStats> node_stats_;
  // summary array
  std::vector<WXQSketch::SummaryContainer> summary_array_;
  // reducer for summary
  rabit::Reducer<SKStats, SKStats::Reduce> stats_reducer_;
  // reducer for summary
  rabit::SerializeReducer<WXQSketch::SummaryContainer> sketch_reducer_;
  // per node, per feature sketch
  std::vector<common::WXQuantileSketch<bst_float, bst_float> > sketchs_;
};
    
    
    {
    {XGBOOST_REGISTER_TREE_UPDATER(TreeRefresher, 'refresh')
.describe('Refresher that refreshes the weight and statistics according to data.')
.set_body([]() {
    return new TreeRefresher();
  });
}  // namespace tree
}  // namespace xgboost

    
      bool PartialMerge(const Slice& /*key*/, const Slice& left_operand,
                    const Slice& right_operand, std::string* new_value,
                    Logger* /*logger*/) const override {
    if (left_operand.compare(right_operand) >= 0) {
      new_value->assign(left_operand.data(), left_operand.size());
    } else {
      new_value->assign(right_operand.data(), right_operand.size());
    }
    return true;
  }
    
    std::shared_ptr<TransactionDBCondVar>
TransactionDBMutexFactoryImpl::AllocateCondVar() {
  return std::shared_ptr<TransactionDBCondVar>(new TransactionDBCondVarImpl());
}
    
      // When an actor (column family) requests a stop token, all writes will be
  // stopped until the stop token is released (deleted)
  std::unique_ptr<WriteControllerToken> GetStopToken();
  // When an actor (column family) requests a delay token, total delay for all
  // writes to the DB will be controlled under the delayed write rate. Every
  // write needs to call GetDelay() with number of bytes writing to the DB,
  // which returns number of microseconds to sleep.
  std::unique_ptr<WriteControllerToken> GetDelayToken(
      uint64_t delayed_write_rate);
  // When an actor (column family) requests a moderate token, compaction
  // threads will be increased
  std::unique_ptr<WriteControllerToken> GetCompactionPressureToken();
    
    int main() {
  // open DB
  Options options;
  options.create_if_missing = true;
  DB* db;
  Status s = DB::Open(options, kDBPath, &db);
  assert(s.ok());
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
    
      // Return stats as map of {string, double} per-tier
  //
  // Persistent cache can be initialized as a tier of caches. The stats are per
  // tire top-down
  virtual StatsType Stats() = 0;
    
    
    { protected:
  virtual ~Snapshot();
};
    
    #pragma once
// lua headers
extern 'C' {
#include <lauxlib.h>
#include <lua.h>
#include <lualib.h>
}
    
    TEST_F(PacksTests, test_restriction_population) {
  // Require that all potential restrictions are populated before being checked.
  auto doc = getExamplePacksConfig();
  const auto& packs = doc.doc()['packs'];
  Pack fpack('fake_pack', packs['restricted_pack']);
    }
    
    enum class DatabaseError {
  // Unknown error, currently unused
  Unknown = 1,
  DbIsNotOpen = 2,
  InvalidPath = 3,
  FailToDestroyDB = 4,
  FailToOpenDatabase = 5,
  FailToReadData = 6,
  FailToWriteData = 7,
  KeyNotFound = 8,
  DomainNotFound = 9,
  // Corruption or other unrecoverable error after DB can't be longer used
  // Database should be closed, destroyed and opened again
  // If this error was received during data access, then application
  // is likely to die soon
  // See message and/or underlying error for details
  Panic = 10,
};
    
    ExpectedSuccess<RocksdbMigrationError> migrateRocksDBDatabase(
    const std::string& path);
    
    Status LoggerPlugin::call(const PluginRequest& request,
                          PluginResponse& response) {
  std::vector<StatusLogLine> intermediate_logs;
  if (request.count('string') > 0) {
    return this->logString(request.at('string'));
  } else if (request.count('snapshot') > 0) {
    return this->logSnapshot(request.at('snapshot'));
  } else if (request.count('init') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    this->setProcessName(request.at('init'));
    this->init(this->name(), intermediate_logs);
    return Status(0);
  } else if (request.count('status') > 0) {
    deserializeIntermediateLog(request, intermediate_logs);
    return this->logStatus(intermediate_logs);
  } else if (request.count('event') > 0) {
    return this->logEvent(request.at('event'));
  } else if (request.count('action') && request.at('action') == 'features') {
    size_t features = 0;
    features |= (usesLogStatus()) ? LOGGER_FEATURE_LOGSTATUS : 0;
    features |= (usesLogEvent()) ? LOGGER_FEATURE_LOGEVENT : 0;
    return Status(static_cast<int>(features));
  } else {
    return Status(1, 'Unsupported call to logger plugin');
  }
}
    
    /**
 * @brief Logger plugin feature bits for complicated loggers.
 *
 * Logger plugins may opt-in to additional features like explicitly handling
 * Glog status events or requesting event subscribers to forward each event
 * directly to the logger. This enumeration tracks, and corresponds to, each
 * of the feature methods defined in a logger plugin.
 *
 * A specific registry call action can be used to retrieve an overloaded Status
 * object containing all of the opt-in features.
 */
enum LoggerFeatures {
  LOGGER_FEATURE_BLANK = 0,
  LOGGER_FEATURE_LOGSTATUS = 1,
  LOGGER_FEATURE_LOGEVENT = 2,
};
    
    
    {} // namespace osquery

    
      /**
   * @brief Bind this plugin to an external plugin reference.
   *
   * Allow a specialized plugin type to act when an external plugin is
   * registered (e.g., a TablePlugin will attach the table name).
   *
   * @param name The broadcasted name of the plugin.
   * @param info The routing info for the owning extension.
   */
  static Status addExternal(const std::string& name,
                            const PluginResponse& info) {
    (void)name;
    (void)info;
    return Status::success();
  }
    
    GTEST_TEST(InMemoryDatabaseTest, test_destroy) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key', 10).isError());
  db->close();
  // In memory db should be destroyed on close
  // but we want to test that destroy is not failing for no reason
  auto result = db->destroyDB();
  EXPECT_TRUE(result);
  ASSERT_FALSE(db->open().isError());
  auto get_result = db->getInt32(kPersistentSettings, 'key');
  EXPECT_FALSE(get_result);
  EXPECT_EQ(get_result.getError(), DatabaseError::KeyNotFound);
}