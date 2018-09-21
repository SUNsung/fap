
        
        #endif  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_FILEPATH_H_

    
    
    {  const T1 v1_;
  const T2 v2_;
  const T3 v3_;
  const T4 v4_;
  const T5 v5_;
  const T6 v6_;
  const T7 v7_;
  const T8 v8_;
  const T9 v9_;
  const T10 v10_;
  const T11 v11_;
  const T12 v12_;
  const T13 v13_;
  const T14 v14_;
  const T15 v15_;
  const T16 v16_;
  const T17 v17_;
  const T18 v18_;
  const T19 v19_;
  const T20 v20_;
  const T21 v21_;
  const T22 v22_;
  const T23 v23_;
  const T24 v24_;
  const T25 v25_;
  const T26 v26_;
  const T27 v27_;
  const T28 v28_;
  const T29 v29_;
  const T30 v30_;
};
    
    #include <string.h>
#include <string>
    
      // serialize the QueryLogItem and make sure decorations go top level
  auto doc = JSON::newObject();
  auto status = serializeQueryLogItem(item, doc);
  std::string expected = 'test';
  std::string result = doc.doc()['load_test'].GetString();
  EXPECT_EQ(result, expected);
    
      // Generate content to update/add to the config.
  std::string content;
  auto s = readFile(kTestDataPath + 'test_parse_items.conf', content);
  EXPECT_TRUE(s.ok());
  std::map<std::string, std::string> config;
  config['awesome'] = content;
    
      QueryData r;
  if (views.IsObject()) {
    for (const auto& view : views.GetObject()) {
      std::string name = view.name.GetString();
      if (!view.value.IsString()) {
        continue;
      }
      std::string query = view.value.GetString();
      if (query.empty()) {
        continue;
      }
    }
    }
    
      auto p = PlatformProcess(handle);
  EXPECT_TRUE(p.isValid());
  EXPECT_NE(p.nativeHandle(), handle);
    
    
    {  // And of the column has constraints:
  EXPECT_TRUE(cm['path'].notExistsOrMatches('some'));
  EXPECT_FALSE(cm['path'].notExistsOrMatches('not_some'));
  EXPECT_TRUE(cm['path'].exists());
  EXPECT_TRUE(cm['path'].existsAndMatches('some'));
}
    
    Status deserializeDistributedQueryRequest(const rj::Value& obj,
                                          DistributedQueryRequest& r) {
  if (!obj.HasMember('query') || !obj.HasMember('id') ||
      !obj['query'].IsString() || !obj['id'].IsString()) {
    return Status(1, 'Malformed distributed query request');
  }
    }
    
    /**
 * @brief A more 'complex' example table is provided to assist with tests.
 *
 * This table will access options and flags known to the extension.
 * An extension should not assume access to any CLI flags- rather, access is
 * provided via the osquery-meta table: osquery_flags.
 *
 * There is no API/C++ wrapper to provide seamless use of flags yet.
 * We can force an implicit query to the manager though.
 *
 * Database access should be mediated by the *Database functions.
 * Direct use of the 'database' registry will lead to undefined behavior.
 */
class ComplexExampleTable : public TablePlugin {
 private:
  TableColumns columns() const {
    return {
        std::make_tuple('flag_test', TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple('database_test', TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }
    }