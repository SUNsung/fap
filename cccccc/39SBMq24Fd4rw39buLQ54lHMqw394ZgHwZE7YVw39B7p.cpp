
        
        #include 'stdafx.h'
#include 'CNTKLibrary.h'
#include 'Utils.h'
#include 'ReaderShim.h'
#include 'DataReader.h'
    
      /**
   * @brief Helper to access config parsers via the registry
   *
   * This may return a nullptr if an exception is thrown attempting to retrieve
   * the requested config parser.
   *
   * @param parser is the string name of the parser that you want
   *
   * @return a shared pointer to the config parser plugin
   */
  static const std::shared_ptr<ConfigParserPlugin> getParser(
      const std::string& parser);
    
    Expected<int32_t, DatabaseError> Database::getInt32Or(
    const std::string& domain,
    const std::string& key,
    const int32_t default_value) {
  auto result = getInt32(domain, key);
  if (!result && result.getError() == DatabaseError::KeyNotFound) {
    return default_value;
  }
  return result;
}
    
    
    {  for (auto& line : doc.GetArray()) {
    log.push_back({
        static_cast<StatusLogSeverity>(line['s'].GetInt()),
        line['f'].GetString(),
        line['i'].GetUint64(),
        line['m'].GetString(),
        line['c'].GetString(),
        line['u'].GetUint64(),
        line['h'].GetString(),
    });
  }
}
    
    
    {} // namespace osquery

    
      /// The plugin may perform some tear down, release, not required.
  virtual void tearDown() {}
    
    GTEST_TEST(InMemoryDatabaseTest, test_keys_search) {
  auto db = std::make_unique<InMemoryDatabase>('test');
  ASSERT_FALSE(db->open().isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_1', 1).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_2', 2).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'key_3', 3).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_1', 4).isError());
  ASSERT_FALSE(db->putInt32(kPersistentSettings, 'kEy_2', 5).isError());
  auto result_all = db->getKeys(kPersistentSettings);
  EXPECT_TRUE(result_all);
  EXPECT_EQ((*result_all).size(), 5);
  auto result_some = db->getKeys(kPersistentSettings, 'key');
  EXPECT_TRUE(result_some);
  EXPECT_EQ((*result_some).size(), 3);
}
    
    using json = nlohmann::json;
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');