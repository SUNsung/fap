
        
         protected:
  // content::ContentClient:
  std::string GetProduct() const override;
  std::string GetUserAgent() const override;
  base::string16 GetLocalizedString(int message_id) const override;
  void AddAdditionalSchemes(Schemes* schemes) override;
  void AddPepperPlugins(
      std::vector<content::PepperPluginInfo>* plugins) override;
  void AddContentDecryptionModules(
      std::vector<content::CdmInfo>* cdms,
      std::vector<media::CdmHostFilePath>* cdm_host_file_paths) override;
    
    
    {  std::move(self->tasks_[timer]).Run();
  self->tasks_.erase(timer);
  uv_timer_stop(timer);
  uv_close(reinterpret_cast<uv_handle_t*>(timer), UvTaskRunner::OnClose);
}
    
    class AutoUpdater : public mate::EventEmitter<AutoUpdater>,
                    public auto_updater::Delegate,
                    public WindowListObserver {
 public:
  static mate::Handle<AutoUpdater> Create(v8::Isolate* isolate);
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(GlobalShortcut);
};
    
      URLRequest::SetConstructor(isolate, base::Bind(URLRequest::New));
    
    // Tell browser to allocate a new object.
// function AllocateObject(id, name, options);
v8::Handle<v8::Value> AllocateObject(int routing_id,
                                     int object_id,
                                     const std::string& type,
                                     v8::Handle<v8::Value> options);
    
    #include 'content/nw/src/api/clipboard/clipboard.h'
    
    
    {} // namespace nwapi

    
    
    {  *y = CalculateMenuYPosition(&screen_rect, &menu_req, NULL, *y);
}
    
    class NwAppCrashBrowserFunction : public UIThreadExtensionFunction {
 public:
  NwAppCrashBrowserFunction() {}
    }
    
    #include 'chrome/browser/devtools/devtools_window.h'
#include 'chrome/browser/extensions/devtools_util.h'
#include 'chrome/browser/extensions/extension_service.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/public/browser/render_view_host.h'
#include 'content/public/browser/web_contents.h'
#include 'extensions/browser/extension_system.h'
#include 'extensions/common/error_utils.h'
    
     protected:
  ~NwObjAllocateIdFunction() override;
    
      // implement nw.Screen.getScreens()
  class NwScreenGetScreensFunction: public NWSyncExtensionFunction {
    public:
      NwScreenGetScreensFunction();
      bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    
    {  if (s.ok() && meta->file_size > 0) {
    // Keep it
  } else {
    env->DeleteFile(fname);
  }
  return s;
}
    
    
    {  int Compare(const InternalKey& a, const InternalKey& b) const;
};
    
    // Return the name of a temporary file owned by the db named 'dbname'.
// The result will be prefixed with 'dbname'.
std::string TempFileName(const std::string& dbname, uint64_t number);
    
      class StringSource : public SequentialFile {
   public:
    Slice contents_;
    bool force_error_;
    bool returned_partial_;
    StringSource() : force_error_(false), returned_partial_(false) { }
    }
    
      // Create a writer that will append data to '*dest'.
  // '*dest' must have initial length 'dest_length'.
  // '*dest' must remain live while this Writer is in use.
  Writer(WritableFile* dest, uint64_t dest_length);
    
    TEST(RecoveryTest, LogFileReuse) {
  if (!CanAppend()) {
    fprintf(stderr, 'skipping test because env does not support appending\n');
    return;
  }
  for (int i = 0; i < 2; i++) {
    ASSERT_OK(Put('foo', 'bar'));
    if (i == 0) {
      // Compact to ensure current log is empty
      CompactMemTable();
    }
    Close();
    ASSERT_EQ(1, NumLogs());
    uint64_t number = FirstLogFile();
    if (i == 0) {
      ASSERT_EQ(0, FileSize(LogName(number)));
    } else {
      ASSERT_LT(0, FileSize(LogName(number)));
    }
    Open();
    ASSERT_EQ(1, NumLogs());
    ASSERT_EQ(number, FirstLogFile()) << 'did not reuse log file';
    ASSERT_EQ('bar', Get('foo'));
    Open();
    ASSERT_EQ(1, NumLogs());
    ASSERT_EQ(number, FirstLogFile()) << 'did not reuse log file';
    ASSERT_EQ('bar', Get('foo'));
  }
}
    
        // Create builder.
    std::string copy = TableFileName(dbname_, next_file_number_++);
    WritableFile* file;
    Status s = env_->NewWritableFile(copy, &file);
    if (!s.ok()) {
      return;
    }
    TableBuilder* builder = new TableBuilder(options_, file);
    
    static void RunConcurrent(int run) {
  const int seed = test::RandomSeed() + (run * 100);
  Random rnd(seed);
  const int N = 1000;
  const int kSize = 1000;
  for (int i = 0; i < N; i++) {
    if ((i % 100) == 0) {
      fprintf(stderr, 'Run %d of %d\n', i, N);
    }
    TestState state(seed + 1);
    Env::Default()->Schedule(ConcurrentReader, &state);
    state.Wait(TestState::RUNNING);
    for (int i = 0; i < kSize; i++) {
      state.t_.WriteStep(&rnd);
    }
    state.quit_flag_.Release_Store(&state);  // Any non-null arg will do
    state.Wait(TestState::DONE);
  }
}
    
    // Synchronous transmission of CAN messages
ErrorCode EsdCanClient::Send(const std::vector<CanFrame> &frames,
                             int32_t *const frame_num) {
  CHECK_NOTNULL(frame_num);
  CHECK_EQ(frames.size(), static_cast<size_t>(*frame_num));
    }
    
    
    {
    {
    {
    {}  // namespace can
}  // namespace canbus
}  // namespace drivers
}  // namespace apollo
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/common/proto/error_code.pb.h'
#include 'modules/drivers/canbus/can_client/fake/fake_can_client.h'
#include 'modules/drivers/canbus/can_comm/message_manager.h'
    
      ProtocolData<::apollo::canbus::ChassisDetail> mpd;
  SenderMessage<::apollo::canbus::ChassisDetail> msg(1, &mpd);
  EXPECT_FALSE(sender.NeedSend(msg, 1));
  EXPECT_EQ(msg.message_id(), 1);
  int32_t period = msg.curr_period();
  msg.UpdateCurrPeriod(-50);
  EXPECT_EQ(msg.curr_period(), period + 50);
  EXPECT_EQ(msg.CanFrame().id, 1);
    
    #include 'modules/canbus/proto/chassis_detail.pb.h'
#include 'modules/drivers/canbus/can_comm/protocol_data.h'
    
    using ::apollo::canbus::ChassisDetail;
    
    // Canbus gflags
DEFINE_double(sensor_freq, 100,
              'Sensor feedback timer frequency -- 0 means event trigger.');
    
    #if defined(_MSC_VER)
#include <intrin.h> // for _ReadWriteBarrier
#endif
    
    namespace internal {
    }
    
    
    {  *value = double_value;
  return true;
}
    
    namespace benchmark {
namespace internal {
    }
    }
    
      Out << run.GetAdjustedRealTime() << ',';
  Out << run.GetAdjustedCPUTime() << ',';
    
    inline LogType& GetNullLogInstance() {
  static LogType log(nullptr);
  return log;
}