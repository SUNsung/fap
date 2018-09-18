
        
        Status KafkaTopicsConfigParserPlugin::update(const std::string& source,
                                             const ParserConfig& config) {
  auto topics = config.find(kKafkaTopicParserRootKey);
  if (topics != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(topics->second.doc(), obj);
    data_.add(kKafkaTopicParserRootKey, obj);
  }
  return Status();
}
    
    
    {
    {  EXPECT_TRUE(doc.HasMember('custom_nested_json'));
  EXPECT_FALSE(Flag::getValue('custom_nested_json').empty());
  EXPECT_EQ(R'raw({'foo':1,'bar':'baz'})raw',
            Flag::getValue('custom_nested_json'));
}
}

    
      buildExcludePathsSet();
    
    
    {  Status genConfig(std::map<std::string, std::string>& config) {
    config['data'] = '{\'queries\':{}}';
    return Status(0, 'OK');
  }
};