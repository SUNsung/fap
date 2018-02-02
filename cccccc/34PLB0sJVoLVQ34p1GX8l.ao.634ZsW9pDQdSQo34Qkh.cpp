
        
        HINSTANCE g_hInst = NULL;
D3D_DRIVER_TYPE g_driverType = D3D_DRIVER_TYPE_NULL;
D3D_FEATURE_LEVEL g_featureLevel = D3D_FEATURE_LEVEL_11_0;
ID3D11Device* g_pd3dDevice = NULL;
ID3D11DeviceContext* g_pImmediateContext = NULL;
IDXGISwapChain* g_pSwapChain = NULL;
    
    typedef std::tr1::tuple<int, int> StereoBMFixture_t;
typedef TestBaseWithParam<StereoBMFixture_t> StereoBMFixture;
    
        if( !*state )
        return;
    
    cv::Mat dls::roty(const double t)
{
    // roty: rotation about y-axis
    double ct = cos(t);
    double st = sin(t);
    return (cv::Mat_<double>(3,3) << ct, 0, st, 0, 1, 0, -st, 0, ct);
}
    
    
    {        left.copyTo(uleft);
        right.copyTo(uright);
    }
    
        camMat << 300.f, 0.f, imgSize.width/2.f, 0, 300.f, imgSize.height/2.f, 0.f, 0.f, 1.f;
    distCoeffs0 << 1.2f, 0.2f, 0.f, 0.f, 0.f;
    
    #include 'opencv2/calib3d.hpp'
    
                    matJ = cvMat( 9, 3, CV_64FC1, J );
    
      /*
   * @brief Access value for a flag name.
   *
   * @param name the flag name.
   * @param value output parameter filled with the flag value on success.
   * @return status of the flag did exist.
   */
  static Status getDefaultValue(const std::string& name, std::string& value);
    
      /// Check if effective privileges do not match real.
  bool dropped() {
    return (getuid() != geteuid() || getgid() != getegid());
  }
    
      /**
   * @brief Cleanly wait for all services and components to shutdown.
   *
   * Enter a join of all services followed by a sync wait for event loops.
   * If the main thread is out of actions it can call #waitForShutdown.
   */
  static void waitForShutdown();
    
      /*
   * @brief a variable tracking all of the paths we attempt to carve
   *
   * This is a globbed set of file paths that we're expecting will be
   * carved.
   */
  std::set<boost::filesystem::path> carvePaths_;
    
    namespace osquery {
    }
    
    /// Safely convert a string representation of an integer base.
inline Status safeStrtol(const std::string& rep, size_t base, long int& out) {
  char* end{nullptr};
  out = strtol(rep.c_str(), &end, static_cast<int>(base));
  if (end == nullptr || end == rep.c_str() || *end != '\0' ||
      ((out == LONG_MIN || out == LONG_MAX) && errno == ERANGE)) {
    out = 0;
    return Status(1);
  }
  return Status(0);
}
    
    #endif /* WAKEUPLOCK_H_ */

    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
      private:
    CommFrequencyLimit(CommFrequencyLimit&);
    CommFrequencyLimit& operator=(CommFrequencyLimit&);
    
    
    {  private:
    TServicesMap m_services;
    TServicesMap m_publicservices;
    std::vector<ServiceBase*> m_releasevec;
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
    static bool SpyHookLogFunc(struct XLoggerInfo_t& _info, std::string& _log);
    void TestFun0();
    int __TestFun1(int i);
    
    #ifndef COMM_HAS_MEMBER_H_
#define COMM_HAS_MEMBER_H_
    
    namespace aria2 {
    }
    
    AbstractAuthResolver::~AbstractAuthResolver() = default;
    
      const std::shared_ptr<Option>& getOption() const;
    
      std::shared_ptr<HttpConnection> httpConnection_;
    
    bool AnnounceList::currentTierAcceptsStoppedEvent() const
{
  if (currentTrackerInitialized_) {
    return FindStoppedAllowedTier()(*currentTier_);
  }
    }
    
    std::string errToString(OSStatus err)
{
  std::string rv = 'Unkown error';
  CFRef<CFStringRef> cerr(SecCopyErrorMessageString(err, nullptr));
  if (!cerr) {
    return rv;
  }
  size_t len = CFStringGetLength(cerr.get()) * 4;
  auto buf = make_unique<char[]>(len);
  if (CFStringGetCString(cerr.get(), buf.get(), len, kCFStringEncodingUTF8)) {
    rv = buf.get();
  }
  return rv;
}