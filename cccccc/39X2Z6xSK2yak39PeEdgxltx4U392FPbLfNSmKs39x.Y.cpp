
        
        namespace api {
    }
    
    PowerMonitor::PowerMonitor(v8::Isolate* isolate) {
#if defined(OS_LINUX)
  SetShutdownHandler(
      base::Bind(&PowerMonitor::ShouldShutdown, base::Unretained(this)));
#elif defined(OS_MACOSX)
  Browser::Get()->SetShutdownHandler(
      base::Bind(&PowerMonitor::ShouldShutdown, base::Unretained(this)));
#endif
  base::PowerMonitor::Get()->AddObserver(this);
  Init(isolate);
#if defined(OS_MACOSX) || defined(OS_WIN)
  InitPlatformSpecificMonitors();
#endif
}
    
    namespace gfx {
class Image;
}
    
      // content::WebContentsObserver implementations:
  void RenderFrameDeleted(content::RenderFrameHost* rfh) override;
  void RenderFrameHostChanged(content::RenderFrameHost* old_rfh,
                              content::RenderFrameHost* new_rfh) override;
  void FrameDeleted(content::RenderFrameHost* rfh) override;
    
    namespace atom {
    }
    
    # if !GTEST_OS_WINDOWS
// Tests that an exit code describes an exit due to termination by a
// given signal.
class GTEST_API_ KilledBySignal {
 public:
  explicit KilledBySignal(int signum);
  bool operator()(int exit_status) const;
 private:
  const int signum_;
};
# endif  // !GTEST_OS_WINDOWS
    
    #if GTEST_OS_SYMBIAN
  // These are needed as the Nokia Symbian Compiler cannot decide between
  // const T& and const T* in a function template. The Nokia compiler _can_
  // decide between class template specializations for T and T*, so a
  // tr1::type_traits-like is_pointer works, and we can overload on that.
  template <typename T>
  inline void StreamHelper(internal::true_type /*is_pointer*/, T* pointer) {
    if (pointer == NULL) {
      *ss_ << '(null)';
    } else {
      *ss_ << pointer;
    }
  }
  template <typename T>
  inline void StreamHelper(internal::false_type /*is_pointer*/,
                           const T& value) {
    // See the comments in Message& operator <<(const T&) above for why
    // we need this using statement.
    using ::operator <<;
    *ss_ << value;
  }
#endif  // GTEST_OS_SYMBIAN
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25>
internal::ValueArray25<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25> Values(T1 v1,
    T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9, T10 v10, T11 v11,
    T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17, T18 v18, T19 v19,
    T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25) {
  return internal::ValueArray25<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25>(v1,
      v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17,
      v18, v19, v20, v21, v22, v23, v24, v25);
}
    
    template <typename T>
internal::ParamGenerator<T> Range(T start, T end) {
  return Range(start, end, 1);
}
    
    #define EXPECT_NONFATAL_FAILURE_ON_ALL_THREADS(statement, substr) \
  do {\
    ::testing::TestPartResultArray gtest_failures;\
    ::testing::internal::SingleFailureChecker gtest_checker(\
        &gtest_failures, ::testing::TestPartResult::kNonFatalFailure, \
        (substr));\
    {\
      ::testing::ScopedFakeTestPartResultReporter gtest_reporter(\
          ::testing::ScopedFakeTestPartResultReporter::INTERCEPT_ALL_THREADS, \
          &gtest_failures);\
      if (::testing::internal::AlwaysTrue()) { statement; }\
    }\
  } while (::testing::internal::AlwaysFalse())
    
    
    {}  // namespace testing
    
      // Many linked_ptr operations may change p.link_ for some linked_ptr
  // variable p in the same circle as this object.  Therefore we need
  // to prevent two such operations from occurring concurrently.
  //
  // Note that different types of linked_ptr objects can coexist in a
  // circle (e.g. linked_ptr<Base>, linked_ptr<Derived1>, and
  // linked_ptr<Derived2>).  Therefore we must use a single mutex to
  // protect all linked_ptr objects.  This can create serious
  // contention in production code, but is acceptable in a testing
  // framework.
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24>
struct Types24 {
  typedef T1 Head;
  typedef Types23<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15,
      T16, T17, T18, T19, T20, T21, T22, T23, T24> Tail;
};
    
    // This event listener monitors how many Water objects are created and
// destroyed by each test, and reports a failure if a test leaks some Water
// objects. It does this by comparing the number of live Water objects at
// the beginning of a test and at the end of a test.
class LeakChecker : public EmptyTestEventListener {
 private:
  // Called before a test starts.
  virtual void OnTestStart(const TestInfo& /* test_info */) {
    initially_allocated_ = Water::allocated();
  }
    }
    
    
    {  EXPECT_EQ(0u, s.Length());
}
    
    
    { private:
  friend class ConfigTests;
  friend class ConfigRefreshRunner;
  friend class FilePathsConfigParserPluginTests;
  friend class FileEventsTableTests;
  friend class DecoratorsConfigParserPluginTests;
  friend class SchedulerTests;
  friend class WatcherTests;
  FRIEND_TEST(ConfigTests, test_config_backup);
  FRIEND_TEST(ConfigTests, test_config_backup_integrate);
  FRIEND_TEST(ConfigTests, test_config_refresh);
  FRIEND_TEST(ConfigTests, test_get_scheduled_queries);
  FRIEND_TEST(ConfigTests, test_nonblacklist_query);
  FRIEND_TEST(OptionsConfigParserPluginTests, test_get_option);
  FRIEND_TEST(ViewsConfigParserPluginTests, test_add_view);
  FRIEND_TEST(ViewsConfigParserPluginTests, test_swap_view);
  FRIEND_TEST(ViewsConfigParserPluginTests, test_update_view);
  FRIEND_TEST(OptionsConfigParserPluginTests, test_unknown_option);
  FRIEND_TEST(OptionsConfigParserPluginTests, test_json_option);
  FRIEND_TEST(EventsConfigParserPluginTests, test_get_event);
  FRIEND_TEST(PacksTests, test_discovery_cache);
  FRIEND_TEST(PacksTests, test_multi_pack);
  FRIEND_TEST(SchedulerTests, test_monitor);
  FRIEND_TEST(SchedulerTests, test_config_results_purge);
  FRIEND_TEST(EventsTests, test_event_subscriber_configure);
  FRIEND_TEST(TLSConfigTests, test_retrieve_config);
  FRIEND_TEST(TLSConfigTests, test_runner_and_scheduler);
};
    
    /// Enforce specific types of decoration.
enum DecorationPoint {
  DECORATE_LOAD,
  DECORATE_ALWAYS,
  DECORATE_INTERVAL,
};
    
    /// Root key to retrieve Kafka topic configurations.
extern const std::string kKafkaTopicParserRootKey;
    
    Status OptionsConfigParserPlugin::update(const std::string& source,
                                         const ParserConfig& config) {
  auto co = config.find('options');
  if (co == config.end()) {
    return Status();
  }
    }
    
    // You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you are new to dear imgui, read examples/README.txt and read the documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui
    
    
    {        D3DCompile(pixelShader, strlen(pixelShader), NULL, NULL, NULL, 'main', 'ps_5_0', 0, 0, &g_pPixelShaderBlob, NULL);
        if (g_pPixelShaderBlob == NULL)  // NB: Pass ID3D10Blob* pErrorBlob to D3DCompile() to get error showing in (const char*)pErrorBlob->GetBufferPointer(). Make sure to Release() the blob!
            return false;
        psoDesc.PS = { g_pPixelShaderBlob->GetBufferPointer(), g_pPixelShaderBlob->GetBufferSize() };
    }
    
    
    {
    {
    {
    {                    // Bind texture, Draw
                    glBindTexture(GL_TEXTURE_2D, (GLuint)(intptr_t)pcmd->TextureId);
                    glDrawElements(GL_TRIANGLES, (GLsizei)pcmd->ElemCount, sizeof(ImDrawIdx) == 2 ? GL_UNSIGNED_SHORT : GL_UNSIGNED_INT, idx_buffer_offset);
                }
            }
            idx_buffer_offset += pcmd->ElemCount;
        }
    }
    glDeleteVertexArrays(1, &vao_handle);
    
    // Backup and restore just enough data to be able to use IsItemHovered() on item A after another B in the same window has overwritten the data.
struct ImGuiItemHoveredDataBackup
{
    ImGuiID                 LastItemId;
    ImGuiItemStatusFlags    LastItemStatusFlags;
    ImRect                  LastItemRect;
    ImRect                  LastItemDisplayRect;
    }