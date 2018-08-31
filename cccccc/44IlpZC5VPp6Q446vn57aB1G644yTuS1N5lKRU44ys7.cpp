
        
        void App::SetProxyConfig(content::RenderProcessHost* render_process_host,
                         const std::string& proxy_config) {
  net::ProxyConfig config;
  config.proxy_rules().ParseFromString(proxy_config);
  net::URLRequestContextGetter* context_getter =
    render_process_host->GetBrowserContext()->
    GetRequestContextForRenderProcess(render_process_host->GetID());
    }
    
    #include 'base/values.h'
#include 'base/strings/utf_string_conversions.h'
#include 'base/strings/string16.h'
#include 'content/nw/src/api/dispatcher_host.h'
#include 'ui/base/clipboard/clipboard.h'
    
    
    {
    {    if (zoom_controller) {
      double zoom_factor = content::ZoomLevelToZoomFactor(zoom_controller->GetZoomLevel());
      if (zoom_factor > content::kMaximumZoomFactor) {
        zoom_factor = content::kMaximumZoomFactor;
      }
      if (zoom_factor < content::kMinimumZoomFactor) {
        zoom_factor = content::kMinimumZoomFactor;
      }
      x *= zoom_factor;
      y *= zoom_factor;
    }
    
    Popup(x, y, rvh);
  } else if (method == 'EnableShowEvent') {
    arguments.GetBoolean(0, &enable_show_event_);
  } else {
    NOTREACHED() << 'Invalid call to Menu method:' << method
                 << ' arguments:' << arguments;
  }
}
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_enabled_;
}
    
    
    {  gtk_widget_show(menu_);
  g_object_ref_sink(G_OBJECT(menu_));
}
    
    void Menu::RemoveKeys() {
  if (!focus_manager_) return;
    }
    
    namespace nw {
    }
    
        std::string error() const {
      return error_;
    }
    
    #include <vector>
    
    class NwObjCallObjectMethodAsyncFunction : public UIThreadExtensionFunction {
 public:
  NwObjCallObjectMethodAsyncFunction();
    }
    
      // Streams a pointer value to this object.
  //
  // This function is an overload of the previous one.  When you
  // stream a pointer to a Message, this definition will be used as it
  // is more specialized.  (The C++ Standard, section
  // [temp.func.order].)  If you stream a non-pointer, then the
  // previous definition will be used.
  //
  // The reason for this overload is that streaming a NULL pointer to
  // ostream is undefined behavior.  Depending on the compiler, you
  // may get '0', '(nil)', '(null)', or an access violation.  To
  // ensure consistent result across compilers, we always treat NULL
  // as '(null)'.
  template <typename T>
  inline Message& operator <<(T* const& pointer) {  // NOLINT
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
    return *this;
  }
#endif  // GTEST_OS_SYMBIAN
    
    // This macro is for implementing ASSERT_DEATH*, EXPECT_DEATH*,
// ASSERT_EXIT*, and EXPECT_EXIT*.
# define GTEST_DEATH_TEST_(statement, predicate, regex, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    const ::testing::internal::RE& gtest_regex = (regex); \
    ::testing::internal::DeathTest* gtest_dt; \
    if (!::testing::internal::DeathTest::Create(#statement, &gtest_regex, \
        __FILE__, __LINE__, &gtest_dt)) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__); \
    } \
    if (gtest_dt != NULL) { \
      ::testing::internal::scoped_ptr< ::testing::internal::DeathTest> \
          gtest_dt_ptr(gtest_dt); \
      switch (gtest_dt->AssumeRole()) { \
        case ::testing::internal::DeathTest::OVERSEE_TEST: \
          if (!gtest_dt->Passed(predicate(gtest_dt->Wait()))) { \
            goto GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__); \
          } \
          break; \
        case ::testing::internal::DeathTest::EXECUTE_TEST: { \
          ::testing::internal::DeathTest::ReturnSentinel \
              gtest_sentinel(gtest_dt); \
          GTEST_EXECUTE_DEATH_TEST_STATEMENT_(statement, gtest_dt); \
          gtest_dt->Abort(::testing::internal::DeathTest::TEST_DID_NOT_DIE); \
          break; \
        } \
        default: \
          break; \
      } \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_, __LINE__): \
      fail(::testing::internal::DeathTest::LastMessage())
// The symbol 'fail' here expands to something into which a message
// can be streamed.
    
      // No implementation - assignment is unsupported.
  void operator=(const CartesianProductGenerator10& other);
    
      GTEST_DECLARE_TUPLE_AS_FRIEND_
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15,
    GTEST_TEMPLATE_ T16, GTEST_TEMPLATE_ T17, GTEST_TEMPLATE_ T18,
    GTEST_TEMPLATE_ T19, GTEST_TEMPLATE_ T20, GTEST_TEMPLATE_ T21,
    GTEST_TEMPLATE_ T22, GTEST_TEMPLATE_ T23, GTEST_TEMPLATE_ T24,
    GTEST_TEMPLATE_ T25, GTEST_TEMPLATE_ T26, GTEST_TEMPLATE_ T27,
    GTEST_TEMPLATE_ T28, GTEST_TEMPLATE_ T29, GTEST_TEMPLATE_ T30,
    GTEST_TEMPLATE_ T31, GTEST_TEMPLATE_ T32, GTEST_TEMPLATE_ T33,
    GTEST_TEMPLATE_ T34, GTEST_TEMPLATE_ T35, GTEST_TEMPLATE_ T36,
    GTEST_TEMPLATE_ T37, GTEST_TEMPLATE_ T38, GTEST_TEMPLATE_ T39,
    GTEST_TEMPLATE_ T40, GTEST_TEMPLATE_ T41, GTEST_TEMPLATE_ T42,
    GTEST_TEMPLATE_ T43, GTEST_TEMPLATE_ T44, GTEST_TEMPLATE_ T45,
    GTEST_TEMPLATE_ T46, GTEST_TEMPLATE_ T47>
struct Templates47 {
  typedef TemplateSel<T1> Head;
  typedef Templates46<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
      T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42,
      T43, T44, T45, T46, T47> Tail;
};
    
    // We don't want to require the users to write TypesN<...> directly,
// as that would require them to count the length.  Types<...> is much
// easier to write, but generates horrible messages when there is a
// compiler error, as gcc insists on printing out each template
// argument, even if it has the default value (this means Types<int>
// will appear as Types<int, None, None, ..., None> in the compiler
// errors).
//
// Our solution is to combine the best part of the two approaches: a
// user would write Types<T1, ..., TN>, and Google Test will translate
// that to TypesN<T1, ..., TN> internally to make error messages
// readable.  The translation is done by the 'type' member of the
// Types template.
    
    
    {    return element;
  }
    
    namespace tesseract {
double DotProductAVX(const double* u, const double* v, int n) {
  fprintf(stderr, 'DotProductAVX can't be used on Android\n');
  abort();
}
}  // namespace tesseract
    
     protected:
  // Function to compute part of a matrix.vector multiplication. The weights
  // are in a very specific order (see above) in w, which is multiplied by
  // u of length num_in, to produce output v after scaling the integer results
  // by the corresponding member of scales.
  // The amount of w and scales consumed is fixed and not available to the
  // caller. The number of outputs written to v will be at most num_out.
  typedef void (*PartialFunc)(const int8_t* w, const double* scales,
                              const int8_t* u, int num_in, int num_out,
                              double* v);
    
    IntSimdMatrixAVX2::IntSimdMatrixAVX2() {
#ifdef __AVX2__
  num_outputs_per_register_ = kNumOutputsPerRegister;
  max_output_registers_ = kMaxOutputRegisters;
  num_inputs_per_register_ = kNumInputsPerRegister;
  num_inputs_per_group_ = kNumInputsPerGroup;
  num_input_groups_ = kNumInputGroups;
  partial_funcs_ = {PartialMatrixDotVector64, PartialMatrixDotVector32,
                    PartialMatrixDotVector16, PartialMatrixDotVector8};
#endif  // __AVX2__
}
    
    // If true, then AVX has been detected.
bool SIMDDetect::avx_available_;
bool SIMDDetect::avx2_available_;
bool SIMDDetect::avx512F_available_;
bool SIMDDetect::avx512BW_available_;
// If true, then SSe4.1 has been detected.
bool SIMDDetect::sse_available_;
    
      word_crunchable = !crunch_leave_accept_strings ||
                    word->reject_map.length() < 3 ||
                    (acceptable_word_string(*word->uch_set,
                                            str, lengths) == AC_UNACCEPTABLE &&
                     !ok_dict_word);
    
    // Returns the pointer to the string with blamer information for this word.
// Assumes that the word's blamer_bundle is not nullptr.
const char *LTRResultIterator::GetBlamerDebug() const {
  return it_->word()->blamer_bundle->debug().string();
}
    
    
    {  // Return access to Tesseract internals.
  const PAGE_RES_IT *PageResIt() const { return it_; }
};
    
    bool PageIterator::IsWithinFirstTextlineOfParagraph() const {
  PageIterator p_start(*this);
  p_start.RestartParagraph();
  return p_start.it_->row() == it_->row();
}
    
    namespace tesseract {
  class BoolParam;
  class DoubleParam;
  class IntParam;
  class StringParam;
  class Tesseract;
}
    
    
    {        Clear();
    }
    
        template <typename ElementType>
    void Value::CopyVariableValueToVector(const Variable& outputVariable, std::vector<std::vector<size_t>>& sequences)
    {
        if (outputVariable.Shape()[0] != outputVariable.Shape().TotalSize())
            InvalidArgument('For sparse data, the outputVariable's leading axis dimensionality (%zu) must equal the total size (%zu) of the Variable '%S'.',
                            outputVariable.Shape()[0], outputVariable.Shape().TotalSize(), outputVariable.AsString().c_str());
    }
    
    
    {        assert(m_dataFields->m_value != nullptr);
        return m_dataFields->m_value;
    }
    
    
    {REGISTER_INTERNAL(KafkaTopicsConfigParserPlugin,
                  'config_parser',
                  'kafka_topics');
} // namespace osquery

    
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
    
    
    {  // Use the Query retrieval API to check the now 'previous' result.
  QueryDataSet previous_qd;
  auto cf = Query('foobar', query);
  status = cf.getPreviousQueryResults(previous_qd);
  EXPECT_TRUE(status.ok());
}
    
      auto sc2 = sub->createSubscriptionContext();
  sc2->path = kFakeDirectory + '/**';
  sub->subscribe(&TestINotifyEventSubscriber::Callback, sc2);
  pub->configure();
    
    
    {  status = EventFactory::deregisterEventPublisher(basic_publisher_type);
  EXPECT_TRUE(status.ok());
}
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
        /** Initializes a Catmull Rom config with a capacity hint.
     *
     * @js NA
     * @param capacity The size of the array.
     * @return True.
     */
    bool initWithCapacity(ssize_t capacity);
    
    void ActionEase::startWithTarget(Node *target)
{
    if (target && _inner)
    {
        ActionInterval::startWithTarget(target);
        _inner->startWithTarget(_target);
    }
    else
    {
        log('ActionEase::startWithTarget error: target or _inner is nullptr!');
    }
}
    
    
    {        return true;
    }
    
    
    {    for (i = 0; i < (_gridSize.width+1); ++i)
    {
        for (j = 0; j < (_gridSize.height+1); ++j)
        {
            Vec3 v = getOriginalVertex(Vec2(i, j));
            Vec2 vect = _position - Vec2(v.x,v.y);
            float r = vect.getLength();
            
            if (r < _radius)
            {
                r = _radius - r;
                float rate = powf(r / _radius, 2);
                v.z += (sinf( time*(float)M_PI * _waves * 2 + r * 0.1f) * _amplitude * _amplitudeRate * rate);
            }
            
            setVertex(Vec2(i, j), v);
        }
    }
}
    
        // Overrides
    virtual Liquid* clone() const override;
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    Liquid() {}
    virtual ~Liquid() {}
    
    /**
    @brief Initializes the action with amplitude, grid size, waves count and duration.
    @param duration Specify the duration of the Liquid action. It's a value in seconds.
    @param gridSize Specify the size of the grid.
    @param waves Specify the waves count of the Liquid action.
    @param amplitude Specify the amplitude of the Liquid action.
    @return If the initialization success, return true; otherwise, return false.
    */
    bool initWithDuration(float duration, const Size& gridSize, unsigned int waves, float amplitude);
    
    PageTurn3D* PageTurn3D::create(float duration, const Size& gridSize)
{
    PageTurn3D *action = new (std::nothrow) PageTurn3D();
    }
    
    /** Singleton that manages the Animations.
It saves in a cache the animations. You should use this class if you want to save your animations in a cache.