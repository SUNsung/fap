
        
        bool swift::isPlatformActive(PlatformKind Platform, LangOptions &LangOpts) {
  if (Platform == PlatformKind::none)
    return true;
  
  if (Platform == PlatformKind::OSXApplicationExtension ||
      Platform == PlatformKind::iOSApplicationExtension)
    if (!LangOpts.EnableAppExtensionRestrictions)
      return false;
  
  // FIXME: This is an awful way to get the current OS.
  switch (Platform) {
    case PlatformKind::OSX:
    case PlatformKind::OSXApplicationExtension:
      return LangOpts.Target.isMacOSX();
    case PlatformKind::iOS:
    case PlatformKind::iOSApplicationExtension:
      return LangOpts.Target.isiOS() && !LangOpts.Target.isTvOS();
    case PlatformKind::tvOS:
    case PlatformKind::tvOSApplicationExtension:
      return LangOpts.Target.isTvOS();
    case PlatformKind::watchOS:
    case PlatformKind::watchOSApplicationExtension:
      return LangOpts.Target.isWatchOS();
    case PlatformKind::none:
      llvm_unreachable('handled above');
  }
  llvm_unreachable('bad PlatformKind');
}
    
    #ifndef PREPOSITION
#  define PREPOSITION(Word)
#endif
    
      static ProcessId Pid = 0;
    
      static CFPointeeInfo forRecord(bool isConst, const clang::RecordDecl *decl) {
    assert(decl);
    CFPointeeInfo info;
    info.IsValid = true;
    info.IsConst = isConst;
    info.Decl = decl;
    return info;
  }
    
    namespace rj = rapidjson;
    
    #include <iostream>
    
    TEST_F(OptionsConfigParserPluginTests, test_unknown_option) {
  Config c;
  std::map<std::string, std::string> update;
    }
    
      /**
   * @brief Compute the final hash and return it's result
   *
   * @return The final hash value
   */
  std::string digest();
    
      val = getEnvVar('GTEST_OSQUERY');
  EXPECT_FALSE(!val);
  EXPECT_TRUE(val.is_initialized());
  EXPECT_EQ(*val, 'true');
    
    
    {
    {  // Stored query names is a factory method included alongside every query.
  // It will include the set of query names with existing 'previous' results.
  auto names = cf.getStoredQueryNames();
  auto in_vector = std::find(names.begin(), names.end(), 'foobar');
  EXPECT_NE(in_vector, names.end());
}
}

    
      // Test operator lower bounds.
  EXPECT_FALSE(cl2.matches(0));
  EXPECT_FALSE(cl2.matches(1));
    
    
    {  // Set the last-most-recent query as the request, and delete it.
  DistributedQueryRequest request;
  const auto& next = queries.front();
  request.id = next.substr(kDistributedQueryPrefix.size());
  getDatabaseValue(kQueries, next, request.query);
  deleteDatabaseValue(kQueries, next);
  return request;
}
    
    TEST_F(EventsTests, test_fire_event) {
  auto pub = std::make_shared<BasicEventPublisher>();
  pub->setName('BasicPublisher');
  auto status = EventFactory::registerEventPublisher(pub);
  ASSERT_TRUE(status.ok());
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
    
    void IDCT1d(const double* in, int stride, double* out) {
  for (int x = 0; x < 8; ++x) {
    out[x * stride] = 0.0;
    for (int u = 0; u < 8; ++u) {
      out[x * stride] += kDCTMatrix[8 * u + x] * in[u * stride];
    }
  }
}
    
    #include 'guetzli/jpeg_data.h'
    
    #endif  // GUETZLI_JPEG_DATA_H_

    
    // Parses the jpeg stream contained in data[*pos ... len) and fills in *jpg with
// the parsed information.
// If mode is JPEG_READ_HEADER, it fills in only the image dimensions in *jpg.
// Returns false if the data is not valid jpeg, or if it contains an unsupported
// jpeg feature.
bool ReadJpeg(const uint8_t* data, const size_t len, JpegReadMode mode,
              JPEGData* jpg);
// string variant
bool ReadJpeg(const std::string& data, JpegReadMode mode,
              JPEGData* jpg);
    
    void BuildDCHistograms(const JPEGData& jpg, JpegHistogram* histo);
void BuildACHistograms(const JPEGData& jpg, JpegHistogram* histo);
size_t JpegHeaderSize(const JPEGData& jpg, bool strip_metadata);
size_t EstimateJpegDataSize(const int num_components,
                            const std::vector<JpegHistogram>& histograms);