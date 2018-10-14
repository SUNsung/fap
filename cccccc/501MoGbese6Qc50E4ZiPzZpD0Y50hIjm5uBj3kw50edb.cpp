
        
        
    {
    {
    {
    {          std::transform(
            begin(inputs) + start, begin(inputs) + stop,
            retMem + start,
            func
          );
        }
      } catch (const std::runtime_error& e) {
        std::fprintf(stderr,
          'worker thread exited with exception: %s\n', e.what());
        failed = true;
      }
    }));
  }
    
    #endif

    
    #endif

    
    #define RNAME(x) if (r == x) return #x
    
    inline Cell ExecutionContext::lookupClsCns(const StringData* cls,
                                      const StringData* cns) {
  return lookupClsCns(NamedEntity::get(cls), cls, cns);
}
    
    namespace osquery {
    }
    
    /**
 * @brief Parser plugin for logger configurations.
 */
class LoggerConfigParserPlugin : public ConfigParserPlugin {
 public:
  std::vector<std::string> keys() const override {
    return {kLoggerKey};
  }
    }
    
    #include 'osquery/config/parsers/prometheus_targets.h'
    
    
    {  c.reset();
}
    
      if (WIFEXITED(process_status)) {
    status = WEXITSTATUS(process_status);
    return PROCESS_EXITED;
  }
    
    TEST_F(QueryTests, test_query_name_updated) {
  // Try to retrieve results from a query that has not executed.
  QueryDataSet previous_qd;
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('will_update_query', query);
  EXPECT_TRUE(cf.isNewQuery());
  EXPECT_TRUE(cf.isNewQuery());
    }
    
    TEST_F(TablesTests, test_constraint_map) {
  ConstraintMap cm;
    }
    
      /// Check the status of the last worker.
  int getWorkerStatus() const {
    return worker_status_;
  }
    
      std::set<std::string> queries_to_run;
  // Check for and run discovery queries first
  if (doc.doc().HasMember('discovery')) {
    const auto& queries = doc.doc()['discovery'];
    assert(queries.IsObject());
    }
    
      /// A string path parsed from the inotify_event.
  std::string path;