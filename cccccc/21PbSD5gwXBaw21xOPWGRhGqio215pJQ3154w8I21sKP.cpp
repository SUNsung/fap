
        
        class AtomMainDelegate : public brightray::MainDelegate {
 public:
  AtomMainDelegate();
  ~AtomMainDelegate();
    }
    
      // DesktopMediaListObserver overrides.
  void OnSourceAdded(int index) override;
  void OnSourceRemoved(int index) override;
  void OnSourceMoved(int old_index, int new_index) override;
  void OnSourceNameChanged(int index) override;
  void OnSourceThumbnailChanged(int index) override;
  bool OnRefreshFinished() override;
    
    void GlobalShortcut::Unregister(const ui::Accelerator& accelerator) {
  if (!ContainsKey(accelerator_callback_map_, accelerator))
    return;
    }
    
    class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
    class Event : public Wrappable<Event>,
              public content::WebContentsObserver {
 public:
  static Handle<Event> Create(v8::Isolate* isolate);
    }
    
    SavePageHandler::SavePageHandler(content::WebContents* web_contents,
                                 const SavePageCallback& callback)
    : web_contents_(web_contents),
      callback_(callback) {
}
    
      AtomQuotaPermissionContext();
  virtual ~AtomQuotaPermissionContext();
    
    #include 'atom/browser/net/js_asker.h'
#include 'net/url_request/url_request_simple_job.h'
    
    #include <vector>
#include <string>
    
    void WakeUpLock::Unlock() {
    ::wakeupLock_Unlock(object_);
}
    
    void Packer_Pack(const char* _url, unsigned int _sequence, const void* _data, size_t _datalen, AutoBuffer& _outbuf, bool _dohash) {
    ASSERT(_url);
    size_t url_size = strnlen(_url, 128);
    ASSERT(0xFF >= sizeof(LongLinkPack) + url_size);
    }
    
    //
//  testspy.h
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//
    
    #include <jni.h>
#include <string>
struct JniMethodInfo;
class AutoBuffer;
    
    #include <folly/synchronization/ParkingLot.h>
    
      T exchange(T v, std::memory_order mo = std::memory_order_seq_cst) noexcept {
    DeterministicSchedule::beforeSharedAccess();
    T rv = data.exchange(v, mo);
    FOLLY_TEST_DSCHED_VLOG(this << '.exchange(' << std::hex << v << ') -> '
                                << std::hex << rv);
    DeterministicSchedule::afterSharedAccess(true);
    return rv;
  }
    
    /**
 * For all other iterators, we need to use the decrement operator.
 */
template <class Iter>
typename std::enable_if<
    !std::is_same<
        typename std::iterator_traits<Iter>::iterator_category,
        std::random_access_iterator_tag>::value,
    typename std::iterator_traits<Iter>::reference>::type
value_before(Iter i) {
  return *--i;
}
    
    TEST(CoreAllocator, Basic) {
  CoreAllocator<32> alloc;
  auto a = alloc.get(0);
  auto res = a->allocate(8);
  memset(res, 0, 8);
  a->deallocate(res);
  res = a->allocate(8);
  EXPECT_TRUE((intptr_t)res % 8 == 0); // check alignment
  memset(res, 0, 8);
  a->deallocate(res);
  res = a->allocate(12);
  EXPECT_TRUE((intptr_t)res % 16 == 0); // check alignment
  memset(res, 0, 12);
  a->deallocate(res);
  res = a->allocate(257);
  memset(res, 0, 257);
  a->deallocate(res);
    }
    
    #include <folly/container/SparseByteSet.h>
    
      if (!kIsSanitize) { // asan allocator raises SIGABRT instead
    EXPECT_EQ(EINVAL, (trial(2), errno)) << 'too small';
    EXPECT_EQ(EINVAL, (trial(513), errno)) << 'not power of two';
  }