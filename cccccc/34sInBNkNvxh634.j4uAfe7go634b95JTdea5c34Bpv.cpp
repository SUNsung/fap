
        
          auto cv = config.find(kLoggerKey);
  if (cv != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(cv->second.doc(), obj);
    data_.add(kLoggerKey, obj);
  }
    
    #include <osquery/config.h>
#include <osquery/registry.h>
    
    
    {  // Any views left are views that don't exist in the new configuration file
  // so we tear them down and remove them from the database.
  for (const auto& old_view : erase_views) {
    osquery::query('DROP VIEW ' + old_view, r);
    deleteDatabaseValue(kQueries, kConfigViews + old_view);
  }
  return Status(0, 'OK');
}
    
    Status Distributed::runQueries() {
  while (getPendingQueryCount() > 0) {
    auto request = popRequest();
    LOG(INFO) << 'Executing distributed query: ' << request.id << ': '
              << request.query;
    }
    }
    
      auto socket_flag = FLAGS_audit_allow_unix;
  FLAGS_audit_allow_unix = true;
  Row r4;
  std::string msg3 = '01002F746D702F6F7371756572792E656D0000';
  parseSockAddr(msg3, r4, unix_socket);
  ASSERT_FALSE(r4['socket'].empty());
  EXPECT_EQ(r4['socket'], '/tmp/osquery.em');
    
    #include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>