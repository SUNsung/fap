
        
        TEST(CSharpEnumValue, PascalCasedPrefixStripping) {
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'FOO__BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'FOO_BAR_BAZ'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'Foo_BarBaz'));
  EXPECT_EQ('Bar', GetEnumValueName('FO_O', 'FOO_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('FOO', 'F_O_O_BAR'));
  EXPECT_EQ('Bar', GetEnumValueName('Foo', 'BAR'));
  EXPECT_EQ('BarBaz', GetEnumValueName('Foo', 'BAR_BAZ'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO'));
  EXPECT_EQ('Foo', GetEnumValueName('Foo', 'FOO___'));
  // Identifiers can't start with digits
  EXPECT_EQ('_2Bar', GetEnumValueName('Foo', 'FOO_2_BAR'));
  EXPECT_EQ('_2', GetEnumValueName('Foo', 'FOO___2'));
}
    
    #include <gtest/gtest.h>
    
    
// Death tests do not work on Windows as of yet.
#ifdef PROTOBUF_HAS_DEATH_TEST
TEST(ObjCHelperDeathTest, TextFormatDecodeData_Failures) {
  TextFormatDecodeData decode_data;
    }
    
    void MapLiteTestUtil::ModifyMapFields(unittest::TestMapLite* message) {
  MapTestUtilImpl::ModifyMapFields<unittest::MapEnumLite,
                                   unittest::MAP_ENUM_FOO_LITE>(message);
}
    
    
    {
    {
    {
    {}  // namespace
}  // namespace internal
}  // namespace protobuf
}  // namespace google

    
    TEST(TemplateUtilTest, TestTemplateTypeEquals) {
  // Check that the TemplateTypeEquals works correctly.
  bool value = false;
    }
    
    // Author: brianolson@google.com (Brian Olson)
//  Based on original Protocol Buffers design by
//  Sanjay Ghemawat, Jeff Dean, and others.
//
// Test program to verify that GzipOutputStream is compatible with command line
// gzip or java.util.zip.GzipOutputStream
//
// Reads data on standard input and writes compressed gzip stream to standard
// output.
    
    using google::protobuf::util::Proto3DataStripper;
    
    DescriptorPool new_pool_;
    
      bool Generate(const FileDescriptor* file,
                        const string& parameter,
                        GeneratorContext* context,
                        string* error) const {
    FileDescriptorProto new_file;
    file->CopyTo(&new_file);
    SchemaGroupStripper::StripFile(file, &new_file);
    }
    
    // Generate destructors.
#include 'ipc/struct_destructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    class Clipboard : public Base {
 public:
  Clipboard(int id,
            const base::WeakPtr<DispatcherHost>& dispatcher_host,
            const base::DictionaryValue& option);
  ~Clipboard() override;
    }
    
    #include 'base/run_loop.h'
#include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/message_loop/message_loop_current.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/render_frame_host.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/render_widget_host_view.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/app_window/app_window.h'
#include 'skia/ext/image_operations.h'
#include 'ui/aura/client/screen_position_client.h'
#include 'ui/aura/window.h'
#include 'ui/aura/window_tree_host.h'
#include 'ui/events/platform/platform_event_source.h'
#include 'ui/views/controls/menu/menu_runner.h'
#include 'ui/views/widget/widget.h'
#include 'ui/views/focus/focus_manager.h'
#include 'vector'
    
    bool NwAppClearAppCacheFunction::RunNWSync(base::ListValue* response, std::string* error) {
  std::string manifest;
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(0, &manifest));
    }
    
      for(auto& data : params->data) {
    if (!reader->Read(data)) {
      *error = reader->error();
      return false;
    }
    response->Append(data.ToValue());
  }
    
    class NwObjCallObjectMethodSyncFunction : public NWSyncExtensionFunction {
 public:
  NwObjCallObjectMethodSyncFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    // Returns the number of misfit blob tops in this word.
int Tesseract::CountMisfitTops(WERD_RES *word_res) {
  int bad_blobs = 0;
  int num_blobs = word_res->rebuild_word->NumBlobs();
  for (int blob_id = 0; blob_id < num_blobs; ++blob_id) {
    TBLOB* blob = word_res->rebuild_word->blobs[blob_id];
    UNICHAR_ID class_id = word_res->best_choice->unichar_id(blob_id);
    if (unicharset.get_isalpha(class_id) || unicharset.get_isdigit(class_id)) {
      int top = blob->bounding_box().top();
      if (top >= INT_FEAT_RANGE)
        top = INT_FEAT_RANGE - 1;
      int min_bottom, max_bottom, min_top, max_top;
      unicharset.get_top_bottom(class_id, &min_bottom, &max_bottom,
                                &min_top, &max_top);
      if (max_top - min_top > kMaxCharTopRange)
        continue;
      bool bad =  top < min_top - x_ht_acceptance_tolerance ||
                  top > max_top + x_ht_acceptance_tolerance;
      if (bad)
        ++bad_blobs;
      if (debug_x_ht_level >= 1) {
        tprintf('Class %s is %s with top %d vs limits of %d->%d, +/-%d\n',
                unicharset.id_to_unichar(class_id),
                bad ? 'Misfit' : 'OK', top, min_top, max_top,
                static_cast<int>(x_ht_acceptance_tolerance));
      }
    }
  }
  return bad_blobs;
}
    
    class LLSQ {
 public:
  LLSQ() {  // constructor
    clear();  // set to zeros
  }
  void clear();  // initialize
    }
    
      // Returns definite 1-1 ambigs for the given unichar id.
  inline const UnicharIdVector *OneToOneDefiniteAmbigs(
      UNICHAR_ID unichar_id) const {
    if (one_to_one_definite_ambigs_.empty()) return nullptr;
    return one_to_one_definite_ambigs_[unichar_id];
  }
    
    #if GTEST_HAS_GLOBAL_WSTRING
  // Converts the given wide string to a narrow string using the UTF-8
  // encoding, and streams the result to this Message object.
  Message& operator <<(const ::wstring& wstr);
#endif  // GTEST_HAS_GLOBAL_WSTRING
    
    # define TYPED_TEST_P(CaseName, TestName) \
  namespace GTEST_CASE_NAMESPACE_(CaseName) { \
  template <typename gtest_TypeParam_> \
  class TestName : public CaseName<gtest_TypeParam_> { \
   private: \
    typedef CaseName<gtest_TypeParam_> TestFixture; \
    typedef gtest_TypeParam_ TypeParam; \
    virtual void TestBody(); \
  }; \
  static bool gtest_##TestName##_defined_ GTEST_ATTRIBUTE_UNUSED_ = \
      GTEST_TYPED_TEST_CASE_P_STATE_(CaseName).AddTestName(\
          __FILE__, __LINE__, #CaseName, #TestName); \
  } \
  template <typename gtest_TypeParam_> \
  void GTEST_CASE_NAMESPACE_(CaseName)::TestName<gtest_TypeParam_>::TestBody()
    
      // Gets the time of the test program start, in ms from the start of the
  // UNIX epoch.
  TimeInMillis start_timestamp() const;
    
    // Helper function for implementing {EXPECT|ASSERT}_PRED4.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3,
          typename T4>
AssertionResult AssertPred4Helper(const char* pred_text,
                                  const char* e1,
                                  const char* e2,
                                  const char* e3,
                                  const char* e4,
                                  Pred pred,
                                  const T1& v1,
                                  const T2& v2,
                                  const T3& v3,
                                  const T4& v4) {
  if (pred(v1, v2, v3, v4)) return AssertionSuccess();
    }
    
      // If input name has a trailing separator character, removes it and returns
  // the name, otherwise return the name string unmodified.
  // On Windows platform, uses \ as the separator, other platforms use /.
  FilePath RemoveTrailingPathSeparator() const;
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40>
class ValueArray40 {
 public:
  ValueArray40(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
      T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
      T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
      T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33,
      T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40) : v1_(v1),
      v2_(v2), v3_(v3), v4_(v4), v5_(v5), v6_(v6), v7_(v7), v8_(v8), v9_(v9),
      v10_(v10), v11_(v11), v12_(v12), v13_(v13), v14_(v14), v15_(v15),
      v16_(v16), v17_(v17), v18_(v18), v19_(v19), v20_(v20), v21_(v21),
      v22_(v22), v23_(v23), v24_(v24), v25_(v25), v26_(v26), v27_(v27),
      v28_(v28), v29_(v29), v30_(v30), v31_(v31), v32_(v32), v33_(v33),
      v34_(v34), v35_(v35), v36_(v36), v37_(v37), v38_(v38), v39_(v39),
      v40_(v40) {}
    }
    
    
    {                unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumSequences() });
            }
            else if (!sampleDynamicAxes.empty())
                LogicError('A PackedValue object that does not have a layout cannot have any dynamic axes.');
    
    #define DATAREADER_LOCAL
#include 'Basics.h'
#include 'DataReader.h'
#include 'Config.h'
#include 'ScriptableObjects.h'
#include <string>
    
    
    {  try {
    return std::stol(iso1.substr(pos1 + 1), nullptr, 10) -
           std::stol(iso2.substr(pos2 + 1), nullptr, 10);
  } catch (std::out_of_range& e) {
    VLOG(1) << 'Failed to parse nano seconds in: ' << iso1 << ' and ' << iso2;
    return 0L;
  }
}
    
    namespace fs = boost::filesystem;
    
    TEST_F(CarverTests, test_compression_decompression) {
  auto const test_data_file = getWorkingDir() / 'test.data';
  writeTextFile(test_data_file, R'raw_text(
2TItVMSvAY8OFlbYnx1O1NSsuehfNhNiV4Qw4IPP6exA47HVzAlEXZI3blanlAd2
JSxCUr+3boxWMwsgW2jJPzypSKvfXB9EDbFKiDjVueniBfiAepwta57pZ9tQDnJA
uRioApcqYSWL14OJrnPQFHel5FpXylmVdIkiz()cT82JsOPZmh56vDn62Kk/mU7V
RltGAYEpKmi8e71fuB8d/S6Lau{}AmL1153X7E+4d1G1UfiQa7Q02uVjxLLE5FEj
JTDjVqIQNhi50Pt4J4RVopYzy1AZGwPHLhwFVIPH0s/LmzVW+xbT8/V2UMSzK4XB
oqADd9Ckcdtplx3k7bcLU[U04j8WWUtUccmB+4e2KS]i3x7WDKviPY/sWy9xFapv
)raw_text');
  {
    auto s = osquery::compress(test_data_file,
                               getWorkingDir() / fs::path('test.zst'));
    ASSERT_TRUE(s.ok()) << s.what();
  }
  {
    auto s =
        osquery::decompress(getWorkingDir() / fs::path('test.zst'),
                            getWorkingDir() / fs::path('test.data.extract'));
    ASSERT_TRUE(s.ok()) << s.what();
  }
    }
    
    // An intermediate boolean to check parser updates.
bool TestConfigParserPlugin::update_called = false;
    
    template <typename StorageType>
Expected<StorageType, DatabaseError> InMemoryStorage<StorageType>::get(
    const std::string& key) const {
  auto iter = storage_.find(key);
  if (iter != storage_.end()) {
    return iter->second;
  }
  return createError(DatabaseError::KeyNotFound)
         << 'Can't find value for key ' << key;
}
    
    ExpectedSuccess<DatabaseError> RocksdbDatabase::putInt32(
    const std::string& domain, const std::string& key, const int32_t value) {
  int32_t tmp_value = htonl(value);
  uint16_t tag = htons(kIntTag);
  std::string buffer;
  buffer.reserve(sizeof(int32_t) + sizeof(int8_t));
  buffer.append(reinterpret_cast<const char*>(&tmp_value), 4);
  buffer.append(reinterpret_cast<const char*>(&tag), 2);
  return putString(domain, key, buffer);
}
    
      /**
   * @brief See the usesLogStatus method, log a Glog status.
   *
   * @param log A vector of parsed Glog log lines.
   * @return Status non-op indicating success or failure.
   */
  virtual Status logStatus(const std::vector<StatusLogLine>& log) {
    (void)log;
    return Status(1, 'Not enabled');
  }
    
    #include <adapters/qt.h>
    
        char *key;
    int data;
    
    static int thread_onTask(swThreadPool *pool, void *task, int task_len)
{
    sw_atomic_long_t *n = (sw_atomic_long_t *) task;
    sw_atomic_fetch_add(n, 1);
    if (*n == N - 1)
    {
        write(_pipe, (void*) n, sizeof(long));
    }
    return SW_OK;
}
    
        _do_recvfrom:
    ret = recvfrom(
        fd, pkt->data, SwooleTG.buffer_stack->size - sizeof(*pkt), 0,
        (struct sockaddr *) &pkt->info.addr, &pkt->info.len
    );