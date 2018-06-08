
        
        #include 'content/public/browser/web_contents_observer.h'
#include 'ui/gfx/native_widget_types.h'
    
    // MonitorFinder maps a RenderFrameHost to the display ID on which the widget
// is painting. This class operates on the IO thread while the RenderFrameHost
// is on the UI thread, so the value returned by GetMonitor() may be 0 until
// the information can be retrieved asynchronously.
class MonitorFinder : public base::RefCountedThreadSafe<MonitorFinder> {
 public:
  MonitorFinder(int process_id, int render_frame_id);
    }
    
    // filenames
const base::FilePath::CharType kCacheDirname[] = FPL('Cache');
const base::FilePath::CharType kChannelIDFilename[] = FPL('Origin Bound Certs');
const base::FilePath::CharType kCookieFilename[] = FPL('Cookies');
const base::FilePath::CharType kCRLSetFilename[] =
    FPL('Certificate Revocation Lists');
const base::FilePath::CharType kCustomDictionaryFileName[] =
    FPL('Custom Dictionary.txt');
const base::FilePath::CharType kExtensionActivityLogFilename[] =
    FPL('Extension Activity');
const base::FilePath::CharType kExtensionsCookieFilename[] =
    FPL('Extension Cookies');
const base::FilePath::CharType kFirstRunSentinel[] = FPL('First Run');
const base::FilePath::CharType kGCMStoreDirname[] = FPL('GCM Store');
const base::FilePath::CharType kLocalStateFilename[] = FPL('Local State');
const base::FilePath::CharType kLocalStorePoolName[] = FPL('LocalStorePool');
const base::FilePath::CharType kMediaCacheDirname[] = FPL('Media Cache');
const base::FilePath::CharType kNetworkPersistentStateFilename[] =
    FPL('Network Persistent State');
const base::FilePath::CharType kOfflinePageArchviesDirname[] =
    FPL('Offline Pages/archives');
const base::FilePath::CharType kOfflinePageMetadataDirname[] =
    FPL('Offline Pages/metadata');
const base::FilePath::CharType kPreferencesFilename[] = FPL('Preferences');
const base::FilePath::CharType kProtectedPreferencesFilenameDeprecated[] =
    FPL('Protected Preferences');
const base::FilePath::CharType kReadmeFilename[] = FPL('README');
const base::FilePath::CharType kResetPromptMementoFilename[] =
    FPL('Reset Prompt Memento');
const base::FilePath::CharType kSafeBrowsingBaseFilename[] =
    FPL('Safe Browsing');
const base::FilePath::CharType kSecurePreferencesFilename[] =
    FPL('Secure Preferences');
const base::FilePath::CharType kServiceStateFileName[] = FPL('Service State');
const base::FilePath::CharType kSingletonCookieFilename[] =
    FPL('SingletonCookie');
const base::FilePath::CharType kSingletonLockFilename[] = FPL('SingletonLock');
const base::FilePath::CharType kSingletonSocketFilename[] =
    FPL('SingletonSocket');
const base::FilePath::CharType kSupervisedUserSettingsFilename[] =
    FPL('Managed Mode Settings');
const base::FilePath::CharType kThemePackFilename[] = FPL('Cached Theme.pak');
const base::FilePath::CharType kThemePackMaterialDesignFilename[] =
    FPL('Cached Theme Material Design.pak');
const base::FilePath::CharType kWebAppDirname[] = FPL('Web Applications');
    
            struct smem
        {
            enum { TAG_MASK = (1U << ( (sizeof(unsigned int) << 3) - 5U)) - 1U };
    }
    
    namespace cv { namespace cuda { namespace device
{
    template <class T>
    __device__ __forceinline__ T warp_reduce(volatile T *ptr , const unsigned int tid = threadIdx.x)
    {
        const unsigned int lane = tid & 31; // index of thread in warp (0..31)
    }
    }
    }
    }
    
    #ifdef HAVE_LAPACK
    
    static void* openclamdblas_check_fn(int ID)
{
    assert(ID >= 0 && ID < (int)(sizeof(openclamdblas_fn)/sizeof(openclamdblas_fn[0])));
    const struct DynamicFnEntry* e = openclamdblas_fn[ID];
    void* func = CV_CL_GET_PROC_ADDRESS(e->fnName);
    if (!func)
    {
        throw cv::Exception(cv::Error::OpenCLApiCallError,
                cv::format('OpenCL AMD BLAS function is not available: [%s]', e->fnName),
                CV_Func, __FILE__, __LINE__);
    }
    *(e->ppFn) = func;
    return func;
}
    
      uint16_t fid = unpackFunctionId(msg);
  assert(fid == 1);
    
    
    {} // namespace thd
    
    
    {  WorkloadStats (const WorkloadStats&) = delete;
  WorkloadStats& operator=(const WorkloadStats&) = delete;
};
    
      /**
   * Create a task. This returns a task handle, or null object
   * if there are no worker threads.
   */
  static Resource TaskStart(
    const String& url, const Array& headers,
    const String& remote_host,
    const String& post_data = null_string,
    const Array& files = null_array,
    int timeoutSeconds = -1,
    PageletServerTaskEvent *event = nullptr
  );
    
    
    {    raise_warning(cs_GMP_INVALID_EXPONENT_MUST_BE_POSITIVE, 'gmp_powm');
    return false;
  }
    
      size_t used() const {
    return m_frontier - m_base;
  }
    
    void OfflineCode::disasm(FILE* file,
                         TCA fileStartAddr,
                         TCA codeStartAddr,
                         uint64_t codeLen,
                         const PerfEventsMap<TCA>& perfEvents,
                         BCMappingInfo bcMappingInfo,
                         bool printAddr,
                         bool printBinary) {
    }
    
    /*
 * Clean up any /tmp files that we created at process shutdown time.
 */
void embedded_data_cleanup();
    
    struct IOBuf::HeapPrefix {
  explicit HeapPrefix(uint16_t flg) : magic(kHeapMagic), flags(flg) {}
  ~HeapPrefix() {
    // Reset magic to 0 on destruction.  This is solely for debugging purposes
    // to help catch bugs where someone tries to use HeapStorage after it has
    // been deleted.
    magic = 0;
  }
    }
    
      auto empty = IOBuf::create(0);
    
    template <typename T>
folly::ReadMostlySharedPtr<T> SingletonHolder<T>::try_get_fast() {
  if (UNLIKELY(state_.load(std::memory_order_acquire) !=
               SingletonHolderState::Living)) {
    createInstance();
  }
    }
    
    
    {} // namespace folly

    
    #include <folly/synchronization/Hazptr.h>
    
     public:
  HazptrWideCAS() : node_(new Node()) {}
    
    TEST_F(ConstexprMathTest, constexpr_abs_double_negative) {
  constexpr auto v = -17.5;
  constexpr auto a = folly::constexpr_abs(v);
  EXPECT_EQ(17.5, a);
  EXPECT_TRUE((std::is_same<const double, decltype(a)>::value));
}
    
    
    {} // namespace folly

    
      folly::Optional<T> try_take_for(std::chrono::milliseconds time) override {
    T item;
    while (!queue_.readIfNotEmpty(item)) {
      if (!sem_.try_wait_for(time)) {
        return folly::none;
      }
    }
    return std::move(item);
  }
    
    template <class T>
class UnboundedBlockingQueue : public BlockingQueue<T> {
 public:
  virtual ~UnboundedBlockingQueue() {}
    }
    
      // Free the control block if we're the last reader at max value.
  prev = block->valueAndReaderCount.fetch_sub(kReader,
                                              std::memory_order_acq_rel);
  if (prev == (kReader | uint64_t(size_))) {
    freeControlBlock(block);
  }
    
    // Configure folly to enable INFO+ messages, and everything else to
// enable WARNING+.
//
// Set the default log handler to log asynchronously by default.
FOLLY_INIT_LOGGING_CONFIG('.=WARNING,folly=INFO; default:async=true');
    
    
    {  const char* value_{nullptr};
};
    
      for (std::vector<int>::size_type i = 0; i < cfs.size(); i++) {
    families.push_back(rocksdb::ColumnFamilyDescriptor(
        cfs[i], rocksdb::ColumnFamilyOptions()));
  }
    
      unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(test_dir_ + '/f', &writable_file, soptions_));
  ASSERT_OK(writable_file->Append('foo'));
  ASSERT_OK(writable_file->Append(write_data));
  ASSERT_OK(writable_file->Close());
  writable_file.reset();
    
      // Sync + corrupt => no change
  ASSERT_OK(writable_file->Fsync());
  ASSERT_OK(dynamic_cast<MockEnv*>(env_)->CorruptBuffer(kFileName));
  result.clear();
  ASSERT_OK(rand_file->Read(0, kGood.size(), &result, &(scratch[0])));
  ASSERT_EQ(result.compare(kGood), 0);
    
    
    {} // namespace rocksdb

    
    #include <assert.h>
#include 'rocksjni/jnicallback.h'
#include 'rocksjni/portal.h'
    
      StatisticsJni::StatisticsJni(std::shared_ptr<Statistics> stats,
      const std::set<uint32_t> ignore_histograms) : StatisticsImpl(stats, false),
      m_ignore_histograms(ignore_histograms) {
  }
    
    void SyncPoint::LoadDependencyAndMarkers(
  const std::vector<SyncPointPair>& dependencies,
  const std::vector<SyncPointPair>& markers) {
  impl_->LoadDependencyAndMarkers(dependencies, markers);
}
    
    #include 'util/sync_point.h'
    
    #include <jni.h>
#include <memory>
#include <string>
#include 'rocksjni/jnicallback.h'
#include 'rocksdb/comparator.h'
#include 'rocksdb/slice.h'
#include 'port/port.h'