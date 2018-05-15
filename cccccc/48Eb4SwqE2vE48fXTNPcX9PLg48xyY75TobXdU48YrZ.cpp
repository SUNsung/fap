
        
        #ifndef CONTENT_NW_SRC_API_APP_APP_H_
#define CONTENT_NW_SRC_API_APP_APP_H_
    
    namespace base {
class DictionaryValue;
class ListValue;
}
    
    v8::Handle<v8::Value> CallObjectMethod(int routing_id,
                                       int object_id,
                                       const std::string& type,
                                       const std::string& method,
                                       v8::Handle<v8::Value> args) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  scoped_ptr<V8ValueConverter> converter(V8ValueConverter::create());
    }
    
    namespace content {
class RenderView;
}
    
    
    {  gtk_menu_popup(GTK_MENU(menu_), NULL, NULL,
                 PointMenuPositionFunc, &point,
                 3, triggering_event_time);
}
    
    aura::Window* Menu::GetActiveNativeView(content::RenderFrameHost* rfh) {
  content::WebContents* web_contents =
    content::WebContents::FromRenderFrameHost(rfh);
  if (!web_contents) {
    LOG(ERROR) << 'Menu: couldn't find WebContents';
    return NULL;
  }
  return web_contents->GetFullscreenRenderWidgetHostView()
             ? web_contents->GetFullscreenRenderWidgetHostView()
                   ->GetNativeView()
             : web_contents->GetNativeView();
}
    
    #include 'base/logging.h'
#include 'base/strings/string_util.h'
#include 'base/values.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menu/menu.h'
    
    
    {  // ExtensionFunction:
  bool RunAsync() override;
  DECLARE_EXTENSION_FUNCTION('nw.App.crashBrowser', UNKNOWN)
};
    
          if (data.type == TYPE_PNG &&
         !gfx::PNGCodec::EncodeBGRASkBitmap(bitmap, false, &encoded_image)) {
        LOG(INFO) << 'NwClipboardGetSyncFunction::RunSync(' << nwapi::nw__clipboard::ToString(data.type) << ') failed when converting to PNG';
        error_ = 'Failed to encode as PNG';
        return false;
      } else if (data.type == TYPE_JPEG &&
                 !gfx::JPEGCodec::Encode(bitmap, kQuality, &encoded_image)) {
        LOG(INFO) << 'NwClipboardGetSyncFunction::RunSync(' << nwapi::nw__clipboard::ToString(data.type) << ') failed when converting to JPEG';
        error_ = 'Failed to encode as JPEG';
        return false;
      }
    
      for (const auto& iter : line_exports) {
    Row r;
    r['share'] = iter;
    r['readonly'] = (readonly) ? '1' : '0';
    }
    
    const std::string kKernelSyscallAddrModifiedPath = '/sys/kernel/camb/syscall_addr_modified';
const std::string kKernelTextHashPath = '/sys/kernel/camb/text_segment_hash';
    
    /**
 * @brief A utility class which is used to express the state of operations.
 *
 * @code{.cpp}
 *   osquery::Status foobar() {
 *     auto na = doSomeWork();
 *     if (na->itWorked()) {
 *       return osquery::Status(0, 'OK');
 *     } else {
 *       return osquery::Status(1, na->getErrorString());
 *     }
 *   }
 * @endcode
 */
class Status {
 public:
  /**
   * @brief Default constructor
   *
   * Note that the default constructor initialized an osquery::Status instance
   * to a state such that a successful operation is indicated.
   */
  explicit Status(int c = 0) : code_(c), message_('OK') {}
    }
    
        size_t length = 0;
    void *e = NULL;
    switch (*(int *)data) {
    case 0:
      e = osquery_cqueue_reserve(
          &osquery.cqueue, OSQUERY_TEST_EVENT_0, sizeof(test_event_0_data_t));
      length = 4096;
      break;
    case 1:
      e = osquery_cqueue_reserve(
          &osquery.cqueue, OSQUERY_TEST_EVENT_1, sizeof(test_event_1_data_t));
      length = 33;
      break;
    default:
      return -ENOTTY;
    }
    if (!e) {
      return -EINVAL;
    }
    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }
    
    class TLSConfigPlugin;
    
    #include <iomanip>
    
    
    {  EXPECT_EQ(flag_info.type, 'string');
  EXPECT_EQ(flag_info.description, 'TEST DESCRIPTION');
  EXPECT_EQ(flag_info.default_value, 'TEST STRING');
  EXPECT_EQ(flag_info.value, 'NEW TEST STRING');
  EXPECT_EQ(flag_info.detail.shell, false);
  EXPECT_EQ(flag_info.detail.external, false);
}
    
    TEST_F(StatusTests, test_constructor_2) {
  Status s;
  EXPECT_EQ(s.getCode(), 0);
  EXPECT_EQ(s.getMessage(), 'OK');
}
    
    namespace xgboost {
ConsoleLogger::~ConsoleLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
TrackerLogger::~TrackerLogger() {
  dmlc::CustomLogMessage::Log(log_stream_.str());
}
}  // namespace xgboost
    
    namespace xgboost {
namespace common {
TEST(CompressedIterator, Test) {
  ASSERT_TRUE(detail::SymbolBits(256) == 8);
  ASSERT_TRUE(detail::SymbolBits(150) == 8);
  std::vector<int> test_cases = {1, 3, 426, 21, 64, 256, 100000, INT32_MAX};
  int num_elements = 1000;
  int repetitions = 1000;
  srand(9);
    }
    }
    }
    
    #endif  // XGBOOST_OBJECTIVE_REGRESSION_LOSS_H_

    
    TEST(Metric, AUCPR) {
  xgboost::Metric *metric = xgboost::Metric::Create('aucpr');
  ASSERT_STREQ(metric->Name(), 'aucpr');
  EXPECT_NEAR(GetMetricEval(metric, {0, 0, 1, 1}, {0, 0, 1, 1}), 1, 1e-10);
  EXPECT_NEAR(GetMetricEval(metric, {0.1f, 0.9f, 0.1f, 0.9f}, {0, 0, 1, 1}),
              0.5f, 0.001f);
  EXPECT_NEAR(
      GetMetricEval(metric,
                    {0.4f, 0.2f, 0.9f, 0.1f, 0.2f, 0.4f, 0.1f, 0.1f, 0.2f, 0.1f},
                    {0, 0, 0, 0, 0, 1, 0, 0, 1, 1}),
      0.2908445f, 0.001f);
  EXPECT_NEAR(GetMetricEval(
                  metric, {0.87f, 0.31f, 0.40f, 0.42f, 0.25f, 0.66f, 0.95f,
                           0.09f, 0.10f, 0.97f, 0.76f, 0.69f, 0.15f, 0.20f,
                           0.30f, 0.14f, 0.07f, 0.58f, 0.61f, 0.08f},
                  {0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1}),
              0.2769199f, 0.001f);
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 1}, {}));
  EXPECT_ANY_THROW(GetMetricEval(metric, {0, 0}, {0, 0}));
}