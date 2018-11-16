
        
          // Quit the whole app.
  static void Quit(content::RenderProcessHost* rph = NULL);
    
    EventListener::EventListener(int id,
  const base::WeakPtr<DispatcherHost>& dispatcher_host,
  const base::DictionaryValue& option) : Base(id, dispatcher_host, option) {
    }
    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    
    {
} // namespace extensions

    
     protected:
  ~NwAppGetArgvSyncFunction() override;
    
    #include <vector>
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    namespace extensions {
    }
    
      NwScreenStartMonitorFunction::NwScreenStartMonitorFunction() {}
    
    #include <dmlc/base.h>
#include <dmlc/omp.h>
#include <cmath>
#include <iostream>
    
    
    {  /*!
   * \brief Create a linear updater given name
   * \param name Name of the linear updater.
   */
  static LinearUpdater* Create(const std::string& name);
};
    
    
    {    inline size_t Size() const {
      return end - begin;
    }
  };
  /* \brief specifies how to split a rowset into two */
  struct Split {
    std::vector<size_t> left;
    std::vector<size_t> right;
  };
    
    // logistic loss for probability regression task
struct LogisticRegression {
  // duplication is necessary, as __device__ specifier
  // cannot be made conditional on template parameter
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return common::Sigmoid(x); }
  XGBOOST_DEVICE static bool CheckLabel(bst_float x) { return x >= 0.0f && x <= 1.0f; }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    return predt - label;
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    const float eps = 1e-16f;
    return fmaxf(predt * (1.0f - predt), eps);
  }
  template <typename T>
  static T PredTransform(T x) { return common::Sigmoid(x); }
  template <typename T>
  static T FirstOrderGradient(T predt, T label) { return predt - label; }
  template <typename T>
  static T SecondOrderGradient(T predt, T label) {
    const T eps = T(1e-16f);
    return std::max(predt * (T(1.0f) - predt), eps);
  }
  static bst_float ProbToMargin(bst_float base_score) {
    CHECK(base_score > 0.0f && base_score < 1.0f)
      << 'base_score must be in (0,1) for logistic loss';
    return -logf(1.0f / base_score - 1.0f);
  }
  static const char* LabelErrorMsg() {
    return 'label must be in [0,1] for logistic regression';
  }
  static const char* DefaultEvalMetric() { return 'rmse'; }
};
    
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
    
    #include <osquery/config.h>
    
      auto it = doc.FindMember(kLoggerKey);
  if (it != doc.MemberEnd()) {
    doc.EraseMember(it);
  }
    
      Status update(const std::string& source, const ParserConfig& config) override;
    
    Status PrometheusMetricsConfigParserPlugin::update(const std::string& source,
                                                   const ParserConfig& config) {
  auto prometheus_targets = config.find(kPrometheusParserRootKey);
  if (prometheus_targets != config.end()) {
    auto obj = data_.getObject();
    data_.copyFrom(prometheus_targets->second.doc(), obj);
    data_.add(kPrometheusParserRootKey, obj);
  }
    }
    
      // Retrieve a basic events parser.
  auto plugin = Config::get().getParser('events');
  EXPECT_TRUE(plugin != nullptr);
  const auto& data = plugin->getData();
    
    Status ViewsConfigParserPlugin::update(const std::string& source,
                                       const ParserConfig& config) {
  auto cv = config.find('views');
  if (cv == config.end()) {
    return Status(1);
  }
    }
    
      fpack.platform_ = 'posix';
  if (isPlatform(PlatformType::TYPE_POSIX) ||
      isPlatform(PlatformType::TYPE_LINUX) ||
      isPlatform(PlatformType::TYPE_OSX) ||
      isPlatform(PlatformType::TYPE_FREEBSD)) {
    EXPECT_TRUE(fpack.checkPlatform());
  }
    
    namespace osquery {
    }
    
    TEST_F(QueryTests, test_add_and_get_current_results) {
  // Test adding a 'current' set of results to a scheduled query instance.
  auto query = getOsqueryScheduledQuery();
  auto cf = Query('foobar', query);
  uint64_t counter = 128;
  auto status = cf.addNewResults(getTestDBExpectedResults(), 0, counter);
  EXPECT_TRUE(status.ok());
  EXPECT_EQ(status.toString(), 'OK');
  EXPECT_EQ(counter, 0UL);
    }
    
    Status INotifyEventPublisher::setUp() {
  inotify_handle_ = ::inotify_init();
  // If this does not work throw an exception.
  if (inotify_handle_ == -1) {
    return Status(1, 'Could not start inotify: inotify_init failed');
  }
    }
    
    
    { protected:
  Row row_;
};
    
    /**
 *@brief Base class for Camera actions.
 *@ingroup Actions
 */
class CC_DLL ActionCamera : public ActionInterval
{
public:
    /**
     * @js ctor
     * @lua new
     */
    ActionCamera();
    /**
     * @js NA
     * @lua NA
     */
    virtual ~ActionCamera(){};
    }
    
    EaseBezierAction* EaseBezierAction::reverse() const
{
    EaseBezierAction* reverseAction = EaseBezierAction::create(_inner->reverse());
    reverseAction->setBezierParamer(_p3,_p2,_p1,_p0);
    return reverseAction;
}
    
    AccelDeccelAmplitude* AccelDeccelAmplitude::clone() const
{
    // no copy constructor
    if (_other)
        return AccelDeccelAmplitude::create(_other->clone(), _rate);
    
    return nullptr;
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    void ActionManager::removeAllActions()
{
    for (tHashElement *element = _targets; element != nullptr; )
    {
        auto target = element->target;
        element = (tHashElement*)element->hh.next;
        removeAllActionsFromTarget(target);
    }
}
    
                // Y
            coords.bl.y += ( rand() % (_randrange*2) ) - _randrange;
            coords.br.y += ( rand() % (_randrange*2) ) - _randrange;
            coords.tl.y += ( rand() % (_randrange*2) ) - _randrange;
            coords.tr.y += ( rand() % (_randrange*2) ) - _randrange;
    
    
    {// end of sprite_nodes group
/// @}
    
    void AnimationCache::parseVersion1(const ValueMap& animations)
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    }
    
    
    /**
     * set the data to be a pointer to a triangles
     * the member verts will not be released when this PolygonInfo destructs
     * as the verts memory are managed by other objects
     * @param triangles  a pointer to the TrianglesCommand::Triangles object
     */
    void setTriangles(const TrianglesCommand::Triangles& triangles);