
        
        #if defined(OS_WIN)
#include 'base/process/process_handle.h'
#endif
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(WinFrameView);
};
    
    #ifndef ATOM_BROWSER_UI_X_EVENT_DISABLER_H_
#define ATOM_BROWSER_UI_X_EVENT_DISABLER_H_
    
    namespace content {
class BrowserPpapiHost;
}  // namespace content
    
    void TtsPlatformImpl::clear_error() {
  error_ = std::string();
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
    
    #endif  // GTEST_HAS_PARAM_TEST
    
    
    {
    {    // Next, recurses (at compile time) with the tail of the type list.
    return TypeParameterizedTest<Fixture, TestSel, typename Types::Tail>
        ::Register(prefix, case_name, test_names, index + 1);
  }
};
    
    // On some platforms, <regex.h> needs someone to define size_t, and
// won't compile otherwise.  We can #include it here as we already
// included <stdlib.h>, which is guaranteed to define size_t through
// <stddef.h>.
# include <regex.h>  // NOLINT
    
    // A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)
    
    
    {  if (src->size[dimension] == 1 && src->nDimension > 1) {
    for (std::size_t d = dimension; d < self->nDimension-1; d++) {
      self->size[d] = self->size[d+1];
      self->stride[d] = self->stride[d+1];
    }
    self->nDimension--;
  }
}
    
    inline Half::operator double() {
  return convert<double, Half>(*this);
}
    
        std::shared_ptr<GlooCache::algorithm_type> algo;
    if (device == DeviceType::CPU) {
      algo = std::make_shared<::gloo::BroadcastOneToAll<T>>(
        context,
        std::initializer_list<T*>{reinterpret_cast<T*>(input_buffer.get())},
        count,
        src_rank);
#ifdef WITH_CUDA
    } else if (device == DeviceType::CUDA) {
      auto stream = THCState_getCurrentStream(THDGetCudaState());
    }
    
    
    {} // namespace thd

    
    void OutputImage::CopyFromJpegData(const JPEGData& jpg) {
  for (size_t i = 0; i < jpg.components.size(); ++i) {
    const JPEGComponent& comp = jpg.components[i];
    assert(jpg.max_h_samp_factor % comp.h_samp_factor == 0);
    assert(jpg.max_v_samp_factor % comp.v_samp_factor == 0);
    int factor_x = jpg.max_h_samp_factor / comp.h_samp_factor;
    int factor_y = jpg.max_v_samp_factor / comp.v_samp_factor;
    assert(comp.quant_idx < jpg.quant.size());
    components_[i].CopyFromJpegComponent(comp, factor_x, factor_y,
                                         &jpg.quant[comp.quant_idx].values[0]);
  }
}
    
    namespace guetzli {
    }
    
    #ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    
    {}  // namespace guetzli
    
    bool EncodeRGBToJpeg(const std::vector<uint8_t>& rgb, int w, int h,
                     const int* quant, JPEGData* jpg) {
  if (w < 0 || w >= 1 << 16 || h < 0 || h >= 1 << 16 ||
      rgb.size() != 3 * w * h) {
    return false;
  }
  InitJPEGDataForYUV444(w, h, jpg);
  AddApp0Data(jpg);
    }
    
    
// Adds APP0 header data.
void AddApp0Data(JPEGData* jpg);
    
      // Make a local copy of the input bit length histogram.
  int count[kJpegHuffmanMaxBitLength + 1] = { 0 };
  int total_count = 0;
  for (len = 1; len <= kJpegHuffmanMaxBitLength; ++len) {
    count[len] = count_in[len];
    total_count += count[len];
  }
    
      EXPECT_CALL(transport, writeChain(_, BufMatches(buf.get()), _));
    
    IOBuf::IOBuf(TakeOwnershipOp, void* buf, uint64_t capacity, uint64_t length,
             FreeFunction freeFn, void* userData,
             bool freeOnError)
  : next_(this),
    prev_(this),
    data_(static_cast<uint8_t*>(buf)),
    buf_(static_cast<uint8_t*>(buf)),
    length_(length),
    capacity_(capacity),
    flagsAndSharedInfo_(packFlagsAndSharedInfo(kFlagFreeSharedInfo, nullptr)) {
  try {
    setSharedInfo(new SharedInfo(freeFn, userData));
  } catch (...) {
    takeOwnershipError(freeOnError, buf, freeFn, userData);
    throw;
  }
}
    
      bool add(T v) {
    auto prev = &head_;
    locate_lower_bound(v, prev);
    auto curr = prev->load(std::memory_order_relaxed);
    if (curr && curr->elem_ == v) {
      return false;
    }
    prev->store(new Node(std::move(v), curr));
    return true;
  }
    
      std::vector<std::string> otherVec;
  for (auto& s : vec) {
    otherVec.push_back(s);
  }
  EXPECT_EQ(otherVec.size(), vec.size());
  if (otherVec.size() == vec.size()) {
    EXPECT_TRUE(std::equal(otherVec.begin(), otherVec.end(), vec.begin()));
  }
    
    #include <map>
#include <node.h>
    
    It must be started with :
void* XXH32_init()
The function returns a pointer which holds the state of calculation.
    
    using namespace rocksdb;
    
      static Key RandomTarget(Random* rnd) {
    switch (rnd->Next() % 10) {
      case 0:
        // Seek to beginning
        return MakeKey(0, 0);
      case 1:
        // Seek to end
        return MakeKey(K, 0);
      default:
        // Seek to middle
        return MakeKey(rnd->Next() % K, 0);
    }
  }
    
    
    {  // No copying allowed
  IterKey(const IterKey&) = delete;
  void operator=(const IterKey&) = delete;
};
    
    
    {  m_jcreate_compaction_filter_methodid =
      AbstractCompactionFilterFactoryJni::getCreateCompactionFilterMethodId(env);
  if(m_jcreate_compaction_filter_methodid == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
}
    
    #include <jni.h>
    
    void DumpCrashStack::Dump(const std::string& _processname) {
    vecdump_.clear();
    }
    
    CommFrequencyLimit::~CommFrequencyLimit()
{}
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    #include 'comm/corepattern/service_base.h'
    
    int Test_Spy_Sample::__TestFun1(int i)
{
    SPY_HOOK_THIS_API(__TestFun1, i);
    xinfo2(TSF'Test');
    return i+1;
}

    
    
#define SPY_DEF_CLASS_NAME TSpy
#define SPY_DEF_XLOGGER_HOOK TSpy::SpyHookLogFunc
    
     public: // Setters
    
    void Node::setWidthAuto()
{
    YGNodeStyleSetWidthAuto(m_node);
}
    
      const char* functionName() const { return m_functionName; }
  const char* fileName() const { return m_fileName; }
  int lineNumber() const { return m_lineNumber; }
    
    
    {  T* operator->() const {
    return m_instance;
  }
private:
  T* m_instance;
};