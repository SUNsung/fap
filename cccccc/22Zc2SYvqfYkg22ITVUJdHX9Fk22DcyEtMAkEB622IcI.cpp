
        
        class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
      // Sent when a system indicator action's state has changed. The source is the
  // Profile* that the browser action belongs to. The details are the
  // ExtensionAction* that changed.
  NOTIFICATION_EXTENSION_SYSTEM_INDICATOR_UPDATED,
    
      // Sets size to which the thumbnails should be scaled. If called after
  // StartUpdating() then some thumbnails may be still scaled to the old size
  // until they are updated.
  virtual void SetThumbnailSize(const gfx::Size& thumbnail_size) = 0;
    
    // An interface the PrintViewManager uses to notify an observer when the print
// dialog is shown. Register the observer via PrintViewManager::set_observer.
class PrintViewManagerObserver {
 public:
  // Notifies the observer that the print dialog was shown.
  virtual void OnPrintDialogShown() = 0;
    }
    
    #endif  // CHROME_BROWSER_PRINTING_PRINTING_UI_WEB_CONTENTS_OBSERVER_H_

    
    
    {  DISALLOW_COPY_AND_ASSIGN(ChromeBrowserPepperHostFactory);
};
    
    static int set_ifname(struct ifaddrs* ifaddr, int interface) {
	char buf[IFNAMSIZ] = {0};
	char* name = if_indextoname(interface, buf);
	if (name == NULL) {
		return -1;
	}
	ifaddr->ifa_name = new char[strlen(name) + 1];
	strncpy(ifaddr->ifa_name, name, strlen(name) + 1);
	return 0;
}
    
    	virtual void disconnect_from_stream() = 0;
    
    	connected = true;
	status = STATUS_CONNECTED;
    
    Ref<WebSocketPeer> LWSClient::get_peer(int p_peer_id) const {
    }
    
    void VideoPlayer::set_volume(float p_vol) {
    }
    
    	virtual bool _set(const StringName &p_name, const Variant &p_property);
	virtual bool _get(const StringName &p_name, Variant &r_property) const;
	virtual void _get_property_list(List<PropertyInfo> *p_list) const;
    
        // Returns the total number of bytes actually consumed by the decoder (which should equal the actual size of the JPEG file).
    inline int get_total_bytes_read() const { return m_total_bytes_read; }
    
  private:
    jpeg_decoder(const jpeg_decoder &);
    jpeg_decoder &operator =(const jpeg_decoder &);
    
    #endif  // STORAGE_LEVELDB_DB_LOG_FORMAT_H_

    
      // Open database.  Disable compression since it affects the creation
  // of layers and the code below is trying to test against a very
  // specific scenario.
  leveldb::DB* db;
  leveldb::Options db_options;
  db_options.create_if_missing = true;
  db_options.compression = leveldb::kNoCompression;
  ASSERT_OK(leveldb::DB::Open(db_options, dbpath, &db));
    
    void BlockBuilder::Add(const Slice& key, const Slice& value) {
  Slice last_key_piece(last_key_);
  assert(!finished_);
  assert(counter_ <= options_->block_restart_interval);
  assert(buffer_.empty() // No values yet?
         || options_->comparator->Compare(key, last_key_piece) > 0);
  size_t shared = 0;
  if (counter_ < options_->block_restart_interval) {
    // See how much sharing to do with previous string
    const size_t min_length = std::min(last_key_piece.size(), key.size());
    while ((shared < min_length) && (last_key_piece[shared] == key[shared])) {
      shared++;
    }
  } else {
    // Restart compression
    restarts_.push_back(buffer_.size());
    counter_ = 0;
  }
  const size_t non_shared = key.size() - shared;
    }
    
    TEST(FilterBlockTest, SingleChunk) {
  FilterBlockBuilder builder(&policy_);
  builder.StartBlock(100);
  builder.AddKey('foo');
  builder.AddKey('bar');
  builder.AddKey('box');
  builder.StartBlock(200);
  builder.AddKey('box');
  builder.StartBlock(300);
  builder.AddKey('hello');
  Slice block = builder.Finish();
  FilterBlockReader reader(&policy_, block);
  ASSERT_TRUE(reader.KeyMayMatch(100, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'bar'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'hello'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(100, 'missing'));
  ASSERT_TRUE(! reader.KeyMayMatch(100, 'other'));
}
    
      switch (data[n]) {
    case kNoCompression:
      if (data != buf) {
        // File implementation gave us pointer to some other data.
        // Use it directly under the assumption that it will be live
        // while the file is open.
        delete[] buf;
        result->data = Slice(data, n);
        result->heap_allocated = false;
        result->cachable = false;  // Do not double-cache
      } else {
        result->data = Slice(buf, n);
        result->heap_allocated = true;
        result->cachable = true;
      }
    }
    
    const double Histogram::kBucketLimit[kNumBuckets] = {
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 16, 18, 20, 25, 30, 35, 40, 45,
  50, 60, 70, 80, 90, 100, 120, 140, 160, 180, 200, 250, 300, 350, 400, 450,
  500, 600, 700, 800, 900, 1000, 1200, 1400, 1600, 1800, 2000, 2500, 3000,
  3500, 4000, 4500, 5000, 6000, 7000, 8000, 9000, 10000, 12000, 14000,
  16000, 18000, 20000, 25000, 30000, 35000, 40000, 45000, 50000, 60000,
  70000, 80000, 90000, 100000, 120000, 140000, 160000, 180000, 200000,
  250000, 300000, 350000, 400000, 450000, 500000, 600000, 700000, 800000,
  900000, 1000000, 1200000, 1400000, 1600000, 1800000, 2000000, 2500000,
  3000000, 3500000, 4000000, 4500000, 5000000, 6000000, 7000000, 8000000,
  9000000, 10000000, 12000000, 14000000, 16000000, 18000000, 20000000,
  25000000, 30000000, 35000000, 40000000, 45000000, 50000000, 60000000,
  70000000, 80000000, 90000000, 100000000, 120000000, 140000000, 160000000,
  180000000, 200000000, 250000000, 300000000, 350000000, 400000000,
  450000000, 500000000, 600000000, 700000000, 800000000, 900000000,
  1000000000, 1200000000, 1400000000, 1600000000, 1800000000, 2000000000,
  2500000000.0, 3000000000.0, 3500000000.0, 4000000000.0, 4500000000.0,
  5000000000.0, 6000000000.0, 7000000000.0, 8000000000.0, 9000000000.0,
  1e200,
};
    
    #ifndef STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
#define STORAGE_LEVELDB_UTIL_MUTEXLOCK_H_
    
      // Get initial measurement of the space we will be reading.
  const int64_t initial_size = Size(Key(0), Key(n));
  const int64_t initial_other_size = Size(Key(n), Key(kCount));
    
    bool InternalFilterPolicy::KeyMayMatch(const Slice& key, const Slice& f) const {
  return user_policy_->KeyMayMatch(ExtractUserKey(key), f);
}
    
    class StdoutPrinter : public WritableFile {
 public:
  virtual Status Append(const Slice& data) {
    fwrite(data.data(), 1, data.size(), stdout);
    return Status::OK();
  }
  virtual Status Close() { return Status::OK(); }
  virtual Status Flush() { return Status::OK(); }
  virtual Status Sync() { return Status::OK(); }
};
    
      // Format the header
  char buf[kHeaderSize];
  buf[4] = static_cast<char>(n & 0xff);
  buf[5] = static_cast<char>(n >> 8);
  buf[6] = static_cast<char>(t);
    
    
    {}  // namespace leveldb
    
    /// Holds a buffer that cannot be modified.
/**
 * The const_buffer class provides a safe representation of a buffer that cannot
 * be modified. It does not own the underlying data, and so is cheap to copy or
 * assign.
 *
 * @par Accessing Buffer Contents
 *
 * The contents of a buffer may be accessed using the @ref buffer_size
 * and @ref buffer_cast functions:
 *
 * @code boost::asio::const_buffer b1 = ...;
 * std::size_t s1 = boost::asio::buffer_size(b1);
 * const unsigned char* p1 = boost::asio::buffer_cast<const unsigned char*>(b1);
 * @endcode
 *
 * The boost::asio::buffer_cast function permits violations of type safety, so
 * uses of it in application code should be carefully considered.
 */
class const_buffer
{
public:
  /// Construct an empty buffer.
  const_buffer()
    : data_(0),
      size_(0)
  {
  }
    }
    
    template <typename Stream>
class buffered_stream;
    
    
    {
    {} // namespace asio
} // namespace boost
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
      // Constructor for a half fenced block.
  explicit gcc_arm_fenced_block(half_t)
  {
  }
    
    namespace boost {
namespace asio {
namespace detail {
    }
    }
    }
    
    typedef void (*Transform1d)(const double* in, int stride, double* out);
    
    // Performs in-place floating point 8x8 inverse DCT on block[0..63].
void ComputeBlockIDCTDouble(double block[64]);
    
    #include 'guetzli/gamma_correct.h'
    
      tmp0 = in[stride];
  tmp1 = kIDCTMatrix[ 1] * tmp0;
  tmp2 = kIDCTMatrix[ 9] * tmp0;
  tmp3 = kIDCTMatrix[17] * tmp0;
  tmp4 = kIDCTMatrix[25] * tmp0;
  out[0] += tmp1;
  out[1] += tmp2;
  out[2] += tmp3;
  out[3] += tmp4;
  out[4] -= tmp4;
  out[5] -= tmp3;
  out[6] -= tmp2;
  out[7] -= tmp1;
    
    
    {}  // namespace guetzli
    
    
    {}  // namespace guetzli
    
    static const int kJpegHuffmanRootTableBits = 8;
// Maximum huffman lookup table size.
// According to zlib/examples/enough.c, 758 entries are always enough for
// an alphabet of 257 symbols (256 + 1 special symbol for the all 1s code) and
// max bit length 16 if the root table has 8 bits.
static const int kJpegHuffmanLutSize = 758;
    
    // Preprocesses U and V channel for better results after downsampling.
    
    double ButteraugliScoreForQuality(double quality) {
  if (quality < kLowestQuality) quality = kLowestQuality;
  if (quality > kHighestQuality) quality = kHighestQuality;
  int index = static_cast<int>(quality);
  double mix = quality - index;
  return kScoreForQuality[index - kLowestQuality] * (1 - mix) +
      kScoreForQuality[index - kLowestQuality + 1] * mix;
}
    
        // C++ mappings of API methods
    static Persistent<v8::Function> constructor;
    static Handle<Value> Open(const Arguments& args);
    static Handle<Value> New(const Arguments& args);
    static Handle<Value> Get(const Arguments& args);
    static Handle<Value> Put(const Arguments& args);
    static Handle<Value> Delete(const Arguments& args);
    static Handle<Value> Dump(const Arguments& args);
    static Handle<Value> WriteBatch(const Arguments& args);
    static Handle<Value> CreateColumnFamily(const Arguments& args);
    static Handle<Value> CompactRange(const Arguments& args);
    static Handle<Value> Close(const Arguments& args);
    
      virtual const char* Name() const override;
    
      /// Search the list for the (index)'th item (0-based) in (list:key)
  /// A negative index indicates: 'from end-of-list'
  /// If index is within range: return true, and return the value in *result.
  /// If (index < -length OR index>=length), then index is out of range:
  ///   return false (and *result is left unchanged)
  /// May throw RedisListException
  bool Index(const std::string& key, int32_t index,
             std::string* result);
    
      // Return type, or one of the preceding special values
  unsigned int ReadPhysicalRecord(Slice* result, size_t* drop_size);
    
    
    {
    {  void ClearCallBack(const std::string& point);
  void ClearAllCallBacks();
  void EnableProcessing() {
    std::lock_guard<std::mutex> lock(mutex_);
    enabled_ = true;
  }
  void DisableProcessing() {
    std::lock_guard<std::mutex> lock(mutex_);
    enabled_ = false;
  }
  void ClearTrace() {
    std::lock_guard<std::mutex> lock(mutex_);
    cleared_points_.clear();
  }
  bool DisabledByMarker(const std::string& point,
                        std::thread::id thread_id) {
    auto marked_point_iter = marked_thread_id_.find(point);
    return marked_point_iter != marked_thread_id_.end() &&
           thread_id != marked_point_iter->second;
  }
  void Process(const std::string& point, void* cb_arg);
};
}
#endif // NDEBUG

    
    namespace rocksdb {
CompactionFilterFactoryJniCallback::CompactionFilterFactoryJniCallback(
    JNIEnv* env, jobject jcompaction_filter_factory)
    : JniCallback(env, jcompaction_filter_factory) {
  
  // Note: The name of a CompactionFilterFactory will not change during
  // it's lifetime, so we cache it in a global var
  jmethodID jname_method_id =
      AbstractCompactionFilterFactoryJni::getNameMethodId(env);
  if(jname_method_id == nullptr) {
    // exception thrown: NoSuchMethodException or OutOfMemoryError
    return;
  }
    }
    }
    
    
    { private:
    std::unique_ptr<const char[]> m_name;
    jmethodID m_jcreate_compaction_filter_methodid;
};
    
      if (jsResultStart != nullptr) {
    // update start with result
    jboolean has_exception = JNI_FALSE;
    std::unique_ptr<const char[]> result_start = JniUtil::copyString(env, jsResultStart,
        &has_exception);  // also releases jsResultStart
    if (has_exception == JNI_TRUE) {
      if (env->ExceptionCheck()) {
        env->ExceptionDescribe();  // print out exception to stderr
      }
      releaseJniEnv(attached_thread);
      return;
    }
    }
    
    template <typename T> struct jni_sig_from_cxx_t;
template <typename R, typename... Args>
struct jni_sig_from_cxx_t<R(Args...)> {
  using JniRet = typename Convert<typename std::decay<R>::type>::jniType;
  using JniSig = JniRet(typename Convert<typename std::decay<Args>::type>::jniType...);
};
    
      /**
   * The offset within the current function
   */
  int functionOffset() const noexcept {
    auto absoluteSymbol = static_cast<const char*>(functionAddress_);
    auto absoluteabsoluteProgramCounter =
        static_cast<const char*>(absoluteProgramCounter_);
    return absoluteabsoluteProgramCounter - absoluteSymbol;
  }
    
    
    {  ASSERT_TRUE(YGNodeLayoutGetHadOverflow(root));
}
    
    void Node::setDisplay(int display)
{
    YGNodeStyleSetDisplay(m_node, static_cast<YGDisplay>(display));
}
    
    
    {
    {}}
    
      bool hasOnlyOneRef() const {
    return m_refcount == 1;
  }
    
      ProgramLocation(const char* functionName, const char* fileName, int line) :
      m_functionName(functionName),
      m_fileName(fileName),
      m_lineNumber(line)
    {}
    
    #pragma once
#include <fb/assert.h>
#include <utility>
    
    #define FBASSERT(expr) FBASSERTMSGF(expr, '%s', #expr)
    
    
#define DEFINE_BOXED_PRIMITIVE(LITTLE, BIG)                          \
  struct J ## BIG : detail::JPrimitive<J ## BIG, j ## LITTLE> {      \
    static auto constexpr kJavaDescriptor = 'Ljava/lang/' #BIG ';';  \
    static auto constexpr kValueMethod = #LITTLE 'Value';            \
    j ## LITTLE LITTLE ## Value() const {                            \
      return value();                                                \
    }                                                                \
  };                                                                 \
  inline local_ref<jobject> autobox(j ## LITTLE val) {               \
    return J ## BIG::valueOf(val);                                   \
  }