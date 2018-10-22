
        
        DownloadItem::DownloadItem(v8::Isolate* isolate,
                           download::DownloadItem* download_item)
    : download_item_(download_item) {
  download_item_->AddObserver(this);
  Init(isolate);
  AttachAsUserData(download_item);
}
    
    
    {}  // namespace api
    
    NODE_BUILTIN_MODULE_CONTEXT_AWARE(atom_browser_global_shortcut, Initialize)

    
    #include 'atom/browser/api/trackable_object.h'
#include 'base/callback.h'
#include 'chrome/browser/extensions/global_shortcut_listener.h'
#include 'native_mate/handle.h'
#include 'ui/base/accelerators/accelerator.h'
    
    void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  v8::Isolate* isolate = context->GetIsolate();
  Menu::SetConstructor(isolate, base::Bind(&Menu::New));
    }
    
    #endif  // ATOM_BROWSER_API_ATOM_API_NET_H_

    
    #if defined(OS_LINUX)
  // Private JS APIs.
  void BlockShutdown();
  void UnblockShutdown();
#endif
    
    
    {}  // namespace api
    
    namespace api {
    }
    
      gfx::Point GetCursorScreenPoint();
  display::Display GetPrimaryDisplay();
  std::vector<display::Display> GetAllDisplays();
  display::Display GetDisplayNearestPoint(const gfx::Point& point);
  display::Display GetDisplayMatching(const gfx::Rect& match_rect);
    
    namespace xgboost {
namespace data {
/*!
 * \brief Format specification of SparsePage.
 */
class SparsePageFormat {
 public:
  /*! \brief virtual destructor */
  virtual ~SparsePageFormat() = default;
  /*!
   * \brief Load all the segments into page, advance fi to end of the block.
   * \param page The data to read page into.
   * \param fi the input stream of the file
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page, dmlc::SeekStream* fi) = 0;
  /*!
   * \brief read only the segments we are interested in, advance fi to end of the block.
   * \param page The page to load the data into.
   * \param fi the input stream of the file
   * \param sorted_index_set sorted index of segments we are interested in
   * \return true of the loading as successful, false if end of file was reached
   */
  virtual bool Read(SparsePage* page,
                    dmlc::SeekStream* fi,
                    const std::vector<bst_uint>& sorted_index_set) = 0;
  /*!
   * \brief save the data to fo, when a page was written.
   * \param fo output stream
   */
  virtual void Write(const SparsePage& page, dmlc::Stream* fo) = 0;
  /*!
   * \brief Create sparse page of format.
   * \return The created format functors.
   */
  static SparsePageFormat* Create(const std::string& name);
  /*!
   * \brief decide the format from cache prefix.
   * \return pair of row format, column format type of the cache prefix.
   */
  static std::pair<std::string, std::string> DecideFormat(const std::string& cache_prefix);
};
    }
    }
    
          ASSERT_TRUE(input == output);
    
    #include <folly/Executor.h>
#include <folly/portability/GTest.h>
    
      fe([&](int x) { sum += x; });
    
    
    {  FLAGS_minloglevel = prev;
}
    
    static intptr_t getAddr(const std::vector<uint8_t>& v, size_t& pos) {
  pos += kAddrWidth;
  return folly::Endian::little(
      folly::loadUnaligned<intptr_t>(v.data() + pos - kAddrWidth));
}
    
    #include <folly/Executor.h>
    
    /**
 * A PRNG with one instance per thread. This PRNG uses a mersenne twister random
 * number generator and is seeded from /dev/urandom. It should not be used for
 * anything which requires security, only for statistical randomness.
 *
 * An instance of this class represents the current threads PRNG. This means
 * copying an instance of this class across threads will result in corruption
 *
 * Most users will use the Random class which implicitly creates this class.
 * However, if you are worried about performance, you can memoize the TLS
 * lookups that get the per thread state by manually using this class:
 *
 * ThreadLocalPRNG rng;
 * for (...) {
 *   Random::rand32(rng);
 * }
 */
class ThreadLocalPRNG {
 public:
  using result_type = uint32_t;
    }
    
      explicit VirtualExecutor(Executor* executor)
      : VirtualExecutor(getKeepAliveToken(executor)) {}
    
    /**
 * This class creates core-local caches for a given shared_ptr, to
 * mitigate contention when acquiring/releasing it.
 *
 * It has the same thread-safety guarantees as shared_ptr: it is safe
 * to concurrently call get(), but reset()s must be synchronized with
 * reads and other resets().
 *
 * @author Giuseppe Ottaviano <ott@fb.com>
 */
template <class T, size_t kNumSlots = 64>
class CoreCachedSharedPtr {
 public:
  explicit CoreCachedSharedPtr(const std::shared_ptr<T>& p = nullptr) {
    reset(p);
  }
    }