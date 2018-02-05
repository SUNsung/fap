
        
        void GlobalShortcut::UnregisterAll() {
  accelerator_callback_map_.clear();
  GlobalShortcutListener::GetInstance()->UnregisterAccelerators(this);
}
    
    #include 'atom/common/api/api_messages.h'
#include 'atom/common/native_mate_converters/string16_converter.h'
#include 'content/public/browser/web_contents.h'
#include 'native_mate/object_template_builder.h'
    
    void SavePageHandler::OnDownloadUpdated(content::DownloadItem* item) {
  if (item->IsDone()) {
    v8::Isolate* isolate = v8::Isolate::GetCurrent();
    v8::Locker locker(isolate);
    v8::HandleScope handle_scope(isolate);
    if (item->GetState() == content::DownloadItem::COMPLETE) {
      callback_.Run(v8::Null(isolate));
    } else {
      v8::Local<v8::String> error_message = v8::String::NewFromUtf8(
          isolate, 'Fail to save page');
      callback_.Run(v8::Exception::Error(error_message));
    }
    Destroy(item);
  }
}
    
    AtomQuotaPermissionContext::AtomQuotaPermissionContext() {
}
    
    #ifndef ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
#define ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_
    
    #include 'atom/browser/auto_updater.h'
    
    // Handles the HTTP basic auth, must be created on IO thread.
class LoginHandler : public content::ResourceDispatcherHostLoginDelegate {
 public:
  LoginHandler(net::AuthChallengeInfo* auth_info, net::URLRequest* request);
    }
    
    
    {  base::LaunchOptions options;
  options.new_process_group = true;  // detach
  options.fds_to_remap = &no_stdout;
  base::Process process = base::LaunchProcess(argv, options);
  return process.IsValid() ? 0 : 1;
}
    
    
    {    cvReleaseMat( &(*state)->preFilteredImg0 );
    cvReleaseMat( &(*state)->preFilteredImg1 );
    cvReleaseMat( &(*state)->slidingSumBuf );
    cvReleaseMat( &(*state)->disp );
    cvReleaseMat( &(*state)->cost );
    cvFree( state );
}
    
    
    {  return 1;
}
    
    PARAM_TEST_CASE(StereoBMFixture, int, int)
{
    int n_disp;
    int winSize;
    Mat left, right, disp;
    UMat uleft, uright, udisp;
    }
    
        for (int col = 0; col < 10+NUM_DIST_COEFF_TILT; ++col)
    {
        double save = *(param[col]);
        *(param[col]) = save + eps;
        cv::projectPoints(obj, r, t, cm, dc, pix0);
        *(param[col]) = save - eps;
        cv::projectPoints(obj, r, t, cm, dc, pix1);
        *(param[col]) = save;
    }
    
    namespace cv
{
    }
    
    //////////////////////////////////////////////////////////////////////
    
    int64_t TimeStamp::Get(bool &error, int hou, int min, int sec, int mon, int day,
                   int yea, bool gmt) {
  auto dt = req::make<DateTime>(Current());
  if (gmt) {
    dt->setTimezone(req::make<TimeZone>('UTC'));
  }
  dt->set(hou, min, sec, mon, day, yea);
  return dt->toTimeStamp(error);
}
    
    
    {  std::string ret;
  auto const url = g_context->getRequestUrl(75);
  folly::format(&ret, '\nJIT timers for {}\n', url);
  folly::format(&ret, header, 'name', 'count', 'total', 'average', 'max');
  folly::format(&ret, '{:-^30}-+{:-^64}\n{}\n', '', '', rows);
  return ret;
}
    
      static void GetRealtimeTime(timespec &sp);
  static void GetMonotonicTime(timespec &sp);
  static int64_t GetCurrentTimeMicros();
  static int64_t GetRusageMicros(Type t, Who who);
  static int64_t GetThreadCPUTimeNanos();
  const char *getName() const;
  int64_t getMicroSeconds() const;
  void report() const;
    
    #include <folly/Optional.h>
    
    #ifndef incl_HPHP_JIT_TC_RECORD_H_
#define incl_HPHP_JIT_TC_RECORD_H_
    
      Variant ret = mpzToGMPObject(gmpReturn);
    
    
    {private:
  Mutex m_lock;
  std::map<std::string, ServerFactoryPtr> m_factories;
};
    
      if (!ret || numa_num_nodes <= 1) return;
    
    #include <atomic>
#include 'stddef.h'
    
    
    {}  // namespace guetzli

    
    
    {}  // namespace guetzli

    
    inline int Log2Floor(uint32_t n) {
  return n == 0 ? -1 : Log2FloorNonZero(n);
}
    
    
    {}  // namespace guetzli
    
    // Fills in 'result' with the inverse DCT of 'block'.
// The arguments 'block' and 'result' point to 8x8 arrays that are arranged in
// a row-by-row memory layout.
void ComputeBlockIDCT(const coeff_t* block, uint8_t* result);
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
    /*!
 * \brief an iterator that iterates over a configure file and gets the configures
 */
class ConfigIterator: public ConfigStreamReader {
 public:
  /*!
   * \brief constructor
   * \param fname name of configure file
   */
  explicit ConfigIterator(const char *fname) : ConfigStreamReader(fi) {
    fi.open(fname);
    if (fi.fail()) {
      LOG(FATAL) << 'cannot open file ' << fname;
    }
    ConfigReaderBase::Init();
  }
  /*! \brief destructor */
  ~ConfigIterator(void) {
    fi.close();
  }
    }
    
    /*!
 * \brief global singleton of a random engine.
 *  This random engine is thread-local and
 *  only visible to current thread.
 */
GlobalRandomEngine& GlobalRandom(); // NOLINT(*)