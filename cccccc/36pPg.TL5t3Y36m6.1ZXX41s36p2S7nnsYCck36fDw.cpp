
        
            if (info.bytes > buf.size()) {
      llvm::dbgs() << 'AST section too small.\n';
      return false;
    }
    
    bool CacheImpl::remove(const void *Key) {
  int Ret = cache_remove(static_cast<cache_t*>(Impl), const_cast<void*>(Key));
  return Ret == 0;
}
    
    DIRECTIONAL_PREPOSITION(above)
DIRECTIONAL_PREPOSITION(after)
DIRECTIONAL_PREPOSITION(along)
DIRECTIONAL_PREPOSITION(alongside)
DIRECTIONAL_PREPOSITION(as)
DIRECTIONAL_PREPOSITION(at)
DIRECTIONAL_PREPOSITION(before)
DIRECTIONAL_PREPOSITION(below)
DIRECTIONAL_PREPOSITION(by)
DIRECTIONAL_PREPOSITION(following)
DIRECTIONAL_PREPOSITION(for)
DIRECTIONAL_PREPOSITION(from)
DIRECTIONAL_PREPOSITION(given)
DIRECTIONAL_PREPOSITION(in)
DIRECTIONAL_PREPOSITION(including)
DIRECTIONAL_PREPOSITION(inside)
DIRECTIONAL_PREPOSITION(into)
DIRECTIONAL_PREPOSITION(matching)
DIRECTIONAL_PREPOSITION(of)
DIRECTIONAL_PREPOSITION(on)
DIRECTIONAL_PREPOSITION(passing)
DIRECTIONAL_PREPOSITION(preceding)
DIRECTIONAL_PREPOSITION(since)
DIRECTIONAL_PREPOSITION(to)
DIRECTIONAL_PREPOSITION(until)
DIRECTIONAL_PREPOSITION(using)
DIRECTIONAL_PREPOSITION(via)
DIRECTIONAL_PREPOSITION(when)
PREPOSITION(with)
DIRECTIONAL_PREPOSITION(within)
    
      image_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2051) << 'Incorrect image file magic.';
  label_file.read(reinterpret_cast<char*>(&magic), 4);
  magic = swap_endian(magic);
  CHECK_EQ(magic, 2049) << 'Incorrect label file magic.';
  image_file.read(reinterpret_cast<char*>(&num_items), 4);
  num_items = swap_endian(num_items);
  label_file.read(reinterpret_cast<char*>(&num_labels), 4);
  num_labels = swap_endian(num_labels);
  CHECK_EQ(num_items, num_labels);
  image_file.read(reinterpret_cast<char*>(&rows), 4);
  rows = swap_endian(rows);
  image_file.read(reinterpret_cast<char*>(&cols), 4);
  cols = swap_endian(cols);
    
    namespace caffe {
    }
    
      // Returns the mode: running on CPU or GPU.
  inline static Brew mode() { return Get().mode_; }
  // The setters for the variables
  // Sets the mode. It is recommended that you don't change the mode halfway
  // into the program since that may cause allocation of pinned memory being
  // freed in a non-pinned way, which may cause problems - I haven't verified
  // it personally but better to note it here in the header file.
  inline static void set_mode(Brew mode) { Get().mode_ = mode; }
  // Sets the random seed of both boost and curand
  static void set_random_seed(const unsigned int seed);
  // Sets the device. Since we have cublas and curand stuff, set device also
  // requires us to reset those values.
  static void SetDevice(const int device_id);
  // Prints the current GPU status.
  static void DeviceQuery();
  // Check if specified device is available
  static bool CheckDevice(const int device_id);
  // Search from start_id to the highest possible device ordinal,
  // return the ordinal of the first available device.
  static int FindDevice(const int start_id = 0);
  // Parallel training
  inline static int solver_count() { return Get().solver_count_; }
  inline static void set_solver_count(int val) { Get().solver_count_ = val; }
  inline static int solver_rank() { return Get().solver_rank_; }
  inline static void set_solver_rank(int val) { Get().solver_rank_ = val; }
  inline static bool multiprocess() { return Get().multiprocess_; }
  inline static void set_multiprocess(bool val) { Get().multiprocess_ = val; }
  inline static bool root_solver() { return Get().solver_rank_ == 0; }
    
      // Get a layer using a LayerParameter.
  static shared_ptr<Layer<Dtype> > CreateLayer(const LayerParameter& param) {
    if (Caffe::root_solver()) {
      LOG(INFO) << 'Creating layer ' << param.name();
    }
    const string& type = param.type();
    CreatorRegistry& registry = Registry();
    CHECK_EQ(registry.count(type), 1) << 'Unknown layer type: ' << type
        << ' (known types: ' << LayerTypeListString() << ')';
    return registry[type](param);
  }
    
    
    {  /// Whether to ignore instances with a certain label.
  bool has_ignore_label_;
  /// The label indicating that an instance should be ignored.
  int ignore_label_;
  /// Keeps counts of the number of samples per class.
  Blob<Dtype> nums_buffer_;
};
    
    /**
 * @brief Provides base for data layers that feed blobs to the Net.
 *
 * TODO(dox): thorough documentation for Forward and proto params.
 */
template <typename Dtype>
class BaseDataLayer : public Layer<Dtype> {
 public:
  explicit BaseDataLayer(const LayerParameter& param);
  // LayerSetUp: implements common data layer setup functionality, and calls
  // DataLayerSetUp to do special data layer setup for individual layer types.
  // This method may not be overridden except by the BasePrefetchingDataLayer.
  virtual void LayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top);
  virtual void DataLayerSetUp(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {}
  // Data layers have no bottoms, so reshaping is trivial.
  virtual void Reshape(const vector<Blob<Dtype>*>& bottom,
      const vector<Blob<Dtype>*>& top) {}
    }
    
    #endif  // CAFFE_BIAS_LAYER_HPP_

    
    
    {  size_t *workspace_fwd_sizes_;
  size_t *workspace_bwd_data_sizes_;
  size_t *workspace_bwd_filter_sizes_;
  size_t workspaceSizeInBytes;  // size of underlying storage
  void *workspaceData;  // underlying storage
  void **workspace;  // aliases into workspaceData
};
#endif
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    #include 'caffe/blob.hpp'
#include 'caffe/layer.hpp'
#include 'caffe/proto/caffe.pb.h'
    
    class CorruptionTest {
 public:
  test::ErrorEnv env_;
  std::string dbname_;
  Cache* tiny_cache_;
  Options options_;
  DB* db_;
    }
    
      // Implementations of the DB interface
  virtual Status Put(const WriteOptions&, const Slice& key, const Slice& value);
  virtual Status Delete(const WriteOptions&, const Slice& key);
  virtual Status Write(const WriteOptions& options, WriteBatch* updates);
  virtual Status Get(const ReadOptions& options,
                     const Slice& key,
                     std::string* value);
  virtual Iterator* NewIterator(const ReadOptions&);
  virtual const Snapshot* GetSnapshot();
  virtual void ReleaseSnapshot(const Snapshot* snapshot);
  virtual bool GetProperty(const Slice& property, std::string* value);
  virtual void GetApproximateSizes(const Range* range, int n, uint64_t* sizes);
  virtual void CompactRange(const Slice* begin, const Slice* end);
    
    inline int InternalKeyComparator::Compare(
    const InternalKey& a, const InternalKey& b) const {
  return Compare(a.Encode(), b.Encode());
}
    
    
    {}  // namespace leveldb

    
    // Return the name of the info log file for 'dbname'.
std::string InfoLogFileName(const std::string& dbname);
    
     private:
  WritableFile* dest_;
  int block_offset_;       // Current offset in block
    
    // Simple test that does single-threaded testing of the ConcurrentTest
// scaffolding.
TEST(SkipTest, ConcurrentWithoutThreads) {
  ConcurrentTest test;
  Random rnd(test::RandomSeed());
  for (int i = 0; i < 10000; i++) {
    test.ReadStep(&rnd);
    test.WriteStep(&rnd);
  }
}
    
    int32_t ScriptSet::hashCode() const {
    int32_t hash = 0;
    for (int32_t i=0; i<UPRV_LENGTHOF(bits); i++) {
        hash ^= bits[i];
    }
    return hash;
}
    
    U_CAPI int32_t U_EXPORT2
uhash_hashScriptSet(const UElement key);
    
            // Create a TimeZoneRule for daylight saving time
        timeRuleType = (startTimeMode == STANDARD_TIME) ? DateTimeRule::STANDARD_TIME :
            ((startTimeMode == UTC_TIME) ? DateTimeRule::UTC_TIME : DateTimeRule::WALL_TIME);
        switch (startMode) {
        case DOM_MODE:
            dtRule = new DateTimeRule(startMonth, startDay, startTime, timeRuleType);
            break;
        case DOW_IN_MONTH_MODE:
            dtRule = new DateTimeRule(startMonth, startDay, startDayOfWeek, startTime, timeRuleType);
            break;
        case DOW_GE_DOM_MODE:
            dtRule = new DateTimeRule(startMonth, startDay, startDayOfWeek, true, startTime, timeRuleType);
            break;
        case DOW_LE_DOM_MODE:
            dtRule = new DateTimeRule(startMonth, startDay, startDayOfWeek, false, startTime, timeRuleType);
            break;
        default:
            status = U_INVALID_STATE_ERROR;
            return;
        }
        // Check for Null pointer
        if (dtRule == NULL) {
            status = U_MEMORY_ALLOCATION_ERROR;
            return;
        }
        // For now, use ID + '(DST)' as the name
        dstRule = new AnnualTimeZoneRule(tzid+UnicodeString(DST_STR), getRawOffset(), getDSTSavings(),
            dtRule, startYear, AnnualTimeZoneRule::MAX_YEAR);
        
        // Check for Null pointer
        if (dstRule == NULL) {
            status = U_MEMORY_ALLOCATION_ERROR;
            deleteTransitionRules();
            return;
        }
 
        // Calculate the first DST start time
        dstRule->getFirstStart(getRawOffset(), 0, firstDstStart);
    
    #include 'unicode/udat.h'
    
    /**
 * Implement UnicodeMatcher
 */
UMatchDegree StringMatcher::matches(const Replaceable& text,
                                    int32_t& offset,
                                    int32_t limit,
                                    UBool incremental) {
    int32_t i;
    int32_t cursor = offset;
    if (limit < cursor) {
        // Match in the reverse direction
        for (i=pattern.length()-1; i>=0; --i) {
            UChar keyChar = pattern.charAt(i);
            UnicodeMatcher* subm = data->lookupMatcher(keyChar);
            if (subm == 0) {
                if (cursor > limit &&
                    keyChar == text.charAt(cursor)) {
                    --cursor;
                } else {
                    return U_MISMATCH;
                }
            } else {
                UMatchDegree m =
                    subm->matches(text, cursor, limit, incremental);
                if (m != U_MATCH) {
                    return m;
                }
            }
        }
        // Record the match position, but adjust for a normal
        // forward start, limit, and only if a prior match does not
        // exist -- we want the rightmost match.
        if (matchStart < 0) {
            matchStart = cursor+1;
            matchLimit = offset+1;
        }
    } else {
        for (i=0; i<pattern.length(); ++i) {
            if (incremental && cursor == limit) {
                // We've reached the context limit without a mismatch and
                // without completing our match.
                return U_PARTIAL_MATCH;
            }
            UChar keyChar = pattern.charAt(i);
            UnicodeMatcher* subm = data->lookupMatcher(keyChar);
            if (subm == 0) {
                // Don't need the cursor < limit check if
                // incremental is TRUE (because it's done above); do need
                // it otherwise.
                if (cursor < limit &&
                    keyChar == text.charAt(cursor)) {
                    ++cursor;
                } else {
                    return U_MISMATCH;
                }
            } else {
                UMatchDegree m =
                    subm->matches(text, cursor, limit, incremental);
                if (m != U_MATCH) {
                    return m;
                }
            }
        }
        // Record the match position
        matchStart = offset;
        matchLimit = cursor;
    }
    }
    
    /**
 * An object that matches a fixed input string, implementing the
 * UnicodeMatcher API.  This object also implements the
 * UnicodeReplacer API, allowing it to emit the matched text as
 * output.  Since the match text may contain flexible match elements,
 * such as UnicodeSets, the emitted text is not the match pattern, but
 * instead a substring of the actual matched text.  Following
 * convention, the output text is the leftmost match seen up to this
 * point.
 *
 * A StringMatcher may represent a segment, in which case it has a
 * positive segment number.  This affects how the matcher converts
 * itself to a pattern but does not otherwise affect its function.
 *
 * A StringMatcher that is not a segment should not be used as a
 * UnicodeReplacer.
 */
class StringMatcher : public UnicodeFunctor, public UnicodeMatcher, public UnicodeReplacer {
    }
    
                    // Insert any accumulated straight text.
                if (buf.length() > 0) {
                    text.handleReplaceBetween(destLimit, destLimit, buf);
                    destLimit += buf.length();
                    buf.truncate(0);
                }
    
    BENCHMARK(dev_null_log_overhead, iter) {
  auto prev = FLAGS_minloglevel;
  FLAGS_minloglevel = 2;
    }
    
    #include <boost/filesystem.hpp>
#include <folly/Conv.h>
#include <folly/Format.h>
#include <folly/Random.h>
#include <folly/String.h>
#include <folly/Subprocess.h>
#include <folly/lang/Bits.h>
#include <folly/portability/GTest.h>
#include <folly/portability/Unistd.h>
#include <folly/tracing/StaticTracepoint.h>
#include <folly/tracing/test/StaticTracepointTestModule.h>
    
    exception_wrapper exception_wrapper::from_exception_ptr(
    std::exception_ptr const& ptr) noexcept {
  if (!ptr) {
    return exception_wrapper();
  }
  try {
    std::rethrow_exception(ptr);
  } catch (std::exception& e) {
    return exception_wrapper(std::current_exception(), e);
  } catch (...) {
    return exception_wrapper(std::current_exception());
  }
}
    
    template <class RNG, typename = void>
struct StateSize {
  // A sane default.
  using type = std::integral_constant<size_t, 512>;
};
    
    #include <type_traits>
    
    /**
 * Get a codec with the given options and compression level.
 *
 * If the windowSize is 15 and the format is Format::ZLIB or Format::GZIP, then
 * the type of the codec will be CodecType::ZLIB or CodecType::GZIP
 * respectively. Otherwise, the type will be CodecType::USER_DEFINED.
 *
 * Automatic uncompression is not supported with USER_DEFINED codecs.
 *
 * Levels supported: 0 = no compression, 1 = fast, ..., 9 = best; default = 6
 */
std::unique_ptr<Codec> getCodec(
    Options options = Options(),
    int level = COMPRESSION_LEVEL_DEFAULT);
std::unique_ptr<StreamCodec> getStreamCodec(
    Options options = Options(),
    int level = COMPRESSION_LEVEL_DEFAULT);
    
    struct counted_shared_tag {};
template <template <typename> class Atom = std::atomic>
struct intrusive_shared_count {
  intrusive_shared_count() {
    counts.store(0);
  }
  void add_ref(uint64_t count = 1) {
    counts.fetch_add(count);
  }
    }
    
      static void child() noexcept {
    auto& tasks = instance().tasks;
    for (auto& task : tasks) {
      task.child();
    }
    instance().tasksLock.unlock();
  }