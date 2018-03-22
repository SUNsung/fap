
        
          static mate::Handle<Debugger> Create(
      v8::Isolate* isolate, content::WebContents* web_contents);
    
    #ifndef ATOM_BROWSER_API_ATOM_API_DESKTOP_CAPTURER_H_
#define ATOM_BROWSER_API_ATOM_API_DESKTOP_CAPTURER_H_
    
     protected:
  WebRequest(v8::Isolate* isolate, AtomBrowserContext* browser_context);
  ~WebRequest() override;
    
    namespace atom {
    }
    
    #endif  // ATOM_BROWSER_ATOM_QUOTA_PERMISSION_CONTEXT_H_

    
    // Handles the HTTP basic auth, must be created on IO thread.
class LoginHandler : public content::ResourceDispatcherHostLoginDelegate {
 public:
  LoginHandler(net::AuthChallengeInfo* auth_info, net::URLRequest* request);
    }
    
    // Like URLRequestAsarJob, but asks the JavaScript handler for file path.
class URLRequestAsyncAsarJob : public JsAsker<asar::URLRequestAsarJob> {
 public:
  URLRequestAsyncAsarJob(net::URLRequest*, net::NetworkDelegate*);
    }
    
    
    {}  // namespace internal
    
    // Generate a table that contains memu model's accelerators and command ids.
void GenerateAcceleratorTable(AcceleratorTable* table,
                              atom::AtomMenuModel* model);
    
    #include <vector>
    
      // Create a menu from menu model.
  void BuildMenuFromModel(AtomMenuModel* model, DbusmenuMenuitem* parent);
    
    MenuModelAdapter::~MenuModelAdapter() {
}
    
    namespace content {
class RenderFrameHost;
}
    
    void Dispatcher::documentCallback(const char* ev, blink::WebLocalFrame* frame) {
  v8::Isolate* isolate = v8::Isolate::GetCurrent();
  blink::WebView* web_view = render_view()->GetWebView();
  v8::HandleScope scope(isolate);
    }
    
    
    {  DISALLOW_COPY_AND_ASSIGN(Dispatcher);
};
    
      v8::Local<v8::Context> context = isolate->GetEnteredContext();
  v8::Local<v8::Object> global = context->Global();
  ASSERT(!global->IsUndefined());
  v8::Local<v8::Context> g_context =
    v8::Local<v8::Context>::New(isolate, node::g_context);
    
      // v8::Extension implementation.
  v8::Handle<v8::FunctionTemplate>
      GetNativeFunctionTemplate(
                        v8::Isolate* isolate,
                        v8::Handle<v8::String> name) override;
    
    
#ifndef CONTENT_NW_SRC_API_EVENT_EVENT_H_
#define CONTENT_NW_SRC_API_EVENT_EVENT_H_
    
    #include 'base/values.h'
#include 'components/zoom/zoom_controller.h'
#include 'content/nw/src/api/object_manager.h'
#include 'content/nw/src/api/menuitem/menuitem.h'
#include 'content/public/browser/web_contents.h'
#include 'content/public/common/page_zoom.h'
#include 'ui/views/controls/menu/menu_runner.h'
    
    
    {  base::ListValue args;
  dispatcher_host()->SendEvent(this, 'click', args);
}
    
        D3D_FEATURE_LEVEL featureLevels[] =
    {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0,
    };
    UINT numFeatureLevels = ARRAYSIZE(featureLevels);
    
    
    {                return (count & TAG_MASK) - val;
#else
                return ::atomicAdd(address, val);
#endif
            }
    
    
    {    virtual size_t getReservedSize() const { return (size_t)-1; }
    virtual size_t getMaxReservedSize() const { return (size_t)-1; }
    virtual void setMaxReservedSize(size_t size) { (void)size; }
    virtual void freeAllReservedBuffers() { }
};
    
        int total_width = cols * cn;
    
            // Core Extension: ARB_depth_buffer_float
        DEPTH_COMPONENT32F               = 0x8CAC,
        DEPTH32F_STENCIL8                = 0x8CAD,
        FLOAT_32_UNSIGNED_INT_24_8_REV   = 0x8DAD,
    
    //
// BEGIN OF CUSTOM FUNCTIONS
//
    
    #ifndef BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
#define BOOST_ASIO_DETAIL_BASE_FROM_COMPLETION_COND_HPP
    
    namespace boost {
namespace date_time {
    }
    }
    
    #endif // BOOST_ASIO_DETAIL_DESCRIPTOR_WRITE_OP_HPP

    
    #if !defined(BOOST_ASIO_HAS_THREADS) \
  || defined(BOOST_ASIO_DISABLE_FENCED_BLOCK)
typedef null_fenced_block fenced_block;
#elif defined(__MACH__) && defined(__APPLE__)
typedef macos_fenced_block fenced_block;
#elif defined(__sun)
typedef solaris_fenced_block fenced_block;
#elif defined(__GNUC__) && defined(__arm__) \
  && !defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
typedef gcc_arm_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__hppa) || defined(__hppa__))
typedef gcc_hppa_fenced_block fenced_block;
#elif defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
typedef gcc_x86_fenced_block fenced_block;
#elif defined(__GNUC__) \
  && ((__GNUC__ == 4 && __GNUC_MINOR__ >= 1) || (__GNUC__ > 4)) \
  && !defined(__INTEL_COMPILER) && !defined(__ICL) \
  && !defined(__ICC) && !defined(__ECC) && !defined(__PATHSCALE__)
typedef gcc_sync_fenced_block fenced_block;
#elif defined(BOOST_ASIO_WINDOWS) && !defined(UNDER_CE)
typedef win_fenced_block fenced_block;
#else
typedef null_fenced_block fenced_block;
#endif
    
    template <typename Function, typename Context>
inline void invoke(const Function& function, Context& context)
{
#if !defined(BOOST_ASIO_HAS_HANDLER_HOOKS)
  Function tmp(function);
  tmp();
#else
  using boost::asio::asio_handler_invoke;
  asio_handler_invoke(function, boost::asio::detail::addressof(context));
#endif
}
    
      STDMETHODIMP get_Length(UINT32 *value)
  {
    *value = length_;
    return S_OK;
  }
    
    void dev_poll_reactor::init_task()
{
  io_service_.init_task();
}
    
        if (EXPECTS_CRASH_DUMP_HEADER == _state) {
        _state = EXPECTS_CRASH_DUMP_CONTENT;
        strout += _strcache;
    }
    
        if (_dohash) {
        st.hash = (unsigned int)adler32(0, (const unsigned char*)_url, (unsigned int)url_size);
    }
    
    #ifdef ANDROID
#include 'comm/android/callstack.h'
#endif
    
    
    
    #ifndef COMM_COMM_FREQUENCY_LIMIT_H_
#define COMM_COMM_FREQUENCY_LIMIT_H_
    
    
    static bool SpyHookLogFunc(struct XLoggerInfo_t& _info, std::string& _log);
    void TestFun0();
    int __TestFun1(int i);
    
    
#define DEFINE_HAS_MEMBER_WITH_TYPE(member_name, member_type) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <member_type (T::*)> struct tester;\
        template <typename U> static yes_type test(tester<&U::member_name>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
      template <typename T>
  static void release_shared(counted_base* base, long count) {
    // If count == 1, this is equivalent to base->_M_release()
    if (__gnu_cxx::__exchange_and_add_dispatch(
            &(base->*fieldPtr(access_use_count{})), -count) == count) {
      base->_M_dispose();
    }
    }
    
    #include <folly/detail/RangeCommon.h>
    
    size_t qfind_first_byte_of_byteset(
    const StringPieceLite haystack,
    const StringPieceLite needles);
    
    /**
 * An atomic bitset of fixed size (specified at compile time).
 */
template <size_t N>
class AtomicBitSet : private boost::noncopyable {
 public:
  /**
   * Construct an AtomicBitSet; all bits are initially false.
   */
  AtomicBitSet();
    }
    
      unique_ptr<WritableFile> writable_file;
  ASSERT_OK(env_->NewWritableFile(test_dir_ + '/f', &writable_file, soptions_));
  ASSERT_OK(writable_file->Append('foo'));
  ASSERT_OK(writable_file->Append(write_data));
  ASSERT_OK(writable_file->Close());
  writable_file.reset();
    
      virtual bool FullMergeV2(const MergeOperationInput& merge_in,
                           MergeOperationOutput* merge_out) const override;
    
      // Reports dropped bytes to the reporter.
  // buffer_ must be updated to remove the dropped bytes prior to invocation.
  void ReportCorruption(size_t bytes, const char* reason);
  void ReportDrop(size_t bytes, const Status& reason);
    
    /*
 * Class:     org_rocksdb_IngestExternalFileOptions
 * Method:    allowBlockingFlush
 * Signature: (J)Z
 */
jboolean Java_org_rocksdb_IngestExternalFileOptions_allowBlockingFlush(
    JNIEnv* env, jobject jobj, jlong jhandle) {
  auto* options =
      reinterpret_cast<rocksdb::IngestExternalFileOptions*>(jhandle);
  return static_cast<jboolean>(options->allow_blocking_flush);
}
    
    
    {  // Note: we may want to access the Java callback object instance
  // across multiple method calls, so we create a global ref
  assert(jcallback_obj != nullptr);
  m_jcallback_obj = env->NewGlobalRef(jcallback_obj);
  if(jcallback_obj == nullptr) {
    // exception thrown: OutOfMemoryError
    return;
  }
}
    
      class StatisticsJni : public StatisticsImpl {
   public:
     StatisticsJni(std::shared_ptr<Statistics> stats);
     StatisticsJni(std::shared_ptr<Statistics> stats,
         const std::set<uint32_t> ignore_histograms);
     virtual bool HistEnabledForType(uint32_t type) const override;
    }
    
      bool CountingFeatures = false;
  uint32_t InputSizesPerFeature[kFeatureSetSize];
  uint32_t SmallestElementPerFeature[kFeatureSetSize];
    
    #include 'FuzzerExtFunctions.def'
    
    #include 'FuzzerIO.h'
#include 'FuzzerDefs.h'
#include 'FuzzerExtFunctions.h'
#include <algorithm>
#include <cstdarg>
#include <fstream>
#include <iterator>
#include <sys/stat.h>
#include <sys/types.h>
    
      if (FileType != FILE_TYPE_DISK) {
    CloseHandle(FileHandle);
    return false;
  }
    
    
    {    size_t BlockCoverage;
    size_t CallerCalleeCoverage;
    // Precalculated number of bits in CounterBitmap.
    size_t CounterBitmapBits;
    std::vector<uint8_t> CounterBitmap;
    ValueBitMap VPMap;
  };
    
    class MutationDispatcher {
public:
  MutationDispatcher(Random &Rand, const FuzzingOptions &Options);
  ~MutationDispatcher() {}
  /// Indicate that we are about to start a new sequence of mutations.
  void StartMutationSequence();
  /// Print the current sequence of mutations.
  void PrintMutationSequence();
  /// Indicate that the current sequence of mutations was successfull.
  void RecordSuccessfulMutationSequence();
  /// Mutates data by invoking user-provided mutator.
  size_t Mutate_Custom(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Mutates data by invoking user-provided crossover.
  size_t Mutate_CustomCrossOver(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Mutates data by shuffling bytes.
  size_t Mutate_ShuffleBytes(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Mutates data by erasing bytes.
  size_t Mutate_EraseBytes(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Mutates data by inserting a byte.
  size_t Mutate_InsertByte(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Mutates data by inserting several repeated bytes.
  size_t Mutate_InsertRepeatedBytes(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Mutates data by chanding one byte.
  size_t Mutate_ChangeByte(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Mutates data by chanding one bit.
  size_t Mutate_ChangeBit(uint8_t *Data, size_t Size, size_t MaxSize);
  /// Mutates data by copying/inserting a part of data into a different place.
  size_t Mutate_CopyPart(uint8_t *Data, size_t Size, size_t MaxSize);
    }
    
    #ifndef LLVM_FUZZER_SHA1_H
#define LLVM_FUZZER_SHA1_H
    
    #endif // D_A2_STR_H

    
      virtual void closeFile() CXX11_OVERRIDE;
    
      // bitwise OR of Flag values.
  uint8_t flags_;
    
    
    {  virtual std::unique_ptr<Command> getNextCommand() = 0;
};
    
    class BinaryStream;
    
    void AnnounceList::shuffle()
{
  for (const auto& tier : tiers_) {
    auto& urls = tier->urls;
    std::shuffle(std::begin(urls), std::end(urls),
                 *SimpleRandomizer::getInstance());
  }
}
    
    bool AppleTLSContext::tryAsFingerprint(const std::string& fingerprint)
{
  auto fp = stripWhitespace(fingerprint);
  // Verify this is a valid hex representation and normalize.
  fp = util::toHex(util::fromHex(std::begin(fp), std::end(fp)));
    }
    
      virtual bool good() const CXX11_OVERRIDE { return true; }