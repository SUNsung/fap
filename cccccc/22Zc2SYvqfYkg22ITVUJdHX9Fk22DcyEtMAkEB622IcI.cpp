
        
        namespace osquery {
    }
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
      {
    auto dropper = DropPrivileges::get();
    EXPECT_TRUE(dropper->dropTo(nobody->pw_uid, nobody->pw_gid));
    EXPECT_EQ(geteuid(), nobody->pw_uid);
    }
    
    TEST_F(ProcessTests, test_launchWorker) {
  {
    std::vector<char*> argv;
    for (size_t i = 0; i < kExpectedWorkerArgsCount; i++) {
      char* entry = new char[strlen(kExpectedWorkerArgs[i]) + 1];
      EXPECT_NE(entry, nullptr);
      memset(entry, '\0', strlen(kExpectedWorkerArgs[i]) + 1);
      memcpy(entry, kExpectedWorkerArgs[i], strlen(kExpectedWorkerArgs[i]));
      argv.push_back(entry);
    }
    argv.push_back(nullptr);
    }
    }
    
    TEST_F(StatusTests, test_constructor) {
  auto s = Status(5, 'message');
  EXPECT_EQ(s.getCode(), 5);
  EXPECT_EQ(s.getMessage(), 'message');
}
    
      EXPECT_FALSE(cl3.matches(1001));
  EXPECT_TRUE(cl3.matches(1000));
    
    Status WmiResultItem::GetUnsignedInt32(const std::string& name,
                                       unsigned int& ret) const {
  std::wstring property_name = stringToWstring(name);
  VARIANT value;
  HRESULT hr = result_->Get(property_name.c_str(), 0, &value, nullptr, nullptr);
    }
    
     public:
  Status setUp() override;
    
      /// If list is empty, return false and leave *result unchanged.
  /// Else, remove the first/last elem, store it in *result, and return true
  bool PopLeft(const std::string& key, std::string* result);  // First
  bool PopRight(const std::string& key, std::string* result); // Last
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats)
      : StatisticsImpl(stats, false), m_ignore_histograms() {
  }
    
     private:
    // used for synchronisation in compare method
    std::unique_ptr<port::Mutex> mtx_compare;
    // used for synchronisation in findShortestSeparator method
    std::unique_ptr<port::Mutex> mtx_findShortestSeparator;
    std::unique_ptr<const char[]> m_name;
    jmethodID m_jCompareMethodId;
    jmethodID m_jFindShortestSeparatorMethodId;
    jmethodID m_jFindShortSuccessorMethodId;