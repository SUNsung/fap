
        
        // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    namespace base {
class FilePath;
}
    
    #ifndef ATOM_COMMON_DRAGGABLE_REGION_H_
#define ATOM_COMMON_DRAGGABLE_REGION_H_
    
      // A map of registered accelerators and their registration ids.
  typedef std::map<ui::Accelerator, int> HotkeyIdMap;
  HotkeyIdMap hotkey_ids_;
    
    #include 'base/strings/string16.h'
#include 'base/time/time.h'
#include 'content/public/browser/desktop_media_id.h'
#include 'ui/gfx/image/image_skia.h'
    
    class PepperFlashDRMHost : public ppapi::host::ResourceHost {
 public:
  PepperFlashDRMHost(content::BrowserPpapiHost* host,
                     PP_Instance instance,
                     PP_Resource resource);
  ~PepperFlashDRMHost() override;
    }
    
    // Two predicate classes that can be used in {ASSERT,EXPECT}_EXIT*:
    
    
    {
    {}  // namespace internal
}  // namespace testing
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29, typename T30,
    typename T31, typename T32, typename T33, typename T34, typename T35,
    typename T36, typename T37, typename T38, typename T39, typename T40,
    typename T41, typename T42, typename T43, typename T44>
internal::ValueArray44<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39, T40, T41, T42, T43,
    T44> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
    T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
    T26 v26, T27 v27, T28 v28, T29 v29, T30 v30, T31 v31, T32 v32, T33 v33,
    T34 v34, T35 v35, T36 v36, T37 v37, T38 v38, T39 v39, T40 v40, T41 v41,
    T42 v42, T43 v43, T44 v44) {
  return internal::ValueArray44<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29, T30, T31, T32, T33, T34, T35, T36, T37, T38, T39,
      T40, T41, T42, T43, T44>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11,
      v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25,
      v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39,
      v40, v41, v42, v43, v44);
}
    
      // Same as above, but you can choose the interception scope of this object.
  ScopedFakeTestPartResultReporter(InterceptMode intercept_mode,
                                   TestPartResultArray* result);
    
      // Creates directories so that path exists. Returns true if successful or if
  // the directories already exist; returns false if unable to create
  // directories for any reason. Will also return false if the FilePath does
  // not represent a directory (that is, it doesn't end with a path separator).
  bool CreateDirectoriesRecursively() const;
    
    
    {  static const bool value =
      sizeof(Helper(ImplicitlyConvertible::MakeFrom())) == 1;
# pragma warning(pop)           // Restores the warning state.
#elif defined(__BORLANDC__)
  // C++Builder cannot use member overload resolution during template
  // instantiation.  The simplest workaround is to use its C++0x type traits
  // functions (C++Builder 2009 and above only).
  static const bool value = __is_convertible(From, To);
#else
  static const bool value =
      sizeof(Helper(ImplicitlyConvertible::MakeFrom())) == 1;
#endif  // _MSV_VER
};
template <typename From, typename To>
const bool ImplicitlyConvertible<From, To>::value;
    
    
    {}  // namespace
    
    static int set_flags(struct ifaddrs* ifaddr) {
	int fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (fd == -1) {
		return -1;
	}
	ifreq ifr;
	memset(&ifr, 0, sizeof(ifr));
	strncpy(ifr.ifr_name, ifaddr->ifa_name, IFNAMSIZ - 1);
	int rc = ioctl(fd, SIOCGIFFLAGS, &ifr);
	close(fd);
	if (rc == -1) {
		return -1;
	}
	ifaddr->ifa_flags = ifr.ifr_flags;
	return 0;
}
    
    HTTPClient::HTTPClient() {
    }
    
    #ifndef OS_JAVASCRIPT_H
#define OS_JAVASCRIPT_H
    
    // The coeff_buf series of methods originally stored the coefficients
// into a 'virtual' file which was located in EMS, XMS, or a disk file. A cache
// was used to make this process more efficient. Now, we can store the entire
// thing in RAM.
jpeg_decoder::coeff_buf* jpeg_decoder::coeff_buf_open(int block_num_x, int block_num_y, int block_len_x, int block_len_y)
{
  coeff_buf* cb = (coeff_buf*)alloc(sizeof(coeff_buf));
    }
    
     ********************************************************************/
    
         60,30,500,   1,18.,  128
  },
  /* 5: 128 x 17 */
  {
    6,{0,1,1,2,3,3},{2,3,3,3},{0,1,2,2},{-1,0,1,2},
    {{3},{4,5},{-1,6,7,8},{-1,9,10,11}},
    2,{0,128,  12,46,  4,8,16,  23,33,70,  2,6,10,  14,19,28,  39,58,90},
    
    
static const vorbis_mapping_template _mapres_template_16_uncoupled[3]={
  { _map_nominal_u, _res_16u_0 }, /* 0 */
  { _map_nominal_u, _res_16u_1 }, /* 1 */
  { _map_nominal_u, _res_16u_2 }, /* 2 */
};

    
    static const static_bookblock _resbook_44s_1={
  {
    {0},{0,0,&_44c1_s_p1_0},{0,0,&_44c1_s_p2_0},
    {0,0,&_44c1_s_p3_0},{0,0,&_44c1_s_p4_0},{0,0,&_44c1_s_p5_0},
    {&_44c1_s_p6_0,&_44c1_s_p6_1},{&_44c1_s_p7_0,&_44c1_s_p7_1},
    {&_44c1_s_p8_0,&_44c1_s_p8_1,&_44c1_s_p8_2}
   }
};
static const static_bookblock _resbook_44sm_1={
  {
    {0},{0,0,&_44c1_sm_p1_0},{0,0,&_44c1_sm_p2_0},
    {0,0,&_44c1_sm_p3_0},{0,0,&_44c1_sm_p4_0},{0,0,&_44c1_sm_p5_0},
    {&_44c1_sm_p6_0,&_44c1_sm_p6_1},{&_44c1_sm_p7_0,&_44c1_sm_p7_1},
    {&_44c1_sm_p8_0,&_44c1_sm_p8_1,&_44c1_sm_p8_2}
   }
};
    
    static const static_bookblock _resbook_44p_ln1={
  {
    {&_44pn1_l0_0,&_44pn1_l0_1,0},
    {&_44pn1_l1_0,&_44pn1_p6_1,&_44pn1_p6_2},
   }
};
static const static_bookblock _resbook_44p_l0={
  {
    {&_44p0_l0_0,&_44p0_l0_1,0},
    {&_44p0_l1_0,&_44p0_p6_1,&_44p0_p6_2},
   }
};
static const static_bookblock _resbook_44p_l1={
  {
    {&_44p1_l0_0,&_44p1_l0_1,0},
    {&_44p1_l1_0,&_44p1_p6_1,&_44p1_p6_2},
   }
};
static const static_bookblock _resbook_44p_l2={
  {
    {&_44p2_l0_0,&_44p2_l0_1,0},
    {&_44p2_l1_0,&_44p2_p7_2,&_44p2_p7_3},
   }
};
static const static_bookblock _resbook_44p_l3={
  {
    {&_44p3_l0_0,&_44p3_l0_1,0},
    {&_44p3_l1_0,&_44p3_p7_2,&_44p3_p7_3},
   }
};
static const static_bookblock _resbook_44p_l4={
  {
    {&_44p4_l0_0,&_44p4_l0_1,0},
    {&_44p4_l1_0,&_44p4_p7_2,&_44p4_p7_3},
   }
};
static const static_bookblock _resbook_44p_l5={
  {
    {&_44p5_l0_0,&_44p5_l0_1,0},
    {&_44p5_l1_0,&_44p5_p7_2,&_44p5_p7_3},
   }
};
static const static_bookblock _resbook_44p_l6={
  {
    {&_44p6_l0_0,&_44p6_l0_1,0},
    {&_44p6_l1_0,&_44p6_p7_2,&_44p6_p7_3},
   }
};
static const static_bookblock _resbook_44p_l7={
  {
    {&_44p7_l0_0,&_44p7_l0_1,0},
    {&_44p7_l1_0,&_44p7_p7_2,&_44p7_p7_3},
   }
};
static const static_bookblock _resbook_44p_l8={
  {
    {&_44p8_l0_0,&_44p8_l0_1,0},
    {&_44p8_l1_0,&_44p8_p7_2,&_44p8_p7_3},
   }
};
static const static_bookblock _resbook_44p_l9={
  {
    {&_44p9_l0_0,&_44p9_l0_1,0},
    {&_44p9_l1_0,&_44p9_p7_2,&_44p9_p7_3},
   }
};
    
    #include <math.h>
#define float2int(x) lrintf(x)
    
      /**
   * @brief The event factory, subscribers, and publishers respond to updates.
   *
   * This should be called by the Config instance when configuration data is
   * updated. It is separate from the config parser that takes configuration
   * information specific to events and acts. This allows the event factory
   * to make changes relative to the schedule or packs.
   */
  static void configUpdate();
    
    /**
 * @brief Log results of scheduled queries to a specified receiver
 *
 * @param item a struct representing the results of a scheduled query
 * @param receiver a string representing the log receiver to use
 *
 * @return Status indicating the success or failure of the operation
 */
Status logQueryLogItem(const QueryLogItem& item, const std::string& receiver);
    
    
    {// Remove registry-helper macros from the SDK.
#undef REGISTER
#define REGISTER 'Do not REGISTER in the osquery SDK'
#undef REGISTER_INTERNAL
#define REGISTER_INTERNAL 'Do not REGISTER_INTERNAL in the osquery SDK'
#undef CREATE_REGISTRY
#define CREATE_REGISTRY 'Do not CREATE_REGISTRY in the osquery SDK'
#undef CREATE_LAZY_REGISTRY
#define CREATE_LAZY_REGISTRY 'Do not CREATE_LAZY_REGISTRY in the osquery SDK'
}

    
    
    {
    {  c.reset();
}
}

    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;
    
    #include <boost/lexical_cast.hpp>
    
    class TestTablePlugin : public TablePlugin {
 public:
  void testSetCache(size_t step, size_t interval) {
    QueryData r;
    QueryContext ctx;
    ctx.useCache(true);
    setCache(step, interval, ctx, r);
  }
    }
    
    
    
    
    
    
    
        mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, 1);
    
    	m_world->Step(timeStep, settings->velocityIterations, settings->positionIterations);
    
    		float32 maxImpulse = 0.0f;
		for (int32 i = 0; i < count; ++i)
		{
			maxImpulse = b2Max(maxImpulse, impulse->normalImpulses[i]);
		}
    
    IOBuf::IOBuf(CopyBufferOp /* op */,
             const void* buf,
             uint64_t size,
             uint64_t headroom,
             uint64_t minTailroom)
    : IOBuf(CREATE, headroom + size + minTailroom) {
  advance(headroom);
  if (size > 0) {
    assert(buf != nullptr);
    memcpy(writableData(), buf, size);
    append(size);
  }
}
    
    
    {  template <typename A, typename B>
  constexpr bool operator()(A&& a, B&& b) const {
    return ne ^ (C::operator()(static_cast<A&&>(a), static_cast<B&&>(b)) == o);
  }
};
    
    #include <boost/filesystem.hpp>
    
    
    {  mmapFileCopy(srcFile, destPath.c_str());
}
    
    template <typename Observable, typename Traits>
Observer<typename ObserverCreator<Observable, Traits>::T>
ObserverCreator<Observable, Traits>::getObserver()&& {
  // This master shared_ptr allows grabbing derived weak_ptrs, pointing to the
  // the same Context object, but using a separate reference count. Master
  // shared_ptr destructor then blocks until all shared_ptrs obtained from
  // derived weak_ptrs are released.
  class ContextMasterPointer {
   public:
    explicit ContextMasterPointer(std::shared_ptr<Context> context)
        : contextMaster_(std::move(context)),
          context_(
              contextMaster_.get(),
              [destroyBaton = destroyBaton_](Context*) {
                destroyBaton->post();
              }) {}
    ~ContextMasterPointer() {
      if (context_) {
        context_.reset();
        destroyBaton_->wait();
      }
    }
    ContextMasterPointer(const ContextMasterPointer&) = delete;
    ContextMasterPointer(ContextMasterPointer&&) = default;
    ContextMasterPointer& operator=(const ContextMasterPointer&) = delete;
    ContextMasterPointer& operator=(ContextMasterPointer&&) = default;
    }
    }
    
      void setValue(T value);
  void setValue(std::shared_ptr<const T> value);
    
    ObserverManager::~ObserverManager() {
  // Destroy NextQueue, before the rest of this object, since it expects
  // ObserverManager to be alive.
  nextQueue_.reset();
  currentQueue_.reset();
}
    
    
    {} // namespace rocksdb

    
      /// Search the list for the (index)'th item (0-based) in (list:key)
  /// A negative index indicates: 'from end-of-list'
  /// If index is within range: return true, and return the value in *result.
  /// If (index < -length OR index>=length), then index is out of range:
  ///   return false (and *result is left unchanged)
  /// May throw RedisListException
  bool Index(const std::string& key, int32_t index,
             std::string* result);
    
      // Return the offset in data_ just past the end of the current entry.
  inline uint32_t NextEntryOffset() const {
    // NOTE: We don't support blocks bigger than 2GB
    return static_cast<uint32_t>((value_.data() + value_.size()) - data_);
  }
    
      if(m_jcallback_obj != nullptr) {    
    env->DeleteGlobalRef(m_jcallback_obj);
  }
    
    void SyncPoint::EnableProcessing() {
  impl_->EnableProcessing();
}
    
    void TestKillRandom(std::string kill_point, int odds,
                    const std::string& srcfile, int srcline) {
  for (auto& p : rocksdb_kill_prefix_blacklist) {
    if (kill_point.substr(0, p.length()) == p) {
      return;
    }
  }
    }
    
      // Return an internal key (suitable for passing to an internal iterator)
  Slice internal_key() const {
    return Slice(kstart_, static_cast<size_t>(end_ - kstart_));
  }
    
    inline
void BlockFetcher::InsertCompressedBlockToPersistentCacheIfNeeded() {
  if (status_.ok() && read_options_.fill_cache &&
      cache_options_.persistent_cache &&
      cache_options_.persistent_cache->IsCompressed()) {
    // insert to raw cache
    PersistentCacheHelper::InsertRawPage(cache_options_, handle_, used_buf_,
                                         block_size_ + kBlockTrailerSize);
  }
}
    
    namespace aria2 {
    }
    
      BtRequestFactory* getBtRequestFactory() const { return requestFactory_; }
    
    public:
  AbstractCommand(
      cuid_t cuid, const std::shared_ptr<Request>& req,
      const std::shared_ptr<FileEntry>& fileEntry, RequestGroup* requestGroup,
      DownloadEngine* e, const std::shared_ptr<SocketCore>& s = nullptr,
      const std::shared_ptr<SocketRecvBuffer>& socketRecvBuffer = nullptr,
      bool incNumConnection = true);
    
    namespace aria2 {
    }
    
      void setPieceStorage(const std::shared_ptr<PieceStorage>& pieceStorage);
    
    AnnounceList::AnnounceList(
    const std::vector<std::vector<std::string>>& announceList)
    : currentTrackerInitialized_(false)
{
  reconfigure(announceList);
}
    
    
    {  bool currentTierAcceptsCompletedEvent() const;
};
    
    #endif // DOWNLOAD_EVENT_LISTENER_H

    
    static inline bool isWhitespace(char c)
{
  // Fingerprints are often separated by colons
  return isspace(c) || c == ':';
}
    
    #endif  // LLVM_FUZZER_DEFS_H

    
    #include 'FuzzerExtFunctions.def'
    
    #include 'FuzzerExtFunctions.h'
#include 'FuzzerIO.h'
    
      // What features are in the initial corpus?
  for (size_t i = 0; i < NumFilesInFirstCorpus; i++) {
    auto &Cur = Files[i].Features;
    AllFeatures.insert(Cur.begin(), Cur.end());
  }
  size_t InitialNumFeatures = AllFeatures.size();
    
    namespace fuzzer {
    }
    
    void sha1_pad(sha1nfo *s) {
	// Implement SHA-1 padding (fips180-2 §5.1.1)
    }
    
      Module Modules[4096];
  size_t NumModules;  // linker-initialized.
  size_t NumGuards;  // linker-initialized.
    
    bool IsASCII(const Unit &U);
    
    // This is a reimplementation of Libc's `system()`. On Darwin the Libc
// implementation contains a mutex which prevents it from being used
// concurrently. This implementation **can** be used concurrently. It sets the
// signal handlers when the first thread enters and restores them when the last
// thread finishes execution of the function and ensures this is not racey by
// using a mutex.
int ExecuteCommand(const std::string &Command) {
  posix_spawnattr_t SpawnAttributes;
  if (posix_spawnattr_init(&SpawnAttributes))
    return -1;
  // Block and ignore signals of the current process when the first thread
  // enters.
  {
    std::lock_guard<std::mutex> Lock(SignalMutex);
    if (ActiveThreadCount == 0) {
      static struct sigaction IgnoreSignalAction;
      sigset_t BlockedSignalsSet;
      memset(&IgnoreSignalAction, 0, sizeof(IgnoreSignalAction));
      IgnoreSignalAction.sa_handler = SIG_IGN;
    }
    }
    }