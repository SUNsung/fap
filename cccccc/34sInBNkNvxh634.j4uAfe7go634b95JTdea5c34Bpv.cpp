
        
        
    {  // Assuming T is defined in namespace foo, in the next statement,
  // the compiler will consider all of:
  //
  //   1. foo::operator<< (thanks to Koenig look-up),
  //   2. ::operator<< (as the current namespace is enclosed in ::),
  //   3. testing::internal2::operator<< (thanks to the using statement above).
  //
  // The operator<< whose type matches T best will be picked.
  //
  // We deliberately allow #2 to be a candidate, as sometimes it's
  // impossible to define #1 (e.g. when foo is ::std, defining
  // anything in it is undefined behavior unless you are a compiler
  // vendor.).
  *os << value;
}
    
    
    {  return AssertionFailure() << pred_text << '('
                            << e1 << ', '
                            << e2 << ') evaluates to false, where'
                            << '\n' << e1 << ' evaluates to ' << v1
                            << '\n' << e2 << ' evaluates to ' << v2;
}
    
      // Create the directory so that path exists. Returns true if successful or
  // if the directory already exists; returns false if unable to create the
  // directory for any reason, including if the parent directory does not
  // exist. Not named 'CreateDirectory' because that's a macro on Windows.
  bool CreateFolder() const;
    
    #include <algorithm>
    
    // Sets the 0-terminated C string this MyString object
// represents.
void MyString::Set(const char* a_c_string) {
  // Makes sure this works when c_string == c_string_
  const char* const temp = MyString::CloneCString(a_c_string);
  delete[] c_string_;
  c_string_ = temp;
}

    
      // Gets the first element of the queue, or NULL if the queue is empty.
  QueueNode<E>* Head() { return head_; }
  const QueueNode<E>* Head() const { return head_; }
    
      /*
   * @brief a variable tracking all of the paths we attempt to carve
   *
   * This is a globbed set of file paths that we're expecting will be
   * carved.
   */
  std::set<boost::filesystem::path> carvePaths_;
    
    std::vector<std::string> KafkaTopicsConfigParserPlugin::keys() const {
  return {kKafkaTopicParserRootKey};
}
    
    
    {} // namespace osquery

    
    
    {  QueryLogItem second_item;
  getDecorations(second_item.decorations);
  ASSERT_EQ(second_item.decorations.size(), 2U);
}
    
    Status serializeDistributedQueryResultJSON(const DistributedQueryResult& r,
                                           std::string& json) {
  auto doc = JSON::newObject();
  auto s = serializeDistributedQueryResult(r, doc, doc.doc());
  if (!s.ok()) {
    return s;
  }
    }
    
      status = EventFactory::deregisterEventPublisher(basic_pub->type());
  EXPECT_TRUE(status.ok());
  status = EventFactory::deregisterEventPublisher(fake_pub->type());
  EXPECT_TRUE(status.ok());
  status = EventFactory::deregisterEventPublisher(another_fake_pub->type());
  EXPECT_TRUE(status.ok());
    
    #include <folly/portability/GTest.h>
    
    template <class String>
void randomString(String* toFill, size_t size = 1000) {
  assert(toFill);
  toFill->resize(size);
  FOR_EACH (i, *toFill) {
    *i = random('a', 'z');
  }
}
    
      // Use our stubbed out fchmod() function to force a failure when setting up
  // the temporary file.
  //
  // First try when creating the file for the first time.
  {
    FChmodFailure fail;
    EXPECT_THROW(writeFileAtomic(path, 'foobar'), std::system_error);
  }
  EXPECT_EQ(set<string>{}, listTmpDir());
    
    TEST(FixedStringReplaceTest, RuntimeReplaceString) {
  folly::FixedString<10> tmp{'abcdefghij'};
  tmp.replace(1, 5, FS('XX'));
  EXPECT_EQ(7u, tmp.size());
  EXPECT_STREQ('aXXghij', tmp.c_str());
}
    
      EXPECT_TRUE(LOG_VALUE((has_test<Bar, int()>::value)));
  EXPECT_FALSE(LOG_VALUE((has_test<Bar, int() const>::value)));
  EXPECT_TRUE(LOG_VALUE((has_test<Bar, double(int, long)>::value)));
  EXPECT_FALSE(LOG_VALUE((has_test<Bar, string(const string&) const>::value)));
  EXPECT_TRUE(LOG_VALUE((has_test<Bar, long(int) const>::value)));
  EXPECT_FALSE(LOG_VALUE((has_test<Bar, string(string) const>::value)));